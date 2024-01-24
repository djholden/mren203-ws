/**
 * @file motor-angular-rate.ino
 * @author Joshua Marshall (joshua.marshall@queensu.ca)
 * @brief Arduino program to estimate motor speed from encoder.
 * @version 2.1
 * @date 2022-12-09
 *
 * @copyright Copyright (c) 2021-2022
 *
 */

//Right side pin assignments
// Wheel PWM pin (must be a PWM pin)
int EA = 6;
// Wheel direction digital pins
int I1 = 8;
int I2 = 7;

//Left side pin assignments
// Wheel PWM pin (must be a PWM pin)
int EB = 9;
// Wheel direction digital pins
int I3 = 10; // (blue)
int I4 = 11; // (black)

// Motor PWM command variable [0-255]
byte uRight = 0;
byte uLeft = 0;

// Left wheel encoder digital pins
const byte SIGNAL_A_R = 2;
const byte SIGNAL_B_R = 3;

// Right wheel encoder digital pins
const byte SIGNAL_A_L = 5;
const byte SIGNAL_B_L = 4;

// Encoder ticks per (motor) revolution (TPR)
const int TPR = 3000;

// Wheel radius [m]
const double RHO = 0.0625;

// Counter to keep track of encoder ticks [integer]
volatile long right_encoder_ticks = 0;
volatile long left_encoder_ticks = 0;

// Variable to store estimated angular rate of left and right wheels [rad/s]
double omega_L = 0.0;
double omega_R = 0.0;

// estimated wheel speeds [m/s]
double speed_L = 0.0;
double speed_R = 0.0;

// Sampling interval for measurements in milliseconds
const int T = 1000;

// Counters for milliseconds during interval
long t_now = 0;
long t_last = 0;

// This function is called when SIGNAL_A goes HIGH
void decodeEncoderTicks_right()
{
    if (digitalRead(SIGNAL_B_R) == LOW)
    {
        // SIGNAL_A leads SIGNAL_B, so count one way
        right_encoder_ticks--;
    }
    else
    {
        // SIGNAL_B leads SIGNAL_A, so count the other way
        right_encoder_ticks++;
    }
}

void decodeEncoderTicks_left()
{
    if (digitalRead(SIGNAL_B_L) == LOW)
    {
        // SIGNAL_A leads SIGNAL_B, so count one way
        left_encoder_ticks--;
    }
    else
    {
        // SIGNAL_B leads SIGNAL_A, so count the other way
        left_encoder_ticks++;
    }
}

void setup()
{
    // Open the serial port at 9600 bps
    Serial.begin(9600);

    // Set the pin modes for the motor driver
    pinMode(EA, OUTPUT);
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);

    pinMode(EB, OUTPUT);
    pinMode(I3, OUTPUT);
    pinMode(I4, OUTPUT);

    // Set the pin modes for the encoders
    pinMode(SIGNAL_A_R, INPUT);
    pinMode(SIGNAL_B_R, INPUT);

    pinMode(SIGNAL_A_L, INPUT);
    pinMode(SIGNAL_B_L, INPUT);

    // Every time the pin goes high, this is a pulse
    attachInterrupt(digitalPinToInterrupt(SIGNAL_A_R), decodeEncoderTicks_right, RISING);
    attachInterrupt(digitalPinToInterrupt(SIGNAL_A_L), decodeEncoderTicks_left, RISING);

    // Print a message
    Serial.print("Program initialized.");
    Serial.print("\n");
}

void loop()
{
    // Get the elapsed time [ms]
    t_now = millis();

    if (t_now - t_last >= T)
    {
        // Estimate the rotational speed [rad/s]
        omega_L = 2.0 * PI * ((double)left_encoder_ticks / (double)TPR) * 1000.0 / (double)(t_now - t_last);
        speed_L = omega_L * RHO;

        omega_R = 2.0 * PI * ((double)right_encoder_ticks / (double)TPR) * 1000.0 / (double)(t_now - t_last);
        speed_R = -omega_R * RHO;

        // Print some stuff to the serial monitor
        Serial.print("Encoder ticks left: ");
        Serial.print(left_encoder_ticks);
        Serial.print("\t");
        Serial.print("Estimated left wheel speed: ");
        Serial.print(speed_L);
        Serial.print(" m/s");
        Serial.print("\t");
        Serial.print("Encoder ticks right: ");
        Serial.print(right_encoder_ticks);
        Serial.print("\t");
        Serial.print("Estimated right wheel speed: ");
        Serial.print(speed_R);
        Serial.print(" m/s");
        Serial.print("\n");

        // Record the current time [ms]
        t_last = t_now;

        // Reset the encoder ticks counter
        left_encoder_ticks = 0;
        right_encoder_ticks = 0;
    }

    // Set the wheel motor PWM command [0-255]
    uLeft = 128;
    uRight = 112;

    // Select a direction
    digitalWrite(I1, LOW);
    digitalWrite(I2, HIGH);

    // PWM command to the motor driver
    analogWrite(EB, uLeft);

    // Select a direction
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);

    // PWM command to the motor driver
    analogWrite(EA, uRight);
}
