// https://github.com/FlorianMichael/Funduino

void setup() {
    for (int pin = 2; pin <= 11; pin++) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < 5; i++) {
        blinkPins(2 + i, 11 - i);
        delay(500); // pause between steps
    }
}

void blinkPins(int firstPin, int secondPin) {
  digitalWrite(firstPin, HIGH);
  digitalWrite(secondPin, HIGH);
  delay(1000);
  digitalWrite(firstPin, LOW);
  digitalWrite(secondPin, LOW);
}