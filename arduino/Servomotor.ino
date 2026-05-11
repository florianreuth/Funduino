// https://github.com/florianreuth/Funduino

// See https://github.com/arduino-libraries/Servo
#include <Servo.h>

Servo servoMotor;

const int SERVO_PIN = 8;

// servo positions (rotation in degrees)
const int POSITION_1 = 0;
const int POSITION_2 = 90;
const int POSITION_3 = 180;
const int POSITION_4 = 20;

// delay time in milliseconds
const int DELAY_TIME = 3000;

void setup() {
    servoMotor.attach(SERVO_PIN);
}

void loop() {
    servoMotor.write(POSITION_1);
    delay(DELAY_TIME);

    servoMotor.write(POSITION_2);
    delay(DELAY_TIME);

    servoMotor.write(POSITION_3);
    delay(DELAY_TIME);

    servoMotor.write(POSITION_4);
    delay(DELAY_TIME);
}
