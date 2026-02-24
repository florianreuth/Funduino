// https://github.com/florianreuth/Funduino

const int LED_RED = 5;
const int LED_GREEN = 6;
const int LED_BLUE = 3;

const int BUTTON = 7;

const int BRIGHTNESS = 150;

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);

    pinMode(BUTTON, INPUT);
}

void setColor(int red, int green, int blue) {
    analogWrite(LED_RED, red);
    analogWrite(LED_GREEN, green);
    analogWrite(LED_BLUE, blue);
}

void loop() {
    if (digitalRead(BUTTON) == HIGH) {
        setColor(BRIGHTNESS, 0, 0);
        delay(500);

        setColor(0, BRIGHTNESS, 0);
        delay(500);

        setColor(0, 0, BRIGHTNESS);
        delay(500);
    }
}
