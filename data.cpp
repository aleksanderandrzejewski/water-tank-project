//---------------------------------------------------------------------------


#pragma hdrstop

#include "data.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)



//temperature
static double real_temperature;
void store_real_temperature(double temp){
        real_temperature=temp;
}

double get_real_temperature(){
        return(real_temperature);
}


static double desired_temperature=50;
void store_desired_temperature(double temp){
        desired_temperature=temp;
}

double get_desired_temperature(){
        return(desired_temperature);
}

//heater
bool heater_state=false;

void store_heater_state(bool state){
        heater_state=state;
}

bool get_heater_state(){
        return(heater_state);
}

//pump
bool pump_state=false;

void store_pump_state(bool state){
        pump_state=state;
}

bool get_pump_state(){
        return(pump_state);
}

//overflow
bool overflow_state=false;

void store_overflow_state(bool state){
        overflow_state=state;
}

bool get_overflow_state(){
        return(overflow_state);
}

//level
static double real_level;
void store_real_level(double temp){
        real_level=temp;
}

double get_real_level(){
        return(real_level);
}


static double desired_level=50;
void store_desired_level(double level){
        desired_level=level;
}

double get_desired_level(){
        return(desired_level);
}

