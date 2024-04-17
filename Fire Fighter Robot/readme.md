# Arduino Firefighting Robot

This Arduino sketch controls a firefighting robot equipped with flame sensors and a servo mechanism for fire disposal. The robot can be controlled via serial communication and is capable of moving in multiple directions.

## Features
- Moves forward, backward, turns left, and turns right.
- Stops movement upon command.
- Detects fire using flame sensors.
- Disposes of fire using a servo mechanism.

## Components Used
- Servo Motor
- Flame Sensors (3x)
- Motor Driver (L298N or similar)
- Arduino Board
- Relay Module
- Bluetooth Module (Optional)

## Installation and Setup
1. Connect the components according to the provided pin configurations.
2. Upload the sketch to your Arduino board.
3. Ensure proper power supply and connections.
4. Use a serial terminal or Bluetooth connection to send commands to the robot.

## Pin Configuration
- **Motor Control**:
  - ENA, IN1, IN2: Motor A control pins
  - ENB, IN3, IN4: Motor B control pins
- **Flame Sensors**:
  - FLAME_SENSOR_1, FLAME_SENSOR_2, FLAME_SENSOR_3: Analog pins for flame sensors
- **Servo and Relay**:
  - SERVO_PIN: Pin for servo motor control
  - RELAY_PIN: Pin for relay module control
- **Bluetooth Module** (Optional):
  - BT_RX, BT_TX: Pins for Bluetooth communication

## Usage
1. Connect to the Arduino using a serial terminal or a Bluetooth app.
2. Send commands to control the robot:
   - `F`: Move forward
   - `B`: Move backward
   - `L`: Turn left
   - `R`: Turn right
   - `S`: Stop moving
3. The robot automatically detects fire using the flame sensors and disposes of it when detected.

## Note
- Ensure proper safety precautions when working with fire or high voltage components.
- Adjust the flame threshold value (`FLAME_THRESHOLD`) as needed for your environment.

