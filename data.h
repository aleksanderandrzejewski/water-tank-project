//---------------------------------------------------------------------------

#ifndef dataH
#define dataH
//---------------------------------------------------------------------------
#endif

//temperature
void store_real_temperature(double temp);
double get_real_temperature();

void store_desired_temperature(double temp);
double get_desired_temperature();

//heater
void store_heater_state(bool state);
bool get_heater_state();

//pump
void store_pump_state(bool state);
bool get_pump_state();

//overflow
void store_overflow_state(bool state);
bool get_overflow_state();

//level
void store_real_level(double temp);
double get_real_level();

void store_desired_level(double level);
double get_desired_level();
