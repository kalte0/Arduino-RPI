import serial
import time

count = 0 
ser = serial.Serial('/dev/ttyACM0', 9600)
while 1:
    ser.write('{:d}\n'.format(1))
    time.sleep(.5)
    ser.write('{:d}\n'.format(0))
    time.sleep(.5)

