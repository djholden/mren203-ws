
#define RX_INPUT_SIZE 30
#define RX_MAX_VALUES 5
#define CHAR_MAX 10

// Motor PIN Assignments
int EA = 6;  // Wheel PWM pin (must be a PWM pin) (red)
int I1 = 8;  // Wheel direction digital pin 1 (yellow)
int I2 = 7;  // Wheel direction digital pin 2 (green)

int EB = 9;  // (red)
int I3 = 10; // (blue)
int I4 = 11; // (black)


// RX Values
char host[CHAR_MAX];
char mode[CHAR_MAX];
char control[CHAR_MAX];
int fw_cmd;
int yaw_cmd;



void setup() {
  Serial.begin(115200);
  while (!Serial) {} // Program waits for serial connection to be made
  
  // Configure digital pins for output
  pinMode(EA, OUTPUT);
  pinMode(I1, OUTPUT); 
  pinMode(I2, OUTPUT);

  pinMode(EB, OUTPUT);
  pinMode(I3, OUTPUT); 
  pinMode(I4, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    rx_set_values();

    Serial.println(control);
  }

  DriveForward(fw_cmd);

}


void rx_set_values() { // Used for recieving and decode serial data
  char* rx_values[RX_MAX_VALUES];
  char rx_input[RX_INPUT_SIZE + 1];
  byte size = Serial.readBytesUntil('\n', rx_input, RX_INPUT_SIZE);
  int rx_id = 0;
  char* command = strtok(rx_input, "&");
  while (command != 0) {
    if (rx_id < RX_MAX_VALUES) rx_values[rx_id++] = command;
    command = strtok(0, "&");
  }

  strcpy(control, rx_values[2]);
  fw_cmd = atof(rx_values[3]);
  yaw_cmd = atof(rx_values[4]);

  // host = rx_values[0];
  // mode = rx_values[1];
  // control = rx_values[2];
  // fw_cmd = rx_values[3];
  // yaw_cmd = rx_values[4];

}

void DriveForward(int speed){

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


