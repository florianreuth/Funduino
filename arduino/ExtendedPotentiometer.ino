// https://github.com/florianreuth/Funduino

const int POTENTIOMETER = A0;
const int LED = 9;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    int value = analogRead(POTENTIOMETER);
    analogWrite(LED, map(value, 0, 1023, 0, 255)); // convert 0 - 1023 -> 0 - 255 for PWM
}
