// https://github.com/florianreuth/Funduino

const int LED_RED = 5;
const int LED_GREEN = 6;
const int LED_BLUE = 3;

const int PAUSE_MS = 1000;
const int BRIGHTNESS = 150;

void setColor(int red, int green, int blue) {
    analogWrite(LED_RED, red);
    analogWrite(LED_GREEN, green);
    analogWrite(LED_BLUE, blue);
}

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
}

void loop() {
    setColor(BRIGHTNESS, BRIGHTNESS, 0);
    delay(PAUSE_MS);

    setColor(0, BRIGHTNESS, BRIGHTNESS);
    delay(PAUSE_MS);

    setColor(BRIGHTNESS, 0, BRIGHTNESS);
    delay(PAUSE_MS);

    setColor(0, 0, 0);
    delay(PAUSE_MS);
}
