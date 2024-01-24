/**
 * @file PWM-motor-control.ino
 * @author Joshua Marshall (joshua.marshall@queensu.ca)
 * @brief Arduino program to drive one wheel motor through a motor driver.
 * @version 2.0
 * @date 2022-12-05
 *
 * @copyright Copyright (c) 2021-2022
 *
 */

int EA = 6;  // Wheel PWM pin (must be a PWM pin) (red)
int I1 = 8;  // Wheel direction digital pin 1 (yellow)
int I2 = 7;  // Wheel direction digital pin 2 (green)

int EB = 9;  // (red)
int I3 = 10; // (blue)
int I4 = 11; // (black)

int direction = 1;

void setup()
{
    // Configure digital pins for output
    pinMode(EA, OUTPUT);
    pinMode(I1, OUTPUT); 
    pinMode(I2, OUTPUT);

    pinMode(EB, OUTPUT);
    pinMode(I3, OUTPUT); 
    pinMode(I4, OUTPUT);
}

void loop()
{
    int u = 255; // A variable for the motor PWM command [0-255]

    // Play with this code to write open loop commands to a wheel motor
    
    Turn180(1);
    delay(500);

    Reverse(u);
    delay(2000);

    Brake();
    delay(500);

    Turn180(-1);
    delay(500);

    Reverse(u);
    delay(2000);

    Brake();
    delay(500);
}

void DriveForward(int speed){
    direction = 1;

    // Right Side
    digitalWrite(I1, HIGH);  
    digitalWrite(I2, LOW);

    // Left Side
    digitalWrite(I3, LOW);  
    digitalWrite(I4, HIGH); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void Reverse(int speed){
    direction = -1;

    // Right Side
    digitalWrite(I1, LOW);  
    digitalWrite(I2, HIGH);

    // Left Side
    digitalWrite(I3, HIGH);  
    digitalWrite(I4, LOW); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void DriveRight(int speed){
    direction = 2;
    // Right Side
    digitalWrite(I1, LOW);  
    digitalWrite(I2, HIGH);

    // Left Side
    digitalWrite(I3, LOW);  
    digitalWrite(I4, HIGH); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void DriveLeft(int speed){
    direction = 3;
    // Right Side
    digitalWrite(I1, HIGH);  
    digitalWrite(I2, LOW);

    // Left Side
    digitalWrite(I3, HIGH);  
    digitalWrite(I4, LOW); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void Brake(){
    int speed = 255;

    if(direction == 1) Reverse(speed);
    else if (direction == -1) DriveForward(speed);
    else if (direction == 2) DriveLeft(speed);
    else DriveRight(speed);

    delay(100);

    // Right Side
    digitalWrite(I1, HIGH);  
    digitalWrite(I2, HIGH);

    // Left Side
    digitalWrite(I3, HIGH);  
    digitalWrite(I4, HIGH); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void Neutral(int speed){
    // Right Side
    digitalWrite(I1, LOW);  
    digitalWrite(I2, LOW);

    // Left Side
    digitalWrite(I3, LOW);  
    digitalWrite(I4, LOW); 

    // PWM command to the motor driver
    analogWrite(EB, speed); // Left side speed
    analogWrite(EA, speed); // Right side speed
}

void Turn180(int TurnDirection){
    if(TurnDirection == 1){
      DriveRight(255);
      delay(1125);

      Brake();
      delay(2000);
    }else if(TurnDirection == -1){
      DriveLeft(255);
      delay(1125);

      Brake();
      delay(2000);
    }
}
