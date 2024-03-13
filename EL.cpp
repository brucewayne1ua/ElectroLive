//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TElectroLive *ElectroLive;
//---------------------------------------------------------------------------
__fastcall TElectroLive::TElectroLive(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TElectroLive::SumOmClick(TObject *Sender)
{
AnsiString Itxt = I->Text;
    AnsiString Rtxt = R->Text;
    AnsiString Utxt = U->Text;

    // ���������, �������� �� �������� ����������, ���� � �������������
    bool isIEmpty = Itxt.IsEmpty();
    bool isREmpty = Rtxt.IsEmpty();
    bool isUEmpty = Utxt.IsEmpty();

    // ���������, ��� ���� �� ���� �� �������� ����������
    if (isIEmpty + isREmpty + isUEmpty != 1)
    {
        ShowMessage("����������, ������� ������ ���� �� �������� ����������, ���� ��� �������������!");
        return;
    }

    // ��������� ������
    if (isIEmpty)
    {
        // ������ ����, ���� �� ����������
        int U = StrToInt(Utxt);
        int R = StrToInt(Rtxt);
        float result = static_cast<float>(U) / R;
        I->Text = FormatFloat("#0.####", result);
    }
    else if (isREmpty)
    {
        // ������ �������������, ���� �� ����������
        float U = StrToFloat(Utxt);
        float I = StrToFloat(Itxt);
        float result = U / I;
        R->Text = FormatFloat("#0.####", result);
    }
    else if (isUEmpty)
    {
        // ������ ����������, ���� �� ����������
        float I = StrToFloat(Itxt);
        float R = StrToFloat(Rtxt);
        float result = I * R;
        U->Text = FormatFloat("#0.####", result);
    }
}
//---------------------------------------------------------------------------
