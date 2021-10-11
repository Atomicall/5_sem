#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Platform.h>
#include <midi_Settings.h>
#include <MIDI.h>
#include <serialMIDI.h>
#include <Arduino.h>


#include "MoppyInstruments/FloppyDrives.h"
FloppyDrives instrument = FloppyDrives();

/*MIDI_CREATE_INSTANCE(HardwareSerial, Serial1,    midi1);
MIDI_CREATE_INSTANCE(HardwareSerial, Serial3,    midi2);*/

void setup()
{
    // Call setup() on the instrument to allow to to prepare for action
/*    instrument.setup();
    midi1.setHandleNoteOn(instrument.noteOnHandler);
    midi1.setHandleNoteOff(instrument.noteOffHandler);
    // midi1.setHandlePitchBend(instrument.pitchBendHandler);
    midi1.setHandleStart(instrument.startHandler);
    midi1.setHandleStop(instrument.stopHandler);
    midi1.setHandleControlChange(instrument.controlChangeHandler);
    midi1.begin(MIDI_CHANNEL_OMNI);
    midi1.turnThruOff();
    Serial1.begin(200000);
    midi2.setHandleNoteOn(instrument.noteOnHandler);
    midi2.setHandleNoteOff(instrument.noteOffHandler);
    // midi1.setHandlePitchBend(instrument.pitchBendHandler);
    midi2.setHandleStart(instrument.startHandler);
    midi2.setHandleStop(instrument.stopHandler);
    midi2.setHandleControlChange(instrument.controlChangeHandler);
    midi2.begin(MIDI_CHANNEL_OMNI);
    midi2.turnThruOff();
    Serial3.begin(31250);*/
    pinMode(17, OUTPUT);
    digitalWrite(17, LOW);
    pinMode(0, OUTPUT);
    digitalWrite(14, LOW);
}

// The loop function is called in an endless loop
void loop()
{
    // Endlessly read messages on the network.  The network implementation
    // will call the system or device handlers on the intrument whenever a message is received.
    //midi1.read();
   //midi2.read();
}
