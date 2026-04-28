// https://github.com/florianreuth/Funduino

// See https://github.com/Arduino-IRremote/Arduino-IRremote
#include <IRremote.h>

// Pin for IR receiver
const int IR_PIN = 11;

void setup() {
    Serial.begin(9600);
    IrReceiver.begin(IR_PIN);
}

void loop() {
    if (IrReceiver.decode()) {
        int command = IrReceiver.decodedIRData.command;
        if (command > 0 && command < 95) { // Filter valid commands
            Serial.print("Dezimalwert: ");
            Serial.print(command);
            Serial.print(" -> ");

            printButton(command);
        }

        IrReceiver.resume(); // ready for next signal
    }
}

void printButton(int cmd) {
    switch (cmd) {
        case 69: Serial.println("A"); break;
        case 70: Serial.println("Pfeil oben"); break;
        case 71: Serial.println("B"); break;
        case 68: Serial.println("Pfeil links"); break;
        case 64: Serial.println("X"); break;
        case 67: Serial.println("Pfeil rechts"); break;
        case 7:  Serial.println("0"); break;
        case 21: Serial.println("Pfeil unten"); break;
        case 9:  Serial.println("C"); break;
        case 22: Serial.println("1"); break;
        case 25: Serial.println("2"); break;
        case 13: Serial.println("3"); break;
        case 12: Serial.println("4"); break;
        case 24: Serial.println("5"); break;
        case 94: Serial.println("6"); break;
        case 8:  Serial.println("7"); break;
        case 28: Serial.println("8"); break;
        case 90: Serial.println("9"); break;
        default: Serial.println("Unbekannt"); break;
    }
}
