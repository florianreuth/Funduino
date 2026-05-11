// https://github.com/florianreuth/Funduino

// See https://github.com/arduino-libraries/Servo
#include <Servo.h>

Servo servoMotor;

const int SERVO_PIN = 8;
const int POTI_PIN = A0;

void setup() {
    servoMotor.attach(SERVO_PIN);
    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(POTI_PIN);

    // 0–1023 -> 0–180
    int angle = map(sensorValue, 0, 1023, 0, 180);
    servoMotor.write(angle);
    delay(10);
}
