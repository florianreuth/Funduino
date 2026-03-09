// https://github.com/florianreuth/Funduino

void setup() {
    pinMode(5, OUTPUT);
    pinMode(7, OUTPUT);
}

void loop() {
    blinkPin(5);
    blinkPin(7);
}

void blinkPin(int pin) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
}
