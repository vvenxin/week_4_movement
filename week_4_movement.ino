#include <Servo.h>

Servo myServo;
int servoPin = 7;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  myServo.write(80);
  delay(100);
  myServo.write(100);
  delay(100);
}
