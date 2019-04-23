import serial
import time
ser=serial.Serial("COM5", baudrate = 9600 , timeout = 1)

def R1(data):  
    senddata = bytearray()
    senddata.append(data)
    return senddata

while(1):
    LXD = R1(1)
    ser.write(LXD)
    RXD = R1(2)
    ser.write(RXD)
    #time.sleep(2)
    
    
