#include "../include/Floppas_Rack.h"

void Floppas_Rack::setupPinModes(uint8_t d1S, uint8_t d1D, uint8_t d2S, uint8_t d2D, uint8_t d3S, uint8_t d3D) {
    pinMode(d1S, OUTPUT);
    pinMode(d1D, OUTPUT);
    pinMode(d2S, OUTPUT);
    pinMode(d2D, OUTPUT);
    pinMode(d3S, OUTPUT);
    pinMode(d3D, OUTPUT);
    drive[0].stepPin = d1S;
    drive[0].dirPin = d1D;
    drive[1].stepPin = d2S;
    drive[1].dirPin = d2D;
    drive[2].stepPin = d3S;
    drive[2].dirPin = d3D;
    /*digitalWrite( drive[0].stepPin, HIGH);
    digitalWrite( drive[1].stepPin, HIGH);
    digitalWrite( drive[2].stepPin, HIGH);
    digitalWrite( drive[0].dirPin, HIGH);
    digitalWrite( drive[1].dirPin, HIGH);
    digitalWrite( drive[2].dirPin, HIGH);*/

}

void Floppas_Rack::toggleRack(uint8_t whatDrives) {

    for (int i = 0; i< whatDrives; i++){
    if (drive[i].currentPosition >= MAX_POSITION[0]) {
        drive[i].currentStateDir = HIGH;
        digitalWrite(drive[i].dirPin,HIGH);
    }
    else if (drive[i].currentPosition <= 0) {
        drive[i].currentStateDir = LOW;
        digitalWrite(drive[i].dirPin,LOW);
    }
    //Update currentPosition
    if (drive[i].currentStateDir == HIGH){
        drive[i].currentPosition--;
    }
    else {
        drive[i].currentPosition++;
    }
    //Pulse the control pin
    digitalWrite(drive[i].stepPin, drive[i].currentStatePin);
        drive[i].currentStatePin = ~drive[i].currentStatePin;
}
    delay(5);
}

void Floppas_Rack::resetRack() {
    for (uint8_t i=0; i<3; i++){
        this->currentPeriod = 0;
        digitalWrite(this->drive[i].dirPin, HIGH);
        for (uint8_t s=0;s<MAX_POSITION[0];s+=2){
                digitalWrite(this->drive[i].stepPin,HIGH);
                delay(3);
                digitalWrite(this->drive[i].stepPin,LOW);
            //delay(5);
            }
        //byte stepPin = this->drive[i].stepPin;
        this->drive[i].currentPosition = 0; // We're reset.
        this->drive[i].currentStateDir = LOW;
        digitalWrite(this->drive[i].dirPin,LOW);
        //this->drive[i].currentStateDir = LOW; // Ready to go forward.
        }

}
