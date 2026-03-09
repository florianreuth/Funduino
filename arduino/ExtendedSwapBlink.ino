// https://github.com/florianreuth/Funduino

const int START_LED = 2;
const int END_LED = 11;

const int PAUSE_MS = 1000;

void setup() {
    // Make pins outputs
    for (int pin = START_LED; pin <= END_LED; pin++) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < (END_LED - 1) / 2; i++) {
        blinkPins(START_LED + i, END_LED - i);
        delay(PAUSE_MS / 2); // pause between steps
    }
}

void blinkPins(int firstPin, int secondPin) {
    digitalWrite(firstPin, HIGH);
    digitalWrite(secondPin, HIGH);
    delay(PAUSE_MS);
    digitalWrite(firstPin, LOW);
    digitalWrite(secondPin, LOW);
}
