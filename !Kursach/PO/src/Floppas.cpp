#include "Floppas.h" 

Floppas::Floppas(){
	
}
 //temp 1
static void Floppas::setup(uint8_t count){
	floppas = new Floppas_Rack [count];
	
	
}

static void Floppas::systemMessage(uint8_t command, uint8_t payload[]){
	//TODO
}


static void Floppas::noteOnHandler(byte channel, byte note, byte velocity){
	//TODO
}

static void Floppas::noteOffHandler(byte channel, byte note, byte velocity){
	//TODO
}

static void Floppas::pitchBendHandler(byte channel, int bend){
	//TODO
}

static void Floppas::startHandler(byte channel, int bend){
	//TODO
}

static void Floppas::stopHandler(byte channel, int bend){
	//TODO
}

static void Floppas::controlChangeHandler(byte channel, byte number, byte value){
	//TODO
}

static void Floppas::resetAll(byte channel, byte number, byte value){
	//TODO
}

static void Floppas::togglePin(byte driveNum, byte pin, byte direction_pin){
	//TODO
}

static void Floppas::haltAllDrives(byte driveNum, byte pin, byte direction_pin){
	//TODO
}

static void Floppas::reset(byte driveNum){
	//TODO
}

static void Floppas::tick(byte driveNum){
	//TODO
}

static void Floppas::blinkLED(byte driveNum){
	//TODO
}

static void Floppas::startupSound(byte driveNum){
	//TODO
}

