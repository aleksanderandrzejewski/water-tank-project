//- process.cpp -------------------------------------------------------------
#include "process.h"
#include <vcl.h>
#include <stdio.h>
#include "ss_nidaqmx.h"
// overflow sensor
#define OVERFLOW_SENSOR_CHANNEL "InfiDAQ/port1" // read all the port
#define OVERFLOW_SENSOR_BIT 0 // bit 0 is the overflow sensor
TaskHandle overflow_sensor_task;

TaskHandle temperature_sensor_task;
TaskHandle level_sensor_task;

int mirror_DO;
TaskHandle actuators_task;


// process error reporting --------------------------------------------------
void process_error(int32 code, char* suffix)
{
    char msg[2000];
    char buff[1000]; // buffer for the error message
    DAQmxGetErrorString(code, buff, 1000); // get the error message
    sprintf(msg, "Error: %s\nIn: %s", suffix, buff);
    ShowMessage(msg);
    exit(1); // force the end of the application
}
// process initialization ---------------------------------------------------
void process_init(void)
{

//temperature
    int32 daq_error;
    // -- temperature sensor preparation
    daq_error = DAQmxCreateTask("temperature task", &temperature_sensor_task);
    if (daq_error != 0)
        process_error(daq_error, "process_init()->temperature_1");
    daq_error = DAQmxCreateAIVoltageChan(temperature_sensor_task, "Dev4/ai0", "", DAQmx_Val_RSE, 0.0, 10.0, DAQmx_Val_Volts, NULL);
    if (daq_error != 0)
        process_error(daq_error, "process_init()->temperature_2");


//level

    // -- level sensor preparation
    daq_error = DAQmxCreateTask("level task", &level_sensor_task);
    if (daq_error != 0)
        process_error(daq_error, "process_init()->level_1");
    daq_error = DAQmxCreateAIVoltageChan(level_sensor_task, "Dev4/ai1", "", DAQmx_Val_RSE, 0.0, 10.0, DAQmx_Val_Volts, NULL);
    if (daq_error != 0)
        process_error(daq_error, "process_init()->level_2");



//heater
mirror_DO = 0x00;
// -- actuators task preparation
daq_error = DAQmxCreateTask("actuators task", &actuators_task);
if (daq_error != 0)
process_error(daq_error,"process_init()");
// task for reading complete port
daq_error = DAQmxCreateDOChan (actuators_task, "InfiDAQ/port0",
"",DAQmx_Val_ChanForAllLines);

//overflow
// -- overflow sensor preparation
// first, create an empty task
daq_error = DAQmxCreateTask("overflow task",&overflow_sensor_task);
if (daq_error != 0)
process_error(daq_error,"process_init()->1");
// now, add channels to the task. In this example, a complete port
daq_error = DAQmxCreateDIChan(overflow_sensor_task, "InfiDAQ/port1",
"",DAQmx_Val_ChanForAllLines);
if (daq_error != 0)
process_error(daq_error,"process_init()->2");
}


// read temperature sensor --------------------------------------------------
double process_read_temperature(void)
{
    int32 daq_error;
    float64 volts;
    double degrees;
    // ?? task started automatically

    daq_error = DAQmxReadAnalogScalarF64(temperature_sensor_task, 1.0,&volts, NULL);
    if (daq_error != 0)
        process_error(daq_error, "process_read_temperature()");
    // ... and stopped
    degrees = volts * (100.0/10.0); // real tank, 0V=0ºC, 10V=100ºC
    //degrees = (volts * 100.0) - 273.15; // LM335 transference function
    return (degrees);
}


// read temperature sensor --------------------------------------------------
double process_read_level(void)
{
    int32 daq_error;
    float64 volts;
    double level;
    // ?? task started automatically

    daq_error = DAQmxReadAnalogScalarF64(level_sensor_task, 1.0,&volts, NULL);
    if (daq_error != 0)
        process_error(daq_error, "process_read_level()");
    // ... and stopped
    level = volts * (100.0/10.0); // real tank, 0V=0cm, 10V=100cm
    return(level);
}





// write heater actuator -----------------------------------------------------
//false->off, true->on
void process_write_heater(bool state) {
int32 daq_error;
if (state == true) {
mirror_DO = mirror_DO & ~0x01;
} else {
mirror_DO = mirror_DO | 0x01;
}
daq_error = DAQmxWriteDigitalScalarU32 (actuators_task, true, 0.0,
mirror_DO, NULL);
if (daq_error != 0)
process_error(daq_error,"process_write_heater()");
}

// write pump actuator -----------------------------------------------------
//false->off, true->on
void process_write_pump(bool state) {
int32 daq_error;
if (state == true) {
mirror_DO = mirror_DO & ~0x02;
} else {
mirror_DO = mirror_DO | 0x02;
}
daq_error = DAQmxWriteDigitalScalarU32 (actuators_task, true, 0.0,
mirror_DO, NULL);
if (daq_error != 0)
process_error(daq_error,"process_write_heater()");
}


// write pump actuator -----------------------------------------------------
//false->off, true->on
void process_write_valve(bool state) {
int32 daq_error;
if (state == true) {
mirror_DO = mirror_DO & ~0x03;
} else {
mirror_DO = mirror_DO | 0x03;
}
daq_error = DAQmxWriteDigitalScalarU32 (actuators_task, true, 0.0,
mirror_DO, NULL);
if (daq_error != 0)
process_error(daq_error,"process_write_valve()");
}



// read overflow sensor and return state ------------------------------------
int process_read_overflow(void) {
int32 daq_error;
uInt32 data;
daq_error = DAQmxReadDigitalScalarU32 (overflow_sensor_task, 0.0, &data,
NULL);
if (daq_error != 0)
process_error(daq_error,"process_read_overflow()");

// DAQmxStopTask() optional


if ((data & 0x01) == 0)  //overflow sensor at bit 0
        return(true);
else
        return(false);
}
