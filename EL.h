//---------------------------------------------------------------------------

#ifndef ELH
#define ELH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TElectroLive : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TEdit *U;
	TEdit *R;
	TEdit *I;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *SumOm;
	void __fastcall SumOmClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TElectroLive(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TElectroLive *ElectroLive;
//---------------------------------------------------------------------------
#endif
