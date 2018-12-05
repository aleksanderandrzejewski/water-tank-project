#ifndef processH
#define processH
void process_init(void);
double process_read_temperature(void);
double process_read_level(void);

void process_write_heater(bool state);
void process_write_pump(bool state);
void process_write_valve(bool state);

int process_read_overflow(void);
//---------------------------------------------------------------------------
#endif