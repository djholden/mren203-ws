import rclpy
from rclpy.node import Node

from serial.serialutil import SerialException

# Interfaces
from steve_msgs.msg import SensorData, ControlUI, SetPoints
from std_msgs.msg import Header, Bool, Int16
from sensor_msgs.msg import Imu
from rosgraph_msgs.msg import Clock

# Custom Imports
from .SerialHandler import SerialHandler
from .StateMachine import StateMachine

SENSOR_FREQ = 500

class SteveUI(Node, StateMachine):

    def __init__(self):
        super().__init__('steve_ui')

        #Setpoint subsciber
        self.sp_sub = self.create_subscription(
            SetPoints,
            'setpoints',
            self.sp_callback,
            10
        )

        #Sensor data publisher
        self.sensor_pub = self.create_publisher(
            SensorData,
            'sensor_data',
            10
        )

        #Sensor data publisher
        self.state_pub = self.create_publisher(
            Int16,
            'current_state',
            10
        )

        #Imu data publisher
        self.imu_pub = self.create_publisher(
            Imu,
            'imu/data',
            10
        )

        #Imu data publisher
        self.clk_pub = self.create_publisher(
            Clock,
            'clock',
            10
        )

        # E_Stop Publisher
        self.e_pub_ = self.create_publisher(
            Bool,
            "e_stop",
            10
        )

        # Auto Mode Publisher
        self.am_pub_ = self.create_publisher(
            Int16,
            "is_auto",
            10
        )

        # Button Subscribers
        self.e_sub = self.create_subscription(Bool, 'e_stop', self.e_callback, 10)
        self.auto_sub = self.create_subscription(Bool, 'auto_mode', self.auto_callback, 10)
        self.poi_sub = self.create_subscription(Bool, 'poi', self.poi_callback, 10)

        # Loop Timer
        self.sensor_timer = self.create_timer(1/SENSOR_FREQ, self.main_callback)

        self.ser = SerialHandler()
        self.fsm = StateMachine()
        self.time_ms = 0

    def sp_callback(self, sp_msg):
        # Setpoints for Hazards
        self.fsm.temp_val = sp_msg.temp_val
        self.fsm.tvok_val = sp_msg.tvok_val
        self.fsm.co2_val = sp_msg.co2_val
        self.fsm.h2_val = sp_msg.h2_val

    def e_callback(self, msg):
        if (bool(msg.data)):
            self.fsm.e_stop = True

    def auto_callback(self, msg):
        if (bool(msg.data)):
            self.fsm.auto_mode = self.fsm.toggle_value(self.fsm.auto_mode)

    def poi_callback(self, msg):
        if (bool(msg.data)):
            self.fsm.new_poi = self.fsm.toggle_value(self.fsm.new_poi)

    def main_callback(self):
        # Read from arduino
        try:
            ser_data = self.ser.rx()

            # Set State Machine Values
            # Hazards
            self.fsm.temp = float(ser_data['temp'])
            self.fsm.h2 = float(ser_data['humidity'])
            self.fsm.co2 = float(ser_data['CO2'])
            self.fsm.tvok = float(ser_data['TVOC'])

            # Range Sensors
            self.fsm.ir_left = float(ser_data['left range'])
            self.fsm.ir_right = float(ser_data['right range'])
            self.fsm.ir_center = float(ser_data['front range'])

            # Accelerometer
            self.fsm.accel[0] = float(ser_data['ax'])
            self.fsm.accel[1] = float(ser_data['ay'])
            self.fsm.accel[2] = float(ser_data['az'])
            self.fsm.omega[0] = float(ser_data['ox'])
            self.fsm.omega[1] = float(ser_data['oy'])
            self.fsm.omega[2] = float(ser_data['oz'])
        except SerialException:
            self.get_logger().debug('No serial port is connected. Try setting a new port or give the port ')

        except ValueError:
            pass
        

        # Create Sensor Message
        msg = SensorData()

        # Header
        # header = Header()
        # header.stamp = self.get_clock().now().to_msg()
        # msg.header = header

        # Hazards
        msg.temp = self.fsm.temp
        msg.h2 = self.fsm.h2
        msg.co2 = self.fsm.co2
        msg.tvok = self.fsm.tvok

        # Range Sensors
        msg.ir_left = self.fsm.ir_left
        msg.ir_right = self.fsm.ir_right
        msg.ir_center = self.fsm.ir_center

        # Do some checks
        # Check ir sensor for obstacles
        self.fsm.ir_sensor_check()

        # Create UI message
        # ui_msg = ControlUI()
        # ui_msg.e_stop = self.fsm.e_stop
        # ui_msg.auto_mode = self.fsm.auto_mode

        # Buttons
        # e_stop_msg = Bool()
        # e_stop_msg.data = self.fsm.e_stop
        # auto_msg = Bool().data = self.fsm.auto_mode
        # poi_msg = Bool()s.data = self.fsm.new_poi

        # Run the state machine
        self.fsm.t_now = self.get_clock().now().nanoseconds*(1e-6)
        self.fsm.check_state()
        self.fsm.calculate_imu()
        state_msg = Int16()
        state_msg.data = self.fsm.current_state
        am_msg = Int16()
        am_msg.data = int(self.fsm.auto_mode)
        e_msg = Bool()
        e_msg.data = self.fsm.e_stop

        # Create IMU Message
        imu_msg = Imu()
        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.orientation.x = self.fsm.quatr[0]
        imu_msg.orientation.y = self.fsm.quatr[1]
        imu_msg.orientation.z = self.fsm.quatr[2]
        imu_msg.orientation.w = self.fsm.quatr[3]
        imu_msg.angular_velocity.x = self.fsm.omega[0]
        imu_msg.angular_velocity.y = self.fsm.omega[1]
        imu_msg.angular_velocity.z = self.fsm.omega[2]
        imu_msg.linear_acceleration.x = self.fsm.accel[0]
        imu_msg.linear_acceleration.y = self.fsm.accel[1]
        imu_msg.linear_acceleration.z = self.fsm.accel[2]

        # Clock Message
        clk_msg = Clock()
        clk_msg.clock.sec = self.get_clock().now().to_msg().sec
        clk_msg.clock.nanosec = self.get_clock().now().to_msg().nanosec

        # Publish
        self.e_pub_.publish(e_msg)
        self.am_pub_.publish(am_msg)
        self.clk_pub.publish(clk_msg)
        self.imu_pub.publish(imu_msg)
        self.state_pub.publish(state_msg)
        self.sensor_pub.publish(msg)



def main(args=None):
    rclpy.init(args=args)

    node = SteveUI()

    rclpy.spin(node)

    node.ser.close()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()