#! /usr/bin/env python3
from .Motors import MotorHandler
from math import sqrt

import rclpy
from rclpy.node import Node

from tf2_ros import TransformBroadcaster, StaticTransformBroadcaster

from scipy.spatial.transform import Rotation

# Message Imports
from sensor_msgs.msg import Joy, JointState
from geometry_msgs.msg import TwistStamped, TwistWithCovariance, PoseWithCovariance, Pose, Quaternion, Twist, TransformStamped
from nav_msgs.msg import Odometry
from steve_msgs.msg import ControlUI, SetPoints, MotorData

MAX_VOLT_SPEED = 150    # PWM Duty Cycle
MAX_PID_SPEED = 0.50    # Meters per second

# def quaternion_from_euler(ai, aj, ak):
#     ai /= 2.0
#     aj /= 2.0
#     ak /= 2.0
#     ci = math.cos(ai)
#     si = math.sin(ai)
#     cj = math.cos(aj)
#     sj = math.sin(aj)
#     ck = math.cos(ak)
#     sk = math.sin(ak)
#     cc = ci*ck
#     cs = ci*sk
#     sc = si*ck
#     ss = si*sk

#     q = np.empty((4, ))
#     q[0] = cj*sc - sj*cs
#     q[1] = cj*ss + sj*cc
#     q[2] = cj*cs - sj*sc
#     q[3] = cj*cc + sj*ss

#     return q


class MotorSubscriber(Node):

    def __init__(self):
        super().__init__('motor_subscriber')

        # Joystick Subscriber
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.callaback,
            10)
        self.subscription  # prevent unused variable warning

        # UI Subscriber
        self.ui_sub = self.create_subscription(
            ControlUI,
            'ui',
            self.ui_callback,
            10
        )

        # Setpoint Subscriber
        self.sp_sub = self.create_subscription(
            SetPoints,
            "setpoints",
            self.sp_callback,
            10
        )

        # MotorData Publisher
        self.md_pub_ = self.create_publisher(
            MotorData,
            "motor_data",
            10
        )

        # JointState Publisher
        self.js_pub_ = self.create_publisher(
            JointState,
            "joint_states",
            10
        )

        # TF Publisher
        self.tf_broadcaster = TransformBroadcaster(self)
        self.tf_static_broadcaster = StaticTransformBroadcaster(self)
        
        # Velocity Publisher
        # self.publisher_ = self.create_publisher(TwistStamped, 'motors/vel', 10)

        # Odometry Publisher
        self.odom_pub_ = self.create_publisher(Odometry, '/odom', 10)

        # Create Parameters
        self.declare_parameter("Kp", 10.0)
        self.declare_parameter("Ki", 10.0)

        self.timer_period = 0.01
        self.timer = self.create_timer(self.timer_period, self.callaback_loop)

        self.time_ms = 0
        self.t_last = 0 # for buttons

        # Transform from laser to odom (once)
        tf_laser = TransformStamped()
        tf_laser.header.stamp = self.get_clock().now().to_msg()
        tf_laser.header.frame_id = 'odom'
        tf_laser.child_frame_id = 'laser'
        # ADD THE ACTUAL TRANSFORMS FROM ODOM TO LASER 
        #self.tf_static_broadcaster.sendTransform(tf_laser)

        # Controls
        self.isVoltageMode = True
        self.left_cmd = 0
        self.right_cmd = 0
        self.isStopped = False

        self.kp_param = 0
        self.ki_param = 0
        self.pwm = 100

        self.motors = MotorHandler()

    def switch_cmd_mode(self):
        if self.isVoltageMode:
            print("Switched to PID Mode")
            # Set errors to zero
            self.motors.left_wheel.error = 0
            self.motors.left_wheel.error_int = 0
            self.motors.right_wheel.error = 0
            self.motors.right_wheel.error_int = 0

            self.isVoltageMode = False
        else:
            print("Switched to Voltage Mode")
            self.isVoltageMode = True


    def sp_callback(self, sp_msg):
        # PID Values
        self.kp = sp_msg.kp_val
        self.ki = sp_msg.ki_val
        self.pwm = sp_msg.pwm_val


    def ui_callback(self, ui_msg):
        # switch
        sw_cmd_mode = ui_msg.cmd_mode
        sw_auto_mode = ui_msg.auto_mode
        new_poi = ui_msg.new_poi
        e_stop = ui_msg.e_stop

        # Commands
        fwd_cmd = ui_msg.fwd_cmd
        yaw_cmd = ui_msg.ang_cmd

        # Handle E Stop First!!!
        if e_stop or self.isStopped:
            self.isStopped = True
            self.motors.voltage_mode(0, 0, self.time_ms)

        # Handle Switching CMD Modes
        if sw_cmd_mode:
            self.switch_cmd_mode()

        # Move with UI
        if fwd_cmd > 0:
            self.left_cmd += 0.1
            self.right_cmd += 0.1
        elif fwd_cmd < 0:
            self.left_cmd -= 0.1
            self.right_cmd -= 0.1
        
        if yaw_cmd > 0: 
            self.left_cmd += 0.1
            self.right_cmd -= 0.1
        elif yaw_cmd < 0:
            self.left_cmd -= 0.1
            self.right_cmd += 0.1



    def callaback_loop(self):
        self.kp_param = self.get_parameter('Kp').get_parameter_value().double_value
        self.ki_param = self.get_parameter('Ki').get_parameter_value().double_value
        
        # Update the PID clock
        self.time_ms = self.get_clock().now().nanoseconds*(1e-6)
        if not self.isVoltageMode:
            # self.motors.PID_mode(self.left_cmd, self.right_cmd, self.time_ms)
            self.motors.PID_mode(self.left_cmd, self.right_cmd, self.time_ms, kp=self.kp_param, ki=self.ki_param, pwm=self.pwm)
        # self.motors.PID_mode(0, 0, self.time_ms)
        # print("LW: " + str(self.left_cmd) + " | RW:" + str(self.right_cmd) + "\n")

        pose, twist = self.motors.calculate_odom(self.time_ms)

        # Create odom message with proper frame ids
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = "odom"
        odom_msg.child_frame_id = "map"

        # Convert from Euler to Quanternion (Pose)
        pose_rot = Rotation.from_euler('xyz', pose["rpy"]).as_quat()

        # Create Pose message
        pose_m = Pose()
        pose_m.position.x = pose["xyz"][0]
        pose_m.position.y = pose["xyz"][1]
        pose_m.position.z = pose["xyz"][2]
        pose_m.orientation.x = pose_rot[0]
        pose_m.orientation.y = pose_rot[1]
        pose_m.orientation.z = pose_rot[2]
        pose_m.orientation.w = pose_rot[3]
        pose_msg = PoseWithCovariance()
        pose_msg.pose = pose_m

        # Create Twist Message
        twist_m = Twist()
        twist_m.linear.x = twist["xyz"][0]
        twist_m.angular.z = twist["rpy"][2]
        twist_msg = TwistWithCovariance()
        twist_msg.twist = twist_m

        # Add Pose and Twist to Odom message
        odom_msg.pose = pose_msg
        odom_msg.twist = twist_msg

        # Handle Publishing the Motor Data
        md_msg = MotorData()

        # Handle commands (not sure if math is right, might need to use track length)
        md_msg.fwd_cmd = (self.left_cmd + self.right_cmd)/2
        md_msg.ang_cmd = (self.right_cmd - self.left_cmd)/2

        # Actual wheel velocities
        md_msg.left_vel = self.motors.left_wheel.speed*1.0
        md_msg.right_vel = self.motors.right_wheel.speed*1.0
        md_msg.fwd_vel = twist["xyz"][0]
        md_msg.ang_vel = twist["rpy"][2]

        # Joint State Message
        # js_msg = JointState()
        # js_msg.header.stamp = self.time_ms
        # js_msg.name = ["left_wheel_joint", "right_wheel_joint"]
        # js_msg.velocity = [self.motors.left_wheel.speed, self.motors.right_wheel.speed]

        # Do transform from odom to map
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'
        t.child_frame_id = 'odom'

        t.transform.translation.x = pose["xyz"][0]
        t.transform.translation.y = pose["xyz"][1]
        t.transform.translation.z = pose["xyz"][2]

        t.transform.rotation.x = pose_rot[0]
        t.transform.rotation.y = pose_rot[1]
        t.transform.rotation.z = pose_rot[2]
        t.transform.rotation.w = pose_rot[3]

        # Publish messages
        # self.js_pub_.publish(js_msg)
        # self.tf_broadcaster.sendTransform(t)
        self.md_pub_.publish(md_msg)
        self.odom_pub_.publish(odom_msg)


    def callaback(self, msg):

        # Receive joystick data (y_axis -> +UP, x_axis -> +LEFT)
        left_x_axis = msg.axes[0]
        left_y_axis = msg.axes[1]
        right_x_axis = msg.axes[3]
        right_y_axis = msg.axes[4]
        left_right_axis = msg.axes[6]
        up_down_axis = msg.axes[7]
        a_btn = msg.buttons[0]
        b_btn = msg.buttons[1]
        x_btn = msg.buttons[2]
        y_btn = msg.buttons[3]

        # Toggle for Voltage and PID
        if y_btn > 0:
            self.switch_cmd_mode()
            self.t_last = self.time_ms

        # Handle the control mode
        if self.isVoltageMode:
            # Joystick Controller
            left_wheel = left_y_axis*(MAX_VOLT_SPEED*sqrt(2)/2) - left_x_axis*(MAX_VOLT_SPEED*sqrt(2)/2)
            right_wheel = left_y_axis*(MAX_VOLT_SPEED*sqrt(2)/2) + left_x_axis*(MAX_VOLT_SPEED*sqrt(2)/2)
            self.motors.voltage_mode(left_wheel, right_wheel, self.time_ms)
        else:
            self.left_cmd = left_y_axis*(MAX_PID_SPEED*sqrt(2)/2) - left_x_axis*(MAX_PID_SPEED*sqrt(2)/2)
            self.right_cmd = left_y_axis*(MAX_PID_SPEED*sqrt(2)/2) + left_x_axis*(MAX_PID_SPEED*sqrt(2)/2)
            
        if (a_btn > 0):
            self.motors.print_speed()

        #self.get_logger().info('Time: {} Left Cmd: {} & Right Cmd: {}'.format(self.time_ms, left_wheel, right_wheel))



def main(args=None):
    rclpy.init(args=args)

    motor_node = MotorSubscriber()

    rclpy.spin(motor_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    motor_node.motors.shutdown()
    motor_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

