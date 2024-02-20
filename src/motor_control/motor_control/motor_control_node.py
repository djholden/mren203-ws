#! /usr/bin/env python3
from .Motors import MotorHandler
from math import sqrt

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy

SPEED = 150

class MotorSubscriber(Node):

    def __init__(self):
        super().__init__('motor_subscriber')
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.callaback,
            10)
        self.subscription  # prevent unused variable warning
        self.motors = MotorHandler()

    def callaback(self, msg):

        # Receive joystick data
        x_axis = -msg.axes[0]
        y_axis = msg.axes[1]


        # Joystick Controller
        left_wheel = y_axis*(SPEED*sqrt(2)/2) + x_axis*(SPEED*sqrt(2)/2)
        right_wheel = y_axis*(SPEED*sqrt(2)/2) - x_axis*(SPEED*sqrt(2)/2)

        # Cap max speed to 100
        if (left_wheel > 100):
            left_wheel = 100
        elif (left_wheel < -100):
            left_wheel = -100
        
        if (right_wheel > 100):
            right_wheel = 100
        elif (right_wheel < 100):
            right_wheell = -100

        self.motors.voltage_mode(left_wheel, right_wheel)
        self.get_logger().info('Left Cmd: {} & Right Cmd: {}'.format(left_wheel, right_wheel))



def main(args=None):
    rclpy.init(args=args)

    motor_node = MotorSubscriber()

    rclpy.spin(motor_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    motor_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

