// https://github.com/florianreuth/Funduino

const int LED_RED = 5;
const int LED_GREEN = 6;
const int LED_BLUE = 3;

const int BRIGHTNESS = 150;
const int PAUSE_MS = 1000;

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
}

void blinkPin(int led) {
    analogWrite(led, BRIGHTNESS);
    delay(PAUSE_MS);
    analogWrite(led, 0);
}

void loop() {
    blinkPin(LED_RED);
    blinkPin(LED_GREEN);
    blinkPin(LED_BLUE);
}
