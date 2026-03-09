// https://github.com/florianreuth/Funduino

const int LED = 6;
const int BUTTON = 7;

const int PAUSE_MS = 5000;

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    if (digitalRead(BUTTON) == HIGH) {
        digitalWrite(LED, HIGH);
        delay(PAUSE_MS);
        digitalWrite(LED, LOW);
    }
}
