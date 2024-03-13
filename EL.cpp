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

    // Проверяем, известны ли значения напряжения, тока и сопротивления
    bool isIEmpty = Itxt.IsEmpty();
    bool isREmpty = Rtxt.IsEmpty();
    bool isUEmpty = Utxt.IsEmpty();

    // Проверяем, что хотя бы одно из значений неизвестно
    if (isIEmpty + isREmpty + isUEmpty != 1)
    {
        ShowMessage("Пожалуйста, введите только одно из значений напряжения, тока или сопротивления!");
        return;
    }

    // Выполняем расчет
    if (isIEmpty)
    {
        // Расчет тока, если он неизвестен
        int U = StrToInt(Utxt);
        int R = StrToInt(Rtxt);
        float result = static_cast<float>(U) / R;
        I->Text = FormatFloat("#0.####", result);
    }
    else if (isREmpty)
    {
        // Расчет сопротивления, если он неизвестен
        float U = StrToFloat(Utxt);
        float I = StrToFloat(Itxt);
        float result = U / I;
        R->Text = FormatFloat("#0.####", result);
    }
    else if (isUEmpty)
    {
        // Расчет напряжения, если он неизвестен
        float I = StrToFloat(Itxt);
        float R = StrToFloat(Rtxt);
        float result = I * R;
        U->Text = FormatFloat("#0.####", result);
    }
}
//---------------------------------------------------------------------------
