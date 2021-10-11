#include <Arduino.h>
#include <TimerOne.h>
#include "Floppas_Rack.h"


class Floppas {
 public:
  Floppas();
  static void setup(uint8_t count);
  static void systemMessage(uint8_t command, uint8_t payload[]);
  static void deviceMessage(uint8_t subAddress, uint8_t command,
                            uint8_t payload[]);
  static void noteOnHandler(byte channel, byte note, byte velocity);
  static void noteOffHandler(byte channel, byte note, byte velocity);
  static void pitchBendHandler(byte channel, int bend);
  static void startHandler();
  static void stopHandler();
  static void controlChangeHandler(byte channel, byte number, byte value);
  Floppas_Rack* floppas;
  uint8_t floppasCount = 0;
 protected:

  static void resetAll(); 
  static void togglePin(byte driveNum, byte pin, byte direction_pin);//
  static void haltAllDrives(); //
  static void reset(byte driveNum); 
  static void tick(); 
  static void blinkLED(); //
  static void startupSound(byte driveNum); 
};
