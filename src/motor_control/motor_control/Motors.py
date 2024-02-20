#! /usr/bin/env python3
import RPi.GPIO as GPIO
import math
import time

HIGH = True
LOW = False

# Pin Assignments
# Motors
EA = 33 # right pwm 
I1 = 29 # right  
I2 = 31 # right
EB = 32 # left pwm
I3 = 26 # left
I4 = 24 # left

# Encoders
RCA = 11 # right A
RCB = 12 # right B
LCA = 16 # left A
LCB = 18 # left B

class MotorHandler():
    

    def __init__(self):
        # Inital GPIO Setup
        GPIO.setmode(GPIO.BOARD) # Specify Pin Layout
        GPIO.setup(EA, GPIO.OUT)
        GPIO.setup(I1, GPIO.OUT)
        GPIO.setup(I2, GPIO.OUT)
        GPIO.setup(EB, GPIO.OUT)
        GPIO.setup(I3, GPIO.OUT)
        GPIO.setup(I4, GPIO.OUT)
        GPIO.setup(RCA, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(RCB, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(LCA, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(LCB, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

        # Setup PWM
        FREQ = 500
        self.left_pwm = GPIO.PWM(EB, FREQ)
        self.right_pwm = GPIO.PWM(EA, FREQ)
        self.left_pwm.start(0)
        self.right_pwm.start(0)

        # Create PID Wheels
        self.left_wheel = WheelPID(LCA, LCB)
        self.right_wheel = WheelPID(RCA, RCB)


    def PID_mode(self, left_vel, right_vel, current_time):
        self.right_wheel.update_rotational_speed(current_time)


    def print_speed(self):
        print("Updated...\n")
        print("Omega: {} rad/s\n".format(self.right_wheel.omega))
        print("Speed: {} m/s\n".format(self.right_wheel.speed))


    def voltage_mode(self, left_cmd, right_cmd):
        MAX_DUTY_CYCLE = 100

        # Handle input cmd
        if (left_cmd > MAX_DUTY_CYCLE):
            left_cmd = MAX_DUTY_CYCLE
        elif (left_cmd < -MAX_DUTY_CYCLE):
            left_cmd = -MAX_DUTY_CYCLE

        if (right_cmd > MAX_DUTY_CYCLE):
            right_cmd = MAX_DUTY_CYCLE
        elif (right_cmd < -MAX_DUTY_CYCLE):
            right_cmd = -MAX_DUTY_CYCLE  


        # Handle Direction
        if (left_cmd >= 0):
            GPIO.output(I3, LOW)
            GPIO.output(I4, HIGH)
        elif (left_cmd < 0):
            GPIO.output(I3, HIGH)
            GPIO.output(I4, LOW)

        if (right_cmd >= 0):
            GPIO.output(I1, HIGH)
            GPIO.output(I2, LOW)
        elif (right_cmd < 0):
            GPIO.output(I1, LOW)
            GPIO.output(I2, HIGH)


        # Change PWM duty cycle (aka speed)
        self.left_pwm.ChangeDutyCycle(abs(left_cmd))
        self.right_pwm.ChangeDutyCycle(abs(right_cmd))

    def shutdown(self):
        self.voltage_mode(0, 0)
        GPIO.cleanup()
        print("Motors successfully shutdown")

    
class WheelPID(MotorHandler):
    """
        Class for wheel PID properties and functions
    """
    def __init__(self, GPIO_A, GPIO_B, radius=0.0625, period=500, TPR=100):
        self.GPIO_A = GPIO_A
        self.GPIO_B = GPIO_B

        self.encoder_ticks = 0
        self.t_last = 0             # In milliseconds
        self.T = period             # In milliseconds
        self.TPR = TPR              # Ticks per revolution
        self.radius = radius        # In meters
        self.speed = 0              # In m/s
        self.omega = 0              # in rad/s

        # Create Event detector for encoder pulse
        GPIO.add_event_detect(self.GPIO_A, GPIO.RISING, 
            callback=self.pulse_callback, bouncetime=10)
        
    def pulse_callback(self, *args):
        
        if (self.GPIO_B == LOW):
            self.encoder_ticks -= 1
        else:
            self.encoder_ticks += 1
        

        # if (switch_A == 1) and (switch_B == 0):
        #     self.encoder_ticks += 1

        #     while switch_B == 0:
        #         switch_B = GPIO.input(self.GPIO_B)

        #     while switch_B == 1:
        #         switch_B = GPIO.input(self.GPIO_B)
        #     return
    
        # elif (switch_A == 1) and (switch_B == 1):
        #     self.encoder_ticks -= 1

        #     while switch_A == 1:
        #         switch_A = GPIO.input(self.GPIO_A)
        #     return
        
        # else:
        #     return
            
    def update_rotational_speed(self, current_time):
        self.t_now = current_time
        dt = (self.t_now - self.t_last) # In Milliseconds
        print("encoder ticks: {} s".format(self.encoder_tick))

        if (dt >= self.T):
            # Estimate angular velocity [rad/s]
            self.omega = (2*math.pi) * (self.encoder_ticks/self.TPR) * (1000/dt)

            # Convert to speed [m/s]
            self.speed = self.omega * self.radius

            # Update last time
            self.t_last = self.t_now

            # Reset encoder ticks
            self.encoder_ticks = 0



if __name__ == '__main__':
    motors = MotorHandler()

    try:
        while True:
            time.sleep(0.1)
            ms = round(time.time()*1000)
            motors.voltage_mode(50, 50)
            time.sleep(3)
            motors.PID_mode(0, 0, ms)
            motors.voltage_mode(0, 0)
            time.sleep(3)


    except KeyboardInterrupt:
        motors.voltage_mode(0, 0)
        GPIO.cleanup()
        print("done")



