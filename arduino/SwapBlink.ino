// https://github.com/florianreuth/Funduino

const int LED1 = 5;
const int LED2 = 7;

const int PAUSE_MS = 1000;

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop() {
    blinkPin(LED1);
    blinkPin(LED2);
}

void blinkPin(int pin) {
    digitalWrite(pin, HIGH);
    delay(PAUSE_MS);
    digitalWrite(pin, LOW);
}
