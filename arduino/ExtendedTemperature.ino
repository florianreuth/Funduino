// https://github.com/florianreuth/Funduino

const int TMP36 = A0;

// LED pins
const int LED_COLD = 10;
const int LED_NORMAL = 9;
const int LED_HOT = 8;

const int DELAY_TIME = 500;

// temperature thresholds
const int COLD_MAX = 20;
const int HOT_MIN = 30;

void setup() {
    pinMode(LED_COLD, OUTPUT);
    pinMode(LED_NORMAL, OUTPUT);
    pinMode(LED_HOT, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(TMP36);
    int temperature = map(sensorValue, 0, 410, -50, 150);

    Serial.print(temperature);
    Serial.println(" Grad Celsius");

    digitalWrite(LED_COLD, LOW);
    digitalWrite(LED_NORMAL, LOW);
    digitalWrite(LED_HOT, LOW);

    if (temperature < COLD_MAX) {
        digitalWrite(LED_COLD, HIGH);
    } else if (temperature >= HOT_MIN) {
        digitalWrite(LED_HOT, HIGH);
    } else {
        digitalWrite(LED_NORMAL, HIGH);
    }

    delay(DELAY_TIME);
}