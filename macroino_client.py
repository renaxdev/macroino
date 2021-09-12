"""
MacroIno
Written by renaxdev

Contact: renaxdev@outlook.de
"""

#Importing Libs
import serial
import os
import keyboard
import time


#Set Serial Output to "arduino" variable
arduino = serial.Serial(port='COM3', baudrate=9600, timeout=1)

#read serial output, decode it and execute
while True:
    output = arduino.readline().strip().decode()
    if output == "1":
        keyboard.press_and_release('strg+v')

    else:
        pass