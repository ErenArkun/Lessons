#include <Arduino.h>

const int ledPin = 9;
const int arttirButtonPin = 2;
const int azaltButtonPin = 3;

int ledSiddet = 0;

void setup(){
    pinMode(arttirButtonPin, INPUT_PULLUP);
    pinMode(azaltButtonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    analogWrite(ledPin, ledSiddet)
}

void loop(){
    if(digitalRead(arttirButtonPin) == LOW && ledSiddet < 255){
        ledSiddet += 5;
        analogWrite(ledPin, ledSiddet);
        delay(100);
    }

    if(digitalRead(azaltButtonPin) == LOW && ledSiddet > 0){
        ledSiddet -= 5;
        analogWrite(ledPin, ledSiddet);
        delay(100);
    }
}