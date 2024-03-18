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
        # Read from arduino


        # Format Ros2 Message
        msg = SensorData()

        # Header
        self.time_ms = self.get_clock().now().nanoseconds*(1e-6)
        header = Header()
        header.stamp = self.time_ms
        msg.header = header

        # Hazards
        msg.temp = 0
        msg.h2 = 0
        msg.co2 = 0
        msg.tvok = 0

        # Range Sensors
        msg.ir_left = 0
        msg.ir_right = 0
        msg.ir_center = 0

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