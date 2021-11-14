#include "../include/Floppas.h"

#define FIRST_RACK 1
#define LAST_RACK 1
Floppas::Floppas() {

}

void Floppas::setup(uint8_t count) {
    Serial.write("Floppas setup: racks: ");
    Serial.write(RACK_COUNT);
    Serial.write("\n");

    //this->floppasRackCount = LAST_RACK - FIRST_RACK + 1;
    this->floppasRackCount = RACK_COUNT;
    // [0] is empty
    floppas = new Floppas_Rack [floppasRackCount];
   /* for (;;){
    }*/
   uint8_t firstPin = 24;
   //Todo
   for (uint8_t i=0; i< RACK_COUNT; i++){

       floppas[i].setupPinModes(24, 22, 28, 26, 32, 30);
   }
   //floppas[0].setupPinModes(12, 11, 10, 9, 8, 7);
   resetAll();
   delay(20); // Wait a half second for safety
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
    floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
}

void Floppas::pitchBendHandler(byte channel, int bend) {
    floppas[channel].currentPeriod = floppas[channel].originalPeriod / pow(2.0, BEND_OCTAVES*(bend/(float)8192));
}

void Floppas::startHandler() {

}

void Floppas::stopHandler() {

}

void Floppas::controlChangeHandler(byte channel, byte number, byte value) {
    switch(number)
    {
        case 120:
        {
            floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
            break;
        }
        case 123:
        {
            floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
            break;
        }
    }
}

void Floppas::resetAll() {
    for (int i=0; i < floppasRackCount; i++){
        Serial.write("Rack "); Serial.write(i);Serial.write(" Reset\n");
        floppas[i].resetRack();
    }

}



void Floppas::reset(byte rackNum) {
    floppas[rackNum].resetRack();

}

void Floppas::tick() {

    for (int d = 0; d < floppasRackCount; d++) {
        if (floppas[d].currentPeriod > 0) {
            floppas[d].currentTick++;
            if (floppas[d].currentTick >= floppas[d].currentPeriod) {
                floppas[d].toggleRack(3); // Drive 1 is on pins 2 and 3, etc.
                floppas[d].currentTick = 0;
            }
        }
    }

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
    delay(300);
    while(i < 5) {
        if (millis() - 200 > lastRun) {
            lastRun = millis();
           // Serial.write("Note ");
           // Serial.write(toAscii(i));
           // Serial.write("\n");
            floppas[rackNum].currentPeriod = chargeNotes[i++];
        }
    }


}
