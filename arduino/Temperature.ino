// https://github.com/florianreuth/Funduino

const int TMP36 = A0;
const int PAUSE_MS = 500;

void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(TMP36);

    // convert sensor value to temperature
    int temperature = map(sensorValue, 0, 410, -50, 150);

    Serial.print(temperature);
    Serial.println(" Grad Celsius");

    delay(PAUSE_MS);
}
