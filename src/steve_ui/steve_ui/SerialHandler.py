#! /usr/bin/env python3

from serial import Serial
import time


# Serial Communication default settings
PORT = '/dev/ttyACM0'
BAUD = 115200
TIMEOUT = 1.0

class SerialHandler(Serial):
    """
        Serial Handler:
        
        - Inherited Serial
    
    """
    def __init__(self, port=PORT, baud=BAUD, timeout=TIMEOUT):
        super().__init__(port=port, baudrate=baud, timeout=timeout)
        self.delim = '&'
        
        time.sleep(2) # Give arduino time for connection to be made
        self.reset_input_buffer()
        print("Serial connection successful.")


    def test_loop(self):
        """
            Used for testing send and receive data. It LOOPS!
        """
        
        try:
            while True:
                # print("New Message")
                # forward = int(input("Forward: "))
                
                # self.tx(fw_cmd=forward)

                serial_message = self.rx()
                print(serial_message)
                print(serial_message['temp'])


                # print("sending message...")
                # self.write("Hello\n".encode('utf-8'))
                # while self.in_waiting <= 0:
                #     time.sleep(0.01)
                # resp = self.readline().decode('utf-8').rstrip()
                # print(resp)
                

        except KeyboardInterrupt:
            print("\nSuccessfully closed serial communication.")
            self.close()


    def tx_rx(self, host="pi", mode="SEND", control="VOLTAGE", fw_cmd=0.0, yaw_cmd=0.0):
        """
            Client model for transmit and recieve data
        """
        tx_msg = self.tx_parser(host, mode, control, fw_cmd, yaw_cmd)
        self.write(tx_msg.encode('utf-8'))
        print(tx_msg+'\n')

        while self.in_waiting <= 0:
            time.sleep(0.01)
        resp = self.readline().decode('utf-8').rstrip()

        rx_vals = self.rx_parser(resp)
        print(rx_vals)

    
    def tx(self, host="pi", mode="SEND", control="VOLTAGE", fw_cmd=0, yaw_cmd=0):
        """
            Transmit only model
        """
        tx_msg = self.tx_parser(host, mode, control, fw_cmd, yaw_cmd)
        self.write(tx_msg.encode('utf-8'))
        print(tx_msg+'\n')


    def tx_parser(self, *args):
        """
            Used for parsing the send data AKA ENCODE
        """
        msg = ""
        for arg in args:
            msg = msg + str(arg) + self.delim

        return msg.rstrip(self.delim)

    def rx(self):
        while self.in_waiting <= 0:
            time.sleep(0.01)
        resp = self.readline().decode('utf-8').rstrip()
        rx_vals = self.rx_parser(resp)
        return rx_vals

    def rx_parser(self, msg):
        """
            Used for parsing the recieved data AKA DECODE
        """
        parsed = msg.split(self.delim)

        try:
            ret_msg = {
                'temp': parsed[0],
                'humidity': parsed[1],
                'CO2': parsed[2],
                'TVOC': parsed[3],
                'front range': parsed[4],
                'right range': parsed[5],
                'left range': parsed[6],
                'ax': float(parsed[7])*9.81,
                'ay': float(parsed[8])*9.81,
                'az': float(parsed[9])*9.81,
                'ox': float(parsed[10]),
                'oy': float(parsed[11]),
                'oz': float(parsed[12])
            }
        except IndexError:
            ret_msg = {
                'temp': -1,
                'humidity': -1,
                'CO2': -1,
                'TVOC': -1,
                'front range': -1,
                'right range': -1,
                'left range': -1,
                'ax': -9999,
                'ay': -9999,
                'az': -9999,
                'ox': -9999,
                'oy': -9999,
                'oz': -9999
            }
        return ret_msg


    def buffer(self):
        pass


if __name__ == '__main__':
    ser = SerialHandler()
    ser.test_loop()
    # ser.test_loop()
    ser.close()
    


    


