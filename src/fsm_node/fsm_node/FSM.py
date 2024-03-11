#! /usr/bin/env python3

import rclpy
from rclpy.node import Node

class FSM():

    def __init__(self):
        #setting current state upon startup/launching nodes
        
        self.current_state = 0

    def check_state(self):
        #functions to check if a transition from a state is required
        #functions return the state
        if self.current_state == 0:
            return transition_from_s0(self)

        elif self.current_state == 1:
           return transition_from_s1(self)

        elif self.current_state == 2:
            return transition_from_s2(self)

        elif self.current_state == 3:
            return transition_from_s3(self)

        elif self.current_state == 30:
            return transition_from_s30(self)

        elif self.current_state == 31:
            return transition_from_s31(self)

        elif self.current_state == 32:
            return transition_from_s32(self)

        else:
            return transition_from_s4(self)

        #functions to check if a transition is requried from the current state    

def transition_from_s0(self):
    #check if data is being published to topics
    topic_list = get_topic_list()

    #count number of topics by counting spaces
    count = 0
    for item in topic_list:
        if isinstance(item, str):  # Check if the item is a string
            count += item.count(' ')  # Count the spaces in the string and add to the total count
    count += 1

    if count != 8: 
        #stay in state 0
        return 0
    else:
        #all topics running
        return 1
           

def transition_from_s1(self):
    #input from ui topic, if autonomous mode is selected
    return 2

def transition_from_s2(self):
    #no obstructions are blocking the robot before it starts moving
    return 2

def transition_from_s3(self):
    #if stopped, input from ui topic, self.current_state = 4
    return 2

def transition_from_s30(self):
    #if stopped, input from ui topic, self.current_state = 4
    return 2

def transition_from_s31(self):
    #if stopped, input from ui topic, self.current_state = 4
    return 2

def transition_from_s32(self):
    #if stopped, input from ui topic, self.current_state = 4
    return 2

def transition_from_s4(self):
    #once fully stopped
    return 2

def get_topic_list():
    node_dummy = Node("_ros2cli_dummy_to_show_topic_list")
    topic_list = node_dummy.get_topic_names_and_types()
    node_dummy.destroy_node()
    return topic_list



           

 