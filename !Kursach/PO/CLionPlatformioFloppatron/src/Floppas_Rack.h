#include <Arduino.h>
#include "MoppyConfig.h"
#include "MoppyInstruments/MoppyInstrument.h"

struct Drive
{
    uint8_t stepPin = 0;
    uint8_t dirPin = 0;

    uint8_t originalPeriod=0;
    uint8_t currentTick = 0;
    uint8_t currentPeriod = 0;

    uint8_t currentState = LOW;
    uint8_t currentPosition = 0;

};

// вообще и структуры не нужны, но задел на будущее, если 
// 2 нулевых в начале
// 1 0 пин в начале


class Floppas_Rack{
    public:
    Floppas_Rack (){};


    Drive drive [3];
    uint8_t originalPeriod[3] = {};
    uint8_t currentTick[3] = {};
    uint8_t currentPeriod[3] = {};

    void setupPinModes(uint8_t& d1S, uint8_t& d1D, uint8_t& d2S, uint8_t& d2D,
                                                    uint8_t& d3S, uint8_t& d3D);
    void toggleRack(uint8_t& whatDrives);
    protected:
    uint8_t MAX_POSITION[3] = {158,158,158};
};