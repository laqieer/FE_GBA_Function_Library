#pragma once

#include "FE8U.h"
#include "FE7J.h"

/* Entry Point*/
void _start();

/* Interrupt Branch Process (Drawing from table)*/
void intr_main();

/* Main Function of a GBA Game*/
void AgbMain();

/* print version infomation on this build of the game*/
void print_build_version(char *buffer);

int InitProcSystem();

int EndProc(int a1);

int ExecProc(int a1);

int GotoProcLabel(unsigned __int16 **a1, int a2);

int ForEachProc(int a1);

signed int ProcInst11_EnsureUniqueWeak(_DWORD *a1);

signed int ProcInst12_EnsureUniqueStrong(int *a1);

int ForEach6CDoNothing(_6CStruct *a1, _DWORD *a2);

signed int GetIconGfxIndex(char a1);

int DrawIcon(_WORD *a1, int a2, int a3);

int StoreNumberStringOrDashesToSmallBuffer(int a1);

int StoreNumberHexStringToSmallBuffer(int a1);

int SetupDebugFontForOBJ(int a1, int a2);

int Font_InitForUI(FontStruct *a1, int a2, __int16 a3, __int16 a4);

int InitClearTextBatch(int a1);

int Text_AppendChar(int a1, unsigned __int8 *a2);

int DrawTextInline(unsigned __int8 *a1, _WORD *a2, char a3, char a4, __int16 a5, unsigned __int8 *a6);

int NewGreenTextColorManager(int a1);

int DrawSpecialUiChar_(int a1, int a2);

int DrawUiNumberOrDoubleDashes(_WORD *a1, int a2, int a3);

int DrawStatScreenBonusNumber(signed int a1, int a2);

int UpdateAISs();

AIStruct *CreateAIS(int a1, __int16 a2);

int SortAISs();

int InsertAIS(int a1);

int HiObjClear();

int Face_Init();

int StartFaceAuto(int a1, int a2, int a3, int a4);

int SetFaceDisplayBits(int a1, int a2);

int LoadMiniMugGraphics(int a1, int a2, int a3);

int SetFaceBlinkControl(int a1, int a2);

int Dialogue_ClearFaceReferences();

int Dialogue_InitGfxObj(int tileStart, int lineCount, int paletteIndex);

int StartDialogue(int a, int b, const char *textString, void *parent);

int DialogueMain_OnInit();

int StartDialogueTextChoice(unsigned __int16 *a1, int a2, int a3, int a4, int a5, int a6);

int DialogueEnableBgSyncByMask(int a1);

int AP_Create();

int AP_Update(_DWORD *a1);

int APProc_OnUpdate(int a1);

int APProc_SetParameters(_DWORD *a1, int a2, int a3, int a4);

char *String_GetFromIndex(int a1);

int PopupProc_GetInnerLength(int a1);

int ArchiveCurrentPalettes();

int ArchivePalette(int a1);

bool IsFadeActive();

int WaitForFade(int a1);

TextStruct *SomeDrawTextInlineAutoWidth(_WORD *a1, char a2, unsigned __int8 *a3);

int RerangeSomething(signed int a1);

int PlaySpacialSoundMaybe(int a1, signed int a2);

int MapMain_StartPhaseController(signed int a1);

int MoveCameraByStepMaybe(__int16 a1);

int GetSomeAdjustedCameraX(int a1);

int GetSomeAdjustedCameraY(int a1);

int DisplayCursor(int a1, int a2, int a3);

int StoreAdjustedCameraPositions(int a1, int a2, _DWORD *a3, _DWORD *a4);

int EquipUnitItemSlot(int a1, int a2);

int CanUnitUse(_DWORD *a1, unsigned __int8 a2);

signed int IsItemHammernable(int a1);

int ClearUnits();

int GetNextFreeUnit(int a1);

int RemoveUnitBlankItems(int a1);

int CharFillInventoryFromCode(int a1, int a2);

int AutolevelUnit(_DWORD *a1);

int GetUnitByCharId(int a1);

int GetUnitByCharIdAndAllegiance(int a1, int a2);

signed int CanUnitRescue(int a1, int a2);

int CleanupUnitStatesForPhaseSwitch();

int SetAllUnitNotBackSprite();

int UnitDecreaseItemUse(int a1, int a2);

int GetUnitAid(int *a1);

int GetRedTeamUseFlags();

int GetUnitCurrentHP(int a1);

int SetUnitHP(int a1, char a2);

int UnitTryHeal(int a1, int a2);

signed int CanUnitCrossTerrain(int a1, int a2);

int SetupMapRowPointers(int a1, _DWORD *a2, int a3, int a4);

int LoadChapterMapGfx(int a1);

int SyncTilesFromMapBuffer();

int RefreshTerrainMap();

int RefreshEntityMaps();

int SetMovCostTable(int a1);

int MapMovementMarkMovementEdges();

int MapMarkMovementEdges();

int MapSetInRange(int a1, int a2, int a3, char a4);

int MapSetInMagicSealedRange(char a1);

signed int StartupDebugMenu_InitializeFileEffect(int a1, int a2);

int DisplayUnitEffectRange(unsigned __int8 *a1);

int CanMoveActiveUnitTo(int x, int y);

int PlayerPhase_ResumeRangeDisplay(unsigned __int16 **a1);

int Loop6C_MLVCHC(int a1);

int GetEnemyStartCursorPosition(_DWORD *a1, _DWORD *a2);

int ADJUSTFROMXI_MoveCameraOnSomeUnit(signed int a1);

int GasTrapEffectGfx_Setup(int a1);

signed int ItemSelectMenu_Usability(int a1, int a2);

signed int StealCommandUsability();

signed int StealItemMenuCommand_Usability(int a1, int a2);

signed int AttackCommandUsability();

int ForEachUnitInRange();

int TryAddToDropTargetList(int a1, int a2);

int SMS_Init();

int SMS_RegisterUsage(int a1);

int SMS_SyncIndirect();

int GetUnitBattleMapSpritePaletteIndex(int a1);

int SMS_GetNewInfoStruct(signed int a1);

int DisplayChapterTileMarker();

bool CanUseHealingItem(int a1);

bool CanUseLockpick(_DWORD *a1);

int SimulateBattle(int a1, int a2, int a3, int a4);

int ComputeLethalityChance(int a1, _DWORD *a2);

int GetStatIncrease(int a1);

int GetAutoleveledStat(int a1, int a2);

int SaveUnitsFromBattle();

unsigned int BattleUnit_DidWRankGoUp(int a1);

int UpdateUnitFromBattleUnit(_BYTE *a1, int a2);

int SetupBattleUnitEquippedWeapon(int a1);

int ResetTraps();

int AddSnagsAndWalls();

char *GetMapChangesPointerById(int a1);

signed int GetMapChangesIdAt(int a1, int a2);

int ApplyMapChangesById(int a1);

int RemoveMapChange(int a1);

int UpdateUnitsUnderRoof();

int AddArrowTrapTargetsToTargetList(int a1, int a2, int a3);

int MakeTargetListForTurnTrapDamage();

int ExecLatona(signed int a1);

int LockGameGraphicsLogic();

signed int AddItemToConvoy(__int16 a1);

int LoadPlayerUnitsFromUnitStack2();

signed int GetUnitBestWRankType(int a1);

signed int GetClassBestWRankType(int a1);

signed int PrepareBalancedArenaFight();

int ActionSupport();

int DropRescuedUnitIfDead(signed int a1, int a2);

bool CanUnitUseAttack();

int GetChapterMapChangesPointer(int a1);

int StartBottomHelpText(signed int a1, int a2);

int AddWeaponStatsAfterRound(int a1, _BYTE *a2, _DWORD *a3);

int StartBattleForecast();

int MineFireTrap_80375A0(int a1);

TrapStruct *GetNonEmptyBallistaAt(int a1, int a2);

signed int GetUnitAiAttackPriority(int a1);

int SortAiUnitQueue(signed int a1);

int CpPerform_PerformCombat(signed int a1);

signed int AiFindPositionOfCharacter(int a1, signed __int16 *a2);

bool AiFindClosestPositionWithUnitOfClass(int a1, signed __int16 *a2);

bool CouldStationaryUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3);

bool CouldUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3);

int FillMovementAndRangeMapForItem(int a1, unsigned __int8 a2);

signed int GetItemAiStealPriority(unsigned __int16 a1);

signed int AiIsCharacterOnMap(unsigned __int16 a1);

signed int AiIsPositionLootable(unsigned __int8 a1, int a2);

int SetupUnitStatusStaffAIFlags(int a1, int a2);

int SetupUnitHealStaffAIFlags(int a1, int a2);

int AiScript_Exec(int a1);

int AiScriptCmd_02_ChangeAi(_BYTE *a1);

bool IsUnitEnemyWithActiveUnit(int a1);

int AiScriptCmd_04_ActionOnSelectedCharacter(_BYTE *a1);

int AiScriptCmd_05_DoStandardAction(_BYTE *a1);

int AiScriptCmd_0D_MoveTowardsCharacterUntilInRange(_BYTE *a1);

int AiScriptCmd_0F_MoveTowardsUnitWithClass(_BYTE *a1);

int AiScriptCmd_10_DoLooting(_BYTE *a1);

int AiScriptCmd_11_MoveTowardsSafety(_BYTE *a1);

int AiDoBerserkAction();

int AiDoBerserkMove();

int AiTrySimulateBattle(_BYTE *a1);

int AiGetPositionUnitSafetyWeight(int a1, int a2);

signed int AiUnitTryMoveTowardsEscapePoint();

signed int AiGetStaffAiIndex(unsigned __int16 a1);

bool GetAiSafestAccessibleAdjacentPosition(int a1, int a2, _WORD *a3);

int AiSetMovCostTableWithPassableWalls(int a1);

int AiSetMovCostTableWithTerrainSetAsPassable(int a1, int a2);

int NameSelect_DrawNameText(int a1);

int SioMenu_8047AF4();

int SioMenu_80480B4(int a1);

signed int ITEMRANGEDONE_sub_804AF2C(int a1, _DWORD *a2);

int StartMenuAdjusted(_DWORD *a1, signed int a2, int a3, int a4);

int LinkTargets();

int TargetSelection_HandleSelectInput(_DWORD *a1);

int GetFarthestTargetIndex();

char *LinkTargetsOrdered();

char *GetFirstTargetPointer();

int ekrBattle_8050244(int a1);

int StartEfxQuake(int quakeType);

int StartEfxSpellCast(int a1);

int SpellFx_WriteBgMap(int a1, int a2, int a3);

int BeginAnimsOnBattleAnimations();

void loadUnitKakudai(int a1);

bool IsItemDisplayedInBattle(int a1);

void initBothAIS();

int EfxThunderBG_Main(int a1);

int StartEfxDamageMojiEffectOBJ(int a1, int a2);

int FillBGRect(_WORD *a1, unsigned __int16 a2, int a3, __int16 a4, __int16 a5);

int ApplyFlashingPaletteAnimation(__int16 *palBuffer, int palId, int uhh, int clock);

void FireDragonBGAnimation14(_6CStruct *ctx);

int GetDeadEnemyAmount();

void DrawStatScreenPage(int a1);

int StartStatScreenHelpTextBubble(signed int a1, int a2);

int Loop6CUI1_HideTransition(int a1);

int Loop16CPI(int a1);

int InitPrepScreenUnitList();

/* 显示某个菜单选项（战前准备屏幕）
a1=ID,a2=函数指针,a3=是否灰色,a4=文本ID,a5=?*/
void addPrepMenuEntry(int id, int (*func)(int), u8 isGrey, int textID, int unk);

signed int CanUnitPrepScreenUse(int a1);

int SramInit();

int ComputeChecksum16(unsigned __int16 *a1, int a2);

int SaveMetadata_Save(int a1, signed int a2);

int SGM_SetCharacterKnown(signed int a1, unsigned __int16 *a2);

signed int GGM_IsAnyCharacterKnown(int *a1);

int GetGameTotalTurnCount();

int BWL_IncrementDeployCountMaybe(int a1);

signed int IsPlaythroughIdUnique(int a1);

signed int GGM_RegisterCompletedPlaythrough(int a1, int a2);

int *BWL_GetEntry(unsigned __int8 a1);

int GetLastUsedGameSaveSlot();

int ClearSaveBlock(signed int a1);

int Get6CDifferedLoop6C(int a1, signed int a2);

int Find6CDifferedLoop(int a1);

unsigned int GetChapterSurvivalRank();

int GetChapterDeathCount();

signed int GetChapterFundsRank();

signed int GetChapterCombatRank();

signed int GetChapterExpRank();

int SoundMain();

_DWORD *RealClearChain(_DWORD *result);

int ply_fine(int a1, int a2);

int MPlayJumpTableCopy(int a1);

void ldrb_r3_r2(int a1, int a2, _BYTE *a3);

void chk_adr_r2();

int ld_r3_tp_adr_i(int a1, int a2);

int ply_goto(int a1, int a2);

int ply_patt(int a1, int a2);

void ply_pend(int a1, int a2);

int ply_rept(int a1, int a2);

int ply_modt(int a1, int a2);

void ply_port(int a1, int a2);

int m4aSoundVSync();

_DWORD *MPlayMain(_DWORD *result, int a2);

int TrackStop(int a1, unsigned __int8 *a2, int a3);

unsigned int ChnVolSetAsm();

void ply_note_rev01(int a1, int a2, unsigned int a3);

signed int ply_endtie_rev01(int a1, int a2);

void clear_modM(int a1, int a2);

int ply_lfos_rev01(int a1, int a2);

void ply_mod_rev01(int a1, int a2);

u32 MidiKey2fr(int a1, unsigned __int8 a2, int a3);

int MPlayContinue(int a1);

signed int SoundStuff_80D0158(int a1, __int16 a2);

int m4aSoundInit();

int m4aSongNumStop(int a1);

void m4aSongNumStartOrContinue(u16 n);

void m4aMPlayAllStop();

void m4aMPlayAllContinue();

signed int m4aMPlayFadeOutTemporarily(int a1, __int16 a2);

int m4aMPlayFadeIn(int a1, __int16 a2);

int m4aMPlayImmInit(int a1);

int MPlayExtender(_BYTE *a1);

int SoundInit(_DWORD *a1);

int m4aSoundVSyncOff();

int m4aSoundVSyncOn();

int MPlayOpen(int a1, _BYTE *a2, unsigned __int8 a3);

int MPlayStart(int a1, unsigned __int8 *a2);

int m4aMPlayStop(int a1, int a2, int a3);

int FadeOutBody(int a1);

int TrkVolPitSet(int a1, char *a2);

int MidiKeyToCgbFreq(char a1, unsigned __int8 a2, unsigned __int8 a3);

signed int CgbOscOff(signed int a1);

int m4aMPlayVolumeControl(int a1, unsigned __int16 a2, int a3);

int WriteSramFast(_BYTE *a1, _BYTE *a2, int a3);

int VerifySramFast_Core(unsigned __int8 *a1, unsigned __int8 *a2, int a3);

int WriteAndVerifySramFast(_BYTE *a1, _BYTE *a2, int a3, int a4);

int llsl_thumb(int result, int a2, int a3);

int gcc2_compiled__28(int a1, int a2, int a3);

void *memcpy(void *dest, const void *src, unsigned int count);

_DWORD *strcpy(_DWORD *a1, int *a2);

_WORD *BgTileMap_FillRect(int result, int a2, int a3, int a4);

_WORD *BgTileMap_CopyRect(int result, int a2, int a3, int a4);

int SortPlayerUnitsForPrepScreen();

int FillAiDangerMap();

int Loop6CUI2(int a1);

bool AiFindClosestTileInRangeWithListedTerrain(_BYTE *a1, char a2, _WORD *a3);

signed int CanUnitUseVisit();

signed int GetTriggeredTrapType(int a1);

int SomethingPrepListRelated(_DWORD *a1, int a2, char a3);

int loadMagfcastBG(int AIS, unsigned int index);

signed int DialogueMain_UpdateDisplay(signed int a1);

int TryAddTrapsToTargetList();

int InBattleMainRoutine();

int StartBattleAnimResireHitEffects(int a1, int a2);

int ReorderPlayerUnitsBasedOnDeployment();

int ApplyTrapMapChanges();

int HandleTrapDecay();

int PrepareArenaStruct(int a1);

int DrawUnitScreenSupportList();

int SMS_80266F0(int a1, int a2);

signed int CanUnitSupportCommandWith(int a1, int a2);

int ekrBattle_8050600(int a1);

int ekrBattleStarting_8055F00(int a1);

int Loop6CUI1_DisplayTransition(int a1);

/* ARGS (int faceId, int portraitId, int x, int y, int idk)*/
int StartFace(int fadeId, int portraitId, int x, int y, int dispType);

int GetWRankBarData(signed int a1, _DWORD *a2, signed int *a3);

int MineFireTrap_8037540(int a1);

int UpdateNumberOfAlliedUnitsWithin8Tiles(char *a1);

int AtMenu_AutoDeployPrepScreenUnits(unsigned __int8 *a1);

int BWL_AddFavoritismValue(int a1, int a2);

signed int GetUnitRangeMask(int a1, int a2);

int MapAddInRange(int a1, int a2, int a3, char a4);

int ForEachUnitInRange();

int EfxWeaponIcon_OnLoop(_DWORD *a1);

signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1);

signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1);

int DrawHammerneUnitInfoWindow(int a1);

signed int AiBattleGetDamageDealtWeight();

signed int AiBattleGetDamageTakenWeight();

int ekrBattle_8050000(int a1);

int EkrBattle_BattleQuoteInit(int a1);

int SoundClear();

int PrintDebugStringAsOBJ(int a1, int a2, _BYTE *a3);

int HideAllUnits();

int PopupProc_WaitForPress(int a1);

int NewMoveUnitForUnitBeingRescued(_DWORD *a1);

int HandleNewItemGetFromDrop(int a1, __int16 a2, signed int a3);

int TryAddUnitToHammerneTargetList(char *a1);

int TradeMenu_RefreshItemText(int a1);

bool AiGetLootingParameters(_WORD *a1, int a2);

int AiUpdateAllUnitHealAi();

int ekrBattle_8050684(int a1);

int EkrWindowAppear_Loop(int a1);

int Loop6C_efxSoundSE(int a1);

int StartEkrPegasusKnightBG(int a1, int a2, int a3, int a4);

int BWL_IncrementMoveValue(int a1);

int BWL_IncrementStatScreenViews(int a1);

int BWL_AddTilesMoved(int a1, int a2);

int BWL_AddExpGained(int a1, int a2);

int CopyNoCompData(int a1, int a2);

int CanUnitUseStaff(int a1, int a2);

int DrawTextAndIconForItem(int a1, int a2, _WORD *a3);

signed int RescueUsability();

signed int DropUsability();

int TryAddRescuedUnitToTakeTargetList(int a1);

int ClearUnitSupports(int a1);

int MakeSnagBattleTarget();

int BKSEL_Draw(int a1);

signed int CpPerform_LootWait(signed int a1);

int AiScriptCmd_12_MoveTowardsEnemy(_BYTE *a1);

int AiScriptCmd_13(_BYTE *a1);

int ComputeAiAttackWeight(int a1);

int StartEfxAvoid(int a1);

int ekrBattleStarting_8055FA0(int a1);

int StartSubSpell_efxElfireBG(int a1);

int Loop6CUI1_Hidden(_BYTE *a1);

int FadeOut_Loop(int a1);

int BgTileMap_ApplyTSA(int a1, int a2, int a3);

signed int AiTryDoDanceAdjacent(int a1, int a2);

int ForEveryProc();

void ForEach6CMarked(int userVal, int (*func)(int));

int ForProcFamily(int a1);

int HiObjProcess(int a1);

bool ShouldMoveCameraPosSomething(int a1, int a2);

int ApplyUnitMovement(int a1);

int InitMapChangeGraphics();

signed int StaffItemSelect_Usability(int a1, int a2);

int TryAddUnitToHealTargetList(int a1);

int TryAddUnitToBarrierTargetList(int a1);

int TradeMenu_InitTextHandles();

int UnlockGameGraphicsLogic();

int ShrinkConvoyItemList();

int LoadArenaWeapons();

int BATTLE_ProbablyMakesTheDeadUnitDissapear(int a1);

int AiMasterDecisionMaker();

int AiScriptCmd_08_DoStandardActionAgainstClass(_BYTE *a1);

int SioMenu_8047CF0(int a1);

int Menu_CallDefinedConstructors(int a1);

int GameLoop_Battle();

int ekrBattle_8050A84(int a1);

int EfxWeaponIcon_OnEnd(int a1);

int StartEfxThunderBG(int a1);

int StartSubSpell_efxFireHITBG(int a1);

int loadFimbulvetrBGTR(int a1);

int DrawStatScreenBar(int a1, int a2, int a3, int a4, signed int a5, int a6);

int GetUnitsTotalHeldGoldValue();

signed int ProcInst14_WhileRoutine(int a1);

signed int ProcInst08_BlockUntilRunning(int a1);

int LoadIconObjectGraphics(int a1, __int16 a2);

int StartHiObjProc(signed int a1, __int16 a2, int a3, int a4, int a5, __int16 a6);

int DialoguePauseTimer_OnLoop(int a1);

int AP_SetDefinition(_DWORD *a1);

signed int EventB3_();

int PopupProc_PlaySound(int a1);

int Timer_Countdown(int a1);

int FutureCall2_Loop(int a1);

signed int MapMain_UpdateTraps(signed int a1);

int InitUnitSupports(int a1);

signed int IsPositionMagicSealed(int a1, int a2);

int MapFillMovement(int a1, int a2, char a3, int a4);

int PlayerPhase_BackToMove(unsigned __int16 **a1);

signed int MaybeRunPostActionEvents();

int DisplayMoveRangeGraphics(__int16 a1);

int PlayerPhase_HandleAutoEnd(unsigned __int16 **a1);

int DisplayUnitStandingAttackRange();

signed int ItemCommandEffect(int a1, int a2);

int MakeTradeTargetList(int a1);

signed int TradeMenu_802DAFC(int a1);

signed int CpPerform_StealWait(int a1);

int AiScriptCmd_19_MoveTowardsTerrain(_BYTE *a1);

int AiScriptCmd_1A_MoveTowardsTerrain(_BYTE *a1);

int ekrBattle_8050304(int a1);

int ekrBattle_CheckForLevelup_8050C34(int a1);

int ekrBattleStarting_8056024(int a1);

int StartEkrNamewinAppear(int a1, __int16 a2, __int16 a3);

void loadBaseAppear(int a1, __int16 a2);

void loadFireOBJ(void *AIS);

int StartSubSpell_efxElfireOBJ(int a1);

bool IsThereClosedDoorAt(char a1, char a2);

int MaybeCallEndEvent();

signed int EvCheck0E_(_DWORD *a1);

int NewChapterStatusScreen(signed int a1);

int GetGlobalCompletionCount();

bool GetLastSuspendSaveId();

signed int GetChapterTacticsRank();

int m4aSoundMode(int a1);

int ReadSramFast_Core(_BYTE *a1, _BYTE *a2, int a3);

int GetUnitUseFlags(int a1);

signed int AiGetUnitReachWeightWithEquippedWeapon(int a1, int a2, int a3);

int EkrTriangle_OnLoop(int a1);

int SetupDebugFontForBG(int a1, signed int a2);

int MoveHiObjProc(int *a1, int a2, int a3);

/* Arguments: r0 = Popup Definition ptr, (r1, r2) = Text Struct Copy*/
int GenSomeLongPopupText(unsigned __int8 *a1, int a2, int a3);

int FutureCall_Loop(_DWORD *a1);

int OnVBlankMain();

int OnGameLoopMain();

signed int EnsureCameraOntoPosition(signed int a1, int a2, int a3);

int UpdateGameTileGfx(int a1, int a2, int a3, int a4, int a5);

int Destruct6CBMXFADE(int a1);

bool BMXFADEExists();

int ForceMenuItemPanel(signed int a1, _DWORD *a2, char a3, char a4);

int FillBallistaRangeMaybe(int a1);

int SomethingSMS_16x16(int a1, unsigned int a2);

int GetUnitTotalSupportLevels(int a1);

int TradeMenu_802DAAC(_BYTE *a1);

int ExecFortify(signed int a1);

int LoadPlayerUnitsFromUnitStack();

int GetNearLevel(int a1);

int KillUnitIfNoHealth(int a1);

bool CanActiveUnitUseRescue();

bool CanActiveUnitUseTrade();

int NewUnitInfoWindow_WithAllLines(signed int a1);

int MineFireTrap_DoSomeBWLStuffWhenKill(int a1);

int CpPhase_Init(signed int a1);

int BskPhase_Init(signed int a1);

int CpOrder_BuildUnitList(signed int a1);

int CpPerform_UpdateMapMusic();

int CpPerform_BeginUnitMovement(int a1);

signed int CpPerform_TalkWait();

int CpPerform_WaitAction(int a1);

bool GetLesserWeightedAdjacentPosition(int a1, int a2, int a3, _WORD *a4);

int SetupAiDangerMap();

int SioCon_8042E2C(int a1);

int SioPlaySomeIndexedSfx(int a1);

int NameSelect_8044FFC(int a1);

int NameSelect_8045068(int a1);

/* Arguments: r0 = Move Manual Pointer (will be copied)*/
int SetMoveUnitMoveManual_Unique();

int Menu_GetCursorGfxCurrentPosition(int a1, _DWORD *a2, _DWORD *a3);

int StartTargetSelection(int a1);

int StartEkrBattle();

int ekrBattle_8050134(int a1);

int ekrBattle_WaitForTriangleAttackAnim(int a1);

int ekrBattle_WaitForClassChange(int a1);

int ekrBattle_WaitForLevelup_8050C6C(int a1);

int ekrBattle_WaitForPopup(int a1);

int ekrBattle_8050DA8(int a1);

int StartEfxStatusCHG(int a1);

int EndEfxWeaponIcon();

int MainUpdate_8055C68();

int ekrBattleStarting_8056078(int a1);

int StartEkrWindowAppear(int a1, __int16 a2);

int PlayBattleCroudSfxIfArena();

int RunBattleForecastTutorialEvent(int a1);

void loadFimbulvetrOBJ2Fall(void *AIS, char a2);

int DeleteAnimsOnPopup();

int BattlePopup_Wait16Frames(int a1);

int ekrPopup_MarkEnd(int a1);

int DrawUnitWeaponRank(int a1, int a2, int a3, int a4);

int Loop26CPI(int a1);

int Loop46CPI(int a1);

int AtMenu_LockGame();

int NullifyBattleDamageIfUsingStone(int a1);

int UpdateNextSuspendSaveId();

int savemenu_SetDifficultyChoice(char a1, char a2);

int AP_RegisterGraphics(_DWORD *a1, int a2, int a3);

int GetConvoyTotalGoldValue();

signed int UnitHasItem(int a1, int a2);

signed int IsAnyEnemyUnitAlive();

int ProcInterpretCode(int a1);

int CanUnitUseWeapon(_DWORD *a1, int a2);

int ForEachPosInRange();

signed int CheckSomethingSaveRelated();

int GetDeadUnitAmount();

unsigned int _modsi3(unsigned int result, unsigned int a2);

int strlen(_DWORD *a1);

int GetUnitEquippedItem(_DWORD *a1);

signed int GetUnitEquippedItemSlot(_DWORD *a1);

int RefreshTrapFogVision();

signed int GetSupportDataIdForOtherUnit(int a1, unsigned __int8 a2);

int BattleLoadDefense(int a1, int a2);

unsigned int _umodsi3(unsigned int result, unsigned int a2);

int DeleteEach6CDifferedLoop();

int _divsi3(unsigned int a1, unsigned int a2);

int EndEachProcMarked(int a1);

int GetIconTileIndex(int a1);

int MakeTargetListForDoorAndBridges(int a1, int a2);

bool CanUseChestKey(int a1);

int BattleLoadAS(int a1);

int BattleApplySRankBonuses(int a1);

bool AiTryDoStealAdjacent(int a1, int a2);

void loadFimbulvetrBG(void *AIS);

void loadResireBG(int a1, u8 ifMiss);

int GetGameTotalTurnCount2();

int SampleFreqSet(int a1);

int CopyTileGfxForObj(const void *src, void *dst, unsigned int tileLen, unsigned int height);

signed int ProcInst0F_Mark(int a1);

int StoreNumberStringToSmallBuffer(int a1);

int DrawSpecialUiDecNumber(_WORD *a1, int a2, int a3, int a4);

int HiObjProc_Loop(int a1);

int StartDialogueParentless(int a1, int a2, const char *a3);

int Dialogue_SetDefaultTextColor(char a1);

int SetNextChapterId(char a1);

int Popup_CreateExt(int a1, int a2, char a3, __int16 a4, char a5, signed int a6);

int RegisterObjectTileGraphics(int a1, int a2, int a3, int a4);

int GetSomethingInPaletteBB_2A();

int StartPaletteAnimator_(int a1, __int16 a2, int a3, __int16 a4, signed int a5);

int GetItemRange(unsigned __int8 a1);

int GetItemEffectivenessPtr(unsigned __int8 a1);

int UnitRescue(int a1, int a2);

int GetUnitSkill(_DWORD *a1);

int GetUnitSpeed(_DWORD *a1);

signed int GenericStaffSelection_OnSelect(int a1, int a2);

TrapStruct *AddTrapExt(char a1, char a2, char a3, char a4, char a5, char a6, char a7);

char *GetChapterMapPointer(int a1);

int GetChapterEventDataPointer(int a1);

char *CpPhase_Cleanup();

int AiScriptCmd_1B_NoOp(_BYTE *a1);

_DWORD *ekrBattle_8050158(_DWORD *result);

int ekrBattle_80505EC(int result);

signed int PauseEfxWeaponIcon();

signed int SpellFx_Begin();

SpecialAnimationEffectInfo *getSpecialAnimationEffectInfo(AnimationInterpreter *AIS);

void setSpecialAnimationEffectInfoState(AnimationInterpreter *AIS, __int16 state);

__int16 *GetSpellAssocStructPtr(unsigned __int16 a1);

bool IsThereClosedChestAt(char a1, char a2);

int CheckEventId(int a1);

int UpdateLastUsedGameSaveSlot(char a1);

bool SaveMetadata_VerifyChecksum(int a1);

unsigned int GetChapterSurvivalRank();

int SoundMainBTM(_DWORD *a1);

int ply_tempo(int a1, int a2);

int ply_voice(int a1, int a2);

void ply_xwave(int a1, int a2);

int div(unsigned int a1, unsigned int a2);

_BYTE *memset(_BYTE *a1, char a2, unsigned int a3);

_DWORD *ClearOAMBuffer(_DWORD *result, unsigned int a2);

int ComputeChecksum32(unsigned __int16 *a1, int a2);

int GetChapterAllyUnitCount();

TrapStruct *AddTrap(char a1, char a2, char a3, char a4);

int Text_DrawGlyphManual(int a1, int a2, int a3);

int GetPartyTotalGoldValue();

int ClearMapWith(int a1, unsigned __int8 a2);

int SomethingSMS_16x16_0(int a1, unsigned int a2);

int SomethingSMS_16x32(int a1, unsigned int a2);

int SomethingSMS_32x32(int a1, unsigned int a2);

int InitBattleUnitFromUnit(_BYTE *a1, _DWORD *a2);

int BattleLoadCrit(int a1);

int TryRemoveUnitFromBallista(int a1);

int SMS_SyncDirect();

int ARM_PushToHiOAM(int result, unsigned __int16 a2, _WORD *a3, __int16 a4);

void ARM_PushToLoOAM();

signed int GetPositionRangeWeight(int a1, int a2);

signed int GetEffectiveTileMovCost(int a1, int a2);

_WORD *ARM_FillRect(_WORD *result, int a2, int a3, __int16 a4);

int ProcInst00_End(int a1);

signed int ProcInst02_CallRoutine(int a1);

int ProcInst16_CallRoutine2(int a1);

signed int ProcInst05_AddChild(signed int a1);

int ProcInst06_AddBlockingChild(signed int a1);

signed int ProcInst07_BuggedAddGlobal(int a1);

signed int ProcInst09_EndAllOf(int a1);

signed int ProcInst0A_BreakLoopForAll(int a1);

signed int ProcInst0C_GotoLabel(int a1);

/* Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len*/
int PrintDebugNumberDec(int a1, int a2, int a3, int a4);

/* Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len*/
int PrintDebugNumberHex(int a1, int a2, int a3, int a4);

int FACE_Load(int a1);

int StartDialogueFromIndex(int a1, int a2, int a3);

int NewGameControl();

int Event20_();

int PopupIconUpdaterLoop(int a1);

int ItemGot_DisplayLePopup(int a1);

int ItemGot_GotLeItem(int a1);

int StartFadeInBlack(__int16 a1);

int StartFadeOutBlack(__int16 a1);

int StartBlockingFadeInBlack(__int16 a1, signed int a2);

int StartBlockingFadeOutBlack(__int16 a1, signed int a2);

int StartBlockingFadeInWhite(__int16 a1, signed int a2);

int StartBlockingFadeOutWhite(__int16 a1, signed int a2);

int StartBlockingFadeInBlackSlow(signed int a1);

TextStruct *SomeDrawTextCentered(_WORD *a1, char a2, int a3, unsigned __int8 *a4);

int StartPaletteAnimator(int a1, __int16 a2, int a3, __int16 a4, signed int a5);

int SetupFutureCall(int a1, int a2, int a3);

int MapMain_StartPlayerPhaseAndApplyAction(signed int a1);

int UpdatePlayMapMusic();

ROMItemEntry *GetItemData(int a1);

int UnitGive(int a1, int a2);

int GetUnitLastItem(int a1);

signed int DebugMenu_ErasedEffect();

int PlayerPhase_CancelAction(unsigned __int16 **a1);

int PlayerPhase_DisplayUnitMovement();

int Make6CKOIDOAMM(_DWORD *a1, int a2);

int MenuCommand_DrawExtraItem(int a1, int a2);

signed int SendToConvoyMenu_NormalEffect(int a1, int a2);

int EndMenuItemPanel();

int StartUnitSwapAnimation(signed int a1, int a2, __int16 a3, __int16 a4);

int MineFireEffectGfx_Setup(int a1);

int NewMineTrapEffectGfx(signed int a1, int a2, int a3);

int BgMoverProc_Update();

int BeginLightRuneMapAnim(signed int a1, __int16 a2, __int16 a3);

int BeginMineMapAnim(signed int a1, int a2, int a3);

signed int MapMenuCommand_UnitEffect();

signed int MapMenuCommand_DangerZoneUnusedEffect();

signed int GenericSelection_BackToUM();

signed int GenericSelection_BackToUM_CamWait();

signed int RescueEffect();

signed int DropEffect();

signed int DropSelection_OnSelect(int a1, char *a2);

signed int TakeEffect();

signed int GiveEffect();

int MakeUnitRescueTransferGraphics(int a1, int a2);

signed int ItemSelectMenu_Effect(int a1, int a2);

int FillBallistaRange();

signed int StaffItemSelect_Effect(int a1, int a2);

int StaffItemSelect_OnHover(int a1, int a2);

int RescueSelection_OnChange(int a1, char *a2);

signed int RideCommandEffect();

int ForEachPosIn12Range(int a1, int a2);

int ForEachUnitInMagBy2Range();

int MakeRescueTargetList(int a1);

int MakeDropTargetList(int a1);

int MakeTakeTargetList(int a1);

int MakeTargetListForUnlock(int a1);

int WarpTargetPosSelect_Confirm(signed int a1);

int WarpTargetPosSelect_Cancel();

int WarpTargetPosSelect_Destruct(int a1);

signed int WarpTargetSelection_OnSelect(int a1, int a2);

int HammerneTargetSelection_OnChange(int a1, char *a2);

int GenericSelection_DeleteBBAndBG(int a1);

int BATTLE_SyncMapFromBattle();

int UpdateActiveUnitFromBattle();

int FinishUp10ExpBattle(signed int a1);

int TradeMenu_InitGraphics(int a1);

int TradeMenu_802DB48();

int AddGasTrap(char a1, char a2, char a3, char a4, char a5);

int AddArrowTrap(char a1, char a2, char a3);

int AddMapChange(char a1);

int ExecStandardHeal(signed int a1);

int ExecRescueStaff(signed int a1);

int ExecWarpStaff(signed int a1);

int ExecUnlock(signed int a1);

int ExecHammerne(signed int a1);

int ExecSomeSelfHeal(signed int a1, int a2);

int ExecItemMine(signed int a1);

int ExecTorchStaff(signed int a1);

int ResetGameState();

int StartMapMain(int a1);

int ActionRescue(signed int a1);

int ActionVisitAndSieze();

int ActionArena(signed int a1);

int ActionDance(signed int a1);

int ActionTalk();

int SpriteJumpAnimation_Cleanup();

int BATTLE_HandleUnitDeaths(signed int a1);

int GetUnitCommandUseFlags();

int NewUnitInfoWindow(signed int a1);

int SetupUnitRescueWindow(int a1);

int ExecTrapForActionTarget(signed int a1);

int ExecTrap_QuietMaybe(signed int a1, int a2);

TrapStruct *AddBallista(char a1, char a2, int a3);

int CpOrder_Main(int a1);

signed int CpPerform_StaffWait(signed int a1);

signed int CpPerform_ChestWait(signed int a1);

signed int CpPerform_ExitBallistaWait();

int AiScriptCmd_01_FunctionCall(_BYTE *a1);

bool IsUnitEnemyOrInTheAiInstList(int a1);

int AiScriptCmd_16(_BYTE *a1);

int InitAiRangeMoveMapForUnitWithDoorsPassable(int a1);

int SioCon_8042E0C();

int NameSelect_8044FE4(int a1);

int NameSelect_804503C(int a1);

int StartNameSelect(signed int a1);

int EndEkrBattleDeamon();

int EkrBattleDeamon_OnEnd();

int NewEkrLvlupFan();

int EkrGauge_80511F8();

int StartEfxDeadPika(int a1, int a2);

int EndEfxHPBarColorChange();

int ResumeEfxWeaponIcon();

int ekrBattleEnding_8056228(_WORD *a1);

int ekrBattleEnding_8056484(int a1);

int EkrChienCHR_OnLoop(int a1);

int StartEkrAnimeDrvProc();

int EndEkrAnimeDrvProc();

int StartEkrUnitMainMini(int a1);

int EkrUnitMainMini_OnLoop(int a1);

int NewEkrTogiEndPROC();

int NewEkrTogiColor();

int EndEkrTogiColor();

int StartSpellAnimDummy(int a1);

int spellShooter(int a1);

int Loop6C_efxIvaldiBG3(int a1);

int Loop6C_efxIvaldiBG1(int a1);

int EfxThunderBGCOL_Main(int a1);

int Loop6C_efxFireBG(int a1);

int Loop6C_efxIvaldiBG2(int a1);

int loadFimbulvetrOBJ2(int a1);

int StartSpellAnimPurge(int a1);

void loadHazymoonOBJ3(void *AIS);

int Loop6C_efxNaglfarBG2(int a1);

int Loop6C_efxFireBG(int a1);

int StartSpellAnimIvaldi(int a1);

int NewEkrClassChg(int a1);

int StartEkrTriangle(int a1);

void FireDragonBGAnimation10(_6CStruct *ctx);

int MU_AllForceSetMaxMoveSpeed();

signed int EvCheck0F_(_DWORD *a1);

int EndBG3Slider();

int Init6CUI2(int a1);

int MinimalVBlankHandler();

int StartUnitListMenu();

int StoreConvoyWeaponIconGraphics(int a1, int a2);

void initPassword(int a1, int a2);

int SaveGeneralGameMetadataNoChecksum(int a1);

int SaveLocalEventIndexes(int a1);

int SaveGlobalEventIndexes(int a1);

int LoadLocalEventIds(int a1);

int LoadPermanentEids(int a1);

int LoadBWLEntries(int a1);

int LoadChapterDataWinArray(int a1);

int SaveBWLEntries(int a1);

int SaveChapterWinData(int a1);

int SaveBonusContentClaimFlags(int a1);

int LoadBonusContentClaimFlags(int a1);

int CopyGameSave(int a1, int a2);

int LoadSavedBonusClaimFlags(int a1);

int SaveTrapStructs(int a1);

int Make6C_savemenu2(signed int a1);

int StartSaveDraw(signed int a1);

int CallDifferedLoop(int a1);

int StartSmallBrownNameBoxes(int objNode, int tileOffset, int palIndex, int oam2base, int oam0base, void *parent);

int EndSmallBrownNameBoxes();

int FadeInOut_Init(int a1);

int Make6C_opinfo(char a1, signed int a2);

int EndWM();

void m4aMPlayContinue(MusicPlayerArea *ma);

int ply_memacc(int a1, int a2);

int fstat(int a1, int a2);

bool UnitSwapAnimationExists();

signed int DanceCommandUsability(int a1);

int TryAddClosedDoorToTargetList(int a1, int a2);

int TryAddBridgeToTargetList(int a1, int a2);

int AllocProcState();

int FreeProcState(int result);

int GotoProcInstruction(int result, int a2);

int ResetIconGraphics();

int GetIconGfxTileIndex(int a1);

IconInfoStruct *ClearIcon(int a1);

int ClearSmallStringBuffer();

int Font_InitDefault();

signed int Font_ResetAllocation();

__int16 (*Get2bppTo4bppLookup(int a1))[256];

int (*Font_SetDraw1DTileNoClear())(int a1, int a2);

int Text_Init2DLine(int result);

int Text_DrawSpecialUiChar(int a1, int a2, int a3);

int DrawUiNumber(_WORD *a1, int a2, int a3);

int DrawUiSmallNumber(_WORD *a1, int a2, int a3);

int DisplayAIS(int a1);

int HiObjInsertSafe(__int16 rootNode, int x, int y, const void *objdata, __int16 oam2base);

int HiObjInsert(int nodeId, int x, int y, const void *data, int oam2base);

int *GetPortraitData(int a1);

int EndFaceById(int a1);

int SetFaceDisplayBitsById(int a1, int a2);

int GetFaceDisplayBitsById(int a1);

int SetFaceBlinkControlById(int a1, int a2);

__int16 *ClearDialogueFlags();

int SetDialogueFlag(int a1);

int Dialogue_SetActiveFacePosition(int result);

int GetTextPauseDurationFromControlCode(int a1);

int SetNextGameActionId(char a1);

int Popup_Create(int a1, int a2, int a3, int a4);

int SetSomethingInPaletteBB_2A(__int16 a1);

int SetSomethingInPaletteBB_5A(__int16 a1);

int SetSomethingInPaletteBB_8A(__int16 a1);

int LockGameLogic();

int UnlockGameLogic();

int SetCursorMapPosition(int a1, __int16 a2);

int GetItemIndex(int result);

int GetItemDescStringIndex(unsigned __int8 a1);

int GetItemUseDescTextIndex(unsigned __int8 a1);

int GetItemAttributes(unsigned __int8 a1);

int GetItemMight(unsigned __int8 a1);

int GetItemHit(unsigned __int8 a1);

int GetItemWeight(unsigned __int8 a1);

int GetItemCrit(unsigned __int8 a1);

int GetItemWRank(unsigned __int8 a1);

int GetItemStatBonuses(unsigned __int8 a1);

int GetItemWeaponEffect(unsigned __int8 a1);

int GetItemUseEffect(unsigned __int8 a1);

int GetItemCostPerUse(unsigned __int8 a1);

int GetItemWExp(unsigned __int8 a1);

_BYTE *SetUnitStatus(int a1, char a2, char a3);

int GetUnit(unsigned __int8 a1);

int GetTerrainHealAmount(int a1);

int GetTerrainSomething(int a1);

int MapRangeFillMovementFromPosition(int a1, int a2, int a3);

int MapMovementFillMovementFromPosition(int a1, int a2, int a3);

unsigned int CanUnitsStillSupportThisChapter(int a1, char a2);

int SimulateBattleBallista(int a1);

_WORD *LoadRawDefense(int a1);

_WORD *BattleLoadDodge(int a1);

BattleUnitStruct *GetBattleUnitPointers(_DWORD *a1, _DWORD *a2);

signed int GetBattleHitCount();

int UpdateBattleStats(int a1, int a2);

int NullSomeStuff();

int FillSnagBattleStats();

TrapStruct *GetTrap(int a1);

signed int InitUnitStack(int a1);

char *MoveCursor_SetLastCursorPosition(char a1, char a2);

int ClearAiDecision();

int AiSetDecision(int xPos, int yPos, int actionId, int targetId, int itemSlot, int xPos2, int yPos2);

int AiUpdateDecision(int actionId, int targetIndex, int itemSlot, int xPos2, int yPos2);

int AiExecFallbackAi1();

int AiExecFallbackAi2();

int AiGetPositionTerrainSafetyWeight(int a1, int a2);

unsigned int CheckGameLinkArenaBit();

int *InitTargets(__int16 a1, __int16 a2);

int AddTarget(char a1, char a2, char a3, char a4);

int TargetSelection_GetRealCursorPosition(int a1, _DWORD *a2, int *a3);

char *GetTarget(int a1);

int EkrGauge_8051180();

signed int EkrGauge_8051190();

signed int EkrGauge_80511A0();

signed int EkrGauge_80511B0();

int EkrGauge_80511C0(int a1);

__int16 EkrGauge_80511D0(__int16 result, __int16 a2);

signed int EkrGauge_80511E4(__int16 a1, __int16 a2);

int EkrGauge_8051208();

int EkrGauge_8051218();

int EkrGauge_8051228();

__int16 EkrDispUP_8051B48(__int16 result, __int16 a2);

int SpellFx_Finish();

int StartBattleAnimHitEffectsDefault(int a1, int a2);

int getSpecialAnimationEffectInfoState(AnimationInterpreter *AIS);

int callSpecialAnimationEffectTypeGetter(AnimationInterpreter *AIS);

int Unset20200AC();

signed int Set20200AC();

int GetSpellAssocCharCount(unsigned __int16 a1);

int GetSpellAssocMapAnimProcScript(unsigned __int16 a1);

int GetSpellAssocFacing(unsigned __int16 a1);

int SortUnitList_GetUnitSoloAnimation(int a1);

int GetPrepScreenUnitListEntry(int a1);

int *SetPrepScreenUnitListEntry(int a1, int a2);

int GetPrepScreenUnitListSize();

int SetPrepScreenUnitListSize(int result);

int IsSramWorking();

void *GetSaveDataOffsetPointer(int offset);

void *GetSaveSourceAddress(int saveBlockId);

int *GetChapterWinDataEntry(int a1);

int GetNextSuspendSaveId();

int m4a_1(unsigned int a1, unsigned int a2);

void ld_r3_tp_adr_i_rev(int a1, int a2);

int m4aSoundMain();

int m4aSongNumStart(int a1);

int m4aMPlayFadeOut(int a1, __int16 a2);

void SoftReset(void *a1);

signed int ProcInst04_SetOnEnd(int a1);

signed int ProcInst0D_GotoPointer(int a1);

int Event82_EndWM();

signed int StartupDebugMenu_ReleaseEntryEffect();

signed int DebugMenu_GNightEffect();

signed int MapMenuCommnd_StatusEffect();

int HammerneTargetSelection_OnInit();

int TradeMenu_802D820(int a1);

int GameVBlankProc_Destructor();

int SpriteJumpAnimation_ExecAnyTrap(int a1);

int BATTLE_HandleActiveUnitDeath(signed int a1);

int BKSEL_Destructor();

int FireTrap_StartGfx(signed int a1);

int MineTrap_StartGfx(signed int a1);

signed int CpPerform_RideBallistaWait();

int CpOrder_End(int a1);

int ekrBattle_MakePopups(int a1);

int ExecAllAIS();

int MU_ManualUpdate();

signed int EvCheck06_VILL(int *a1);

_DWORD *ARM_ClearOAMBuffer(_DWORD *result, unsigned int a2);

int ARM_ComputeChecksum32(unsigned __int16 *a1, int a2);

int AddUnitToTargetListIfAllied(char *a1);

int TryAddUnitToRescueStaffTargetList(char *a1);

int TryAddUnitToWarpTargetList(char *a1);

int ekrBattle_8050224(int a1);

int ekrBattle_8050D88(int a1);

int BattlePopup_Wait16Frames(int a1);

void ArrowOBJ(_6CStruct *ctx);

int EfxThunderOBJ_Main(int a1);

int ekrBattleStarting_8055FE8(int a1);

int ekrPopup_DrawWRankUp(int a1);

int ekrPopup_DrawWRankUp2(int a1);

void FireDragonBGAnimation2(_6CStruct *ctx);

bool MU_Exists();

int PlaySoundIdA0();

bool DoesTCSWrapperExist();

bool DoesBMXFADEExist();

int PlaySoundIdA0();

bool DoesMoveUnitExist();

signed int StaffCommandUsability();

char *String_ExpandNames();

int CpPerform_MoveCameraOntoTarget(signed int a1);

int EndEachProc(int a1);

int BreakEachProcLoop(int a1);

int ClearIcons();

int LoadIconPalettes(int a1);

int LoadIconPalette(int a1, int a2);

int Text_InitClear(int a1, __int16 a2);

int Text_InitDB(int a1, __int16 a2);

int Text_Clear(int a1);

int Text_Advance(int result, char a2);

int GetStringTextCenteredPos(int a1, unsigned __int8 *a2);

int Font_LoadForUI();

int Font_LoadForDialogue();

int Text_InsertString(int a1, char a2, char a3, unsigned __int8 *a4);

int Text_InsertNumberOr2Dashes(int a1, char a2, char a3, int a4);

int Font_InitForObj(int a1, int a2, char a3);

int Text_Fill2DLine(int a1, int a2);

int EndGreenTextColorManager();

int EndFace(int a1);

int Dialogue_InitFont();

int EndDialogue();

int NewTextBluArrowAndButtonChecker(signed int a1, __int16 a2, __int16 a3);

int NewDialogueBoxAppearingAnimator();

_DWORD *AP_Load(_DWORD *result, unsigned __int16 *a2);

int AP_ExecOneFrame(int a1);

int AP_Init(_DWORD *a1, unsigned __int16 *a2, __int16 a3);

_DWORD *APProc_Create(int a1, int a2, int a3, __int16 a4, int a5);

int APProc_Delete(int a1);

int *GetGameControl();

int RestartGameAndGoto8();

int RestartGameAndGoto12();

int NewPopup_WeaponBroke(__int16 a1, int a2);

int NewPopup_WRankIncrease(__int16 a1, int a2);

int StartBlockingTimer(signed int a1, int a2);

int SetupFutureCall2(int a1, int a2);

int LoadObjUIGfx();

int LoadGameCoreGfx();

int GetWRankText(signed int a1);

char *GetItemNameString(unsigned __int8 a1);

unsigned int GetItemMinRange(unsigned __int8 a1);

int ClearUnit(int a1);

int CopyUnit(void *src, void *dest);

int SetupActiveUnit(_BYTE *a1);

int SetActiveUnit(_BYTE *a1);

int GetUnitMaxHP(_DWORD *a1);

int GetUnitPower(_DWORD *a1);

int GetUnitDefense(_DWORD *a1);

unsigned int GetUnitResistance(_DWORD *a1);

int GetUnitLuck(_DWORD *a1);

int RemoveUnitItem(int a1, int a2);

int LoadChapterMap(unsigned __int8 *a1, int a2);

int GetSomeTerrainToChangeAtSomePosition(int a1, int a2);

int FillMovementMapForUnit(int a1);

int MapMovementFillMovementFromUnit(int a1);

int MapFillMovementFromUnitAt(int a1, int a2, int a3, int a4);

int HideMoveRangeGraphics();

int Make6CKOIDO(_DWORD *a1, int a2, char a3, signed int a4);

int ChangeActiveUnitFacing(int a1, int a2);

int StartGasTrapEffectGfxMaybe(signed int a1, int a2, int a3, __int16 a4);

int NewFireTrapEffectGfx(signed int a1, int a2, int a3);

int StartLightArrowTrapGfx(signed int a1, int a2);

int ForEachAdjacentUnit(int a1, int a2);

int ForEachAdjacentPosition(int a1, int a2);

int MakeTargetListForWeapon(int a1, unsigned __int8 a2);

int MakeTargetListForSteal(int a1);

int MakeTargetListForRangedHeal(int a1);

int MakeTargetListForBarrier(int a1);

int MakeTargetListForWarp(int a1);

int MakeTargetListForHammerne(int a1);

int CanUseDoorKey(int a1);

int CanOpenBridge(int a1);

int EndItemEffectSelectionThing();

int PrepareTargetSelectionForRescueStaff(int a1);

int SetupTargetSelectionForGenericStaff(int a1, int a2, int a3);

int PrepareTargetSelectionForRestoreStaff(int a1);

int PrepareTargetSelectionForOffensiveStaff(int a1);

int CopyUnitToBattleStructRawStats(_BYTE *a1, _DWORD *a2);

int SetupBattleBallistaWeaponData(int a1);

int FillPreBattleStats(int a1, int a2);

int FillBattleStats(int a1, int a2);

int SetupTargetBattleUnitForStaff(_DWORD *a1);

int AddToTargetListFromPos(int a1, int a2, int a3);

int SetupGameVBlankProc_TileAnimations(int a1);

int StartGameVBlankProc();

int EndGameVBlankProc();

int SetupWeather(int a1);

int GetTextSpeed();

int LoadGameCoreGfx2();

int ReloadGameCoreGraphics();

int EndBMAPMAIN();

int SetTacticianName(int a1);

int ClearConvoyItems();

int PushUnit(_BYTE *a1);

int PrepareArena(int a1);

int PrepareArena2(int a1);

int StoreRNStateToActionStruct();

int LoadRNStateFromActionStruct();

int MoveCursor_FillMovementMapForEndPoint();

int MoveCursor_RecomputePath();

int EndBottomHelpText();

int DrawUnitNameForBattleForecast(_WORD *a1, unsigned __int8 *a2, unsigned __int16 **a3);

int RideBallista(int a1);

int StartAiTargetCursor(int a1, int a2, int a3, signed int a4);

int AiRefreshMap();

int AiFillUnitStandingRangeWithWeapon(int a1, unsigned __int8 a2);

unsigned int AiGetTileWeightForAttack(int a1, int a2, int a3);

int GetUnitAttackAndWeapon(_DWORD *a1, _WORD *a2);

int InitAiMoveMapForUnit(int a1);

int AiMapRangeFillMovementWithPassableWalls(int a1, int a2, int a3);

int ClearBG0BG1();

int LoadNewUIGraphics();

int StartMenuChild(_DWORD *a1, int a2);

int StartMenu(_DWORD *a1);

int EndAllMenus();

int MenuCallHelpBox(int a1, int a2);

char *GetLinkedTargetList();

int StartEkrBattleDeamon();

int EndEkrGauge();

int StartEkrDispUP();

int StartEfxDeadEVTENT(int a1, int a2);

int StartEfxDead(int a1, int a2);

int StartEfxFlashBG(int a1, __int16 a2);

int StartEfxHPBarColorChange(int a1);

int SpellFx_ClearBG1Position();

int SpellFx_ClearBG1();

int SpellFx_RegisterObjGfx(int a1, int a2);

int SpellFx_RegisterObjPal(int a1, int a2);

int SpellFx_RegisterBgGfx(int a1, int a2);

int SpellFx_RegisterBgPal(int a1, int a2);

int StartEkrBattleStarting();

int StartEkrChienCHR(int a1);

int GetOpponentFrontAIS(int a1);

int GetAISNextBattleAnimRoundType(int a1);

int GetAISCurrentRoundType(int a1);

int BeginAnimsOnBattle_Arena();

int NewEkrTogiInitPROC();

_6CStruct *loadResireRST5(int a1, int a2, int a3, int a4, int a5);

void loadRestWINH1(int a1, int a2, unsigned int a3);

void loadALPHA(int a1, __int16 a2, __int16 a3, int a4, int a5, int a6);

int StartSpellThing_MagicQuake(int a1, __int16 a2, int a3);

void loadArrowOBJ(void *AIS);

int StartEfxThunderBGCOL(int a1);

int StartEfxThunderOBJ(int a1);

void loadFireBG(void *AIS);

int StartSubSpell_efxElfireBGCOL(int a1);

void loadFimbulvetrOBJ(void *targetAIS);

void loadResireRST3(int a1, _6CStruct *a2, __int16 a3);

void loadHazymoonBG3(void *AIS);

int StartEfxDamagaMojiEffect(int a1, char a2);

int StartEfxChillEffect(int a1);

int GetOtherRN_N(int a1);

int StartEkrsubAnimeEmulator(__int16 a1, __int16 a2, int a3, char a4, int a5, int a6, signed int a7);

void PlaySFX(int SFXID, int a2, int a3, int a4);

int EndEkrClasschg();

int EndEkrLevelUp();

int StartEkrPegasusKnight(int a1, int a2, int a3, int a4, int a5);

int BeginAnimsOnBattle_Hensei();

int NewEkrHenseiInitPROC();

int StartHelpTextBubble(int a1, signed int a2);

int Delete6CMenuScroll();

int Make6CMenuScroll(signed int a1);

int SaveGeneralGameMetadata(unsigned __int16 *a1);

int SaveBonusContentData(unsigned __int16 *a1);

int StoreSomeUnitSetFlags(unsigned __int8 a1);

int SaveMetadata_CheckId(int saveBlockId);

void LoadSavedChapterState(int saveBlockId, void *out);

int LoadSuspendedChapterState(int a1, void *a2);

int ComputeSaveChecksum(int a1, int a2);

int SaveMetadata_ComputeChecksum(int a1);

/* 调色板渐变*/
void loadGradientPalette(void *palette1, void *palette2, int a3, int paletteSlot, int a5, _6CStruct *parent);

int SetBonusContentClaimed(int a1);

int ClearChain(int a1);

int Clear64byte(int a1);

_BYTE *MarkProc(int a1, char a2);

int SetPopupNumber(int result);

int gcc2_compiled__6();

signed int GetGlobalEventIdStorageSize();

void SVC_Sqrt();

signed int GetCameraMovementSpeedMaybe();

int SetProcEndHandler(int result, int a2);

bool MapEventEngineExists();

signed int GetLocalEventIdStorageSize();

int BreakProcLoop(int result);

void nullsub_83();

int Text_GetXCursor(int a1);

int Text_SetXCursor(int result, char a2);

int Text_SetColorId(int result, char a2);

int Text_GetColorId(int a1);

int Text_SetParameters(int result, char a2, char a3);

int GetFaceDisplayBits(int a1);

int GetLastDialoguePromptResult();

__int16 SetPopupItem(__int16 result);

int GetNoCompDataSize(_DWORD *a1);

__int16 *GetPaletteFadeBuffer();

int GetGameLogicLock();

void nullsub_84();

int SetSubjectMap(int result);

char *GetCurrentMovCostTable();

void nullsub_11();

void nullsub_12();

char *GetTacticianNameString();

__int16 *GetConvoyItemArray();

int ShouldAiNotBattle();

int GetTargetListSize();

int gcc2_compiled__5();

int SetBattleAnimArenaFlag(int result);

int GetBattleAnimArenaFlag();

int Get20200AC();

void nullsub_18();

char *GetGlobalEventIdStorage();

char *GetLocalEventIdStorage();

int GetSomeUnitId();

int gcc2_compiled__17();

int GetBonusContentClaimFlags();

int SetBonusContentClaimFlags(int result);

int nullsub_88(int a1, int a2, int a3, int (*a4)(int));

int nullsub_89(int a1, int a2, int a3, int (*a4)(int, int, int));

void BgAffineSet();

void CpuFastSet();

void CpuSet();

void Div();

int Mod(int a1, int a2);

void LZ77UnCompVram();

void LZ77UnCompWram();

void SVC_Multiboot();

void ObjAffineSet();

void VBlankIntrWait();

int BXR1(int a1, int (*a2)(int));

int BXR2(int a1, int a2, int a3);

int BXR3(int a1, int a2, int a3, int (*a4)(int));

int BXR4(void);

int BXR5(int a1);

int BXR6(int a1);

int BXR7(int a1);

int BXR9(int a1, int a2);

int BXR10();

void nullsub_1();

int SetupOAMSpliceForWeather(int a1);

signed int ProcInst01_SetName(int a1);

int ProcInst03_SetOnCycle(int a1);

signed int ProcInst0B_Nop(int a1);

signed int ProcInst13_Nop2(int a1);

signed int ProcInst15_Nop3(int a1);

char *GameControl_GetChapterIdToProc(int a1);

int GameControl_GetChapterIdFromProc(int a1);

int StartFadeInBlackMedium();

int StartFadeInBlackSlow();

int StartFadeInBlackFast();

int StartFadeOutBlackMedium();

int StartFadeOutBlackFast();

signed int EffectWait();

int ResetMapSpriteHoverTimer();

_BYTE *AiScriptCmd_06_DoNothing(_BYTE *result);

_BYTE *AiScriptCmd_0E_DoNothing(_BYTE *result);

_BYTE *AiScriptCmd_14_DoNothing(_BYTE *result);

_BYTE *AiScriptCmd_15_DoNothing(_BYTE *result);

int ekrBattle_80503EC(int result);

int ply_prio(int a1, int a2);

int ply_keysh(int a1, int a2);

int ply_vol(int a1, int a2);

int ply_pan(int a1, int a2);

int ply_bend(int a1, int a2);

int ply_bendr(int a1, int a2);

int ply_lfodl(int a1, int a2);

int ply_tune(int a1, int a2);

int ply_xtype(int a1, int a2);

int ply_xatta(int a1, int a2);

int ply_xdeca(int a1, int a2);

int ply_xsust(int a1, int a2);

int ply_xrele(int a1, int a2);

_BYTE *ply_xiecv(int a1, int a2);

int ply_xswee(int a1, int a2);

int ply_xcmd_0C(int a1, int a2);

int ply_xcmd_0D(int a1, int a2);

int SendToConvoyMenu_Draw();

signed int RescueSelection_OnSelect(int a1, int a2);

signed int TakeSelection_OnSelect(int a1, int a2);

signed int GiveSelection_OnSelect(int a1, int a2);

int StaffItemSelect_TextDraw(int a1, int a2);

int TradeTargetSelection_OnInit(int a1);

int StealTargetSelection_OnInit(int a1);

int RescueSelection_OnConstruction(int a1);

int MakeTargetListForRescueStaff(int a1);

int MakeTargetListForBerserk(int a1);

int MakeTargetListForDanceRing(int a1);

int BATTLE_DeleteLinkedMOVEUNIT(int a1);

int AiScriptCmd_09_DoStaffAction(_BYTE *a1);

int AiScriptCmd_0A_DoStaffAction(_BYTE *a1);

int AiScriptCmd_0B_DoStaffAction(_BYTE *a1);

int MenuCallHelp(int a1);

int StartSpellAnimArrow(int a1);

int spellTeyari1(int a1);

int spellTeyari3(AnimationInterpreter *a1);

int StartSpellAnimHandAxe(int a1);

int StartSpellAnimHeal(int a1);

int StartSpellAnimMend(int a1);

int StartSpellAnimSleep(int a1);

int StartSpellAnimHammerne(int a1);

int StartSpellAnimBerserk(int a1);

int spellThunderstorm(AnimationInterpreter *a1);

int StartSpellAnimLuna(int a1);

int spellSilence(AnimationInterpreter *a1);

int spellRingThor(AnimationInterpreter *a1);

int spellRingNini(AnimationInterpreter *a1);

int spellRingSet(AnimationInterpreter *a1);

int StartSpellAnimAura(int a1);

int spellShine(AnimationInterpreter *a1);

int StartSpellAnimEvilEye(int a1);

int StartSpellAnimNaglfar(int a1);

int StartSpellAnimFireBreath(int a1);

int StartSpellAnimDarkBreath(int a1);

int spellIcebreath(AnimationInterpreter *a1);

int spellThunder(int a1);

int StartSpellAnimCrimsonEye(int a1);

void loadFireDragonBattleAnimationBG(AnimationInterpreter *AIS);

void FireDragonBGAnimation15(_6CStruct *ctx);

_BYTE *MU_CritFlash_Init(int a1);

_BYTE *MU_ForceSetMaxMoveSpeed(int a1);

int MU_AllForceSetMaxMoveSpeed_();

int InitFontForUIDefault();

int MapAnimLevelUpProc_ClearLevelUpSmallText();

int NewBG0Shaker();

void UnitKakudai3(_6CStruct *a1);

_WORD *BG0Shaker_Init(int a1);

int StartGameOver(signed int a1);

void setSpecialAnimationEffectInfoState4(AnimationInterpreter *AIS);

int GmapUnit_Destruct(int a1);

int GmapScreen2_Destruct(int a1);

int NewMapMU(signed int a1);

int StartPromotionMenuSelect(signed int a1);

int CgbModVol(unsigned __int8 *a1);

int NewFace2(int a1, int a2, __int16 a3, int a4, int a5);

bool AiFindUnitSafestTileToMoveTo(int a1, _WORD *a2);

int SioVSync_8041C1C();

int RefreshUnitMapAndVision();

int PrintPassword(int a1, int a2);

int ProcessSupportGains();

signed int CanActiveUnitMove();

int AiTryDoStaff(int a1);

int EfxFire_Main(int a1);

int AutolevelUnitWeaponRanks(_DWORD *a1, int a2);

int BskOrder_Init(signed int a1);

int DivineSfxLoop(int a1);

int GetRescueStaffeePosition(int a1, int a2, int *a3, int *a4);

signed int CanUnitWieldWeapon(_DWORD *a1, int a2);

int MakeTargetListForLatona(int a1);

int GenBlueUnitAiStats();

int GetUnitAiPriority(int a1);

char *AiUnitGetClosestEscapePointData();

int DrawTileGraphics();

int StartScreenMenuScrollingBg(signed int a1, int a2, signed int a3);

int MakeTargetListForSupport(int a1);

int GetUnitArenaWeight(_DWORD *a1, int a2);

signed int AiGetActiveUniChestKeyItemSlot(_BYTE *a1);

void loadHazymoonOBJ2(void *AIS);

int DisplayAIS(int a1);

int EfxThunder_Main(int a1);

int WriteFadedPaletteFromArchive(int a1, int a2, int a3, int a4);

int GetUnitDropLocation(int a1, int *a2, int *a3);

int MakeAiUnitQueue();

signed int AiUnitTryHealSelf();

int CpDecide_Main(int a1);

int AiDecisionMaker_AiScript2();

int NameSelect_8045108(int a1);

int SomeBattlePlaySound_8071990(int a1, int a2);

int ProcessUnitMovement(_DWORD *a1, int a2, int a3);

int MakePoisonDamageTargetList(int a1);

int GetPhaseAbleUnitCount(int a1);

int DialogueSkipInputListener_OnLoop(int a1);

int AiTargetCursor_Main(int a1);

int ExecTrap(signed int a1, int a2, __int16 a3);

void shooter(_6CStruct *ctx);

int BeginBattleAnimations();

int ekrBattle_8050940(int a1);

int DrawBonusItemMenuEntry(signed int a1);

int ClaimBonusItemMenu_MainLoop(int a1);

int ekrBattle_StartUIPaletteAnimations(int a1);

signed int RideCommandUsability();

signed int AiSimulateBattle(unsigned __int8 *a1);

signed int AP_Exec(int a1);

void *GetArenaBetterItem(unsigned __int16 a1);

signed int AdvanceAIS(int a1);

int PrintStringToDBG(_BYTE *a1);

int PopupProc_Display(int a1);

int BATTLE_GOTO1_IfNobodyIsDead(unsigned __int16 **a1);

int BeginLinkArenaBattle();

int StartMenu_AndDoSomethingCommands(_DWORD *a1, signed int a2, int a3, int a4);

int DebugMenu_FogIdle(int a1, int a2);

signed int LoadBonusContentData(unsigned __int16 *a1);

int Text_AppendCharAscii(int a1, unsigned __int8 *a2);

int TryAddUnitToRestoreTargetList(int a1);

int AiScriptCmd_07_DoStandardActionNoMove(_BYTE *a1);

int NameSelect_8044C54(int a1, int a2);

int GetUnitSupportBonuses(char *a1, _BYTE *a2);

int DialogueMain_OnLoop(int a1);

int Menu_HandleSelectInputs(int a1);

int TradeMenu_802D918(_BYTE *a1);

int HandleCursorMovement(int a1);

int LoadMapSpritePalettes();

int UpdateHandCursor(int a1, int a2);

signed int TakeUsability();

signed int GiveUsability();

int LoadArenaOpponentStruct();

int UpdateMenuItemPanel(signed int a1);

int StartEfxStatusUnit(int a1);

signed int AiUnitUpdateGetHealMode(int a1);

int StartTradeMenu(int a1, int a2);

int EndProc_Private(int a1);

signed int GetChapterWinPerc();

int StartEfxHpBarLive(int a1);

int DrawGlyph2DTile(int a1, int a2);

int StartEkrGauge();

int ComputeChapterRankings();

int DisplayActiveUnitEffectRange();

int ShrinkPlayerUnitList();

int loadBaseKaiten(int a1);

int GetSomeBallistaItemAt(int a1, int a2);

int Menu_HandleDirectionInputs(_BYTE *a1);

int TorchTargetPosSelect_Init(signed int a1);

int ActionDrop(signed int a1);

int LoadNewUIPal(signed int a1);

int LoadNewUIPal(signed int a1);

int Load6CRangeDisplaySquareGfx(int a1);

signed int GetConvoyItemSlot(int a1);

int HandleMapSpriteCursorHover();

int HideUnitSMS(int a1);

int SioMenu_8048168(int a1);

int AiScriptCmd_00_ConditionalGoto(_BYTE *a1);

int PlayerPhase_RangeDisplayIdle(unsigned __int16 **a1);

int Menu_TextBoxIdle(int a1);

int Menu_804F5B4(int a1);

int StartEfxHpBarResire(int a1);

int EndTargetSelection(int a1);

int InitMinimugBoxMaybe(int a1, unsigned __int16 **a2);

int TryAddUnitToDanceRingTargetList(char *a1);

int TradeMenu_802D980(unsigned __int8 *a1);

signed int LoadGeneralGameMetadata(int *a1);

int SwitchAISFrameDataFromBARoundType(int a1, int a2);

int Dialogue_InitGfx(__int16 a1, int a2, unsigned __int8 a3);

int RegisterChapterTimeAndTurnCount(int a1);

signed int AiScriptCompare(unsigned __int8 *a1, char a2, unsigned int a3);

int ExecProc_Private(int a1);

int ekrBattle_80509A8(int a1);

char *GetItemWRankLevelString(unsigned __int8 a1);

int GetWonChapterCount();

int Text_AppendDecNumber(int a1, int a2);

signed int GetBattleUnitStaffExp(int a1);

signed int GetUnitSelectionValueThing(int a1);

int AiDecisionMaker_HealEscape();

int HandleItemExpGain();

int Text_AppendStringAscii(int a1, unsigned __int8 *a2);

int PlayerPhase_ApplyUnitMovement(int a1);

int UpdateBallistaUsesFromBattle();

int AiFillMovementMapForUnit(int a1);

signed int ArenaCommandEffect(int a1, int a2);

int StartProc(int a1, signed int a2);

int TradeMenu_802D834(signed int a1);

int UpdateAllLightRunes();

void modifyPassword(int (*a1)(void));

int AiScriptCmd_0C_MoveTowardsSetPoint(_BYTE *a1);

int GetGameTotalTime();

int MoveCursor_AppendFromMoveBuffer();

int AiScriptCmd_03_Goto(_BYTE *a1);

int FinishUpItemBattle(signed int a1);

int DrawStatScreen(int a1);

signed int EnsureCameraOntoActiveUnitPosition(signed int a1);

void Teono(_6CStruct *ctx);

int ClaimBonusItemMenu_Init(signed int a1);

int RefreshTrapHiddenStates();

int PlayerPhase_DisplayDangerZone();

signed int GGM_IsCharacterKnown(signed int a1, int *a2);

int FillRangeMapForDangerZone(unsigned __int8 a1);

int AP_QueueRotScaleData(_DWORD *a1);

signed int AttackBallistaCommandUsability();

void Arrow(_6CStruct *ctx);

int CheckForLevelUpCaps(int a1, char *a2);

int DebugMenu_ClearIdle(int a1, int a2);

signed int GetUnitItemSlot(int a1, int a2);

int AP_SwitchAnimation(int a1, int a2);

int IsolateProc(_DWORD *a1);

int Loop6C_efxDarkbreath(int a1);

int DrawSpecialUiChar(_WORD *a1, int a2, int a3);

int Menu_HelpBoxIdle(_BYTE *a1);

int GetBallistaItemAt(int a1, int a2);

int ekrBattle_Init(int a1);

int TargetSelection_HandleMoveInput(int a1);

int GameControl_HandleSelectRightL(unsigned __int16 **a1);

/* 返回用那个动画ID的调色板*/
signed int getAnimationIDForPaletteGroup(int animationID, int RightOrLeft);

int CpPerform_PerformEscape(int a1);

int StartBlockingProc(int a1, signed int a2);

int Text_AppendNumberOr2Dashes(int a1, int a2);

bool TryPrepareEventUnitMovement(int a1, int a2, int a3);

signed int GetSomeFacingDirection(int a1, int a2, int a3, int a4);

int BKSEL_Display(int a1);

signed int BATTLE_HandleItemDrop(unsigned int a1);

int StartEfxHitQuake(int a1, int a2, int a3);

bool MapMain_SwitchPhases();

int ChangeUnitAllegiance(void *a1, int a2);

signed int GetWRankLevel(signed int a1);

int EnsureNoUnitStatCapOverflow(int a1);

int AiBattleGetAlliesAroundWeight();

int ApplyFaceDisplayBitChange(int a1);

int EndPrepScreen();

void Hazymoon(_6CStruct *ctx);

int AiDecisionMaker_SpecialItems();

int Decompress(_BYTE *a1, int a2);

int BattleSomethingTrapChangeTerrain();

int NullAllLightRunesTerrain();

int CpPerform_MoveCameraOntoUnit(signed int a1);

int Loop6C_GENS(int a1);

int GetUnitSupportingUnit(int a1, int a2);

int DrawLotsaText(int a1);

int DestructMoveLimitView(int a1);

int NewGotItemPopup(int a1, __int16 a2, int a3);

int SpriteJumpAnimation_Loop(signed __int16 *a1);

int Loop6C_MoveLimitView(int a1);

int TargetSelection_Loop(int a1);

int LoadNewUIImage(int a1);

int ekrDispUP_Loop(int a1);

int UnitDrop(int a1, char a2, char a3);

int WarpTargetPosSelect_Loop(int a1);

int ActiveBattleUnitAdd10Exp();

int FillMapStaffRangeForUnit(int a1);

int Loop6C_efxIvaldiBG3(int a1);

bool CouldUnitUseAnyWeapon(int a1);

void MoveCursor_CutPath(int index);

int AiBattleGetWeight_803E068();

int ekrBattleEnding_8056288(int a1);

int CreateItemStealingPopup(__int16 a1, int a2);

int EfxResire_Main(int a1);

int BattleComputeBuffStatus(int a1);

signed int GetNewPlaythroughId();

int SetupSubjectBattleUnitForStaff(_DWORD *a1, int a2);

int Loop6C_efxDummymagic(int a1);

int NewEkrLevelup(int a1);

void Fimbulvetr(_6CStruct *ctx);

int SioMain_8041DC4();

int ItemSelectMenu_TextDraw(int a1, int a2);

int DrawItemMenuCommand(struct TextStruct *text, __int16 item, int grayed, __int16 *bgOut);

int InitChapterMap(int a1);

signed int IsUnitInCurrentRoster(_DWORD *a1);

int HandlePlayerCursorMovement();

int AiAreEnemiesWithin3Tiles(__int16 a1, __int16 a2);

int *GetUnitMovCostTable(int a1);

int Loop6C_efxMagicQUAKE(int a1);

int IncreaseUnitStatsByLevelCount(int a1, int a2, int a3);

int ResumeEachProcMarked(int a1);

int MoveBattleCameraOnto(int a1, unsigned __int16 a2);

int LoadDialogueBoxGfx(int a1, int a2);

int EkrBattle_BattleQuoteWait(int a1);

int Text_Draw(unsigned __int8 *a1, _WORD *a2);

int GetPlayerStartCursorPosition(_DWORD *a1, _DWORD *a2);

signed int CanUnitWieldStaff(int a1, int a2);

int ExecStatBooster(int a1);

signed int GetAllegienceId(signed int a1);

int ekrBattle_StartMainAnimations(int a1);

int TryAddUnitToSilenceTargetList(char *a1);

int TryAddUnitToSleepTargetList(char *a1);

int TryAddUnitToBerzerkTargetList(char *a1);

int StartEfxFlashHPBar(int a1, unsigned __int16 a2, __int16 a3);

signed int UnitAddItem(int a1, __int16 a2);

int DebugMapMenu_DisplayInfoIdle(int a1, int a2);

int CountDownTraps();

signed int FindFreeFaceSlot();

AP *AP_Alloc(int a1);

int GetUnitItemCount(int a1);

int PrepareTargetSelectionForMineAndLightRune(int a1, int a2, int a3);

int Menu_Idle(int a1);

signed int MakeBattleRound(int a1, int a2);

int SetupWarpTargetSelection(int a1);

int StartBattleAnimHitEffects(int a1, int a2, int a3, int a4);

int SetupHammerneUseSelection(int a1);

int DialogueTextChoice_OnLoop(int a1);

signed int IsTerrainIdInList(_BYTE *a1, int a2);

int MakeItem(unsigned __int8 a1);

int GetStringTextWidthAscii(unsigned __int8 *a1);

int TorchTargetSelection_Loop(unsigned __int16 **a1);

bool AiIsUnitAtPositionDifferentAllegiance(int a1, int a2);

int BattleApplyWeaponTriangle(int a1, unsigned __int8 *a2);

bool CanUnitNotUseMagic(char *a1);

signed int StartMenuExt(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned __int16 a5, __int16 a6, signed int a7);

int DBG_BG_Print(_WORD *a1, _BYTE *a2);

int BattleApplyMiscBonuses(char *a1);

int Loop6CUI1_Displayed(int a1);

signed int IsWeaponMagic(signed int result);

int HaltEachProcMarked(int a1);

int SetFaceGfxConfig(int *a1);

int NameSelect_80451F0();

signed int EvCheck04_CHARASM(int *a1);

int CpDecide_Suspend();

int StartStatScreen(int a1, signed int a2);

int SioMenu_8047D88(int a1);

int SioMenu_8047B34(int a1);

int GGM_GetCompletionCount(int a1);

int NewTorchStaffSelection();

int GetConvoyItemCount();

bool MapEventEngineExists();

int FadeIn_Loop(int a1);

signed int ShouldPortraitBeSmol(int a1);

int ExecSelfDamage(_DWORD *a1, int a2);

unsigned __int8 *String_GetEnd(unsigned __int8 *result);

signed int EvCheck0A_SHOP(char *a1);

bool IsBallista(int a1);

int SaveGame(int a1);

signed int checkIfCritical(void *AIS);

int *FindProc(int a1);

signed int EvCheck05_LOCA(int *a1);

int LoadGame(int a1);

signed int GetSupportLevelBySupportIndex(int a1, int a2);

bool AiArePointsWithinDistance(int a1, __int16 a2, int a3, int a4, unsigned __int8 a5);

signed int GetStringTextWidthWithDialogueCodes(unsigned __int8 *a1, unsigned __int8 a2);

int BWL_GetTotalBattles();

signed int StaffCommandEffect(int a1, int a2);

int DrawGlyph1DTileNoClear(int a1, int a2);

signed int GetSpellAnimationStartFrame();

int UpdateBattleTriangleAttackData(int a1, int a2);

int GetUnitMiniPortraitId(_DWORD *a1);

signed int StealCommandEffect(int a1, int a2);

int Setup6CRangeDisplayGfx();

int EndMenu(int a1);

signed int GetOverallRank(int a1, int a2, int a3, int a4, int a5);

int GetNextChapterWinDataEntryIndex();

int GetItemAfterUse(int a1);

int DeleteAIS(int a1);

bool IsItemCoveringRange(unsigned __int8 a1, int a2);

int GetItemHealthBonus(int a1);

int GetItemPowerBonus(int a1);

int GetItemSkillBonus(int a1);

int GetItemSpeedBonus(int a1);

int GetItemDefenseBonus(int a1);

int GetItemResistanceBonus(int a1);

int GetItemLuckBonus(int a1);

int ClearAISs();

signed int IsItemStealable(int a1);

int Text_DrawBlank(int a1, _WORD *a2);

signed int IsBatteRoundTypeAMiss(__int16 a1);

int Loop36CPI(_BYTE *a1);

int DebugChargeMenu_Idle(int a1, int a2);

int NameSelect_8044768(int a1);

bool BattleEventEngineExists();

int CallCursorShop(int a1);

signed int EventC6_(int a1);

int ekrBattleEnding_8056390(signed __int16 *a1);

int LoadSuspendedGame(int a1);

int EventC5_(int a1);

/* 左侧AIS初始化
x控制近接还是远程*/
void InitLeftAIS(int x);

/* 右侧AIS初始化
x控制近接还是远程*/
void InitRightAIS(int x);

int Loop6C_WaitForSelectPress(int a1);

bool AiIsUnitScriptCharAndEnemyWithActiveUnit(char *a1);

bool AiIsUnitScriptClassAndEnemyWithActiveUnit(int a1);

int GetBallistaItemUses(int a1);

int Loop6C_KOIDO(int a1);

int ClearUnitInventory(int a1);

int StartEndEfxSpellCast();

int BattleReverseWTriangeEffect(int a1, int a2);

int SaveClearedBWLAndChapterWinData(int a1);

int GetCurrentChapterBallistae2Ptr();

char *GetSupportBonusEntryPtr(char *result);

int AiGetBestItemSlotIndexToSteal(int a1);

int Roll2RNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2);

int SetupBackgroundForWeatherMaybe();

int AP_Delete(_DWORD *a1);

int MoveCursor_GetPointIndexForPosition(int x, int y);

signed int ComputeExpFromBattle(int a1, _DWORD *a2);

int SetUnitNewStatus(int a1, int a2);

int ekrBattleStarting_8055DF4(signed __int16 *a1);

int GetClassStandingMapSpriteId(int a1);

signed int AiSomethingCheckPick(int a1, _DWORD *a2, _WORD *a3);

int InitClearChapterState(int a1, char a2);

signed int AdjustArenaOpponentPower();

void GenerateMovementInstructionsToPoint(int x, int y, char *output);

int BWL_GetTotalWins();

char *String_ExpandTactName();

int StartAnimsOnPopups();

bool CanUnitNotLevelUp(int a1);

int DisplayUnitAdditionalBlinkingIcons();

signed int AiTryDoSpecialItems();

signed int EventC7_(int a1);

signed int EventC8_(int a1);

int FlushDBGToBG2();

int RollRNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2);

unsigned __int16 **CheckEventDefinition(unsigned __int16 **a1);

int LoadChapterTitleGfx(int a1, unsigned int a2);

signed int GetItemIconId(int a1);

int BattleUnit_DidWeaponBreak(int a1);

int ShowUnitSMS(int a1);

int Font_SetGlyphSet(int a1);

signed int GetUnitStartingSupportValue(int a1, int a2);

int SioMenu_8047C60(int a1);

int SetFont(int a1);

const void *GetClassData(int classIndex);

int OnSerialCommunication();

signed int GetBattleNewWExp(int a1);

void BattleAnimationAISInit(int xl, int xr);

int BWL_GetTotalExpGained();

int GetStringTextWidth(unsigned __int8 *a1);

int GetUnitLeader(int a1);

bool CheckLocalEventId(int a1);

int ClearLocalEvents();

signed int GetUnitMapSpritePaletteIndex(signed int result);

int Sound_FadeSongOut(int a1);

int Text_AppendString(int a1, unsigned __int8 *a2);

int SALLYCURSOR6C_StartUnitSwap(signed int a1);

int MU_FogBumpFx_DisplayLoop(int a1);

int AiTryDoOffensiveAction(int a1);

int ClearGlobalTriggerState();

int MU_FogBumpFx_TransitionInLoop(int a1);

int SMS_DisplayAllFromInfoStructs();

int Sound_FadeOut_800237C(int a1);

signed int AiGetClosestUnitPosition(int a1, _WORD *a2);

/* sleepTimer--,减到0则跳出睡眠循环*/
int SleepCallback6C(_6CStruct *_6C);

void MakeTerrainHealTargetList(int phase);

signed int FindClosestBestPosition(int a1, int a2, int a3, signed __int16 *a4);

signed int BattleCheckDoubling(int a1, _DWORD *a2);

int NextRN_N(int a1);

__int16 *GetBgControlBuffer(__int16 *result);

int EventC4_(int a1);

int MarkSomethingInMenu();

int BG0Shaker_Loop(int a1);

int CheckForLevelUp(int a1);

int MapAnim_Cleanup();

int MU_StepSound_OnSecondSound(int a1);

int NewGoldGotPopup(int a1, int a2, int a3);

bool InitBonusContentClaimList();

int MapAnimLevelUp_DrawActorStat(int a1, int a2, int a3, int a4, char a5);

int Sound_SongVolumeTransitionAProc_Loop(int a1);

int String_CopyTo(_BYTE *a1, _BYTE *a2);

int RemoveTrap(int result);

bool MU_IsFogBumpFxActive();

int LoadUnitStats(int a1, _BYTE *a2);

int GetUnitEffectiveLevel(int a1);

signed int GetItemWType(int a1);

int StartEfxHpBar(int a1);

char **GetChapterDefinition(int a1);

int Dialogue_SetCharacterDisplayDelay(char a1);

int *GetCharacterData(int a1);

signed int AreAllegiancesEqual(char a1, char a2);

int AddPartyGoldAmount(int a1);

int Sound_FadeOut_80023E0(int a1);

signed int Roll2RN(int a1);

int SetupBattleWeaponData(_DWORD *a1, signed int a2);

int MU_SetFacing(int a1, int a2);

int ComputeHit(int a1, int a2);

int StartEfxChillAnime(int a1, int a2);

int MU_State_WaitForFogBump(int a1);

int GetUnitStandingSpriteDataFlagThing(int a1);

int EventB8_(int a1);

int Menu_UpdateMovingCursorGfxPosition(int a1, int a2, _DWORD *a3);

int MapMain_UpdateUnitStatus();

int EventCC_(int a1);

signed int AiTryDoSteal();

int MakeBattlePopupTileMapFromTSA(_WORD *a1, unsigned __int16 a2);

signed int CanUnitUseItemPrepScreen(int a1, int a2);

signed int GetUnitStaffRangeMask_0(int a1, int a2);

int BattleForecase_SetupLabelText();

int Sound_PlaySongCore(signed int a1, int a2);

int MapAnimProc_DisplayRoundSpecialAnims(signed int a1);

int CopyToPaletteBuffer(int a1, int a2, unsigned int a3);

int IncrementGameClock();

int BattleUnit_ShouldDisplayWpnBroke(int a1);

signed int ArenaCommandUsability();

signed int CheckForTriangleAttack(int a1, int a2);

bool BattleUnit_ShouldDisplayWRankUp(int a1);

int ekrBattleEnding_8056310(int a1);

signed int TryMakeCantoUnit(unsigned __int16 **a1);

int IsItemUsable(int a1, int a2);

int StartBMXFADE(char a1);

int MakeBattle();

int MU_DeathFade_OnLoop(int a1);

bool CanUseTorch(int a1);

int Menu_DrawHoverThing(int a1, int a2, char a3);

signed int Event23_BlockGameGraphics(int a1);

int MakeTargetListForPick(int a1);

bool CanShowUnitStatScreen(int a1);

int MapAnimProc_PrepareNextRound(int a1);

int IsCharacterForceDeployed(unsigned __int16 a1);

int SetBgPosition(signed int a1, __int16 a2, __int16 a3);

int RunCharacterEvents(int a1, char a2);

int MapAnimExpBar_FillLoop(int a1);

int UpdateKeyStatus(int a1);

signed int GetFaceBlinkProcUnk8006470(int a1);

int GetBgLocalTileIndex(unsigned __int16 a1, unsigned __int16 a2);

int StartSongVolumeTransitionB(int a1, __int16 a2, __int16 a3, int a4);

int TryAddUnitToTradeTargetList(int a1);

int GetBattleAnimRoundTypeFlags(int a1);

int MapAnimLevelUpProc_DisplayLevelUpSmallText(int a1);

int MU_PixelEffect_OnLoop(int a1);

int LoadPhaseIntroGraphics();

bool CheckForCharacterEvents(int a1, char a2);

signed int EvCheck07_CHES(int a1);

signed int AiBattleGetTileDangerWeight();

int GetUnitFogViewRange(int a1);

int AiBattleGetTargetHpWeight();

int AiBattleGetSubjectHpWeight();

int AddAsTarget_IfCanStealFrom(int a1);

int InsertMainProc(int a1, int a2);

void IceCrystal4(_6CStruct *a1);

int InsertChildProc(int a1, int a2);

int MapAnimProc_DisplayWpnBrokePopup(int a1);

int MapAnimProc_DisplayWRankUpPopup(int a1);

signed int AreAllegiancesAllied(char a1, char a2);

int NameSelect_8044ED8(int a1);

unsigned int _negsf2(int a1);

int MU_StartDeathFade(signed int a1);

int SetSramFastFunc();

void loadMagfcast(void *AIS, bool ifCritical);

unsigned int CanUseStatBooster(int a1, unsigned __int8 a2);

int LoadSavedUnit(int a1, int a2);

signed int GetBgIdFromMapBuffer(unsigned int a1);

int CallEventDefinition(int a1, unsigned __int8 a2);

int NextRN_100();

int Menu_Draw(int a1);

int ClearRounds();

int InitPrepScreenUnitsAndCamera(int a1);

int SaveSuspendedGame(int a1);

signed int GetUnitMagBy2Range(_DWORD *a1);

int ekrGauge_Loop(int a1);

signed int Roll1RN(int a1);

int AiTryMoveTowards(int xPos, int yPos, int actionId, int safetyThreshold, int idkFlag);

int SyncRegisteredTiles();

int TryAddUnitToRescueTargetList(int a1);

int SaveMetadata_Load(void *buffer, int saveBlockId);

int SaveUnit(char *a1, int a2);

bool CheckGlobalEventIdFrom(signed int a1, int a2);

int RegisterTileGraphics(int a1, int a2, int a3);

int SetAiActionMoveBest(int a1, __int16 a2, char a3, unsigned __int8 a4, char a5);

signed int SortUnitList(char a1, char a2);

signed int CanUseJunaFruit(int a1);

int PlayerPhase_MainIdle(unsigned __int16 **a1);

int MapAnim_AdvanceBattleRound();

int ComputeSpecialWeapons(int a1, int a2);

void UnitKakudai2(_6CStruct *ctx);

int AP_QueueTileGfx(_DWORD *a1);

int BattleAIS_ExecCommands();

unsigned int NextRN();

int PopulateUnitFromDefinition(int a1, unsigned __int8 *a2);

signed int SpellFx_InterpretBgAnimScript(unsigned __int16 *a1, unsigned __int16 *a2, __int16 *a3);

void loadRestWINH(int a1, int a2, __int16 a3, unsigned int a4);

int ekrBattle_8050B08(int a1);

bool EkrClasschgFinished();

bool DoesEkrLevelUpSomething();

int SetupMapBattleMUs();

bool IsBattleDeamonActive();

bool HasBattleAnimTriangeAttackEnded();

int DrawMinimugBoxMaybe(int a1, int a2);

int PackUnitStructForSuspend(_DWORD *a1, int a2);

signed int GetCurrentPromotedLevelBonus();

signed int EventC9_(int a1);

int ekrBattle_WaitForRoundAnimations(int a1);

bool GetAISLayerId(int a1);

bool GetAISSubjectId(int a1);

int SetupBattleStructFromUnitAndWeapon(void *src);

/* 职业介绍的DEMO战斗动画初始化
因为只有一个动画，所以AIS就在0x02000000*/
void DemoBattleAnimationInit(void *AIS);

int BKSEL_DrawStandard(int a1);

signed int EvCheck10_(_DWORD *a1);

int playHitSound(void *AIS);

signed int GetBattleAnimRoundType(int a1);

int MU_FogBumpFx_FirstFrame(int a1);

void FireDragonBGAnimation11(_6CStruct *ctx);

signed int GetItemUses(int a1);

signed int GetItemMaxUses(unsigned __int8 a1);

int GetUnitInfoWindowX(int a1, int a2);

int IsAiTileSafe(int x, int y, int threshold);

signed int BattleCheckBrave(int a1);

bool HasEkrNamewinAppearEnded();

bool DoesBattlePopupExist();

int Init6C_GENS(int a1);

int GetStaffAccuracy(_DWORD *a1, int a2);

int GetCurrentMapMusicIndex();

signed int EvCheck01_AFEV(int *a1);

int SyncBgs();

int AiDecisionMaker_AiScript1();

int GetUnitEffectivePowerLevel(int a1);

int SaveSnagWallFromBattle(int a1);

int CurrentRound_ComputeDamage(int a1);

int GetLocationEventCommandAt(char a1, char a2);

int MU_GetByUnit(int a1);

int SioMenu_8047FF8(int a1);

signed int MakeNextBattleHitRound(BattleUnitStruct *a1, int a2);

bool PrepareBattleGraphicsMaybe();

int SetBgMapDataOffset(int a1, int a2);

int ClearTileRegistry();

int SyncLoOAM();

int Sound_PlaySongSmoothCommon(int a1, int a2, int a3);

int Sound_PlaySoundDelayedProc_Loop(int a1);

int PlaySongDelayed(__int16 a1, __int16 a2, int a3);

/* 根据第一个成员（6CCode开始位置的指针）搜索活动中（非阻塞）的6C结构体*/
_6CStruct *Find6CRunning(struct _6CCode *startCode);

/* 根据设置的用户变量来搜索6C结构体*/
_6CStruct *Find6CByUserval(int userVal);

int ProcInst0E_Sleep(int a1);

int FACE_Display(int a1);

int AP_ClearAll();

int Delete6CIfNotMarkedB(int a1);

signed int Event9D_(int a1);

int EqueueEventEngineCall(int a1, char a2);

int HandleNextEventEngineCall();

bool EventEngine_CanSkipMaybe(int a1);

int SetDialogueSkipEvBit();

int Event04_CheckRandom(int a1);

signed int Event06_SlotOperation(int a1);

int Event09_Goto(int a1);

int Event0B_EnqueueCall(int a1);

signed int Event0C_Branch(int a1);

signed int Event10_ModifyEvBit(int a1);

signed int Event15_(int a1);

signed int Event1C_TEXTCONT(int a1);

int WhileFace6CExists(int a1);

int UNIT_GetListSize(_BYTE *a1);

bool UNIT_ShouldBeLoaded(unsigned __int8 *a1, unsigned __int8 a2);

signed int Event31_DisplayEffectRange(int a1);

signed int Event38_ChangeActiveUnit(int a1);

int Event3D_(int a1);

signed int Event45_(int a1);

int ChangeUnitAIThing(int a1, unsigned __int8 a2, int a3);

int LoadUnitWordStructs();

int MapMain_DeployEveryone();

signed int IsWeaponEffectiveAgainst(unsigned __int8 a1, int a2);

signed int IsSlayerApplied(int a1, int a2);

bool IsItemDanceRing(unsigned __int8 a1);

int GetItemCost(int a1);

int GetItemMaxCost(unsigned __int8 a1);

int GetNextFreePlayerUnit(unsigned __int8 *a1);

int LoadUnits(_BYTE *a1);

bool HasClassWRank(unsigned __int8 a1, unsigned __int8 a2);

int FixROMUnitStructPtr(int **a1);

signed int IsUnitSlotAvailable(int a1);

int GetDeployedPlayerUnitCount();

int ClearCutsceneUnits();

int ClearActiveUnit(_BYTE *a1);

signed int SupplyUsability(int a1);

int GetPartyGoldAmount();

int SetPartyGoldAmount(int a1);

int GetROMUnitSupportCount(int a1);

int GetROMUnitSupportingId(int a1, int a2);

int AddSupportPoints(int a1, int a2);

bool CanUsePureWater(int a1);

bool CanUseAntidote(int a1);

int BattleLoadAvoid(int a1);

int DoSomeBattleWeaponStuff();

TrapStruct *GetTrapAt(int a1, int a2);

TrapStruct *GetSpecificTrapAt(int a1, int a2, int a3);

int GetTrapExt1At(int a1, int a2);

signed int AreMapChangeTriggered(int a1);

int HideIfUnderRoof(int a1);

int ResetCounterForCountedDownTraps();

int StartChapter(int a1);

signed int GetPlayerLeaderUnitId();

bool CanCharacterBePrepMoved(int a1);

signed int CanUnitUseSeize();

int UnitInfoWindow_PositionUnitName(int a1);

signed int CanUnitSeize(int a1, int a2, signed int a3);

bool IsUnitNotActiveUnit(int a1);

bool AiSomethingGetPick(int a1, int a2, signed __int16 *a3, _WORD *a4);

int OnNameSelectHBlank();

int WriteUIWindowTileMap(void *bg, int x, int y, int width, int height, int tileBase, int style);

int DrawMenuItemHighlight(int a1, int a2, int a3, int a4, int a5);

int ClearMenuItemHighlight(int a1, __int16 a2, int a3, int a4, int a5);

int ClearMenuRelatedList();

int ekrBattle_WaitForFrame8(int a1);

int ekrBattle_InitMainAnimations(int a1);

int ekrBattle_80506C8(int a1);

int ekrBattle_80508F0(int a1);

int ekrBattle_8050AB8(int a1);

int ekrBattleEnding_80560F0(int a1);

int ekrBattleEnding_8056170(int a1);

int ekrBattleEnding_80561C8(int a1);

int GetBattleAnimationId(int a1, unsigned __int16 *a2, int a3, _DWORD *a4);

int Loop6C_efxIvaldi(int a1);

int Loop6C_efxNaglfar(int a1);

int GenerateMonsterItems(unsigned __int8 a1);

int MU_Init();

int MU_CreateForUI(signed int a1, __int16 a2, __int16 a3);

signed int MU_IsAnyActive();

bool MU_IsActive(int a1);

int MU_StartMoveScript(int a1, int a2);

int MU_CreateScripted(__int16 a1, __int16 a2, unsigned __int16 a3, unsigned __int8 a4, int a5);

int MU_State_WaitForTimer(int a1);

int MU_State_DuringMovement(int a1);

int MU_OnLoop(int a1);

int MU_GetComputedEndPosition(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3);

signed int MU_CanStart();

int MU_AllRestartAnimations();

int MU_DisplayAsSMS(int a1);

int MU_DisplayAsMMS(int a1);

int MU_SetMoveConfig(int a1, unsigned __int16 a2);

int MU_SetupPixelEffect(int a1, int a2);

int MU_GetByIndex(int a1);

char *CopyEventMoveToBuffer(char *result, unsigned __int8 a2);

int ClearEventMoveBuffer(char *a1);

int MuCtr_ExecREDA_807A358(int a1);

int MapAnim_CallBattleQuoteEvents();

int *MapAnim_GetRoundProcScript();

int MapAnim_MoveSubjectsTowardsTarget();

int MapAnim_MoveSubjectsAwayFromTarget();

unsigned __int16 **CheckNextEventDefinition(unsigned __int16 **a1);

int CallEndEvent();

int GetChapterEnemyUnitDefinitions();

signed int ShouldDisplayDeathQuoteForChar(unsigned __int8 a1);

signed int EvCheck02_TURN(int *a1);

signed int EvCheck03_CHAR(int *a1);

int SetLocalEventId(int a1);

int UnsetLocalEventId(int a1);

int SetGlobalEventId(signed int a1);

int UnsetGlobalEventId(signed int a1);

int SetEventId(signed int a1);

int UnsetEventId(signed int a1);

bool CheckTutorialEvent(char a1);

bool CheckBattleForecastTutorialEvent(int a1);

signed int IsCharacterForceDeployed_(unsigned __int16 a1);

int InitPlayerPhaseInterfaceMaybe();

signed int GetSaveTargetAddress(int a1);

int LoadConvoyItems(int a1);

signed int DoesThisChapterCount(unsigned int a1);

int LoadWMStuff(int a1, int a2);

int Loop6C_savemenu(_BYTE *a1);

int FadeInOut_DisableGfx(int a1);

int DeployAllBlueUnits();

signed int GetPaletteIdForAllegience(signed int a1);

int MapUnitC_SetAllegienceColorIndex(int a1, int a2, int a3);

int MapUnitC_MarkSomething(int a1, int a2);

int GmapUnitContainer_Destruct(int a1);

int GmapUnitFade_Destruct(int a1);

int GmapUnitFade_Loop(int a1);

int WMLocation_GetChapterId(int a1);

int GmapScreen2_Init(int a1);

int GMapRoute_TransitionLoop(int a1);

int GMapRoute_80BC2DC(int a1);

signed int SetupNewWMRoute(int a1, int a2, char a3);

signed int WM_RemovePath(int a1, int a2, int a3);

int PromotionInit_Loop(int a1);

bool IsThirdTraineePromotionAllowed();

int gcc2_compiled__15(int a1, int a2);

int _sbprintf(int a1, int a2, int a3);

_BYTE *cvt(int a1, int a2, int a3, int a4, char a5, char *a6, _DWORD *a7, int a8, _DWORD *a9);

int exponent(_BYTE *a1, int a2, char a3);

signed int gcc2_compiled__17(int a1);

const char *dtoa_r(int a1, int a2, unsigned int a3, int a4, signed int a5, _DWORD *a6, unsigned int *a7, int *a8);

int gcc2_compiled__19(int a1);

int _sfp(_DWORD *a1);

int gcc2_compiled__21(int result, int a2);

signed int gcc2_compiled__22(int a1, int **a2);

int gcc2_compiled__23(int a1);

int *gcc2_compiled__24(int a1, int a2, int a3);

int gcc2_compiled__25(int a1);

int *gcc2_compiled__26(int a1, int a2);

signed int gcc2_compiled__27(int a1, int *a2, _BYTE *a3, int a4);

unsigned __int8 *gcc2_compiled__28(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3);

unsigned int gcc2_compiled__29(unsigned int a1, unsigned int a2, unsigned int a3);

_DWORD *gcc2_compiled__30(int a1, int a2);

_DWORD *Bfree(_DWORD *result, _DWORD *a2);

_DWORD *s2b(int a1, int a2, signed int a3, signed int a4, int a5);

_DWORD *multiply(int a1, _DWORD *a2, _DWORD *a3);

_DWORD *pow5mult(int a1, _DWORD *a2, int a3);

_DWORD *lshift(int a1, _DWORD *a2, int a3);

int _mcmp(int a1, int a2);

int ulp(int a1);

__int64 b2d(int a1, _DWORD *a2);

_DWORD *d2b(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5);

int ratio(int a1, int a2);

int mprec_log10(signed int a1);

int gcc2_compiled__44(_DWORD *a1, int a2);

int gcc2_compiled__33(int a1, int a2, int a3);

int _swrite(int a1, int a2, int a3);

int _sseek(int a1, int a2, int a3);

signed int gcc2_compiled__35(int a1);

int remap_handle(int a1);

int initialise_monitor_handles();

int wrap(int result);

int read(int a1, int a2, int a3);

signed int swilseek(int a1, int a2, int a3);

int write(int a1, int a2, int a3);

int swiclose(int a1);

int sbrk(unsigned int a1);

int gettimeofday(int a1, _DWORD *a2);

int times();

int gcc2_compiled__36(_DWORD *a1, int a2, int a3, int a4);

int gcc2_compiled__40(_DWORD *a1, int a2, int a3);

int gcc2_compiled__42(_DWORD *a1, int a2, int a3, int a4);

int gcc2_compiled__43(_DWORD *a1, int a2, int a3, int a4);

unsigned int gcc2_compiled__47(int a1);

int _unpack_d(_DWORD *a1, int a2);

int *fpadd_parts(_DWORD *a1, int *a2, _DWORD *a3);

unsigned int _divdf3(int a1, int a2, int a3, int a4);

int _fpcmp_parts_d(_DWORD *a1, _DWORD *a2);

int _eqdf2(int a1, int a2, int a3, int a4);

int _nedf2(int a1, int a2, int a3, int a4);

int _gtdf2(int a1, int a2, int a3, int a4);

int _gedf2(int a1, int a2, int a3, int a4);

int _ltdf2(int a1, int a2, int a3, int a4);

int _ledf2(int a1, int a2, int a3, int a4);

unsigned int _floatsidf(__int64 a1);

int _fixdfsi(int a1, int a2);

unsigned int _negdf2(int a1, int a2);

int _truncdfsf2(int a1, int a2);

unsigned int gcc2_compiled__48(int *a1);

int _unpack_f(unsigned int *a1, int *a2);

int *fpadd_parts_0(int *a1, int *a2, int *a3);

unsigned int _mulsf3(int a1, int a2);

unsigned int _divsf3(int a1, int a2);

int _fpcmp_parts_f(int *a1, int *a2);

int _eqsf2(int a1, int a2);

int _nesf2(int a1, int a2);

int _gtsf2(int a1, int a2);

int _gesf2(int a1, int a2);

int _ltsf2(int a1, int a2);

int _lesf2(int a1, int a2);

unsigned int _floatsisf(unsigned int a1);

unsigned int _fixsfsi(int a1);

unsigned int gcc2_compiled__49(unsigned int result, unsigned int a2, int a3);

int gcc2_compiled__50(int a1);

int FillMapAttackRangeForUnit(int a1);

int malloc_r(int a1, int a2);

int PromotionDisplay_Init(int a1);

int ekrBattle_8050174(_DWORD *a1);

int FillWarpRangeMap(int a1, int a2);

unsigned int _muldf3(int a1, int a2, int a3, int a4);

int ChapterEndUnitCleanup();

signed int Event1D_TEXTEND(int a1);

int Loop6C_efxIvaldiOBJSideWash(int a1);

signed int MU_GetMovementSpeed(int a1);

int EventEngine_Loop(int a1);

int AiTrySomethingPick();

int ekrBattle_8050CF8(_DWORD *a1);

int FillRangeMapByRangeMask(int a1, int a2);

signed int Event17_Fade(int a1);

int vfprintf_r(int a1, int a2, int a3, int a4);

int GetClassAnimationIdForWeapon(__int16 *out, int classIndex, int weapon);

int EventEngine_Destructor(int a1);

int MapMain_UpdatePrevDeployStates();

int LoadUnitPrepScreenPositions(int a1);

int SMS_UpdateFromGameData();

int HandleCh5xUnits_End();

int DisplayDeathQuoteForChar(unsigned __int8 a1);

int RunPostActionEvents();

signed int NewMapUnit(int a1, unsigned __int16 a2, char a3);

int EventEngine_EnableSkip(int a1);

signed int Event1A_TEXTSTART(int a1);

int InitPlayerUnitPositionsForPrepScreen();

int SMS_SomethingGmapUnit(int a1, int a2, int a3);

int MU_Create(signed int a1);

int HandleCh5xUnits_Start();

int ExecStatusStaff(signed int a1);

int Event98_(int a1);

int Event2E_CheckAt(int a1);

signed int HasConvoyAccess();

int *UnitInfoWindow_DrawBase(int *a1, unsigned __int16 **a2, int a3, int a4, signed int w, int a6);

int MU_CreateInternal(__int16 a1, __int16 a2, unsigned __int16 a3, signed int a4, unsigned __int8 a5);

int BWL_AddWinOrLossIdk(int a1, unsigned __int8 a2, char a3);

int Event96_(int a1);

int ApplyBonusLevels(int a1, int a2);

int MapAnimProc_DisplayDeathFade();

signed int Event89_(int a1);

signed int Event99_(int a1);

int AiScriptCmd_18(_BYTE *a1);

int GM_SetupChapterStuff(int a1);

int GetCharacterClassId(int a1);

__int16 *GetBattleQuoteEntry(unsigned __int16 a1, unsigned __int16 a2);

int NewGeneralItemGot(int a1, int a2, unsigned int a3);

signed int PickCommandUsability();

int GM_Start();

int WMLoc_GetNextLocId(int a1);

int GmapCursor_Destruct(int a1);

signed int Usability_ThirdPromotionOption();

signed int GetItemHealAmount(int a1, unsigned __int8 a2);

signed int GetBattleMapType();

int Sound_SongVolumeTransitionBProc_Loop(signed __int16 *a1);

int Event97_(int a1);

signed int EventA5_(int a1);

signed int EventAE_(int a1);

signed int EventB1_(int a1);

signed int EventB7_(int a1);

int EventC3_(int a1);

signed int Event30_ENUN(int a1);

signed int Event43_(int a1);

signed int Event44_(int a1);

int NewItemGot(unsigned int a1, int a2, unsigned __int16 a3);

int StoreUnitWordStructs();

int UnitKill(int a1);

int RevertMapChangesById(int a1);

int PlayerPhase_InitUnitMovementSelect();

int MakeMoveunitForActiveUnit();

int MapAnimLevelUp_InitLevelUpBox(int a1, int a2, int a3);

int ResetAllPlayerUnitState();

int MapMU_RemoveUnit(int a1, int a2);

int LoadTrapData(char *a1);

int Event95_(int a1);

int Event19_(int a1);

int MapMain_StartIntroFx(signed int a1);

int MoveActiveUnit(char a1, char a2);

void loadResireBG2(int a1);

int Loop6C_efxNaglfarBG2(int a1);

int MU_BlinkEffect_OnLoop(int a1);

int MU_CritFlash_SpriteShakeLoop(int a1);

int MuCtr_OnEnd(int a1);

signed int RunTutorialEvent(char a1);

int GM_80B9154(int a1);

_DWORD *_mdiff(int a1, int a2, int a3);

__int16 *GetCharDeathQuoteEntry(unsigned __int16 a1);

int InitRN(int a1);

int ExecMainCycle();

int SetSomeRealCamPos(int a1, int a2, char a3);

signed int Event81_(int a1);

signed int Event90_WM_DRAWPATH(int a1);

signed int Event9A_(int a1);

int EventAD_(int a1);

int EventB5_(int a1);

int Event1F_(int a1);

int MapMain_CallBeginningEvent();

signed int MapMain_ThisProbablyUsedToBeEventRelatedInEarlierGames();

signed int UNUSED_StartupDebugMenu_ChapterSelectEffect(int a1, int a2);

int ASMC_801D7E8();

signed int StealItemMenuCommand_Effect(int a1, int a2);

int AddToTargetListIfNotAllied(char *a1);

bool DidUnitDie(int a1);

signed int CpPerform_EscapeWait();

int ClearTileMapRect(int a1, int a2, int a3, int a4, int a5);

int StartEfxCriticalEffect(int a1);

int ShouldCallEndEvent(int a1);

int WorldMap_InitChapterTransition(int a1);

int StartGMapScreenVSync(int a1, int a2, int a3, int a4, int a5);

int MapRoute_BeginRouteTransition(int a1, signed int a2);

int StartGMapMuEntry(signed int a1);

int Make6C_Gmap_RM(__int16 a1, __int16 a2, char a3, signed int a4);

signed int GetWMDisplayPosition(_WORD *a1, _WORD *a2);

int Until6C2AIs8Callback(int a1);

int ComputeCrit(unsigned __int16 *a1, int a2);

int RollForGreatShield(int a1, int a2);

int CallBattleQuoteEventsIfAny(int a1, unsigned __int8 a2);

int gcc2_compiled__37(int a1, int a2, int a3);

signed int MapAnimLevelUp_GetActorStatUp(int a1, int a2);

int RollForSureShot(int a1);

int ActionSteal(signed int a1);

int BKSEL_DrawDetailed(int a1);

int SetBattleAnimActorFacing(int a1, int a2, signed int a3);

int StoreIRQToIRAM();

int Text_Clear2DLine(int a1);

bool FaceExists();

bool APProc_Exists();

int CallActualSaveMenu(int a1);

int Event9C_();

int EventCD_(int a1);

int Event11_SetIgnoredKeys(int a1);

signed int Event24_UnblockGameGraphics(int a1);

signed int Event37_GiveItem(int a1);

int PlayerPhase_WaitForUnitMovement(int a1);

int TradeMenu_802E140(int a1);

int ActionCombat(signed int a1);

int KillUnitIfDefeatedBy(int a1, int a2);

int MarkSomethingInMenu();

int UnMarkSomethingInMenu();

int MU_SetDefaultFacing_Auto();

int MU_StartBlinkEffect(signed int a1);

int MU_StartPixelEffect(signed int a1);

bool MuCtr_Exists();

int MapAnimProc_DisplayItemStealingPopup(int a1);

int MapAnimProc_MoveCameraOntoTarget(signed int a1);

int MapAnimExpBar_TransitionInLoop(int a1);

int MapAnimExpBar_StartLevelUp(int a1);

int MapAnimLevelUpProc_InitLevelUpBox(int a1);

int MapAnim_WaitForHPToEndChangingMaybe(int a1);

int MapAnim_TargetUnitWarpRing();

int MapAnim_TargetStarImplosion();

int MaybeCallEndEvent_(int a1);

int WorldMap_WaitForChapterIntroEvents(int a1);

int GM_CallChapterWMIntroEvent(int a1);

int MapUnitC_DeleteGmapUnit(int a1, int a2);

int GMapRoute_StartTransition(int a1);

int MapMUPrim_MakeUnitForChar(int a1, int a2, int a3);

int MapMUPrim_MakeUnitForClass(int a1, unsigned __int16 a2, int a3);

int MapMUPrim_RemoveLinkedMapUnit(int a1);

int MapMU_FillPrim(int a1);

int WM_DrawPath(char a1, signed int a2);

int RollForPierce(int a1);

int MU_StartStepSfx(int a1, int a2, __int16 a3);

int SetupMapBattleAnim(int a1, int a2);

bool ShouldCallBattleQuote(int a1, int a2);

int MakeShop(int a1, __int16 *a2, char a3, signed int a4);

signed int malloc_trim_r(int a1, int a2);

int SyncPalettes_AdditiveFilter(int a1);

int SyncPalettes_SubstractiveFilter(int a1);

int MapAnimProc_DisplayExpBar(signed int a1);

int StartMapEventEngine(int a1, unsigned __int8 a2);

int StartEfxNoDamage(int a1, int a2, char a3);

_DWORD *multadd(int a1, _DWORD *a2, int a3, unsigned int a4);

int UpdateHBlankHandlerState();

int BeginBattleMapAnims();

int SaveConvoyItems(int a1);

signed int IsSethLArachelMyrrhInnes(__int16 a1);

int LoadBgConfig(unsigned __int16 *a1);

int ActionPick();

int UnpackUnitStructFromSuspend(int a1, int a2);

signed int hi0bits(int a1);

signed int lo0bits(unsigned int *a1);

int SetInterrupt_LCDVBlank(int a1);

int SetInterrupt_LCDVCountMatch(int a1);

__int16 *ResetKeyStatus(int a1);

int KeyStatusSetterProc_Set(int a1);

int GetBgDepth(int a1);

int EndProc(int a1);

signed int ProcInst12_SetBit4(int a1);

int GameControl_EnableSoundEffects();

int Event94_(int a1);

int CallMapEventEngine(int a1, unsigned __int8 a2);

bool CheckEventId_(unsigned __int16 a1);

int Event05_SetSlot(int a1);

char *GetUnitRescuingNameString(int a1);

int AiScriptCmd_17_DoEscape(_BYTE *a1);

int SioReady();

int GenerateMonsterClass(unsigned __int8 a1);

int MU_SetDefaultFacing(int a1);

_WORD *MU_StepSound_OnInit(int a1);

int MU_CritFlash_SetFadedPalette(int a1);

int MU_SetPaletteId(int a1, char a2);

int MapAnimExpBar_TransitionInInit(int a1);

int MapAnim_TargetStarExplosion();

int GM_80B8FD4();

int GmapUnit_Init(int result);

int PromotionInit_SetNullState(int a1);

_DWORD *_sfmoreglue(int a1, int a2);

int cleanup_r(int a1);

int cleanup();

int *setlocale(int a1, int a2);

int _sclose(int a1);

int open(_DWORD *a1, __int16 a2);

int _cmpdf2(int a1, int a2, int a3, int a4);

unsigned int _make_dp(int a1, int a2, int a3, int a4, int a5);

unsigned int _addsf3(int a1, int a2);

unsigned int _subsf3(int a1, int a2);

int _cmpsf2(int a1, int a2);

unsigned int _extendsfdf2(int a1);

int MapAnim_BeginRoundSpecificAnims();

int swiopen(_DWORD *a1, __int16 a2);

bool DialogueExists();

bool IsGeneratedTargetListEmpty(int a1);

int NullifyBattleDamageIfUsingStone(int a1);

int ExecRestore(signed int a1);

int LoadOldUIPal(signed int a1);

int LoadOldUIImage(int a1);

int MU_StartMoveScript_Auto();

signed int EventBA_(int a1);

signed int EventBE_(int a1);

void FillMovementMapCore();

int AddAsTarget_IfPositionCleanForSummon(int a1, int a2);

MOVEUNITExtraData *MU_GenerateConfigDefault(__int16 a1, _BYTE *a2);

MOVEUNITExtraData *MU_GenerateConfigOther(__int16 a1, _BYTE *a2);

int StartKeyStatusSetter(__int16 a1);

void InitRamFuncs();

int Draw1DTileTextGlyphCore();

int HuffmanTextDecomp(int a1, int a2);

int DrawGlyph1DTile(int a1, int a2);

int DialogueMain_OnEnd();

int Event84_WM_SETCAMONLOC(int a1);

int Event85_WM_SETCAMONSPRITE(int a1);

int Event91_WM_DRAWPATH_Silent(int a1);

int Event92_REMOVEPATH(int a1);

int EventA6_(int a1);

signed int EventB2_(int a1);

signed int EventBF_(int a1);

signed int EventC0_();

int DeleteEventEngines();

signed int Event28_ChangeWeather(int a1);

int Event2D_(int a1);

signed int Event3E_PrepScreenCall(signed int a1);

int PopupProc_InitGfx(int a1);

int LongPopup_Clear(unsigned __int8 *a1);

int CreateNewUnitPopup(int a1, unsigned __int8 a2);

char *GetUnitStatusString(int a1);

signed int DebugMenu_MapEffect(int a1, int a2);

int DEBUGONLY_Startup();

signed int UNUSED_StartupDebugMenu_WorldMapEffect();

int UNUSED_StartupDebugMenu_ChapterSelectIdle(int a1, int a2);

int PlayerPhase_RangeDisplayIdle_ForceAPress(unsigned __int16 **a1);

signed int MapMenuCommnd_EndEffect();

int WarpTargetPosSelect_Init(signed int a1);

int TradeMenu_802D2E0(unsigned __int16 ***parent);

int PrepScreenProc_LockGame();

int BKSEL_InitGfx(int a1);

int PushGlobalTimer();

bool IsUnitEnemyAndNotInTheAiInstList(int a1);

int Menu_HelpBoxInit(int a1);

int ekrBattle_8050CCC(_DWORD *a1);

int ekrBattleStarting_8055CF0(_WORD *a1);

int Loop6C_efxNaglfarBG(int a1);

int ekrPopup_WaitWpnBroke(int a1);

int ekrPopup_WaitWRankUp(int a1);

int ekrPopup_WaitWRankUp2(int a1);

int ekrPopup_WaitWpnBroke2(int a1);

int MU_StepSound_OnFirstSound(int a1);

int MU_OnEnd(int a1);

_WORD *MU_SetDisplayPosition(int a1, __int16 a2, __int16 a3);

_WORD *MU_SetDisplayOffset(int a1, __int16 a2, __int16 a3);

int MU_StartFlashFade(int a1, int a2);

int MU_8079858(int a1);

int MU_StartActionAnim(int a1);

int MU_StartDelayedFaceTarget(int a1);

int MU_EndRefaceApAnim(int a1);

int MU_CritFlash_StartFadeBack_maybe(int a1);

int MU_SetSpecialSprite(int a1, char a2, int a3);

int MapAnimProc_StartRoundAnimProc(signed int a1);

int MapAnimProc_MoveCameraOntoSubject(signed int a1);

int New6C_SummonGfx_FromActionPos(int a1);

int MapAnim_StartBattleInfoBox(char a1, char a2, int a3);

int MapAnimUi_Clear();

int MapAnimExpBar_LoadGfx(int a1);

int WallBreakAnim_Init(int a1);

int StartMapAnimPoisonEffect(int a1);

int NewMapAnimEffectAnimator(int a1, int a2, int a3, __int16 a4);

int StartUnitWarpRing(int a1);

int MapAnim_StartLevelUp(__int16 a1, signed int a2);

int StartStarRotationEffect(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7);

int StartStarExplosionEffect(__int16 a1, __int16 a2);

int StartStarImplosionEffect(__int16 a1, __int16 a2);

int New6C_SummonGfx(signed int a1, int a2, int a3);

int MapAnim_MoveCameraOnWarpTarget(signed int a1);

int MapAnim_WarpTargetWarpRing();

int MapAnim_TargetUnitFlashOut();

int MapAnim_MoveTargetForWarp();

signed int EvCheck08_DOOR(_DWORD *a1);

signed int EvCheck09_(_DWORD *a1);

int CallRouteSplitMenu(int a1);

int MenuCommand_DrawRouteSplit(int a1, int a2);

int StatScreenBGVPosManager_Loop();

int Loop6C_8A00B20_UpdateOAMData(int *a1);

int Make6C_savemenu(signed int a1);

int NewFadeIn(int a1);

int GM_OnEnd(int a1);

int GMapScreen_Init(int a1);

int GmapUnitContainer_Init(int a1);

int GmapCursor_Init(int a1);

int GMapRoute_EnableBGSyncs(int a1);

int GMapRoute_TransitionEnd(_BYTE *a1);

int WM_PutCharSprite(int a1, int a2, int a3, int a4);

int WM_RemoveUnit(int a1);

int AddSomeChild6C(signed int a1);

int DeleteSome6C();

int Initialize6CIntroSequence(signed int a1);

int ChangePromotionClassDescText(int a1);

int Make6C_PromotionSub(signed int a1);

int PromotionDisplay_InitClassDesc(int a1);

int PromotionCommand_OnTextDraw(int a1, int a2);

int PromotionCommand_OnChange(int a1, int a2);

int PromotionMenuSelect_OnInit(signed int a1);

int gcc2_compiled__16(_BYTE *a1, int a2, int a3);

signed int Event34_MessWithUnitState(int a1);

signed int Event8D_(int a1);

signed int Event8E_(int a1);

signed int Event8F_(int a1);

int EventB9_(int a1);

int EventBD_(int a1);

signed int EventCE_(int a1);

signed int EventCF_(int a1);

int *SetIRQHandler(int a1, int a2);

int LoadRNState(__int16 *a1);

_WORD *SaveRNState(_WORD *a1);

unsigned int GetOtherRN();

int SyncLCDControl();

int GetBgTileDataOffset(unsigned __int16 a1);

int SetBgTileDataOffset(unsigned __int16 a1, int a2);

int SetBgScreenSize(unsigned __int16 a1, char a2);

__int16 (*GetBgMapBuffer(int a1))[1024];

int SetPrimaryHBlankCallback(int a1);

int SetSecondaryHBlankCallback(int a1);

int SetBgDepth(int a1, char a2);

int SetColorEffectsParameters(char a1, char a2, char a3, char a4);

int SetColorEffectsFirstTarget(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5);

int SetColorEffectsSecondTarget(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5);

int SetColorEffectBackdropFirstTarget(char a1);

int SetColorEffectBackdropSecondTarget(char a1);

int SetDefaultColorEffects();

signed int EnablePaletteSync();

int DisablePaletteSync();

int EnableBgSyncByMask(int a1);

int EnableBgSyncByIndex(char a1);

int RegisterFillTile(int a1, int a2, int a3);

int InitOAMSplice(int a1);

int WriteOAMRotScaleData(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5);

int Sound_IsSongPlaying();

int Sound_PlaySongSmooth(int a1, int a2);

int Sound_PlaySongSmoothExt(int a1, int a2, int a3);

int SetSoundDefaultMaxChannels();

int CancelPlaySongDelayed();

int *GetGenericMiniMugGfx(int a1);

__int16 UnsetDialogueFlag(__int16 result);

int CheckDialogueFlag(unsigned __int16 a1);

int CallBattleQuoteTextEvents(unsigned __int16 a1);

int CallSomeOtherEvents(unsigned __int16 a1, unsigned __int16 a2);

int StartGameOverEvent();

int SlotQueuePush(int a1);

int GetSomethingInPaletteBB_5A();

int GetSomethingInPaletteBB_8A();

int GetItemMaxRange(unsigned __int8 a1);

unsigned int UnitHasMagicRank(unsigned __int8 *a1);

int GetCurrentPhase();

int IsNotEnemyPhaseMaybe();

int StoreAddedAffinityBonusesForSupportLevel(_BYTE *a1, char *a2, char a3);

_BYTE *WriteBattleStructTerrainBonuses(int a1, char a2);

_BYTE *BattleSetupTerrainData(int a1);

unsigned int IsCurrentBattleTriangleAttack();

int AddFireTrap(char a1, char a2, char a3, char a4);

int AddTrap8(char a1, char a2);

int AddTrap9(char a1, char a2, char a3);

TrapStruct *AddLightRune(int a1, int a2);

bool IsDifficultMode();

int SetUnitAiFromDefinition(int a1, _BYTE *a2);

int AiExecAi1();

int AiExecAi2();

int AiBattleGetTurnNumberWeight();

int SetGameLinkArenaBit();

int ClearGameLinkArenaBit();

int StartMenuExt2(_DWORD *a1, int a2);

int StartMenuAt(int a1, int a2);

int StartTargetSelectionExt(int a1, int a2);

int GetSomeBattleAnimHpValue(int a1);

int GetSpellAssocReturnBool(unsigned __int16 a1);

int GetSpellAssocFlashColor(unsigned __int16 a1);

int MU_CreateExt(int a1, unsigned __int16 a2, int a3);

_BYTE *MU_EnableAttractCamera(int a1);

_BYTE *MU_DisableAttractCamera(int a1);

int MU_End();

char *MU_GetGfxBufferById(int a1);

__int16 *MU_GetSheetGfx(int a1);

int MU_GetAnimationByClassId(int a1);

_BYTE *MU_Hide(int a1);

_BYTE *MU_Show(int a1);

bool CheckGlobalEventId(signed int a1);

int RegisterEventActivation(int a1, __int16 a2);

int Shop6C_GetPortraitIndex(int a1);

int MakeShopArmory(int a1, int a2, int a3);

int MakeShopVendor(int a1, int a2, int a3);

int MMS_GetGfx(int a1);

int MMS_GetROMTCS2(int a1);

char *GetMapUnitMMSGfxBuffer(int a1);

int MapUnitC_SetPosition(int a1, int a2, __int16 a3, __int16 a4);

int MapUnitC_SetTCSOAMIndex(int a1, int a2, __int16 a3);

int NewPromotionMain(int a1, char a2, char a3);

int vfprintf(int a1, int a2, int a3);

int _sinit(_DWORD *a1);

int **localeconv();

_DWORD *i2b(int a1, int a2);

unsigned int gcc2_compiled__31(int a1, unsigned int a2);

unsigned int gcc2_compiled__32(int a1, unsigned int a2);

int get_errno();

int error(int a1);

int swiread(int a1, int a2, int a3);

int lseek(int a1, int a2, int a3);

int swiwrite(int a1, int a2, int a3);

int close(int a1);

int gcc2_compiled__41();

unsigned int _adddf3(int a1, int a2, int a3, int a4);

unsigned int _subdf3(int a1, int a2, int a3, int a4);

unsigned int _make_fp(int a1, int a2, int a3, int a4);

int GetChapterAllyUnitDefinitions();

signed int Event80_(int a1);

int EventA0_REMSPRITE(int a1);

int EventA1_(int a1);

int EventA2_(int a1);

int DebugMenu_MapIdle(int a1, int a2);

int PlayerPhase_ReloadGameGfx(int a1);

int ListSummonTargets(int a1);

int PrepScreenProc_HideEverythingAndUnlockGame();

bool MapEventEngineExists_();

int PopGlobalTimer();

signed int CpPerform_PickWait(signed int a1);

int MapAnim_AnimateSubjectIdle();

int MapAnim_SubjectResetAnim();

int MapAnim_BeginSubjectFastAnim();

int MapAnimProc_PoisonEffectOnDefender();

int MapAnim_TargetUnitFlashIn();

int MapAnim_TargetHide();

int MapAnim_TargetShow();

int TriggerDisableMapIcons();

int UnTriggerDisableMapIcons();

int DoNothing();

int EventAF_(int a1);

int EventB0_(int a1);

bool BBExists();

int AddUnitToTargetListIfNotAllied(char *a1);

bool IsBottomHelpTextActive();

bool PrepScreenTraineePromotionManagerExists();

int ekrBattleStarting_8055FE8(int a1);

int ProcSleepCallback(int a1);

int MapAnimExpBar_FillInit();

int RunBattleForecastTutorialEvent(int a1);

bool FadeOutExists();

bool FadeInExists();

signed int GetFacingDirection(int a1, int a2, int a3, int a4);

int FillBgMap(int a1, int a2);

int RegisterBlankTile(int a1);

int SyncHiOAM();

int Sound_SetVolume_8002274(unsigned __int16 a1);

int Sound_SetSongVolume(unsigned __int16 a1);

int Sound_PlaySong(__int16 a1);

int SetSoundMaxChannels(int a1);

int PushToHiOAM();

int PushToLoOAM();

int LoadGenericMiniMugPalette(int a1, int a2);

int APProc_DeleteAll();

int StartBattleEventEngine(int a1);

int Event22_CLEAN(int a1);

int DeleteAllPaletteAnimator();

char *GetWTypeString(int a1);

int MakeTargetListForFuckingNightmare(int a1);

int PrepareTargetSelectionForHeal(int a1);

int BattleLoadHit(int a1);

int RemoveLightRune(unsigned __int8 *a1);

int MapMain_ResumeFromPhaseIdle(unsigned __int16 **a1);

int MapMain_ResumeFromAction(unsigned __int16 **a1);

int MapMain_ResumeFromBerserkPhase(unsigned __int16 **a1);

int MapMain_ResumeFromArena(unsigned __int16 **a1);

int MapMain_ResumeFromPhaseSwitch(unsigned __int16 **a1);

int ActionSummon(signed int a1);

int ActionSummonDK(signed int a1);

int LoadChapterBallistae();

int CpPerform_PerformSteal(int a1);

signed int CpPerform_PerformSomeOtherCombat(signed int a1);

int CpPerform_PerformDkSummon(signed int a1);

int LoadOldUIGfx();

int SpellFx_SetSomeColorEffect();

int SpellFx_ClearColorEffects();

int RegisterAISSheetGraphics(int a1);

void loadHazymoonBG2(AnimationInterpreter *AIS);

int StartSpellBG_IvaldiBG1(int a1);

int StartSpellBG_IvaldiBG2(int a1);

int StartSpellBG_IvaldiBG3(int a1);

int StartSpellBG_IvaldiBG4(int a1);

int PrepareSomeIvaldiParticleGraphics();

int StartSpellOBJ_IvaldiFall(int a1, __int16 a2);

int StartSpellOBJ_IvaldiSideWash(int a1, __int16 a2);

int StartEfxPierceCriticalEffect(int a1);

int normalEffect(int a1);

int MU_PlayStepSfx();

int MU_StartFogBumpFx(int a1, int a2);

int MU_EndAll();

int MU_EndInternal(int a1);

int MU_80790CC(int a1);

int MU_AllDisable();

int MU_AllEnable();

int MU_StartFastMoveAnim(int a1);

int MU_StartCritFlash(signed int a1, int a2);

int MU_StartHitFlash(signed int a1, int a2);

int StartSomeMapAnim_807B68C();

int BeginMapAnimForSteal();

int BeginMapAnimForSummon();

int BeginMapAnimForSummonDK();

int SetupMapAnimSpellData(int a1, int a2, int a3);

int MapAnim_EndBattleInfoBox();

int MapAnim_BeginMISSAnim(int a1);

int MapAnim_BeginNODAMAGEAnim(int a1);

int MapAnim_BeginWallBreakAnim(int a1, __int16 a2);

int LoadSparkGfx();

int CheckWin();

int GetCurrentChapterBallistaePtr();

int GetChapterSkirmishLeaderClasses(unsigned __int8 a1, _BYTE *a2);

int ClearActiveEventRegistry();

int EndPlayerPhaseSideWindows();

int RestartScreenMenuScrollingBg();

int EndScreenMenuScrollingBg();

int LoadPermanentEidsIn(int a1);

int LoadSavedWMStuff(int a1, int a2);

bool LoadSavedEid8A(int a1);

int SaveRNGState_Maybe(int a1);

int SaveWMStuff(int a1, unsigned __int8 *a2);

int InitGraphicSystemsForWorldMap();

int StartGMapScreen(signed int a1);

int MapUnitC_SetTCSAnim(int a1, int a2, char a3);

int NewGmapUnitContainer(signed int a1, int a2, char a3);

int NewGmapCursor(signed int a1, int a2, char a3, int a4);

int StartGMapRoute(signed int a1, int a2, int a3, char a4);

int MapMU_SetUnitTCSOAMIndex(int a1, int a2, __int16 a3);

int MapMU_SetUnitClass(int a1, int a2, int a3, int a4, int a5);

int MapMU_SetUnitChar(int a1, int a2, int a3, int a4, int a5);

int WM_PutClassSprite(int a1, int a2, int a3, int a4);

int StorePaletteToBufferMaybe(int a1, int a2, unsigned int a3);

int NewPromotionMain_raw(signed int a1);

int NewPromotion(signed int a1);

int SetOtherRNState(int result);

int GetKeyStatusIgnore();

signed int unlink();

char SetLCDVCountSetting(char result);

int SetProcOnCycle(int result, int a2);

void nullsub_RestartGameAndGoto7();

int SetEventSlotC(int result);

int SetPopupUnit(int result);

int MU_AdvanceStepSfx(int a1);

int GetGameClock();

int SetGameClock(int result);

int SetMainCallback(int result);

__int16 SetKeyStatusIgnore(__int16 result);

int GetLoOAMSize();

int Sound_GetCurrentSong();

int GetZero();

void nullsub_15();

void nullsub_9();

int SetEventCounter(int result);

int GetEventCounter();

void nullsub_16();

void nullsub_14();

void nullsub_13();

void MU_8078894();

void nullsub_20();

int SomeLeftoverFunctionThatReturns0();

int GetCurerentGameMode();

void ArcTan2();

void DivArm();

int BXR8();

int **localeconv_r();

void nullsub_3();

void nullsub_4();

int *gcc2_compiled__39();

signed int isatty();

int BreakProcLoop(int a1);

unsigned int Text_Get1DVRAMTarget(unsigned __int8 *a1);

unsigned int Text_Get2DVRAMTarget(unsigned __int8 *a1);

int APProc_OnDelete(int a1);

int Event8A_();

int Event8B_();

int Event93_(int a1);

int Event9B_(int a1);

int EventC1_SKIPWM();

int EventC2_();

signed int GetUnitStaffRangeMask(int a1);

_BYTE *MU_State_StartMovement(int a1);

int MU_807988C(int a1);

int MU_EndSelectionApAnim(int result);

int MU_EndFasterApAnim(int result);

int MU_CritFlash_SetRegularPalette(int a1);

int MU_CritFlash_RestorePalette(int a1);

int MU_HitFlash_RestorePalette(int a1);

int EnableAllGfx();

int WorldMap_HideEverything();

int exit();

int kill();

signed int CanUsePromotionItem(int a1, int a2);

int PromotionCommand_OnSelect(int a1, int a2);

int Event9E_PUTSPRITE(int a1);

int Event9F_(int a1);

int MarkSomethingInMenu();

int MapMain_Suspend();

int PlayerPhase_Suspend();

int HideMoveRangeGraphicsWrapper();

int MakeTargetListForAdjacentHeal(int a1);

int MakeTargetListForRestore(int a1);

int MakeTargetListForSilence(int a1);

int MakeTargetListForSleep(int a1);

int MakeTargetListForMine(int a1);

int MakeTargetListForLightRune(int a1);

int GameControl_8009A60_Null(int a1);

int spellTeyari2(AnimationInterpreter *a1);

int spellTeyari4(AnimationInterpreter *a1);

int StartSpellAnimJavelin(int a1);

int spellTeyari6(AnimationInterpreter *a1);

int spellTeyari7(AnimationInterpreter *a1);

int spellTeyari8(AnimationInterpreter *a1);

int spellTeyari11(AnimationInterpreter *a1);

int StartSpellAnimSong(int a1);

int StartSpellAnimIceBreath(int a1);

int StartSpellAnimThunder(int a1);

int StartSpellAnimFimbulvetr(int a1);

int spellLightning(AnimationInterpreter *a1);

int spellForblaze(AnimationInterpreter *a1);

int spellDevine(AnimationInterpreter *a1);

int StartSpellAnimNosferatu(int a1);

int StartSpellAnimRecover(int a1);

int spellFortify(int a1);

int spellGreenFortify(int a1);

int StartSpellAnimDivine(int a1);

int spellFenrir(AnimationInterpreter *a1);

int StartSpellAnimFenrir(int a1);

int StartSpellAnimShine(int a1);

int spellHammarne(AnimationInterpreter *a1);

int StartSpellAnimSilence(int a1);

int StartSpellAnimStone(int a1);

int DeleteEach6C_efxStatusUnit();

int New6C_SIOMAIN2();

int MapAnim_BeginPoisonAnim(int a1);

int MapAnim_MoveCameraOnSubject(signed int a1);

int MapAnim_MoveCameraOnTarget(signed int a1);

signed int Command_EirikaMode();

signed int Command_EphraimMode();

int NewFadeOut(int a1);

int SuspendCommand();

int StartClaimBonusItemMenu(signed int a1);

void loadFireRing(signed int parent);

int GMapScreen_OnEnd(int a1);

int GameControl_8030FE4(int a1);

int CpPerform_PerformAction(signed int a1);

int BKSEL_SetupHitAndSuchStats(_BYTE *a1);

int SMS_DisplayOne(int a1, int a2, int a3, int a4, int a5, char a6);

signed int PlayerPhase_PreAction(unsigned __int16 **a1);

int UpdateKeyStatus_Private(int a1, unsigned __int16 a2);

int MapMU_SetUnit(int a1, int a2, unsigned __int8 a3, int a4, int a5, int a6);

int GetSomeEventEngineMoveRelatedBitfield(int a1, char a2);

int GenerateCurrentRoundData(int a1, int a2);

int Event0F_CounterOperation(int a1, int a2, int a3, unsigned int a4);

signed int Event0E_STAL(int a1);

signed int CheckForPostActionEvents();

int MapMain_ChapterSwitch();

int Event07_QueueOperation(int a1);

signed int Event1E_(int a1);

int DrawUnitItemScreen();

int GetUnitStructFromEventParameter(int a1);

signed int Event21_TextBGStuff(signed int a1);

int GetPreferredPositionForUNIT(unsigned __int8 *a1, _BYTE *a2, _BYTE *a3, char a4);

signed int Event13_(int a1);

signed int Event01_End(int a1);

signed int RunMoveEventsMaybe(int a1);

signed int RunPostMoveEvents(int a1);

int UntriggerMapChange(unsigned __int16 a1, char a2, int a3);

signed int Event2C_LoadUnits(int a1);

UnitEventStruct *UNIT_Filter(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5);

int RunSelectEvents(int a1);

int StartBlockingBMXFADE(char a1, signed int a2);

int TriggerMapChanges(unsigned __int16 a1, char a2, int a3);

signed int Event3F_(signed int a1);

signed int Event27_MapChange(int a1);

signed int Event3A_(int a1);

signed int Event3B_(signed int a1);

int SaveNewGame(int a1, int a2, int a3, signed int a4);

int Event2B_(int a1);

signed int EventAC_(int a1);

void UnitKakudai1(_6CStruct *ctx);

int EventA9_(int a1);

int SwapUnitStats(int a1, int a2);

int BattleLoadAttack(int a1, int a2);

int EventA3_(int a1);

int EventA4_(int a1);

int Event39_CHAI(int a1);

signed int Event12_(int a1);

signed int MU_ComputeDisplayPosition(int a1, _WORD *a2);

int Event35_UnitClassChanging(int a1);

int RunLocationEvents(char a1, unsigned __int8 a2);

signed int Event33_CheckUnitVarious(int a1);

int Loop6C_efxIvaldiBG2(int a1);

int Event3C_(int a1);

int EventAA_(int a1);

int EventAB_(int a1);

int AutolevelRealistic(char *a1);

int GetWMCenteredCameraPosition(__int16 a1, __int16 a2, signed __int16 *a3, signed __int16 *a4);

int GmapUnit_Loop(int a1);

int EventB4_(int a1);

signed int Event42_(int a1);

signed int Event41_(int a1);

int GmapScreen2_Loop(int a1);

int CurrentRound_ComputeWeaponEffects(int a1, int a2);

int UNIT_Load_800F704(unsigned __int8 *a1, unsigned __int16 a2, char a3, unsigned __int8 a4);

signed int Event1B_TEXTSHOW(int a1);

int PromotionDisplay_MainLoop(int a1);

int UNITs_LoadInstant_800F698(unsigned __int8 *a1, unsigned __int16 a2, unsigned __int8 a3);

signed int Event88_(int a1);

signed int Event25_LOMA(int a1);

signed int Event87_(int a1);

int EventBC_(int a1);

signed int Event86_WM_MOVECAM(int a1);

int MU_InterpretCommandScript(int a1);

signed int Event26_CameraControlMaybe(int a1);

int EventB6_(int a1);

signed int EvCheck0B_AREA(_DWORD *a1);

int GetEventTriggerId(int a1);

int Loop6C_efxIvaldiBG1(int a1);

int GetAdjustedPositionForNewUnit(int a1, signed __int16 *a2, char a3);

int Event32_SpawnSingleUnit(int a1);

signed int Event29_SetFogVision(int a1);

int Init6CPI(int a1);

int SlotQueuePop();

int Event2A_MoveToChapter(int a1);

signed int Event18_(int a1);

int Event02_EvBitAndIdMod(int a1);

int EventA8_(int a1);

signed int GenerateMonsterLevel(unsigned __int8 a1);

int MuCtr_InitFromReda(int a1, signed int a2, int a3, int a4, unsigned __int16 a5);

signed int Event2F_MoveUnit(int a1);

int Event03_CheckEvBitOrId(int a1);

int MakeGorgonEggHatchTargetList(int a1);

signed int Event0A_Call(int a1);

signed int Event14_(int a1);

int MU_SortObjLayers();

int Sound_SetupMaxChannelsForSong(signed int a1);

int RecomputeUnitStatsForLevelPenalty(int a1, int a2, int a3);

int EventBB_(int a1);

_DWORD *LoadUnit(int a1);

int MapAnimProc_DisplayDeathQuote();

int MakeUIWindowTileMap_BG0BG1(int x, int y, int w, int h, int style);

int UpdateKeyStatus(int a1, __int16 a2);

signed int MoveCursor_8032DA0();

/* 战斗动画数据载入到内存*/
void battleAnimationInit();

void FireDragonBGAnimation6(_6CStruct *ctx);

/* 火龙背景调色板动画*/
void FireDragonBGPaletteAnimation(_6CStruct *ctx);

/* 读取并处理解压到内存中的战斗动画OAM信息*/
void battleAnimationOAMInfoHandler(void *battleAnimationOAMInfoBuffer, int a2, unsigned __int16 a3, int a4);

signed int GetChapterThing();

signed int DoesThisChapterCount(signed int a1);

int MapAnimLevelUp_GetActorStatBase(int a1, int a2);

void FireDragonBGAnimation5(_6CStruct *ctx);

void handleWeaponEffect(u8 dataAttacker[], u8 dataDefender[]);

void FireDragonBGAnimation9(_6CStruct *ctx);

void fubuki2(_6CStruct *ctx);

void fubuki4(_6CStruct *ctx);

/* 战斗中计算实际伤害
addr=战斗数据基址
203A3EC 我方
203A46C 对方*/
void calculateBattleDamage(u8 battleData[]);

void FireDragonBGAnimation4(_6CStruct *ctx);

void FireDragonBGAnimation7(_6CStruct *ctx);

void FireDragonBGAnimation8(_6CStruct *ctx);

/* parent = 0x2025330*/
signed int eventCodeFunc_DF(_6CStruct *parent);

void fubuki3(_6CStruct *ctx);

int RunPlayerPhaseStartTutorialEvent(int a1);

void FireDragonBGAnimation12(_6CStruct *ctx);

void IceCrystal1(_6CStruct *ctx);

void IceCrystal5(_6CStruct *ctx);

int Call89A2938_PlaySound2(int a1);

void transformateBattleAnimation(AnimationInterpreter *AIS, __int16 animationID);

int getSpecialAnimationEffectInfoType(AnimationInterpreter *AIS);

/* 带参数(sarg)调用函数*/
int Interpret6C_18CallRoutineWithArg(_6CStruct *_6C);

void fubuki1(_6CStruct *ctx);

void fubuki5();

int StealItemMenuCommand_Draw(int a1, int a2);

void FireDragonBGAnimation1(_6CStruct *ctx);

void FireDragonBGAnimation3(_6CStruct *ctx);

void FireDragonBGAnimation13(_6CStruct *ctx);

int MapAnimLevelUpProc_StartMusicThingy(int a1);

void IceCrystal3(_6CStruct *ctx);

bool IceCrystal2();

void readRNFromWRAMToIRAM(int a1);

int getPlayTime();

void setPlayTime(int time);

void SetBGMapSyncFlag(u8 flag);

void EnableBGMapSync(u8 n);

void EnablePaletteSync();

void DisablePaletteSync();

int GetBackgroundTileDataOffset(unsigned __int16 a1);

__int16 (*BG_GetMapBuffer(int a1))[1024];

int RegisterFillTile(int a1, int a2, int a3);

int SetOBJAttribute(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5);

/* r0 = minimug id, r1 = target bg, r2 = tile id, r3 = palid*/
int DrawMiniMug(int id, void *targetBg, int tileId, int palId);

int FillRangeMap(__int16 a1, __int16 a2, __int16 a3, __int16 a4);

bool GetSomethingRelatedToCurrentDifficulty();

void initSpecialAnimationEffectInfo();

int AddUnitToTargetListIfAllied(char *a1);

void huffmanDecompressText(int a1, int a2);

void loadNoDamage(int a1, int a2, u8 a3);

int StartEfxFlashUnit(int a1, __int16 a2, __int16 a3, char a4);

int StartSpellAnimation(int a1);

void loadHazymoonBG1(void *AIS);

_6CStruct *loadFireDragonBGPaletteAnimation(void *AIS);

_6CStruct *loadFireSeaBG2(void *AIS);

void loadFireSeaBG1(void *AIS, __int16 duration);

/* 保存运输队物品到存档
输入参数：
pDest 指向目的地址的指针*/
void SaveConvoyItems(_BYTE *pDest);

void LoadConvoyItems(int a1);

void nullsub_7();

u16 ArcTan2(u16 x, s16 y);

int GameVBlankProc_Loop(unsigned __int16 **a1);

void spellArrow(void *AIS);

int spellTeyari9(AnimationInterpreter *a1);

int spellTeyari10(AnimationInterpreter *a1);

int spellSong(int a1);

int spellLive(int a1);

int spellRelive(int a1);

int spellMShield(AnimationInterpreter *a1);

int spellExcalibur(AnimationInterpreter *a1);

int spellLuce(AnimationInterpreter *a1);

int spellRingFilla(AnimationInterpreter *a1);

/* 显示出击准备菜单*/
void displayMainPrepScreen(int a1);

/* 显示地图上的准备菜单屏幕（包括调整我军单位位置等功能）*/
void displayViewMapPrepScreen(int a1);

int ekrPopup_DrawWRankUp(int a1);

int SoundBiasReset(void);

int SoundBiasSet(void);

int BXR11();

int BXR12();

int SwitchGameplayPhase();

int DebugMenu_WeatherIdle(int a1, int a2);

int SetupWeatherGraphics_Maybe();

int UpdateWeatherGraphics();

int StartSpellAnimFire(int a1);

int StartSpellAnimElfire(int a1);

int ItemEffect_Call(int a1, int a2);

signed int GetUnitSMSIndex(int a1);

signed int ApplyStatBoosterAndGetMessageId(int a1, int a2);

char *GetItemRangeString(unsigned __int8 a1);

int *SomethingFilterBattleAnimId(signed int a1, int a2);

signed int GetWeaponRangeMask(unsigned __int8 a1);

int MapMU_80BE108(int a1, int a2, char a3);

int Event83_WM_SETCAM(int a1);

signed int Event0D_AsmCall(int a1);

unsigned int CanUnitUseItem(int a1, int a2);

int ActionStaffDoorChestUseItem(signed int a1);

signed int ApplyUnitAction(signed int a1);

int AddGorgonEggTrap(char a1, char a2, char a3, char a4, char a5);

int MuCtr_CreateWithReda(int a1, char a2, char a3, char a4);

int MoveUnit_(int a1, char a2, char a3, unsigned __int16 a4);

int MMB_DrawStatusText(int a1, int a2, signed int a3);

int GetSpellAnimId(unsigned __int16 a1, unsigned __int16 a2);

int DrawUnitStatScreen();

signed int GetWeaponRangeMask(unsigned __int8 a1);

void setSpecialAnimationEffectInfoType(AnimationInterpreter *AIS, __int16 type);

unsigned int CanUnitUseItem(int a1, int a2);

int ForceKillFireRing();

/* 职业战斗动画音效播放*/
int playBattleAnimationSFX(int a1, int a2);

