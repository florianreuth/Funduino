// https://github.com/florianreuth/Funduino

const int LIGHT = 5;
const int SOUND = 7;

const int PAUSE_MS = 1000;

void setup() {
    pinMode(LIGHT, OUTPUT);
    pinMode(SOUND, OUTPUT);
}

void loop() {
    digitalWrite(LIGHT, HIGH);
    digitalWrite(SOUND, HIGH);
    delay(PAUSE_MS);

    digitalWrite(LIGHT, LOW);
    digitalWrite(SOUND, LOW);
    delay(PAUSE_MS);
}
