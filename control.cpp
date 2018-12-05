//---------------------------------------------------------------------------
#pragma hdrstop

#include "process.h"
#include "Unit1.h"
#include "data.h"
#include "tasks.h"




#include "control.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
 void control(){
        if (get_real_temperature()>get_desired_temperature())
                {set_heater_off();}
        else
                {set_heater_on();}

         if (get_real_level()>get_desired_level())
                {set_pump_off();}
        else
                {set_pump_on();}

         if (get_overflow_state())
             {set_pump_off();}

 };
