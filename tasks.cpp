//---------------------------------------------------------------------------


#pragma hdrstop

#include "process.h"
#include "Unit1.h"
#include "data.h"
#include "tasks.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

void read_sensors(){
 store_real_temperature(process_read_temperature());
 store_real_level(process_read_level());
 store_overflow_state(process_read_overflow());
}

//heater
void set_heater_off(){
        store_heater_state(false);
}
void set_heater_on(){
        store_heater_state(true);
}


//pump
void set_pump_off(){
        store_pump_state(false);
}

void set_pump_on(){
        store_pump_state(true);
}





void trigger_actuators()
{
        process_write_heater(get_heater_state());
        process_write_pump(get_pump_state());
        process_write_valve(get_overflow_state());
}
