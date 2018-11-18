; ---------------------------------------------------------------------------

_6CStruct       struc ; (sizeof=0x6C, align=0x4, copyof_124)
start           DCD ?                   ; offset
cursor          DCD ?                   ; offset
destructor      DCD ?                   ; offset
loop            DCD ?                   ; offset
name            DCD ?                   ; offset
parent          DCD ?                   ; offset
firstChild      DCD ?                   ; offset
previous        DCD ?                   ; offset
next            DCD ?                   ; offset
sleepTimer      DCW ?
userVal         DCB ?
bitfield        DCB ?
blockCounter    DCB ?
userSpace       DCB 67 dup(?)
_6CStruct       ends

; ---------------------------------------------------------------------------

_6CCode         struc ; (sizeof=0x8, align=0x4, copyof_123)
                                        ; XREF: BIOS:stru_19/r
                                        ; BIOS:stru_DCD/r ...
code            DCW ?
sarg            DCW ?
larg            DCD ?                   ; XREF: ROM:0802FEF8/r ; offset
_6CCode         ends

; ---------------------------------------------------------------------------

eventHandler    struc ; (sizeof=0x8, align=0x4, copyof_125)
                                        ; XREF: ROM:eventCodeHandlerPointTable/r
func            DCD ?                   ; XREF: ROM:off_800B83C/o ; offset
codeLen         DCD ?                   ; XREF: sub_800D510+22/r
                                        ; ROM:off_800D578/o ...
eventHandler    ends

; ---------------------------------------------------------------------------

SongTable       struc ; (sizeof=0x8, align=0x4, copyof_149)
                                        ; XREF: ROM:song_table/r
so              DCD ?                   ; offset
ms              DCW ?                   ; XREF: sub_80B3448+14/r
me              DCW ?
SongTable       ends

; ---------------------------------------------------------------------------

MPlayTable      struc ; (sizeof=0xC, align=0x4, copyof_147)
                                        ; XREF: ROM:mplay_table/r
ma              DCD ?                   ; offset
ta              DCD ?                   ; offset
tn              DCD ?
MPlayTable      ends

; ---------------------------------------------------------------------------

SoundArea       struc ; (sizeof=0xFB0, align=0x4, copyof_137)
                                        ; XREF: IWRAM:m4a_sound/r
_r1             DCD ?
DmaCount        DCB ?
reverb          DCB ?
maxchn          DCB ?
masvol          DCB ?
freq            DCB ?
mode            DCB ?
_r2             DCB 6 dup(?)
_r3             DCD 16 dup(?)
vchn            SoundChannel 12 dup(?)
pcmbuf          DCB 3168 dup(?)
SoundArea       ends

; ---------------------------------------------------------------------------

SoundChannel    struc ; (sizeof=0x40, align=0x4, copyof_135)
                                        ; XREF: SoundArea/r
sf              DCB ?
ty              DCB ?
rv              DCB ?
lv              DCB ?
at              DCB ?
de              DCB ?
su              DCB ?
re              DCB ?
_r1             DCB 24 dup(?)
fr              DCD ?
wp              DCD ?                   ; offset
_r3             DCD 6 dup(?)
SoundChannel    ends

; ---------------------------------------------------------------------------

SongHeader      struc ; (sizeof=0xC, align=0x4, copyof_139)
                                        ; XREF: ROM:stru_8B20FA0/r
trks            DCB ?
blks            DCB ?
prio            DCB ?
rvrb            DCB ?
tone            DCD ?                   ; offset
part            DCD ?                   ; offset
SongHeader      ends

; ---------------------------------------------------------------------------

BattleAnimation struc ; (sizeof=0x20, align=0x4, copyof_151)
                                        ; XREF: ROM:FE7BattleAnimationBank/r
identifier      DCB 12 dup(?)
sectionOffset   DCD ?                   ; offset
event           DCD ?                   ; offset
oamR2L          DCD ?                   ; offset
oamL2R          DCD ?                   ; offset
palGroup        DCD ?                   ; offset
BattleAnimation ends

; ---------------------------------------------------------------------------

CharacterBattlePal struc ; (sizeof=0x10, align=0x4, copyof_153)
                                        ; XREF: ROM:characterBattlePalTable/r
identifier      DCB 12 dup(?)
pal             DCD ?                   ; offset
CharacterBattlePal ends

; ---------------------------------------------------------------------------

AnimationInterpreter struc ; (sizeof=0x48, align=0x4, copyof_157)
                                        ; XREF: EWRAM:AISBank/r
state           DCW ?                   ; XREF: AIS_New+14/r
                                        ; AIS_New+32/w
XOffset         DCW ?
YOffset         DCW ?
delayCountdown  DCW ?                   ; XREF: AIS_New+38/w
OBJAttr2Base    DCW ?                   ; XREF: AIS_New+3A/w
unk_A           DCW ?                   ; XREF: AIS_New+3C/w
unk_C           DCW ?                   ; XREF: AIS_New+3E/w
unk_E           DCW ?
unk_10          DCW ?                   ; XREF: AIS_New+40/w
unk_12          DCB ?
frameID         DCB ?
unk_14          DCB ?                   ; XREF: AIS_New+44/w
C85ID           DCB ?
unk_16          DCW ?
unk_18          DCD ?
unk_1C          DCD ?                   ; XREF: AIS_New+42/w
nextCmd         DCD ?                   ; XREF: AIS_New+34/w ; offset
lastCmd         DCD ?                   ; XREF: AIS_New+36/w ; offset
sheet           DCD ?                   ; offset
sheetBuffer     DCD ?                   ; XREF: AIS_New+46/w ; offset
OAMInfoBuffer   DCD ?                   ; XREF: AIS_New+48/w ; offset
parent          DCD ?                   ; offset
child           DCD ?                   ; offset
currentOAMInfo  DCD ?                   ; offset
unk_40          DCD ?                   ; XREF: AIS_New+4A/w
unk_44          DCD ?                   ; XREF: AIS_New+4C/w
AnimationInterpreter ends

; ---------------------------------------------------------------------------

SpecialAnimationEffectInfo struc ; (sizeof=0x10, align=0x4, copyof_159)
                                        ; XREF: EWRAM:SpecialAnimationEffectInfoLeftSide/r
                                        ; EWRAM:SpecialAnimationEffectInfoRightSide/r
type            DCW ?
state           DCW ?
ctx             DCD ?                   ; offset
unk_8           DCD ?
AIS             DCD ?                   ; offset
SpecialAnimationEffectInfo ends

; ---------------------------------------------------------------------------

Unit            struc ; (sizeof=0x48, align=0x4, copyof_207)
                                        ; XREF: EWRAM:units_player/r
                                        ; EWRAM:units_enemy/r ...
character       DCD ?                   ; offset
m_class         DCD ?                   ; offset
lv              DCB ?
exp             DCB ?
unk_A           DCB ?
deployNumber    DCB ?
actionState     DCB ?
_bfd            DCB ?
unk_E           DCB ?
unk_F           DCB ?
PositionX       DCB ?
PositionY       DCB ?
maxHp           DCB ?
hp              DCB ?
str             DCB ?
skl             DCB ?
spd             DCB ?
def             DCB ?
res             DCB ?
luk             DCB ?
conBonus        DCB ?
aidUnitNumber   DCB ?
unk_1C          DCB ?
movBonus        DCB ?
items           ItemData 5 dup(?)
levelSword      DCB ?
levelLance      DCB ?
levelAxe        DCB ?
levelBow        DCB ?
levelStaff      DCB ?
levelAnima      DCB ?
levelLight      DCB ?
levelDark       DCB ?
_bf30           DCB ?
_bf31           DCB ?
levelSupport    DCB 7 dup(?)
_bf39           DCB ?
unk_3A          DCB 6 dup(?)
_bf40           DCB ?
AI_retreat      DCB ?
AI_action       DCB ?
AI_action_counter DCB ?
AI_movement     DCB ?
AI_movement_counter DCB ?
unk_46          DCB 2 dup(?)
Unit            ends

; ---------------------------------------------------------------------------

ItemData        struc ; (sizeof=0x2, copyof_200) ; XREF: Unit/r
item            DCB ?
number          DCB ?
ItemData        ends

; ---------------------------------------------------------------------------

SaveHeader      struc ; (sizeof=0x10, align=0x4, copyof_211)
                                        ; XREF: SaveGame/r
magicA          DCD ?
magicB          DCW ?
saveType        DCB ?                   ; XREF: SaveGame+B0/w
pad_7           DCB ?
sramOffset      DCW ?
sramSize        DCW ?
checksum        DCD ?
SaveHeader      ends


