# Smart Dustbin Arduino Project
This is a simple project that aims to make an ordinary dustbin smarter using Arduino. The smart dustbin can detect the presence of waste and automatically open the lid to allow you to dispose of the waste. It is a great way to make your home or office more efficient and reduce the amount of time you spend emptying your dustbin.

# Components Required
Arduino Uno

Ultrasonic sensor (HC-SR04)

Servo motor

Dustbin

Jumper wires

Breadboard

9V Battery

Battery connector


# Working
1) The ultrasonic sensor is used to detect the presence of waste in the dustbin.

2) The servo motor is connected to the lid of the dustbin, and it opens automatically when the ultrasonic sensor detects waste.

3) The Arduino continuously checks the distance of the waste from the ultrasonic sensor. If the distance is less than a certain threshold value, the servo motor is activated and the lid is opened automatically.

4) Once the waste is disposed of, the ultrasonic sensor detects the absence of waste and the servo motor closes the lid.

# Instructions
1) Connect the ultrasonic sensor and the servo motor to the Arduino Uno as per the circuit diagram.

2) Place the ultrasonic sensor at the top of the dustbin and connect it to the breadboard.

3) Attach the servo motor to the lid of the dustbin.

4) Upload the code provided in this repository to the Arduino.

5) Connect the 9V battery to the Arduino using a battery connector.

6) Place the dustbin in your desired location and turn on the Arduino.

# Conclusion
With this project, you have successfully created a smart dustbin that can detect waste and automatically open its lid to make it easier for you to dispose of waste. You can customize the code
