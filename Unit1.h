//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TButton *Button1;
        TLabel *Label1;
        TEdit *temperaturebox;
        TLabel *temperature;
        TLabel *Label2;
        TButton *set;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TBevel *Bevel4;
        TLabel *Label7;
        TLabel *heaterstate;
        TShape *Shape1;
        TShape *Shape2;
        TShape *Shape3;
        TShape *valveimage;
        TShape *Shape5;
        TShape *Shape6;
        TShape *Shape7;
        TShape *Shape8;
        TShape *Shape9;
        TShape *heaterimage;
        TShape *Shape11;
        TShape *Shape12;
        TShape *pumpimage;
        TShape *Shape14;
        TShape *Shape15;
        TShape *waterimage;
        TLabel *Label8;
        TLabel *Label9;
        TShape *overflowimage;
        TLabel *Label10;
        TShape *Shape10;
        TShape *temp_slider;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TEdit *levelbox;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *pumpstate;
        TLabel *valvestate;
        TLabel *sdfss;
        TLabel *overflowstate;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall setClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
