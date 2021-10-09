#include <Arduino.h>
#include <TimerOne.h>
#include "../MoppyConfig.h"

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
// 2 нулевых в начале
// 1 0 пин в начале


class Floppas_Rack{
    public:
    Floppas_Rack (){};

    protected:
    unsigned int MAX_POSITION[3] = {158,158,158};
    


    
};