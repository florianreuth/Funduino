// https://github.com/florianreuth/Funduino

const int LED = 13;

const int PAUSE_MS = 1000;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(PAUSE_MS);
    digitalWrite(LED, LOW);
    delay(PAUSE_MS);
}
