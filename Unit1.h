//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include "D:\Programms\Cpp\include\Options\Options.h"    // ��� ������� "���������"
#include <mshtml.h>     // ��� ����, ����� �������� ����� ��������� �� TCppWebBrowser
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
        // ����������
        Options* Settings;      // ��������� ���������

        struct ArmyStruct {             // ��������� � ������� �� ������ �������
                int Falang;             // �������
                int Sword;              // ������
                int Sledo;              // ��������
                int Tevtad;             // ���������� ����
                int Druid;              // �����-�������
                int Edru;               // ��������� �������
                int Taran;              // �����
                int Trebu;              // ��������
                int Predvod;            // ������������
                int Settler;            // ���������
                int X;
                int Y;                  // ���������� ���� ��������
                short Type;             // 0-������������ 1-��������� 2-�����
                TDateTime Time;          // ����� �����������
                };
        ArmyStruct *Army;

        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 