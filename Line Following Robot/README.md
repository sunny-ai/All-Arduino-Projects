# Line Following Robot with 8 IR Sensors
This Arduino project implements a line following robot with 8 IR sensors. The robot is designed to follow a black line on a white surface. It is programmed to make turns when it encounters certain combinations of black and white surfaces detected by the IR sensors.

# Components
Arduino Uno
8 IR sensors

2 DC motors

L298N motor driver module

Breadboard

Jumper wires

# Wiring
The wiring of the project is as follows:

1) IR sensors are connected to the Arduino Uno's analog input pins.

2) L298N motor driver module is connected to the Arduino Uno's digital output pins for controlling the DC motors.
3) The motors are connected to the L298N motor driver module.

# Code
The code for the line following robot is written in Arduino programming language. The code uses a switch case statement to check the combinations of black and white surfaces detected by the IR sensors. Based on the combination, the robot is programmed to turn left or right or go straight.

# The following variables are defined in the code:

motorRPin1: signal pin 1 for the right motor, connected to IN1 of the L298N module

motorRPin2: signal pin 2 for the right motor, connected to IN2 of the L298N module

motorREnable: enable pin for the right motor (PWM enabled), connected to ENA of the L298N module

motorLPin1: signal pin 1 for the left motor, connected to IN3 of the L298N module

motorLPin2: signal pin 2 for the left motor, connected to IN4 of the L298N module

motorLEnable: enable pin for the left motor (PWM enabled), connected to ENB of the L298N module

irPins: array of pins connected to the IR sensors

irSensorDigital: array of digital values of IR sensors

irSensors: combination of IR sensor readings

motorLSpeed: speed of the left motor

motorRSpeed: speed of the right motor

error: error value used for adjusting the speed of the motors


# Usage
The line following robot is designed to follow a black line on a white surface. Place the robot on the black line and turn it on. The robot will start following the line.