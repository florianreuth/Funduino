// https://github.com/florianreuth/Funduino

// See https://github.com/Arduino-IRremote/Arduino-IRremote
#include <IRremote.h>

const int IR_PIN = 11;

// RGB Pins
const int RED = 3;
const int GREEN = 5;
const int BLUE = 6;

int brightness = 255;

void setup() {
    Serial.begin(9600);

    IrReceiver.begin(IR_PIN);

    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void loop() {
    if (IrReceiver.decode()) {
        int cmd = IrReceiver.decodedIRData.command;
        Serial.println(cmd);

        switch (cmd) {
            case 22: setColor(255, 0, 0); break;       // 0 = Rot
            case 12: setColor(0, 255, 0); break;       // 1 = Grün
            case 24: setColor(0, 0, 255); break;       // 2 = Blau

            case 94: setColor(255, 255, 0); break;     // 3 = Gelb
            case 8: setColor(255, 0, 255); break;     // 4 = Lila
            case 28: setColor(0, 255, 255); break;     // 5 = Türkis

            case 90: setColor(255, 255, 255); break;   // 6 = Weiß
            case 66: setColor(0, 0, 0); break;         // 7 = Aus

            case 82: // 8 = heller
                brightness += 25;
                brightness = constrain(brightness, 0, 255);
                break;

            case 74: // 9 = dunkler
                brightness -= 25;
                brightness = constrain(brightness, 0, 255);
                break;

            case 13: // 200+ = Disco
                discoMode();
                break;
        }

        IrReceiver.resume();
    }
}

void setColor(int r, int g, int b) {
    r = r * brightness / 255;
    g = g * brightness / 255;
    b = b * brightness / 255;

    analogWrite(RED, r);
    analogWrite(GREEN, g);
    analogWrite(BLUE, b);
}

void discoMode() {
    for (int i = 0; i < 20; i++) {
        setColor(random(0, 256), random(0, 256), random(0, 256));
        delay(120);
    }
}
