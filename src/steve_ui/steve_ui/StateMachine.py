#!/usr/bin/env python3

from scipy.spatial.transform import Rotation

class StateMachine():
    def __init__(self):
        #initialize messages
        #UI message
        self.auto_mode = False
        self.e_stop = False
        self.new_poi = False

        #Setpoint message
        self.temp_val = 0.0
        self.tvok_val = 0.0
        self.co2_val = 0.0
        self.h2 = 0.0

        #Sensordata message
        self.temp = 0.0
        self.h2 = 0.0
        self.co2 = 0.0
        self.tvok = 0.0
        self.ir_left = 0.0
        self.ir_right = 0.0
        self.ir_center = 0.0

        # IMU Data
        self.accel = [0.0, 0.0, 0.0]  # Linear Acceleration
        self.omega = [0.0, 0.0, 0.0]  # Angular Acceleration
        self.theta = [0.0, 0.0, 0.0]  # Angular Position (Euler)
        self.quatr = []         # Angular Position (Quaternion)

        #initialize state
        self.t_last = 0         # In milliseconds
        self.t_now = 0.00001    # In milliseconds
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

    
    def calculate_imu(self):
        dt = self.t_now - self.t_last   # Ensure that t_now is updated

        # Calculate Euler Orientation
        self.theta[0] += self.omega[0]*dt/1000
        self.theta[1] += self.omega[1]*dt/1000
        self.theta[2] += self.omega[2]*dt/1000

        self.t_last = self.t_now

        self.quatr = Rotation.from_euler('xyz', self.theta, degrees=True).as_quat()


    
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

        # Check for Movement
        if self.accel[0] > 0.1 or self.accel[0] < -0.1:
            print("FSM: Acceleration Fault\n")
            return
        
        if self.accel[1] > 0.01 or self.accel[1] < -0.01:
            print("FSM: Acceleration Fault\n")
            return

        # Check for Sensor Data
        if self.temp > 0:
            print("FSM: Sensor Fault\n")
            return
        
        if self.h2 > 0:
            print("FSM: Sensor Fault\n")
            return
        
        if self.co2 > 0:
            print("FSM: Sensor Fault\n")
            return
        
        if self.tvok > 0:
            print("FSM: Sensor Fault\n")
            return

        # Check for E-Stop
        self.ir_sensor_check()
        if self.e_stop:
            print("FSM: E-Stop Fault\n")
            return

        # If all pass
        self.current_state = 1

                
    def state_1(self):
        # Manual Control Mode
        #self.e_stop = False

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


