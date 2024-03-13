object ElectroLive: TElectroLive
  Left = 0
  Top = 0
  Caption = 'ElectroLive'
  ClientHeight = 513
  ClientWidth = 1100
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 56
    Top = 32
    Width = 257
    Height = 313
    Caption = #1047#1072#1082#1086#1085' '#1054#1084#1072
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 53
      Width = 33
      Height = 28
      Caption = 'U ='
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 26
      Top = 104
      Width = 31
      Height = 28
      Caption = 'R ='
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 26
      Top = 152
      Width = 24
      Height = 28
      Caption = 'I ='
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object U: TEdit
      Left = 72
      Top = 48
      Width = 129
      Height = 33
      ImeName = 'U'
      TabOrder = 0
    end
    object R: TEdit
      Left = 72
      Top = 99
      Width = 129
      Height = 33
      ImeName = 'R'
      TabOrder = 1
    end
    object I: TEdit
      Left = 72
      Top = 147
      Width = 129
      Height = 33
      ImeName = 'I'
      TabOrder = 2
    end
  end
  object SumOm: TButton
    Left = 120
    Top = 240
    Width = 137
    Height = 49
    Caption = 'Sum'
    Default = True
    TabOrder = 1
    OnClick = SumOmClick
    OnEnter = SumOmClick
  end
end
