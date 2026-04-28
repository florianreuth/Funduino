// https://github.com/florianreuth/Funduino

const int TRIG_PIN = 7;
const int ECHO_PIN = 6;

const float SOUND_SPEED = 0.03432; // cm/µs
const int MAX_DISTANCE = 100; // cm
const int PAUSE_MS = 500;

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.begin(9600);
}

void loop() {
    // Ensure clean signal
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(5);

    // Send 10 µs pulse
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Measure echo time (µs)
    long duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate distance (cm)
    float distance = (duration / 2.0) * SOUND_SPEED;

    // Output only if within range
    if (distance > 0 && distance < MAX_DISTANCE) {
        Serial.print("Entfernung in cm: ");
        Serial.println(distance);
    }

    delay(PAUSE_MS);
}