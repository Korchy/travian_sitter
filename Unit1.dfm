object Form1: TForm1
  Left = 246
  Top = 162
  Width = 596
  Height = 550
  Caption = 'Travian Sitter'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Times New Roman'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 14
  object Panel: TPanel
    Left = 0
    Top = 0
    Width = 588
    Height = 200
    Align = alTop
    BevelOuter = bvNone
    BorderWidth = 1
    TabOrder = 0
    object Pages: TPageControl
      Left = 1
      Top = 1
      Width = 586
      Height = 198
      ActivePage = List1
      Align = alClient
      TabIndex = 0
      TabOrder = 0
      object List1: TTabSheet
        Caption = #1057#1086#1093#1088#1072#1085#1077#1085#1080#1077
        object Label13: TLabel
          Left = 24
          Top = 32
          Width = 8
          Height = 14
          Caption = 'X'
        end
        object Label14: TLabel
          Left = 104
          Top = 32
          Width = 8
          Height = 14
          Caption = 'Y'
        end
        object SaveBox1: TCheckBox
          Left = 8
          Top = 8
          Width = 225
          Height = 17
          Caption = #1057#1086#1093#1088#1072#1085#1103#1090#1100' '#1072#1088#1084#1080#1102
          TabOrder = 0
        end
        object SaveBox2: TCheckBox
          Left = 8
          Top = 64
          Width = 225
          Height = 17
          Caption = #1057#1086#1093#1088#1072#1085#1103#1090#1100' '#1088#1077#1089#1091#1088#1089#1099
          Enabled = False
          TabOrder = 1
        end
        object SaveArmyX: TEdit
          Left = 40
          Top = 32
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
        end
        object SaveArmyY: TEdit
          Left = 120
          Top = 32
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
        end
      end
      object List2: TTabSheet
        Caption = #1040#1088#1084#1080#1103
        ImageIndex = 1
        object Label1: TLabel
          Left = 8
          Top = 16
          Width = 39
          Height = 14
          Caption = #1060#1072#1083#1072#1085#1075#1072
        end
        object Label2: TLabel
          Left = 8
          Top = 32
          Width = 38
          Height = 14
          Caption = #1052#1077#1095#1085#1080#1082
        end
        object Label3: TLabel
          Left = 8
          Top = 48
          Width = 46
          Height = 14
          Caption = #1057#1083#1077#1076#1086#1087#1099#1090
        end
        object Label4: TLabel
          Left = 8
          Top = 64
          Width = 82
          Height = 14
          Caption = #1058#1077#1074#1090#1072#1076#1089#1082#1080#1081' '#1075#1088#1086#1084
        end
        object Label5: TLabel
          Left = 8
          Top = 80
          Width = 72
          Height = 14
          Caption = #1044#1088#1091#1080#1076'-'#1074#1089#1072#1076#1085#1080#1082
        end
        object Label10: TLabel
          Left = 152
          Top = 80
          Width = 51
          Height = 14
          Caption = #1055#1086#1089#1077#1083#1077#1085#1077#1094
        end
        object Label9: TLabel
          Left = 152
          Top = 64
          Width = 66
          Height = 14
          Caption = #1055#1088#1077#1076#1074#1086#1076#1080#1090#1077#1083#1100
        end
        object Label8: TLabel
          Left = 152
          Top = 48
          Width = 47
          Height = 14
          Caption = #1058#1088#1077#1073#1091#1095#1077#1090
        end
        object Label7: TLabel
          Left = 152
          Top = 32
          Width = 30
          Height = 14
          Caption = #1058#1072#1088#1072#1085
        end
        object Label6: TLabel
          Left = 152
          Top = 16
          Width = 93
          Height = 14
          Caption = #1069#1076#1088#1091#1081#1089#1082#1072#1103' '#1082#1086#1085#1085#1080#1094#1072
        end
        object Label12: TLabel
          Left = 208
          Top = 112
          Width = 8
          Height = 14
          Caption = 'Y'
        end
        object Label11: TLabel
          Left = 128
          Top = 112
          Width = 8
          Height = 14
          Caption = 'X'
        end
        object ArmyEdit5: TEdit
          Left = 96
          Top = 80
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
        end
        object ArmyEdit4: TEdit
          Left = 96
          Top = 64
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
        end
        object ArmyEdit3: TEdit
          Left = 96
          Top = 48
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
        end
        object ArmyEdit2: TEdit
          Left = 96
          Top = 32
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
        end
        object ArmyEdit1: TEdit
          Left = 96
          Top = 16
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
        end
        object ArmyEdit6: TEdit
          Left = 248
          Top = 16
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
        end
        object ArmyEdit7: TEdit
          Left = 248
          Top = 32
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
        end
        object ArmyEdit8: TEdit
          Left = 248
          Top = 48
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
        end
        object ArmyEdit9: TEdit
          Left = 248
          Top = 64
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
        end
        object ArmyEdit10: TEdit
          Left = 248
          Top = 80
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
        end
        object ArmyOk: TButton
          Left = 288
          Top = 120
          Width = 33
          Height = 25
          Caption = 'OK'
          TabOrder = 10
        end
        object ArmyY: TEdit
          Left = 224
          Top = 112
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
        end
        object ArmyX: TEdit
          Left = 144
          Top = 112
          Width = 49
          Height = 18
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -8
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
        end
        object ArmyDate: TDateTimePicker
          Left = 128
          Top = 136
          Width = 81
          Height = 22
          CalAlignment = dtaLeft
          Date = 39031.6979530093
          Time = 39031.6979530093
          DateFormat = dfShort
          DateMode = dmComboBox
          Kind = dtkDate
          ParseInput = False
          ParentShowHint = False
          ShowHint = False
          TabOrder = 13
        end
        object ArmyGroup: TRadioGroup
          Left = 8
          Top = 104
          Width = 113
          Height = 57
          Caption = #1044#1077#1081#1089#1090#1074#1080#1077
          Items.Strings = (
            #1055#1086#1076#1082#1088#1077#1087#1083#1077#1085#1080#1077
            #1053#1072#1087#1072#1076#1077#1085#1080#1077
            #1053#1072#1073#1077#1075)
          TabOrder = 14
        end
        object ArmyTime: TDateTimePicker
          Left = 208
          Top = 136
          Width = 65
          Height = 22
          CalAlignment = dtaLeft
          Date = 39031.6979530093
          Time = 39031.6979530093
          DateFormat = dfShort
          DateMode = dmComboBox
          Kind = dtkTime
          ParseInput = False
          ParentShowHint = False
          ShowHint = False
          TabOrder = 15
        end
        object ArmyTree: TTreeView
          Left = 328
          Top = 0
          Width = 250
          Height = 169
          Align = alRight
          Indent = 19
          TabOrder = 16
        end
      end
      object List3: TTabSheet
        Caption = #1055#1086#1089#1090#1088#1086#1081#1082#1080
        ImageIndex = 2
      end
    end
  end
  object Browser: TCppWebBrowser
    Left = 0
    Top = 200
    Width = 588
    Height = 304
    Align = alClient
    TabOrder = 1
    ControlData = {
      4C000000C63C00006B1F00000000000000000000000000000000000000000000
      000000004C000000000000000000000001000000E0D057007335CF11AE690800
      2B2E126208000000000000004C0000000114020000000000C000000000000046
      8000000000000000000000000000000000000000000000000000000000000000
      00000000000000000100000000000000000000000000000000000000}
  end
  object MainMenu: TMainMenu
    Left = 552
    Top = 208
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N2Click
      end
    end
  end
  object UpdTimer: TTimer
    OnTimer = UpdTimerTimer
    Left = 520
    Top = 208
  end
  object WorkTimer: TTimer
    OnTimer = WorkTimerTimer
    Left = 488
    Top = 208
  end
end
