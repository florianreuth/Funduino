// https://github.com/florianreuth/Funduino

const int LED1 = 5;
const int LED2 = 3;
const int LED3 = 2;
const int LED4 = 6;

float t = 0.0;
float speed = 0.05;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  int b1 = wave(t);
  int b2 = wave(t + 2.1);
  int b3 = wave(t + 4.2);
  int b4 = wave(t + 8.4);

  analogWrite(LED1, b1);
  analogWrite(LED2, b2);
  analogWrite(LED3, b3);
  analogWrite(LED4, b4);

  t += speed;
  delay(20);
}

int wave(float x) {
  return (sin(x) + 1.0) * (255 / 2);
}