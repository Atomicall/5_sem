#include "../include/Floppas.h"

#define FIRST_RACK 1
#define LAST_RACK 1
Floppas::Floppas() {

}

void Floppas::setup(uint8_t count) {
    this->floppasCount = LAST_RACK - FIRST_RACK + 1;
    // [0] is empty
    floppas = new Floppas_Rack [floppasCount];
   /* for (;;){
    }*/
   floppas[0].setupPinModes(12, 11, 10, 9, 8, 7);
   resetAll();
   delay(500); // Wait a half second for safety
    // Setup timer to handle interrupts for floppy driving
    /*Timer1.initialize(TIMER_RESOLUTION); // Set up a timer at the resolution defined in MoppyInstrument.h
    Timer1.attachInterrupt(tick); // Attach the tick function*/
    //startupSound(FIRST_RACK);

}

void Floppas::systemMessage(uint8_t command, uint8_t *payload) {

}

void Floppas::deviceMessage(uint8_t subAddress, uint8_t command, uint8_t *payload) {

}

void Floppas::noteOnHandler(byte channel, byte note, byte velocity) {
    if(note <= MAX_FLOPPY_NOTE)
    {
        floppas[channel].currentPeriod = floppas[channel].originalPeriod = noteDoubleTicks[note];
    }
}

void Floppas::noteOffHandler(byte channel, byte note, byte velocity) {

}

void Floppas::pitchBendHandler(byte channel, int bend) {

}

void Floppas::startHandler() {

}

void Floppas::stopHandler() {

}

void Floppas::controlChangeHandler(byte channel, byte number, byte value) {

}

void Floppas::resetAll() {
    for (int i=0; i < floppasCount; i++){
        floppas[i].resetRack();
    }

}

void Floppas::togglePin(byte driveNum, byte pin, byte direction_pin) {

}

void Floppas::haltAllDrives() {

}

void Floppas::reset(byte rackNum) {
    floppas[rackNum].resetRack();

}

void Floppas::tick() {

    for (int d = 0; d < floppasCount; d++) {
        if (floppas[d].currentPeriod > 0) {
            floppas[d].currentTick++;
            if (floppas[d].currentTick >= floppas[d].currentPeriod) {
                floppas[d].toggleRack(3); // Drive 1 is on pins 2 and 3, etc.
                floppas[d].currentTick = 0;
            }
        }
    }

}

void Floppas::blinkLED() {

}

void Floppas::startupSound(byte rackNum) {
    unsigned int chargeNotes[] = {
            noteDoubleTicks[31],
            noteDoubleTicks[36],
            noteDoubleTicks[38],
            noteDoubleTicks[43],
            0
    };
    byte i = 0;
    unsigned long lastRun = 0;
    delay(1000);
    while(i < 5) {
        if (millis() - 200 > lastRun) {
            lastRun = millis();
            floppas[rackNum].currentPeriod = chargeNotes[i++];
        }
    }


}
