// https://github.com/florianreuth/Funduino

const int LED1_RED = 5;
const int LED1_GREEN = 6;
const int LED1_BLUE = 3;

const int LED2_RED = 9;
const int LED2_GREEN = 10;
const int LED2_BLUE = 11;

const int BRIGHTNESS = 150;
const int PAUSE_MS = 1000;

void setup() {
    pinMode(LED1_RED, OUTPUT);
    pinMode(LED1_GREEN, OUTPUT);
    pinMode(LED1_BLUE, OUTPUT);

    pinMode(LED2_RED, OUTPUT);
    pinMode(LED2_GREEN, OUTPUT);
    pinMode(LED2_BLUE, OUTPUT);
}

void setColor(int redPin, int greenPin, int bluePin, int red, int green, int blue) {
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

void loop() {
    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, BRIGHTNESS, BRIGHTNESS, 0);

    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, 0, 0, BRIGHTNESS);
    delay(PAUSE_MS);

    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, 0, 0, 0);
    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, 0, 0, 0);

    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, 0, BRIGHTNESS, BRIGHTNESS);

    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, BRIGHTNESS, 0, 0);
    delay(PAUSE_MS);

    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, 0, 0, 0);
    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, 0, 0, 0);

    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, BRIGHTNESS, 0, BRIGHTNESS);

    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, 0, BRIGHTNESS, 0);
    delay(PAUSE_MS);

    setColor(LED1_RED, LED1_GREEN, LED1_BLUE, 0, 0, 0);
    setColor(LED2_RED, LED2_GREEN, LED2_BLUE, 0, 0, 0);
}
