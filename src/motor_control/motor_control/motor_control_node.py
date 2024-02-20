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



        # Joystick Controller
        left_wheel = left_y_axis*(SPEED*sqrt(2)/2) - left_x_axis*(SPEED*sqrt(2)/2)
        right_wheel = left_y_axis*(SPEED*sqrt(2)/2) + left_x_axis*(SPEED*sqrt(2)/2)

        # Cap max speed to 100
        if (left_wheel > 100):
            left_wheel = 100
        elif (left_wheel < -100):
            left_wheel = -100
        
        if (right_wheel > 100):
            right_wheel = 100
        elif (right_wheel < -100):
            right_wheel = -100

        time_ms = self.get_clock().now().nanoseconds*(1e-6)

        self.motors.voltage_mode(left_wheel, right_wheel)
        self.motors.PID_mode(0, 0, time_ms)

        if (a_btn > 0):
            self.motors.print_speed()

        self.get_logger().info('Time: {} Left Cmd: {} & Right Cmd: {}'.format(time_ms, left_wheel, right_wheel))



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

