import serial
import time
ser = serial.Serial('COM7', 9600, timeout=2)
for i in range(5):
    ser.write(b'A')
    time.sleep(5)
    ser.write(b'B')
    time.sleep(2)
