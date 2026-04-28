// https://github.com/florianreuth/Funduino

const int TRIG_PIN = 7;
const int ECHO_PIN = 6;

const int RED_PIN = 9;
const int GREEN_PIN = 5;
const int BLUE_PIN = 3;

const float SOUND_SPEED = 0.03432; // cm/µs
const int THRESHOLD_CM = 15;
const int PAUSE_MS = 100;

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    // Send trigger pulse
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(5);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Measure echo time
    long duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate distance
    float distance = (duration / 2.0) * SOUND_SPEED;

    Serial.print("Entfernung: ");
    Serial.println(distance);

    // Set LED color
    if (distance > 0 && distance < THRESHOLD_CM) {
        setColor(0, 255, 0); // green
    } else {
        setColor(255, 0, 0); // red
    }

    delay(PAUSE_MS);
}

void setColor(int red, int green, int blue) {
    analogWrite(RED_PIN, red);
    analogWrite(GREEN_PIN, green);
    analogWrite(BLUE_PIN, blue);
}
