#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from fsm_interfaces.msg import Fsm
from .FSM import FSM

class FSMNode(Node):
    def __init__(self):
        super().__init__("fsm_node")
        self.pub = self.create_publisher(Fsm, "state", 10)
        self.timer = self.create_timer(1, self.publish_state)
        self.create_subscription(Fsm, "data", self.data_callback, 10)
        self.create_subscription(Fsm, "planner", self.planner_callback, 10)
        self.create_subscription(Fsm, "ui", self.planner_callback, 10)
        self.fsm_instance = FSM()
        self.current_state = self.fsm_instance.current_state
        
    def publish_state(self):
        msg = Fsm()
        msg.state = 0
        self.pub.publish(msg)
        self.current_state = msg.state
        self.current_state = FSM.check_state(self)
        msg.state =  self.current_state
        self.get_logger().info('Current State: "%d"' % msg.state)

    #called when something published to data topic
    def data_callback(self, msg: Fsm):
        self.get_logger().info(int(msg.state))

    def planner_callback(self, msg: Fsm):
        self.get_logger().info(int(msg.state))

    def ui_callback(self, msg: Fsm):
        self.get_logger().info(int(msg.state))



def main(args=None):
    rclpy.init(args=args)
    fsm_node = FSMNode()
    rclpy.spin(fsm_node)
    rclpy.shutdown()
 

if __name__ == '__main__':
    main()