// https://github.com/florianreuth/Funduino

const int LED = 12;
const int PHOTORESISTOR = A0;

const int THRESHOLD = 50;

void setup() {
    pinMode(LED, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    int light = analogRead(PHOTORESISTOR);
    if (light < THRESHOLD) {
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}
