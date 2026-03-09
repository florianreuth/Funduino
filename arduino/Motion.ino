// https://github.com/florianreuth/Funduino

const int SOUND = 5;
const int MOTION = 7;

const int PAUSE_MS = 5000;

void setup() {
    pinMode(SOUND, OUTPUT);
    pinMode(MOTION, INPUT);
}

void loop() {
    int motion = digitalRead(MOTION);
    if (motion == HIGH) {
        digitalWrite(SOUND, HIGH);
        delay(PAUSE_MS);
        digitalWrite(SOUND, LOW);
    } else {
        digitalWrite(SOUND, LOW);
    }
}
