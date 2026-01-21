// https://github.com/FlorianMichael/Funduino

int LIGHT = 5;
int SOUND = 7;

void setup() {
    pinMode(LIGHT, OUTPUT);
    pinMode(SOUND, OUTPUT);
}

void loop() {
    digitalWrite(LIGHT, HIGH);
    digitalWrite(SOUND, HIGH);
    delay(1000);

    digitalWrite(LIGHT, LOW);
    digitalWrite(SOUND, LOW);
    delay(1000);
}
