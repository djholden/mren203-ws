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
RCA = 12 # right A
RCB = 11 # right B
LCA = 38 # left A (16)
LCB = 40 # left B (18)

TRACK_LENGTH = 0.2775

KP = 5

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


    def PID_mode(self, vel_d, turn_rate_d, current_time):
        self.right_wheel.update_rotational_speed(current_time)
        self.left_wheel.update_rotational_speed(current_time)

        # calculate the right and left wheel velocities base on the desired vehicle velocity
        # and desired vehicle turning rate. The 0.2775 value is the track length of the bot.
        right_vel_d = vel_d + (0.5*(TRACK_LENGTH*turn_rate_d))
        left_vel_d = vel_d - (0.5*(TRACK_LENGTH*turn_rate_d))

        left_cmd = self.right_wheel.PWM_calculation(right_vel_d)
        right_cmd = self.left_wheel.PWM_calculation(left_vel_d)
        
        # max pwm and direction checks
        left_cmd, right_cmd = self.check_max(left_cmd, right_cmd)
        left_cmd, right_cmd = self.direction(left_cmd, right_cmd)

        # Change PWM duty cycle (aka speed)
        self.right_pwm.ChangeDutyCycle(abs(right_cmd))
        self.left_pwm.ChangeDutyCycle(abs(left_cmd))


    def check_max(self, left_cmd, right_cmd):
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

        return left_cmd, right_cmd

    def direction(self, left_cmd, right_cmd):
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

    def print_speed(self):
        print("Updated...")
        print("Right Wheels")
        print("     Omega: {} rad/s".format(self.right_wheel.omega))
        print("     Speed: {} m/s".format(self.right_wheel.speed))
        print("     Ticks: {}".format(self.right_wheel.encoder_ticks))
        print("     Delta Tick: {}".format(self.right_wheel.tick_change))
        print("Left Wheels")
        print("     Omega: {} rad/s".format(self.left_wheel.omega))
        print("     Speed: {} m/s".format(self.left_wheel.speed))
        print("     Ticks: {}".format(self.left_wheel.encoder_ticks))
        print("     Delta Tick: {}".format(self.left_wheel.tick_change))


    def voltage_mode(self, left_cmd, right_cmd):
        # max pwm and direction checks
        left_cmd, right_cmd = self.check_max(left_cmd, right_cmd)
        left_cmd, right_cmd = self.direction(left_cmd, right_cmd)

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
    def __init__(self, GPIO_A, GPIO_B, radius=0.0625, period=1000, TPR=3000):
        self.GPIO_A = GPIO_A
        self.GPIO_B = GPIO_B

        self.encoder_ticks = 0
        self.t_last = 0             # In milliseconds
        self.T = period             # In milliseconds
        self.TPR = TPR              # Ticks per revolution
        self.radius = radius        # In meters
        self.speed = 0              # In m/s
        self.omega = 0              # in rad/s

        self.tick_change = 0

        # Create Event detector for encoder pulse
        GPIO.add_event_detect(self.GPIO_A, GPIO.RISING, 
            callback=self.pulse_callback)
        
    def pulse_callback(self, *args):
        # TODO - add pulse graph to show if they are in phase
        
        if (GPIO.input(self.GPIO_B) > 0):
            self.encoder_ticks += 1
        else:
            self.encoder_ticks -= 1

            
    def update_rotational_speed(self, current_time):
        self.t_now = current_time
        dt = (self.t_now - self.t_last) # In Milliseconds
        #print("encoder ticks: {} s".format(self.encoder_ticks))

        if (dt >= self.T):
            # Estimate angular velocity [rad/s]
            self.omega = (2*math.pi) * (self.encoder_ticks/self.TPR) * (1000/dt)

            # Convert to speed [m/s]
            self.speed = self.omega * self.radius

            # Update last time
            self.t_last = self.t_now

            # Reset encoder ticks
            self.encoder_ticks = 0
    
    def PWM_calculation(self, vel_d):
        vel = self.speed
        error = vel_d - vel


        



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
        print("done")

    except RuntimeError:
        motors.voltage_mode(0, 0)

    finally:
        GPIO.cleanup()



