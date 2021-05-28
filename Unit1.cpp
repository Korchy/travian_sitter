//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//                              ������� ����
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
        // �����
Close();
}
//---------------------------------------------------------------------------
//                              ������� �����
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        // ��� �������� �����
        // ��������� ���������
Settings = new Options();
Settings->File = "ts.cfg";
if(Settings->Load()==true) {
        Form1->Top = StrToInt(Settings->FindByName("FormTop"));
        Form1->Left = StrToInt(Settings->FindByName("FormLeft"));
        Form1->Width = StrToInt(Settings->FindByName("FormWidth"));
        Form1->Height = StrToInt(Settings->FindByName("FormHeight"));
        switch (StrToInt(Settings->FindByName("FormStyle"))) {
                case 0: Form1->WindowState = wsNormal;
                        break;
                case 1: Form1->WindowState = wsMaximized;
                        break;
                case 2: Form1->WindowState = wsMinimized;
                        break;
                }
        UpdTimer->Interval = StrToInt(Settings->FindByName("UpdInterval"));
        }
        // ������� ��������� �������� Travian
Browser->Navigate(WideString("http://s1.travian.ru"));

//TTreeNode* Rez = Tree->Items->AddChildObject(Parent,Trim(TreeTable->FieldByName("name")->AsString),ItemInfo);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
        // ��� �������� �����
        // ��������� ���������
if(Form1->WindowState==wsNormal) {
        Settings->SetByName("FormStyle","0");
        Settings->SetByName("FormTop",IntToStr(Form1->Top));
        Settings->SetByName("FormLeft",IntToStr(Form1->Left));
        Settings->SetByName("FormWidth",IntToStr(Form1->Width));
        Settings->SetByName("FormHeight",IntToStr(Form1->Height));
        }
if(Form1->WindowState==wsMaximized) Settings->SetByName("FormStyle","1");
if(Form1->WindowState==wsMinimized) Settings->SetByName("FormStyle","2");
Settings->Save();
        // ������� ������ � �����������
delete Settings;
}
//---------------------------------------------------------------------------
//                        ��������� ������� �� �������
//---------------------------------------------------------------------------
void __fastcall TForm1::UpdTimerTimer(TObject *Sender)
{
        // ������ ��� ������� ��������
Browser->Refresh();
//Browser->Navigate(WideString("http://s1.travian.ru/dorf1.php"));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WorkTimerTimer(TObject *Sender)
{
        // ������ ��� ���������� �����-���� �������� (������� 1 � � �������)
        // ��������� ��������, ����� ����� �������� �� �����
TDateTime ServerDateTime;
TDateTime ComputerDateTime;
//if(AnsiString(Browser->LocationURL)=="http://s1.travian.ru/dorf1.php") {
//        IHTMLDocument2* HTMLDocument = NULL;
//        IPersistFile* PersistFile = NULL;
//        Browser->Document->QueryInterface(IID_IHTMLDocument2,(LPVOID*)&HTMLDocument);
//        HTMLDocument->QueryInterface(IID_IPersistFile,(LPVOID*)&PersistFile);
//        PersistFile->Save(WideString(GetCurrentDir()+"//Tmp.txt"),false);
        ComputerDateTime = Date()+Time();
//        PersistFile->Release();
        // ��������� ���������� ����� � StringList
        TStringList* TFile = new TStringList();
//        TFile->LoadFromFile(GetCurrentDir()+"//Tmp.txt");
        TFile->LoadFromFile(GetCurrentDir()+"\\Tmp.txt");
        AnsiString Text =  Utf8ToAnsi(TFile->Text);
        delete TFile;
//        MessageBox(NULL,(Text.SubString(Text.Pos("����� �������: ")+15,Text.Pos("GMT")-Text.Pos("����� �������: ")-15-2)).c_str(),"",NULL);
        ServerDateTime = StrToDateTime(Text.SubString(Text.Pos("����� �������: ")+15,Text.Pos("GMT")-Text.Pos("����� �������: ")-15-2));
        // ����������
        if(SaveBox1->Checked==true) {
                // ���������� �����
                // ���������, ����-�� ���������
                AnsiString AttackTimeTxt = "";
                AttackTimeTxt = Text.SubString(Text.Pos("� 1��������������")+17,Text.Pos("�.")-Text.Pos("� 1��������������")-17-1);
                if(AttackTimeTxt!="") {
                        TDateTime AttackTime = StrToDateTime(AttackTimeTxt);
                        // �� 15 ��� �� ��������� ������� ����� � ��������� �������
                        
                        }

                }

        // �����

        // ���������


//        }
}
//---------------------------------------------------------------------------

