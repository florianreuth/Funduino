// https://github.com/florianreuth/Funduino

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;

const int MOTION = 7;

const int PAUSE_MS = 200;

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

    pinMode(MOTION, INPUT);
}

void toggle(int pin) {
    digitalWrite(pin, HIGH);
    delay(PAUSE_MS);
    digitalWrite(pin, LOW);
}

void loop() {
    int motion = digitalRead(MOTION);
    if (motion == HIGH) {
        toggle(LED1);
        toggle(LED2);
        toggle(LED3);
        toggle(LED4);
    } else {
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
    }
}
