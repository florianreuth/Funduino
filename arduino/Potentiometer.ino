// https://github.com/florianreuth/Funduino

const int POTENTIOMETER = A0;
const int LED = 1;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    int value = analogRead(POTENTIOMETER);

    digitalWrite(LED, HIGH);
    delay(value);

    digitalWrite(LED, LOW);
    delay(value);
}
