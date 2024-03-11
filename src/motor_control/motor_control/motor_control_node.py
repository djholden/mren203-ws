#! /usr/bin/env python3
from .Motors import MotorHandler
from math import sqrt

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy
from geometry_msgs.msg import TwistStamped

MAX_VOLT_SPEED = 150    # PWM Duty Cycle
MAX_PID_SPEED = 0.50    # Meters per second

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
        
        # Velocity Publisher
        self.publisher_ = self.create_publisher(TwistStamped, 'motors/vel', 10)


        self.timer_period = 0.01
        self.timer = self.create_timer(self.timer_period, self.callaback_loop)

        self.time_ms = 0
        self.t_last = 0 # for buttons

        # Controls
        self.isVoltageMode = True
        self.left_cmd = 0
        self.right_cmd = 0


        self.motors = MotorHandler()

    def callaback_loop(self):
        
        # Update the PID clock
        self.time_ms = self.get_clock().now().nanoseconds*(1e-6)
        if not self.isVoltageMode:
            self.motors.PID_mode(self.left_cmd, self.right_cmd, self.time_ms)
        # self.motors.PID_mode(0, 0, self.time_ms)
        # print("LW: " + str(self.left_cmd) + " | RW:" + str(self.right_cmd) + "\n")

        # Create twist messages
        time_now = self.get_clock().now().to_msg()
        left_msg = TwistStamped()
        left_msg.header.stamp = time_now
        left_msg.header.frame_id = "left_motor"
        # left_msg.twist.linear.x = self.motors.left_wheel.speed

        right_msg = TwistStamped()
        right_msg.header.stamp = time_now
        right_msg.header.frame_id = "right_motor"
        # right_msg.twist.linear.x = self.motors.right_wheel.speed

        # Publish messages
        self.publisher_.publish(left_msg)
        self.publisher_.publish(right_msg)


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
            if self.isVoltageMode:
                print("Switched to PID Mode")
                self.isVoltageMode = False
            else:
                print("Switched to Voltage Mode")
                self.isVoltageMode = True
            self.t_last = self.time_ms


        # Handle the control mode
        if self.isVoltageMode:
            # Joystick Controller
            left_wheel = left_y_axis*(MAX_VOLT_SPEED*sqrt(2)/2) - left_x_axis*(MAX_VOLT_SPEED*sqrt(2)/2)
            right_wheel = left_y_axis*(MAX_VOLT_SPEED*sqrt(2)/2) + left_x_axis*(MAX_VOLT_SPEED*sqrt(2)/2)
            self.motors.voltage_mode(left_wheel, right_wheel)
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

