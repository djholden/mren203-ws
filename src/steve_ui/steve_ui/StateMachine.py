#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from steve_msgs.msg import ControlUI, SetPoints, SensorData
from SerialHandler import SerialHandler

class StateMachine():
    def __init__(self):
        #initialize messages
        #UI message
        self.auto_mode = False
        self.e_stop = False
        self.new_poi = False

        #Setpoint message
        self.temp_val = 0
        self.tvok_val = 0
        self.co2_val = 0
        self.h2 = 0

        #Sensordata message
        self.temp = 0
        self.h2 = 0
        self.co2 = 0
        self.tvok = 0
        self.ir_left = 0 
        self.ir_right = 0 
        self.ir_center = 0 

        #initialize state
        self.current_state = 0 

    def toggle_value(self, value):
        if value:
            value = False
        else:
            value = True
        return value
    
    def ir_sensor_check(self):
        if(self.ir_left < 12 or self.ir_right < 12 or self.ir_center < 12):
            self.e_stop = True  

    
    def check_state(self):
        #functions to check if a transition from a state is required
        #functions return the state

        if self.current_state == 0:
            # Activation State
            return self.state_0()

        elif self.current_state == 1:
            # Manual Mode
            return self.state_1()

        elif self.current_state == 2:
            # Safety Checks
            return self.state_2()

        elif self.current_state == 30:
            # Autonomous Mode (Explore)
            return self.state_30()

        elif self.current_state == 31:
            # Autonomous Mode (Report POI)
            return self.state_31()
        
        elif self.current_state == 32:
            # Autonomous Mode (Plan Path)
            return self.state_32()
        

    def state_0(self):
        # Do activation checks

        # Check for Motor Data

        # Check for Sensor Data

        # Check for E-Stop

        # If all pass
        self.current_state = 1

                
    def state_1(self):
        # Manual Control Mode

        # Send to next state for auto activation
        if(self.auto_mode == True):
            self.current_state = 2
            return
            

    def state_2(self):
        # Do the safety checks before entering autonomous mode

        # Check E-Stop
        if(self.e_stop == True):
            self.current_state = 1
            return

        self.current_state = 30

    def state_30(self):
        # Autonomous Mode (Explore)

        # Check E-Stop
        if(self.e_stop == True):
            self.current_state = 1
            return

        # Check for stopped request
        if(self.auto_mode == False):
            self.current_state = 1
            return
            
        #explore mode until a POI is found
        if(self.temp > self.temp_val or self.h2 > self.h2_val or self.co2 > self.co2_val or self.tvok > self.tvok_val):
            #POI detected
            self.new_poi = True
            self.current_state = 31
            return
        

    def state_31(self):
        # Create a POI

        # Add the X, Y, Z position to a list

        self.current_state = 32

    def state_32(self):
        # Plan a path

        self.current_state = 30


def main(args=None):
    pass
 
if __name__ == '__main__':
    main()


