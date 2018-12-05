#include <vcl.h>
#pragma hdrstop
#include "process.h"
#include "Unit1.h"
#include "data.h"
#include "tasks.h"
#include "control.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
: TForm(Owner)
{}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Button1->Enabled = false;
process_init();
Timer1->Enabled = true;



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//sequence
//1 Reading the sensors
//2 Reading the objectives
//3 Calculations
//4 Actions
//5 Visualisation

//1 Reading the sensors
read_sensors();

//2 Reading the objectives (on a click of a button only)

//3 Calculations
control();

//4 Actions
trigger_actuators();

//5 Visualisation

Label1->Caption = get_real_temperature();
Label3->Caption = get_desired_temperature();
Label15->Caption = get_real_level();
Label16->Caption = get_desired_level();

//heater state
if (get_heater_state())
        {heaterstate->Caption = "ON";
         heaterimage->Brush->Color = clRed;
        }
else
        {heaterstate->Caption = "OFF";
         heaterimage->Brush->Color = clGray;
        }

//pump state
if (get_pump_state())
        {pumpstate->Caption = "ON";
         pumpimage->Brush->Color = clGreen;
        }
else
        {pumpstate->Caption = "OFF";
         pumpimage->Brush->Color = clWhite;
        }

//overflow sensor
if (get_overflow_state())
        {overflowstate->Caption = "YES";
         overflowimage->Brush->Color = clGreen;
         valvestate->Caption = "OPENED";
         valveimage->Brush->Color = clGreen;

        }
else
        {overflowstate->Caption = "NO";
         overflowimage->Brush->Color = clWhite;
         valvestate->Caption = "CLOSED";
         valveimage->Brush->Color = clWhite;

        }


 double slider = 1.61*(  100-get_real_temperature());
 if (slider>161) slider=161;
 if (slider<0) slider=0;
 temp_slider-> Height = slider;

 double water_level = 1.37*get_real_level();
 if (water_level>140) water_level=140;
 if (water_level<0) water_level=0;
 waterimage-> Height = water_level;
 waterimage-> Top = 208+137 - water_level;

}



//---------------------------------------------------------------------------









void __fastcall TForm1::setClick(TObject *Sender)
{
        try
        {                store_desired_temperature(temperaturebox->Text.ToDouble());
        }
        catch (...)
        {
            ShowMessage("It is not a real number");        }

        try
        {                store_desired_level(levelbox->Text.ToDouble());
        }
        catch (...)
        {
            ShowMessage("It is not a real number");        }


}
//---------------------------------------------------------------------------









