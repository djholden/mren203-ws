#! /usr/bin/env python3
import RPi.GPIO as GPIO

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


if __name__ == '__main__':
    motors = MotorHandler()
    motors.voltage_mode(50, 50)
    motors.voltage_mode(0, 0)
    print("done")


