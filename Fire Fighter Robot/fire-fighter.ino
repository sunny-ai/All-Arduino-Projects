#include <Servo.h>

#define ENA 5
#define IN1 6
#define IN2 7
#define ENB 10
#define IN3 11
#define IN4 12

#define FLAME_SENSOR_1 A0
#define FLAME_SENSOR_2 A1
#define FLAME_SENSOR_3 A2

#define SERVO_PIN 9

#define RELAY_PIN 8


#define FORWARD 'F'
#define BACKWARD 'B'
#define LEFT 'L'
#define RIGHT 'R'
#define STOP 'S'

#define FLAME_THRESHOLD 500

Servo disposalServo;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(FLAME_SENSOR_1, INPUT);
  pinMode(FLAME_SENSOR_2, INPUT);
  pinMode(FLAME_SENSOR_3, INPUT);

  disposalServo.attach(SERVO_PIN);

  pinMode(RELAY_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    executeCommand(command);
  }

  if (isFireDetected()) {
    disposeFire();
  }
}

void executeCommand(char command) {
  switch(command) {
    case FORWARD:
      moveForward();
      break;
    case BACKWARD:
      moveBackward();
      break;
    case LEFT:
      turnLeft();
      break;
    case RIGHT:
      turnRight();
      break;
    case STOP:
      stopMoving();
      break;
    default:
      break;
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void stopMoving() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

bool isFireDetected() {
  int flame1 = analogRead(FLAME_SENSOR_1);
  int flame2 = analogRead(FLAME_SENSOR_2);
  int flame3 = analogRead(FLAME_SENSOR_3);

  return (flame1 > FLAME_THRESHOLD || flame2 > FLAME_THRESHOLD || flame3 > FLAME_THRESHOLD);
}

void disposeFire() {
  disposalServo.write(90);
  digitalWrite(RELAY_PIN, HIGH);
  delay(1000);
  disposalServo.write(0);
  digitalWrite(RELAY_PIN, LOW);
}
