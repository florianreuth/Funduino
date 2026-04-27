// https://github.com/florianreuth/Funduino

const int PHOTORESISTOR = A0;

// LED pins
const int LIGHTS[] = {12, 11, 10, 9};
const int LED_COUNT = 4;

// Thresholds (higher = brighter environment)
const int THRESHOLDS[] = {98, 88, 78, 68};

void setup() {
    for (int i = 0; i < LED_COUNT; i++) {
        pinMode(LIGHTS[i], OUTPUT);
    }
}

void loop() {
    int light = analogRead(PHOTORESISTOR);
    for (int i = 0; i < LED_COUNT; i++) {
        if (light < THRESHOLDS[i]) {
            digitalWrite(LIGHTS[i], HIGH);
        } else {
            digitalWrite(LIGHTS[i], LOW);
        }
    }

    delay(200);
}
