#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Platform.h>
#include <midi_Settings.h>
#include <MIDI.h>
#include <serialMIDI.h>
#include <Arduino.h>



#include "../.pio/libdeps/nanoatmega328new/TimerOne/TimerOne.h"
#include "../include/Floppas.h"


Floppas* fl;
 // Set up a timer at the resolution defined in MoppyInstrument.h

///
MIDI_CREATE_INSTANCE(HardwareSerial, Serial, midi1);


void hnd_int (){
    //Serial.write("Int");
    fl->tick();
}
void hnd_on(uint8_t ch, uint8_t note, uint8_t velocity){
    fl->noteOnHandler(ch-1, note, velocity);
}
void hnd_off(uint8_t ch, uint8_t note, uint8_t velocity){
    fl->noteOffHandler(ch-1, note, velocity);
}
void hnd_ctrlCh (byte channel, byte number, byte value){
    fl->controlChangeHandler(channel-1, number, value);
}
void hnd_ptchB(byte channel, int bend){
    fl->pitchBendHandler(channel-1, bend);
}
void initMidi(){
    midi1.setHandleNoteOn(hnd_on);
    midi1.setHandleNoteOff(hnd_off);
    midi1.setHandleControlChange(hnd_ctrlCh);
    midi1.setHandlePitchBend(hnd_ptchB);
    midi1.begin(MIDI_CHANNEL_OMNI);
    midi1.turnThruOff();
}

void setup() {
    Serial.begin(9600);
    fl = new Floppas;
    fl->setup(1);

    Timer1.initialize(40);
    Timer1.attachInterrupt(hnd_int);
    initMidi();
    Serial.begin(115200);
}

void loop() {
    midi1.read();
}
