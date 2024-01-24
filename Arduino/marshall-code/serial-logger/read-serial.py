'''
 * @file read-serial.py
 * @author Thomas Sears (thomas.sears@queensu.ca)
 * @brief A demo script that reads Arduino data from the serial port into a CSV file
 * @version 1.1
 * @date 2022-12-22
 *
 * @copyright Copyright (c) 2023
'''

# We use the "serial" package to connect to the Arduino over USB
# You need to install pySerial first (e.g., pip install pyserial)
import serial

import csv  # To write data to a file
import time  # For logging time

ser = serial.Serial()  # Create a serial object
ser.baudrate = 115200  # Set the baudrate to match the Arduino program
# Select the port address (might require some additional work)
ser.port = 'COM9'
# When using "readline()" below, it is wise to have a timeout [s]
ser.timeout = 5

ser.open()  # Open the serial port

while True:  # Loop until user breaks...
    ser_bytes = ser.readline()  # Read until a new line symbol is seen

    # print(ser_bytes[0:len(ser_bytes) - 2])  # Optional: print the raw message

    measurements = ser_bytes.decode().split(',')

    # We know the order was temperature, humidity, CO2
    temperature = measurements[0]
    humidity = measurements[1]
    CO2 = measurements[2]

    # Extra: we could log this data to a file if desired
    with open("serial_log.csv", "a",
              newline="") as file:  # Append data to log file
        writer = csv.writer(file)
        # Write a row of data
        writer.writerow([time.time(), temperature, humidity, CO2])
