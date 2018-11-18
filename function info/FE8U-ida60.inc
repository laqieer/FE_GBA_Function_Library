@ ---------------------------------------------------------------------------

ROMItemEntry struc @ (sizeof=0x24, mappedto_1) @ XREF: ROM:gItemData/r
nameId:     .short ?
descId:     .short ?                    @ XREF: GetItemDescStringIndex+E/r
useDescId:  .short ?                    @ XREF: GetItemUseDescTextIndex+E/r
id:         .byte ?
weaponType: .byte ?                     @ XREF: CanUnitWieldWeapon+1C0/r
                                        @ CanUnitWieldStaff+44/r ...
attributes: .long ?                     @ XREF: CanUnitWieldWeapon+1A/r
                                        @ CanUnitUseWeapon+18/r ...
pStatBonuses:.long ?                    @ XREF: GetItemHealthBonus+16/r
                                        @ GetItemPowerBonus+16/r ...
pEffectiveness:.long ?                  @ XREF: IsWeaponEffectiveAgainst+48/r
                                        @ GetItemEffectivenessPtr+E/r
maxUses:    .byte ?                     @ XREF: MakeItem+1E/r
                                        @ sub_80168E0+86/r ...
might:      .byte ?                     @ XREF: GetItemMight+E/r
hit:        .byte ?                     @ XREF: GetItemHit+E/r
weight:     .byte ?                     @ XREF: GetItemWeight+E/r
crit:       .byte ?                     @ XREF: GetItemCrit+E/r
range:      .byte ?                     @ XREF: IsItemCoveringRange+12/r
                                        @ GetItemRangeString+26/r ...
costPerUse: .short ?                    @ XREF: GetConvoyTotalGoldValue+2A/r
                                        @ GetConvoyTotalGoldValue+36/r ...
weaponRank: .byte ?                     @ XREF: CanUnitWieldWeapon+1B8/r
                                        @ CanUnitWieldStaff+4C/r ...
iconId:     .byte ?                     @ XREF: DrawItemMenuCommand:NonNullItem/r
                                        @ sub_80168E0:loc_8016990/r ...
useEffect:  .byte ?                     @ XREF: IsItemUsable:NotStaff/r
                                        @ GetItemUseEffect+E/r
weaponEffect:.byte ?                    @ XREF: GetItemWeaponEffect+E/r
weaponExp:  .byte ?                     @ XREF: GetItemWExp+E/o
u21:        .byte ?
u22:        .byte ?
u23:        .byte ?
ROMItemEntry ends

@ ---------------------------------------------------------------------------

proc        struc @ (sizeof=0x8, mappedto_106)
code:       .short ?
sarg:       .short ?
larg:       .long ?
proc        ends

@ ---------------------------------------------------------------------------

ActionStruct struc @ (sizeof=0x38, mappedto_15)
currentRN:  .short ?
currentRN2: .short ?
currentRN3: .short ?
pushedRN:   .short ?
pushedRN2:  .short ?
pushedRN3:  .short ?
unitIndex:  .byte ?
targetIndex:.byte ?
xMove:      .byte ?
yMove:      .byte ?
moveCount:  .byte ?
actionId:   .byte ?
itemSlotIndex:.byte ?
xPos2:      .byte ?
yPos2:      .byte ?
someTrapType:.byte ?
field_16:   .byte ?
field_17:   .byte ?
SomeBattleRound:.long ?
field_1C:   .long ?
field_20:   .long ?
field_24:   .long ?
field_28:   .byte ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
field_2C:   .byte ?
field_2D:   .byte ?
field_2E:   .byte ?
field_2F:   .byte ?
field_30:   .byte ?
field_31:   .byte ?
field_32:   .byte ?
field_33:   .byte ?
field_34:   .byte ?
field_35:   .byte ?
field_36:   .byte ?
field_37:   .byte ?
ActionStruct ends

@ ---------------------------------------------------------------------------

PrepListItemStruct struc @ (sizeof=0x4, mappedto_19)
                                        @ XREF: EWRAM:gPrepScreenItemList/r
charId:     .byte ?                     @ XREF: SomethingPrepListRelated+5C/w
                                        @ SomethingPrepListRelated+9A/w
itemSlot:   .byte ?                     @ XREF: SomethingPrepListRelated+62/w
                                        @ SomethingPrepListRelated+9C/w
item:       .short ?                    @ XREF: sub_8098048+36/r
                                        @ sub_8098048+82/r ...
PrepListItemStruct ends

@ ---------------------------------------------------------------------------

BattleStatsStruct struc @ (sizeof=0x18, mappedto_3)
                                        @ XREF: EWRAM:gBattleStats/r
updateFlags:.short ?                    @ XREF: sub_8011DF4+58/r
                                        @ sub_8011EC8+6/w ... @ & 0x01  = ?
                                        @ & 0x02  = simulation
                                        @ & 0x04  = ?
                                        @ & 0x08  = ?
                                        @ & 0x10  = ?
                                        @ & 0x20  = ?
                                        @ & 0x40  = ?
                                        @ & 0x80  = ?
                                        @ & 0x100 = promotion?
attackRange:.short ?                    @ XREF: sub_8011DF4:loc_8011E48/w
                                        @ sub_802A13C:___/w ...
damage:     .short ?                    @ XREF: NullifyBattleDamageIfUsingStone+12/w
                                        @ GenerateCurrentRoundData+12/w ...
attack:     .short ?                    @ XREF: UpdateBattleStats+8/w
                                        @ GenerateCurrentRoundData+62/r ...
defense:    .short ?                    @ XREF: UpdateBattleStats+E/w
                                        @ GenerateCurrentRoundData+66/r ...
hit:        .short ?                    @ XREF: UpdateBattleStats+16/w
                                        @ GenerateCurrentRoundData+2E/r ...
crit:       .short ?                    @ XREF: UpdateBattleStats+1E/w
                                        @ GenerateCurrentRoundData:NoGreatShield/r ...
lethalityChance:.short ?                @ XREF: UpdateBattleStats+26/w
                                        @ RollForLethality+24/r
pExtraUnit1:.long ?                     @ XREF: CheckForTriangleAttack+44/w
                                        @ CheckForTriangleAttack+B0/r ...
pExtraUnit2:.long ?                     @ XREF: CheckForTriangleAttack+46/w
                                        @ CheckForTriangleAttack:Not1/r ...
BattleStatsStruct ends

@ ---------------------------------------------------------------------------

FontStruct  struc @ (sizeof=0x18, mappedto_48)
                                        @ XREF: EWRAM:stru_2002774/r
                                        @ EWRAM:stru_2004BC4/r ...
pVRAMRootPointer:.long ?                @ XREF: Font_InitForUI:NonDefault/w
pCharGlyphs:.long ?                     @ XREF: Font_SetGlyphSet:End/w
                                        @ GetStringTextWidth+2E/r ...
pDrawGlyphRoutine:.long ?               @ XREF: Text_AppendString+5C/r
                                        @ Text_AppendChar+58/r ... @ Arguments: r0 = text info struct, r1 = glyph
pVRAMPtrGetterMaybe:.long ?             @ XREF: Font_InitForUI+E/w
                                        @ Text_Clear+12/r ...
VRAMTileValueBase:.short ?              @ XREF: Font_InitForUI+18/w
                                        @ Text_Draw+16/r ...
nextTileIndex:.short ?                  @ XREF: Font_InitForUI+1A/w
                                        @ Font_ResetAllocation+6/w ...
paletteId:  .short ?                    @ XREF: Font_InitForUI+12/w
                                        @ Font_LoadForUI+8/r ...
field_16:   .byte ?                     @ XREF: Font_InitForUI+20/w
                                        @ GetStringTextWidth+A/r ...
field_17:   .byte ?
FontStruct  ends

@ ---------------------------------------------------------------------------

TileBufferEntry struc @ (sizeof=0xC, mappedto_46)
source:     .long ?
destination:.long ?
size:       .short ?
field_A:    .short ?
TileBufferEntry ends

@ ---------------------------------------------------------------------------

TextGlyphHeader struc @ (sizeof=0x6, mappedto_49)
nextGlyphMaybe:.long ?
glyphCharMaybe:.byte ?                  @ XREF: GetStringTextWidth+46/r
                                        @ Text_AppendString:Continue/r
glyphWidth: .byte ?                     @ XREF: GetStringTextWidth+4C/r
                                        @ DrawGlyph1DTile+36/r ...
TextGlyphHeader ends

@ ---------------------------------------------------------------------------

ROMUnitEntry struc @ (sizeof=0x34, mappedto_9)
nameId:     .short ?
descId:     .short ?
number:     .byte ?
class:      .byte ?
portraitId: .short ?
miniPortrait:.byte ?
affinity:   .byte ?
u0A:        .byte ?
baseLevel:  .byte ?
baseHP:     .byte ?
basePow:    .byte ?
baseSkl:    .byte ?
baseSpd:    .byte ?
baseDef:    .byte ?
baseRes:    .byte ?
baseLck:    .byte ?
baseCon:    .byte ?
rank1:      .byte ?
rank2:      .byte ?
rank3:      .byte ?
rank4:      .byte ?
rank5:      .byte ?
rank6:      .byte ?
rank7:      .byte ?
rank8:      .byte ?
growthHP:   .byte ?
growthPow:  .byte ?
growthSkl:  .byte ?
growthSpd:  .byte ?
growthDef:  .byte ?
growthRes:  .byte ?
growthLck:  .byte ?
u23:        .byte ?
u24:        .byte ?
u25:        .byte ?
u26:        .byte ?
u27:        .byte ?
attributes: .long ?
supportDataPtr:.long ?
uPtr30:     .long ?
ROMUnitEntry ends

@ ---------------------------------------------------------------------------

UnitEventStruct struc @ (sizeof=0x14, mappedto_36)
                                        @ XREF: EWRAM:gEventUnitDataBuffer/r
                                        @ IWRAM:gSummonedUnitDefinitionBuffer/r ...
charId:     .byte ?                     @ XREF: sub_800BA04+14/w
                                        @ sub_800BA34+4/r ...
classId:    .byte ?                     @ XREF: sub_80125C0+54/w
                                        @ LoadUnit+12/r ...
leadId:     .byte ?                     @ XREF: sub_800BA04+18/w
                                        @ sub_800BA34+8/r ...
levelAllAuto:.byte ?                    @ XREF: UNIT_ShouldBeLoaded+8/r
                                        @ UNIT_ShouldBeLoaded:yes_load/r ...
position_flags:.short ?                 @ XREF: UNIT_ShouldBeLoaded+46/r
                                        @ UNIT_ShouldBeLoaded+50/r ... @ bit 0-5 = x, bit 6-11 = y, bit 12-15 = flags
u6:         .byte ?
redaCount:  .byte ?                     @ XREF: UNIT_Filter:loop5/w
                                        @ GetPreferredPositionForUNIT+E/r ...
pREDA:      .long ?                     @ XREF: UNIT_Filter+1D4/w
                                        @ GetPreferredPositionForUNIT+38/r ...
item1:      .byte ?                     @ XREF: GetChapterDefinition+1A/o
                                        @ GetChapterDefinition+1C/r ...
item2:      .byte ?
item3:      .byte ?
item4:      .byte ?
ai1:        .byte ?                     @ XREF: GetChapterMapChangesPointer+A/r
                                        @ sub_807AD1C:off_807AF8C/o ...
ai2:        .byte ?
ai3:        .byte ?
ai4:        .byte ?
UnitEventStruct ends

@ ---------------------------------------------------------------------------

DebugTextStruct struc @ (sizeof=0x2014, mappedto_51)
u00:        .long ?
bgId:       .short ?
baseTileIndex:.short ?
cursorColumn:.long ?
cursorLine: .long ?
startingLine:.long ?
data:       .byte 8192 dup(?)
DebugTextStruct ends

@ ---------------------------------------------------------------------------

ROMClassEntry struc @ (sizeof=0x54, mappedto_10)
                                        @ XREF: GetClassData+8/o
                                        @ ROM:gClassData/r
nameId:     .short ?
descId:     .short ?                    @ XREF: PromotionDisplay_Init+FC/r
number:     .byte ?                     @ XREF: Event35_UnitClassChanging+44/r
                                        @ sub_80125C0+26/r ...
promotion:  .byte ?                     @ XREF: AutolevelUnit+18/r
                                        @ GetUnitEffectivePowerLevel+22/r
standingMapSpriteId:.byte ?             @ XREF: GetUnitSMSIndex+12/r
                                        @ GetClassStandingMapSpriteId:End/r
slowWalking:.byte ?                     @ XREF: MU_GetMovementSpeed+AC/r
defaultPortrait:.short ?                @ XREF: GetUnitPortraitId+2C/r
                                        @ GetUnitPortraitId:ClassPortrait/r ...
u0A:        .byte ?
baseHP:     .byte ?                     @ XREF: LoadUnitStats+6/r
                                        @ RecomputeUnitStatsForLevelPenalty+1A/r ...
basePow:    .byte ?                     @ XREF: LoadUnitStats+10/r
                                        @ RecomputeUnitStatsForLevelPenalty+22/r ...
baseSkl:    .byte ?                     @ XREF: LoadUnitStats+18/r
                                        @ RecomputeUnitStatsForLevelPenalty+2A/r ...
baseSpd:    .byte ?                     @ XREF: LoadUnitStats+20/r
                                        @ RecomputeUnitStatsForLevelPenalty+32/r ...
baseDef:    .byte ?                     @ XREF: LoadUnitStats+28/r
                                        @ RecomputeUnitStatsForLevelPenalty+3A/r ...
baseRes:    .byte ?                     @ XREF: LoadUnitStats+30/r
                                        @ RecomputeUnitStatsForLevelPenalty+42/r ...
baseCon:    .byte ?                     @ XREF: GetUnitAid+16/o
                                        @ GetUnitAid+34/o ...
baseMov:    .byte ?                     @ XREF: CanActiveUnitMove+20/r
                                        @ FillMovementMapForUnit+22/r ...
maxHP:      .byte ?                     @ XREF: sub_802BC00+2E/r
                                        @ sub_802BC00+30/o ...
maxPow:     .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow+36/r
                                        @ EnsureNoUnitStatCapOverflow+38/o ...
maxSkl:     .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow+48/r
                                        @ EnsureNoUnitStatCapOverflow+4A/o ...
maxSpd:     .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow+58/r
                                        @ EnsureNoUnitStatCapOverflow+5A/o ...
maxDef:     .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow+68/r
                                        @ EnsureNoUnitStatCapOverflow+6A/o ...
maxRes:     .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow+78/r
                                        @ EnsureNoUnitStatCapOverflow+7A/o ...
maxCon:     .byte ?
classRelativePower:.byte ?              @ XREF: sub_802C368+20/o
                                        @ GetUnitEffectivePowerLevel+8/o ...
growthHP:   .byte ?                     @ XREF: IncreaseUnitStatsByLevelCount+C/r
growthPow:  .byte ?                     @ XREF: IncreaseUnitStatsByLevelCount+20/r
growthSkl:  .byte ?                     @ XREF: IncreaseUnitStatsByLevelCount+34/r
growthSpd:  .byte ?                     @ XREF: IncreaseUnitStatsByLevelCount+48/r
growthDef:  .byte ?                     @ XREF: IncreaseUnitStatsByLevelCount+5C/r
growthRes:  .byte ?
growthLck:  .byte ?
promotionHP:.byte ?                     @ XREF: sub_802BC00+20/o
promotionPow:.byte ?
promotionSkl:.byte ?
promotionSpd:.byte ?
promotionDef:.byte ?
promotionRes:.byte ?
attributes: .long ?                     @ XREF: InitPlayerUnitPositionsForPrepScreen+4A/r
                                        @ sub_801247C+1C/r ...
rank1:      .byte ?                     @ XREF: LoadUnitStats+48/o
                                        @ sub_802BD50+F2/o ...
rank2:      .byte ?
rank3:      .byte ?
rank4:      .byte ?
rank5:      .byte ?
rank6:      .byte ?
rank7:      .byte ?
rank8:      .byte ?
battleAnimPtr:.long ?                   @ XREF: PromotionDisplay_MainLoop+D4/r
                                        @ GetClassAnimationIdForWeapon+12/r
movCostPtr: .long ?
movCostRainPtr:.long ?
movCostSnowPtr:.long ?
terrainDefBonusPtr:.long ?              @ XREF: WriteBattleStructTerrainBonuses+C/r
                                        @ AiGetPositionTerrainSafetyWeight+14/r
terrainAvoBonusPtr:.long ?              @ XREF: WriteBattleStructTerrainBonuses+1C/r
                                        @ AiGetPositionTerrainSafetyWeight+1E/r
terrainResBonusPtr:.long ?              @ XREF: WriteBattleStructTerrainBonuses+2C/r
                                        @ AiGetPositionTerrainSafetyWeight+2A/r
uPtr50:     .long ?
ROMClassEntry ends

@ ---------------------------------------------------------------------------

IconInfoStruct struc @ (sizeof=0x4, mappedto_47)
                                        @ XREF: EWRAM:gIconIndexToDataLookup/r
useCount:   .byte ?
gfxIndex:   .byte ?                     @ XREF: GetIconTileIndex+A/r
                                        @ GetIconTileIndex+2E/w ...
field_2:    .byte ?
field_3:    .byte ?
IconInfoStruct ends

@ ---------------------------------------------------------------------------

MapAnimMasterStruct struc @ (sizeof=0x63, mappedto_39)
BAS:        BattleAnimUnitStruct 4 dup(?)
pCurrentRound:.long ?
p6CItemMapAnim:.long ?
subjectBASIndex:.byte ?
targetBASIndex:.byte ?
currentRoundLoBits:.short ?
field_5C:   .byte ?
field_5D:   .byte ?
spellAssocCharCount:.byte ?             @ 2 calls battle quotes
someBoolOrTimer:.byte ?
someX:      .byte ?
someY:      .byte ?
field_62:   .byte ?
MapAnimMasterStruct ends

@ ---------------------------------------------------------------------------

BattleAnimUnitStruct struc @ (sizeof=0x14, mappedto_53)
                                        @ XREF: MapAnimMasterStruct/r
pUnit:      .long ?
field_4:    .long ?
pMOVEUNIT:  .long ?
field_C:    .byte ?
field_D:    .byte ?
field_E:    .byte ?
field_F:    .byte ?
field_10:   .byte ?
field_11:   .byte ?
field_12:   .byte ?
field_13:   .byte ?
BattleAnimUnitStruct ends

@ ---------------------------------------------------------------------------

UnitWordStruct struc @ (sizeof=0x4, mappedto_8)
                                        @ XREF: IWRAM:gSomeUnitWordArray/r
                                        @ LoadUnitWordStructs+36/o
charId:     .byte ?                     @ XREF: StoreUnitWordStructs+1A/w
                                        @ StoreUnitWordStructs+2E/w ...
xPos:       .byte ?                     @ XREF: StoreUnitWordStructs+1E/w
                                        @ LoadUnitWordStructs+14/r ...
yPos:       .byte ?                     @ XREF: StoreUnitWordStructs+22/w
                                        @ LoadUnitWordStructs+18/r
u03:        .byte ?
UnitWordStruct ends

@ ---------------------------------------------------------------------------

TrapStruct  struc @ (sizeof=0x8, mappedto_4) @ XREF: EWRAM:gTrapArray/r
                                        @ EWRAM:gTrapArrayBack/r ...
xPos:       .byte ?                     @ XREF: GetTrapAt:StartLoop/r
                                        @ GetSpecificTrapAt:loop/r ...
yPos:       .byte ?                     @ XREF: ApplyUnitMovement+38/w
                                        @ RefreshTrapFogVision+14/r ...
type:       .byte ?                     @ XREF: RefreshTrapFogVision:Begin/r
                                        @ RefreshTrapFogVision:Start/r ...
ext1:       .byte ?                     @ XREF: GetUnitSMSIndex+1C/r
                                        @ RefreshTrapFogVision+16/r ...
ext2:       .byte ?                     @ XREF: AddTrapExt+C/w
ext3:       .byte ?                     @ XREF: AddTrapExt+E/w
                                        @ ResetCounterForCountedDownTraps+1E/r ...
ext4:       .byte ?                     @ XREF: AddTrapExt+10/w
                                        @ MakeTargetListForTurnTrapDamage:StartLoop/o ...
ext5:       .byte ?                     @ XREF: AddTrapExt+12/w
                                        @ MakeTargetListForTurnTrapDamage+36/o ...
TrapStruct  ends

@ ---------------------------------------------------------------------------

UnitStruct  struc @ (sizeof=0x48, mappedto_5) @ XREF: EWRAM:gUnitArray/r
                                        @ EWRAM:gArenaOpponent/r ...
pCharData:  .long ?                     @ XREF: MakeSnagBattleTarget+6E/w
                                        @ MakeSnagBattleTarget+78/w ...
pClassData: .long ?                     @ XREF: Event35_UnitClassChanging+42/r
                                        @ Event35_UnitClassChanging+5A/w ...
level:      .byte ?                     @ XREF: LoadUnit+1C2/w
                                        @ LoadUnit:HandleGorgonEggMaxHP/o ...
exp:        .byte ?                     @ XREF: LoadUnit+19E/w
                                        @ LoadUnit+1BC/w ...
u0A_aiextdata:.byte ?                   @ XREF: ChangeUnitAIThing+36/r
                                        @ ChangeUnitAIThing+3C/w ... @ bit 1 = Healing flag, 2 = standard staff, 3 = "can heal"?, 4-6 = status staves
index:      .byte ?                     @ XREF: NewGoldGotPopup+E/o
                                        @ CreateItemStealingPopup+10/r ...
state:      .long ?                     @ XREF: HideAllUnits+16/r
                                        @ HideAllUnits+24/w ...
xPos:       .byte ?                     @ XREF: Event26_CameraControlMaybe:UnitIsValid/r
                                        @ Event27_MapChange+44/r ...
yPos:       .byte ?                     @ XREF: Event26_CameraControlMaybe+56/r
                                        @ Event27_MapChange+46/r ...
maxHP:      .byte ?                     @ XREF: LoadUnit+1F2/w
                                        @ LoadUnit+228/o ...
curHP:      .byte ?                     @ XREF: sub_8011F5C+1C6/r
                                        @ sub_8011F5C+1CC/r ...
pow:        .byte ?                     @ XREF: LoadUnitStats+16/w
                                        @ IncreaseUnitStatsByLevelCount+2C/r ...
skl:        .byte ?                     @ XREF: LoadUnitStats+1E/w
                                        @ IncreaseUnitStatsByLevelCount+40/r ...
spd:        .byte ?                     @ XREF: LoadUnitStats+26/w
                                        @ IncreaseUnitStatsByLevelCount+54/r ...
def:        .byte ?                     @ XREF: LoadUnitStats+2E/w
                                        @ RecomputeUnitStatsForLevelPenalty+40/w ...
res:        .byte ?                     @ XREF: LoadUnitStats+36/w
                                        @ RecomputeUnitStatsForLevelPenalty+48/w ...
lck:        .byte ?                     @ XREF: LoadUnitStats+3A/w
                                        @ RecomputeUnitStatsForLevelPenalty+4C/w ...
conBonus:   .byte ?                     @ XREF: LoadUnitStats+3C/w
                                        @ EnsureNoUnitStatCapOverflow:SkipLckCap/o ...
rescueAll:  .byte ?                     @ XREF: UnitRescue+12/w
                                        @ UnitRescue+16/w ...
ballistaIndex:.byte ?                   @ XREF: EquipUnitItemSlot+14/o
                                        @ GetUnitSMSIndex:InsideBallista/r ...
movBonus:   .byte ?                     @ XREF: EnsureNoUnitStatCapOverflow:SkipConCap/o
                                        @ CanActiveUnitMove+1A/o ...
item1:      .short ?                    @ XREF: sub_8011F5C:loc_8011FAC/r
                                        @ GetUnitEquippedItem+A/o ...
item2:      .short ?                    @ XREF: PopulateUnitFromDefinition+6E/o
                                        @ SwapUnitStats+76/r ...
item3:      .short ?                    @ XREF: SwapUnitStats+7E/r
                                        @ SwapUnitStats+80/r ...
item4:      .short ?                    @ XREF: SwapUnitStats+86/r
                                        @ SwapUnitStats+88/r ...
item5:      .short ?                    @ XREF: ClearUnitInventory+6/o
                                        @ GetUnitItemCount+6/o ...
swordRank:  .byte ?                     @ XREF: CanUnitWieldWeapon+1C4/o
                                        @ CanUnitWieldStaff+42/o ...
lanceRank:  .byte ?
axeRank:    .byte ?
bowRank:    .byte ?
staffRank:  .byte ?                     @ XREF: UnitHasMagicRank+2/o
animaRank:  .byte ?
lightRank:  .byte ?                     @ XREF: UnitHasMagicRank+E/o
darkRank:   .byte ?                     @ XREF: UnitHasMagicRank+16/o
status:     .byte ?                     @ XREF: CanUnitWieldWeapon+17E/o
                                        @ CanUnitWieldStaff+22/o ...
torchBarrierDuration:.byte ?            @ XREF: GetUnitFogViewRange+1E/o
                                        @ MapMain_UpdateUnitStatus+44/o ...
support1:   .byte ?                     @ XREF: InitUnitSupports+12/o
                                        @ GetSupportLevelBySupportIndex+2/o ...
support2:   .byte ?
support3:   .byte ?
support4:   .byte ?
support5:   .byte ?
support6:   .byte ?
unitLeader: .byte ?                     @ XREF: LoadUnit+1D8/o
                                        @ GetUnitLeader+12/o
supportBits:.byte ?                     @ XREF: CanUnitsStillSupportThisChapter/o
                                        @ PackUnitStructForSuspend+1A8/o
u3A:        .byte ?
u3B:        .byte ?
pStandingSpriteData:.long ?             @ XREF: SMS_UpdateFromGameData+34/w
                                        @ SMS_UpdateFromGameData:loc_8027280/w ...
ai3And4:    .short ?                    @ XREF: CpDecide_Main+68/o
                                        @ SetUnitAiFromDefinition+12/o ...
ai1:        .byte ?                     @ XREF: ChangeUnitAIThing+1C/o
                                        @ SetUnitAiFromDefinition+6/o ...
ai1cursor:  .byte ?                     @ XREF: AiExecAi1+1A/o
                                        @ AiExecFallbackAi1+18/o ...
ai2:        .byte ?                     @ XREF: ChangeUnitAIThing+2A/o
                                        @ BattleSetupTerrainData+22/r ...
ai2cursor:  .byte ?                     @ XREF: AiExecAi2+1A/o
                                        @ AiExecFallbackAi2+18/o ...
u46_allycountin1to8range:.byte ?        @ XREF: UpdateNumberOfAlliedUnitsWithin8Tiles+88/o
                                        @ AiScriptCmd_10_DoLooting+20/o ...
u47:        .byte ?
UnitStruct  ends

@ ---------------------------------------------------------------------------

ChapterDataStruct struc @ (sizeof=0x4C, mappedto_7)
savedGlobalTimer:.long ?
startGlobalTimer:.long ?
goldAmount: .long ?
savedSaveLocation:.byte ?
visionRange:.byte ?
chapterId:  .byte ?
phase:      .byte ?
turnNumber: .short ?
curX:       .byte ?
curY:       .byte ?
chapterState:.byte ?                    @ +0x04 = ?, +0x10 = in prep screen, +0x40 = difficult mode, +0x80 = link arena?
weather:    .byte ?
supportGainCount:.short ?
u18:        .byte ?
u19:        .byte ?
u1A:        .byte ?
mode:       .byte ?
field_1C:   .byte ?
field_1D:   .byte ?
field_1E:   .byte ?
field_1F:   .byte ?
sTacticianName:.long ?
field_24:   .byte ?
field_25:   .byte ?
field_26:   .byte ?
field_27:   .byte ?
field_28:   .byte ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
field_2C:   .byte ?
field_2D:   .byte ?
field_2E:   .byte ?
field_2F:   .byte ?
field_30:   .byte ?
field_31:   .byte ?
field_32:   .byte ?
field_33:   .byte ?
field_34:   .byte ?
field_35:   .byte ?
field_36:   .byte ?
field_37:   .byte ?
field_38:   .byte ?
field_39:   .byte ?
field_3A:   .byte ?
field_3B:   .byte ?
field_3C:   .byte ?
field_3D:   .byte ?
field_3E:   .byte ?
field_3F:   .byte ?
option1:    .byte ?
option2:    .byte ?
option3:    .short ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .short ?
somethingRelatedToSelectEvents:.byte ?
somethingRelatedToSelectEvents2:.byte ?
ChapterDataStruct ends

@ ---------------------------------------------------------------------------

EventEngineCallEntryStruct struc @ (sizeof=0x8, mappedto_52)
                                        @ XREF: IWRAM:gEventCallQueue/r
                                        @ HandleNextEventEngineCall:ShiftLoop/r
pEvents:    .long ?                     @ XREF: EqueueEventEngineCall+16/w
                                        @ HandleNextEventEngineCall+C/r
fadeParam:  .byte ?                     @ XREF: EqueueEventEngineCall+18/w
                                        @ HandleNextEventEngineCall+E/r ...
one:        .byte ?                     @ XREF: EqueueEventEngineCall+10/r
                                        @ EqueueEventEngineCall+1A/w ...
u:          .short ?
EventEngineCallEntryStruct ends

@ ---------------------------------------------------------------------------

BWLEntry    struc @ (sizeof=0x10, mappedto_42)
                                        @ XREF: EWRAM:gBWLDataStorage/r
                                        @ SaveClearedBWLAndChapterWinData+44/o ...
field_0:    .long ?                     @ XREF: SaveClearedBWLAndChapterWinData:loop/r
                                        @ SaveClearedBWLAndChapterWinData+3E/w ...
field_4:    .long ?                     @ XREF: BWL_AddWinOrLossIdk+76/r
                                        @ BWL_AddWinOrLossIdk+80/w ...
field_8:    .long ?                     @ XREF: BWL_AddWinOrLossIdk+A4/r
                                        @ BWL_AddWinOrLossIdk+AE/w ...
field_C:    .long ?                     @ XREF: sub_80A44C8+2E/r
                                        @ sub_80A44C8+4A/w ...
BWLEntry    ends

@ ---------------------------------------------------------------------------

Vector2H    struc @ (sizeof=0x4, mappedto_41)
                                        @ XREF: EWRAM:gPreviousCursorDisplayPosition/r
                                        @ EWRAM:gActiveUnitPosition/r ...
x:          .short ?                    @ XREF: SyncLCDControl+2A/r
                                        @ SyncLCDControl+30/r ...
y:          .short ?                    @ XREF: SetBgPosition+2C/w
                                        @ SetBgPosition+38/w ...
Vector2H    ends

@ ---------------------------------------------------------------------------

BattleUnitStruct struc @ (sizeof=0x80, mappedto_14)
                                        @ XREF: EWRAM:gActiveBattleUnit/r
                                        @ EWRAM:gTargetBattleUnit/r
unit:       UnitStruct ?                @ XREF: sub_8011DF4+20/o
                                        @ sub_8011DF4+22/r ...
weaponAfter:.short ?                    @ XREF: sub_8011F5C+90/o
                                        @ sub_8011F5C+92/w ...
weaponBefore:.short ?                   @ XREF: sub_8011F5C+94/o
                                        @ sub_8011F5C+96/w ...
weaponAttributes:.long ?                @ XREF: SetupBattleStructFromUnitAndWeapon+1E/w
                                        @ BattleSetupTerrainData+42/r ...
weaponType: .byte ?                     @ XREF: SetupBattleStructFromUnitAndWeapon+22/o
                                        @ SetupBattleStructFromUnitAndWeapon+26/w ...
weaponSlot: .byte ?                     @ XREF: SetupBattleWeaponData+6E/o
                                        @ SetupBattleWeaponData+82/o ...
u52:        .byte ?                     @ XREF: SetupBattleWeaponData+2C/o
                                        @ SetupBattleBallistaWeaponData+34/o ...
WTHitBonus: .byte ?                     @ XREF: SetupBattleStructFromUnitAndWeapon+32/w
                                        @ InitBattleUnitFromUnit+B2/o ...
WTDmgBonus: .byte ?                     @ XREF: SetupBattleStructFromUnitAndWeapon+36/w
                                        @ BattleLoadAttack+16/o ...
terrainId:  .byte ?                     @ XREF: WriteBattleStructTerrainBonuses+4/o
                                        @ BattleSetupTerrainData+1A/o ...
terrainDef: .byte ?                     @ XREF: WriteBattleStructTerrainBonuses+24/o
                                        @ BattleSetupTerrainData+3A/o ...
terrainAvo: .byte ?                     @ XREF: WriteBattleStructTerrainBonuses+14/o
                                        @ BattleSetupTerrainData+2A/o ...
terrainRes: .byte ?                     @ XREF: WriteBattleStructTerrainBonuses+34/o
                                        @ BattleSetupTerrainData+4A/o ...
u59:        .byte ?
attack:     .short ?                    @ XREF: sub_801E4F4+32/r
                                        @ sub_801E4F4+36/r ...
defense:    .short ?                    @ XREF: BattleLoadDefense+56/o
                                        @ BattleComputeBuffStatus:Defense/o ...
attackSpeed:.short ?                    @ XREF: BattleLoadAS+22/o
                                        @ BattleLoadAvoid+4/o ...
hit:        .short ?                    @ XREF: sub_801E4F4+8A/r
                                        @ sub_801E4F4+8E/r ...
avoid:      .short ?                    @ XREF: sub_801E4F4+134/r
                                        @ sub_801E4F4+138/r ...
battleHit:  .short ?                    @ XREF: ComputeHit+10/o
                                        @ ComputeSpecialWeapons+A4/o ...
crit:       .short ?                    @ XREF: sub_801E4F4+E2/r
                                        @ sub_801E4F4+E6/r ...
dodge:      .short ?                    @ XREF: BattleLoadDodge+4/o
                                        @ ComputeCrit+C/o
battleCrit: .short ?                    @ XREF: SetupBattleStructFromUnitAndWeapon+DA/w
                                        @ ComputeSpecialWeapons+AC/o ...
lethalityChance:.short ?                @ XREF: UpdateBattleStats+22/o
expGained:  .byte ?                     @ XREF: sub_8011F5C+168/w
                                        @ sub_8011F5C+16E/w ...
outStatus:  .byte ?                     @ XREF: CurrentRound_ComputeWeaponEffects+46/o
                                        @ CurrentRound_ComputeWeaponEffects+19C/o ...
prevLevel:  .byte ?                     @ XREF: InitBattleUnitFromUnit+66/o
                                        @ sub_807352C+54/o ...
prevExp:    .byte ?                     @ XREF: InitBattleUnitFromUnit+6E/o
                                        @ MapAnimProc_DisplayExpBar+54/o ...
prevHP:     .byte ?                     @ XREF: FillSnagBattleStats+22/w
                                        @ sub_802CD64+48/w ...
hpUp:       .byte ?                     @ XREF: InitBattleUnitFromUnit+80/o
                                        @ CheckForLevelUp+82/o ...
powUp:      .byte ?                     @ XREF: CheckForLevelUp+98/o
                                        @ CheckForLevelUpCaps+50/o ...
sklUp:      .byte ?                     @ XREF: UpdateUnitFromBattleUnit+4E/o
                                        @ sub_807352C+D2/o ...
spdUp:      .byte ?                     @ XREF: UpdateUnitFromBattleUnit+5A/o
                                        @ sub_807352C+F6/o ...
defUp:      .byte ?                     @ XREF: UpdateUnitFromBattleUnit+66/o
                                        @ sub_807352C+108/o ...
resUp:      .byte ?                     @ XREF: CheckForLevelUpCaps+CC/o
                                        @ UpdateUnitFromBattleUnit+72/o ...
lckUp:      .byte ?                     @ XREF: CheckForLevelUpCaps+EA/o
                                        @ UpdateUnitFromBattleUnit+7E/o ...
conUp:      .byte ?                     @ XREF: sub_807352C+138/o
                                        @ MapAnimLevelUp_GetActorStatUp+112/o
wexpGain:   .byte ?                     @ XREF: InitBattleUnitFromUnit+A4/o
                                        @ InitBattleUnitFromUnit+A6/w ...
nonZeroDmg: .byte ?                     @ XREF: GenerateCurrentRoundData+16C/o
                                        @ ComputeExpFromBattle+34/o ...
wpnBroke:   .byte ?                     @ XREF: InitBattleUnitFromUnit+C0/o
                                        @ InitBattleUnitFromUnit+C2/w ...
u7E:        .byte ?                     @ XREF: PlayerPhase_PreAction+15E/o
                                        @ PlayerPhase_PreAction+162/w ...
u7F:        .byte ?
BattleUnitStruct ends

@ ---------------------------------------------------------------------------

EventDataPtr struc @ (sizeof=0x50, mappedto_16)
pTurnEvents:.long ?
pCharEvents:.long ?                     @ XREF: RunCharacterEvents+20/r
pLocaEvents:.long ?                     @ XREF: GetLocationEventCommandAt+1C/r
                                        @ RunLocationEvents+18/r
pActionEvents:.long ?                   @ XREF: CheckForPostActionEvents+5A/r
                                        @ RunPostActionEvents+5C/r
u10:        .long ?                     @ XREF: RunSelectEvents+26/r
u14:        .long ?                     @ XREF: RunMoveEventsMaybe+26/r
u18:        .long ?                     @ XREF: RunPostMoveEvents+26/r
u1C_SelectEvents:.long ?                @ XREF: sub_8083DD8+14/r
                                        @ RunTutorialEvent+28/r
ballistae1: .long ?                     @ XREF: GetCurrentChapterBallistaePtr+E/r
ballistae2: .long ?                     @ XREF: GetCurrentChapterBallistae2Ptr:loc_8083340/r
pAllyUnitsNormal:.long ?                @ XREF: GetChapterAllyUnitDefinitions:NotHardMode/r
pAllyUnitsHard:.long ?                  @ XREF: GetChapterAllyUnitDefinitions+22/r
field_30:   .long ?                     @ XREF: GetChapterAllyUnitDefinitions:skirmish1/r
field_34:   .long ?                     @ XREF: GetChapterAllyUnitDefinitions:skirmish2/r
field_38:   .long ?                     @ XREF: GetChapterAllyUnitDefinitions:skirmish3/r
field_3C:   .long ?                     @ XREF: GetChapterEnemyUnitDefinitions:skirmish1/r
                                        @ GetChapterSkirmishLeaderClasses+C/r
field_40:   .long ?                     @ XREF: GetChapterEnemyUnitDefinitions:skirmish2/r
                                        @ GetChapterSkirmishLeaderClasses+12/r
field_44:   .long ?                     @ XREF: GetChapterEnemyUnitDefinitions:skirmish3/r
                                        @ GetChapterSkirmishLeaderClasses+18/r
pStartScene:.long ?                     @ XREF: MapMain_CallBeginningEvent+18/r
pEndScene:  .long ?                     @ XREF: CallEndEvent+18/r
EventDataPtr ends

@ ---------------------------------------------------------------------------

WMLocationStruct struc @ (sizeof=0x20, mappedto_17)
flags1:     .byte ?
flags2:     .byte ?
mapIcon:    .short ?
chId_Eirika:.byte ?
chId_Ephraim:.byte ?
altEvId:    .short ?
nextLocUnset_Eirika:.byte ?
nextLocUnset_Ephraim:.byte ?
nextLocSet_Eirika:.byte ?
nextLocSet_Ephraim:.byte ?
pArmory:    .long ?
pShop:      .long ?
pSecretShop:.long ?
xCoord:     .short ?
yCoord:     .short ?
text:       .short ?
shipTravel: .short ?
WMLocationStruct ends

@ ---------------------------------------------------------------------------

ArenaStruct struc @ (sizeof=0x20, mappedto_18)
playerUnitPtr:.long ?
opponentUnitPtr:.long ?
field_8:    .byte ?
field_9:    .byte ?
field_A:    .byte ?
field_B:    .byte ?
range:      .byte ?
playerWType:.byte ?
opponentWType:.byte ?
playerClass:.byte ?
opponentClass:.byte ?
playerLevel:.byte ?
opponentLevel:.byte ?
playerMagicDamage:.byte ?
opponentMagicDamage:.byte ?
pad15:      .byte ?
playerPowWeight:.short ?
opponentPowWeight:.short ?
playerWeapon:.short ?
opponentWeapon:.short ?
field_1E:   .short ?
ArenaStruct ends

@ ---------------------------------------------------------------------------

Header6C    struc @ (sizeof=0x29, mappedto_21) @ XREF: State6CBB/r
                                        @ EventEngine6C/r ...
EntryPoint: .long ?
NextCall:   .long ?
Destructor: .long ?
Callback:   .long ?
NamePtr:    .long ?
Parent6C:   .long ?                     @ XREF: GmapUnit_Loop+3A/r
FirstChild6C:.long ?
Prev6C:     .long ?
Next6C:     .long ?
SleepTimer: .short ?
Mark:       .byte ?
SomeBitfieldMaybe:.byte ?
ExecBlockCounter:.byte ?
Header6C    ends

@ ---------------------------------------------------------------------------

State6CBB   struc @ (sizeof=0x6C, mappedto_23)
header:     Header6C ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
TextBufferPtr:.long ?
field_30:   SomeInternal6CBBStruct ?
field_47:   .byte ?
field_48:   TextStruct ?
field_50:   .long ?
field_54:   .long ?
field_58:   .long ?
field_5C:   .short ?
field_5E:   .short ?
field_60:   .long ?
field_64:   .long ?
field_68:   .long ?
State6CBB   ends

@ ---------------------------------------------------------------------------

RTextStruct struc @ (sizeof=0x1C, mappedto_32)
                                        @ XREF: ROM:gStatScreenPage0HelpText/r
                                        @ ROM:stru_8A00BE0/r ...
UpRText:    .long ?
DownRText:  .long ?                     @ XREF: sub_8088DE0+A/w
LeftRText:  .long ?                     @ XREF: sub_8088DE0+C/w
RightRText: .long ?                     @ XREF: sub_8088DE0+E/w
xPos:       .byte ?                     @ XREF: sub_8088DE0+10/w
                                        @ sub_8088E9C+24/r ...
yPos:       .byte ?                     @ XREF: sub_8088DE0+12/w
                                        @ sub_8088E9C+26/r ...
textId:     .short ?                    @ XREF: sub_8088DE0+14/w
                                        @ sub_8088E9C+6C/r
LooperRoutine:.long ?                   @ XREF: sub_8088DE0+16/w
                                        @ sub_8089060+C/r
TextGetter: .long ?                     @ XREF: sub_8088DE0+18/w
                                        @ sub_8088E9C+76/r
RTextStruct ends

@ ---------------------------------------------------------------------------

MenuCommandStruct struc @ (sizeof=0x24, mappedto_27)
                                        @ XREF: ROM:stru_8A3E04C/r
                                        @ ROM:08A3E070/r ...
u0:         .long ?
nameId:     .short ?                    @ XREF: MenuCommand_DrawRouteSplit+6/r
descId:     .short ?
color:      .byte ?
u9:         .byte ?
uA:         .short ?
usabilityRoutine:.long ?                @ XREF: StartMenuExt+E8/r
                                        @ StartMenuExt+15C/r
u10:        .long ?
effectRoutine:.long ?
u18:        .long ?
hoverRoutine:.long ?                    @ XREF: Menu_HandleDirectionInputs+C6/r
changeRoutine:.long ?                   @ XREF: Menu_HandleDirectionInputs+B0/r
MenuCommandStruct ends

@ ---------------------------------------------------------------------------

SomeInternal6CBBStruct struc @ (sizeof=0x17, mappedto_24)
                                        @ XREF: State6CBB/r
                                        @ BottomHelpProc/r
SomeVRAMPointer:.long ?
field_4:    .long ?
SomeRoutinePointer:.long ?
SomeRoutinePointer2:.long ?
field_10:   .short ?
field_12:   .short ?
field_14:   .short ?
field_16:   .byte ?
SomeInternal6CBBStruct ends

@ ---------------------------------------------------------------------------

AIStruct    struc @ (sizeof=0x48, mappedto_28) @ XREF: EWRAM:gAISArray/r
                                        @ ClearAISs+18/o ...
flags:      .short ?                    @ XREF: ClearAISs:loop/w
                                        @ sub_8004EE8+10/r ...
xPos:       .short ?                    @ XREF: AdvanceAIS+BC/r
                                        @ AdvanceAIS+C0/w ...
yPos:       .short ?                    @ XREF: AdvanceAIS+C6/r
                                        @ AdvanceAIS+CA/w ...
delayCountdown:.short ?                 @ XREF: UpdateAISs+26/r
                                        @ UpdateAISs+28/o ...
OAM2Base:   .short ?                    @ XREF: sub_8004EE8+36/w
                                        @ CreateAIS+3A/w ...
drawDepth:  .short ?                    @ XREF: sub_8004EE8+38/w
                                        @ CreateAIS+3C/w ...
field_C:    .short ?                    @ XREF: sub_8004EE8+3A/w
                                        @ CreateAIS+3E/w ...
field_E:    .short ?                    @ XREF: StartEfxHpBar+A/r
                                        @ StartBattleAnimHitEffects+54/r ...
field_10:   .short ?                    @ XREF: sub_8004EE8+3C/w
                                        @ CreateAIS+40/w ...
field_12:   .byte ?                     @ XREF: ekrBattle_WaitForRoundAnimations+D0/r
                                        @ ekrBattle_WaitForRoundAnimations:loc_8050548/r ...
frameIndex: .byte ?                     @ XREF: AdvanceAIS+136/w
currentCommandCount:.byte ?             @ XREF: sub_8004EE8+40/w
                                        @ CreateAIS+44/w ...
commandIndex:.byte ?                    @ XREF: AdvanceAIS+E6/o
                                        @ BattleAIS_ExecCommands+56/o
            .byte ? @ undefined
            .byte ? @ undefined
field_18:   .long ?
OAM01Base:  .long ?                     @ XREF: sub_8004EE8+3E/w
                                        @ CreateAIS+42/w ...
framePtrCurrent:.long ?                 @ XREF: sub_8004EE8+30/w
                                        @ CreateAIS+34/w ...
framePtrStart:.long ?                   @ XREF: sub_8004EE8+32/w
                                        @ CreateAIS+36/w ...
pSheetData: .long ?                     @ XREF: AdvanceAIS+13C/w
                                        @ BattleAIS_ExecCommands+732/w ...
pSheetBuffer:.long ?                    @ XREF: sub_8004EE8+42/w
                                        @ CreateAIS+46/w ...
pOAMDataStart:.long ?                   @ XREF: sub_8004EE8+44/w
                                        @ CreateAIS+48/w ...
Previous:   .long ?                     @ XREF: ClearAISs+14/w
                                        @ SortAISs+1C/w ...
Next:       .long ?                     @ XREF: UpdateAISs:continue/r
                                        @ UpdateAISs:no_display/r ...
pOAMData:   .long ?                     @ XREF: AdvanceAIS+148/w
                                        @ AdvanceAIS+164/w ...
field_40:   .long ?                     @ XREF: sub_8004EE8+46/w
                                        @ CreateAIS+4A/w
field_44:   .long ?                     @ XREF: sub_8004EE8+48/w
                                        @ CreateAIS+4C/w ...
AIStruct    ends

@ ---------------------------------------------------------------------------

TextStruct  struc @ (sizeof=0x8, mappedto_25)
                                        @ XREF: EWRAM:stru_2001668/r
                                        @ EWRAM:gTradeMenuTextHandles/r ...
VRAMTileIndexOffset:.short ?            @ XREF: ROM:off_8036CC0/o
                                        @ sub_8043548+56/r ...
xCursor:    .byte ?                     @ XREF: Text_Clear+8/w
                                        @ Text_GetXCursor/r ...
textColorIndex:.byte ?                  @ XREF: Text_Clear+A/w
                                        @ Text_SetColorId/w ...
tileWidth:  .byte ?                     @ XREF: Text_InitClear+C/w
                                        @ Text_InitDB+C/w ...
useDoubleBuffer:.byte ?                 @ XREF: Text_InitClear+10/w
                                        @ Text_InitDB+12/w ...
currentBufferId:.byte ?                 @ XREF: Text_InitClear+E/w
                                        @ Text_InitDB+E/w ...
field_7:    .byte ?                     @ XREF: Text_InitClear+12/w
                                        @ Text_InitDB+14/w ...
TextStruct  ends

@ ---------------------------------------------------------------------------

EventEngine6C struc @ (sizeof=0x6C, mappedto_26)
header:     Header6C ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
pActiveIdleRoutine:.long ?
EvPtr:      .long ?
EvPtr2:     .long ?
pCurrentEvents:.long ?
state:      .short ?                    @ & 0x04 = Skipping?, & 0x200 = Follow with camera?
stallTimer: .short ?
field_40:   .byte ?
field_41:   .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .short ?
field_46:   .short ?
pUNIT:      .long ?
unitCount:  .short ?
field_4E:   .byte ?
loadParameter:.byte ?
field_50:   .long ?
field_54:   .long ?
field_58:   .long ?
field_5C:   .long ?
field_60:   .long ?
field_64:   .long ?
field_68:   .long ?
EventEngine6C ends

@ ---------------------------------------------------------------------------

OAMInterBufferStruct struc @ (sizeof=0x10, mappedto_29)
                                        @ XREF: EWRAM:gHiObjPool/r
                                        @ EWRAM:gHiObjNodes/r ...
PreviousOrNext:.long ?                  @ XREF: HiObjClear:Continue/w
                                        @ HiObjClear+2A/w ...
xCoord:     .short ?                    @ XREF: HiObjInsertSafe+16/w
                                        @ HiObjInsert+12/w ...
yCoord:     .short ?                    @ XREF: HiObjInsertSafe+1C/w
                                        @ HiObjInsert+14/w ...
OAM2Data:   .short ?                    @ XREF: HiObjInsertSafe+22/w
                                        @ HiObjInsert+16/w ...
            .byte ? @ undefined
            .byte ? @ undefined
pOAMData:   .long ?                     @ XREF: HiObjClear+18/w
                                        @ HiObjInsertSafe+24/w ...
OAMInterBufferStruct ends

@ ---------------------------------------------------------------------------

MovementFillStruct struc @ (sizeof=0xC, mappedto_31)
                                        @ XREF: IWRAM:gMovementFillConfig/r
posStructPtr:.long ?                    @ XREF: ARM_Func5+8/r
                                        @ ARM_FillMovementMapCore+18/w ...
fillStatePtr:.long ?                    @ XREF: ARM_Func5+98/r
                                        @ ARM_Func5+B0/w ...
hasUnitBool:.byte ?                     @ XREF: ARM_Func5+58/r
                                        @ MapFillMovement+1C/w ...
movement:   .byte ?                     @ XREF: ARM_Func5:continue/r
                                        @ MapFillMovement+14/w ...
unitIndex:  .byte ?                     @ XREF: ARM_Func5+7C/r
                                        @ MapFillMovement+30/w ...
maxMovValue:.byte ?                     @ XREF: MapFillMovement+38/w
                                        @ MapMovementMarkMovementEdges+46/r ...
MovementFillStruct ends

@ ---------------------------------------------------------------------------

TCS         struc @ (sizeof=0x28, mappedto_37)
ROMTCS:     .long ?
FrameDataPointer:.long ?
AnimDataStart:.long ?
AnimDataCursor:.long ?
OAMDataPointer:.long ?
RotScalePointer:.long ?
cycleTimer: .short ?
cycleTimeStep:.short ?
CurrentSubCycleTime:.short ?
OAMIndex:   .short ?
GfxUpdateNeeded:.byte ?
RotScaleIndex:.byte ?
OAM2Data:   .short ?
GfxPointer: .long ?
TCS         ends

@ ---------------------------------------------------------------------------

GmapUnit6C  struc @ (sizeof=0x6C, mappedto_38)
header:     Header6C ?                  @ XREF: GmapUnit_Loop+3A/r
            .byte ? @ undefined
field_2A:   .short ?                    @ XREF: GmapUnit_Init+2/w
                                        @ GmapUnit_Loop+C/r ...
someOAMIndex:.short ?                   @ XREF: GmapUnit_Loop+D8/r
                                        @ NewMapUnit+90/w
field_2E:   .short ?                    @ XREF: GmapUnit_Loop+D2/r
                                        @ NewMapUnit+58/w ...
field_30:   .long ?                     @ XREF: GmapUnit_Loop+AC/r
                                        @ GmapUnit_Loop+C4/r ...
index:      .byte ?                     @ XREF: GmapUnit_Loop+A2/o
                                        @ NewMapUnit+70/o
field_35:   .byte ?                     @ XREF: NewMapUnit+5C/o
field_36:   .byte ?                     @ XREF: GmapUnit_Loop+BA/o
field_37:   .byte ?                     @ XREF: GmapUnit_Init+6/o
                                        @ GmapUnit_Loop+92/o
classId:    .short ?                    @ XREF: GmapUnit_Loop+D6/r
                                        @ NewMapUnit+76/w
classId2:   .short ?                    @ XREF: NewMapUnit+78/w
field_3C:   .short ?                    @ XREF: GmapUnit_Init+E/w
                                        @ GmapUnit_Loop+4A/r
field_3E:   .short ?                    @ XREF: GmapUnit_Init+C/w
                                        @ GmapUnit_Loop+54/r
pMMSTCS:    .long ?                     @ XREF: GmapUnit_Destruct+2/r
                                        @ GmapUnit_Loop+12A/r ...
field_44:   .long ?
field_48:   .long ?
field_4C:   .long ?
field_50:   .long ?
field_54:   .long ?
field_58:   .long ?
field_5C:   .long ?
field_60:   .long ?
field_64:   .long ?
field_68:   .long ?
GmapUnit6C  ends

@ ---------------------------------------------------------------------------

MOVEUNITExtraData struc @ (sizeof=0x4C, mappedto_50)
                                        @ XREF: IWRAM:gMoveUnitExtraDataArray/r
                                        @ MU_Init+C/o ...
index:      .byte ?                     @ XREF: MU_Init:Continue/w
                                        @ MU_IsAnyActive:StartLoop/r ...
paletteIndex:.byte ?                    @ XREF: MU_CreateInternal+E4/w
                                        @ MU_CreateInternal+118/r ...
objTileIndex:.short ?                   @ XREF: MU_CreateInternal+120/r
                                        @ MU_GenerateConfigDefault+1C/w ...
currentCommandIndex:.byte ?             @ XREF: MU_StartMoveScript+1E/w
                                        @ MU_InterpretCommandScript+6/r ...
moveCommands:.byte 63 dup(?)            @ XREF: MU_InterpretCommandScript+10/o
                                        @ MU_InterpretCommandScript+84/o ...
field_44:   .long ?
MOVEUNIT:   .long ?                     @ XREF: MU_CreateInternal+130/w
                                        @ MU_IsAnyActive+8/o ...
MOVEUNITExtraData ends

@ ---------------------------------------------------------------------------

MOVEUNIT6C  struc @ (sizeof=0x58, mappedto_40)
header:     Header6C ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
unit:       .long ?
tcs:        .long ?
extraDataPointer:.long ?
vramPtr:    .long ?
sprFrameId: .byte ?
            .byte ? @ undefined
cameraFollow:.byte ?
state:      .byte ?
field_40:   .byte ?
classId:    .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .byte ?
field_45:   .byte ?
OAMPriorityMask:.short ?
field_48:   .short ?
field_4A:   .short ?
xSub:       .short ?
ySub:       .short ?
field_50:   .short ?
field_52:   .short ?
pBlendTimer6C:.long ?
MOVEUNIT6C  ends

@ ---------------------------------------------------------------------------

PromotionInit6C struc @ (sizeof=0x6C, mappedto_43)
header:     Header6C ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
ccramifyParent:.long ?
StateIndex: .byte ?
PromStateIndex:.byte ?
u32:        .byte ?
charId:     .byte ?
u34:        .byte ?
u35:        .byte ?
field_36:   .byte ?
field_37:   .byte ?
unitStruct: .long ?
promotionItemSlot:.long ?
field_40:   .byte ?
field_41:   .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .byte ?
field_49:   .byte ?
field_4A:   .byte ?
field_4B:   .byte ?
field_4C:   .byte ?
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
field_50:   .byte ?
field_51:   .byte ?
field_52:   .byte ?
field_53:   .byte ?
field_54:   .byte ?
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionInit6C ends

@ ---------------------------------------------------------------------------

PromotionMain6C struc @ (sizeof=0x6C, mappedto_44)
header:     Header6C ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
field_2C:   .byte ?
field_2D:   .byte ?
field_2E:   .byte ?
field_2F:   .byte ?
u30:        .long ?
pPromotionSub6C:.long ?
charId:     .byte ?
modeId:     .byte ?
field_3A:   .byte ?
field_3B:   .byte ?
field_3C:   .byte ?
field_3D:   .byte ?
field_3E:   .byte ?
field_3F:   .byte ?
field_40:   .byte ?
field_41:   .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .byte ?
field_49:   .byte ?
field_4A:   .byte ?
field_4B:   .byte ?
field_4C:   .byte ?
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
field_50:   .byte ?
field_51:   .byte ?
field_52:   .byte ?
field_53:   .byte ?
field_54:   .byte ?
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionMain6C ends

@ ---------------------------------------------------------------------------

PromotionSub6C struc @ (sizeof=0x6C, mappedto_45)
header:     Header6C ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
u2C:        .short ?
u2E:        .short ?
u30:        .short ?
u32:        .short ?
u34:        .short ?
u36:        .short ?
u38:        .short ?
field_3A:   .byte ?
field_3B:   .byte ?
classDescId:.byte ?
field_3D:   .byte ?
field_3E:   .byte ?
field_3F:   .byte ?
u40:        .byte ?
u41:        .byte ?
u42:        .short ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
u48:        .byte ?
field_49:   .byte ?
u4A:        .byte ?
field_4B:   .byte ?
u4C:        .byte ?
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
u50:        .long ?
pMenuSelect6C:.byte ?
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionSub6C ends

@ ---------------------------------------------------------------------------

SoundStatus struc @ (sizeof=0x9)        @ XREF: EWRAM:gSoundStatus/r
field_0:    .short ?
overwrittenSongId:.short ?              @ XREF: sub_8002620+16/w
                                        @ sub_8002670+12/r ...
songId:     .short ?                    @ XREF: Sound_GetCurrentSong+2/r
                                        @ Sound_PlaySong+C/w ...
songPlaying:.byte ?                     @ XREF: Sound_IsSongPlaying+2/r
                                        @ Sound_FadeSongOut+42/w ...
field_7:    .byte ?                     @ XREF: Sound_FadeOut_800237C+46/w
                                        @ Sound_PlaySong+A/w ...
maxChannels:.byte ?                     @ XREF: SetSoundDefaultMaxChannels+C/w
                                        @ SetSoundMaxChannels+4/w ...
SoundStatus ends

@ ---------------------------------------------------------------------------

ActionData  struc @ (sizeof=0x38)       @ XREF: EWRAM:gActionData/r
currentRN:  .short ?
currentRN2: .short ?
currentRN3: .short ?
pushedRN:   .short ?                    @ XREF: String_ExpandNames+A8/r
                                        @ sub_801E048+18/r ...
pushedRN2:  .short ?                    @ XREF: sub_801E1FC+20/w
                                        @ sub_801E250+10/w ...
pushedRN3:  .short ?
unitIndex:  .byte ?                     @ XREF: SetupActiveUnit+20/w
                                        @ PlayerPhase_PreAction+6/r ...
targetIndex:.byte ?                     @ XREF: sub_8021B30+14/r
                                        @ RescueSelection_OnSelect+4/w ...
xMove:      .byte ?                     @ XREF: ProcessUnitMovement:Begin/w
                                        @ ProcessUnitMovement+7C/w ...
yMove:      .byte ?                     @ XREF: ProcessUnitMovement+24/w
                                        @ ProcessUnitMovement+7E/w ...
moveCount:  .byte ?                     @ XREF: SetupActiveUnit+24/w
                                        @ MoveActiveUnit+1C/r ...
actionId:   .byte ?                     @ XREF: sub_8011F5C:loc_80121A4/w
                                        @ SetupActiveUnit+22/w ...
itemSlotIndex:.byte ?                   @ XREF: PlayerPhase_PreAction+14C/r
                                        @ sub_8022CF0+16/w ...
xPos2:      .byte ?                     @ XREF: DropSelection_OnSelect+10/w
                                        @ sub_8022DF0+28/w ...
yPos2:      .byte ?                     @ XREF: DropSelection_OnSelect+14/w
                                        @ sub_8022DF0+2C/w ...
someTrapType:.byte ?                    @ XREF: sub_8022DF0+30/w
                                        @ sub_8022E8C+30/w ...
postSuspendAction:.byte ?               @ XREF: MapMain_Suspend+6/w
                                        @ PlayerPhase_Suspend+6/w ...
field_17:   .byte ?
SomeBattleRound:.long ?                 @ XREF: sub_8011F5C+44/w
                                        @ sub_8011F5C+4E/w ...
field_1C:   .long ?                     @ XREF: sub_801098C+1C/r
                                        @ sub_801098C+24/w ...
field_20:   .long ?
field_24:   .long ?
field_28:   .byte ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
field_2C:   .byte ?
field_2D:   .byte ?
field_2E:   .byte ?
field_2F:   .byte ?
field_30:   .byte ?
field_31:   .byte ?
field_32:   .byte ?
field_33:   .byte ?
field_34:   .byte ?
field_35:   .byte ?
field_36:   .byte ?
field_37:   .byte ?
ActionData  ends

@ ---------------------------------------------------------------------------

MusicPlayerInfo struc @ (sizeof=0x40)   @ XREF: IWRAM:stru_30063C0/r
                                        @ IWRAM:stru_3006400/r ...
songHeader: .long ?
status:     .long ?
trackCount: .byte ?
priority:   .byte ?
cmd:        .byte ?
            .byte ? @ undefined
clock:      .long ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
memAccArea: .long ?
tempoD:     .short ?
tempoU:     .short ?
tempoI:     .short ?
tempoC:     .short ?
fadeOI:     .short ?
fadeOC:     .short ?
fadeOV:     .short ?
            .byte ? @ undefined
            .byte ? @ undefined
tracks:     .long ?
tone:       .long ?
ident:      .long ?
func:       .long ?
intp:       .long ?
MusicPlayerInfo ends

@ ---------------------------------------------------------------------------

TileRegisterEntry struc @ (sizeof=0xC)  @ XREF: EWRAM:gTileRegistry/r
                                        @ SyncRegisteredTiles:Continue/o
source:     .long ?                     @ XREF: ClearTileRegistry:ContinueLoop/w
                                        @ ClearTileRegistry+24/w ...
destination:.long ?                     @ XREF: ClearTileRegistry+14/w
                                        @ RegisterTileGraphics+14/w ...
size:       .short ?                    @ XREF: ClearTileRegistry+16/w
                                        @ RegisterTileGraphics+16/w ...
field_A:    .short ?                    @ XREF: ClearTileRegistry+18/w
                                        @ RegisterTileGraphics:Continue/w ...
TileRegisterEntry ends

@ ---------------------------------------------------------------------------

ROMCharEntry struc @ (sizeof=0x34, mappedto_108)
                                        @ XREF: Event32_SpawnSingleUnit+4A/o
                                        @ Event35_UnitClassChanging+32/o ...
nameId:     .short ?
descId:     .short ?                    @ XREF: PromotionDisplay_Init+1A0/r
number:     .byte ?                     @ XREF: sub_80125C0+20/r
                                        @ sub_80125C0+4C/r ...
class:      .byte ?                     @ XREF: Event32_SpawnSingleUnit+50/r
                                        @ Event35_UnitClassChanging+38/r ...
portraitId: .short ?                    @ XREF: GetUnitPortraitId+6/r
                                        @ GetUnitPortraitId+26/r ...
miniPortrait:.byte ?                    @ XREF: GetUnitMiniPortraitId+6/r
affinity:   .byte ?                     @ XREF: GetUnitSupportBonuses+94/r
                                        @ GetUnitSupportBonuses+AA/r ...
u0A:        .byte ?
baseLevel:  .byte ?                     @ XREF: RecomputeUnitStatsForLevelPenalty+E/o
                                        @ RecomputeUnitStatsForLevelPenalty+4E/o ...
baseHP:     .byte ?                     @ XREF: LoadUnitStats+8/r
                                        @ RecomputeUnitStatsForLevelPenalty+1C/r
basePow:    .byte ?                     @ XREF: LoadUnitStats+12/r
                                        @ RecomputeUnitStatsForLevelPenalty+24/r
baseSkl:    .byte ?                     @ XREF: LoadUnitStats+1A/r
                                        @ RecomputeUnitStatsForLevelPenalty+2C/r
baseSpd:    .byte ?                     @ XREF: LoadUnitStats+22/r
                                        @ RecomputeUnitStatsForLevelPenalty+34/r
baseDef:    .byte ?                     @ XREF: LoadUnitStats+2A/r
                                        @ RecomputeUnitStatsForLevelPenalty+3C/r
baseRes:    .byte ?                     @ XREF: LoadUnitStats+32/r
                                        @ RecomputeUnitStatsForLevelPenalty+44/r
baseLck:    .byte ?                     @ XREF: LoadUnitStats+38/r
                                        @ RecomputeUnitStatsForLevelPenalty+4A/r
baseCon:    .byte ?                     @ XREF: GetUnitAid+1A/o
                                        @ GetUnitAid+38/o ...
rank1:      .byte ?                     @ XREF: LoadUnitStats+52/o
rank2:      .byte ?
rank3:      .byte ?
rank4:      .byte ?
rank5:      .byte ?
rank6:      .byte ?
rank7:      .byte ?
rank8:      .byte ?
growthHP:   .byte ?                     @ XREF: CheckForLevelUp+78/r
                                        @ CheckForLevelUp+1A8/r
growthPow:  .byte ?
growthSkl:  .byte ?
growthSpd:  .byte ?
growthDef:  .byte ?
growthRes:  .byte ?
growthLck:  .byte ?
u23:        .byte ?
u24:        .byte ?
u25:        .byte ?                     @ XREF: sub_8057CAC+66/o
u26:        .byte ?
u27:        .byte ?
attributes: .long ?                     @ XREF: InitPlayerUnitPositionsForPrepScreen+48/r
                                        @ sub_801247C+1A/r ...
supportDataPtr:.long ?                  @ XREF: GetROMUnitSupportCount+4/r
                                        @ GetROMUnitSupportingId+4/r ...
uPtr30:     .long ?                     @ XREF: Event33_CheckUnitVarious+6A/o
ROMCharEntry ends

@ ---------------------------------------------------------------------------

DebugTextData struc @ (sizeof=0x2014)   @ XREF: EWRAM:gDebugTextData/r
u00:        .long ?                     @ XREF: SetupDebugFontForBG+50/w
bgId:       .short ?                    @ XREF: SetupDebugFontForBG+4E/w
                                        @ DBG_BG_Print:loc_800383C/o ...
baseTileIndex:.short ?                  @ XREF: SetupDebugFontForBG+5A/w
                                        @ DBG_BG_Print+14/r ...
cursorColumn:.long ?                    @ XREF: ROM:08003892/w
                                        @ PrintStringToDBG+12/r ...
cursorLine: .long ?                     @ XREF: ROM:08003894/w
                                        @ PrintStringToDBG:loc_80039F8/r ...
startingLine:.long ?                    @ XREF: PrintStringToDBG+56/r
                                        @ PrintStringToDBG+64/w ...
data:       .byte 8192 dup(?)
DebugTextData ends

@ ---------------------------------------------------------------------------

MapAnimDataStruct struc @ (sizeof=0x63, mappedto_110)
                                        @ XREF: EWRAM:gMapAnimData/r
BAS:        BattleAnimActorStruct 4 dup(?)
                                        @ XREF: MU_EndRefaceApAnim+10/r
                                        @ MapAnimProc_DisplayItemStealingPopup+10/r ...
pNextRound: .long ?                     @ XREF: MapAnim_AdvanceBattleRound+4/r
                                        @ MapAnim_AdvanceBattleRound:finish/r ...
pItemAnimProcScript:.long ?             @ XREF: MapAnimProc_PrepareNextRound+4E/w
                                        @ SetupMapAnimSpellData+1E/w ...
attackingActorId:.byte ?                @ XREF: MU_EndRefaceApAnim+8/o
                                        @ MU_EndRefaceApAnim+A/r ...
defendingActorId:.byte ?                @ XREF: MapAnim_AdvanceBattleRound+18/o
                                        @ MapAnim_AdvanceBattleRound+1E/w ...
currentRoundLoBits:.short ?             @ XREF: MapAnim_AdvanceBattleRound+24/o
                                        @ MapAnim_AdvanceBattleRound+28/w ...
field_5C:   .byte ?                     @ XREF: MapAnim_AdvanceBattleRound+32/w
                                        @ MapAnim_BeginRoundSpecificAnims+17A/o ...
field_5D:   .byte ?                     @ XREF: MapAnim_AdvanceBattleRound+3A/w
                                        @ MapAnim_BeginRoundSpecificAnims+92/r ...
spellAssocActorCount:.byte ?            @ XREF: MapAnim_AdvanceBattleRound+3E/o
                                        @ MapAnim_AdvanceBattleRound+40/r ... @ 2 calls battle quotes
someBoolOrTimer:.byte ?                 @ XREF: sub_807B5DC+14/w
                                        @ sub_807B634+14/w ...
someX:      .byte ?                     @ XREF: MapAnim_MoveCameraOnWarpTarget+E/o
                                        @ MapAnim_MoveCameraOnWarpTarget+10/w ...
someY:      .byte ?                     @ XREF: MapAnim_MoveCameraOnWarpTarget+16/o
                                        @ MapAnim_MoveCameraOnWarpTarget+18/w ...
field_62:   .byte ?                     @ XREF: MapAnimProc_DisplayItemStealingPopup+8/o
                                        @ MapAnimProc_DisplayItemStealingPopup+A/r ...
MapAnimDataStruct ends

@ ---------------------------------------------------------------------------

BattleAnimActorStruct struc @ (sizeof=0x14, mappedto_109)
                                        @ XREF: SetupMapBattleAnim+8A/o
                                        @ MapAnimDataStruct/r
pBattleUnit:.long ?                     @ XREF: MapAnimProc_MoveCameraOntoSubject+4/r
                                        @ MapAnimProc_MoveCameraOntoTarget+10/r ...
pBattleUnit2:.long ?                    @ XREF: MU_EndRefaceApAnim+10/r
                                        @ MapAnimProc_DisplayItemStealingPopup+10/r ...
pMu:        .long ?                     @ XREF: MapAnimProc_DisplayDeathFade+38/o
                                        @ MapAnimProc_DisplayDeathFade+3C/r ...
hpMax:      .byte ?                     @ XREF: MapAnimProc_DisplayDeathFade+3C/r
                                        @ SetupMapBattleAnim+88/w ...
hpDisplayed:.byte ?                     @ XREF: MapAnimProc_DisplayDeathQuote+18/o
                                        @ MapAnimProc_DisplayDeathQuote+1A/r ...
field_E:    .short ?                    @ XREF: sub_807BCA8+24/r
                                        @ sub_807BCA8+60/r ...
field_10:   .byte ?
field_11:   .byte ?                     @ XREF: sub_807BC00+80/r
field_12:   .byte ?
field_13:   .byte ?
BattleAnimActorStruct ends

@ ---------------------------------------------------------------------------

ChapterData struc @ (sizeof=0x4C)       @ XREF: EWRAM:gChapterData/r
                                        @ SaveGame+2A/o ...
savedGlobalTimer:.long ?                @ XREF: SaveGame+24/w
                                        @ LoadGame+34/r ...
startGlobalTimer:.long ?                @ XREF: StartChapter+9C/w
                                        @ sub_8037E7C+E/r ...
goldAmount: .long ?                     @ XREF: GetPartyGoldAmount+C/r
                                        @ SetPartyGoldAmount+4/w ...
saveSlot:   .byte ?                     @ XREF: sub_80A4594+A8/r
                                        @ sub_80A4594+BE/r ...
visionRange:.byte ?                     @ XREF: sub_800BAA8+2C/w
                                        @ GetUnitFogViewRange+6/r ...
chapterId:  .byte ?                     @ XREF: ROM:08009C96/w
                                        @ ROM:08009CB6/w ...
phase:      .byte ?                     @ XREF: SwitchGameplayPhase+4/r
                                        @ SwitchGameplayPhase+20/w ...
turnNumber: .short ?                    @ XREF: Event19_+7C/r
                                        @ SwitchGameplayPhase+2E/r ...
curX:       .byte ?                     @ XREF: PlayerPhase_MainIdle+124/w
                                        @ sub_801D344+62/w ...
curY:       .byte ?                     @ XREF: PlayerPhase_MainIdle+128/w
                                        @ sub_801D344+66/w ...
chapterState:.byte ?                    @ XREF: ROM:08009C7C/r
                                        @ ROM:08009C82/w ... @ +0x04 = postgame if set?, +0x08 = can't suspend? (trial map?), +0x10 = in prep screen, +0x40 = difficult mode, +0x80 = link arena?
weather:    .byte ?                     @ XREF: sub_800EE54+3E/r
                                        @ SetupBackgroundForWeatherMaybe+4/r ...
supportGainCount:.short ?               @ XREF: AddSupportPoints+36/r
                                        @ AddSupportPoints+3A/w ...
playthroughId:.byte ?                   @ XREF: IsPlaythroughIdUnique+36/r
                                        @ sub_80A4C14:loc_80A4C48/r ...
u19:        .byte ?                     @ XREF: sub_8090D80+D0/r
                                        @ sub_8091C00+48/r ...
lastUnitListSortId:.byte ?              @ XREF: sub_8090620+72/w
                                        @ sub_8090D80+96/r ...
mode:       .byte ?                     @ XREF: ROM:08009E5E/r
                                        @ sub_8009E98+C/r ...
weaponTypeIndexedCharacterIdsSpecifyingIfUnusableWeaponsAreUsable:.byte 4 dup(?)
                                        @ XREF: String_ExpandNames+CE/o
                                        @ String_ExpandNames+D2/r ...
sTacticianName:.byte 11 dup(?)          @ XREF: ROM:off_80314E8/o
                                        @ ROM:off_80314FC/o ...
bit1RelatedToBonusItems:.byte ?         @ XREF: sub_80A3B48+74/o
                                        @ sub_80A3B48+76/r ...
field_2C:   .byte ?                     @ XREF: sub_80A3B48+8C/r
                                        @ ROM:080A41A8/r ...
field_2D:   .byte ?
field_2E:   .byte ?                     @ XREF: SaveNewGame+B4/r
                                        @ SaveNewGame+BC/w
field_2F:   .byte ?
fundsTotalDifference:.long ?            @ XREF: sub_80A41C8+36/w
                                        @ SaveNewGame+76/o ...
field_34:   .long ?                     @ XREF: sub_80A41C8+1C/r
                                        @ sub_80A41C8+22/w ...
field_38:   .byte ?                     @ XREF: sub_8037EB0+C/r
                                        @ sub_80A41C8+14/r ...
field_39:   .byte ?
field_3A:   .byte ?
field_3B:   .byte ?
field_3C:   .byte ?                     @ XREF: ComputeChapterRankings+4C/r
                                        @ ComputeChapterRankings+54/w ...
field_3D:   .byte ?                     @ XREF: ComputeChapterRankings+76/r
                                        @ ComputeChapterRankings+80/w ...
tacticsRank:.byte ?                     @ XREF: ComputeChapterRankings+1E/o
                                        @ ComputeChapterRankings+26/r ...
field_3F:   .byte ?
option1:    .byte ?                     @ XREF: sub_8009A24+10/r
                                        @ sub_8009A24+1C/w ...
option2:    .byte ?                     @ XREF: Sound_PlaySongSmoothCommon+1C/o
                                        @ Sound_PlaySongSmoothCommon+1E/r ...
option3:    .byte ?                     @ XREF: sub_8009FF8+6/o
                                        @ sub_8009FF8+8/r ...
option4:    .byte ?                     @ XREF: DebugChargeMenu_Draw+30/r
                                        @ DebugChargeMenu_Idle+28/o ...
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .short ?                    @ XREF: StartChapter+A4/o
                                        @ StartChapter+A6/w ...
nextTutorialEventParams:.byte ?         @ XREF: sub_8009D1C+6/o
                                        @ sub_8009D1C+8/r ...
nextTutorialEvent:.byte ?               @ XREF: StartChapter+B6/o
                                        @ StartChapter+B8/w ...
ChapterData ends

@ ---------------------------------------------------------------------------

WMLocationData struc @ (sizeof=0x20)    @ XREF: GetBattleMapType:continue/o
                                        @ ROM:gWMLocationData/r
flags1:     .byte ?                     @ XREF: GetBattleMapType+176/r
flags2:     .byte ?                     @ XREF: GetBattleMapType:loc_80BD1F0/r
mapIcon:    .short ?                    @ XREF: sub_80BB628+38/r
                                        @ sub_80BB628+52/r ...
chId_Eirika:.byte ?                     @ XREF: WMLocation_GetChapterId+16/r
chId_Ephraim:.byte ?                    @ XREF: WMLocation_GetChapterId+2A/r
altEvId:    .short ?                    @ XREF: WMLoc_GetNextLocId+8/o
nextLocUnset_Eirika:.byte ?             @ XREF: WMLoc_GetNextLocId+14/o
nextLocUnset_Ephraim:.byte ?
nextLocSet_Eirika:.byte ?
nextLocSet_Ephraim:.byte ?
pArmory:    .long ?
pShop:      .long ?
pSecretShop:.long ?
xCoord:     .short ?                    @ XREF: Event84_WM_SETCAMONLOC+E/o
                                        @ Event85_WM_SETCAMONSPRITE+16/o ...
yCoord:     .short ?                    @ XREF: Event84_WM_SETCAMONLOC+12/o
                                        @ Event85_WM_SETCAMONSPRITE+1A/o ...
text:       .short ?
shipTravel: .short ?
WMLocationData ends

@ ---------------------------------------------------------------------------

EventDefinitionBuffer struc @ (sizeof=0x1C)
pEventDeclaration:.long ?
pEvent:     .long ?                     @ XREF: CallEventDefinition+8/r
                                        @ CallEventDefinition+14/r ...
triggerIndex:.long ?                    @ XREF: CallEventDefinition+E/r
                                        @ CallEventDefinition+1A/r ...
command:    .long ?                     @ XREF: EvCheck07_CHES+24/w
                                        @ EvCheck09_+36/w ...
field_10:   .long ?                     @ XREF: EvCheck06_VILL+A/w
                                        @ EvCheck07_CHES+2C/w ...
field_14:   .long ?                     @ XREF: EvCheck07_CHES+28/w
field_18:   .byte ?                     @ XREF: EvCheck07_CHES+A/o
                                        @ EvCheck09_+1C/o ...
field_19:   .byte ?                     @ XREF: EvCheck09_+24/o
                                        @ EvCheck0A_SHOP+14/o ...
char1:      .byte ?                     @ XREF: CheckForCharacterEvents+26/w
                                        @ RunCharacterEvents+26/w
char2:      .byte ?                     @ XREF: CheckForCharacterEvents+28/w
                                        @ RunCharacterEvents+28/w
EventDefinitionBuffer ends

@ ---------------------------------------------------------------------------

ArenaData   struc @ (sizeof=0x20)       @ XREF: EWRAM:gArenaData/r
playerUnitPtr:.long ?                   @ XREF: PrepareArenaStruct+6/w
                                        @ PrepareArenaStruct+AC/r ...
opponentUnitPtr:.long ?                 @ XREF: sub_802CD64+12/r
                                        @ PrepareArenaStruct+A/w ...
field_8:    .byte ?                     @ XREF: sub_8031EA0:loc_8031EC2/w
                                        @ sub_8031ECC+2/o ...
field_9:    .byte ?
field_A:    .byte ?                     @ XREF: sub_8031ED8+2/r
                                        @ sub_8031EE4+2/w
field_B:    .byte ?                     @ XREF: PrepareArenaStruct+CA/w
range:      .byte ?                     @ XREF: sub_802CD64+4C/r
                                        @ LoadArenaWeapons+2A/w ...
playerWType:.byte ?                     @ XREF: PrepareArenaStruct+24/w
                                        @ PrepareArenaStruct+26/r ...
opponentWType:.byte ?                   @ XREF: PrepareArenaStruct+38/w
                                        @ PrepareArenaStruct+42/r ...
playerClass:.byte ?                     @ XREF: PrepareArenaStruct+1C/w
opponentClass:.byte ?                   @ XREF: PrepareArenaStruct+2C/w
                                        @ PrepareArenaStruct+2E/r ...
playerLevel:.byte ?                     @ XREF: PrepareArenaStruct+4C/w
                                        @ PrepareArenaStruct+5A/r ...
opponentLevel:.byte ?                   @ XREF: PrepareArenaStruct:SkipGenLevel/w
                                        @ LoadArenaOpponentStruct+20/r
playerMagicDamage:.byte ?               @ XREF: PrepareArenaStruct+40/w
                                        @ PrepareArenaStruct+BA/o ...
opponentMagicDamage:.byte ?             @ XREF: PrepareArenaStruct+48/w
                                        @ PrepareArenaStruct+AE/o ...
pad15:      .byte ?
playerPowWeight:.short ?                @ XREF: PrepareArenaStruct+B6/w
                                        @ AdjustArenaOpponentPower+E/w ...
opponentPowWeight:.short ?              @ XREF: PrepareArenaStruct+C2/w
                                        @ AdjustArenaOpponentPower+1A/w ...
playerWeapon:.short ?                   @ XREF: SetupBattleWeaponData+A6/r
                                        @ LoadArenaWeapons+1A/w
opponentWeapon:.short ?                 @ XREF: SetupBattleWeaponData+C6/r
                                        @ LoadArenaWeapons+26/w ...
field_1E:   .short ?
ArenaData   ends

@ ---------------------------------------------------------------------------

ProcState   struc @ (sizeof=0x29)       @ XREF: Loop6C_efxNaglfar+180/o
                                        @ BottomHelpProc/r ...
EntryPoint: .long ?                     @ XREF: sub_80C6E14+2/w
                                        @ sub_80C6E1C+6/r ...
NextCall:   .long ?                     @ XREF: InitProcSystem+16/w
                                        @ StartProc+E/w ...
Destructor: .long ?                     @ XREF: InitProcSystem+18/w
                                        @ StartProc+12/w ...
Callback:   .long ?                     @ XREF: InitProcSystem+1A/w
                                        @ StartProc+14/w ...
NamePtr:    .long ?                     @ XREF: InitProcSystem+1C/w
                                        @ ProcInst01_SetName+4/w
pParent:    .long ?                     @ XREF: InitProcSystem+1E/w
                                        @ StartProc+16/w ...
child:      .long ?                     @ XREF: InitProcSystem+20/w
                                        @ StartProc+18/w ...
prev:       .long ?                     @ XREF: InitProcSystem+22/w
                                        @ StartProc+1A/w ...
next:       .long ?                     @ XREF: InitProcSystem+24/w
                                        @ StartProc+1C/w ...
SleepTimer: .short ?                    @ XREF: InitProcSystem+26/w
                                        @ StartProc+20/w ...
Mark:       .byte ?                     @ XREF: InitProcSystem+2A/o
                                        @ StartProc+24/o ...
SomeBitfieldMaybe:.byte ?               @ XREF: StartProc+2E/o
                                        @ StartProc+52/o ...
ExecBlockCounter:.byte ?                @ XREF: StartBlockingProc+1C/o
                                        @ EndProc_Private+4E/o ...
ProcState   ends

@ ---------------------------------------------------------------------------

BottomHelpProc struc @ (sizeof=0x6C)
header:     ProcState ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
pString:    .long ?                     @ XREF: sub_80354E0+A/r
                                        @ sub_80354E0:loc_8035580/r ...
field_30:   SomeInternal6CBBStruct ?    @ XREF: sub_80354E0+C/o
field_47:   .byte ?
field_48:   TextStruct ?                @ XREF: sub_80354E0+2A/o
                                        @ sub_80354E0+62/o ...
field_50:   .long ?
field_54:   .long ?
field_58:   .long ?
field_5C:   .short ?                    @ XREF: sub_80354E0+5A/o
field_5E:   .short ?                    @ XREF: sub_80354E0+52/o
field_60:   .long ?
field_64:   .long ?
field_68:   .long ?
BottomHelpProc ends

@ ---------------------------------------------------------------------------

FaceProc    struc @ (sizeof=0x4E)
header:     ProcState ?
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
pPortraitData:.long ?                   @ XREF: FACE_Load+2/r
                                        @ StartFace:loc_80056C8/w ...
displayBits:.long ?                     @ XREF: StartFace+D8/w
                                        @ SetFaceDisplayBits+8/w ... @ & 0x807 dictates obj data
                                        @ & 0x3C0 dictates priority
xPosition:  .short ?                    @ XREF: FACE_Display+36/r
                                        @ StartFace+A4/w ...
yPosition:  .short ?                    @ XREF: FACE_Display+28/r
                                        @ StartFace+A8/w ...
pObjData:   .long ?                     @ XREF: FACE_Display+3C/r
                                        @ ApplyFaceDisplayBitChange:obj_data_set/w
tileData:   .short ?                    @ XREF: FACE_Display+3E/r
                                        @ ApplyFaceDisplayBitChange+C6/w ...
portraitIndex:.short ?                  @ XREF: StartFace+98/w
                                        @ sub_8005F38+4/r ...
faceSlotIndex:.byte ?                   @ XREF: StartFace+90/o
                                        @ EndFace+6/o ...
objDepth:   .byte ?                     @ XREF: FACE_Display+32/o
                                        @ StartFace+9C/o
field_42:   .short ?
field_44:   .long ?                     @ XREF: StartFace+B6/w
                                        @ StartFace+C8/w ...
pProcEyeWinker:.long ?                  @ XREF: StartFace+B8/w
                                        @ StartFace+D2/w ...
field_4C:   .short ?
FaceProc    ends

@ ---------------------------------------------------------------------------

EventEngineProc struc @ (sizeof=0x6C)
header:     ProcState ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
pActiveIdleRoutine:.long ?              @ XREF: EventEngine_Loop:loc_800CEAC/r
                                        @ StartMapEventEngine+16/w ...
EvPtr:      .long ?                     @ XREF: StartMapEventEngine+18/w
                                        @ StartBattleEventEngine+12/w ...
EvPtr2:     .long ?                     @ XREF: StartMapEventEngine+1A/w
                                        @ StartBattleEventEngine+14/w ...
pCurrentEvents:.long ?                  @ XREF: Event86_WM_MOVECAM+4/r
                                        @ Event9E_PUTSPRITE+2/r ...
state:      .short ?                    @ XREF: Event86_WM_MOVECAM+14/r
                                        @ Event8D_+2/r ... @ & 0x04 = Skipping?, & 0x200 = Follow with camera?
stallTimer: .short ?                    @ XREF: StartMapEventEngine+22/w
                                        @ StartBattleEventEngine+1C/w ...
field_40:   .byte ?                     @ XREF: StartMapEventEngine+26/o
                                        @ StartBattleEventEngine+20/o ...
field_41:   .byte ?                     @ XREF: EventEngine_Loop+3A/o
                                        @ EventEngine_Destructor+14/o ...
activeTextType:.byte ?                  @ XREF: StartBattleEventEngine+2E/o
                                        @ sub_800D208:loc_800D21E/o ...
chInd:      .byte ?                     @ XREF: StartMapEventEngine+38/o
                                        @ Event19_+60/o
field_44:   .short ?                    @ XREF: StartMapEventEngine+42/o
                                        @ Event1A_TEXTSTART+32/o ...
field_46:   .short ?
pUNIT:      .long ?                     @ XREF: StartMapEventEngine+46/w
                                        @ StartBattleEventEngine+38/w ...
unitCount:  .short ?                    @ XREF: StartBattleEventEngine+3A/o
                                        @ LoadUnitsIdle+12/o ...
field_4E:   .byte ?                     @ XREF: LoadUnitsIdle+C6/o
                                        @ Event2B_+52/o ...
loadParameter:.byte ?                   @ XREF: LoadUnitsIdle+16/o
                                        @ Event2B_+58/o ...
field_50:   .long ?
field_54:   .long ?
field_58:   .long ?
field_5C:   .long ?
field_60:   .long ?
field_64:   .long ?
field_68:   .long ?
EventEngineProc ends

@ ---------------------------------------------------------------------------

AP          struc @ (sizeof=0x28)       @ XREF: IWRAM:gAPArray/r
                                        @ AP_ClearAll+E/o
ROMTCS:     .long ?                     @ XREF: AP_ClearAll:Continue/w
                                        @ _AP_Alloc:Start/r
FrameDataPointer:.long ?                @ XREF: _AP_Exec+A6/r
                                        @ _AP_Load+A/w ...
AnimDataStart:.long ?                   @ XREF: _AP_Exec+56/r
                                        @ AP_SwitchAnimation+22/w ...
AnimDataCursor:.long ?                  @ XREF: _AP_Exec+30/r
                                        @ _AP_Exec+34/w ...
OAMDataPointer:.long ?                  @ XREF: _AP_RegisterGraphics+2E/r
                                        @ _AP_Exec+B4/w ...
RotScalePointer:.long ?                 @ XREF: _AP_RegisterGraphics+16/r
                                        @ _AP_Exec+C6/w ...
cycleTimer: .short ?                    @ XREF: _AP_Exec+14/r
                                        @ _AP_Exec+16/o ...
cycleTimeStep:.short ?                  @ XREF: _AP_Exec+E/r
                                        @ _AP_Exec+78/r ...
CurrentSubCycleTime:.short ?            @ XREF: _AP_Exec+7C/r
                                        @ _AP_Exec+80/w ...
OAMIndex:   .short ?                    @ XREF: _AP_RegisterGraphics:NoExtraData/r
                                        @ _AP_Init+16/w ...
GfxUpdateNeeded:.byte ?                 @ XREF: _AP_RegisterGraphics+44/o
                                        @ _AP_Exec+E4/o ...
RotScaleIndex:.byte ?                   @ XREF: _AP_RegisterGraphics+24/o
                                        @ _AP_QueueRotScaleData+B2/o ...
OAM2Data:   .short ?                    @ XREF: _AP_RegisterGraphics+30/r
                                        @ _AP_QueueTileGfx+54/r ...
GfxPointer: .long ?                     @ XREF: _AP_RegisterGraphics+3C/r
                                        @ _AP_QueueTileGfx+50/r ...
AP          ends

@ ---------------------------------------------------------------------------

MUProc      struc @ (sizeof=0x58, mappedto_111)
header:     ProcState ?
            .byte ? @ undefined
            .byte ? @ undefined
            .byte ? @ undefined
unit:       .long ?                     @ XREF: MU_CreateExt+28/w
                                        @ MU_DisplayAsMMS+3E/r ...
ap:         .long ?                     @ XREF: MU_CreateInternal+12C/w
                                        @ MU_SetFacing:Not0xF/r ...
extraDataPointer:.long ?                @ XREF: MU_CreateInternal+12E/w
                                        @ MU_IsActive+4/r ...
vramPtr:    .long ?                     @ XREF: MU_CreateInternal+BE/w
                                        @ MU_SetFacing+12/r ...
sprFrameId: .byte ?                     @ XREF: MU_CreateInternal+C6/o
                                        @ MU_SetFacing+E/o ...
            .byte ? @ undefined
cameraFollow:.byte ?                    @ XREF: MU_CreateExt+2C/o
                                        @ MU_EnableAttractCamera/o ...
state:      .byte ?                     @ XREF: MU_IsAnyActive+14/o
                                        @ MU_IsActive+E/o ...
field_40:   .byte ?                     @ XREF: MU_DisplayAsSMS+6/o
                                        @ MU_DisplayAsMMS+6/o ...
classId:    .byte ?                     @ XREF: MU_SetDefaultFacing+4/o
                                        @ MU_InterpretCommandScript+100/o ...
field_42:   .byte ?                     @ XREF: MU_SetFacing+6/o
                                        @ MU_InterpretCommandScript+F0/o ...
field_43:   .byte ?
field_44:   .byte ?                     @ XREF: MU_GetMovementSpeed+16/o
                                        @ MU_ForceSetMaxMoveSpeed/o
field_45:   .byte ?
OAMPriorityMask:.short ?                @ XREF: MU_CreateInternal+CA/o
                                        @ MU_DisplayAsSMS+7E/o ...
field_48:   .short ?                    @ XREF: MU_InterpretCommandScript+8E/o
field_4A:   .short ?                    @ XREF: MU_CreateInternal+DA/o
                                        @ MU_InterpretCommandScript+160/o ...
xPosition:  .short ?                    @ XREF: MU_CreateForUI+12/o
                                        @ MU_InterpretCommandScript+AC/o ...
yPosition:  .short ?                    @ XREF: MU_CreateForUI+1A/o
                                        @ MU_InterpretCommandScript+BE/o ...
xOffset:    .short ?                    @ XREF: MU_ComputeDisplayPosition+18/o
                                        @ MU_DisplayAsMMS+84/o ...
yOffset:    .short ?                    @ XREF: MU_ComputeDisplayPosition+2E/o
                                        @ MU_ComputeDisplayPosition+62/o ...
pBlendTimer6C:.long ?                   @ XREF: MU_StartDeathFade+16/w
MUProc      ends

@ ---------------------------------------------------------------------------

PromotionInitProc struc @ (sizeof=0x6C)
header:     ProcState ?                 @ XREF: sub_80CC4AC+5C/r
                                        @ sub_80CC990+5A/r ...
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
ccramifyParent:.long ?                  @ XREF: NewPromotionMain+1E/w
StateIndex: .byte ?                     @ XREF: NewPromotionMain+12/o
                                        @ PromotionInit_SetNullState/o ...
promStateIndex:.byte ?                  @ XREF: sub_80CC4AC+12/o
                                        @ sub_80CC5B4+8/o ...
u32:        .byte ?                     @ XREF: sub_80CC990+56/o
                                        @ NewPromotion+18/o
charId:     .byte ?                     @ XREF: sub_80CC6D4+128/o
                                        @ sub_80CC6D4+1A0/o ...
u34:        .byte ?                     @ XREF: sub_80CC5B4+2C/o
                                        @ sub_80CC5B4+44/o ...
u35:        .byte ?                     @ XREF: sub_80CC5B4+4E/o
                                        @ sub_80CC628+1C/o ...
field_36:   .byte ?
field_37:   .byte ?
unit:       .long ?                     @ XREF: sub_80CC940+16/w
                                        @ sub_80CC990+6A/w ...
promotionItemSlot:.long ?               @ XREF: sub_80CC940+1C/w
                                        @ sub_80CC990+6E/w ...
field_40:   .byte ?
field_41:   .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .byte ?
field_49:   .byte ?
field_4A:   .byte ?
field_4B:   .byte ?
field_4C:   .byte ?
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
field_50:   .byte ?
field_51:   .byte ?
field_52:   .byte ?
field_53:   .byte ?
field_54:   .byte ?
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionInitProc ends

@ ---------------------------------------------------------------------------

PromotionMainProc struc @ (sizeof=0x6C)
header:     ProcState ?                 @ XREF: sub_80CC4AC+E/r
                                        @ sub_80CC5B4+4/r ...
field_29:   .byte ?                     @ XREF: sub_80CC4AC+4/o
                                        @ sub_80CD2F8+6/o ...
field_2A:   .byte ?
field_2B:   .byte ?
field_2C:   .byte ?
field_2D:   .byte ?
field_2E:   .byte ?
field_2F:   .byte ?
u30:        .long ?                     @ XREF: sub_80CC4AC+A/w
                                        @ sub_80CD658+8/w
pPromotionSub6C:.long ?                 @ XREF: sub_80CC4AC+C/w
                                        @ sub_80CD2F8+22/w
charId:     .byte ?                     @ XREF: NewPromotionMain+22/o
                                        @ PromotionCommand_OnSelect+18/o ...
modeId:     .byte ?                     @ XREF: NewPromotionMain+26/o
field_3A:   .byte ?
field_3B:   .byte ?                     @ XREF: sub_80CC628+22/o
                                        @ PromotionCommand_OnSelect+46/o
field_3C:   .byte ?
field_3D:   .byte ?
field_3E:   .byte ?
field_3F:   .byte ?
field_40:   .byte ?
field_41:   .byte ?
field_42:   .byte ?
field_43:   .byte ?
field_44:   .byte ?
field_45:   .byte ?
field_46:   .byte ?
field_47:   .byte ?
field_48:   .byte ?
field_49:   .byte ?
field_4A:   .byte ?
field_4B:   .byte ?
field_4C:   .byte ?
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
field_50:   .byte ?
field_51:   .byte ?
field_52:   .byte ?
field_53:   .byte ?
field_54:   .byte ?
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionMainProc ends

@ ---------------------------------------------------------------------------

PromotionDisplayProc struc @ (sizeof=0x6C)
header:     ProcState ?                 @ XREF: PromotionDisplay_Init+E/r
                                        @ sub_80CD1D4+2/r ...
field_29:   .byte ?
field_2A:   .byte ?
field_2B:   .byte ?
promotedClassIds:.short 3 dup(?)        @ XREF: PromotionDisplay_Init+D4/o
                                        @ PromotionDisplay_Init+152/w ...
promotedClassAnimIds:.short 3 dup(?)    @ XREF: PromotionDisplay_Init+70/w
                                        @ PromotionDisplay_Init+72/w ...
promotedClassDescIds:.short 3 dup(?)    @ XREF: PromotionDisplay_Init+CC/o
                                        @ PromotionDisplay_Init+1A2/w ...
field_3E:   .byte ?
field_3F:   .byte ?
u40:        .byte ?                     @ XREF: PromotionDisplay_Init+C2/o
                                        @ PromotionDisplay_Init+1AA/o ...
selectedOptionIndex:.byte ?             @ XREF: PromotionDisplay_DrawClassName+6/o
                                        @ PromotionDisplay_Init+1B0/o ...
u42:        .short ?                    @ XREF: PromotionDisplay_Init+24/o
                                        @ PromotionDisplay_Init+90/o ...
field_44:   .byte ?                     @ XREF: PromotionDisplay_InitClassName+C/o
field_45:   .byte ?
field_46:   .byte ?                     @ XREF: PromotionDisplay_InitClassName+16/o
field_47:   .byte ?
displayedWeapon:.short ?                @ XREF: PromotionDisplay_Init+BC/o
promotedClassHasAnim:.byte 3 dup(?)     @ XREF: PromotionDisplay_Init+B6/o
                                        @ PromotionDisplay_Init+162/o ...
field_4D:   .byte ?
field_4E:   .byte ?
field_4F:   .byte ?
u50:        .long ?                     @ XREF: PromotionDisplay_Init+2A/w
                                        @ PromotionDisplay_Init+64/r ...
pMenuSelectProc:.byte ?                 @ XREF: PromotionDisplay_Init+1EE/w
field_55:   .byte ?
field_56:   .byte ?
field_57:   .byte ?
field_58:   .byte ?
field_59:   .byte ?
field_5A:   .byte ?
field_5B:   .byte ?
field_5C:   .byte ?
field_5D:   .byte ?
field_5E:   .byte ?
field_5F:   .byte ?
field_60:   .byte ?
field_61:   .byte ?
field_62:   .byte ?
field_63:   .byte ?
field_64:   .byte ?
field_65:   .byte ?
field_66:   .byte ?
field_67:   .byte ?
field_68:   .byte ?
field_69:   .byte ?
field_6A:   .byte ?
field_6B:   .byte ?
PromotionDisplayProc ends

@ ---------------------------------------------------------------------------

AIData      struc @ (sizeof=0x9B)       @ XREF: EWRAM:gAiData/r
unitIndexList:.byte 52 dup(?)
anonymous_51:.byte ?
anonymous_52:.byte ?
anonymous_53:.byte ?
anonymous_54:.byte ?
anonymous_55:.byte ?
anonymous_56:.byte ?
anonymous_57:.byte ?
anonymous_58:.byte ?
anonymous_59:.byte ?
anonymous_60:.byte ?
anonymous_61:.byte ?
anonymous_62:.byte ?
anonymous_63:.byte ?
anonymous_64:.byte ?
anonymous_65:.byte ?
anonymous_66:.byte ?
anonymous_67:.byte ?
anonymous_68:.byte ?
anonymous_69:.byte ?
anonymous_70:.byte ?
anonymous_71:.byte ?
anonymous_72:.byte ?
anonymous_73:.byte ?
anonymous_74:.byte ?
anonymous_75:.byte ?
anonymous_76:.byte ?
anonymous_77:.byte ?
anonymous_78:.byte ?
anonymous_79:.byte ?
anonymous_80:.byte ?
anonymous_81:.byte ?
anonymous_82:.byte ?
anonymous_83:.byte ?
anonymous_84:.byte ?
anonymous_85:.byte ?
anonymous_86:.byte ?
anonymous_87:.byte ?
anonymous_88:.byte ?
anonymous_89:.byte ?
anonymous_90:.byte ?
anonymous_91:.byte ?
anonymous_92:.byte ?
anonymous_93:.byte ?
anonymous_94:.byte ?
anonymous_95:.byte ?
anonymous_96:.byte ?
anonymous_97:.byte ?
anonymous_98:.byte ?
anonymous_99:.byte ?
anonymous_100:.byte ?
anonymous_101:.byte ?
anonymous_102:.byte ?
anonymous_103:.byte ?
anonymous_104:.byte ?
anonymous_105:.byte ?
anonymous_106:.byte ?
anonymous_107:.byte ?
anonymous_108:.byte ?
anonymous_109:.byte ?
anonymous_110:.byte ?
anonymous_111:.byte ?
anonymous_112:.byte ?
anonymous_113:.byte ?
anonymous_114:.byte ?
gUnitIndexIt:.long ?                    @ XREF: BskOrder_Init+70/w
                                        @ CpOrder_BuildUnitList+1A/w ...
nextOrder:  .byte ?                     @ XREF: CpPhase_Init+18/o
                                        @ CpPhase_Init+1A/w ...
decideIndex:.byte ?                     @ XREF: CpDecide_Main+8/o
                                        @ CpDecide_Main+C/w ...
dangerMapFilled:.byte ?                 @ XREF: CpDecide_Main+7A/o
                                        @ CpDecide_Main+7C/w ...
aiConfigBits:.byte ?                    @ XREF: CpPhase_Init+8/o
                                        @ CpPhase_Init+E/w ...
field_7C:   .byte ?                     @ XREF: CpDecide_Main+18/o
                                        @ CpDecide_Main+1A/w ...
anonymous_120:.byte ?                   @ XREF: CpDecide_Main+74/o
                                        @ CpDecide_Main+76/w ...
anonymous_121:.byte ?                   @ XREF: CpPhase_Init+14/w
                                        @ BskPhase_Init+12/w ...
anonymous_122:.byte ?
specialItemsConfig:.long ?              @ XREF: CpPhase_Init+32/o
                                        @ CpPhase_Init+3E/w ...
anonymous_124:.byte ?                   @ XREF: CpPhase_Init+44/w
bestBlueMovement:.byte ?                @ XREF: AiTryMoveTowards+130/o
                                        @ AiTryMoveTowards+132/r ...
scrInstructionResult:.byte ?            @ XREF: AiFindPositionOfCharacter+7A/w
                                        @ AiFindPositionOfCharacter:off_803A82C/o ...
anonymous_127:.byte ?                   @ XREF: AiSomethingCheckPick+206/o
                                        @ AiSomethingCheckPick+20A/w ...
anonymous_128:.byte ?                   @ XREF: sub_80411F8+174/w
                                        @ sub_80413CC+E/o ...
anonymous_129:.byte ?                   @ XREF: sub_80411F8+17C/w
                                        @ sub_80413CC+14/o ...
anonymous_130:.byte ?                   @ XREF: sub_80411F8+184/w
                                        @ sub_80413CC+18/o ...
anonymous_131:.byte ?                   @ XREF: sub_80411F8+18C/w
            .byte ? @ undefined
anonymous_132:.byte ?                   @ XREF: CpPhase_Init:Continue/w
                                        @ BskPhase_Init+20/o ...
anonymous_133:.byte 2 dup(?)
decision:   AiDecision ?                @ XREF: sub_8011F5C+258/w
                                        @ sub_8011F5C+25C/w ...
AIData      ends

@ ---------------------------------------------------------------------------

MenuRelatedEntry struc @ (sizeof=0x8)   @ XREF: IWRAM:gMenuRelatedList/r
field_0:    .short ?                    @ XREF: sub_804F714+1A/r
                                        @ sub_804F77C+1C/r ...
anonymous_0:.short ?                    @ XREF: ClearMenuRelatedList:Continue/w
                                        @ sub_804F714+E/r ...
usability:  .long ?                     @ XREF: sub_804F714+14/r
                                        @ sub_804F77C+26/w ...
MenuRelatedEntry ends

@ ---------------------------------------------------------------------------

AiDecision  struc @ (sizeof=0xB)        @ XREF: AIData/r
actionType: .byte ?                     @ XREF: CpDecide_Main+B8/r
                                        @ ClearAiDecision+4/w ...
unitIndex:  .byte ?                     @ XREF: ClearAiDecision+6/w
                                        @ AiSetDecision+18/w
xPos:       .byte ?                     @ XREF: sub_8011F5C+258/w
                                        @ CpDecide_Main+A8/r ...
yPos:       .byte ?                     @ XREF: sub_8011F5C+25C/w
                                        @ CpDecide_Main+B2/r ...
field_4:    .byte ?                     @ XREF: ClearAiDecision+C/w
field_5:    .byte ?                     @ XREF: ClearAiDecision+E/w
targetIndex:.byte ?                     @ XREF: ClearAiDecision+10/w
                                        @ AiSetDecision+20/w ...
itemIndex:  .byte ?                     @ XREF: ClearAiDecision+12/w
                                        @ AiSetDecision+22/w ...
xPos2:      .byte ?                     @ XREF: ClearAiDecision+14/w
                                        @ AiSetDecision+26/w ...
yPos2:      .byte ?                     @ XREF: ClearAiDecision+16/w
                                        @ AiSetDecision+2A/w ...
actionPerformedBool:.byte ?             @ XREF: CpDecide_Main+9C/o
                                        @ CpDecide_Main+9E/r ...
AiDecision  ends

@ ---------------------------------------------------------------------------

AiAttackInfo struc @ (sizeof=0xC)
xPos:       .byte ?
yPos:       .byte ?                     @ XREF: AiTryDoOffensiveAction+224/r
                                        @ AiTrySimulateBattle+7A/w ...
uIndex:     .byte ?                     @ XREF: AiTryDoOffensiveAction+190/w
                                        @ AiTryDoOffensiveAction+21A/r ...
            .byte ? @ undefined
item:       .short ?                    @ XREF: AiTryDoOffensiveAction+1B6/w
                                        @ AiTryDoOffensiveAction+228/r ...
            .byte ? @ undefined
            .byte ? @ undefined
decisionTotalWeight:.long ?             @ XREF: AiTryDoOffensiveAction+204/r
                                        @ AiTryDoOffensiveAction+214/r ...
AiAttackInfo ends

@ ---------------------------------------------------------------------------

LCDIOBuffer struc @ (sizeof=0x70)       @ XREF: IWRAM:gLCDIOBuffer/r
gLCDControlBuffer:.short ?              @ XREF: SyncLCDControl+6/r
                                        @ LoadBgConfig+9C/r ...
anonymous_0:.short ?
gGeneralLCDStatusBuffer:.short ?        @ XREF: SyncLCDControl+C/r
                                        @ SetInterrupt_LCDVBlank+A/r ...
anonymous_1:.short ?
anonymous_2:.short ?
anonymous_3:.short ?
gBg0ControlBuffer:.short ?              @ XREF: SyncLCDControl+12/r
                                        @ GetBgControlBuffer:off_8000F6C/o ...
anonymous_4:.short ?
gBg1ControlBuffer:.short ?              @ XREF: SyncLCDControl+18/r
                                        @ GetBgControlBuffer:off_8000F74/o ...
anonymous_5:.short ?
gBg2ControlBuffer:.short ?              @ XREF: SyncLCDControl+1E/r
                                        @ GetBgControlBuffer:off_8000F7C/o ...
anonymous_6:.short ?
gBg3ControlBuffer:.short ?              @ XREF: SyncLCDControl+24/r
                                        @ ROM:off_8000F88/o ... @ base 2
anonymous_7:.short ?
gBg0PositionBuffer:Vector2H ?           @ XREF: SyncLCDControl+2A/r
                                        @ SetBgPosition+2A/w ...
gBg1PositionBuffer:Vector2H ?           @ XREF: SyncLCDControl+30/r
                                        @ SetBgPosition+36/w ...
gBg2PositionBuffer:Vector2H ?           @ XREF: SyncLCDControl+36/r
                                        @ SetBgPosition+42/w ...
gBg3PositionBuffer:Vector2H ?           @ XREF: SyncLCDControl+3C/r
                                        @ SetBgPosition+4E/w ...
gWindowHDimBuffer:.long ?               @ XREF: SyncLCDControl+42/r
                                        @ sub_8008464+20/w ...
gWindowVDimBuffer:.long ?               @ XREF: SyncLCDControl+48/r
                                        @ sub_8008464+28/w ...
gWindowControlBuffer:.long ?            @ XREF: SyncLCDControl+4E/r
                                        @ sub_8008464+44/r ...
gMosaicSizeBuffer:.short ?              @ XREF: SyncLCDControl+54/r
                                        @ sub_808DBC8+50/w
anonymous_8:.short ?
gColorSpecialEffectsSelectionBuffer:.long ? @ XREF: SyncLCDControl+5A/r
                                        @ SetColorEffectsParameters+A/o ...
anonymous_9:.long ?                     @ XREF: sub_80BF7B4+4/r
                                        @ sub_80BF7DC+8/w ...
gAlphaBlendingCoefficientsBuffer:.short ? @ XREF: SyncLCDControl+64/r
                                        @ SetColorEffectsParameters+1A/o ...
gBrightnessCoefficientBuffer:.short ?   @ XREF: SyncLCDControl+6E/r
                                        @ SetColorEffectsParameters+24/w ...
gBg2RotationScalingParameterBuffer:.long ? @ XREF: SyncLCDControl+74/r
                                        @ sub_80ADE90+18/r ...
gBg2RotationScalingParameterBuffer2:.long ? @ XREF: SyncLCDControl+7A/r
                                        @ sub_80ADE90+26/r ...
gBg2ReferencePointXBuffer:.long ?       @ XREF: SyncLCDControl+80/r
                                        @ sub_80ADEE0+42/w ...
gBg2ReferencePointYBuffer:.long ?       @ XREF: SyncLCDControl+86/r
                                        @ sub_80ADEE0+5A/w ...
gBg3RotationScalingParameterBuffer:.long ? @ XREF: SyncLCDControl+8C/r
                                        @ ROM:off_80ADE8C/o ...
gBg3RotationScalingParameterBuffer2:.long ? @ XREF: SyncLCDControl+92/r
gBg3ReferencePointXBuffer:.long ?       @ XREF: SyncLCDControl+98/r
gBg3ReferencePointYBuffer:.long ?       @ XREF: SyncLCDControl+9E/r
anonymous_10:.byte ?                    @ XREF: SyncBgs+7A/r
                                        @ SyncBgs+B8/r ...
anonymous_11:.byte 7 dup(?)
LCDIOBuffer ends

@ ---------------------------------------------------------------------------

ActiveEventRegistry struc @ (sizeof=0x40)
                                        @ XREF: IWRAM:gActiveEventRegistry/r
events:     .long 10 dup(?)
triggerIndices:.short 10 dup(?)         @ XREF: RegisterEventActivation+16/o
                                        @ GetEventTriggerId+14/o
size:       .short ?                    @ XREF: RegisterEventActivation+4/o
                                        @ RegisterEventActivation+6/r ...
_pad3E:     .byte 2 dup(?)
ActiveEventRegistry ends

@ ---------------------------------------------------------------------------

MusicPlayer struc @ (sizeof=0xC)        @ XREF: ROM:gMPlayTable/r
info:       .long ?                     @ XREF: m4aSoundInit:loc_80D01AA/r
                                        @ sub_80D0330:loc_80D0340/r ... @ offset (00000000)
track:      .long ?                     @ XREF: m4aSoundInit+34/r @ offset (00000000)
field_8:    .byte ?                     @ XREF: m4aSoundInit+36/r
            .byte ? @ undefined
field_A:    .short ?                    @ XREF: m4aSoundInit+3E/r
MusicPlayer ends

@ ---------------------------------------------------------------------------

struct_0    struc @ (sizeof=0x10)       @ XREF: ROM:gSoundRoomTable/r
anonymous_0:.long ?                     @ XREF: sub_80AEC94:loc_80AEC9A/r
                                        @ sub_80AECB4+10/r ...
anonymous_1:.long ?
anonymous_2:.long ?                     @ XREF: sub_80AED64+5E/r
anonymous_3:.long ?
struct_0    ends

@ ---------------------------------------------------------------------------

GameState   struc @ (sizeof=0x40)       @ XREF: EWRAM:gGameState/r
mainLoopEndedFlag:.byte ?               @ XREF: OnVBlankMain+20/r
                                        @ OnVBlankMain+28/w ...
gameLogicLockCount:.byte ?              @ XREF: LockGameLogic+2/r
                                        @ LockGameLogic+6/w ...
gameGfxLockCount:.byte ?                @ XREF: StartGameVBlankProc+16/w
                                        @ LockGameGraphicsLogic+4/r ...
anonymous_0:.byte ?
statebits:  .byte ?                     @ XREF: sub_801240C+46/r
                                        @ HandleCursorMovement+32/r ...
anonymous_1:.byte ?
savedVCLY:  .short ?                    @ XREF: OnGameLoopMain+4E/w
                                        @ InBattleMainRoutine+8E/w ...
anonymous_2:.long ?
cameraRealPos:Vector2H ?                @ XREF: sub_8009198+C/o
                                        @ sub_8009198+E/r ...
anonymous_3:.long ?                     @ XREF: sub_8019D28+A/r
                                        @ sub_8019D28+C/o ...
cursorMapPos:Vector2H ?                 @ XREF: Event3C_+18/r
                                        @ Event3C_+1C/r ...
cursorMapPosPrevious:Vector2H ?         @ XREF: HandleCursorMovement+A4/w
                                        @ HandleCursorMovement+D0/w ...
someCursorRealPos:Vector2H ?            @ XREF: HandleCursorMovement+9C/r
                                        @ HandleCursorMovement+A0/w ...
cursorDisplayRealPos:Vector2H ?         @ XREF: MoveCameraByStepMaybe+6/r
                                        @ MoveCameraByStepMaybe+8/o ...
gSomeRealCameraOffset:Vector2H ?        @ XREF: DrawTileGraphics+C/w
                                        @ DrawTileGraphics+14/w ...
gSomeRealCameraOffsetTarget:Vector2H ?  @ XREF: sub_801588C+52/o
                                        @ sub_801588C+54/r ...
gItemGotButNotYet:.short ?              @ XREF: HandleNewItemGetFromDrop+1A/w
                                        @ MenuCommand_DrawExtraItem+6/r ...
gThatsAnItem2:.short ?                  @ XREF: sub_801DFDC+E/r
                                        @ sub_801E018+4/r ...
            .byte ? @ undefined
            .byte ? @ undefined
anonymous_5:.short ?                    @ XREF: sub_801588C+42/w
                                        @ sub_801588C+74/w ...
anonymous_6:.short ?                    @ XREF: sub_801588C+A4/w
                                        @ sub_801588C+D6/w ...
anonymous_7:.byte ?                     @ XREF: sub_801588C+3A/w
                                        @ sub_801588C+6C/w ...
anonymous_8:.byte ?                     @ XREF: sub_801588C+9C/w
                                        @ sub_801588C+CE/w ...
anonymous_9:.byte ?                     @ XREF: sub_801ECA8+12/r
                                        @ sub_801ED94+44/r ...
anonymous_10:.byte ?                    @ XREF: sub_801ECA8+1A/r
                                        @ sub_801ED94+4C/r ...
anonymous_11:.byte ?                    @ XREF: sub_801EC64+12/r
                                        @ sub_801ECEC+12/r ...
anonymous_12:.byte ?                    @ XREF: sub_801EC64+1A/r
                                        @ sub_801ECEC+1A/r ...
anonymous_13:.byte ?                    @ XREF: PlayerPhase_PreAction+19A/o
                                        @ PlayerPhase_PreAction+19C/r ...
partialActionsTakenBits:.byte ?         @ XREF: SetupActiveUnit+2C/w
                                        @ SetActiveUnit+26/w ...
anonymous_15:.byte ?                    @ XREF: PlayerPhase_MainIdle+188/w
                                        @ DisplayUnitEffectRange+80/r ...
anonymous_16:.byte ?                    @ XREF: SetupActiveUnit+32/w
                                        @ sub_8023838+E/w ...
GameState   ends

@ ---------------------------------------------------------------------------

BattleAnimRoundTypeDisplayEntry struc @ (sizeof=0x4)
                                        @ XREF: ROM:gBattleAnimModeLookupMaybe/r
frontFrameId:.byte ?                    @ XREF: sub_805A5A8+12/r @ base 10
frontDrawPriority:.byte ?               @ base 10
backFrameId:.byte ?                     @ base 10
backFramePriority:.byte ?               @ base 10
BattleAnimRoundTypeDisplayEntry ends

@ ---------------------------------------------------------------------------

PrepScreenUnitList struc @ (sizeof=0x104, mappedto_112)
                                        @ XREF: EWRAM:gPrepScreenUnitList/r
units:      .long 64 dup(?)
size:       .long ?                     @ XREF: GetPrepScreenUnitListSize+2/o
                                        @ GetPrepScreenUnitListSize+8/r ...
PrepScreenUnitList ends

@ ---------------------------------------------------------------------------

@ enum Item, copyof_2
ItemLightBrand: .equ 0x10
ItemRuneSword: .equ 0x11
ItemHandAxe: .equ 0x28
ItemTomahawk: .equ 0x29
ItemHatchet: .equ 0x2C
ItemChestKey: .equ 0x69
ItemDoorKey: .equ 0x6A
ItemLockpick: .equ 0x6B
ItemMemberCard: .equ 0x72
Item5ChestKey: .equ 0x79
ItemFillasMight: .equ 0x7D
ItemSetsLitany: .equ 0x80
ItemWindSword: .equ 0xA1
ItemNightmare: .equ 0xA6
ItemStone:   .equ 0xB5

@ ---------------------------------------------------------------------------

@ enum Class, mappedto_6
ClassGorgonEgg: .equ 0x34
ClassNecromancer: .equ 0x4F
ClassPhantom: .equ 0x51
ClassGorgonEgg2: .equ 0x62
ClassDemonKing: .equ 0x66

@ ---------------------------------------------------------------------------

@ enum Unit, mappedto_11
UnitLyonCh17: .equ 0x40
UnitLyonFinal: .equ 0x6C
UnitFormortiis: .equ 0xBE
UnitWall:    .equ 0xFE
UnitSnag:    .equ 0xFF

@ ---------------------------------------------------------------------------

@ enum FlagsCAttr, mappedto_12
CAttrNone:   .equ 0
CAttrMountedAid: .equ 1
CAttrCanto:  .equ 2
CAttrSteal:  .equ 4
CAttrLockpick: .equ 8
CAttrDance:  .equ 0x10
CAttrPlay:   .equ 0x20
CAttrCritBonus: .equ 0x40
CAttrBallista: .equ 0x80
CAttrPromoted: .equ 0x100
CAttrSupply: .equ 0x200
CAttrMounted: .equ 0x400
CAttrWyvern: .equ 0x800
CAttrPegasus: .equ 0x1000
CAttrLord:   .equ 0x2000
CAttrFemale: .equ 0x4000
CAttrBoss:   .equ 0x8000
CAttrLock1:  .equ 0x10000
CAttrLock2:  .equ 0x20000
CAttrLock3:  .equ 0x40000
CAttrMaxLevel10: .equ 0x80000

@ ---------------------------------------------------------------------------

@ enum FlagsIAttr, mappedto_13
IAttrNone:   .equ 0
IAttrWeapon: .equ 1
IAttrMagic:  .equ 2
IAttrStaff:  .equ 4
IAttrUnbreakable: .equ 8
IAttrUnsellable: .equ 0x10
IAttrBrave:  .equ 0x20
IAttrMagicDamage: .equ 0x40

@ ---------------------------------------------------------------------------

@ enum HardcodedTextId, mappedto_20
HammerneUseHelpText: .equ 0x878

@ ---------------------------------------------------------------------------

@ enum Construct6CCodes, copyof_22
_END:        .equ 0
_SET_NAME:   .equ 1
_CALL:       .equ 2
_LOOP:       .equ 3
_SET_ON_END: .equ 4
_ADD_CHILD:  .equ 5
_ADD_CHILD_BLOCKING: .equ 6
_ADD_MAIN:   .equ 7
_BLOCK_WHILE_EXISTS: .equ 8
_DELETE_EACH: .equ 9
_BREAK_EACH: .equ 0xA
_LABEL:      .equ 0xB
_GOTO:       .equ 0xC
_JUMP:       .equ 0xD
_SLEEP:      .equ 0xE
_MARK:       .equ 0xF
_BLOCK:      .equ 0x10
_DELETE_IF_DUPLICATE: .equ 0x11
_SET_BIT4:   .equ 0x12
_13:         .equ 0x13
_BLOCK_WHILE: .equ 0x14
_15:         .equ 0x15
_CALLR_AND_MAYBE_YIELD: .equ 0x16
_DELETE_EACH_DUPLICATE: .equ 0x17
_CALLR_ARG:  .equ 0x18
_19:         .equ 0x19

@ ---------------------------------------------------------------------------

@ enum SpellAssocFacing, mappedto_33
SAF_Target:  .equ 0
SAF_Up:      .equ 1
SAF_Right:   .equ 2
SAF_Standing: .equ 3

@ ---------------------------------------------------------------------------

@ enum UnitState, mappedto_107
US_HIDDEN:   .equ 1
US_GRAYED:   .equ 2
US_DEAD:     .equ 4
US_NOT_DEPLYOED: .equ 8
US_RESCUING: .equ 0x10
US_RESCUED:  .equ 0x20
US_CANTOING: .equ 0x40
US_UNDER_A_ROOF: .equ 0x80

