import rclpy
from rclpy.node import Node

from sensor_msgs.msg import JointState


class JSTest(Node):

    def __init__(self):
        super().__init__('js_test')
        self.publisher_ = self.create_publisher(JointState, '/joint_states', 10)

        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        self.vel = 0.1
        self.pos = 0.0

    def timer_callback(self):
        self.pos += self.vel/2

        # Joint State Message
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["left_wheel_joint", "right_wheel_joint"]
        msg.position = [self.pos, self.pos]
        msg.velocity = [self.vel, self.vel]


        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing')


def main(args=None):
    rclpy.init(args=args)

    node = JSTest()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()