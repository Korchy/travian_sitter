//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include "D:\Programms\Cpp\include\Options\Options.h"    // Для объекта "Настройки"
#include <mshtml.h>     // Для того, чтобы получить текст документа из TCppWebBrowser
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include "SHDocVw_OCX.h"
#include <OleCtrls.hpp>
#include <ComCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel;
        TMainMenu *MainMenu;
        TMenuItem *N1;
        TMenuItem *N2;
        TCppWebBrowser *Browser;
        TTimer *UpdTimer;
        TPageControl *Pages;
        TTabSheet *List1;
        TTabSheet *List2;
        TTabSheet *List3;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TEdit *ArmyEdit5;
        TEdit *ArmyEdit4;
        TEdit *ArmyEdit3;
        TEdit *ArmyEdit2;
        TEdit *ArmyEdit1;
        TLabel *Label10;
        TLabel *Label9;
        TLabel *Label8;
        TLabel *Label7;
        TLabel *Label6;
        TEdit *ArmyEdit6;
        TEdit *ArmyEdit7;
        TEdit *ArmyEdit8;
        TEdit *ArmyEdit9;
        TEdit *ArmyEdit10;
        TButton *ArmyOk;
        TEdit *ArmyY;
        TLabel *Label12;
        TEdit *ArmyX;
        TLabel *Label11;
        TDateTimePicker *ArmyDate;
        TRadioGroup *ArmyGroup;
        TDateTimePicker *ArmyTime;
        TTreeView *ArmyTree;
        TCheckBox *SaveBox1;
        TCheckBox *SaveBox2;
        TTimer *WorkTimer;
        TLabel *Label13;
        TEdit *SaveArmyX;
        TLabel *Label14;
        TEdit *SaveArmyY;
        void __fastcall N2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormDestroy(TObject *Sender);
        void __fastcall UpdTimerTimer(TObject *Sender);
        void __fastcall WorkTimerTimer(TObject *Sender);
private:	// User declarations

public:		// User declarations
        // Переменные
        Options* Settings;      // Настройки программы

        struct ArmyStruct {             // Структура с данными по каждой команде
                int Falang;             // Фаланга
                int Sword;              // Мечник
                int Sledo;              // Следопыт
                int Tevtad;             // Тевтадский гром
                int Druid;              // Друид-всадник
                int Edru;               // Эдруйская конница
                int Taran;              // Таран
                int Trebu;              // Требучет
                int Predvod;            // Предводитель
                int Settler;            // Поселенец
                int X;
                int Y;                  // Координаты куда посылать
                short Type;             // 0-Подкрепление 1-Нападение 2-Набег
                TDateTime Time;          // Время выступления
                };
        ArmyStruct *Army;

        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 