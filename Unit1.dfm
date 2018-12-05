object Form1: TForm1
  Left = 780
  Top = 157
  Width = 513
  Height = 501
  Caption = 'Water Tank Control'
  Color = clBtnFace
  TransparentColor = True
  TransparentColorValue = clFuchsia
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label16: TLabel
    Left = 416
    Top = 64
    Width = 22
    Height = 13
    Caption = 'level'
  end
  object Label3: TLabel
    Left = 416
    Top = 48
    Width = 23
    Height = 13
    Caption = 'temp'
  end
  object Label6: TLabel
    Left = 416
    Top = 32
    Width = 51
    Height = 13
    Caption = 'set by user'
  end
  object Label15: TLabel
    Left = 352
    Top = 64
    Width = 22
    Height = 13
    Caption = 'level'
  end
  object Label1: TLabel
    Left = 352
    Top = 48
    Width = 23
    Height = 13
    Caption = 'temp'
  end
  object Label5: TLabel
    Left = 352
    Top = 32
    Width = 17
    Height = 13
    Caption = 'real'
  end
  object overflowstate: TLabel
    Left = 336
    Top = 136
    Width = 16
    Height = 13
    Caption = 'NO'
  end
  object Bevel3: TBevel
    Left = 408
    Top = 32
    Width = 65
    Height = 49
  end
  object Bevel1: TBevel
    Left = 264
    Top = 48
    Width = 209
    Height = 17
  end
  object Bevel2: TBevel
    Left = 336
    Top = 32
    Width = 137
    Height = 49
  end
  object Label14: TLabel
    Left = 264
    Top = 64
    Width = 26
    Height = 13
    Caption = 'Level'
  end
  object Label7: TLabel
    Left = 264
    Top = 88
    Width = 61
    Height = 13
    Caption = 'Heater state:'
  end
  object temperature: TLabel
    Left = 8
    Top = 48
    Width = 56
    Height = 13
    Caption = 'temperature'
  end
  object Label2: TLabel
    Left = 8
    Top = 32
    Width = 53
    Height = 13
    Caption = 'Set values:'
  end
  object Label4: TLabel
    Left = 264
    Top = 48
    Width = 63
    Height = 13
    Caption = 'Temperature:'
  end
  object Bevel4: TBevel
    Left = 264
    Top = 64
    Width = 209
    Height = 17
  end
  object heaterstate: TLabel
    Left = 336
    Top = 88
    Width = 20
    Height = 13
    Caption = 'OFF'
  end
  object Shape1: TShape
    Left = 104
    Top = 208
    Width = 9
    Height = 145
    Brush.Color = clBlack
  end
  object Shape2: TShape
    Left = 112
    Top = 344
    Width = 145
    Height = 9
    Brush.Color = clBlack
  end
  object Shape3: TShape
    Left = 264
    Top = 208
    Width = 9
    Height = 145
    Brush.Color = clBlack
  end
  object valveimage: TShape
    Left = 248
    Top = 360
    Width = 25
    Height = 25
    Shape = stCircle
  end
  object Shape5: TShape
    Left = 256
    Top = 384
    Width = 9
    Height = 41
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object Shape6: TShape
    Left = 128
    Top = 368
    Width = 105
    Height = 9
    Brush.Color = clBlack
    Pen.Style = psClear
  end
  object Shape7: TShape
    Left = 256
    Top = 344
    Width = 9
    Height = 17
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object Shape8: TShape
    Left = 256
    Top = 424
    Width = 73
    Height = 9
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object Shape9: TShape
    Left = 16
    Top = 184
    Width = 73
    Height = 9
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object heaterimage: TShape
    Left = 128
    Top = 360
    Width = 105
    Height = 9
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object Shape11: TShape
    Left = 120
    Top = 360
    Width = 9
    Height = 41
    Brush.Color = clBlack
  end
  object Shape12: TShape
    Left = 232
    Top = 360
    Width = 9
    Height = 41
    Brush.Color = clBlack
  end
  object pumpimage: TShape
    Left = 88
    Top = 176
    Width = 25
    Height = 25
    Shape = stCircle
  end
  object Shape14: TShape
    Left = 112
    Top = 184
    Width = 33
    Height = 9
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object Shape15: TShape
    Left = 144
    Top = 184
    Width = 9
    Height = 17
    Brush.Color = clGray
    Pen.Style = psClear
  end
  object waterimage: TShape
    Left = 112
    Top = 208
    Width = 153
    Height = 137
    Brush.Color = clBlue
    Pen.Style = psClear
  end
  object Label8: TLabel
    Left = 88
    Top = 160
    Width = 26
    Height = 13
    Caption = 'pump'
  end
  object Label9: TLabel
    Left = 280
    Top = 368
    Width = 26
    Height = 13
    Caption = 'valve'
  end
  object overflowimage: TShape
    Left = 256
    Top = 192
    Width = 17
    Height = 17
  end
  object Label10: TLabel
    Left = 280
    Top = 192
    Width = 74
    Height = 13
    Caption = 'overflow sensor'
  end
  object Shape10: TShape
    Left = 408
    Top = 192
    Width = 17
    Height = 161
    Brush.Color = clRed
  end
  object temp_slider: TShape
    Left = 408
    Top = 192
    Width = 17
    Height = 41
    Brush.Color = clWindow
  end
  object Label11: TLabel
    Left = 432
    Top = 176
    Width = 29
    Height = 13
    Caption = '100'#176'C'
  end
  object Label12: TLabel
    Left = 432
    Top = 344
    Width = 17
    Height = 13
    Caption = '0'#176'C'
  end
  object Label13: TLabel
    Left = 40
    Top = 72
    Width = 22
    Height = 13
    Caption = 'level'
  end
  object Label17: TLabel
    Left = 264
    Top = 104
    Width = 56
    Height = 13
    Caption = 'Pump state:'
  end
  object Label18: TLabel
    Left = 264
    Top = 120
    Width = 56
    Height = 13
    Caption = 'Valve state:'
  end
  object pumpstate: TLabel
    Left = 336
    Top = 104
    Width = 20
    Height = 13
    Caption = 'OFF'
  end
  object valvestate: TLabel
    Left = 336
    Top = 120
    Width = 43
    Height = 13
    Caption = 'CLOSED'
  end
  object sdfss: TLabel
    Left = 264
    Top = 136
    Width = 45
    Height = 13
    Caption = 'Overflow:'
  end
  object Button1: TButton
    Left = 32
    Top = 0
    Width = 75
    Height = 25
    Caption = 'start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object temperaturebox: TEdit
    Left = 72
    Top = 48
    Width = 73
    Height = 21
    TabOrder = 1
    Text = '50'
  end
  object set: TButton
    Left = 152
    Top = 48
    Width = 81
    Height = 41
    Caption = 'set'
    TabOrder = 2
    OnClick = setClick
  end
  object levelbox: TEdit
    Left = 72
    Top = 72
    Width = 73
    Height = 21
    TabOrder = 3
    Text = '50'
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 10
    OnTimer = Timer1Timer
  end
end
