# Write your code here :-)
import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BCM)

GPIO.setup(13, GPIO.OUT)
p = GPIO.PWM(13, 50)

p.start(0)
sleep(1)
p.ChangeDutyCycle(8)
sleep(1)
p.ChangeDutyCycle(10)
sleep(1)
p.ChangeDutyCycle(8)
sleep(1)
p.ChangeDutyCycle(10)
sleep(1)

p.stop()
GPIO.cleanup()