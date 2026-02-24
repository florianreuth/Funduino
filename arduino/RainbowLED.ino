// https://github.com/florianreuth/Funduino

const int LED_RED = 5;
const int LED_GREEN = 6;
const int LED_BLUE = 3;

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
}

void blinkPin(int led) {
    analogWrite(led, 150);
    delay(1000);
    analogWrite(led, 0);
}

void loop() {
    blinkPin(LED_RED);
    blinkPin(LED_GREEN);
    blinkPin(LED_BLUE);
}
