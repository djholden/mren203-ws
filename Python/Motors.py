#! /usr/bin/env python3
import RPi.GPIO as GPIO
import time

HIGH = True
LOW = False


class MotorHandler():
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

    def __init__(self):
        # Inital GPIO Setup
        GPIO.setmode(GPIO.BOARD) # Specify Pin Layout
        GPIO.setup(self.EA, GPIO.OUT)
        GPIO.setup(self.I1, GPIO.OUT)
        GPIO.setup(self.I2, GPIO.OUT)
        GPIO.setup(self.EB, GPIO.OUT)
        GPIO.setup(self.I3, GPIO.OUT)
        GPIO.setup(self.I4, GPIO.OUT)
        GPIO.setup(self.RCA, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(self.RCB, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(self.LCA, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(self.LCB, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

        # Setup PWM
        FREQ = 500
        self.left_pwm = GPIO.PWM(self.EB, FREQ)
        self.right_pwm = GPIO.PWM(self.EA, FREQ)
        self.left_pwm.start(0)
        self.right_pwm.start(0)

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
            GPIO.output(self.I3, LOW)
            GPIO.output(self.I4, HIGH)
        elif (left_cmd < 0):
            GPIO.output(self.I3, HIGH)
            GPIO.output(self.I4, LOW)

        if (right_cmd >= 0):
            GPIO.output(self.I1, HIGH)
            GPIO.output(self.I2, LOW)
        elif (right_cmd < 0):
            GPIO.output(self.I1, LOW)
            GPIO.output(self.I2, HIGH)


        # Change PWM duty cycle (aka speed)
        self.left_pwm.ChangeDutyCycle(abs(left_cmd))
        self.right_pwm.ChangeDutyCycle(abs(right_cmd))



if __name__ == '__main__':
    motors = MotorHandler()
    motors.voltage_mode(50, 50)
    time.sleep(3)
    motors.voltage_mode(0, 0)
    GPIO.cleanup()
    print("done")


