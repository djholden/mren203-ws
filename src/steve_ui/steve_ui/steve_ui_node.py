import rclpy
from rclpy.node import Node

# Interfaces
from steve_msgs.msg import SensorData, ControlUI, SetPoints
from std_msgs.msg import Header

# Custom Imports
from .SerialHandler import SerialHandler

SENSOR_FREQ = 1


class SteveUI(Node):

    def __init__(self):
        super().__init__('steve_ui')

        self.sensor_pub_ = self.create_publisher(SensorData, '/sensor_data', 10)


        self.sensor_timer = self.create_timer(1/SENSOR_FREQ, self.sensor_callback)

        self.time_ms = 0

        self.ser = SerialHandler()

    def sensor_callback(self):
        # Format Ros2 Message
        msg = SensorData()

        serial_message = self.ser.rx()

        # Header
        self.time_ms = self.get_clock().now().nanoseconds*(1e-6)
        header = Header()
        header.stamp = self.time_ms
        msg.header = header

        # Hazards
        msg.temp = serial_message[0]
        msg.co2 = serial_message[2]
        msg.tvoc = serial_message[3]

        # humidity
        msg.humidity = serial_message[1]

        # Range Sensors
        msg.ir_center = serial_message[4]
        msg.ir_right = serial_message[5]
        msg.ir_left = serial_message[6]

        # Velocities
        msg.left_vel = 0
        msg.right_vel = 0
        msg.avg_vel = 0
        msg.fwd_vel = 0
        msg.ang_vel = 0

        self.sensor_pub_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    node = SteveUI()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()