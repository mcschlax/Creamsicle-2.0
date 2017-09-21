[Variables]
ValueUnitImage=#@#/Backgrounds/ValueUnit.png
TitleImage=#@#/Backgrounds/Title.png
BookEndLeftImage=#@#/Backgrounds/LeftEnd.png
BookEndRightImage=#@#/Backgrounds/RightEnd.png

Scale=1
Width=(50*#Scale#)
WidthOffset=13/64
Height=(25*#Scale#)
BookEndWidth=(4*#Scale#)

[CreamsicleStyle]
FontFace=Tahoma
FontColor=255,255,255,255
StringEffect=BORDER

[TitleStyle]
FontSize=(15/32*#Height#)
StringAlign=CenterCenter
StringEffect=0
X=(1/2*#Width#)
Y=(1/2*#Height# + 1)

[ValueStyle]
FontSize=(12/32*#Height#)
StringAlign=RightCenter
X=(1/2*#Width# + #WidthOffset#*#Width#)
Y=(1/2*#Height# + 1)

[UnitStyle]
FontSize=(10/32*#Height#)
StringAlign=LeftCenter
X=(1/2*#Width# + #WidthOffset#*#Width#)
Y=(1/2*#Height# + 1/25*#Height#)