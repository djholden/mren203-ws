import rclpy
from rclpy.node import Node

# Interfaces
from steve_msgs.msg import SensorData, ControlUI, SetPoints
from std_msgs.msg import Header, Bool, Int16

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

        # Button Subscribers
        self.e_sub = self.create_subscription(Bool, 'e_stop', self.e_callback, 1)
        self.auto_sub = self.create_subscription(Bool, 'auto_mode', self.auto_callback, 1)
        self.poi_sub = self.create_subscription(Bool, 'poi', self.poi_callback, 1)

        # Loop Timer
        self.sensor_timer = self.create_timer(1/SENSOR_FREQ, self.main_callback)

        self.ser = SerialHandler()
        self.time_ms = 0

    def sp_callback(self, sp_msg):
        # Setpoints for Hazards
        self.temp_val = sp_msg.temp_val
        self.tvok_val = sp_msg.tvok_val
        self.co2_val = sp_msg.co2_val
        self.h2 = sp_msg.h2_val

    def e_callback(self, msg):
        if (bool(msg.data)):
            self.e_stop = True

    def auto_callback(self, msg):
        if (bool(msg.data)):
            self.auto_mode = self.toggle_value(self.auto_mode)

    def poi_callback(self, msg):
        if (bool(msg.data)):
            self.new_poi = self.toggle_value(self.new_poi)

    def main_callback(self):
        # Read from arduino
        ser_data = self.ser.rx()

        # Set State Machine Values
        # Hazards
        self.temp = float(ser_data['temp'])
        self.h2 = float(ser_data['humidity'])
        self.co2 = float(ser_data['CO2'])
        self.tvok = float(ser_data['TVOC'])

        # Range Sensors
        self.ir_left = float(ser_data['left range'])
        self.ir_right = float(ser_data['right range'])
        self.ir_center = float(ser_data['front range'])


        # Create Sensor Message
        msg = SensorData()

        # Header
        # header = Header()
        # header.stamp = self.get_clock().now().to_msg()
        # msg.header = header

        # Hazards
        msg.temp = self.temp
        msg.h2 = self.h2
        msg.co2 = self.co2
        msg.tvok = self.tvok

        # Accelerometer
        msg.ax = float(ser_data['ax'])
        msg.ay = float(ser_data['ay'])
        msg.az = float(ser_data['az'])
        msg.ox = float(ser_data['ox'])
        msg.oy = float(ser_data['oy'])
        msg.oz = float(ser_data['oz'])

        # Range Sensors
        msg.ir_left = self.ir_left
        msg.ir_right = self.ir_right
        msg.ir_center = self.ir_center

        # Do some checks
        # Check ir sensor for obstacles
        self.ir_sensor_check()

        # Create UI message
        ui_msg = ControlUI()

        ui_msg.e_stop = self.e_stop
        ui_msg.auto_mode = self.auto_mode

        # Run the state machine
        self.check_state()
        state_msg = Int16()
        state_msg.data = self.current_state

        # Publish
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