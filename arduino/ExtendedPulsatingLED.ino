// https://github.com/florianreuth/Funduino

const int LED1 = 5;
const int LED2 = 3;
const int LED3 = 2;
const int LED4 = 6;

const float SPEED = 0.05;
const float PAUSE_MS = 20;
const float MAX_BRIGHTNESS = 255;

float t = 0.0;

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
}

void loop() {
    int b1 = wave(t);
    int b2 = wave(t + 2.1);
    int b3 = wave(t + 4.2);
    int b4 = wave(t + 8.4);

    analogWrite(LED1, b1);
    analogWrite(LED2, b2);
    analogWrite(LED3, b3);
    analogWrite(LED4, b4);

    t += SPEED;
    delay(PAUSE_MS);
}

int wave(float x) {
    return (sin(x) + 1.0) * (MAX_BRIGHTNESS / 2);
}
