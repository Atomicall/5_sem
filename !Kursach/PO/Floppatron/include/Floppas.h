#include <Arduino.h>
#include <TimerOne.h>
#include "Floppas_Rack.h"
const uint8_t MAX_FLOPPY_NOTE = 127;

class Floppas {
 public:
  Floppas();
  void setup(uint8_t count);
  void systemMessage(uint8_t command, uint8_t payload[]);
  void deviceMessage(uint8_t subAddress, uint8_t command,
                            uint8_t payload[]);
  void noteOnHandler(byte channel, byte note, byte velocity);
  void noteOffHandler(byte channel, byte note, byte velocity);
  void pitchBendHandler(byte channel, int bend);
  void startHandler();
  void stopHandler();
  void controlChangeHandler(byte channel, byte number, byte value);
  Floppas_Rack* floppas;
  uint8_t floppasCount = 1;
  void startupSound(byte rackNum);
  void tick();
 protected:

  void resetAll();
  void togglePin(byte driveNum, byte pin, byte direction_pin);//
  void haltAllDrives(); //
  void reset(byte rackNum);

  static void blinkLED(); //

};
