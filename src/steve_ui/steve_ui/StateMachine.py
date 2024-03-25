#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from steve_msgs.msg import ControlUI, SetPoints, SensorData
from SerialHandler import SerialHandler

class FSMNode(Node):
    def __init__(self):
        super().__init__('fsm_node')

        #UI subscriber
        self.ui_sub = self.create_subsription(
            ControlUI,
            'ui',
            self.ui_callback,
            10
        )

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

        #UI publisher
        self.ui_pub = self.create_publisher(
            ControlUI,
            'ui',
            10
        )

        self.timer_period = 0.01
        self.timer = self.create_timer(self.timer_period, self.callback_loop)

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

    def ui_callback(self, ui_msg):
        #ui values
        self.auto_mode = ui_msg.auto_mode
        self.e_stop = ui_msg.e_stop

    def sp_callback(self, sp_msg):
        #setpoint values
        self.temp_val = sp_msg.temp_val
        self.tvok_val = sp_msg.tvok_val
        self.co2_val = sp_msg.co2_val
        self.h2 = sp_msg.h2_val

    def callback_loop(self):

        sensor_msg = SensorData()
        ui_msg = ControlUI()

        #read arduino serial data
        self.serial_message = SerialHandler.rx_parser
        sensor_msg.temp = self.serial_message.parsed[0]
        sensor_msg.h2 = self.serial_message.parsed[1]
        sensor_msg.co2 = self.serial_message.parsed[2]
        sensor_msg.tvok = self.serial_message.parsed[3]
        sensor_msg.ir_left = self.serial_message.parsed[4]
        sensor_msg.ir_right = self.serial_message.parsed[5]
        sensor_msg.ir_center = self.serial_message.parsed[6]

        #e-stop check
        #check ir sensor for obstacles
        if(sensor_msg.ir_left < 12 or sensor_msg.ir_right < 12 or sensor_msg.ir_center < 12):
            ui_msg.e_stop = True
        else:
            #if safe turn off e_stop
            ui_msg.e_stop = False

        #check if any state transistions are required
        if(ui_msg.e_stop == False):
            check_state(self)

        #publish data
        self.sensor_pub.publish(sensor_msg)
        self.ui_pub.publish(ui_msg)

def check_state(self):
        #functions to check if a transition from a state is required
        #functions return the state
    if self.current_state == 0:
        return transition_from_s0(self)

    elif self.current_state == 1:
        return transition_from_s1(self)

    elif self.current_state == 2:
        return transition_from_s2(self)

    elif self.current_state == 30:
        return transition_from_s30(self)

    elif self.current_state == 31:
        return transition_from_s31(self)

def transition_from_s0(self):
   if(self.temp_val !=0):
        #activated
        self.current_state = 1
   return 
           
def transition_from_s1(self):
    if(self.auto_mode == True):
        self.current_state = 2
    return

def transition_from_s2(self):
    #safety checks before entering autonomous mode
    #no obstructions are blocking the robot before it starts moving
    if(self.e_stop == False):
        self.current_state = 30
    return

def transition_from_s30(self):
    #entered autonomous mode
    #check for stopped request
    if(self.auto_mode == False):
        self.current_state = 1
        return
    
    #explore mode until a POI is found
    if(self.temp > self.temp_val or self.h2 > self.h2_val or self.co2 > self.co2_val or self.tvok > self.tvok_val):
        #POI detected
        self.ui_msg.new_poi = True
        self.current_state = 31
    return

def transition_from_s31(self):
    #check for stopped request
    if(self.auto_mode == False):
        self.current_state = 1
        return
    
    #path to POI
    return

def main(args=None):
    rclpy.init(args=args)
    fsm_node = FSMNode()
    rclpy.spin(fsm_node)
    rclpy.shutdown()
 
if __name__ == '__main__':
    main()


