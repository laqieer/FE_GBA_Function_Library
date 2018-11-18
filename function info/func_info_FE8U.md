# Function infomation in FE8_U.gba

|Address|Name|Declaration|Comment|
|----|----|----|----|
|8000000|_start|void start(int a1, int a2, const char **a3)||
|80000FC|GlobalIRQHandler|unsigned int GlobalIRQHandler()||
|8000304|ARM_ClearOAMBuffer|_DWORD *ARM_ClearOAMBuffer(_DWORD *result, unsigned int a2)||
|8000360|ARM_ComputeChecksum32|int ARM_ComputeChecksum32(unsigned __int16 *a1, int a2)||
|80003A8|ARM_FillRect|_WORD *ARM_FillRect(_WORD *result, int a2, int a3, __int16 a4)||
|8000494|ARM_PushToHiOAM|int ARM_PushToHiOAM(int result, unsigned __int16 a2, _WORD *a3, __int16 a4)||
|8000534|ARM_PushToLoOAM|void ARM_PushToLoOAM()||
|8000564|ARM_Draw1DTileTextGlyphCore|int ARM_Draw1DTileTextGlyphCore(int result, _DWORD *a2, _DWORD *a3, int a4)||
|80006E4|ARM_HuffmanTextDecomp|unsigned __int8 *ARM_HuffmanTextDecomp(unsigned __int8 *result, _WORD *a2, unsigned int a3)||
|8000784|ARM_Func5|int ARM_Func5(int result, int a2, int a3)||
|8000874|ARM_FillMovementMapCore|char *ARM_FillMovementMapCore()||
|8000A20|AgbMain|int AgbMain(int argc, const char **argv, const char **envp)||
|8000B34|StoreIRQToIRAM|int StoreIRQToIRAM()||
|8000B74|IRQDummy|void IRQDummy()||
|8000B78|SetIRQHandler|int *SetIRQHandler(int a1, int a2)||
|8000B88|NextRN|unsigned int NextRN()||
|8000BC8|InitRN|int InitRN(int a1)||
|8000C34|LoadRNState|int LoadRNState(__int16 *a1)||
|8000C4C|SaveRNState|_WORD *SaveRNState(_WORD *a1)||
|8000C64|NextRN_100|int NextRN_100()||
|8000C80|NextRN_N|int NextRN_N(int a1)||
|8000CA0|Roll1RN|signed int Roll1RN(int a1)||
|8000CB8|Roll2RN|signed int Roll2RN(int a1)||
|8000CDC|SetOtherRNState|int SetOtherRNState(int result)||
|8000CE8|GetOtherRN|unsigned int GetOtherRN()||
|8000D28|GetGameClock|int GetGameClock()||
|8000D34|SetGameClock|int SetGameClock(int result)||
|8000D40|IncrementGameClock|int IncrementGameClock()||
|8000DB8|CopyToPaletteBuffer|int CopyToPaletteBuffer(int a1, int a2, unsigned int a3)||
|8000E9C|SyncLCDControl|int SyncLCDControl()||
|8000F44|GetBgControlBuffer|__int16 *GetBgControlBuffer(__int16 *result)||
|8000F8C|GetBgTileDataOffset|int GetBgTileDataOffset(unsigned __int16 a1)||
|8000FA4|GetBgLocalTileIndex|int GetBgLocalTileIndex(unsigned __int16 a1, unsigned __int16 a2)||
|8000FDC|SetBgTileDataOffset|int SetBgTileDataOffset(unsigned __int16 a1, int a2)||
|8001004|SetBgMapDataOffset|int SetBgMapDataOffset(int a1, int a2)||
|800104C|SetBgScreenSize|int SetBgScreenSize(unsigned __int16 a1, char a2)||
|8001094|SyncPalettes_AdditiveFilter|int SyncPalettes_AdditiveFilter(int a1)||
|80010F0|SyncPalettes_SubstractiveFilter|int SyncPalettes_SubstractiveFilter(int a1)||
|800114C|SyncBgs|int SyncBgs()||
|8001220|FillBgMap|int FillBgMap(int a1, int a2)||
|8001240|RegisterBlankTile|int RegisterBlankTile(int a1)||
|8001258|SetInterrupt_LCDVBlank|int SetInterrupt_LCDVBlank(int a1)||
|80012AC|SetInterrupt_LCDVCountMatch|int SetInterrupt_LCDVCountMatch(int a1)||
|800131C|SetLCDVCountSetting|char SetLCDVCountSetting(char result)||
|8001328|SetMainCallback|int SetMainCallback(int result)||
|8001334|ExecMainCycle|int ExecMainCycle()||
|800134C|UpdateKeyStatus_Private|int UpdateKeyStatus_Private(int a1, unsigned __int16 a2)||
|80013E0|UpdateKeyStatus|int UpdateKeyStatus(int a1)||
|8001420|ResetKeyStatus|__int16 *ResetKeyStatus(int a1)||
|8001440|SetKeyStatusIgnore|__int16 SetKeyStatusIgnore(__int16 result)||
|800144C|GetKeyStatusIgnore|int GetKeyStatusIgnore()||
|8001458|KeyStatusSetterProc_Set|int KeyStatusSetterProc_Set(int a1)||
|8001470|StartKeyStatusSetter|int StartKeyStatusSetter(__int16 a1)||
|800148C|SetBgPosition|int SetBgPosition(signed int a1, __int16 a2, __int16 a3)||
|8001B58|LoadBgConfig|int LoadBgConfig(unsigned __int16 *a1)||
|8001C4C|GetBgMapBuffer|__int16 (*GetBgMapBuffer(int a1))[1024]||
|8001C68|ShouldSkipHSScreen|int ShouldSkipHSScreen()||
|8001D28|UpdateHBlankHandlerState|int UpdateHBlankHandlerState()||
|8001DD8|SetPrimaryHBlankCallback|int SetPrimaryHBlankCallback(int a1)||
|8001DEC|SetSecondaryHBlankCallback|int SetSecondaryHBlankCallback(int a1)||
|8001E00|GetBgIdFromMapBuffer|signed int GetBgIdFromMapBuffer(unsigned int a1)||
|8001E6C|SetBgDepth|int SetBgDepth(int a1, char a2)||
|8001E8C|GetBgDepth|int GetBgDepth(int a1)||
|8001EA0|SetColorEffectsParameters|int SetColorEffectsParameters(char a1, char a2, char a3, char a4)||
|8001ED0|SetColorEffectsFirstTarget|int SetColorEffectsFirstTarget(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)||
|8001F0C|SetColorEffectsSecondTarget|int SetColorEffectsSecondTarget(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)||
|8001F48|SetColorEffectBackdropFirstTarget|int SetColorEffectBackdropFirstTarget(char a1)||
|8001F64|SetColorEffectBackdropSecondTarget|int SetColorEffectBackdropSecondTarget(char a1)||
|8001F80|SetDefaultColorEffects|int SetDefaultColorEffects()||
|8001F94|EnablePaletteSync|signed int EnablePaletteSync()||
|8001FA0|DisablePaletteSync|int DisablePaletteSync()||
|8001FAC|EnableBgSyncByMask|int EnableBgSyncByMask(int a1)||
|8001FBC|EnableBgSyncByIndex|int EnableBgSyncByIndex(char a1)||
|8001FE0|ClearTileRegistry|int ClearTileRegistry()||
|8002014|RegisterTileGraphics|int RegisterTileGraphics(int a1, int a2, int a3)||
|8002054|RegisterFillTile|int RegisterFillTile(int a1, int a2, int a3)||
|8002088|SyncRegisteredTiles|int SyncRegisteredTiles()||
|80020FC|InitOAMSplice|int InitOAMSplice(int a1)||
|8002138|SyncHiOAM|int SyncHiOAM()||
|800217C|SyncLoOAM|int SyncLoOAM()||
|80021B0|WriteOAMRotScaleData|int WriteOAMRotScaleData(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)||
|800224C|GetLoOAMSize|int GetLoOAMSize()||
|8002258|Sound_GetCurrentSong|int Sound_GetCurrentSong()||
|8002264|Sound_IsSongPlaying|int Sound_IsSongPlaying()||
|8002274|Sound_SetVolume_8002274|int Sound_SetVolume_8002274(unsigned __int16 a1)||
|80022EC|Sound_SetSongVolume|int Sound_SetSongVolume(unsigned __int16 a1)||
|800231C|Sound_FadeSongOut|int Sound_FadeSongOut(int a1)||
|800237C|Sound_FadeOut_800237C|int Sound_FadeOut_800237C(int a1)||
|80023E0|Sound_FadeOut_80023E0|int Sound_FadeOut_80023E0(int a1)||
|8002448|Sound_PlaySong|int Sound_PlaySong(__int16 a1)||
|8002478|Sound_PlaySongSmoothCommon|int Sound_PlaySongSmoothCommon(int a1, int a2, int a3)||
|80024D4|Sound_PlaySongSmooth|int Sound_PlaySongSmooth(int a1, int a2)||
|80024E4|Sound_PlaySongSmoothExt|int Sound_PlaySongSmoothExt(int a1, int a2, int a3)||
|80024F0|Sound_SongVolumeTransitionAProc_Loop|int Sound_SongVolumeTransitionAProc_Loop(int a1)||
|8002730|StartSongVolumeTransitionB|int StartSongVolumeTransitionB(int a1, __int16 a2, __int16 a3, int a4)||
|8002788|Sound_SongVolumeTransitionBProc_Loop|int Sound_SongVolumeTransitionBProc_Loop(signed __int16 *a1)||
|800281C|Sound_PlaySoundDelayedProc_Loop|int Sound_PlaySoundDelayedProc_Loop(int a1)||
|8002858|PlaySongDelayed|int PlaySongDelayed(__int16 a1, __int16 a2, int a3)||
|8002890|Sound_PlaySongCore|int Sound_PlaySongCore(signed int a1, int a2)||
|80028D0|SetSoundDefaultMaxChannels|int SetSoundDefaultMaxChannels()||
|80028E8|SetSoundMaxChannels|int SetSoundMaxChannels(int a1)||
|80028FC|Sound_SetupMaxChannelsForSong|int Sound_SetupMaxChannelsForSong(signed int a1)||
|8002AB8|CancelPlaySongDelayed|int CancelPlaySongDelayed()||
|8002AF8|InitRamFuncs|void InitRamFuncs()||
|8002B90|Draw1DTileTextGlyphCore|int Draw1DTileTextGlyphCore()||
|8002BA4|HuffmanTextDecomp|int HuffmanTextDecomp(int a1, int a2)||
|8002BB8|PushToHiOAM|int PushToHiOAM()||
|8002BCC|PushToLoOAM|int PushToLoOAM()||
|8002BF4|FillMovementMapCore|void FillMovementMapCore()||
|8002C08|InitProcSystem|int InitProcSystem()||
|8002C7C|StartProc|int StartProc(int a1, signed int a2)||
|8002CE0|StartBlockingProc|int StartBlockingProc(int a1, signed int a2)||
|8002D10|EndProc_Private|int EndProc_Private(int a1)||
|8002D6C|EndProc|int EndProc(int a1)||
|8002D84|_AllocProcState|int AllocProcState()||
|8002D94|_FreeProcState|int FreeProcState(int result)||
|8002DA4|_InsertMainProc|int InsertMainProc(int a1, int a2)||
|8002DC8|_InsertChildProc|int InsertChildProc(int a1, int a2)||
|8002DE0|_IsolateProc|int IsolateProc(_DWORD *a1)||
|8002E28|ExecProc_Private|int ExecProc_Private(int a1)||
|8002E84|ExecProc|int ExecProc(int a1)||
|8002E94|BreakProcLoop|int BreakProcLoop(int result)||
|8002E9C|FindProc|int *FindProc(int a1)||
|8002F24|GotoProcLabel|int GotoProcLabel(unsigned __int16 **a1, int a2)||
|8002F5C|GotoProcInstruction|int GotoProcInstruction(int result, int a2)||
|8002F64|MarkProc|_BYTE *MarkProc(int a1, char a2)||
|8002F6C|SetProcEndHandler|int SetProcEndHandler(int result, int a2)||
|8002F70|ForEveryProc|int ForEveryProc()||
|8002F98|ForEachProc|int ForEachProc(int a1)||
|8002FEC|HaltEachProcMarked|int HaltEachProcMarked(int a1)||
|8003014|ResumeEachProcMarked|int ResumeEachProcMarked(int a1)||
|8003040|EndEachProcMarked|int EndEachProcMarked(int a1)||
|800306C|_EndProc|int EndProc(int a1)||
|8003078|EndEachProc|int EndEachProc(int a1)||
|8003088|_BreakProcLoop|int BreakProcLoop(int a1)||
|8003094|BreakEachProcLoop|int BreakEachProcLoop(int a1)||
|80030A4|ForProcFamily|int ForProcFamily(int a1)||
|80030E8|ProcInst00_End|int ProcInst00_End(int a1)||
|80030F4|ProcInst01_SetName|signed int ProcInst01_SetName(int a1)||
|8003104|ProcInst02_CallRoutine|signed int ProcInst02_CallRoutine(int a1)||
|8003118|ProcInst16_CallRoutine2|int ProcInst16_CallRoutine2(int a1)||
|8003130|ProcInst18_CallRoutineArg|int ProcInst18_CallRoutineArg(int a1)||
|8003150|ProcInst14_WhileRoutine|signed int ProcInst14_WhileRoutine(int a1)||
|800317C|ProcInst03_SetOnCycle|int ProcInst03_SetOnCycle(int a1)||
|800318C|ProcInst04_SetOnEnd|signed int ProcInst04_SetOnEnd(int a1)||
|80031A8|ProcInst05_AddChild|signed int ProcInst05_AddChild(signed int a1)||
|80031C4|ProcInst06_AddBlockingChild|int ProcInst06_AddBlockingChild(signed int a1)||
|80031E0|ProcInst07_BuggedAddGlobal|signed int ProcInst07_BuggedAddGlobal(int a1)||
|8003200|ProcInst08_BlockUntilRunning|signed int ProcInst08_BlockUntilRunning(int a1)||
|8003228|ProcInst09_EndAllOf|signed int ProcInst09_EndAllOf(int a1)||
|8003244|ProcInst0A_BreakLoopForAll|signed int ProcInst0A_BreakLoopForAll(int a1)||
|8003260|ProcInst0B_Nop|signed int ProcInst0B_Nop(int a1)||
|800326C|ProcInst0D_GotoPointer|signed int ProcInst0D_GotoPointer(int a1)||
|800327C|ProcInst0C_GotoLabel|signed int ProcInst0C_GotoLabel(int a1)||
|8003290|_ProcSleepCallback|int ProcSleepCallback(int a1)||
|80032AC|ProcInst0E_Sleep|int ProcInst0E_Sleep(int a1)||
|80032D4|ProcInst0F_Mark|signed int ProcInst0F_Mark(int a1)||
|80032E8|ProcInst13_Nop2|signed int ProcInst13_Nop2(int a1)||
|80032F4|ProcInst10_Halt|int ProcInst10_Halt()||
|80032F8|ProcInst11_EnsureUniqueWeak|signed int ProcInst11_EnsureUniqueWeak(_DWORD *a1)||
|8003338|ProcInst12_EnsureUniqueStrong|signed int ProcInst12_EnsureUniqueStrong(int *a1)||
|8003370|ProcInst15_Nop3|signed int ProcInst15_Nop3(int a1)||
|800337C|ProcInst12_SetBit4|signed int ProcInst12_SetBit4(int a1)||
|8003394|ProcInterpretCode|int ProcInterpretCode(int a1)||
|80033DC|nullsub_83|void nullsub_83()||
|8003450|SetProcOnCycle|int SetProcOnCycle(int result, int a2)||
|8003578|_ResetIconGraphics|int ResetIconGraphics()||
|8003584|ClearIcons|int ClearIcons()||
|80035BC|LoadIconPalettes|int LoadIconPalettes(int a1)||
|80035D4|LoadIconPalette|int LoadIconPalette(int a1, int a2)||
|8003610|GetIconGfxTileIndex|int GetIconGfxTileIndex(int a1)||
|8003624|GetIconGfxIndex|signed int GetIconGfxIndex(char a1)||
|8003650|GetIconTileIndex|int GetIconTileIndex(int a1)||
|80036BC|DrawIcon|int DrawIcon(_WORD *a1, int a2, int a3)||
|800370C|ClearIcon|IconInfoStruct *ClearIcon(int a1)||
|800372C|LoadIconObjectGraphics|int LoadIconObjectGraphics(int a1, __int16 a2)||
|800378C|SetupDebugFontForBG|int SetupDebugFontForBG(int a1, signed int a2)||
|8003804|DBG_BG_Print|int DBG_BG_Print(_WORD *a1, _BYTE *a2)||
|80038C8|ClearSmallStringBuffer|int ClearSmallStringBuffer()||
|80038E0|StoreNumberStringToSmallBuffer|int StoreNumberStringToSmallBuffer(int a1)||
|800391C|StoreNumberStringOrDashesToSmallBuffer|int StoreNumberStringOrDashesToSmallBuffer(int a1)||
|8003968|StoreNumberHexStringToSmallBuffer|int StoreNumberHexStringToSmallBuffer(int a1)||
|80039D0|PrintStringToDBG|int PrintStringToDBG(_BYTE *a1)||
|8003A3C|FlushDBGToBG2|int FlushDBGToBG2()||
|8003B24|SetupDebugFontForOBJ|int SetupDebugFontForOBJ(int a1, int a2)||
|8003BB0|PrintDebugStringAsOBJ|int PrintDebugStringAsOBJ(int a1, int a2, _BYTE *a3)||
|8003BFC|PrintDebugNumberDec|int PrintDebugNumberDec(int a1, int a2, int a3, int a4)|Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len|
|8003C20|PrintDebugNumberHex|int PrintDebugNumberHex(int a1, int a2, int a3, int a4)|Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len|
|8003C7C|IsAsciiMode|int IsAsciiMode()||
|8003C88|SetAsciiMode|char SetAsciiMode(char result)||
|8003C94|Font_InitDefault|int Font_InitDefault()||
|8003CB8|Font_InitForUI|int Font_InitForUI(FontStruct *a1, int a2, __int16 a3, __int16 a4)||
|8003CF4|Font_SetGlyphSet|int Font_SetGlyphSet(int a1)||
|8003D20|Font_ResetAllocation|signed int Font_ResetAllocation()||
|8003D38|SetFont|int SetFont(int a1)||
|8003D5C|Text_InitClear|int Text_InitClear(int a1, __int16 a2)||
|8003D84|Text_InitDB|int Text_InitDB(int a1, __int16 a2)||
|8003DAC|InitClearTextBatch|int InitClearTextBatch(int a1)||
|8003DC8|Text_Clear|int Text_Clear(int a1)||
|8003E50|Text_GetXCursor|int Text_GetXCursor(int a1)||
|8003E54|Text_SetXCursor|int Text_SetXCursor(int result, char a2)||
|8003E58|Text_Advance|int Text_Advance(int result, char a2)||
|8003E60|Text_SetColorId|int Text_SetColorId(int result, char a2)||
|8003E64|Text_GetColorId|int Text_GetColorId(int a1)||
|8003E68|Text_SetParameters|int Text_SetParameters(int result, char a2, char a3)||
|8003E70|Text_Draw|int Text_Draw(unsigned __int8 *a1, _WORD *a2)||
|8003EBC|Text_DrawBlank|int Text_DrawBlank(int a1, _WORD *a2)||
|8003EDC|GetStringTextWidth|int GetStringTextWidth(unsigned __int8 *a1)||
|8003F3C|GetCharTextWidth|int GetCharTextWidth(unsigned __int8 *a1, _DWORD *a2)||
|8003F90|GetStringTextCenteredPos|int GetStringTextCenteredPos(int a1, unsigned __int8 *a2)||
|8003FF4|String_GetNextLine|unsigned __int8 *String_GetNextLine(unsigned __int8 *result)||
|8004004|Text_AppendString|int Text_AppendString(int a1, unsigned __int8 *a2)||
|8004074|Text_AppendDecNumber|int Text_AppendDecNumber(int a1, int a2)||
|8004144|Text_AppendNumberOr2Dashes|int Text_AppendNumberOr2Dashes(int a1, int a2)||
|8004180|Text_AppendChar|int Text_AppendChar(int a1, unsigned __int8 *a2)||
|80041E8|Text_Get1DVRAMTarget|unsigned int Text_Get1DVRAMTarget(unsigned __int8 *a1)||
|8004208|Get2bppTo4bppLookup|__int16 (*Get2bppTo4bppLookup(int a1))[256]||
|8004218|DrawGlyph1DTile|int DrawGlyph1DTile(int a1, int a2)||
|8004268|DrawGlyph1DTileNoClear|int DrawGlyph1DTileNoClear(int a1, int a2)||
|80043A8|Font_LoadForUI|int Font_LoadForUI()||
|80043E8|Font_LoadForDialogue|int Font_LoadForDialogue()||
|8004428|Font_SetDraw1DTileNoClear|int (*Font_SetDraw1DTileNoClear())(int a1, int a2)||
|800443C|DrawTextInline|int DrawTextInline(unsigned __int8 *a1, _WORD *a2, char a3, char a4, __int16 a5, unsigned __int8 *a6)||
|8004480|Text_InsertString|int Text_InsertString(int a1, char a2, char a3, unsigned __int8 *a4)||
|80044A4|Text_InsertNumberOr2Dashes|int Text_InsertNumberOr2Dashes(int a1, char a2, char a3, int a4)||
|80044C8|Text_AppendStringAscii|int Text_AppendStringAscii(int a1, unsigned __int8 *a2)||
|8004504|Text_AppendCharAscii|int Text_AppendCharAscii(int a1, unsigned __int8 *a2)||
|8004538|GetCharTextWidthAscii|int GetCharTextWidthAscii(unsigned __int8 *a1, _DWORD *a2)||
|8004568|GetStringTextWidthAscii|int GetStringTextWidthAscii(unsigned __int8 *a1)||
|800459C|Font_InitForObj|int Font_InitForObj(int a1, int a2, char a3)||
|80045D8|Text_Init2DLine|int Text_Init2DLine(int result)||
|800465C|Text_Clear2DLine|int Text_Clear2DLine(int a1)||
|80046B4|Text_Fill2DLine|int Text_Fill2DLine(int a1, int a2)||
|80046E0|Text_Get2DVRAMTarget|unsigned int Text_Get2DVRAMTarget(unsigned __int8 *a1)||
|8004700|DrawGlyph2DTile|int DrawGlyph2DTile(int a1, int a2)||
|80049AC|NewGreenTextColorManager|int NewGreenTextColorManager(int a1)||
|80049D0|EndGreenTextColorManager|int EndGreenTextColorManager()||
|8004A34|Text_DrawGlyphManual|int Text_DrawGlyphManual(int a1, int a2, int a3)||
|8004A90|Text_DrawSpecialUiChar|int Text_DrawSpecialUiChar(int a1, int a2, int a3)||
|8004ACC|DrawSpecialUiChar_|int DrawSpecialUiChar_(int a1, int a2)||
|8004B0C|DrawSpecialUiChar|int DrawSpecialUiChar(_WORD *a1, int a2, int a3)||
|8004B48|DrawSpecialUiDecNumber|int DrawSpecialUiDecNumber(_WORD *a1, int a2, int a3, int a4)||
|8004B88|DrawUiNumber|int DrawUiNumber(_WORD *a1, int a2, int a3)||
|8004B94|DrawUiNumberOrDoubleDashes|int DrawUiNumberOrDoubleDashes(_WORD *a1, int a2, int a3)||
|8004BE4|DrawUiSmallNumber|int DrawUiSmallNumber(_WORD *a1, int a2, int a3)||
|8004BF0|DrawStatScreenBonusNumber|int DrawStatScreenBonusNumber(signed int a1, int a2)||
|8004E40|UpdateAISs|int UpdateAISs()||
|8004EB8|ClearAISs|int ClearAISs()||
|8004F48|CreateAIS|AIStruct *CreateAIS(int a1, __int16 a2)||
|8004FAC|SortAISs|int SortAISs()||
|8005004|DeleteAIS|int DeleteAIS(int a1)||
|8005034|DisplayAIS|int DisplayAIS(int a1)||
|8005040|AdvanceAIS|signed int AdvanceAIS(int a1)||
|80051C0|InsertAIS|int InsertAIS(int a1)||
|8005208|_DisplayAIS|int DisplayAIS(int a1)||
|80053A4|HiObjClear|int HiObjClear()||
|80053E8|HiObjInsertSafe|int HiObjInsertSafe(__int16 rootNode, int x, int y, const void *objdata, __int16 oam2base)||
|8005428|HiObjInsert|int HiObjInsert(int nodeId, int x, int y, const void *data, int oam2base)||
|8005458|HiObjProcess|int HiObjProcess(int a1)||
|8005488|_HiObjProc_Loop|int HiObjProc_Loop(int a1)||
|80054B0|StartHiObjProc|int StartHiObjProc(signed int a1, __int16 a2, int a3, int a4, int a5, __int16 a6)||
|80054F4|MoveHiObjProc|int MoveHiObjProc(int *a1, int a2, int a3)||
|8005514|GetPortraitData|int *GetPortraitData(int a1)||
|8005528|Face_Init|int Face_Init()||
|8005544|SetFaceGfxConfig|int SetFaceGfxConfig(int *a1)||
|8005570|FindFreeFaceSlot|signed int FindFreeFaceSlot()||
|8005594|FACE_Load|int FACE_Load(int a1)||
|80055BC|FACE_Display|int FACE_Display(int a1)||
|8005610|StartFaceAuto|int StartFaceAuto(int a1, int a2, int a3, int a4)||
|800563C|StartFace|int StartFace(int fadeId, int portraitId, int x, int y, int dispType)|ARGS (int faceId, int portraitId, int x, int y, int idk)|
|8005738|EndFace|int EndFace(int a1)||
|8005758|EndFaceById|int EndFaceById(int a1)||
|8005770|SetFaceDisplayBits|int SetFaceDisplayBits(int a1, int a2)||
|800578C|SetFaceDisplayBitsById|int SetFaceDisplayBitsById(int a1, int a2)||
|80057A4|GetFaceDisplayBits|int GetFaceDisplayBits(int a1)||
|80057A8|GetFaceDisplayBitsById|int GetFaceDisplayBitsById(int a1)||
|80057C0|ApplyFaceDisplayBitChange|int ApplyFaceDisplayBitChange(int a1)||
|8005924|LoadMiniMugGraphics|int LoadMiniMugGraphics(int a1, int a2, int a3)||
|8005988|DrawMiniMug|int DrawMiniMug(int id, void *targetBg, int tileId, int palId)|r0 = minimug id, r1 = target bg, r2 = tile id, r3 = palid|
|8005C24|ShouldPortraitBeSmol|signed int ShouldPortraitBeSmol(int a1)||
|8005F6C|GetGenericMiniMugGfx|int *GetGenericMiniMugGfx(int a1)||
|8005F9C|LoadGenericMiniMugPalette|int LoadGenericMiniMugPalette(int a1, int a2)||
|8006438|SetFaceBlinkControl|int SetFaceBlinkControl(int a1, int a2)||
|8006458|SetFaceBlinkControlById|int SetFaceBlinkControlById(int a1, int a2)||
|8006470|GetFaceBlinkProcUnk8006470|signed int GetFaceBlinkProcUnk8006470(int a1)||
|80064F4|NewFace2|int NewFace2(int a1, int a2, __int16 a3, int a4, int a5)||
|80067E8|Dialogue_ClearFaceReferences|int Dialogue_ClearFaceReferences()||
|800680C|Dialogue_InitGfx|int Dialogue_InitGfx(__int16 a1, int a2, unsigned __int8 a3)||
|80068AC|Dialogue_InitGfxObj|int Dialogue_InitGfxObj(int tileStart, int lineCount, int paletteIndex)||
|8006978|Dialogue_InitFont|int Dialogue_InitFont()||
|800698C|StartDialogue|int StartDialogue(int a, int b, const char *textString, void *parent)||
|8006A30|StartDialogueFromIndex|int StartDialogueFromIndex(int a1, int a2, int a3)||
|8006A70|StartDialogueParentless|int StartDialogueParentless(int a1, int a2, const char *a3)||
|8006A7C|EndDialogue|int EndDialogue()||
|8006A98|ClearDialogueFlags|__int16 *ClearDialogueFlags()||
|8006AA8|SetDialogueFlag|int SetDialogueFlag(int a1)||
|8006AC8|UnsetDialogueFlag|__int16 UnsetDialogueFlag(__int16 result)||
|8006ADC|CheckDialogueFlag|int CheckDialogueFlag(unsigned __int16 a1)||
|8006AF0|Dialogue_SetCharacterDisplayDelay|int Dialogue_SetCharacterDisplayDelay(char a1)||
|8006B10|Dialogue_SetDefaultTextColor|int Dialogue_SetDefaultTextColor(char a1)||
|8006B4C|DialogueSkipInputListener_OnLoop|int DialogueSkipInputListener_OnLoop(int a1)||
|8006C00|DialogueMain_OnInit|int DialogueMain_OnInit()||
|8006C34|DialogueMain_OnLoop|int DialogueMain_OnLoop(int a1)||
|8006DA0|DialogueMain_UpdateDisplay|signed int DialogueMain_UpdateDisplay(signed int a1)||
|8007838|Dialogue_SetActiveFacePosition|int Dialogue_SetActiveFacePosition(int result)||
|8007C0C|DialogueMain_OnEnd|int DialogueMain_OnEnd()||
|8007C28|DialoguePauseTimer_OnLoop|int DialoguePauseTimer_OnLoop(int a1)||
|8007CD8|NewTextBluArrowAndButtonChecker|int NewTextBluArrowAndButtonChecker(signed int a1, __int16 a2, __int16 a3)||
|8007DE8|StartDialogueTextChoice|int StartDialogueTextChoice(unsigned __int16 *a1, int a2, int a3, int a4, int a5, int a6)||
|8007E9C|DialogueTextChoice_OnLoop|int DialogueTextChoice_OnLoop(int a1)||
|8008198|GetTextPauseDurationFromControlCode|int GetTextPauseDurationFromControlCode(int a1)||
|80083E0|NewDialogueBoxAppearingAnimator|int NewDialogueBoxAppearingAnimator()||
|80087A4|nullsub_74|void nullsub_74()||
|80089D0|DialogueExists|bool DialogueExists()||
|80089E8|FaceExists|bool FaceExists()||
|8008A00|GetLastDialoguePromptResult|int GetLastDialoguePromptResult()||
|8008B44|GetStringTextWidthWithDialogueCodes|signed int GetStringTextWidthWithDialogueCodes(unsigned __int8 *a1, unsigned __int8 a2)||
|8008F18|GetZero|int GetZero()||
|8008F20|DialogueEnableBgSyncByMask|int DialogueEnableBgSyncByMask(int a1)||
|8009038|nullsub_15|void nullsub_15()||
|8009260|AP_ClearAll|int AP_ClearAll()||
|800927C|AP_Create|int AP_Create()||
|80092A4|AP_Delete|int AP_Delete(_DWORD *a1)||
|80092BC|AP_Update|int AP_Update(_DWORD *a1)||
|80092E4|_AP_RegisterGraphics|int AP_RegisterGraphics(_DWORD *a1, int a2, int a3)||
|8009340|_AP_Exec|signed int AP_Exec(int a1)||
|8009430|_AP_QueueRotScaleData|int AP_QueueRotScaleData(_DWORD *a1)||
|8009518|AP_SwitchAnimation|int AP_SwitchAnimation(int a1, int a2)||
|8009548|AP_SetDefinition|int AP_SetDefinition(_DWORD *a1)||
|8009568|_AP_QueueTileGfx|int AP_QueueTileGfx(_DWORD *a1)||
|8009674|_AP_Load|_DWORD *AP_Load(_DWORD *result, unsigned __int16 *a2)||
|8009698|_AP_ExecOneFrame|int AP_ExecOneFrame(int a1)||
|80096B8|_AP_Init|int AP_Init(_DWORD *a1, unsigned __int16 *a2, __int16 a3)||
|80096F0|_AP_Alloc|AP *AP_Alloc(int a1)||
|8009718|APProc_Create|_DWORD *APProc_Create(int a1, int a2, int a3, __int16 a4, int a5)||
|8009760|_APProc_OnUpdate|int APProc_OnUpdate(int a1)||
|800978C|_APProc_OnDelete|int APProc_OnDelete(int a1)||
|8009798|APProc_SetParameters|int APProc_SetParameters(_DWORD *a1, int a2, int a3, int a4)||
|80097B4|APProc_Delete|int APProc_Delete(int a1)||
|80097C0|APProc_DeleteAll|int APProc_DeleteAll()||
|80097D0|APProc_Exists|bool APProc_Exists()||
|8009A00|GameControl_HandleSelectRightL|int GameControl_HandleSelectRightL(unsigned __int16 **a1)||
|8009A58|GameControl_8009A58|int GameControl_8009A58(int result)||
|8009A60|GameControl_8009A60_Null|int GameControl_8009A60_Null(int a1)||
|8009A6C|Delete6CIfNotMarkedB|int Delete6CIfNotMarkedB(int a1)||
|8009B88|GameControl_MasterSwitch|int GameControl_MasterSwitch(int a1)||
|8009DE0|CallActualSaveMenu|int CallActualSaveMenu(int a1)||
|8009EDC|GameControl_GetChapterIdToProc|char *GameControl_GetChapterIdToProc(int a1)||
|8009EEC|GameControl_GetChapterIdFromProc|int GameControl_GetChapterIdFromProc(int a1)||
|8009F08|NewGameControl|int NewGameControl()||
|8009F40|GetGameControl|int *GetGameControl()||
|8009F50|SetNextGameActionId|int SetNextGameActionId(char a1)||
|8009F64|SetNextChapterId|int SetNextChapterId(char a1)||
|8009F8C|RestartGameAndGoto8|int RestartGameAndGoto8()||
|8009FB0|RestartGameAndGoto12|int RestartGameAndGoto12()||
|8009FD4|nullsub_RestartGameAndGoto7|void nullsub_RestartGameAndGoto7()||
|8009FD8|nullsub_9|void nullsub_9()||
|8009FDC|GameControl_EnableSoundEffects|int GameControl_EnableSoundEffects()||
|800A048|String_GetGenericArticle|int String_GetGenericArticle(_BYTE *a1, unsigned __int8 a2)||
|800A160|String_PrependArticle|int String_PrependArticle(_BYTE *a1, int a2, unsigned __int8 a3)||
|800A1C8|String_StripSomeEndCharacters|int String_StripSomeEndCharacters(_BYTE *a1)||
|800A240|String_GetFromIndex|char *String_GetFromIndex(int a1)||
|800A280|String_GetFromIndexExt|_BYTE *String_GetFromIndexExt(int a1, int a2)||
|800A2A4|String_ExpandNames|char *String_ExpandNames()||
|800A3B8|String_ExpandTactName|char *String_ExpandTactName()||
|800BA5C|SetSomeRealCamPos|int SetSomeRealCamPos(int a1, int a2, char a3)||
|800BAF8|TriggerMapChanges|int TriggerMapChanges(unsigned __int16 a1, char a2, int a3)||
|800BB48|UntriggerMapChange|int UntriggerMapChange(unsigned __int16 a1, char a2, int a3)||
|800BC1C|HideAllUnits|int HideAllUnits()||
|800BC50|GetUnitStructFromEventParameter|int GetUnitStructFromEventParameter(int a1)||
|800BDCC|Event80_|signed int Event80_(int a1)||
|800BDE8|Event81_|signed int Event81_(int a1)||
|800BE2C|Event82_EndWM|int Event82_EndWM()||
|800BE38|Event83_WM_SETCAM|int Event83_WM_SETCAM(int a1)||
|800BE4C|Event84_WM_SETCAMONLOC|int Event84_WM_SETCAMONLOC(int a1)||
|800BE8C|Event85_WM_SETCAMONSPRITE|int Event85_WM_SETCAMONSPRITE(int a1)||
|800BED4|Event86_WM_MOVECAM|signed int Event86_WM_MOVECAM(int a1)||
|800BF38|Event87_|signed int Event87_(int a1)||
|800BFD8|Event88_|signed int Event88_(int a1)||
|800C084|Event89_|signed int Event89_(int a1)||
|800C0B8|Event8A_|int Event8A_()||
|800C0C8|Event8B_|int Event8B_()||
|800C0D4|Event8C_|int Event8C_(int a1)||
|800C0F0|Event8D_|signed int Event8D_(int a1)||
|800C108|Event8E_|signed int Event8E_(int a1)||
|800C120|Event8F_|signed int Event8F_(int a1)||
|800C138|Event90_WM_DRAWPATH|signed int Event90_WM_DRAWPATH(int a1)||
|800C164|Event91_WM_DRAWPATH_Silent|int Event91_WM_DRAWPATH_Silent(int a1)||
|800C198|Event92_REMOVEPATH|int Event92_REMOVEPATH(int a1)||
|800C1CC|Event93_|int Event93_(int a1)||
|800C1E8|Event94_|int Event94_(int a1)||
|800C204|Event95_|int Event95_(int a1)||
|800C254|Event96_|int Event96_(int a1)||
|800C2DC|Event97_|int Event97_(int a1)||
|800C36C|Event98_|int Event98_(int a1)||
|800C434|Event99_|signed int Event99_(int a1)||
|800C468|Event9A_|signed int Event9A_(int a1)||
|800C4C8|Event9B_|int Event9B_(int a1)||
|800C4E4|Event9C_|int Event9C_()||
|800C528|Event9D_|signed int Event9D_(int a1)||
|800C55C|Event9E_PUTSPRITE|int Event9E_PUTSPRITE(int a1)||
|800C574|Event9F_|int Event9F_(int a1)||
|800C58C|EventA0_REMSPRITE|int EventA0_REMSPRITE(int a1)||
|800C59C|EventA1_|int EventA1_(int a1)||
|800C5AC|EventA2_|int EventA2_(int a1)||
|800C5BC|EventA3_|int EventA3_(int a1)||
|800C5F8|EventA4_|int EventA4_(int a1)||
|800C634|EventA5_|signed int EventA5_(int a1)||
|800C65C|EventA6_|int EventA6_(int a1)||
|800C68C|EventA7_|int EventA7_(int a1)||
|800C6C0|EventA8_|int EventA8_(int a1)||
|800C754|EventA9_|int EventA9_(int a1)||
|800C7B4|EventAA_|int EventAA_(int a1)||
|800C7E4|EventAB_|int EventAB_(int a1)||
|800C814|EventAC_|signed int EventAC_(int a1)||
|800C85C|EventAD_|int EventAD_(int a1)||
|800C884|EventAE_|signed int EventAE_(int a1)||
|800C8B0|EventAF_|int EventAF_(int a1)||
|800C8D4|EventB0_|int EventB0_(int a1)||
|800C8F8|EventB1_|signed int EventB1_(int a1)||
|800C924|EventB2_|signed int EventB2_(int a1)||
|800C938|EventB3_|signed int EventB3_()||
|800C950|EventB4_|int EventB4_(int a1)||
|800C980|EventB5_|int EventB5_(int a1)||
|800C9A0|EventB6_|int EventB6_(int a1)||
|800C9F0|EventB7_|signed int EventB7_(int a1)||
|800CA18|EventB8_|int EventB8_(int a1)||
|800CA38|EventB9_|int EventB9_(int a1)||
|800CA60|EventBA_|signed int EventBA_(int a1)||
|800CA9C|EventBB_|int EventBB_(int a1)||
|800CADC|EventBC_|int EventBC_(int a1)||
|800CB48|EventBD_|int EventBD_(int a1)||
|800CB70|EventBE_|signed int EventBE_(int a1)||
|800CBAC|EventBF_|signed int EventBF_(int a1)||
|800CBD8|EventC0_|signed int EventC0_()||
|800CBF0|EventC1_SKIPWM|int EventC1_SKIPWM()||
|800CC04|EventC2_|int EventC2_()||
|800CC18|EventC3_|int EventC3_(int a1)||
|800CC5C|EventCE_|signed int EventCE_(int a1)||
|800CC74|EventCF_|signed int EventCF_(int a1)||
|800CC8C|EventC4_|int EventC4_(int a1)||
|800CCE8|nullsub_31|void nullsub_31()||
|800CCEC|nullsub_32|void nullsub_32()||
|800CCF0|EventC5_|int EventC5_(int a1)||
|800CD38|nullsub_33|void nullsub_33()||
|800CD3C|nullsub_34|void nullsub_34()||
|800CD50|EventC6_|signed int EventC6_(int a1)||
|800CD88|EventC7_|signed int EventC7_(int a1)||
|800CDA8|EventC8_|signed int EventC8_(int a1)||
|800CDC8|EventC9_|signed int EventC9_(int a1)||
|800CDF0|EventCA_|int EventCA_()||
|800CDF4|EventCB_|int EventCB_()||
|800CDF8|EventCC_|int EventCC_(int a1)||
|800CE28|EventCD_|int EventCD_(int a1)||
|800CE40|_MarkSomethingInMenu|int MarkSomethingInMenu()||
|800CE4C|EventEngine_Loop|int EventEngine_Loop(int a1)||
|800CF5C|EventEngine_Destructor|int EventEngine_Destructor(int a1)||
|800D00C|EqueueEventEngineCall|int EqueueEventEngineCall(int a1, char a2)||
|800D044|HandleNextEventEngineCall|int HandleNextEventEngineCall()||
|800D07C|CallMapEventEngine|int CallMapEventEngine(int a1, unsigned __int8 a2)||
|800D0B0|StartMapEventEngine|int StartMapEventEngine(int a1, unsigned __int8 a2)||
|800D140|StartBattleEventEngine|int StartBattleEventEngine(int a1)||
|800D198|MapEventEngineExists|bool MapEventEngineExists()||
|800D1B0|BattleEventEngineExists|bool BattleEventEngineExists()||
|800D1C8|DeleteEventEngines|int DeleteEventEngines()||
|800D1F8|SetEventSlotC|int SetEventSlotC(int result)||
|800D284|CallBattleQuoteTextEvents|int CallBattleQuoteTextEvents(unsigned __int16 a1)||
|800D2D0|CallSomeOtherEvents|int CallSomeOtherEvents(unsigned __int16 a1, unsigned __int16 a2)||
|800D390|StartGameOverEvent|int StartGameOverEvent()||
|800D3A4|EventEngine_CanSkipMaybe|bool EventEngine_CanSkipMaybe(int a1)||
|800D3E4|SetDialogueSkipEvBit|int SetDialogueSkipEvBit()||
|800D414|EventEngine_EnableSkip|int EventEngine_EnableSkip(int a1)||
|800D4B8|CheckEventId_|bool CheckEventId_(unsigned __int16 a1)||
|800D528|SlotQueuePush|int SlotQueuePush(int a1)||
|800D544|SlotQueuePop|int SlotQueuePop()||
|800D588|SetEventCounter|int SetEventCounter(int result)||
|800D594|GetEventCounter|int GetEventCounter()||
|800D5A0|Event00_Nop|int Event00_Nop()||
|800D5A4|Event01_End|signed int Event01_End(int a1)||
|800D670|Event02_EvBitAndIdMod|int Event02_EvBitAndIdMod(int a1)||
|800D6E4|Event03_CheckEvBitOrId|int Event03_CheckEvBitOrId(int a1)||
|800D754|Event04_CheckRandom|int Event04_CheckRandom(int a1)||
|800D77C|Event05_SetSlot|int Event05_SetSlot(int a1)||
|800D794|Event06_SlotOperation|signed int Event06_SlotOperation(int a1)||
|800D918|Event07_QueueOperation|int Event07_QueueOperation(int a1)||
|800D97C|Event08_Label|int Event08_Label()||
|800D980|Event09_Goto|int Event09_Goto(int a1)||
|800D9B8|Event0A_Call|signed int Event0A_Call(int a1)||
|800DA2C|Event0B_EnqueueCall|int Event0B_EnqueueCall(int a1)||
|800DA78|Event0C_Branch|signed int Event0C_Branch(int a1)||
|800DB00|Event0D_AsmCall|signed int Event0D_AsmCall(int a1)||
|800DB38|Event0E_STAL|signed int Event0E_STAL(int a1)||
|800DBE0|Event0F_CounterOperation|int Event0F_CounterOperation(int a1, int a2, int a3, unsigned int a4)||
|800DC98|Event10_ModifyEvBit|signed int Event10_ModifyEvBit(int a1)||
|800DD58|Event11_SetIgnoredKeys|int Event11_SetIgnoredKeys(int a1)||
|800DD74|Event12_|signed int Event12_(int a1)||
|800DDB0|Event13_|signed int Event13_(int a1)||
|800DE14|Event14_|signed int Event14_(int a1)||
|800DE74|Event15_|signed int Event15_(int a1)||
|800DED4|Event16_|int Event16_(int a1)||
|800DF20|Event17_Fade|signed int Event17_Fade(int a1)||
|800DFBC|Event18_|signed int Event18_(int a1)||
|800E070|Event19_|int Event19_(int a1)||
|800E188|Event1A_TEXTSTART|signed int Event1A_TEXTSTART(int a1)||
|800E3C8|Event1B_TEXTSHOW|signed int Event1B_TEXTSHOW(int a1)||
|800E51C|Event1C_TEXTCONT|signed int Event1C_TEXTCONT(int a1)||
|800E560|Event1D_TEXTEND|signed int Event1D_TEXTEND(int a1)||
|800E698|_WhileFace6CExists|int WhileFace6CExists(int a1)||
|800E6B4|Event1E_|signed int Event1E_(int a1)||
|800E77C|Event1F_|int Event1F_(int a1)||
|800E7C4|Event20_|int Event20_()||
|800E8CC|Event21_TextBGStuff|signed int Event21_TextBGStuff(signed int a1)||
|800F0C8|Event22_CLEAN|int Event22_CLEAN(int a1)||
|800F124|Event23_BlockGameGraphics|signed int Event23_BlockGameGraphics(int a1)||
|800F150|Event24_UnblockGameGraphics|signed int Event24_UnblockGameGraphics(int a1)||
|800F17C|Event25_LOMA|signed int Event25_LOMA(int a1)||
|800F20C|Event26_CameraControlMaybe|signed int Event26_CameraControlMaybe(int a1)||
|800F2D4|Event27_MapChange|signed int Event27_MapChange(int a1)||
|800F3EC|Event28_ChangeWeather|signed int Event28_ChangeWeather(int a1)||
|800F3FC|Event29_SetFogVision|signed int Event29_SetFogVision(int a1)||
|800F42C|Event2A_MoveToChapter|int Event2A_MoveToChapter(int a1)||
|800F50C|UNIT_GetListSize|int UNIT_GetListSize(_BYTE *a1)||
|800F528|UNIT_ShouldBeLoaded|bool UNIT_ShouldBeLoaded(unsigned __int8 *a1, unsigned __int8 a2)||
|800F5B8|LoadUnitsIdle|int LoadUnitsIdle(int a1)||
|800F698|UNITs_LoadInstant_800F698|int UNITs_LoadInstant_800F698(unsigned __int8 *a1, unsigned __int16 a2, unsigned __int8 a3)||
|800F704|UNIT_Load_800F704|int UNIT_Load_800F704(unsigned __int8 *a1, unsigned __int16 a2, char a3, unsigned __int8 a4)||
|800F914|UNIT_Filter|UnitEventStruct *UNIT_Filter(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)||
|800FB18|Event2B_|int Event2B_(int a1)||
|800FB84|Event2C_LoadUnits|signed int Event2C_LoadUnits(int a1)||
|800FC90|TryPrepareEventUnitMovement|bool TryPrepareEventUnitMovement(int a1, int a2, int a3)||
|800FCD8|GetSomeEventEngineMoveRelatedBitfield|int GetSomeEventEngineMoveRelatedBitfield(int a1, char a2)||
|800FD0C|Event2D_|int Event2D_(int a1)||
|800FD28|Event2E_CheckAt|int Event2E_CheckAt(int a1)||
|800FD8C|Event2F_MoveUnit|signed int Event2F_MoveUnit(int a1)||
|800FF24|Event30_ENUN|signed int Event30_ENUN(int a1)||
|800FF68|Event31_DisplayEffectRange|signed int Event31_DisplayEffectRange(int a1)||
|800FFF8|Event32_SpawnSingleUnit|int Event32_SpawnSingleUnit(int a1)||
|8010110|Event33_CheckUnitVarious|signed int Event33_CheckUnitVarious(int a1)||
|8010298|Event34_MessWithUnitState|signed int Event34_MessWithUnitState(int a1)||
|80104B0|Event35_UnitClassChanging|int Event35_UnitClassChanging(int a1)||
|801053C|Event36_CheckInArea|int Event36_CheckInArea(int a1)||
|80105A4|Event37_GiveItem|signed int Event37_GiveItem(int a1)||
|8010618|Event38_ChangeActiveUnit|signed int Event38_ChangeActiveUnit(int a1)||
|8010644|Event39_CHAI|int Event39_CHAI(int a1)||
|80106E4|Event3A_|signed int Event3A_(int a1)||
|801079C|Event3B_|signed int Event3B_(signed int a1)||
|8010850|Event3C_|int Event3C_(int a1)||
|80108AC|Event3D_|int Event3D_(int a1)||
|8010968|Event3E_PrepScreenCall|signed int Event3E_PrepScreenCall(signed int a1)||
|8010A58|Event3F_|signed int Event3F_(signed int a1)||
|8010B78|Event40_PROM|signed int Event40_PROM(signed int a1)||
|8010BEC|Event41_|signed int Event41_(int a1)||
|8010C70|Event42_|signed int Event42_(int a1)||
|8010CF0|Event43_|signed int Event43_(int a1)||
|8010D28|Event44_|signed int Event44_(int a1)||
|8010D5C|Event45_|signed int Event45_(int a1)||
|8010F38|PopupProc_GetInnerLength|int PopupProc_GetInnerLength(int a1)||
|801106C|GenSomeLongPopupText|int GenSomeLongPopupText(unsigned __int8 *a1, int a2, int a3)|Arguments: r0 = Popup Definition ptr, (r1, r2) = Text Struct Copy|
|801119C|PopupProc_InitGfx|int PopupProc_InitGfx(int a1)||
|8011210|PopupProc_PlaySound|int PopupProc_PlaySound(int a1)||
|8011254|PopupIconUpdaterLoop|int PopupIconUpdaterLoop(int a1)||
|8011270|PopupProc_Display|int PopupProc_Display(int a1)||
|80113C0|PopupProc_WaitForPress|int PopupProc_WaitForPress(int a1)||
|80113F8|LongPopup_Clear|int LongPopup_Clear(unsigned __int8 *a1)||
|8011450|SetPopupUnit|int SetPopupUnit(int result)||
|801145C|SetPopupItem|__int16 SetPopupItem(__int16 result)||
|8011468|SetPopupNumber|int SetPopupNumber(int result)||
|8011474|Popup_Create|int Popup_Create(int a1, int a2, int a3, int a4)||
|8011490|Popup_CreateExt|int Popup_CreateExt(int a1, int a2, char a3, __int16 a4, char a5, signed int a6)||
|80114DC|NewGotItemPopup|int NewGotItemPopup(int a1, __int16 a2, int a3)||
|8011524|ItemGot_DisplayLePopup|int ItemGot_DisplayLePopup(int a1)||
|8011538|ItemGot_GotLeItem|int ItemGot_GotLeItem(int a1)||
|8011554|NewItemGot|int NewItemGot(unsigned int a1, int a2, unsigned __int16 a3)||
|801159C|NewGeneralItemGot|int NewGeneralItemGot(int a1, int a2, unsigned int a3)||
|8011644|NewGoldGotPopup|int NewGoldGotPopup(int a1, int a2, int a3)||
|8011694|CreateItemStealingPopup|int CreateItemStealingPopup(__int16 a1, int a2)||
|80116E0|NewPopup_WeaponBroke|int NewPopup_WeaponBroke(__int16 a1, int a2)||
|8011704|NewPopup_WRankIncrease|int NewPopup_WRankIncrease(__int16 a1, int a2)||
|8011728|CreateNewUnitPopup|int CreateNewUnitPopup(int a1, unsigned __int8 a2)||
|8011A18|nullsub_44|void nullsub_44()||
|8011CCC|ChangeUnitAIThing|int ChangeUnitAIThing(int a1, unsigned __int8 a2, int a3)||
|8012344|GetChapterAllyUnitCount|int GetChapterAllyUnitCount()||
|8012360|InitPlayerUnitPositionsForPrepScreen|int InitPlayerUnitPositionsForPrepScreen()||
|801263C|StoreUnitWordStructs|int StoreUnitWordStructs()||
|8012678|LoadUnitWordStructs|int LoadUnitWordStructs()||
|8012EC0|String_CopyTo|int String_CopyTo(_BYTE *a1, _BYTE *a2)||
|8012EDC|CopyNoCompData|int CopyNoCompData(int a1, int a2)||
|8012F50|Decompress|int Decompress(_BYTE *a1, int a2)||
|8012F90|GetNoCompDataSize|int GetNoCompDataSize(_DWORD *a1)||
|8012FF4|RegisterObjectTileGraphics|int RegisterObjectTileGraphics(int a1, int a2, int a3, int a4)||
|8013020|CopyTileGfxForObj|int CopyTileGfxForObj(const void *src, void *dst, unsigned int tileLen, unsigned int height)||
|801344C|GetPaletteFadeBuffer|__int16 *GetPaletteFadeBuffer()||
|8013470|SetSomethingInPaletteBB_2A|int SetSomethingInPaletteBB_2A(__int16 a1)||
|8013480|SetSomethingInPaletteBB_5A|int SetSomethingInPaletteBB_5A(__int16 a1)||
|8013494|SetSomethingInPaletteBB_8A|int SetSomethingInPaletteBB_8A(__int16 a1)||
|80134A8|GetSomethingInPaletteBB_2A|int GetSomethingInPaletteBB_2A()||
|80134B4|GetSomethingInPaletteBB_5A|int GetSomethingInPaletteBB_5A()||
|80134C4|GetSomethingInPaletteBB_8A|int GetSomethingInPaletteBB_8A()||
|80134D4|ArchiveCurrentPalettes|int ArchiveCurrentPalettes()||
|8013520|ArchivePalette|int ArchivePalette(int a1)||
|8013550|WriteFadedPaletteFromArchive|int WriteFadedPaletteFromArchive(int a1, int a2, int a3, int a4)||
|8013C88|IsFadeActive|bool IsFadeActive()||
|8013CD0|StartFadeInBlack|int StartFadeInBlack(__int16 a1)||
|8013CEC|StartFadeOutBlack|int StartFadeOutBlack(__int16 a1)||
|8013D08|StartBlockingFadeInBlack|int StartBlockingFadeInBlack(__int16 a1, signed int a2)||
|8013D20|StartBlockingFadeOutBlack|int StartBlockingFadeOutBlack(__int16 a1, signed int a2)||
|8013D38|StartBlockingFadeInWhite|int StartBlockingFadeInWhite(__int16 a1, signed int a2)||
|8013D50|StartBlockingFadeOutWhite|int StartBlockingFadeOutWhite(__int16 a1, signed int a2)||
|8013D68|StartFadeInBlackMedium|int StartFadeInBlackMedium()||
|8013D74|StartFadeInBlackSlow|int StartFadeInBlackSlow()||
|8013D80|StartFadeInBlackFast|int StartFadeInBlackFast()||
|8013D8C|StartFadeOutBlackMedium|int StartFadeOutBlackMedium()||
|8013DA4|StartFadeOutBlackFast|int StartFadeOutBlackFast()||
|8013DC0|StartBlockingFadeInBlackSlow|int StartBlockingFadeInBlackSlow(signed int a1)||
|8014068|WaitForFade|int WaitForFade(int a1)||
|8014238|StartBlockingTimer|int StartBlockingTimer(signed int a1, int a2)||
|8014254|Timer_Countdown|int Timer_Countdown(int a1)||
|8014334|String_FromNumber|int String_FromNumber(int number, char *out)||
|80143D8|SomeDrawTextCentered|TextStruct *SomeDrawTextCentered(_WORD *a1, char a2, int a3, unsigned __int8 *a4)||
|801443C|SomeDrawTextInlineAutoWidth|TextStruct *SomeDrawTextInlineAutoWidth(_WORD *a1, char a2, unsigned __int8 *a3)||
|8014480|DeleteAllPaletteAnimator|int DeleteAllPaletteAnimator()||
|8014490|StartPaletteAnimator|int StartPaletteAnimator(int a1, __int16 a2, int a3, __int16 a4, signed int a5)||
|80144E4|StartPaletteAnimator_|int StartPaletteAnimator_(int a1, __int16 a2, int a3, __int16 a4, signed int a5)||
|801487C|FutureCall2_Loop|int FutureCall2_Loop(int a1)||
|80148A0|FutureCall_Loop|int FutureCall_Loop(_DWORD *a1)||
|80148C8|SetupFutureCall2|int SetupFutureCall2(int a1, int a2)||
|80148E4|SetupFutureCall|int SetupFutureCall(int a1, int a2, int a3)||
|8014B00|RerangeSomething|int RerangeSomething(signed int a1)||
|8014B28|PlaySpacialSoundMaybe|int PlaySpacialSoundMaybe(int a1, signed int a2)||
|80152A4|OnVBlankMain|int OnVBlankMain()||
|80152F4|OnGameLoopMain|int OnGameLoopMain()||
|8015360|LockGameLogic|int LockGameLogic()||
|8015370|UnlockGameLogic|int UnlockGameLogic()||
|8015380|GetGameLogicLock|int GetGameLogicLock()||
|801538C|SwitchGameplayPhase|int SwitchGameplayPhase()||
|80153D4|MapMain_CallBeginningEvent|int MapMain_CallBeginningEvent()||
|8015410|MapMain_SwitchPhases|bool MapMain_SwitchPhases()||
|8015434|MapMain_ThisProbablyUsedToBeEventRelatedInEarlierGames|signed int MapMain_ThisProbablyUsedToBeEventRelatedInEarlierGames()||
|8015450|MapMain_StartPhaseController|int MapMain_StartPhaseController(signed int a1)||
|80154A4|MapMain_StartPlayerPhaseAndApplyAction|int MapMain_StartPlayerPhaseAndApplyAction(signed int a1)||
|80154C8|MapMain_UpdateTraps|signed int MapMain_UpdateTraps(signed int a1)||
|80154F4|MapMain_Suspend|int MapMain_Suspend()||
|801550C|MapMain_StartIntroFx|int MapMain_StartIntroFx(signed int a1)||
|8015544|MapMain_DeployEveryone|int MapMain_DeployEveryone()||
|8015588|GotoChapterWithoutSave|int GotoChapterWithoutSave(char a1)||
|80155C4|MapMain_ChapterSwitch|int MapMain_ChapterSwitch()||
|8015608|SetupBackgroundForWeatherMaybe|int SetupBackgroundForWeatherMaybe()||
|8015680|LoadObjUIGfx|int LoadObjUIGfx()||
|80156F4|LoadGameCoreGfx|int LoadGameCoreGfx()||
|8015714|HandleCursorMovement|int HandleCursorMovement(int a1)||
|8015838|MoveCameraByStepMaybe|int MoveCameraByStepMaybe(__int16 a1)||
|80159B8|GetSomeAdjustedCameraX|int GetSomeAdjustedCameraX(int a1)||
|80159FC|GetSomeAdjustedCameraY|int GetSomeAdjustedCameraY(int a1)||
|8015A98|DisplayCursor|int DisplayCursor(int a1, int a2, int a3)||
|8015BBC|SetCursorMapPosition|int SetCursorMapPosition(int a1, __int16 a2)||
|8015C1C|Init6C_GENS|int Init6C_GENS(int a1)||
|8015CB0|Loop6C_GENS|int Loop6C_GENS(int a1)||
|8015D30|StoreAdjustedCameraPositions|int StoreAdjustedCameraPositions(int a1, int a2, _DWORD *a3, _DWORD *a4)||
|8015E0C|EnsureCameraOntoPosition|signed int EnsureCameraOntoPosition(signed int a1, int a2, int a3)||
|8015E9C|ShouldMoveCameraPosSomething|bool ShouldMoveCameraPosSomething(int a1, int a2)||
|8015FC8|GetCurrentMapMusicIndex|int GetCurrentMapMusicIndex()||
|80160D0|UpdatePlayMapMusic|int UpdatePlayMapMusic()||
|801618C|GetItemStringWithArticle|int GetItemStringWithArticle(int a1, unsigned __int8 a2)||
|80163F0|GetItemHealthBonus|int GetItemHealthBonus(int a1)||
|8016420|GetItemPowerBonus|int GetItemPowerBonus(int a1)||
|8016450|GetItemSkillBonus|int GetItemSkillBonus(int a1)||
|8016480|GetItemSpeedBonus|int GetItemSpeedBonus(int a1)||
|80164B0|GetItemDefenseBonus|int GetItemDefenseBonus(int a1)||
|80164E0|GetItemResistanceBonus|int GetItemResistanceBonus(int a1)||
|8016510|GetItemLuckBonus|int GetItemLuckBonus(int a1)||
|8016540|MakeItem|int MakeItem(unsigned __int8 a1)||
|8016574|CanUnitWieldWeapon|signed int CanUnitWieldWeapon(_DWORD *a1, int a2)||
|8016750|CanUnitUseWeapon|int CanUnitUseWeapon(_DWORD *a1, int a2)||
|80167A4|CanUnitWieldStaff|signed int CanUnitWieldStaff(int a1, int a2)||
|8016800|CanUnitUseStaff|int CanUnitUseStaff(int a1, int a2)||
|8016848|DrawItemMenuCommand|int DrawItemMenuCommand(struct TextStruct *text, __int16 item, int grayed, __int16 *bgOut)||
|80169A8|DrawTextAndIconForItem|int DrawTextAndIconForItem(int a1, int a2, _WORD *a3)||
|8016AEC|GetItemAfterUse|int GetItemAfterUse(int a1)||
|8016B28|GetUnitEquippedItem|int GetUnitEquippedItem(_DWORD *a1)||
|8016B58|GetUnitEquippedItemSlot|signed int GetUnitEquippedItemSlot(_DWORD *a1)||
|8016B8C|IsItemCoveringRange|bool IsItemCoveringRange(unsigned __int8 a1, int a2)||
|8016BC0|EquipUnitItemSlot|int EquipUnitItemSlot(int a1, int a2)||
|8016BEC|IsWeaponEffectiveAgainst|signed int IsWeaponEffectiveAgainst(unsigned __int8 a1, int a2)||
|8016C88|IsSlayerApplied|signed int IsSlayerApplied(int a1, int a2)||
|8016CC0|GetItemRangeString|char *GetItemRangeString(unsigned __int8 a1)||
|8016D5C|GetWRankLevel|signed int GetWRankLevel(signed int a1)||
|8016D94|GetItemWRankLevelString|char *GetItemWRankLevelString(unsigned __int8 a1)||
|8016DF8|GetWRankText|int GetWRankText(signed int a1)||
|8016E20|GetWTypeString|char *GetWTypeString(int a1)||
|8016E50|GetWRankBarData|int GetWRankBarData(signed int a1, _DWORD *a2, signed int *a3)||
|8016EC8|IsItemDanceRing|bool IsItemDanceRing(unsigned __int8 a1)||
|8016EE4|IsItemUsable|int IsItemUsable(int a1, int a2)||
|8016F7C|CanUnitUse|int CanUnitUse(_DWORD *a1, unsigned __int8 a2)||
|8016FB8|GetItemHealAmount|signed int GetItemHealAmount(int a1, unsigned __int8 a2)||
|801702C|GetUnitItemSlot|signed int GetUnitItemSlot(int a1, int a2)||
|8017054|IsItemStealable|signed int IsItemStealable(int a1)||
|8017080|IsItemHammernable|signed int IsItemHammernable(int a1)||
|80170D4|GetWeaponRangeMask|signed int GetWeaponRangeMask(unsigned __int8 a1)||
|80171E8|GetUnitRangeMask|signed int GetUnitRangeMask(int a1, int a2)||
|801723C|GetUnitStaffRangeMask_0|signed int GetUnitStaffRangeMask_0(int a1, int a2)||
|80172F8|GetUnitStaffRangeMask|signed int GetUnitStaffRangeMask(int a1)||
|801737C|GetConvoyTotalGoldValue|int GetConvoyTotalGoldValue()||
|80173D0|GetUnitsTotalHeldGoldValue|int GetUnitsTotalHeldGoldValue()||
|8017450|GetPartyTotalGoldValue|int GetPartyTotalGoldValue()||
|80174EC|GetItemIndex|int GetItemIndex(int result)||
|80174F4|GetItemNameString|char *GetItemNameString(unsigned __int8 a1)||
|8017518|GetItemDescStringIndex|int GetItemDescStringIndex(unsigned __int8 a1)||
|8017530|GetItemUseDescTextIndex|int GetItemUseDescTextIndex(unsigned __int8 a1)||
|8017548|GetItemWType|signed int GetItemWType(int a1)||
|801756C|GetItemAttributes|int GetItemAttributes(unsigned __int8 a1)||
|8017584|GetItemUses|signed int GetItemUses(int a1)||
|80175B0|GetItemMaxUses|signed int GetItemMaxUses(unsigned __int8 a1)||
|80175DC|GetItemMight|int GetItemMight(unsigned __int8 a1)||
|80175F4|GetItemHit|int GetItemHit(unsigned __int8 a1)||
|801760C|GetItemWeight|int GetItemWeight(unsigned __int8 a1)||
|8017624|GetItemCrit|int GetItemCrit(unsigned __int8 a1)||
|801763C|GetItemCost|int GetItemCost(int a1)||
|801766C|GetItemMinRange|unsigned int GetItemMinRange(unsigned __int8 a1)||
|8017684|GetItemMaxRange|int GetItemMaxRange(unsigned __int8 a1)||
|80176A0|GetItemRange|int GetItemRange(unsigned __int8 a1)||
|80176B8|GetItemWRank|int GetItemWRank(unsigned __int8 a1)||
|80176D0|GetItemEffectivenessPtr|int GetItemEffectivenessPtr(unsigned __int8 a1)||
|80176E8|GetItemStatBonuses|int GetItemStatBonuses(unsigned __int8 a1)||
|8017700|GetItemIconId|signed int GetItemIconId(int a1)||
|8017724|GetItemWeaponEffect|int GetItemWeaponEffect(unsigned __int8 a1)||
|801773C|GetItemUseEffect|int GetItemUseEffect(unsigned __int8 a1)||
|8017754|GetItemCostPerUse|int GetItemCostPerUse(unsigned __int8 a1)||
|801776C|GetItemMaxCost|int GetItemMaxCost(unsigned __int8 a1)||
|8017798|GetItemWExp|int GetItemWExp(unsigned __int8 a1)||
|80177B0|GetItemData|ROMItemEntry *GetItemData(int a1)||
|80177C4|ClearUnits|int ClearUnits()||
|80177F4|ClearUnit|int ClearUnit(int a1)||
|801781C|CopyUnit|int CopyUnit(void *src, void *dest)||
|8017838|GetNextFreeUnit|int GetNextFreeUnit(int a1)||
|8017870|GetNextFreePlayerUnit|int GetNextFreePlayerUnit(unsigned __int8 *a1)||
|80178A8|GetUnitFogViewRange|int GetUnitFogViewRange(int a1)||
|80178D8|SetUnitNewStatus|int SetUnitNewStatus(int a1, int a2)||
|80178F4|SetUnitStatus|_BYTE *SetUnitStatus(int a1, char a2, char a3)||
|8017904|GetUnitSMSIndex|signed int GetUnitSMSIndex(int a1)||
|8017948|UnitAddItem|signed int UnitAddItem(int a1, __int16 a2)||
|801796C|ClearUnitInventory|int ClearUnitInventory(int a1)||
|8017984|RemoveUnitBlankItems|int RemoveUnitBlankItems(int a1)||
|80179D8|GetUnitItemCount|int GetUnitItemCount(int a1)||
|80179F8|UnitHasItem|signed int UnitHasItem(int a1, int a2)||
|8017A34|LoadUnits|int LoadUnits(_BYTE *a1)||
|8017A8C|HasClassWRank|bool HasClassWRank(unsigned __int8 a1, unsigned __int8 a2)||
|8017AC4|LoadUnit|_DWORD *LoadUnit(int a1)||
|8017D3C|PopulateUnitFromDefinition|int PopulateUnitFromDefinition(int a1, unsigned __int8 *a2)||
|8017DF8|CharFillInventoryFromCode|int CharFillInventoryFromCode(int a1, int a2)||
|8017E34|LoadUnitStats|int LoadUnitStats(int a1, _BYTE *a2)||
|8017EBC|FixROMUnitStructPtr|int FixROMUnitStructPtr(int **a1)||
|8017EF4|InitUnitSupports|int InitUnitSupports(int a1)||
|8017F20|AutolevelUnitWeaponRanks|int AutolevelUnitWeaponRanks(_DWORD *a1, int a2)||
|8017FC4|IncreaseUnitStatsByLevelCount|int IncreaseUnitStatsByLevelCount(int a1, int a2, int a3)||
|8018064|RecomputeUnitStatsForLevelPenalty|int RecomputeUnitStatsForLevelPenalty(int a1, int a2, int a3)||
|80180CC|ApplyBonusLevels|int ApplyBonusLevels(int a1, int a2)||
|8018120|AutolevelUnit|int AutolevelUnit(_DWORD *a1)||
|8018160|AutolevelRealistic|int AutolevelRealistic(char *a1)||
|80181C8|EnsureNoUnitStatCapOverflow|int EnsureNoUnitStatCapOverflow(int a1)||
|801829C|GetUnitByCharId|int GetUnitByCharId(int a1)||
|80182D8|GetUnitByCharIdAndAllegiance|int GetUnitByCharIdAndAllegiance(int a1, int a2)||
|801831C|CanUnitRescue|signed int CanUnitRescue(int a1, int a2)||
|801834C|UnitRescue|int UnitRescue(int a1, int a2)||
|8018370|UnitDrop|int UnitDrop(int a1, char a2, char a3)||
|80183C8|UnitGive|int UnitGive(int a1, int a2)||
|80183FC|UnitKill|int UnitKill(int a1)||
|8018430|ChangeUnitAllegiance|int ChangeUnitAllegiance(void *a1, int a2)||
|801849C|ApplyUnitMovement|int ApplyUnitMovement(int a1)||
|80184E0|GetUnitDropLocation|int GetUnitDropLocation(int a1, int *a2, int *a3)||
|801865C|SetupActiveUnit|int SetupActiveUnit(_BYTE *a1)||
|80186D4|SetActiveUnit|int SetActiveUnit(_BYTE *a1)||
|8018740|MoveActiveUnit|int MoveActiveUnit(char a1, char a2)||
|80187C0|CleanupUnitStatesForPhaseSwitch|int CleanupUnitStatesForPhaseSwitch()||
|8018858|MapMain_UpdateUnitStatus|int MapMain_UpdateUnitStatus()||
|801895C|SetAllUnitNotBackSprite|int SetAllUnitNotBackSprite()||
|8018994|UnitDecreaseItemUse|int UnitDecreaseItemUse(int a1, int a2)||
|80189B8|GetUnitAid|int GetUnitAid(int *a1)||
|8018A1C|GetUnitMagBy2Range|signed int GetUnitMagBy2Range(_DWORD *a1)||
|8018A58|UnitHasMagicRank|unsigned int UnitHasMagicRank(unsigned __int8 *a1)||
|8018B28|GetUnitUseFlags|int GetUnitUseFlags(int a1)||
|8018BA0|GetRedTeamUseFlags|int GetRedTeamUseFlags()||
|8018BD8|CanActiveUnitMove|signed int CanActiveUnitMove()||
|8018C98|IsPositionMagicSealed|signed int IsPositionMagicSealed(int a1, int a2)||
|8018D08|CanUnitNotUseMagic|bool CanUnitNotUseMagic(char *a1)||
|8018D34|GetUnitLastItem|int GetUnitLastItem(int a1)||
|8018D4C|GetUnitMovCostTable|int *GetUnitMovCostTable(int a1)||
|8018D90|GetClassStandingMapSpriteId|int GetClassStandingMapSpriteId(int a1)||
|8018DB0|MapMain_UpdatePrevDeployStates|int MapMain_UpdatePrevDeployStates()||
|8018E30|LoadUnitPrepScreenPositions|int LoadUnitPrepScreenPositions(int a1)||
|8018F48|IsUnitSlotAvailable|signed int IsUnitSlotAvailable(int a1)||
|8018FF0|GetDeployedPlayerUnitCount|int GetDeployedPlayerUnitCount()||
|80190B4|ClearCutsceneUnits|int ClearCutsceneUnits()||
|8019150|GetUnitCurrentHP|int GetUnitCurrentHP(int a1)||
|8019190|GetUnitMaxHP|int GetUnitMaxHP(_DWORD *a1)||
|80191B0|GetUnitPower|int GetUnitPower(_DWORD *a1)||
|80191D0|GetUnitSkill|int GetUnitSkill(_DWORD *a1)||
|8019210|GetUnitSpeed|int GetUnitSpeed(_DWORD *a1)||
|8019250|GetUnitDefense|int GetUnitDefense(_DWORD *a1)||
|8019270|GetUnitResistance|unsigned int GetUnitResistance(_DWORD *a1)||
|8019298|GetUnitLuck|int GetUnitLuck(_DWORD *a1)||
|80192B8|GetUnitPortraitId|signed int GetUnitPortraitId(_DWORD *a1)||
|80192F4|GetUnitMiniPortraitId|int GetUnitMiniPortraitId(_DWORD *a1)||
|8019340|GetUnitLeader|int GetUnitLeader(int a1)||
|8019368|SetUnitHP|int SetUnitHP(int a1, char a2)||
|80193A4|UnitTryHeal|int UnitTryHeal(int a1, int a2)||
|80193E8|GetUnitRescuingNameString|char *GetUnitRescuingNameString(int a1)||
|8019414|GetUnitStatusString|char *GetUnitStatusString(int a1)||
|8019430|GetUnit|int GetUnit(unsigned __int8 a1)||
|8019444|GetClassData|const void *GetClassData(int classIndex)||
|8019464|GetCharacterData|int *GetCharacterData(int a1)||
|8019484|RemoveUnitItem|int RemoveUnitItem(int a1, int a2)||
|801949C|CanUnitCrossTerrain|signed int CanUnitCrossTerrain(int a1, int a2)||
|80194BC|InitChapterMap|int InitChapterMap(int a1)||
|80197A4|SetupMapRowPointers|int SetupMapRowPointers(int a1, _DWORD *a2, int a3, int a4)||
|80197E4|ClearMapWith|int ClearMapWith(int a1, unsigned __int8 a2)||
|80198AC|LoadChapterMap|int LoadChapterMap(unsigned __int8 *a1, int a2)||
|801990C|LoadChapterMapGfx|int LoadChapterMapGfx(int a1)||
|80199A4|SyncTilesFromMapBuffer|int SyncTilesFromMapBuffer()||
|8019A64|RefreshTerrainMap|int RefreshTerrainMap()||
|8019AF4|GetSomeTerrainToChangeAtSomePosition|int GetSomeTerrainToChangeAtSomePosition(int a1, int a2)||
|8019B18|UpdateGameTileGfx|int UpdateGameTileGfx(int a1, int a2, int a3, int a4, int a5)||
|8019B88|nullsub_84|void nullsub_84()||
|8019C3C|DrawTileGraphics|int DrawTileGraphics()||
|8019CBC|InitMapChangeGraphics|int InitMapChangeGraphics()||
|8019FA0|RefreshUnitMapAndVision|int RefreshUnitMapAndVision()||
|801A174|RefreshTrapFogVision|int RefreshTrapFogVision()||
|801A1A0|RefreshTrapHiddenStates|int RefreshTrapHiddenStates()||
|801A1F4|RefreshEntityMaps|int RefreshEntityMaps()||
|801A240|GetTerrainNameString|char *GetTerrainNameString(int a1)||
|801A258|GetTerrainHealAmount|int GetTerrainHealAmount(int a1)||
|801A268|GetTerrainSomething|int GetTerrainSomething(int a1)||
|801A2EC|RevertMapChangesById|int RevertMapChangesById(int a1)||
|801A38C|FillMovementMapForUnit|int FillMovementMapForUnit(int a1)||
|801A3CC|FillMovementMapForUnitAndMovement|int FillMovementMapForUnitAndMovement(int a1, char a2)||
|801A408|MapMovementFillMovementFromUnit|int MapMovementFillMovementFromUnit(int a1)||
|801A43C|MapRangeFillMovementFromPosition|int MapRangeFillMovementFromPosition(int a1, int a2, int a3)||
|801A46C|MapMovementFillMovementFromPosition|int MapMovementFillMovementFromPosition(int a1, int a2, int a3)||
|801A49C|MapFillMovementFromUnitAt|int MapFillMovementFromUnitAt(int a1, int a2, int a3, int a4)||
|801A4CC|SetMovCostTable|int SetMovCostTable(int a1)||
|801A4EC|MapFillMovement|int MapFillMovement(int a1, int a2, char a3, int a4)||
|801A640|GenerateMovementInstructionsToPoint|void GenerateMovementInstructionsToPoint(int x, int y, char *output)||
|801A82C|ProcessUnitMovement|int ProcessUnitMovement(_DWORD *a1, int a2, int a3)||
|801A8E4|MapMovementMarkMovementEdges|int MapMovementMarkMovementEdges()||
|801A9D0|MapMarkMovementEdges|int MapMarkMovementEdges()||
|801AABC|MapAddInRange|int MapAddInRange(int a1, int a2, int a3, char a4)||
|801ABC0|MapSetInRange|int MapSetInRange(int a1, int a2, int a3, char a4)||
|801ACBC|FillMapAttackRangeForUnit|int FillMapAttackRangeForUnit(int a1)||
|801B460|FillRangeMapByRangeMask|int FillRangeMapByRangeMask(int a1, int a2)||
|801B618|FillMapStaffRangeForUnit|int FillMapStaffRangeForUnit(int a1)||
|801B810|FillRangeMapForDangerZone|int FillRangeMapForDangerZone(unsigned __int8 a1)||
|801B950|MapSetInMagicSealedRange|int MapSetInMagicSealedRange(char a1)||
|801B998|SetSubjectMap|int SetSubjectMap(int result)||
|801B9A4|MapIncInBoundedRange|int MapIncInBoundedRange(__int16 a1, __int16 a2, __int16 a3, __int16 a4)||
|801B9E4|GetCurrentMovCostTable|char *GetCurrentMovCostTable()||
|801BA58|Loop6C_WaitForSelectPress|int Loop6C_WaitForSelectPress(int a1)||
|801BB40|DebugMenu_MapIdle|int DebugMenu_MapIdle(int a1, int a2)||
|801BB54|DebugMenu_MapEffect|signed int DebugMenu_MapEffect(int a1, int a2)||
|801BCE4|DebugMapMenu_DisplayInfoDraw|int DebugMapMenu_DisplayInfoDraw(int a1, int a2)||
|801BD58|DebugMapMenu_DisplayInfoIdle|int DebugMapMenu_DisplayInfoIdle(int a1, int a2)||
|801BDA0|DebugMapMenu_DisplayInfoEffect|int DebugMapMenu_DisplayInfoEffect()||
|801BDA4|DebugMenu_WeatherDraw|int DebugMenu_WeatherDraw(int a1, int a2)||
|801BE28|DebugMenu_WeatherIdle|int DebugMenu_WeatherIdle(int a1, int a2)||
|801BEFC|DebugMenu_WeatherEffect|int DebugMenu_WeatherEffect()||
|801BF00|DebugMenu_ClearDraw|int DebugMenu_ClearDraw(int a1, int a2)||
|801BF6C|DebugMenu_ClearIdle|int DebugMenu_ClearIdle(int a1, int a2)||
|801C014|DebugMenu_ClearEffect|signed int DebugMenu_ClearEffect()||
|801C018|DebugMenu_ErasedEffect|signed int DebugMenu_ErasedEffect()||
|801C090|DEBUGONLY_Startup|int DEBUGONLY_Startup()||
|801C1DC|UNUSED_StartupDebugMenu_WorldMapEffect|signed int UNUSED_StartupDebugMenu_WorldMapEffect()||
|801C224|UNUSED_StartupDebugMenu_ChapterSelectIdle|int UNUSED_StartupDebugMenu_ChapterSelectIdle(int a1, int a2)||
|801C248|UNUSED_StartupDebugMenu_ChapterSelectEffect|signed int UNUSED_StartupDebugMenu_ChapterSelectEffect(int a1, int a2)||
|801C370|StartupDebugMenu_InitializeFileEffect|signed int StartupDebugMenu_InitializeFileEffect(int a1, int a2)||
|801C3D4|DebugMenu_FogDraw|int DebugMenu_FogDraw(int a1, int a2)||
|801C448|DebugMenu_FogIdle|int DebugMenu_FogIdle(int a1, int a2)||
|801C4B0|DebugMenu_FogEffect|int DebugMenu_FogEffect()||
|801C4B4|StartupDebugMenu_ReleaseEntryEffect|signed int StartupDebugMenu_ReleaseEntryEffect()||
|801C4C0|DebugMenu_GNightEffect|signed int DebugMenu_GNightEffect()||
|801C4D0|DebugChargeMenu_Draw|int DebugChargeMenu_Draw(int a1, int a2)||
|801C588|DebugChargeMenu_Idle|int DebugChargeMenu_Idle(int a1, int a2)||
|801C894|PlayerPhase_Suspend|int PlayerPhase_Suspend()||
|801C8AC|HandlePlayerCursorMovement|int HandlePlayerCursorMovement()||
|801C928|CanShowUnitStatScreen|bool CanShowUnitStatScreen(int a1)||
|801C940|PlayerPhase_MainIdle|int PlayerPhase_MainIdle(unsigned __int16 **a1)||
|801CB70|DisplayUnitEffectRange|int DisplayUnitEffectRange(unsigned __int8 *a1)||
|801CC1C|PlayerPhase_InitUnitMovementSelect|int PlayerPhase_InitUnitMovementSelect()||
|801CC7C|DisplayActiveUnitEffectRange|int DisplayActiveUnitEffectRange()||
|801CCB4|PlayerPhase_DisplayDangerZone|int PlayerPhase_DisplayDangerZone()||
|801CD1C|PlayerPhase_RangeDisplayIdle|int PlayerPhase_RangeDisplayIdle(unsigned __int16 **a1)||
|801CFF0|PlayerPhase_CancelAction|int PlayerPhase_CancelAction(unsigned __int16 **a1)||
|801D008|PlayerPhase_BackToMove|int PlayerPhase_BackToMove(unsigned __int16 **a1)||
|801D084|PlayerPhase_PreAction|signed int PlayerPhase_PreAction(unsigned __int16 **a1)||
|801D244|TryMakeCantoUnit|signed int TryMakeCantoUnit(unsigned __int16 **a1)||
|801D300|MaybeRunPostActionEvents|signed int MaybeRunPostActionEvents()||
|801D31C|EnsureCameraOntoActiveUnitPosition|signed int EnsureCameraOntoActiveUnitPosition(signed int a1)||
|801D470|PlayerPhase_ApplyUnitMovement|int PlayerPhase_ApplyUnitMovement(int a1)||
|801D51C|GetUnitSelectionValueThing|signed int GetUnitSelectionValueThing(int a1)||
|801D5A8|CanMoveActiveUnitTo|int CanMoveActiveUnitTo(int x, int y)||
|801D624|PlayerPhase_DisplayUnitMovement|int PlayerPhase_DisplayUnitMovement()||
|801D64C|PlayerPhase_WaitForUnitMovement|int PlayerPhase_WaitForUnitMovement(int a1)||
|801D668|PlayerPhase_ResumeRangeDisplay|int PlayerPhase_ResumeRangeDisplay(unsigned __int16 **a1)||
|801D6FC|PlayerPhase_ReloadGameGfx|int PlayerPhase_ReloadGameGfx(int a1)||
|801D70C|MakeMoveunitForActiveUnit|int MakeMoveunitForActiveUnit()||
|801D75C|ClearActiveUnit|int ClearActiveUnit(_BYTE *a1)||
|801D7E8|ASMC_801D7E8|int ASMC_801D7E8()||
|801D818|PlayerPhase_RangeDisplayIdle_ForceAPress|int PlayerPhase_RangeDisplayIdle_ForceAPress(unsigned __int16 **a1)||
|801D89C|Load6CRangeDisplaySquareGfx|int Load6CRangeDisplaySquareGfx(int a1)||
|801D8EC|Loop6C_MLVCHC|int Loop6C_MLVCHC(int a1)||
|801D92C|Setup6CRangeDisplayGfx|int Setup6CRangeDisplayGfx()||
|801D9DC|Loop6C_MoveLimitView|int Loop6C_MoveLimitView(int a1)||
|801DA60|DestructMoveLimitView|int DestructMoveLimitView(int a1)||
|801DA98|DisplayMoveRangeGraphics|int DisplayMoveRangeGraphics(__int16 a1)||
|801DACC|HideMoveRangeGraphics|int HideMoveRangeGraphics()||
|801DBA4|PlayerPhase_HandleAutoEnd|int PlayerPhase_HandleAutoEnd(unsigned __int16 **a1)||
|801DBD4|GetSomeFacingDirection|signed int GetSomeFacingDirection(int a1, int a2, int a3, int a4)||
|801DC00|NewMoveUnitForUnitBeingRescued|int NewMoveUnitForUnitBeingRescued(_DWORD *a1)||
|801DC3C|Loop6C_KOIDO|int Loop6C_KOIDO(int a1)||
|801DC7C|Make6CKOIDO|int Make6CKOIDO(_DWORD *a1, int a2, char a3, signed int a4)||
|801DCD0|Make6CKOIDOAMM|int Make6CKOIDOAMM(_DWORD *a1, int a2)||
|801DDA8|Destruct6CBMXFADE|int Destruct6CBMXFADE(int a1)||
|801DDC4|StartBMXFADE|int StartBMXFADE(char a1)||
|801DDF0|StartBlockingBMXFADE|int StartBlockingBMXFADE(char a1, signed int a2)||
|801DE18|BMXFADEExists|bool BMXFADEExists()||
|801DE30|GetPlayerStartCursorPosition|int GetPlayerStartCursorPosition(_DWORD *a1, _DWORD *a2)||
|801DE88|GetEnemyStartCursorPosition|int GetEnemyStartCursorPosition(_DWORD *a1, _DWORD *a2)||
|801DF64|ADJUSTFROMXI_MoveCameraOnSomeUnit|int ADJUSTFROMXI_MoveCameraOnSomeUnit(signed int a1)||
|801E098|HandleNewItemGetFromDrop|int HandleNewItemGetFromDrop(int a1, __int16 a2, signed int a3)||
|801E138|SendToConvoyMenu_Draw|int SendToConvoyMenu_Draw()||
|801E144|MenuCommand_DrawExtraItem|int MenuCommand_DrawExtraItem(int a1, int a2)||
|801E188|SendToConvoyMenu_NormalEffect|signed int SendToConvoyMenu_NormalEffect(int a1, int a2)||
|801E34C|FillWarpRangeMap|int FillWarpRangeMap(int a1, int a2)||
|801E684|ForceMenuItemPanel|int ForceMenuItemPanel(signed int a1, _DWORD *a2, char a3, char a4)||
|801E748|UpdateMenuItemPanel|int UpdateMenuItemPanel(signed int a1)||
|801EA54|EndMenuItemPanel|int EndMenuItemPanel()||
|801EC10|StartUnitSwapAnimation|int StartUnitSwapAnimation(signed int a1, int a2, __int16 a3, __int16 a4)||
|801EC48|UnitSwapAnimationExists|bool UnitSwapAnimationExists()||
|801F2CC|LoadPhaseIntroGraphics|int LoadPhaseIntroGraphics()||
|801F50C|ChangeActiveUnitFacing|int ChangeActiveUnitFacing(int a1, int a2)||
|801F540|GasTrapEffectGfx_Setup|int GasTrapEffectGfx_Setup(int a1)||
|801F600|StartGasTrapEffectGfxMaybe|int StartGasTrapEffectGfxMaybe(signed int a1, int a2, int a3, __int16 a4)||
|801F630|MineFireEffectGfx_Setup|int MineFireEffectGfx_Setup(int a1)||
|801F68C|NewFireTrapEffectGfx|int NewFireTrapEffectGfx(signed int a1, int a2, int a3)||
|801F6BC|NewMineTrapEffectGfx|int NewMineTrapEffectGfx(signed int a1, int a2, int a3)||
|801F844|StartLightArrowTrapGfx|int StartLightArrowTrapGfx(signed int a1, int a2)||
|801FD90|BgMoverProc_Update|int BgMoverProc_Update()||
|8021684|BeginLightRuneMapAnim|int BeginLightRuneMapAnim(signed int a1, __int16 a2, __int16 a3)||
|8022300|BeginMineMapAnim|int BeginMineMapAnim(signed int a1, int a2, int a3)||
|80225F8|MapMenuCommnd_EndEffect|signed int MapMenuCommnd_EndEffect()||
|802260C|MapMenuCommand_UnitEffect|signed int MapMenuCommand_UnitEffect()||
|8022650|MapMenuCommnd_StatusEffect|signed int MapMenuCommnd_StatusEffect()||
|80226E4|MapMenuCommnd_GuideEffect|signed int MapMenuCommnd_GuideEffect()||
|80226F8|MapMenuCommand_DangerZoneUnusedEffect|signed int MapMenuCommand_DangerZoneUnusedEffect()||
|8022738|EffectWait|signed int EffectWait()||
|8022748|GenericSelection_BackToUM|signed int GenericSelection_BackToUM()||
|802282C|GenericSelection_BackToUM_CamWait|signed int GenericSelection_BackToUM_CamWait()||
|80228A4|RescueUsability|signed int RescueUsability()||
|80228DC|RescueEffect|signed int RescueEffect()||
|80228FC|RescueSelection_OnSelect|signed int RescueSelection_OnSelect(int a1, int a2)||
|8022910|DropUsability|signed int DropUsability()||
|8022948|DropEffect|signed int DropEffect()||
|8022968|DropSelection_OnSelect|signed int DropSelection_OnSelect(int a1, char *a2)||
|802298C|TakeUsability|signed int TakeUsability()||
|80229D4|TakeEffect|signed int TakeEffect()||
|80229F4|GiveUsability|signed int GiveUsability()||
|8022A3C|GiveEffect|signed int GiveEffect()||
|8022A5C|MakeUnitRescueTransferGraphics|int MakeUnitRescueTransferGraphics(int a1, int a2)||
|8022A90|TakeSelection_OnSelect|signed int TakeSelection_OnSelect(int a1, int a2)||
|8022AE0|GiveSelection_OnSelect|signed int GiveSelection_OnSelect(int a1, int a2)||
|8022C30|DisplayUnitStandingAttackRange|int DisplayUnitStandingAttackRange()||
|8022C98|HideMoveRangeGraphicsWrapper|int HideMoveRangeGraphicsWrapper()||
|8023194|DanceCommandUsability|signed int DanceCommandUsability(int a1)||
|80232E8|ItemCommandEffect|signed int ItemCommandEffect(int a1, int a2)||
|8023350|ItemSelectMenu_TextDraw|int ItemSelectMenu_TextDraw(int a1, int a2)||
|80233D8|ItemSelectMenu_Usability|signed int ItemSelectMenu_Usability(int a1, int a2)||
|8023428|ItemSelectMenu_Effect|signed int ItemSelectMenu_Effect(int a1, int a2)||
|80234A8|nullsub_25|void nullsub_25()||
|80239CC|FillBallistaRange|int FillBallistaRange()||
|8023A54|StaffCommandUsability|signed int StaffCommandUsability()||
|8023ACC|StaffCommandEffect|signed int StaffCommandEffect(int a1, int a2)||
|8023B90|StaffItemSelect_Usability|signed int StaffItemSelect_Usability(int a1, int a2)||
|8023BC8|StaffItemSelect_Effect|signed int StaffItemSelect_Effect(int a1, int a2)||
|8023C08|StaffItemSelect_TextDraw|int StaffItemSelect_TextDraw(int a1, int a2)||
|8023C14|StaffItemSelect_OnHover|int StaffItemSelect_OnHover(int a1, int a2)||
|8023E7C|PickCommandUsability|signed int PickCommandUsability()||
|8023F64|SupplyUsability|signed int SupplyUsability(int a1)||
|80240EC|ArenaCommandUsability|signed int ArenaCommandUsability()||
|8024144|ArenaCommandEffect|signed int ArenaCommandEffect(int a1, int a2)||
|802418C|StealCommandUsability|signed int StealCommandUsability()||
|80241DC|StealCommandEffect|signed int StealCommandEffect(int a1, int a2)||
|802421C|StealTargetSelection_OnInit|int StealTargetSelection_OnInit(int a1)||
|8024304|StealItemMenuCommand_Usability|signed int StealItemMenuCommand_Usability(int a1, int a2)||
|8024348|StealItemMenuCommand_Draw|int StealItemMenuCommand_Draw(int a1, int a2)||
|802439C|StealItemMenuCommand_Effect|signed int StealItemMenuCommand_Effect(int a1, int a2)||
|802467C|RescueSelection_OnConstruction|int RescueSelection_OnConstruction(int a1)||
|802469C|RescueSelection_OnChange|int RescueSelection_OnChange(int a1, char *a2)||
|80246C0|DropSelection_OnConstruction|int DropSelection_OnConstruction(int a1)||
|8024768|TradeTargetSelection_OnInit|int TradeTargetSelection_OnInit(int a1)||
|8024884|nullsub_27|void nullsub_27()||
|80248C4|RideCommandUsability|signed int RideCommandUsability()||
|8024920|RideCommandEffect|signed int RideCommandEffect()||
|80249AC|AttackCommandUsability|signed int AttackCommandUsability()||
|8024A28|AttackBallistaCommandUsability|signed int AttackBallistaCommandUsability()||
|8024BF4|nullsub_26|void nullsub_26()||
|8024CEC|GetPhaseAbleUnitCount|int GetPhaseAbleUnitCount(int a1)||
|8024D8C|AreAllegiancesAllied|signed int AreAllegiancesAllied(char a1, char a2)||
|8024DA4|AreAllegiancesEqual|signed int AreAllegiancesEqual(char a1, char a2)||
|8024DBC|GetCurrentPhase|int GetCurrentPhase()||
|8024DD0|IsNotEnemyPhaseMaybe|int IsNotEnemyPhaseMaybe()||
|8024DE8|GetPartyGoldAmount|int GetPartyGoldAmount()||
|8024E04|SetPartyGoldAmount|int SetPartyGoldAmount(int a1)||
|8024E20|AddPartyGoldAmount|int AddPartyGoldAmount(int a1)||
|8024EAC|ForEachUnitInRange|int ForEachUnitInRange()||
|8024F18|ForEachPosInRange|int ForEachPosInRange()||
|8024F70|ForEachAdjacentUnit|int ForEachAdjacentUnit(int a1, int a2)||
|8024FA4|ForEachAdjacentPosition|int ForEachAdjacentPosition(int a1, int a2)||
|8025038|ForEachPosIn12Range|int ForEachPosIn12Range(int a1, int a2)||
|802506C|ForEachUnitInMagBy2Range|int ForEachUnitInMagBy2Range()||
|80250BC|TryAddTrapsToTargetList|int TryAddTrapsToTargetList()||
|802517C|AddUnitToTargetListIfNotAllied|int AddUnitToTargetListIfNotAllied(char *a1)||
|80251B4|MakeTargetListForWeapon|int MakeTargetListForWeapon(int a1, unsigned __int8 a2)||
|802521C|TryAddUnitToTradeTargetList|int TryAddUnitToTradeTargetList(int a1)||
|80252D0|MakeTradeTargetList|int MakeTradeTargetList(int a1)||
|8025344|TryAddUnitToRescueTargetList|int TryAddUnitToRescueTargetList(int a1)||
|80253B4|MakeRescueTargetList|int MakeRescueTargetList(int a1)||
|80253E8|TryAddToDropTargetList|int TryAddToDropTargetList(int a1, int a2)||
|8025440|MakeDropTargetList|int MakeDropTargetList(int a1)||
|8025474|TryAddRescuedUnitToTakeTargetList|int TryAddRescuedUnitToTakeTargetList(int a1)||
|80254E0|MakeTakeTargetList|int MakeTakeTargetList(int a1)||
|8025644|MakeTargetListForSupport|int MakeTargetListForSupport(int a1)||
|80256F0|AddUnitToTargetListIfAllied|int AddUnitToTargetListIfAllied(char *a1)||
|8025728|FillBallistaRangeMaybe|int FillBallistaRangeMaybe(int a1)||
|8025794|TryAddClosedDoorToTargetList|int TryAddClosedDoorToTargetList(int a1, int a2)||
|80257D4|TryAddBridgeToTargetList|int TryAddBridgeToTargetList(int a1, int a2)||
|8025814|MakeTargetListForDoorAndBridges|int MakeTargetListForDoorAndBridges(int a1, int a2)||
|80258A4|MakeTargetListForPick|int MakeTargetListForPick(int a1)||
|8025904|MakeTerrainHealTargetList|void MakeTerrainHealTargetList(int phase)||
|80259EC|MakePoisonDamageTargetList|int MakePoisonDamageTargetList(int a1)||
|8025A64|MakeGorgonEggHatchTargetList|int MakeGorgonEggHatchTargetList(int a1)||
|8025BA0|AddAsTarget_IfCanStealFrom|int AddAsTarget_IfCanStealFrom(int a1)||
|8025C00|MakeTargetListForSteal|int MakeTargetListForSteal(int a1)||
|8025C34|AddAsTarget_IfPositionCleanForSummon|int AddAsTarget_IfPositionCleanForSummon(int a1, int a2)||
|8025CA4|ListSummonTargets|int ListSummonTargets(int a1)||
|8025E28|TryAddUnitToHealTargetList|int TryAddUnitToHealTargetList(int a1)||
|8025E7C|MakeTargetListForAdjacentHeal|int MakeTargetListForAdjacentHeal(int a1)||
|8025EB0|MakeTargetListForRangedHeal|int MakeTargetListForRangedHeal(int a1)||
|8025EFC|AddToTargetListIfNotAllied|int AddToTargetListIfNotAllied(char *a1)||
|8025F44|MakeTargetListForFuckingNightmare|int MakeTargetListForFuckingNightmare(int a1)||
|8025F98|TryAddUnitToRestoreTargetList|int TryAddUnitToRestoreTargetList(int a1)||
|8025FE8|MakeTargetListForRestore|int MakeTargetListForRestore(int a1)||
|802601C|TryAddUnitToBarrierTargetList|int TryAddUnitToBarrierTargetList(int a1)||
|802606C|MakeTargetListForBarrier|int MakeTargetListForBarrier(int a1)||
|80260A0|TryAddUnitToRescueStaffTargetList|int TryAddUnitToRescueStaffTargetList(char *a1)||
|80260D8|MakeTargetListForRescueStaff|int MakeTargetListForRescueStaff(int a1)||
|8026100|TryAddUnitToSilenceTargetList|int TryAddUnitToSilenceTargetList(char *a1)||
|802614C|TryAddUnitToSleepTargetList|int TryAddUnitToSleepTargetList(char *a1)||
|8026198|TryAddUnitToBerzerkTargetList|int TryAddUnitToBerzerkTargetList(char *a1)||
|80261E4|MakeTargetListForSilence|int MakeTargetListForSilence(int a1)||
|802620C|MakeTargetListForSleep|int MakeTargetListForSleep(int a1)||
|8026234|MakeTargetListForBerserk|int MakeTargetListForBerserk(int a1)||
|802625C|TryAddUnitToWarpTargetList|int TryAddUnitToWarpTargetList(char *a1)||
|8026294|MakeTargetListForWarp|int MakeTargetListForWarp(int a1)||
|80262C8|MakeTargetListForUnlock|int MakeTargetListForUnlock(int a1)||
|80262FC|TryAddUnitToHammerneTargetList|int TryAddUnitToHammerneTargetList(char *a1)||
|8026354|MakeTargetListForHammerne|int MakeTargetListForHammerne(int a1)||
|8026388|MakeTargetListForLatona|int MakeTargetListForLatona(int a1)||
|80264F0|MakeTargetListForMine|int MakeTargetListForMine(int a1)||
|8026580|MakeTargetListForLightRune|int MakeTargetListForLightRune(int a1)||
|80265B4|TryAddUnitToDanceRingTargetList|int TryAddUnitToDanceRingTargetList(char *a1)||
|80265E4|MakeTargetListForDanceRing|int MakeTargetListForDanceRing(int a1)||
|8026628|LoadMapSpritePalettes|int LoadMapSpritePalettes()||
|8026688|SMS_Init|int SMS_Init()||
|80266F0|SMS_80266F0|int SMS_80266F0(int a1, int a2)||
|802677C|SMS_SomethingGmapUnit|int SMS_SomethingGmapUnit(int a1, int a2, int a3)||
|80267FC|SMS_RegisterUsage|int SMS_RegisterUsage(int a1)||
|80268C8|SomethingSMS_16x16_0|int SomethingSMS_16x16_0(int a1, unsigned int a2)||
|802695C|SomethingSMS_16x16|int SomethingSMS_16x16(int a1, unsigned int a2)||
|8026A38|SomethingSMS_16x32|int SomethingSMS_16x32(int a1, unsigned int a2)||
|8026B28|SomethingSMS_32x32|int SomethingSMS_32x32(int a1, unsigned int a2)||
|8026F2C|SMS_SyncDirect|int SMS_SyncDirect()||
|8026F94|SMS_SyncIndirect|int SMS_SyncIndirect()||
|802713C|GetUnitBattleMapSpritePaletteIndex|int GetUnitBattleMapSpritePaletteIndex(int a1)||
|8027168|GetUnitMapSpritePaletteIndex|signed int GetUnitMapSpritePaletteIndex(signed int result)||
|80271A0|SMS_UpdateFromGameData|int SMS_UpdateFromGameData()||
|802736C|SMS_GetNewInfoStruct|int SMS_GetNewInfoStruct(signed int a1)||
|80273A4|SMS_DisplayAllFromInfoStructs|int SMS_DisplayAllFromInfoStructs()||
|8027530|DisplayChapterTileMarker|int DisplayChapterTileMarker()||
|80275E8|DisplayUnitAdditionalBlinkingIcons|int DisplayUnitAdditionalBlinkingIcons()||
|8027A40|ResetMapSpriteHoverTimer|int ResetMapSpriteHoverTimer()||
|8027A4C|HandleMapSpriteCursorHover|int HandleMapSpriteCursorHover()||
|8027F28|SMS_DisplayOne|int SMS_DisplayOne(int a1, int a2, int a3, int a4, int a5, char a6)||
|802810C|HideUnitSMS|int HideUnitSMS(int a1)||
|8028130|ShowUnitSMS|int ShowUnitSMS(int a1)||
|8028144|GetUnitStandingSpriteDataFlagThing|int GetUnitStandingSpriteDataFlagThing(int a1)||
|80281C8|GetROMUnitSupportCount|int GetROMUnitSupportCount(int a1)||
|80281DC|GetROMUnitSupportingId|int GetROMUnitSupportingId(int a1, int a2)||
|80281F4|GetUnitSupportingUnit|int GetUnitSupportingUnit(int a1, int a2)||
|802823C|GetSupportLevelBySupportIndex|signed int GetSupportLevelBySupportIndex(int a1, int a2)||
|8028264|GetUnitTotalSupportLevels|int GetUnitTotalSupportLevels(int a1)||
|8028290|AddSupportPoints|int AddSupportPoints(int a1, int a2)||
|8028310|CanUnitSupportCommandWith|signed int CanUnitSupportCommandWith(int a1, int a2)||
|802838C|GetUnitStartingSupportValue|signed int GetUnitStartingSupportValue(int a1, int a2)||
|80283A8|GetSupportDataIdForOtherUnit|signed int GetSupportDataIdForOtherUnit(int a1, unsigned __int8 a2)||
|80283E0|ClearUnitSupports|int ClearUnitSupports(int a1)||
|8028434|ProcessSupportGains|int ProcessSupportGains()||
|802852C|GetSupportBonusEntryPtr|char *GetSupportBonusEntryPtr(char *result)||
|8028550|StoreAddedAffinityBonusesForSupportLevel|int StoreAddedAffinityBonusesForSupportLevel(_BYTE *a1, char *a2, char a3)||
|80285B0|GetUnitSupportBonuses|int GetUnitSupportBonuses(char *a1, _BYTE *a2)||
|802878C|CanUnitsStillSupportThisChapter|unsigned int CanUnitsStillSupportThisChapter(int a1, char a2)||
|80287D4|SwapUnitStats|int SwapUnitStats(int a1, int a2)||
|8028870|CanUnitUseItem|unsigned int CanUnitUseItem(int a1, int a2)||
|8028E60|ItemEffect_Call|int ItemEffect_Call(int a1, int a2)||
|8029068|IsGeneratedTargetListEmpty|bool IsGeneratedTargetListEmpty(int a1)||
|802907C|CanUseHealingItem|bool CanUseHealingItem(int a1)||
|80290A0|CanUsePureWater|bool CanUsePureWater(int a1)||
|80290B8|CanUseTorch|bool CanUseTorch(int a1)||
|80290E4|CanUseAntidote|bool CanUseAntidote(int a1)||
|80290FC|CanUseChestKey|bool CanUseChestKey(int a1)||
|8029138|CanUseDoorKey|int CanUseDoorKey(int a1)||
|802914C|CanOpenBridge|int CanOpenBridge(int a1)||
|8029160|CanUseLockpick|bool CanUseLockpick(_DWORD *a1)||
|80291A8|CanUsePromotionItem|signed int CanUsePromotionItem(int a1, int a2)||
|802940C|CanUseStatBooster|unsigned int CanUseStatBooster(int a1, unsigned __int8 a2)||
|8029504|CanUseJunaFruit|signed int CanUseJunaFruit(int a1)||
|802951C|EndItemEffectSelectionThing|int EndItemEffectSelectionThing()||
|8029550|GenericStaffSelection_OnSelect|signed int GenericStaffSelection_OnSelect(int a1, int a2)||
|8029568|PrepareTargetSelectionForRescueStaff|int PrepareTargetSelectionForRescueStaff(int a1)||
|80295A8|SetupTargetSelectionForGenericStaff|int SetupTargetSelectionForGenericStaff(int a1, int a2, int a3)||
|80295E8|WarpTargetPosSelect_Init|int WarpTargetPosSelect_Init(signed int a1)||
|802969C|WarpTargetPosSelect_Loop|int WarpTargetPosSelect_Loop(int a1)||
|80297D0|WarpTargetPosSelect_Confirm|int WarpTargetPosSelect_Confirm(signed int a1)||
|802980C|WarpTargetPosSelect_Cancel|int WarpTargetPosSelect_Cancel()||
|8029840|WarpTargetPosSelect_Destruct|int WarpTargetPosSelect_Destruct(int a1)||
|8029854|WarpTargetSelection_OnSelect|signed int WarpTargetSelection_OnSelect(int a1, int a2)||
|802987C|SetupWarpTargetSelection|int SetupWarpTargetSelection(int a1)||
|80298F0|PrepareTargetSelectionForMineAndLightRune|int PrepareTargetSelectionForMineAndLightRune(int a1, int a2, int a3)||
|8029944|HammerneTargetSelection_OnSelect|signed int HammerneTargetSelection_OnSelect(int a1, int a2)||
|80299B8|SetupHammerneUseSelection|int SetupHammerneUseSelection(int a1)||
|8029A08|HammerneTargetSelection_OnChange|int HammerneTargetSelection_OnChange(int a1, char *a2)||
|8029A2C|HammerneTargetSelection_OnInit|int HammerneTargetSelection_OnInit()||
|8029A48|nullsub_24|void nullsub_24()||
|8029B8C|PrepareTargetSelectionForHeal|int PrepareTargetSelectionForHeal(int a1)||
|8029BC8|PrepareTargetSelectionForRestoreStaff|int PrepareTargetSelectionForRestoreStaff(int a1)||
|8029CA0|PrepareTargetSelectionForOffensiveStaff|int PrepareTargetSelectionForOffensiveStaff(int a1)||
|8029D28|GenericSelection_DeleteBBAndBG|int GenericSelection_DeleteBBAndBG(int a1)||
|8029D98|TorchTargetPosSelect_Init|int TorchTargetPosSelect_Init(signed int a1)||
|8029DF0|TorchTargetSelection_Loop|int TorchTargetSelection_Loop(unsigned __int16 **a1)||
|8029ED8|NewTorchStaffSelection|int NewTorchStaffSelection()||
|8029F00|CanUnitUseItemPrepScreen|signed int CanUnitUseItemPrepScreen(int a1, int a2)||
|802A2F4|BATTLE_SyncMapFromBattle|int BATTLE_SyncMapFromBattle()||
|802A318|SimulateBattle|int SimulateBattle(int a1, int a2, int a3, int a4)||
|802A364|SimulateBattleBallista|int SimulateBattleBallista(int a1)||
|802A400|SetupBattleStructFromUnitAndWeapon|int SetupBattleStructFromUnitAndWeapon(void *src)||
|802A52C|RollRNIfBattleStarted|int RollRNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2)||
|802A558|Roll2RNIfBattleStarted|int Roll2RNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2)||
|802A584|InitBattleUnitFromUnit|int InitBattleUnitFromUnit(_BYTE *a1, _DWORD *a2)||
|802A668|CopyUnitToBattleStructRawStats|int CopyUnitToBattleStructRawStats(_BYTE *a1, _DWORD *a2)||
|802A6A0|WriteBattleStructTerrainBonuses|_BYTE *WriteBattleStructTerrainBonuses(int a1, char a2)||
|802A6DC|BattleSetupTerrainData|_BYTE *BattleSetupTerrainData(int a1)||
|802A730|SetupBattleWeaponData|int SetupBattleWeaponData(_DWORD *a1, signed int a2)||
|802A918|SetupBattleBallistaWeaponData|int SetupBattleBallistaWeaponData(int a1)||
|802A95C|FillPreBattleStats|int FillPreBattleStats(int a1, int a2)||
|802A9A8|FillBattleStats|int FillBattleStats(int a1, int a2)||
|802A9D0|BattleApplyMiscBonuses|int BattleApplyMiscBonuses(char *a1)||
|802AA44|BattleLoadDefense|int BattleLoadDefense(int a1, int a2)||
|802AAA4|LoadRawDefense|_WORD *LoadRawDefense(int a1)||
|802AABC|BattleLoadAttack|int BattleLoadAttack(int a1, int a2)||
|802AB74|BattleLoadAS|int BattleLoadAS(int a1)||
|802ABAC|BattleLoadHit|int BattleLoadHit(int a1)||
|802ABE4|BattleLoadAvoid|int BattleLoadAvoid(int a1)||
|802AC18|BattleLoadCrit|int BattleLoadCrit(int a1)||
|802AC54|BattleLoadDodge|_WORD *BattleLoadDodge(int a1)||
|802AC60|ComputeHit|int ComputeHit(int a1, int a2)||
|802AC90|ComputeCrit|int ComputeCrit(unsigned __int16 *a1, int a2)||
|802ACF8|ComputeLethalityChance|int ComputeLethalityChance(int a1, _DWORD *a2)||
|802AD54|BattleApplySRankBonuses|int BattleApplySRankBonuses(int a1)||
|802AD90|BattleComputeBuffStatus|int BattleComputeBuffStatus(int a1)||
|802ADCC|ComputeSpecialWeapons|int ComputeSpecialWeapons(int a1, int a2)||
|802AE90|ClearRounds|int ClearRounds()||
|802AED0|MakeBattle|int MakeBattle()||
|802AF7C|GetBattleUnitPointers|BattleUnitStruct *GetBattleUnitPointers(_DWORD *a1, _DWORD *a2)||
|802AF90|BattleCheckDoubling|signed int BattleCheckDoubling(int a1, _DWORD *a2)||
|802B018|MakeBattleRound|signed int MakeBattleRound(int a1, int a2)||
|802B080|GetBattleHitCount|signed int GetBattleHitCount()||
|802B094|BattleCheckBrave|signed int BattleCheckBrave(int a1)||
|802B0CC|CheckForTriangleAttack|signed int CheckForTriangleAttack(int a1, int a2)||
|802B1C4|UpdateBattleStats|int UpdateBattleStats(int a1, int a2)||
|802B1F4|RollForSureShot|int RollForSureShot(int a1)||
|802B278|RollForPierce|int RollForPierce(int a1)||
|802B2E8|RollForGreatShield|int RollForGreatShield(int a1, int a2)||
|802B38C|RollForLethality|signed int RollForLethality(int a1, int a2)||
|802B3D0|NullifyBattleDamageIfUsingStone|int NullifyBattleDamageIfUsingStone(int a1)||
|802B3EC|GenerateCurrentRoundData|int GenerateCurrentRoundData(int a1, int a2)||
|802B578|UpdateBattleTriangleAttackData|int UpdateBattleTriangleAttackData(int a1, int a2)||
|802B600|CurrentRound_ComputeWeaponEffects|int CurrentRound_ComputeWeaponEffects(int a1, int a2)||
|802B83C|MakeNextBattleHitRound|signed int MakeNextBattleHitRound(BattleUnitStruct *a1, int a2)||
|802B9A0|GetStatIncrease|int GetStatIncrease(int a1)||
|802B9C4|GetAutoleveledStat|int GetAutoleveledStat(int a1, int a2)||
|802B9F4|CanUnitNotLevelUp|bool CanUnitNotLevelUp(int a1)||
|802BA28|CheckForLevelUp|int CheckForLevelUp(int a1)||
|802BF24|CheckForLevelUpCaps|int CheckForLevelUpCaps(int a1, char *a2)||
|802C028|SaveUnitsFromBattle|int SaveUnitsFromBattle()||
|802C0B4|GetBattleNewWExp|signed int GetBattleNewWExp(int a1)||
|802C1B0|BattleUnit_DidWRankGoUp|unsigned int BattleUnit_DidWRankGoUp(int a1)||
|802C1EC|UpdateUnitFromBattleUnit|int UpdateUnitFromBattleUnit(_BYTE *a1, int a2)||
|802C300|UpdateBallistaUsesFromBattle|int UpdateBallistaUsesFromBattle()||
|802C334|NullSomeStuff|int NullSomeStuff()||
|802C344|GetUnitEffectiveLevel|int GetUnitEffectiveLevel(int a1)||
|802C398|GetUnitEffectivePowerLevel|int GetUnitEffectivePowerLevel(int a1)||
|802C534|ComputeExpFromBattle|signed int ComputeExpFromBattle(int a1, _DWORD *a2)||
|802C5B8|HandleItemExpGain|int HandleItemExpGain()||
|802C638|GetBattleUnitStaffExp|signed int GetBattleUnitStaffExp(int a1)||
|802C6A0|ActiveBattleUnitAdd10Exp|int ActiveBattleUnitAdd10Exp()||
|802C6EC|SetupBattleUnitEquippedWeapon|int SetupBattleUnitEquippedWeapon(int a1)||
|802C76C|BattleReverseWTriangeEffect|int BattleReverseWTriangeEffect(int a1, int a2)||
|802C7C0|BattleApplyWeaponTriangle|int BattleApplyWeaponTriangle(int a1, unsigned __int8 *a2)||
|802C844|DoSomeBattleWeaponStuff|int DoSomeBattleWeaponStuff()||
|802C8C4|MakeSnagBattleTarget|int MakeSnagBattleTarget()||
|802C948|FillSnagBattleStats|int FillSnagBattleStats()||
|802C984|SaveSnagWallFromBattle|int SaveSnagWallFromBattle(int a1)||
|802CA14|BeginBattleAnimations|int BeginBattleAnimations()||
|802CAF8|nullsub_11|void nullsub_11()||
|802CB24|SetupSubjectBattleUnitForStaff|int SetupSubjectBattleUnitForStaff(_DWORD *a1, int a2)||
|802CBC8|SetupTargetBattleUnitForStaff|int SetupTargetBattleUnitForStaff(_DWORD *a1)||
|802CC1C|UpdateActiveUnitFromBattle|int UpdateActiveUnitFromBattle()||
|802CC38|FinishUp10ExpBattle|int FinishUp10ExpBattle(signed int a1)||
|802CC54|FinishUpItemBattle|int FinishUpItemBattle(signed int a1)||
|802CCDC|GetStaffAccuracy|int GetStaffAccuracy(_DWORD *a1, int a2)||
|802CE88|IsCurrentBattleTriangleAttack|unsigned int IsCurrentBattleTriangleAttack()||
|802CE9C|BattleUnit_DidWeaponBreak|int BattleUnit_DidWeaponBreak(int a1)||
|802CEC8|CurrentRound_ComputeDamage|int CurrentRound_ComputeDamage(int a1)||
|802D2E0|TradeMenu_802D2E0|int TradeMenu_802D2E0(unsigned __int16 ***parent)||
|802D474|TradeMenu_InitTextHandles|int TradeMenu_InitTextHandles()||
|802D4A8|TradeMenu_RefreshItemText|int TradeMenu_RefreshItemText(int a1)||
|802D794|TradeMenu_InitGraphics|int TradeMenu_InitGraphics(int a1)||
|802D820|TradeMenu_802D820|int TradeMenu_802D820(int a1)||
|802D834|TradeMenu_802D834|int TradeMenu_802D834(signed int a1)||
|802D918|TradeMenu_802D918|int TradeMenu_802D918(_BYTE *a1)||
|802D980|TradeMenu_802D980|int TradeMenu_802D980(unsigned __int8 *a1)||
|802DAAC|TradeMenu_802DAAC|int TradeMenu_802DAAC(_BYTE *a1)||
|802DAFC|TradeMenu_802DAFC|signed int TradeMenu_802DAFC(int a1)||
|802DB48|TradeMenu_802DB48|int TradeMenu_802DB48()||
|802DD6C|StartTradeMenu|int StartTradeMenu(int a1, int a2)||
|802E140|TradeMenu_802E140|int TradeMenu_802E140(int a1)||
|802E1C8|ResetTraps|int ResetTraps()||
|802E1F0|GetTrapAt|TrapStruct *GetTrapAt(int a1, int a2)||
|802E24C|GetSpecificTrapAt|TrapStruct *GetSpecificTrapAt(int a1, int a2, int a3)||
|802E2B8|AddTrap|TrapStruct *AddTrap(char a1, char a2, char a3, char a4)||
|802E2E0|AddTrapExt|TrapStruct *AddTrapExt(char a1, char a2, char a3, char a4, char a5, char a6, char a7)||
|802E2FC|RemoveTrap|int RemoveTrap(int result)||
|802E314|AddFireTrap|int AddFireTrap(char a1, char a2, char a3, char a4)||
|802E330|AddGasTrap|int AddGasTrap(char a1, char a2, char a3, char a4, char a5)||
|802E350|AddArrowTrap|int AddArrowTrap(char a1, char a2, char a3)||
|802E388|AddTrap8|int AddTrap8(char a1, char a2)||
|802E398|AddTrap9|int AddTrap9(char a1, char a2, char a3)||
|802E3A8|AddSnagsAndWalls|int AddSnagsAndWalls()||
|802E430|ApplyTrapMapChanges|int ApplyTrapMapChanges()||
|802E470|UpdateAllLightRunes|int UpdateAllLightRunes()||
|802E4AC|GetTrapExt1At|int GetTrapExt1At(int a1, int a2)||
|802E4F4|GetMapChangesPointerById|char *GetMapChangesPointerById(int a1)||
|802E530|GetMapChangesIdAt|signed int GetMapChangesIdAt(int a1, int a2)||
|802E58C|ApplyMapChangesById|int ApplyMapChangesById(int a1)||
|802E5F8|AddMapChange|int AddMapChange(char a1)||
|802E60C|RemoveMapChange|int RemoveMapChange(int a1)||
|802E638|AreMapChangeTriggered|signed int AreMapChangeTriggered(int a1)||
|802E660|HideIfUnderRoof|int HideIfUnderRoof(int a1)||
|802E690|UpdateUnitsUnderRoof|int UpdateUnitsUnderRoof()||
|802E6F0|AddToTargetListFromPos|int AddToTargetListFromPos(int a1, int a2, int a3)||
|802E710|AddArrowTrapTargetsToTargetList|int AddArrowTrapTargetsToTargetList(int a1, int a2, int a3)||
|802E83C|MakeTargetListForTurnTrapDamage|int MakeTargetListForTurnTrapDamage()||
|802E9A8|CountDownTraps|int CountDownTraps()||
|802E9D0|ResetCounterForCountedDownTraps|int ResetCounterForCountedDownTraps()||
|802EA58|AddLightRune|TrapStruct *AddLightRune(int a1, int a2)||
|802EA90|RemoveLightRune|int RemoveLightRune(unsigned __int8 *a1)||
|802EAC0|HandleTrapDecay|int HandleTrapDecay()||
|802EB10|BattleSomethingTrapChangeTerrain|int BattleSomethingTrapChangeTerrain()||
|802EB50|NullAllLightRunesTerrain|int NullAllLightRunesTerrain()||
|802EB8C|GetTrap|TrapStruct *GetTrap(int a1)||
|802EB98|ExecStandardHeal|int ExecStandardHeal(signed int a1)||
|802EC20|ExecRestore|int ExecRestore(signed int a1)||
|802ECD0|GetRescueStaffeePosition|int GetRescueStaffeePosition(int a1, int a2, int *a3, int *a4)||
|802EEF8|ExecRescueStaff|int ExecRescueStaff(signed int a1)||
|802EFAC|ExecWarpStaff|int ExecWarpStaff(signed int a1)||
|802F010|ExecStatusStaff|int ExecStatusStaff(signed int a1)||
|802F154|ExecFortify|int ExecFortify(signed int a1)||
|802F274|ExecUnlock|int ExecUnlock(signed int a1)||
|802F2B4|ExecHammerne|int ExecHammerne(signed int a1)||
|802F30C|ExecLatona|int ExecLatona(signed int a1)||
|802F380|ExecSomeSelfHeal|int ExecSomeSelfHeal(signed int a1, int a2)||
|802F808|ApplyStatBoosterAndGetMessageId|signed int ApplyStatBoosterAndGetMessageId(int a1, int a2)||
|802F914|ExecStatBooster|int ExecStatBooster(int a1)||
|802FA4C|ExecItemMine|int ExecItemMine(signed int a1)||
|802FB88|ExecTorchStaff|int ExecTorchStaff(signed int a1)||
|802FC48|ActionStaffDoorChestUseItem|int ActionStaffDoorChestUseItem(signed int a1)||
|802FFB4|ActionPick|int ActionPick()||
|80300F4|SetupGameVBlankProc_TileAnimations|int SetupGameVBlankProc_TileAnimations(int a1)||
|8030138|GameVBlankProc_Destructor|int GameVBlankProc_Destructor()||
|8030144|GameVBlankProc_Loop|int GameVBlankProc_Loop(unsigned __int16 **a1)||
|8030150|StartGameVBlankProc|int StartGameVBlankProc()||
|8030174|EndGameVBlankProc|int EndGameVBlankProc()||
|8030184|LockGameGraphicsLogic|int LockGameGraphicsLogic()||
|80301B8|UnlockGameGraphicsLogic|int UnlockGameGraphicsLogic()||
|80301F4|SetupOAMSpliceForWeather|int SetupOAMSpliceForWeather(int a1)||
|8030710|nullsub_12|void nullsub_12()||
|8030B34|SetupWeatherGraphics_Maybe|int SetupWeatherGraphics_Maybe()||
|8030BA4|UpdateWeatherGraphics|int UpdateWeatherGraphics()||
|8030C7C|SetupWeather|int SetupWeather(int a1)||
|8030C94|GetTextSpeed|int GetTextSpeed()||
|8030CF4|InitClearChapterState|int InitClearChapterState(int a1, char a2)||
|8030DD8|ResetGameState|int ResetGameState()||
|8030E04|StartChapter|int StartChapter(int a1)||
|8030FE4|GameControl_8030FE4|int GameControl_8030FE4(int a1)||
|8031178|LoadGameCoreGfx2|int LoadGameCoreGfx2()||
|80311A8|ReloadGameCoreGraphics|int ReloadGameCoreGraphics()||
|80311BC|StartMapMain|int StartMapMain(int a1)||
|80311F0|EndBMAPMAIN|int EndBMAPMAIN()||
|8031214|ChapterEndUnitCleanup|int ChapterEndUnitCleanup()||
|8031300|MapMain_ResumeFromPhaseIdle|int MapMain_ResumeFromPhaseIdle(unsigned __int16 **a1)||
|803133C|MapMain_ResumeFromAction|int MapMain_ResumeFromAction(unsigned __int16 **a1)||
|80313BC|MapMain_ResumeFromBerserkPhase|int MapMain_ResumeFromBerserkPhase(unsigned __int16 **a1)||
|80313F8|MapMain_ResumeFromArena|int MapMain_ResumeFromArena(unsigned __int16 **a1)||
|8031474|MapMain_ResumeFromPhaseSwitch|int MapMain_ResumeFromPhaseSwitch(unsigned __int16 **a1)||
|80314E4|GetTacticianNameString|char *GetTacticianNameString()||
|80314EC|SetTacticianName|int SetTacticianName(int a1)||
|8031500|GetConvoyItemArray|__int16 *GetConvoyItemArray()||
|8031508|ClearConvoyItems|int ClearConvoyItems()||
|803152C|ShrinkConvoyItemList|int ShrinkConvoyItemList()||
|8031570|GetConvoyItemCount|int GetConvoyItemCount()||
|8031594|AddItemToConvoy|signed int AddItemToConvoy(__int16 a1)||
|80315E4|GetConvoyItemSlot|signed int GetConvoyItemSlot(int a1)||
|803161C|HasConvoyAccess|signed int HasConvoyAccess()||
|80316C4|InitUnitStack|signed int InitUnitStack(int a1)||
|80316E0|PushUnit|int PushUnit(_BYTE *a1)||
|8031714|LoadPlayerUnitsFromUnitStack|int LoadPlayerUnitsFromUnitStack()||
|8031754|LoadPlayerUnitsFromUnitStack2|int LoadPlayerUnitsFromUnitStack2()||
|8031794|PrepareArenaStruct|int PrepareArenaStruct(int a1)||
|8031874|PrepareArena|int PrepareArena(int a1)||
|8031890|PrepareArena2|int PrepareArena2(int a1)||
|80318B4|GetUnitBestWRankType|signed int GetUnitBestWRankType(int a1)||
|80318E0|GetClassBestWRankType|signed int GetClassBestWRankType(int a1)||
|80319D8|IsWeaponMagic|signed int IsWeaponMagic(signed int result)||
|80319F8|GetNearLevel|int GetNearLevel(int a1)||
|8031A14|GetUnitArenaWeight|int GetUnitArenaWeight(_DWORD *a1, int a2)||
|8031A84|LoadArenaOpponentStruct|int LoadArenaOpponentStruct()||
|8031B70|LoadArenaWeapons|int LoadArenaWeapons()||
|8031BC0|GetArenaBetterItem|void *GetArenaBetterItem(unsigned __int16 a1)||
|8031C10|PrepareBalancedArenaFight|signed int PrepareBalancedArenaFight()||
|8031D58|AdjustArenaOpponentPower|signed int AdjustArenaOpponentPower()||
|8031F50|CouldUnitUseAnyWeapon|bool CouldUnitUseAnyWeapon(int a1)||
|8031FEC|StoreRNStateToActionStruct|int StoreRNStateToActionStruct()||
|8031FFC|LoadRNStateFromActionStruct|int LoadRNStateFromActionStruct()||
|803200C|ApplyUnitAction|signed int ApplyUnitAction(signed int a1)||
|8032164|ActionRescue|int ActionRescue(signed int a1)||
|80321E0|ActionDrop|int ActionDrop(signed int a1)||
|8032270|ActionVisitAndSieze|int ActionVisitAndSieze()||
|803229C|ActionCombat|int ActionCombat(signed int a1)||
|8032344|ActionArena|int ActionArena(signed int a1)||
|8032358|ActionDance|int ActionDance(signed int a1)||
|80323A8|ActionTalk|int ActionTalk()||
|80323D4|ActionSupport|int ActionSupport()||
|803247C|ActionSteal|int ActionSteal(signed int a1)||
|8032554|ActionSummon|int ActionSummon(signed int a1)||
|8032580|ActionSummonDK|int ActionSummonDK(signed int a1)||
|80325AC|SpriteJumpAnimation_Loop|int SpriteJumpAnimation_Loop(signed __int16 *a1)||
|8032658|SpriteJumpAnimation_ExecAnyTrap|int SpriteJumpAnimation_ExecAnyTrap(int a1)||
|8032664|SpriteJumpAnimation_Cleanup|int SpriteJumpAnimation_Cleanup()||
|8032674|DropRescuedUnitIfDead|int DropRescuedUnitIfDead(signed int a1, int a2)||
|8032728|KillUnitIfDefeatedBy|int KillUnitIfDefeatedBy(int a1, int a2)||
|8032750|KillUnitIfNoHealth|int KillUnitIfNoHealth(int a1)||
|8032774|BATTLE_GOTO1_IfNobodyIsDead|int BATTLE_GOTO1_IfNobodyIsDead(unsigned __int16 **a1)||
|80327B4|DidUnitDie|bool DidUnitDie(int a1)||
|80327C8|BATTLE_ProbablyMakesTheDeadUnitDissapear|int BATTLE_ProbablyMakesTheDeadUnitDissapear(int a1)||
|8032860|BATTLE_DeleteLinkedMOVEUNIT|int BATTLE_DeleteLinkedMOVEUNIT(int a1)||
|803286C|BATTLE_HandleUnitDeaths|int BATTLE_HandleUnitDeaths(signed int a1)||
|80328D0|BATTLE_HandleItemDrop|signed int BATTLE_HandleItemDrop(unsigned int a1)||
|80329A0|BATTLE_HandleActiveUnitDeath|int BATTLE_HandleActiveUnitDeath(signed int a1)||
|80329D8|MoveCursor_SetLastCursorPosition|char *MoveCursor_SetLastCursorPosition(char a1, char a2)||
|80329EC|MoveCursor_CutPath|void MoveCursor_CutPath(int index)||
|8032A94|MoveCursor_AddMovePoint|void MoveCursor_AddMovePoint(int x, int y)||
|8032B18|MoveCursor_GetPointIndexForPosition|int MoveCursor_GetPointIndexForPosition(int x, int y)||
|8032B88|MoveCursor_AppendFromMoveBuffer|int MoveCursor_AppendFromMoveBuffer()||
|8032D30|MoveCursor_FillMovementMapForEndPoint|int MoveCursor_FillMovementMapForEndPoint()||
|8032D74|MoveCursor_RecomputePath|int MoveCursor_RecomputePath()||
|8032DA0|MoveCursor_8032DA0|signed int MoveCursor_8032DA0()||
|8033258|GetPlayerLeaderUnitId|signed int GetPlayerLeaderUnitId()||
|803374C|CanCharacterBePrepMoved|bool CanCharacterBePrepMoved(int a1)||
|8033870|InitPrepScreenUnitsAndCamera|int InitPrepScreenUnitsAndCamera(int a1)||
|8033C10|SALLYCURSOR6C_StartUnitSwap|int SALLYCURSOR6C_StartUnitSwap(signed int a1)||
|8033ED4|CallCursorShop|int CallCursorShop(int a1)||
|80341D0|PrepScreenProc_LockGame|int PrepScreenProc_LockGame()||
|8034200|PrepScreenProc_HideEverythingAndUnlockGame|int PrepScreenProc_HideEverythingAndUnlockGame()||
|8034214|ShrinkPlayerUnitList|int ShrinkPlayerUnitList()||
|8034278|EndPrepScreen|int EndPrepScreen()||
|8034314|CanUnitUseVisit|signed int CanUnitUseVisit()||
|80343A8|CanUnitUseSeize|signed int CanUnitUseSeize()||
|8034428|CanUnitUseAttack|bool CanUnitUseAttack()||
|8034470|CanActiveUnitUseRescue|bool CanActiveUnitUseRescue()||
|803448C|CanActiveUnitUseTrade|bool CanActiveUnitUseTrade()||
|80344A8|GetUnitCommandUseFlags|int GetUnitCommandUseFlags()||
|8034618|GetChapterDefinition|char **GetChapterDefinition(int a1)||
|8034640|GetChapterMapPointer|char *GetChapterMapPointer(int a1)||
|8034684|GetChapterMapChangesPointer|int GetChapterMapChangesPointer(int a1)||
|80346B0|GetChapterEventDataPointer|int GetChapterEventDataPointer(int a1)||
|8034704|IsDifficultMode|bool IsDifficultMode()||
|80347A8|NewUnitInfoWindow|int NewUnitInfoWindow(signed int a1)||
|80347D4|UnitInfoWindow_PositionUnitName|int UnitInfoWindow_PositionUnitName(int a1)||
|803483C|UnitInfoWindow_DrawBase|int *UnitInfoWindow_DrawBase(int *a1, unsigned __int16 **a2, int a3, int a4, signed int w, int a6)||
|80349D4|GetUnitInfoWindowX|int GetUnitInfoWindowX(int a1, int a2)||
|8034C18|NewUnitInfoWindow_WithAllLines|int NewUnitInfoWindow_WithAllLines(signed int a1)||
|8034E5C|DrawHammerneUnitInfoWindow|int DrawHammerneUnitInfoWindow(int a1)||
|8035204|SetupUnitRescueWindow|int SetupUnitRescueWindow(int a1)||
|8035708|StartBottomHelpText|int StartBottomHelpText(signed int a1, int a2)||
|8035748|EndBottomHelpText|int EndBottomHelpText()||
|8035758|IsBottomHelpTextActive|bool IsBottomHelpTextActive()||
|803592C|ExecSelfDamage|int ExecSelfDamage(_DWORD *a1, int a2)||
|8036594|BattleForecase_SetupLabelText|int BattleForecase_SetupLabelText()||
|80365E4|DrawUnitNameForBattleForecast|int DrawUnitNameForBattleForecast(_WORD *a1, unsigned __int8 *a2, unsigned __int16 **a3)||
|803666C|AddWeaponStatsAfterRound|int AddWeaponStatsAfterRound(int a1, _BYTE *a2, _DWORD *a3)||
|80366A0|BKSEL_SetupHitAndSuchStats|int BKSEL_SetupHitAndSuchStats(_BYTE *a1)||
|8036818|BKSEL_DrawStandard|int BKSEL_DrawStandard(int a1)||
|8036A70|BKSEL_DrawDetailed|int BKSEL_DrawDetailed(int a1)||
|8036CD0|BKSEL_Draw|int BKSEL_Draw(int a1)||
|8036D9C|BKSEL_InitGfx|int BKSEL_InitGfx(int a1)||
|8036E1C|BKSEL_Destructor|int BKSEL_Destructor()||
|8036E2C|BKSEL_Display|int BKSEL_Display(int a1)||
|80372D4|MapEventEngineExists_|bool MapEventEngineExists_()||
|803730C|StartBattleForecast|int StartBattleForecast()||
|80374F4|MineFireTrap_DoSomeBWLStuffWhenKill|int MineFireTrap_DoSomeBWLStuffWhenKill(int a1)||
|8037510|FireTrap_StartGfx|int FireTrap_StartGfx(signed int a1)||
|8037528|MineTrap_StartGfx|int MineTrap_StartGfx(signed int a1)||
|8037540|MineFireTrap_8037540|int MineFireTrap_8037540(int a1)||
|80375A0|MineFireTrap_80375A0|int MineFireTrap_80375A0(int a1)||
|80375E8|GetTriggeredTrapType|signed int GetTriggeredTrapType(int a1)||
|8037660|ExecTrap|int ExecTrap(signed int a1, int a2, __int16 a3)||
|8037744|HandlePostActionTraps|signed int HandlePostActionTraps(signed int a1)||
|80377CC|ExecTrapForActionTarget|int ExecTrapForActionTarget(signed int a1)||
|8037830|ExecTrap_QuietMaybe|int ExecTrap_QuietMaybe(signed int a1, int a2)||
|8037840|LoadTrapData|int LoadTrapData(char *a1)||
|8037910|LoadChapterBallistae|int LoadChapterBallistae()||
|8037928|AddGorgonEggTrap|int AddGorgonEggTrap(char a1, char a2, char a3, char a4, char a5)||
|803795C|GetNonEmptyBallistaAt|TrapStruct *GetNonEmptyBallistaAt(int a1, int a2)||
|803798C|GetBallistaItemAt|int GetBallistaItemAt(int a1, int a2)||
|80379D4|GetSomeBallistaItemAt|int GetSomeBallistaItemAt(int a1, int a2)||
|8037A04|AddBallista|TrapStruct *AddBallista(char a1, char a2, int a3)||
|8037A34|RideBallista|int RideBallista(int a1)||
|8037A6C|TryRemoveUnitFromBallista|int TryRemoveUnitFromBallista(int a1)||
|8037AA8|IsBallista|bool IsBallista(int a1)||
|8037B10|GetBallistaItemUses|int GetBallistaItemUses(int a1)||
|8037B44|GetCurrentPromotedLevelBonus|signed int GetCurrentPromotedLevelBonus()||
|8037B64|CanUnitSeize|signed int CanUnitSeize(int a1, int a2, signed int a3)||
|8037D68|PrepScreenProc_AddPostgameUnits|signed int PrepScreenProc_AddPostgameUnits(int a1)||
|8037DDC|PrepScreenProc_TryAddUnit|signed int PrepScreenProc_TryAddUnit(int a1, unsigned __int8 *a2)||
|8038208|PushGlobalTimer|int PushGlobalTimer()||
|803821C|PopGlobalTimer|int PopGlobalTimer()||
|80396AC|CpPhase_Init|int CpPhase_Init(signed int a1)||
|8039718|BskPhase_Init|int BskPhase_Init(signed int a1)||
|8039778|CpPhase_Cleanup|char *CpPhase_Cleanup()||
|8039788|CpOrder_Main|int CpOrder_Main(int a1)||
|80397B0|BskOrder_Init|int BskOrder_Init(signed int a1)||
|8039858|CpOrder_BuildUnitList|int CpOrder_BuildUnitList(signed int a1)||
|8039898|GetUnitAiAttackPriority|signed int GetUnitAiAttackPriority(int a1)||
|8039938|GetUnitAiPriority|int GetUnitAiPriority(int a1)||
|80399B0|MakeAiUnitQueue|int MakeAiUnitQueue()||
|8039A50|SortAiUnitQueue|int SortAiUnitQueue(signed int a1)||
|8039ABC|CpOrder_End|int CpOrder_End(int a1)||
|8039AC8|CpDecide_Suspend|int CpDecide_Suspend()||
|8039B00|CpDecide_Main|int CpDecide_Main(int a1)||
|8039C00|ClearAiDecision|int ClearAiDecision()||
|8039C20|AiSetDecision|int AiSetDecision(int xPos, int yPos, int actionId, int targetId, int itemSlot, int xPos2, int yPos2)||
|8039C64|AiUpdateDecision|int AiUpdateDecision(int actionId, int targetIndex, int itemSlot, int xPos2, int yPos2)||
|8039CAC|AiMasterDecisionMaker|int AiMasterDecisionMaker()||
|8039D10|AiDecisionMaker_HealEscape|int AiDecisionMaker_HealEscape()||
|8039DC4|AiDecisionMaker_SpecialItems|int AiDecisionMaker_SpecialItems()||
|8039DE0|AiDecisionMaker_AiScript1|int AiDecisionMaker_AiScript1()||
|8039E2C|AiDecisionMaker_AiScript2|int AiDecisionMaker_AiScript2()||
|8039E88|AiTargetCursor_Main|int AiTargetCursor_Main(int a1)||
|8039ECC|StartAiTargetCursor|int StartAiTargetCursor(int a1, int a2, int a3, signed int a4)||
|8039EF4|CpPerform_UpdateMapMusic|int CpPerform_UpdateMapMusic()||
|8039F0C|CpPerform_MoveCameraOntoUnit|int CpPerform_MoveCameraOntoUnit(signed int a1)||
|8039FAC|CpPerform_BeginUnitMovement|int CpPerform_BeginUnitMovement(int a1)||
|803A024|AiRefreshMap|int AiRefreshMap()||
|803A07C|CpPerform_PerformCombat|int CpPerform_PerformCombat(signed int a1)||
|803A0F4|CpPerform_PerformEscape|int CpPerform_PerformEscape(int a1)||
|803A134|CpPerform_PerformSteal|int CpPerform_PerformSteal(int a1)||
|803A17C|CpPerform_LootWait|signed int CpPerform_LootWait(signed int a1)||
|803A204|CpPerform_StaffWait|signed int CpPerform_StaffWait(signed int a1)||
|803A23C|CpPerform_ChestWait|signed int CpPerform_ChestWait(signed int a1)||
|803A270|CpPerform_DanceWait|signed int CpPerform_DanceWait()||
|803A274|CpPerform_TalkWait|signed int CpPerform_TalkWait()||
|803A2B8|CpPerform_RideBallistaWait|signed int CpPerform_RideBallistaWait()||
|803A2E0|CpPerform_ExitBallistaWait|signed int CpPerform_ExitBallistaWait()||
|803A308|CpPerform_PerformSomeOtherCombat|signed int CpPerform_PerformSomeOtherCombat(signed int a1)||
|803A358|CpPerform_PerformDkSummon|int CpPerform_PerformDkSummon(signed int a1)||
|803A390|CpPerform_PickWait|signed int CpPerform_PickWait(signed int a1)||
|803A3C8|CpPerform_MoveCameraOntoTarget|int CpPerform_MoveCameraOntoTarget(signed int a1)||
|803A4E4|CpPerform_PerformAction|int CpPerform_PerformAction(signed int a1)||
|803A5F8|CpPerform_WaitAction|int CpPerform_WaitAction(int a1)||
|803A674|CpPerform_DummyWait|signed int CpPerform_DummyWait()||
|803A678|CpPerform_EscapeWait|signed int CpPerform_EscapeWait()||
|803A69C|CpPerform_StealWait|signed int CpPerform_StealWait(int a1)||
|803A71C|AiScriptCompare|signed int AiScriptCompare(unsigned __int8 *a1, char a2, unsigned int a3)||
|803A788|AiFindPositionOfCharacter|signed int AiFindPositionOfCharacter(int a1, signed __int16 *a2)||
|803A878|AiFindClosestPositionWithUnitOfClass|bool AiFindClosestPositionWithUnitOfClass(int a1, signed __int16 *a2)||
|803A924|AiGetClosestUnitPosition|signed int AiGetClosestUnitPosition(int a1, _WORD *a2)||
|803AC3C|CouldStationaryUnitBeInRangeHeuristic|bool CouldStationaryUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|803AC90|CouldUnitBeInRangeHeuristic|bool CouldUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|803AD18|IsTerrainIdInList|signed int IsTerrainIdInList(_BYTE *a1, int a2)||
|803AD38|AiFindClosestTileInRangeWithListedTerrain|bool AiFindClosestTileInRangeWithListedTerrain(_BYTE *a1, char a2, _WORD *a3)||
|803AE3C|GetPositionRangeWeight|signed int GetPositionRangeWeight(int a1, int a2)||
|803AFDC|AiSomethingCheckPick|signed int AiSomethingCheckPick(int a1, _DWORD *a2, _WORD *a3)||
|803B41C|AiAreEnemiesWithin3Tiles|int AiAreEnemiesWithin3Tiles(__int16 a1, __int16 a2)||
|803B558|FillMovementAndRangeMapForItem|int FillMovementAndRangeMapForItem(int a1, unsigned __int8 a2)||
|803B718|GetLesserWeightedAdjacentPosition|bool GetLesserWeightedAdjacentPosition(int a1, int a2, int a3, _WORD *a4)||
|803B794|GetItemAiStealPriority|signed int GetItemAiStealPriority(unsigned __int16 a1)||
|803B7C8|AiGetBestItemSlotIndexToSteal|int AiGetBestItemSlotIndexToSteal(int a1)||
|803B808|AiFindUnitSafestTileToMoveTo|bool AiFindUnitSafestTileToMoveTo(int a1, _WORD *a2)||
|803B8FC|AiGetLootingParameters|bool AiGetLootingParameters(_WORD *a1, int a2)||
|803B994|AiGetActiveUniChestKeyItemSlot|signed int AiGetActiveUniChestKeyItemSlot(_BYTE *a1)||
|803BA08|AiTryMoveTowards|int AiTryMoveTowards(int xPos, int yPos, int actionId, int safetyThreshold, int idkFlag)||
|803BDE0|FindClosestBestPosition|signed int FindClosestBestPosition(int a1, int a2, int a3, signed __int16 *a4)||
|803BF84|AiIsCharacterOnMap|signed int AiIsCharacterOnMap(unsigned __int16 a1)||
|803BFD0|AiArePointsWithinDistance|bool AiArePointsWithinDistance(int a1, __int16 a2, int a3, int a4, unsigned __int8 a5)||
|803C014|AiIsPositionLootable|signed int AiIsPositionLootable(unsigned __int8 a1, int a2)||
|803C064|GenBlueUnitAiStats|int GenBlueUnitAiStats()||
|803C120|SetupUnitStatusStaffAIFlags|int SetupUnitStatusStaffAIFlags(int a1, int a2)||
|803C168|SetupUnitHealStaffAIFlags|int SetupUnitHealStaffAIFlags(int a1, int a2)||
|803C1B4|UpdateNumberOfAlliedUnitsWithin8Tiles|int UpdateNumberOfAlliedUnitsWithin8Tiles(char *a1)||
|803C258|SetUnitAiFromDefinition|int SetUnitAiFromDefinition(int a1, _BYTE *a2)||
|803C490|AiFillMovementMapForUnit|int AiFillMovementMapForUnit(int a1)||
|803C4BC|AiExecAi1|int AiExecAi1()||
|803C510|AiExecFallbackAi1|int AiExecFallbackAi1()||
|803C54C|AiExecAi2|int AiExecAi2()||
|803C5A0|AiExecFallbackAi2|int AiExecFallbackAi2()||
|803C5DC|AiScript_Exec|int AiScript_Exec(int a1)||
|803C648|AiScriptCmd_00_ConditionalGoto|int AiScriptCmd_00_ConditionalGoto(_BYTE *a1)||
|803C6EC|AiScriptCmd_01_FunctionCall|int AiScriptCmd_01_FunctionCall(_BYTE *a1)||
|803C71C|AiScriptCmd_02_ChangeAi|int AiScriptCmd_02_ChangeAi(_BYTE *a1)||
|803C78C|AiScriptCmd_03_Goto|int AiScriptCmd_03_Goto(_BYTE *a1)||
|803C818|IsUnitEnemyWithActiveUnit|bool IsUnitEnemyWithActiveUnit(int a1)||
|803C848|IsUnitNotActiveUnit|bool IsUnitNotActiveUnit(int a1)||
|803C864|IsUnitEnemyAndNotInTheAiInstList|bool IsUnitEnemyAndNotInTheAiInstList(int a1)||
|803C8AC|IsUnitEnemyOrInTheAiInstList|bool IsUnitEnemyOrInTheAiInstList(int a1)||
|803C8F4|AiIsUnitScriptCharAndEnemyWithActiveUnit|bool AiIsUnitScriptCharAndEnemyWithActiveUnit(char *a1)||
|803C934|AiIsUnitScriptClassAndEnemyWithActiveUnit|bool AiIsUnitScriptClassAndEnemyWithActiveUnit(int a1)||
|803C974|AiScriptCmd_04_ActionOnSelectedCharacter|int AiScriptCmd_04_ActionOnSelectedCharacter(_BYTE *a1)||
|803CA0C|AiScriptCmd_05_DoStandardAction|int AiScriptCmd_05_DoStandardAction(_BYTE *a1)||
|803CA7C|AiScriptCmd_06_DoNothing|_BYTE *AiScriptCmd_06_DoNothing(_BYTE *result)||
|803CA84|AiScriptCmd_07_DoStandardActionNoMove|int AiScriptCmd_07_DoStandardActionNoMove(_BYTE *a1)||
|803CAE4|AiScriptCmd_08_DoStandardActionAgainstClass|int AiScriptCmd_08_DoStandardActionAgainstClass(_BYTE *a1)||
|803CB34|AiScriptCmd_09_DoStaffAction|int AiScriptCmd_09_DoStaffAction(_BYTE *a1)||
|803CB50|AiScriptCmd_0A_DoStaffAction|int AiScriptCmd_0A_DoStaffAction(_BYTE *a1)||
|803CB6C|AiScriptCmd_0B_DoStaffAction|int AiScriptCmd_0B_DoStaffAction(_BYTE *a1)||
|803CB88|AiScriptCmd_0C_MoveTowardsSetPoint|int AiScriptCmd_0C_MoveTowardsSetPoint(_BYTE *a1)||
|803CBD4|AiScriptCmd_0D_MoveTowardsCharacterUntilInRange|int AiScriptCmd_0D_MoveTowardsCharacterUntilInRange(_BYTE *a1)||
|803CC90|AiScriptCmd_0E_DoNothing|_BYTE *AiScriptCmd_0E_DoNothing(_BYTE *result)||
|803CC98|AiScriptCmd_0F_MoveTowardsUnitWithClass|int AiScriptCmd_0F_MoveTowardsUnitWithClass(_BYTE *a1)||
|803CCDC|AiScriptCmd_10_DoLooting|int AiScriptCmd_10_DoLooting(_BYTE *a1)||
|803CDD4|AiScriptCmd_11_MoveTowardsSafety|int AiScriptCmd_11_MoveTowardsSafety(_BYTE *a1)||
|803CE18|AiScriptCmd_12_MoveTowardsEnemy|int AiScriptCmd_12_MoveTowardsEnemy(_BYTE *a1)||
|803CE98|AiScriptCmd_13|int AiScriptCmd_13(_BYTE *a1)||
|803CF18|AiScriptCmd_14_DoNothing|_BYTE *AiScriptCmd_14_DoNothing(_BYTE *result)||
|803CF20|AiScriptCmd_15_DoNothing|_BYTE *AiScriptCmd_15_DoNothing(_BYTE *result)||
|803CF28|AiScriptCmd_16|int AiScriptCmd_16(_BYTE *a1)||
|803CF3C|AiScriptCmd_17_DoEscape|int AiScriptCmd_17_DoEscape(_BYTE *a1)||
|803D228|AiScriptCmd_18|int AiScriptCmd_18(_BYTE *a1)||
|803D2D8|AiScriptCmd_19_MoveTowardsTerrain|int AiScriptCmd_19_MoveTowardsTerrain(_BYTE *a1)||
|803D354|AiScriptCmd_1A_MoveTowardsTerrain|int AiScriptCmd_1A_MoveTowardsTerrain(_BYTE *a1)||
|803D3D0|AiScriptCmd_1B_NoOp|int AiScriptCmd_1B_NoOp(_BYTE *a1)||
|803D3E4|AiDoBerserkAction|int AiDoBerserkAction()||
|803D404|AiDoBerserkMove|int AiDoBerserkMove()||
|803D450|AiTryDoOffensiveAction|int AiTryDoOffensiveAction(int a1)||
|803D880|AiFillUnitStandingRangeWithWeapon|int AiFillUnitStandingRangeWithWeapon(int a1, unsigned __int8 a2)||
|803DB08|GetEffectiveTileMovCost|signed int GetEffectiveTileMovCost(int a1, int a2)||
|803DB60|AiTryDoSteal|signed int AiTryDoSteal()||
|803DCC4|AiTrySimulateBattle|int AiTrySimulateBattle(_BYTE *a1)||
|803DE5C|AiGetTileWeightForAttack|unsigned int AiGetTileWeightForAttack(int a1, int a2, int a3)||
|803DEC4|ShouldAiNotBattle|int ShouldAiNotBattle()||
|803DEC8|AiSimulateBattle|signed int AiSimulateBattle(unsigned __int8 *a1)||
|803DF34|AiBattleGetDamageDealtWeight|signed int AiBattleGetDamageDealtWeight()||
|803DF94|AiBattleGetTargetHpWeight|int AiBattleGetTargetHpWeight()||
|803DFBC|AiBattleGetAlliesAroundWeight|int AiBattleGetAlliesAroundWeight()||
|803E068|AiBattleGetWeight_803E068|int AiBattleGetWeight_803E068()||
|803E09C|AiBattleGetTurnNumberWeight|int AiBattleGetTurnNumberWeight()||
|803E0B4|AiBattleGetDamageTakenWeight|signed int AiBattleGetDamageTakenWeight()||
|803E114|AiBattleGetTileDangerWeight|signed int AiBattleGetTileDangerWeight()||
|803E150|AiBattleGetSubjectHpWeight|int AiBattleGetSubjectHpWeight()||
|803E178|ComputeAiAttackWeight|int ComputeAiAttackWeight(int a1)||
|803E1EC|AiGetUnitReachWeightWithEquippedWeapon|signed int AiGetUnitReachWeightWithEquippedWeapon(int a1, int a2, int a3)||
|803E23C|AiGetPositionTerrainSafetyWeight|int AiGetPositionTerrainSafetyWeight(int a1, int a2)||
|803E27C|AiGetPositionUnitSafetyWeight|int AiGetPositionUnitSafetyWeight(int a1, int a2)||
|803E2F4|SetupAiDangerMap|int SetupAiDangerMap()||
|803E320|FillAiDangerMap|int FillAiDangerMap()||
|803E448|IsAiTileSafe|int IsAiTileSafe(int x, int y, int threshold)||
|803E640|AiUpdateAllUnitHealAi|int AiUpdateAllUnitHealAi()||
|803E698|AiUnitUpdateGetHealMode|signed int AiUnitUpdateGetHealMode(int a1)||
|803E718|AiUnitTryHealSelf|signed int AiUnitTryHealSelf()||
|803E7D0|AiUnitTryMoveTowardsEscapePoint|signed int AiUnitTryMoveTowardsEscapePoint()||
|803E878|AiUnitGetClosestEscapePointData|char *AiUnitGetClosestEscapePointData()||
|803EC98|GetUnitAttackAndWeapon|int GetUnitAttackAndWeapon(_DWORD *a1, _WORD *a2)||
|803ED28|AiTryDoDanceAdjacent|signed int AiTryDoDanceAdjacent(int a1, int a2)||
|803EE4C|AiTryDoStealAdjacent|bool AiTryDoStealAdjacent(int a1, int a2)||
|803EFE0|AiIsUnitAtPositionDifferentAllegiance|bool AiIsUnitAtPositionDifferentAllegiance(int a1, int a2)||
|803F9D8|AiGetStaffAiIndex|signed int AiGetStaffAiIndex(unsigned __int16 a1)||
|803FA40|AiTryDoStaff|int AiTryDoStaff(int a1)||
|803FAE8|GetAiSafestAccessibleAdjacentPosition|bool GetAiSafestAccessibleAdjacentPosition(int a1, int a2, _WORD *a3)||
|8040664|nullsub_29|void nullsub_29()||
|8040844|AiTryDoSpecialItems|signed int AiTryDoSpecialItems()||
|8040BB4|AiSomethingGetPick|bool AiSomethingGetPick(int a1, int a2, signed __int16 *a3, _WORD *a4)||
|8040C5C|AiTrySomethingPick|int AiTrySomethingPick()||
|8040DCC|AiSetMovCostTableWithPassableWalls|int AiSetMovCostTableWithPassableWalls(int a1)||
|8040E04|AiSetMovCostTableWithTerrainSetAsPassable|int AiSetMovCostTableWithTerrainSetAsPassable(int a1, int a2)||
|8040E68|InitAiMoveMapForUnit|int InitAiMoveMapForUnit(int a1)||
|8040F28|AiMapRangeFillMovementWithPassableWalls|int AiMapRangeFillMovementWithPassableWalls(int a1, int a2, int a3)||
|8040F88|InitAiRangeMoveMapForUnitWithDoorsPassable|int InitAiRangeMoveMapForUnitWithDoorsPassable(int a1)||
|80419DC|OnSerialCommunication|int OnSerialCommunication()||
|8041C1C|SioVSync_8041C1C|int SioVSync_8041C1C()||
|8041D68|SioReady|int SioReady()||
|8041DC4|SioMain_8041DC4|int SioMain_8041DC4()||
|8042E0C|SioCon_8042E0C|int SioCon_8042E0C()||
|8042E2C|SioCon_8042E2C|int SioCon_8042E2C(int a1)||
|8042E78|SetGameLinkArenaBit|int SetGameLinkArenaBit()||
|8042E88|ClearGameLinkArenaBit|int ClearGameLinkArenaBit()||
|8042E98|CheckGameLinkArenaBit|unsigned int CheckGameLinkArenaBit()||
|804320C|SioPlaySomeIndexedSfx|int SioPlaySomeIndexedSfx(int a1)||
|8044700|NameSelect_DrawNameText|int NameSelect_DrawNameText(int a1)||
|8044768|NameSelect_8044768|int NameSelect_8044768(int a1)||
|8044C54|NameSelect_8044C54|int NameSelect_8044C54(int a1, int a2)||
|8044ED8|NameSelect_8044ED8|int NameSelect_8044ED8(int a1)||
|8044F84|OnNameSelectHBlank|int OnNameSelectHBlank()||
|8044FE4|NameSelect_8044FE4|int NameSelect_8044FE4(int a1)||
|8044FFC|NameSelect_8044FFC|int NameSelect_8044FFC(int a1)||
|804503C|NameSelect_804503C|int NameSelect_804503C(int a1)||
|8045068|NameSelect_8045068|int NameSelect_8045068(int a1)||
|80450AC|NameSelect_DrawSomeText|int NameSelect_DrawSomeText(int a1)||
|8045108|NameSelect_8045108|int NameSelect_8045108(int a1)||
|80451F0|NameSelect_80451F0|int NameSelect_80451F0()||
|8045C14|New6C_SIOMAIN2|int New6C_SIOMAIN2()||
|8047AB8|CheckSomethingSaveRelated|signed int CheckSomethingSaveRelated()||
|8047AF4|SioMenu_8047AF4|int SioMenu_8047AF4()||
|8047B34|SioMenu_8047B34|int SioMenu_8047B34(int a1)||
|8047C60|SioMenu_8047C60|int SioMenu_8047C60(int a1)||
|8047CF0|SioMenu_8047CF0|int SioMenu_8047CF0(int a1)||
|8047D88|SioMenu_8047D88|int SioMenu_8047D88(int a1)||
|8047FF8|SioMenu_8047FF8|int SioMenu_8047FF8(int a1)||
|80480B4|SioMenu_80480B4|int SioMenu_80480B4(int a1)||
|8048168|SioMenu_8048168|int SioMenu_8048168(int a1)||
|8048260|StartNameSelect|int StartNameSelect(signed int a1)||
|8048A68|nullsub_43|void nullsub_43()||
|804AF2C|ITEMRANGEDONE_sub_804AF2C|signed int ITEMRANGEDONE_sub_804AF2C(int a1, _DWORD *a2)||
|804B800|BeginLinkArenaBattle|int BeginLinkArenaBattle()||
|804C3A0|nullsub_16|void nullsub_16()||
|804C3A4|nullsub_14|void nullsub_14()||
|804C3A8|nullsub_13|void nullsub_13()||
|804E078|LoadOldUIPal|int LoadOldUIPal(signed int a1)||
|804E0A8|LoadNewUIPal|int LoadNewUIPal(signed int a1)||
|804E0D8|LoadOldUIImage|int LoadOldUIImage(int a1)||
|804E108|LoadNewUIImage|int LoadNewUIImage(int a1)||
|804E1BC|WriteUIWindowTileMap|int WriteUIWindowTileMap(void *bg, int x, int y, int width, int height, int tileBase, int style)||
|804E314|ClearTileMapRect|int ClearTileMapRect(int a1, int a2, int a3, int a4, int a5)||
|804E368|MakeUIWindowTileMap_BG0BG1|int MakeUIWindowTileMap_BG0BG1(int x, int y, int w, int h, int style)||
|804E79C|UpdateHandCursor|int UpdateHandCursor(int a1, int a2)||
|804E884|ClearBG0BG1|int ClearBG0BG1()||
|804E98C|DrawMenuItemHighlight|int DrawMenuItemHighlight(int a1, int a2, int a3, int a4, int a5)||
|804EA08|ClearMenuItemHighlight|int ClearMenuItemHighlight(int a1, __int16 a2, int a3, int a4, int a5)||
|804EB54|LoadOldUIGfx|int LoadOldUIGfx()||
|804EB68|LoadNewUIGraphics|int LoadNewUIGraphics()||
|804EB98|StartMenuAdjusted|int StartMenuAdjusted(_DWORD *a1, signed int a2, int a3, int a4)||
|804EBC8|StartMenuChild|int StartMenuChild(_DWORD *a1, int a2)||
|804EBE4|StartMenu|int StartMenu(_DWORD *a1)||
|804EC34|StartMenuExt2|int StartMenuExt2(_DWORD *a1, int a2)||
|804EC98|StartMenuAt|int StartMenuAt(int a1, int a2)||
|804ECB0|StartMenuExt|signed int StartMenuExt(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned __int16 a5, __int16 a6, signed int a7)||
|804EEA8|EndMenu|int EndMenu(int a1)||
|804EF20|EndAllMenus|int EndAllMenus()||
|804EF38|Menu_CallDefinedConstructors|int Menu_CallDefinedConstructors(int a1)||
|804EF70|Menu_Draw|int Menu_Draw(int a1)||
|804F0E0|Menu_DrawHoverThing|int Menu_DrawHoverThing(int a1, int a2, char a3)||
|804F164|Menu_Idle|int Menu_Idle(int a1)||
|804F294|Menu_HandleDirectionInputs|int Menu_HandleDirectionInputs(_BYTE *a1)||
|804F374|Menu_HandleSelectInputs|int Menu_HandleSelectInputs(int a1)||
|804F400|Menu_GetCursorGfxCurrentPosition|int Menu_GetCursorGfxCurrentPosition(int a1, _DWORD *a2, _DWORD *a3)||
|804F448|MenuCommandAlwaysUsable|signed int MenuCommandAlwaysUsable()||
|804F44C|MenuCommandAlwaysGrayed|signed int MenuCommandAlwaysGrayed()||
|804F450|MenuCommandNeverUsable|signed int MenuCommandNeverUsable()||
|804F474|Menu_HelpBoxInit|int Menu_HelpBoxInit(int a1)||
|804F4A0|Menu_HelpBoxIdle|int Menu_HelpBoxIdle(_BYTE *a1)||
|804F520|MenuCallHelp|int MenuCallHelp(int a1)||
|804F530|Menu_TextBoxIdle|int Menu_TextBoxIdle(int a1)||
|804F580|MenuCallHelpBox|int MenuCallHelpBox(int a1, int a2)||
|804F5B4|Menu_804F5B4|int Menu_804F5B4(int a1)||
|804F60C|MarkSomethingInMenu|int MarkSomethingInMenu()||
|804F62C|UnMarkSomethingInMenu|int UnMarkSomethingInMenu()||
|804F64C|StartMenu_AndDoSomethingCommands|int StartMenu_AndDoSomethingCommands(_DWORD *a1, signed int a2, int a3, int a4)||
|804F6A4|Menu_UpdateMovingCursorGfxPosition|int Menu_UpdateMovingCursorGfxPosition(int a1, int a2, _DWORD *a3)||
|804F6F8|ClearMenuRelatedList|int ClearMenuRelatedList()||
|804F8A4|InitTargets|int *InitTargets(__int16 a1, __int16 a2)||
|804F8BC|AddTarget|int AddTarget(char a1, char a2, char a3, char a4)||
|804F910|LinkTargets|int LinkTargets()||
|804F958|TargetSelection_GetRealCursorPosition|int TargetSelection_GetRealCursorPosition(int a1, _DWORD *a2, int *a3)||
|804F96C|TargetSelection_Loop|int TargetSelection_Loop(int a1)||
|804FA3C|StartTargetSelection|int StartTargetSelection(int a1)||
|804FAA4|StartTargetSelectionExt|int StartTargetSelectionExt(int a1, int a2)||
|804FAB8|EndTargetSelection|int EndTargetSelection(int a1)||
|804FAEC|TargetSelection_HandleMoveInput|int TargetSelection_HandleMoveInput(int a1)||
|804FB64|TargetSelection_HandleSelectInput|int TargetSelection_HandleSelectInput(_DWORD *a1)||
|804FBFC|GetFarthestTargetIndex|int GetFarthestTargetIndex()||
|804FC5C|LinkTargetsOrdered|char *LinkTargetsOrdered()||
|804FD00|GetLinkedTargetList|char *GetLinkedTargetList()||
|804FD10|GetFirstTargetPointer|char *GetFirstTargetPointer()||
|804FD28|GetTargetListSize|int GetTargetListSize()||
|804FD34|GetTarget|char *GetTarget(int a1)||
|804FD60|StartEkrBattleDeamon|int StartEkrBattleDeamon()||
|804FD8C|EndEkrBattleDeamon|int EndEkrBattleDeamon()||
|804FDA0|IsBattleDeamonActive|bool IsBattleDeamonActive()||
|804FDBC|EkrBattleDeamon_OnEnd|int EkrBattleDeamon_OnEnd()||
|804FDD0|nullsub_35|void nullsub_35()||
|804FDD4|StartEkrBattle|int StartEkrBattle()||
|804FE40|InBattleMainRoutine|int InBattleMainRoutine()||
|804FEE4|GameLoop_Battle|int GameLoop_Battle()||
|804FF60|nullsub_36|void nullsub_36()||
|804FF64|ekrBattle_Init|int ekrBattle_Init(int a1)||
|8050000|ekrBattle_8050000|int ekrBattle_8050000(int a1)||
|8050054|EkrBattle_BattleQuoteInit|int EkrBattle_BattleQuoteInit(int a1)||
|80500F0|EkrBattle_BattleQuoteWait|int EkrBattle_BattleQuoteWait(int a1)||
|8050134|ekrBattle_8050134|int ekrBattle_8050134(int a1)||
|8050158|ekrBattle_8050158|_DWORD *ekrBattle_8050158(_DWORD *result)||
|8050174|ekrBattle_8050174|int ekrBattle_8050174(_DWORD *a1)||
|8050224|ekrBattle_8050224|int ekrBattle_8050224(int a1)||
|8050244|ekrBattle_8050244|int ekrBattle_8050244(int a1)||
|8050290|ekrBattle_WaitForFrame8|int ekrBattle_WaitForFrame8(int a1)||
|80502B0|ekrBattle_StartUIPaletteAnimations|int ekrBattle_StartUIPaletteAnimations(int a1)||
|8050304|ekrBattle_8050304|int ekrBattle_8050304(int a1)||
|8050338|ekrBattle_WaitForTriangleAttackAnim|int ekrBattle_WaitForTriangleAttackAnim(int a1)||
|8050360|ekrBattle_InitMainAnimations|int ekrBattle_InitMainAnimations(int a1)||
|80503EC|ekrBattle_80503EC|int ekrBattle_80503EC(int result)||
|8050400|ekrBattle_StartMainAnimations|int ekrBattle_StartMainAnimations(int a1)||
|8050440|ekrBattle_WaitForClassChange|int ekrBattle_WaitForClassChange(int a1)||
|805046C|ekrBattle_WaitForRoundAnimations|int ekrBattle_WaitForRoundAnimations(int a1)||
|80505EC|ekrBattle_80505EC|int ekrBattle_80505EC(int result)||
|8050600|ekrBattle_8050600|int ekrBattle_8050600(int a1)||
|8050684|ekrBattle_8050684|int ekrBattle_8050684(int a1)||
|80506C8|ekrBattle_80506C8|int ekrBattle_80506C8(int a1)||
|80508F0|ekrBattle_80508F0|int ekrBattle_80508F0(int a1)||
|8050940|ekrBattle_8050940|int ekrBattle_8050940(int a1)||
|80509A8|ekrBattle_80509A8|int ekrBattle_80509A8(int a1)||
|8050A84|ekrBattle_8050A84|int ekrBattle_8050A84(int a1)||
|8050AB8|ekrBattle_8050AB8|int ekrBattle_8050AB8(int a1)||
|8050B08|ekrBattle_8050B08|int ekrBattle_8050B08(int a1)||
|8050C34|ekrBattle_CheckForLevelup_8050C34|int ekrBattle_CheckForLevelup_8050C34(int a1)||
|8050C6C|ekrBattle_WaitForLevelup_8050C6C|int ekrBattle_WaitForLevelup_8050C6C(int a1)||
|8050C90|ekrBattle_MakePopups|int ekrBattle_MakePopups(int a1)||
|8050CA8|ekrBattle_WaitForPopup|int ekrBattle_WaitForPopup(int a1)||
|8050CCC|ekrBattle_8050CCC|int ekrBattle_8050CCC(_DWORD *a1)||
|8050CF8|ekrBattle_8050CF8|int ekrBattle_8050CF8(_DWORD *a1)||
|8050D88|ekrBattle_8050D88|int ekrBattle_8050D88(int a1)||
|8050DA8|ekrBattle_8050DA8|int ekrBattle_8050DA8(int a1)||
|8050DE0|nullsub_69|void nullsub_69()||
|8050DE4|NewEkrLvlupFan|int NewEkrLvlupFan()||
|8050EF8|StartEkrGauge|int StartEkrGauge()||
|805116C|EndEkrGauge|int EndEkrGauge()||
|8051180|EkrGauge_8051180|int EkrGauge_8051180()||
|8051190|EkrGauge_8051190|signed int EkrGauge_8051190()||
|80511A0|EkrGauge_80511A0|signed int EkrGauge_80511A0()||
|80511B0|EkrGauge_80511B0|signed int EkrGauge_80511B0()||
|80511C0|EkrGauge_80511C0|int EkrGauge_80511C0(int a1)||
|80511D0|EkrGauge_80511D0|__int16 EkrGauge_80511D0(__int16 result, __int16 a2)||
|80511E4|EkrGauge_80511E4|signed int EkrGauge_80511E4(__int16 a1, __int16 a2)||
|80511F8|EkrGauge_80511F8|int EkrGauge_80511F8()||
|8051208|EkrGauge_8051208|int EkrGauge_8051208()||
|8051218|EkrGauge_8051218|int EkrGauge_8051218()||
|8051228|EkrGauge_8051228|int EkrGauge_8051228()||
|8051284|ekrGauge_Loop|int ekrGauge_Loop(int a1)||
|8051AC4|StartEkrDispUP|int StartEkrDispUP()||
|8051B48|EkrDispUP_8051B48|__int16 EkrDispUP_8051B48(__int16 result, __int16 a2)||
|8051BB0|ekrDispUP_Loop|int ekrDispUP_Loop(int a1)||
|8052304|StartEfxHpBar|int StartEfxHpBar(int a1)||
|80525E8|StartEfxHpBarResire|int StartEfxHpBarResire(int a1)||
|8052978|StartEfxAvoid|int StartEfxAvoid(int a1)||
|8052A0C|StartEfxHpBarLive|int StartEfxHpBarLive(int a1)||
|8052B98|StartEfxNoDamage|int StartEfxNoDamage(int a1, int a2, char a3)||
|8052D8C|StartEfxStatusCHG|int StartEfxStatusCHG(int a1)||
|8052DD4|StartEfxDeadEVTENT|int StartEfxDeadEVTENT(int a1, int a2)||
|8052FAC|StartEfxDead|int StartEfxDead(int a1, int a2)||
|8053120|StartEfxDeadPika|int StartEfxDeadPika(int a1, int a2)||
|80533D0|MoveBattleCameraOnto|int MoveBattleCameraOnto(int a1, unsigned __int16 a2)||
|805372C|nullsub_56|void nullsub_56()||
|8053730|StartEfxQuake|int StartEfxQuake(int quakeType)||
|80539DC|StartEfxHitQuake|int StartEfxHitQuake(int a1, int a2, int a3)||
|8053F10|StartEfxFlashBG|int StartEfxFlashBG(int a1, __int16 a2)||
|8054440|StartEfxFlashHPBar|int StartEfxFlashHPBar(int a1, unsigned __int16 a2, __int16 a3)||
|80545C0|StartEfxHPBarColorChange|int StartEfxHPBarColorChange(int a1)||
|80546B0|EndEfxHPBarColorChange|int EndEfxHPBarColorChange()||
|80547DC|StartEfxFlashUnit|int StartEfxFlashUnit(int a1, __int16 a2, __int16 a3, char a4)||
|8054A1C|StartEfxStatusUnit|int StartEfxStatusUnit(int a1)||
|8054B54|DeleteEach6C_efxStatusUnit|int DeleteEach6C_efxStatusUnit()||
|8054E8C|StartEfxWeaponIcon|int StartEfxWeaponIcon(__int16 a1, __int16 a2)||
|8054ED4|EndEfxWeaponIcon|int EndEfxWeaponIcon()||
|8054EF0|PauseEfxWeaponIcon|signed int PauseEfxWeaponIcon()||
|8054F00|ResumeEfxWeaponIcon|int ResumeEfxWeaponIcon()||
|8054F10|EfxWeaponIcon_OnLoop|int EfxWeaponIcon_OnLoop(_DWORD *a1)||
|8054F78|EfxWeaponIcon_OnEnd|int EfxWeaponIcon_OnEnd(int a1)||
|8054FA8|StartEfxSpellCast|int StartEfxSpellCast(int a1)||
|8055000|StartEndEfxSpellCast|int StartEndEfxSpellCast()||
|8055160|SpellFx_Begin|signed int SpellFx_Begin()||
|805516C|SpellFx_Finish|int SpellFx_Finish()||
|8055178|SpellFx_ClearBG1Position|int SpellFx_ClearBG1Position()||
|8055188|SpellFx_ClearBG1|int SpellFx_ClearBG1()||
|80551B0|SpellFx_SetSomeColorEffect|int SpellFx_SetSomeColorEffect()||
|805526C|SpellFx_ClearColorEffects|int SpellFx_ClearColorEffects()||
|8055278|StartBattleAnimHitEffectsDefault|int StartBattleAnimHitEffectsDefault(int a1, int a2)||
|8055298|StartBattleAnimHitEffects|int StartBattleAnimHitEffects(int a1, int a2, int a3, int a4)||
|8055424|StartBattleAnimResireHitEffects|int StartBattleAnimResireHitEffects(int a1, int a2)||
|8055670|SpellFx_WriteBgMap|int SpellFx_WriteBgMap(int a1, int a2, int a3)||
|80557D8|SpellFx_RegisterObjGfx|int SpellFx_RegisterObjGfx(int a1, int a2)||
|8055800|SpellFx_RegisterObjPal|int SpellFx_RegisterObjPal(int a1, int a2)||
|805581C|SpellFx_RegisterBgGfx|int SpellFx_RegisterBgGfx(int a1, int a2)||
|8055844|SpellFx_RegisterBgPal|int SpellFx_RegisterBgPal(int a1, int a2)||
|80558F4|SpellFx_InterpretBgAnimScript|signed int SpellFx_InterpretBgAnimScript(unsigned __int16 *a1, unsigned __int16 *a2, __int16 *a3)||
|805598C|GetSpellAnimationStartFrame|signed int GetSpellAnimationStartFrame()||
|8055BD4|BeginAnimsOnBattleAnimations|int BeginAnimsOnBattleAnimations()||
|8055C68|MainUpdate_8055C68|int MainUpdate_8055C68()||
|8055CDC|StartEkrBattleStarting|int StartEkrBattleStarting()||
|8055CF0|ekrBattleStarting_8055CF0|int ekrBattleStarting_8055CF0(_WORD *a1)||
|8055DF4|ekrBattleStarting_8055DF4|int ekrBattleStarting_8055DF4(signed __int16 *a1)||
|8055F00|ekrBattleStarting_8055F00|int ekrBattleStarting_8055F00(int a1)||
|8055FA0|ekrBattleStarting_8055FA0|int ekrBattleStarting_8055FA0(int a1)||
|8055FE8|ekrBattleStarting_8055FE8|int ekrBattleStarting_8055FE8(int a1)||
|8056024|ekrBattleStarting_8056024|int ekrBattleStarting_8056024(int a1)||
|8056078|ekrBattleStarting_8056078|int ekrBattleStarting_8056078(int a1)||
|80560F0|ekrBattleEnding_80560F0|int ekrBattleEnding_80560F0(int a1)||
|8056170|ekrBattleEnding_8056170|int ekrBattleEnding_8056170(int a1)||
|80561C8|ekrBattleEnding_80561C8|int ekrBattleEnding_80561C8(int a1)||
|8056228|ekrBattleEnding_8056228|int ekrBattleEnding_8056228(_WORD *a1)||
|8056288|ekrBattleEnding_8056288|int ekrBattleEnding_8056288(int a1)||
|8056310|ekrBattleEnding_8056310|int ekrBattleEnding_8056310(int a1)||
|8056390|ekrBattleEnding_8056390|int ekrBattleEnding_8056390(signed __int16 *a1)||
|8056484|ekrBattleEnding_8056484|int ekrBattleEnding_8056484(int a1)||
|8056D24|StartEkrWindowAppear|int StartEkrWindowAppear(int a1, __int16 a2)||
|8056D90|EkrWindowAppear_Loop|int EkrWindowAppear_Loop(int a1)||
|8056E10|StartEkrNamewinAppear|int StartEkrNamewinAppear(int a1, __int16 a2, __int16 a3)||
|8056E60|HasEkrNamewinAppearEnded|bool HasEkrNamewinAppearEnded()||
|8056FF8|PrepareBattleGraphicsMaybe|bool PrepareBattleGraphicsMaybe()||
|8057FF8|GetSpellAnimId|int GetSpellAnimId(unsigned __int16 a1, unsigned __int16 a2)||
|8058848|GetBattleAnimationId|int GetBattleAnimationId(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)||
|8058960|SomethingFilterBattleAnimId|int *SomethingFilterBattleAnimId(signed int a1, int a2)||
|80589B4|GetAllegienceId|signed int GetAllegienceId(signed int a1)||
|8058A0C|GetBattleAnimRoundType|signed int GetBattleAnimRoundType(int a1)||
|8058A34|GetBattleAnimRoundTypeFlags|int GetBattleAnimRoundTypeFlags(int a1)||
|8058A60|GetSomeBattleAnimHpValue|int GetSomeBattleAnimHpValue(int a1)||
|8058A8C|IsItemDisplayedInBattle|bool IsItemDisplayedInBattle(int a1)||
|8058BC8|BattleAIS_ExecCommands|int BattleAIS_ExecCommands()||
|805990C|StartEkrChienCHR|int StartEkrChienCHR(int a1)||
|8059924|EkrChienCHR_OnLoop|int EkrChienCHR_OnLoop(int a1)||
|805993C|RegisterAISSheetGraphics|int RegisterAISSheetGraphics(int a1)||
|805A07C|SwitchAISFrameDataFromBARoundType|int SwitchAISFrameDataFromBARoundType(int a1, int a2)||
|805A154|GetAISLayerId|bool GetAISLayerId(int a1)||
|805A16C|GetAISSubjectId|bool GetAISSubjectId(int a1)||
|805A184|IsBatteRoundTypeAMiss|signed int IsBatteRoundTypeAMiss(__int16 a1)||
|805A2B4|GetOpponentFrontAIS|int GetOpponentFrontAIS(int a1)||
|805A2F0|GetAISNextBattleAnimRoundType|int GetAISNextBattleAnimRoundType(int a1)||
|805A310|GetAISCurrentRoundType|int GetAISCurrentRoundType(int a1)||
|805A9C0|StartEkrAnimeDrvProc|int StartEkrAnimeDrvProc()||
|805A9E0|EndEkrAnimeDrvProc|int EndEkrAnimeDrvProc()||
|805A9F4|ExecAllAIS|int ExecAllAIS()||
|805AA00|StartEkrUnitMainMini|int StartEkrUnitMainMini(int a1)||
|805AA4C|EkrUnitMainMini_OnLoop|int EkrUnitMainMini_OnLoop(int a1)||
|805B01C|SetBattleAnimArenaFlag|int SetBattleAnimArenaFlag(int result)||
|805B028|GetBattleAnimArenaFlag|int GetBattleAnimArenaFlag()||
|805B07C|PlayBattleCroudSfxIfArena|int PlayBattleCroudSfxIfArena()||
|805B0A8|BeginAnimsOnBattle_Arena|int BeginAnimsOnBattle_Arena()||
|805B0F0|NewEkrTogiInitPROC|int NewEkrTogiInitPROC()||
|805B278|NewEkrTogiEndPROC|int NewEkrTogiEndPROC()||
|805B34C|NewEkrTogiColor|int NewEkrTogiColor()||
|805B380|EndEkrTogiColor|int EndEkrTogiColor()||
|805B3CC|StartSpellAnimation|int StartSpellAnimation(int a1)||
|805BC80|StartSpellThing_MagicQuake|int StartSpellThing_MagicQuake(int a1, __int16 a2, int a3)||
|805BCC4|Loop6C_efxMagicQUAKE|int Loop6C_efxMagicQUAKE(int a1)||
|805BE90|StartSpellAnimDummy|int StartSpellAnimDummy(int a1)||
|805BEB4|Loop6C_efxDummymagic|int Loop6C_efxDummymagic(int a1)||
|805BF08|StartSpellAnimHandAxe|int StartSpellAnimHandAxe(int a1)||
|805C264|StartSpellAnimArrow|int StartSpellAnimArrow(int a1)||
|805C3F0|StartSpellAnimJavelin|int StartSpellAnimJavelin(int a1)||
|805C934|StartSpellAnimSong|int StartSpellAnimSong(int a1)||
|805CBDC|StartSpellAnimDance|int StartSpellAnimDance(int a1)||
|805CEC4|nullsub_42|void nullsub_42()||
|805D064|StartSpellAnimFireBreath|int StartSpellAnimFireBreath(int a1)||
|805D388|StartSpellAnimIceBreath|int StartSpellAnimIceBreath(int a1)||
|805D4D0|StartSpellAnimDarkBreath|int StartSpellAnimDarkBreath(int a1)||
|805D508|Loop6C_efxDarkbreath|int Loop6C_efxDarkbreath(int a1)||
|805D7D8|StartSpellAnimThunder|int StartSpellAnimThunder(int a1)||
|805D814|EfxThunder_Main|int EfxThunder_Main(int a1)||
|805D8B4|StartEfxThunderBG|int StartEfxThunderBG(int a1)||
|805D938|EfxThunderBG_Main|int EfxThunderBG_Main(int a1)||
|805D9BC|StartEfxThunderBGCOL|int StartEfxThunderBGCOL(int a1)||
|805D9F8|EfxThunderBGCOL_Main|int EfxThunderBGCOL_Main(int a1)||
|805DA44|StartEfxThunderOBJ|int StartEfxThunderOBJ(int a1)||
|805DAA4|EfxThunderOBJ_Main|int EfxThunderOBJ_Main(int a1)||
|805DAD4|StartSpellAnimFire|int StartSpellAnimFire(int a1)||
|805DB18|StartSpellAnimElfire|int StartSpellAnimElfire(int a1)||
|805DB5C|EfxFire_Main|int EfxFire_Main(int a1)||
|805DCC4|Loop6C_efxFireBG|int Loop6C_efxFireBG(int a1)||
|805DDF0|StartSubSpell_efxFireHITBG|int StartSubSpell_efxFireHITBG(int a1)||
|805DED8|StartSubSpell_efxElfireBG|int StartSubSpell_efxElfireBG(int a1)||
|805DFA4|StartSubSpell_efxElfireBGCOL|int StartSubSpell_efxElfireBGCOL(int a1)||
|805E030|StartSubSpell_efxElfireOBJ|int StartSubSpell_efxElfireOBJ(int a1)||
|805E0E4|StartSpellAnimFimbulvetr|int StartSpellAnimFimbulvetr(int a1)||
|805F354|StartSpellAnimNosferatu|int StartSpellAnimNosferatu(int a1)||
|805F390|EfxResire_Main|int EfxResire_Main(int a1)||
|805FAE0|StartSpellAnimPurge|int StartSpellAnimPurge(int a1)||
|805FE80|nullsub_41|void nullsub_41()||
|805FE84|StartSpellAnimDivine|int StartSpellAnimDivine(int a1)||
|805FEC0|DivineSfxLoop|int DivineSfxLoop(int a1)||
|8060284|nullsub_39|void nullsub_39()||
|8060288|nullsub_40|void nullsub_40()||
|80608A4|StartSpellAnimFenrir|int StartSpellAnimFenrir(int a1)||
|8061024|StartSpellAnimHeal|int StartSpellAnimHeal(int a1)||
|8061158|StartSpellAnimMend|int StartSpellAnimMend(int a1)||
|80612BC|StartSpellAnimRecover|int StartSpellAnimRecover(int a1)||
|80623E0|StartSpellAnimSilence|int StartSpellAnimSilence(int a1)||
|8062678|StartSpellAnimSleep|int StartSpellAnimSleep(int a1)||
|8062998|StartSpellAnimHammerne|int StartSpellAnimHammerne(int a1)||
|8062C14|StartSpellAnimBerserk|int StartSpellAnimBerserk(int a1)||
|8063480|StartSpellAnimShine|int StartSpellAnimShine(int a1)||
|8063974|StartSpellAnimLuna|int StartSpellAnimLuna(int a1)||
|8064CFC|nullsub_51|void nullsub_51()||
|8064E74|StartSpellAnimAura|int StartSpellAnimAura(int a1)||
|8065490|nullsub_52|void nullsub_52()||
|8065494|nullsub_53|void nullsub_53()||
|80657D4|StartSpellAnimIvaldi|int StartSpellAnimIvaldi(int a1)||
|8065810|Loop6C_efxIvaldi|int Loop6C_efxIvaldi(int a1)||
|80659AC|StartSpellBG_IvaldiBG1|int StartSpellBG_IvaldiBG1(int a1)||
|8065A10|Loop6C_efxIvaldiBG1|int Loop6C_efxIvaldiBG1(int a1)||
|8065A80|StartSpellBG_IvaldiBG2|int StartSpellBG_IvaldiBG2(int a1)||
|8065AEC|Loop6C_efxIvaldiBG2|int Loop6C_efxIvaldiBG2(int a1)||
|8065B54|StartSpellBG_IvaldiBG3|int StartSpellBG_IvaldiBG3(int a1)||
|8065BB8|Loop6C_efxIvaldiBG3|int Loop6C_efxIvaldiBG3(int a1)||
|8065C38|StartSpellBG_IvaldiBG4|int StartSpellBG_IvaldiBG4(int a1)||
|8065D84|PrepareSomeIvaldiParticleGraphics|int PrepareSomeIvaldiParticleGraphics()||
|8065DA4|StartSpellOBJ_IvaldiFall|int StartSpellOBJ_IvaldiFall(int a1, __int16 a2)||
|8065F10|StartSpellOBJ_IvaldiSideWash|int StartSpellOBJ_IvaldiSideWash(int a1, __int16 a2)||
|8065F64|Loop6C_efxIvaldiOBJSideWash|int Loop6C_efxIvaldiOBJSideWash(int a1)||
|80674D4|StartSpellAnimStone|int StartSpellAnimStone(int a1)||
|8067798|StartSpellAnimEvilEye|int StartSpellAnimEvilEye(int a1)||
|8067B7C|StartSpellAnimNaglfar|int StartSpellAnimNaglfar(int a1)||
|8067BB8|Loop6C_efxNaglfar|int Loop6C_efxNaglfar(int a1)||
|8067E1C|Loop6C_efxNaglfarBG|int Loop6C_efxNaglfarBG(int a1)||
|8067EE8|Loop6C_efxNaglfarBG2|int Loop6C_efxNaglfarBG2(int a1)||
|8069EC4|StartSpellAnimCrimsonEye|int StartSpellAnimCrimsonEye(int a1)||
|806C61C|StartEfxDamagaMojiEffect|int StartEfxDamagaMojiEffect(int a1, char a2)||
|806C67C|StartEfxDamageMojiEffectOBJ|int StartEfxDamageMojiEffectOBJ(int a1, int a2)||
|806C71C|StartEfxCriticalEffect|int StartEfxCriticalEffect(int a1)||
|806C9E8|StartEfxPierceCriticalEffect|int StartEfxPierceCriticalEffect(int a1)||
|806E014|StartEfxChillEffect|int StartEfxChillEffect(int a1)||
|806E1F0|StartEfxChillAnime|int StartEfxChillAnime(int a1, int a2)||
|806E30C|nullsub_17|void nullsub_17()||
|806EB78|nullsub_73|void nullsub_73()||
|8070D7C|FillBGRect|int FillBGRect(_WORD *a1, unsigned __int16 a2, int a3, __int16 a4, __int16 a5)||
|807132C|ApplyFlashingPaletteAnimation|int ApplyFlashingPaletteAnimation(__int16 *palBuffer, int palId, int uhh, int clock)||
|80716B0|GetOtherRN_N|int GetOtherRN_N(int a1)||
|80716C8|StartEkrsubAnimeEmulator|int StartEkrsubAnimeEmulator(__int16 a1, __int16 a2, int a3, char a4, int a5, int a6, signed int a7)||
|8071990|SomeBattlePlaySound_8071990|int SomeBattlePlaySound_8071990(int a1, int a2)||
|80719F0|Loop6C_efxSoundSE|int Loop6C_efxSoundSE(int a1)||
|8071A8C|Unset20200AC|int Unset20200AC()||
|8071A98|Set20200AC|signed int Set20200AC()||
|8071AA4|Get20200AC|int Get20200AC()||
|80729E0|EkrClasschgFinished|bool EkrClasschgFinished()||
|8072A00|EndEkrClasschg|int EndEkrClasschg()||
|8072A14|NewEkrClassChg|int NewEkrClassChg(int a1)||
|8072DC8|EndEfxStatusUnit|int EndEfxStatusUnit()||
|80732A4|nullsub_85|void nullsub_85()||
|80734F8|DoesEkrLevelUpSomething|bool DoesEkrLevelUpSomething()||
|8073518|EndEkrLevelUp|int EndEkrLevelUp()||
|8073988|NewEkrLevelup|int NewEkrLevelup(int a1)||
|807460C|nullsub_62|void nullsub_62()||
|8074F3C|HasBattleAnimTriangeAttackEnded|bool HasBattleAnimTriangeAttackEnded()||
|8074F58|nullsub_18|void nullsub_18()||
|8074F5C|StartEkrTriangle|int StartEkrTriangle(int a1)||
|8074F80|EkrTriangle_OnLoop|int EkrTriangle_OnLoop(int a1)||
|8075184|StartEkrPegasusKnight|int StartEkrPegasusKnight(int a1, int a2, int a3, int a4, int a5)||
|807527C|StartEkrPegasusKnightBG|int StartEkrPegasusKnightBG(int a1, int a2, int a3, int a4)||
|8075B20|DoesBattlePopupExist|bool DoesBattlePopupExist()||
|8075B3C|DeleteAnimsOnPopup|int DeleteAnimsOnPopup()||
|8075B78|MakeBattlePopupTileMapFromTSA|int MakeBattlePopupTileMapFromTSA(_WORD *a1, unsigned __int16 a2)||
|8075CA8|DrawBattlePopup|int DrawBattlePopup(int a1, int a2, int a3)||
|8075F18|StartAnimsOnPopups|int StartAnimsOnPopups()||
|807606C|BattlePopup_Wait16Frames|int BattlePopup_Wait16Frames(int a1)||
|8076088|ekrPopup_DrawWRankUp|int ekrPopup_DrawWRankUp(int a1)||
|80760B0|ekrPopup_WaitWRankUp|int ekrPopup_WaitWRankUp(int a1)||
|80760EC|ekrPopup_DrawWRankUp2|int ekrPopup_DrawWRankUp2(int a1)||
|8076114|ekrPopup_WaitWRankUp2|int ekrPopup_WaitWRankUp2(int a1)||
|8076150|ekrPopup_DrawWpnBroke|int ekrPopup_DrawWpnBroke(int a1)||
|8076178|ekrPopup_WaitWpnBroke|int ekrPopup_WaitWpnBroke(int a1)||
|80761B4|ekrPopup_DrawWpnBroke2|int ekrPopup_DrawWpnBroke2(int a1)||
|80761DC|ekrPopup_WaitWpnBroke2|int ekrPopup_WaitWpnBroke2(int a1)||
|807621C|ekrPopup_MarkEnd|int ekrPopup_MarkEnd(int a1)||
|807624C|nullsub_68|void nullsub_68()||
|8076330|BeginAnimsOnBattle_Hensei|int BeginAnimsOnBattle_Hensei()||
|807636C|NewEkrHenseiInitPROC|int NewEkrHenseiInitPROC()||
|8078214|GetSpellAssocStructPtr|__int16 *GetSpellAssocStructPtr(unsigned __int16 a1)||
|8078248|GetSpellAssocCharCount|int GetSpellAssocCharCount(unsigned __int16 a1)||
|8078268|GetSpellAssocMapAnimProcScript|int GetSpellAssocMapAnimProcScript(unsigned __int16 a1)||
|8078278|GetSpellAssocReturnBool|int GetSpellAssocReturnBool(unsigned __int16 a1)||
|8078288|GetSpellAssocFacing|int GetSpellAssocFacing(unsigned __int16 a1)||
|8078298|GetSpellAssocFlashColor|int GetSpellAssocFlashColor(unsigned __int16 a1)||
|80782EC|GenerateMonsterLevel|signed int GenerateMonsterLevel(unsigned __int8 a1)||
|8078324|GenerateMonsterClass|int GenerateMonsterClass(unsigned __int8 a1)||
|8078350|GenerateMonsterItems|int GenerateMonsterItems(unsigned __int8 a1)||
|807840C|MU_Init|int MU_Init()||
|8078428|MU_CreateExt|int MU_CreateExt(int a1, unsigned __int16 a2, int a3)||
|8078464|MU_Create|int MU_Create(signed int a1)||
|80784D8|MU_ManualUpdate|int MU_ManualUpdate()||
|80784E4|MU_EnableAttractCamera|_BYTE *MU_EnableAttractCamera(int a1)||
|80784EC|MU_DisableAttractCamera|_BYTE *MU_DisableAttractCamera(int a1)||
|80784F4|MU_CreateForUI|int MU_CreateForUI(signed int a1, __int16 a2, __int16 a3)||
|8078540|MU_CreateInternal|int MU_CreateInternal(__int16 a1, __int16 a2, unsigned __int16 a3, signed int a4, unsigned __int8 a5)||
|8078694|MU_SetFacing|int MU_SetFacing(int a1, int a2)||
|80786BC|MU_SetDefaultFacing|int MU_SetDefaultFacing(int a1)||
|80786E8|MU_SetDefaultFacing_Auto|int MU_SetDefaultFacing_Auto()||
|8078700|MU_StartMoveScript_Auto|int MU_StartMoveScript_Auto()||
|8078720|MU_Exists|bool MU_Exists()||
|8078738|MU_IsAnyActive|signed int MU_IsAnyActive()||
|8078770|MU_IsActive|bool MU_IsActive(int a1)||
|8078790|MU_StartMoveScript|int MU_StartMoveScript(int a1, int a2)||
|80787C4|MU_CreateScripted|int MU_CreateScripted(__int16 a1, __int16 a2, unsigned __int16 a3, unsigned __int8 a4, int a5)||
|80787FC|MU_StepSound_OnInit|_WORD *MU_StepSound_OnInit(int a1)||
|8078810|MU_StepSound_OnFirstSound|int MU_StepSound_OnFirstSound(int a1)||
|8078824|MU_StepSound_OnSecondSound|int MU_StepSound_OnSecondSound(int a1)||
|807883C|MU_StartStepSfx|int MU_StartStepSfx(int a1, int a2, __int16 a3)||
|8078888|MU_PlayStepSfx|int MU_PlayStepSfx()||
|8078894|MU_8078894|void MU_8078894()||
|8078898|MU_InterpretCommandScript|int MU_InterpretCommandScript(int a1)||
|8078A14|MU_StartFogBumpFx|int MU_StartFogBumpFx(int a1, int a2)||
|8078A64|MU_FogBumpFx_FirstFrame|int MU_FogBumpFx_FirstFrame(int a1)||
|8078B08|MU_FogBumpFx_TransitionInLoop|int MU_FogBumpFx_TransitionInLoop(int a1)||
|8078BCC|MU_FogBumpFx_DisplayLoop|int MU_FogBumpFx_DisplayLoop(int a1)||
|8078BFC|MU_IsFogBumpFxActive|bool MU_IsFogBumpFxActive()||
|8078C14|MU_State_WaitForFogBump|int MU_State_WaitForFogBump(int a1)||
|8078C30|MU_State_StartMovement|_BYTE *MU_State_StartMovement(int a1)||
|8078C38|MU_State_WaitForTimer|int MU_State_WaitForTimer(int a1)||
|8078C58|MU_State_None|void MU_State_None()||
|8078C5C|MU_State_NoOp|void MU_State_NoOp()||
|8078C60|MU_State_DuringMovement|int MU_State_DuringMovement(int a1)||
|8078D6C|MU_AdvanceStepSfx|int MU_AdvanceStepSfx(int a1)||
|8079030|MU_OnLoop|int MU_OnLoop(int a1)||
|8079090|MU_OnEnd|int MU_OnEnd(int a1)||
|80790A4|MU_EndAll|int MU_EndAll()||
|80790B4|MU_End|int MU_End()||
|80790C0|MU_EndInternal|int MU_EndInternal(int a1)||
|80790CC|MU_80790CC|int MU_80790CC(int a1)||
|80790E0|MU_AllDisable|int MU_AllDisable()||
|80790EC|MU_AllEnable|int MU_AllEnable()||
|80790F8|MU_GetComputedEndPosition|int MU_GetComputedEndPosition(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3)||
|807916C|MU_CanStart|signed int MU_CanStart()||
|8079190|MU_AllRestartAnimations|int MU_AllRestartAnimations()||
|80791CC|MU_GenerateConfigDefault|MOVEUNITExtraData *MU_GenerateConfigDefault(__int16 a1, _BYTE *a2)||
|807920C|MU_GenerateConfigOther|MOVEUNITExtraData *MU_GenerateConfigOther(__int16 a1, _BYTE *a2)||
|807924C|MU_ComputeDisplayPosition|signed int MU_ComputeDisplayPosition(int a1, _WORD *a2)||
|80792F8|MU_DisplayAsSMS|int MU_DisplayAsSMS(int a1)||
|80793A4|MU_DisplayAsMMS|int MU_DisplayAsMMS(int a1)||
|807947C|MU_GetMovementSpeed|signed int MU_GetMovementSpeed(int a1)||
|807953C|MU_SetMoveConfig|int MU_SetMoveConfig(int a1, unsigned __int16 a2)||
|8079558|MU_GetGfxBufferById|char *MU_GetGfxBufferById(int a1)||
|8079574|MU_GetSheetGfx|__int16 *MU_GetSheetGfx(int a1)||
|8079588|MU_GetAnimationByClassId|int MU_GetAnimationByClassId(int a1)||
|807959C|MU_StartDeathFade|int MU_StartDeathFade(signed int a1)||
|8079618|MU_DeathFade_OnLoop|int MU_DeathFade_OnLoop(int a1)||
|8079654|MU_BlinkEffect_OnLoop|int MU_BlinkEffect_OnLoop(int a1)||
|807968C|MU_StartBlinkEffect|int MU_StartBlinkEffect(signed int a1)||
|80796D4|MU_SetupPixelEffect|int MU_SetupPixelEffect(int a1, int a2)||
|8079730|MU_PixelEffect_OnLoop|int MU_PixelEffect_OnLoop(int a1)||
|8079788|MU_StartPixelEffect|int MU_StartPixelEffect(signed int a1)||
|80797D4|MU_Hide|_BYTE *MU_Hide(int a1)||
|80797DC|MU_Show|_BYTE *MU_Show(int a1)||
|80797E4|MU_SetDisplayPosition|_WORD *MU_SetDisplayPosition(int a1, __int16 a2, __int16 a3)||
|80797F4|MU_SetDisplayOffset|_WORD *MU_SetDisplayOffset(int a1, __int16 a2, __int16 a3)||
|8079804|MU_StartFlashFade|int MU_StartFlashFade(int a1, int a2)||
|8079858|MU_8079858|int MU_8079858(int a1)||
|807988C|MU_807988C|int MU_807988C(int a1)||
|80798B0|MU_StartActionAnim|int MU_StartActionAnim(int a1)||
|80798E0|MU_EndSelectionApAnim|int MU_EndSelectionApAnim(int result)||
|80798E8|MU_StartDelayedFaceTarget|int MU_StartDelayedFaceTarget(int a1)||
|807990C|MU_EndRefaceApAnim|int MU_EndRefaceApAnim(int a1)||
|8079944|MU_StartFastMoveAnim|int MU_StartFastMoveAnim(int a1)||
|8079968|MU_EndFasterApAnim|int MU_EndFasterApAnim(int result)||
|8079970|MU_StartCritFlash|int MU_StartCritFlash(signed int a1, int a2)||
|80799A0|MU_CritFlash_Init|_BYTE *MU_CritFlash_Init(int a1)||
|80799A8|MU_CritFlash_SetFadedPalette|int MU_CritFlash_SetFadedPalette(int a1)||
|80799C8|MU_CritFlash_SetRegularPalette|int MU_CritFlash_SetRegularPalette(int a1)||
|80799EC|MU_CritFlash_StartFadeBack_maybe|int MU_CritFlash_StartFadeBack_maybe(int a1)||
|8079A10|MU_CritFlash_SpriteShakeLoop|int MU_CritFlash_SpriteShakeLoop(int a1)||
|8079A50|MU_CritFlash_RestorePalette|int MU_CritFlash_RestorePalette(int a1)||
|8079A74|MU_StartHitFlash|int MU_StartHitFlash(signed int a1, int a2)||
|8079AD4|MU_HitFlash_RestorePalette|int MU_HitFlash_RestorePalette(int a1)||
|8079AF8|MU_AllForceSetMaxMoveSpeed|int MU_AllForceSetMaxMoveSpeed()||
|8079B10|MU_ForceSetMaxMoveSpeed|_BYTE *MU_ForceSetMaxMoveSpeed(int a1)||
|8079B18|MU_SetSpecialSprite|int MU_SetSpecialSprite(int a1, char a2, int a3)||
|8079B6C|MU_SetPaletteId|int MU_SetPaletteId(int a1, char a2)||
|8079B90|MU_GetByIndex|int MU_GetByIndex(int a1)||
|8079BB8|MU_GetByUnit|int MU_GetByUnit(int a1)||
|8079BE0|MU_SortObjLayers|int MU_SortObjLayers()||
|8079CD8|CopyEventMoveToBuffer|char *CopyEventMoveToBuffer(char *result, unsigned __int8 a2)||
|8079D40|ClearEventMoveBuffer|int ClearEventMoveBuffer(char *a1)||
|8079DDC|MuCtr_CreateWithReda|int MuCtr_CreateWithReda(int a1, char a2, char a3, char a4)||
|8079E78|MuCtr_InitFromReda|int MuCtr_InitFromReda(int a1, signed int a2, int a3, int a4, unsigned __int16 a5)||
|8079F84|MuCtr_Exists|bool MuCtr_Exists()||
|8079F9C|MU_AllForceSetMaxMoveSpeed_|int MU_AllForceSetMaxMoveSpeed_()||
|807A014|MoveUnit_|int MoveUnit_(int a1, char a2, char a3, unsigned __int16 a4)||
|807A054|GetPreferredPositionForUNIT|int GetPreferredPositionForUNIT(unsigned __int8 *a1, _BYTE *a2, _BYTE *a3, char a4)||
|807A1FC|MuCtr_OnEnd|int MuCtr_OnEnd(int a1)||
|807A358|MuCtr_ExecREDA_807A358|int MuCtr_ExecREDA_807A358(int a1)||
|807A4E8|GetAdjustedPositionForNewUnit|int GetAdjustedPositionForNewUnit(int a1, signed __int16 *a2, char a3)||
|807A708|MapAnimProc_DisplayItemStealingPopup|int MapAnimProc_DisplayItemStealingPopup(int a1)||
|807A72C|MapAnimProc_DisplayWpnBrokePopup|int MapAnimProc_DisplayWpnBrokePopup(int a1)||
|807A770|BattleUnit_ShouldDisplayWpnBroke|int BattleUnit_ShouldDisplayWpnBroke(int a1)||
|807A794|MapAnimProc_DisplayWRankUpPopup|int MapAnimProc_DisplayWRankUpPopup(int a1)||
|807A7D8|BattleUnit_ShouldDisplayWRankUp|bool BattleUnit_ShouldDisplayWRankUp(int a1)||
|807A800|_InitFontForUIDefault|int InitFontForUIDefault()||
|807A80C|MapAnim_Cleanup|int MapAnim_Cleanup()||
|807A838|MapAnim_AdvanceBattleRound|int MapAnim_AdvanceBattleRound()||
|807A894|MapAnimProc_PrepareNextRound|int MapAnimProc_PrepareNextRound(int a1)||
|807A8F0|MapAnimProc_StartRoundAnimProc|int MapAnimProc_StartRoundAnimProc(signed int a1)||
|807A904|MapAnimProc_DisplayRoundSpecialAnims|int MapAnimProc_DisplayRoundSpecialAnims(signed int a1)||
|807A940|MapAnimProc_MoveCameraOntoSubject|int MapAnimProc_MoveCameraOntoSubject(signed int a1)||
|807A95C|MapAnimProc_MoveCameraOntoTarget|int MapAnimProc_MoveCameraOntoTarget(signed int a1)||
|807A984|MapAnimProc_DisplayDeathQuote|int MapAnimProc_DisplayDeathQuote()||
|807AA00|MapAnimProc_DisplayDeathFade|int MapAnimProc_DisplayDeathFade()||
|807AA4C|MapAnimProc_DisplayExpBar|int MapAnimProc_DisplayExpBar(signed int a1)||
|807ABB8|MapAnim_CallBattleQuoteEvents|int MapAnim_CallBattleQuoteEvents()||
|807ACD0|PlaySoundIdA0|int PlaySoundIdA0()||
|807AD08|New6C_SummonGfx_FromActionPos|int New6C_SummonGfx_FromActionPos(int a1)||
|807B334|CreateMapBattleMU|int CreateMapBattleMU(int a1, int a2, int a3)||
|807B3BC|SetBattleAnimActorFacing|int SetBattleAnimActorFacing(int a1, int a2, signed int a3)||
|807B464|SetupMapBattleMUs|int SetupMapBattleMUs()||
|807B68C|StartSomeMapAnim_807B68C|int StartSomeMapAnim_807B68C()||
|807B6E4|BeginMapAnimForSteal|int BeginMapAnimForSteal()||
|807B740|BeginMapAnimForSummon|int BeginMapAnimForSummon()||
|807B798|BeginMapAnimForSummonDK|int BeginMapAnimForSummonDK()||
|807B854|BeginBattleMapAnims|int BeginBattleMapAnims()||
|807B8D4|SetupMapAnimSpellData|int SetupMapAnimSpellData(int a1, int a2, int a3)||
|807B900|SetupMapBattleAnim|int SetupMapBattleAnim(int a1, int a2)||
|807B9B8|GetFacingDirection|signed int GetFacingDirection(int a1, int a2, int a3, int a4)||
|807BBB8|MapAnim_EndBattleInfoBox|int MapAnim_EndBattleInfoBox()||
|807BBC8|MapAnim_StartBattleInfoBox|int MapAnim_StartBattleInfoBox(char a1, char a2, int a3)||
|807BBF0|MapAnimUi_Clear|int MapAnimUi_Clear()||
|807C02C|MapAnimExpBar_LoadGfx|int MapAnimExpBar_LoadGfx(int a1)||
|807C0DC|MapAnimExpBar_FillInit|int MapAnimExpBar_FillInit()||
|807C0F8|MapAnimExpBar_FillLoop|int MapAnimExpBar_FillLoop(int a1)||
|807C14C|MapAnimExpBar_TransitionInInit|int MapAnimExpBar_TransitionInInit(int a1)||
|807C1AC|MapAnimExpBar_TransitionInLoop|int MapAnimExpBar_TransitionInLoop(int a1)||
|807C210|MapAnimExpBar_StartLevelUp|int MapAnimExpBar_StartLevelUp(int a1)||
|807CB24|MapAnim_BeginMISSAnim|int MapAnim_BeginMISSAnim(int a1)||
|807CB80|MapAnim_BeginNODAMAGEAnim|int MapAnim_BeginNODAMAGEAnim(int a1)||
|807CBDC|MapAnim_BeginWallBreakAnim|int MapAnim_BeginWallBreakAnim(int a1, __int16 a2)||
|807CC28|WallBreakAnim_Init|int WallBreakAnim_Init(int a1)||
|807CC78|StartMapAnimPoisonEffect|int StartMapAnimPoisonEffect(int a1)||
|807CCC0|MapAnim_BeginPoisonAnim|int MapAnim_BeginPoisonAnim(int a1)||
|807D82C|NewMapAnimEffectAnimator|int NewMapAnimEffectAnimator(int a1, int a2, int a3, __int16 a4)||
|807DAA8|StartUnitWarpRing|int StartUnitWarpRing(int a1)||
|807EA98|MapAnimLevelUp_InitLevelUpBox|int MapAnimLevelUp_InitLevelUpBox(int a1, int a2, int a3)||
|807EBA4|MapAnimLevelUp_DrawActorStat|int MapAnimLevelUp_DrawActorStat(int a1, int a2, int a3, int a4, char a5)||
|807EC08|MapAnimLevelUp_GetActorStatUp|signed int MapAnimLevelUp_GetActorStatUp(int a1, int a2)||
|807ED30|MapAnimLevelUp_GetActorStatBase|int MapAnimLevelUp_GetActorStatBase(int a1, int a2)||
|807F10C|MapAnim_StartLevelUp|int MapAnim_StartLevelUp(__int16 a1, signed int a2)||
|807F1AC|MapAnimLevelUpProc_InitLevelUpBox|int MapAnimLevelUpProc_InitLevelUpBox(int a1)||
|807F478|MapAnimLevelUpProc_StartMusicThingy|int MapAnimLevelUpProc_StartMusicThingy(int a1)||
|807F48C|MapAnimLevelUpProc_DisplayLevelUpSmallText|int MapAnimLevelUpProc_DisplayLevelUpSmallText(int a1)||
|807F53C|MapAnimLevelUpProc_ClearLevelUpSmallText|int MapAnimLevelUpProc_ClearLevelUpSmallText()||
|807F614|NewBG0Shaker|int NewBG0Shaker()||
|807F628|BG0Shaker_Init|_WORD *BG0Shaker_Init(int a1)||
|807F630|BG0Shaker_Loop|int BG0Shaker_Loop(int a1)||
|807F6C0|LoadSparkGfx|int LoadSparkGfx()||
|807F7F8|StartStarRotationEffect|int StartStarRotationEffect(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)||
|807F838|StartStarExplosionEffect|int StartStarExplosionEffect(__int16 a1, __int16 a2)||
|807F858|StartStarImplosionEffect|int StartStarImplosionEffect(__int16 a1, __int16 a2)||
|8080D2C|New6C_SummonGfx|int New6C_SummonGfx(signed int a1, int a2, int a3)||
|808125C|nullsub_58|void nullsub_58()||
|8081260|MapAnim_GetRoundProcScript|int *MapAnim_GetRoundProcScript()||
|8081278|MapAnim_AnimateSubjectIdle|int MapAnim_AnimateSubjectIdle()||
|808129C|MapAnim_SubjectResetAnim|int MapAnim_SubjectResetAnim()||
|80813F8|MapAnim_BeginSubjectFastAnim|int MapAnim_BeginSubjectFastAnim()||
|80814D4|MapAnim_MoveSubjectsTowardsTarget|int MapAnim_MoveSubjectsTowardsTarget()||
|8081534|MapAnim_MoveSubjectsAwayFromTarget|int MapAnim_MoveSubjectsAwayFromTarget()||
|8081594|MapAnim_MoveCameraOnSubject|int MapAnim_MoveCameraOnSubject(signed int a1)||
|80815C0|MapAnim_MoveCameraOnTarget|int MapAnim_MoveCameraOnTarget(signed int a1)||
|80815EC|MapAnim_MoveCameraOnWarpTarget|int MapAnim_MoveCameraOnWarpTarget(signed int a1)||
|808161C|MapAnim_BeginRoundSpecificAnims|int MapAnim_BeginRoundSpecificAnims()||
|8081914|MapAnim_WaitForHPToEndChangingMaybe|int MapAnim_WaitForHPToEndChangingMaybe(int a1)||
|8081930|MapAnimProc_PoisonEffectOnDefender|int MapAnimProc_PoisonEffectOnDefender()||
|8081B70|MapAnim_TargetUnitWarpRing|int MapAnim_TargetUnitWarpRing()||
|8081BCC|MapAnim_WarpTargetWarpRing|int MapAnim_WarpTargetWarpRing()||
|8081CD4|MapAnim_TargetUnitFlashOut|int MapAnim_TargetUnitFlashOut()||
|8081CF8|MapAnim_TargetUnitFlashIn|int MapAnim_TargetUnitFlashIn()||
|8081D1C|MapAnim_TargetHide|int MapAnim_TargetHide()||
|8081D40|MapAnim_TargetStarExplosion|int MapAnim_TargetStarExplosion()||
|8081D84|MapAnim_TargetStarImplosion|int MapAnim_TargetStarImplosion()||
|8081DE0|MapAnim_TargetShow|int MapAnim_TargetShow()||
|8081E04|MapAnim_MoveTargetForWarp|int MapAnim_MoveTargetForWarp()||
|8082E80|CallEventDefinition|int CallEventDefinition(int a1, unsigned __int8 a2)||
|8082EC4|CheckEventDefinition|unsigned __int16 **CheckEventDefinition(unsigned __int16 **a1)||
|8082F28|CheckNextEventDefinition|unsigned __int16 **CheckNextEventDefinition(unsigned __int16 **a1)||
|80831AC|IsThereClosedChestAt|bool IsThereClosedChestAt(char a1, char a2)||
|80831F0|IsThereClosedDoorAt|bool IsThereClosedDoorAt(char a1, char a2)||
|8083250|ShouldCallEndEvent|int ShouldCallEndEvent(int a1)||
|808326C|MaybeCallEndEvent_|int MaybeCallEndEvent_(int a1)||
|8083280|CallEndEvent|int CallEndEvent()||
|80832D8|CheckWin|int CheckWin()||
|80832E8|MaybeCallEndEvent|int MaybeCallEndEvent()||
|8083308|GetCurrentChapterBallistaePtr|int GetCurrentChapterBallistaePtr()||
|8083320|GetCurrentChapterBallistae2Ptr|int GetCurrentChapterBallistae2Ptr()||
|8083348|GetChapterAllyUnitDefinitions|int GetChapterAllyUnitDefinitions()||
|80833B0|GetChapterEnemyUnitDefinitions|int GetChapterEnemyUnitDefinitions()||
|8083400|GetChapterSkirmishLeaderClasses|int GetChapterSkirmishLeaderClasses(unsigned __int8 a1, _BYTE *a2)||
|80834B0|ShouldCallBattleQuote|bool ShouldCallBattleQuote(int a1, int a2)||
|8083504|CallBattleQuoteEventsIfAny|int CallBattleQuoteEventsIfAny(int a1, unsigned __int8 a2)||
|80835A8|ShouldDisplayDeathQuoteForChar|signed int ShouldDisplayDeathQuoteForChar(unsigned __int8 a1)||
|80835DC|DisplayDeathQuoteForChar|int DisplayDeathQuoteForChar(unsigned __int8 a1)||
|8083830|EvCheck00_Always|signed int EvCheck00_Always()||
|8083834|EvCheck01_AFEV|signed int EvCheck01_AFEV(int *a1)||
|8083864|EvCheck02_TURN|signed int EvCheck02_TURN(int *a1)||
|80838AC|EvCheck03_CHAR|signed int EvCheck03_CHAR(int *a1)||
|80838FC|EvCheck04_CHARASM|signed int EvCheck04_CHARASM(int *a1)||
|8083938|EvCheck05_LOCA|signed int EvCheck05_LOCA(int *a1)||
|8083978|EvCheck06_VILL|signed int EvCheck06_VILL(int *a1)||
|808398C|EvCheck07_CHES|signed int EvCheck07_CHES(int a1)||
|80839C8|EvCheck08_DOOR|signed int EvCheck08_DOOR(_DWORD *a1)||
|8083A10|EvCheck09_|signed int EvCheck09_(_DWORD *a1)||
|8083A58|EvCheck0A_SHOP|signed int EvCheck0A_SHOP(char *a1)||
|8083AA4|EvCheck0B_AREA|signed int EvCheck0B_AREA(_DWORD *a1)||
|8083B24|EvCheck0C_Never|int EvCheck0C_Never()||
|8083B28|EvCheck0D_Never|int EvCheck0D_Never()||
|8083B2C|EvCheck0E_|signed int EvCheck0E_(_DWORD *a1)||
|8083B58|EvCheck0F_|signed int EvCheck0F_(_DWORD *a1)||
|8083B98|EvCheck10_|signed int EvCheck10_(_DWORD *a1)||
|8083BD8|SetLocalEventId|int SetLocalEventId(int a1)||
|8083C0C|UnsetLocalEventId|int UnsetLocalEventId(int a1)||
|8083C48|ClearLocalEvents|int ClearLocalEvents()||
|8083C60|CheckLocalEventId|bool CheckLocalEventId(int a1)||
|8083CA0|SetGlobalEventId|int SetGlobalEventId(signed int a1)||
|8083CD8|UnsetGlobalEventId|int UnsetGlobalEventId(signed int a1)||
|8083D18|ClearGlobalTriggerState|int ClearGlobalTriggerState()||
|8083D34|CheckGlobalEventIdFrom|bool CheckGlobalEventIdFrom(signed int a1, int a2)||
|8083D6C|CheckGlobalEventId|bool CheckGlobalEventId(signed int a1)||
|8083D80|SetEventId|int SetEventId(signed int a1)||
|8083D94|UnsetEventId|int UnsetEventId(signed int a1)||
|8083DA8|CheckEventId|int CheckEventId(int a1)||
|8083DC0|GetGlobalEventIdStorage|char *GetGlobalEventIdStorage()||
|8083DC8|GetGlobalEventIdStorageSize|signed int GetGlobalEventIdStorageSize()||
|8083DCC|GetLocalEventIdStorage|char *GetLocalEventIdStorage()||
|8083DD4|GetLocalEventIdStorageSize|signed int GetLocalEventIdStorageSize()||
|8083E34|CheckTutorialEvent|bool CheckTutorialEvent(char a1)||
|8083E64|RunTutorialEvent|signed int RunTutorialEvent(char a1)||
|8083EB8|RunPhaseSwitchEvents|signed int RunPhaseSwitchEvents(int a1)||
|8083F68|CheckForCharacterEvents|bool CheckForCharacterEvents(int a1, char a2)||
|8083FB0|RunCharacterEvents|int RunCharacterEvents(int a1, char a2)||
|8084078|GetLocationEventCommandAt|int GetLocationEventCommandAt(char a1, char a2)||
|80840C4|RunLocationEvents|int RunLocationEvents(char a1, unsigned __int8 a2)||
|8084330|CheckForPostActionEvents|signed int CheckForPostActionEvents()||
|80843C0|RunPostActionEvents|int RunPostActionEvents()||
|808445C|RunSelectEvents|int RunSelectEvents(int a1)||
|80844B0|RunMoveEventsMaybe|signed int RunMoveEventsMaybe(int a1)||
|8084508|RunPostMoveEvents|signed int RunPostMoveEvents(int a1)||
|8084560|CheckBattleForecastTutorialEvent|bool CheckBattleForecastTutorialEvent(int a1)||
|808457C|RunBattleForecastTutorialEvent|int RunBattleForecastTutorialEvent(int a1)||
|8084590|RunPlayerPhaseStartTutorialEvent|int RunPlayerPhaseStartTutorialEvent(int a1)||
|80845A4|ClearActiveEventRegistry|int ClearActiveEventRegistry()||
|80845B8|RegisterEventActivation|int RegisterEventActivation(int a1, __int16 a2)||
|80845E4|GetEventTriggerId|int GetEventTriggerId(int a1)||
|808464C|GetBattleQuoteEntry|__int16 *GetBattleQuoteEntry(unsigned __int16 a1, unsigned __int16 a2)||
|80846E4|GetCharDeathQuoteEntry|__int16 *GetCharDeathQuoteEntry(unsigned __int16 a1)||
|8084800|IsCharacterForceDeployed_|signed int IsCharacterForceDeployed_(unsigned __int16 a1)||
|8084858|IsSethLArachelMyrrhInnes|signed int IsSethLArachelMyrrhInnes(__int16 a1)||
|8084EE8|IsAnyEnemyUnitAlive|signed int IsAnyEnemyUnitAlive()||
|8084F1C|GetDeadEnemyAmount|int GetDeadEnemyAmount()||
|8084F6C|IsCharDeadAsNonPlayerUnit|signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1)||
|8085374|StartGameOver|int StartGameOver(signed int a1)||
|8085484|ResetAllPlayerUnitState|int ResetAllPlayerUnitState()||
|8085970|TriggerDisableMapIcons|int TriggerDisableMapIcons()||
|808597C|UnTriggerDisableMapIcons|int UnTriggerDisableMapIcons()||
|80859E8|nullsub_20|void nullsub_20()||
|8085F84|nullsub_30|void nullsub_30()||
|8086414|HandleCh5xUnits_Start|int HandleCh5xUnits_Start()||
|8086464|HandleCh5xUnits_End|int HandleCh5xUnits_End()||
|80864CC|CallRouteSplitMenu|int CallRouteSplitMenu(int a1)||
|8086514|MenuCommand_DrawRouteSplit|int MenuCommand_DrawRouteSplit(int a1, int a2)||
|8086564|Command_EirikaMode|signed int Command_EirikaMode()||
|8086580|Command_EphraimMode|signed int Command_EphraimMode()||
|8086BB8|StartScreenMenuScrollingBg|int StartScreenMenuScrollingBg(signed int a1, int a2, signed int a3)||
|8086DBC|EndBG3Slider|int EndBG3Slider()||
|8086DCC|GetSomeUnitId|int GetSomeUnitId()||
|8086E00|DrawLotsaText|int DrawLotsaText(int a1)||
|80870BC|DrawStatScreenBar|int DrawStatScreenBar(int a1, int a2, int a3, int a4, signed int a5, int a6)||
|8087184|DrawUnitStatScreen|int DrawUnitStatScreen()||
|8087484|DrawUnitItemScreen|int DrawUnitItemScreen()||
|8087698|DrawUnitScreenSupportList|int DrawUnitScreenSupportList()||
|8087788|DrawUnitWeaponRank|int DrawUnitWeaponRank(int a1, int a2, int a3, int a4)||
|808784C|DrawUnitWeaponScreen|int DrawUnitWeaponScreen()||
|80878CC|DrawStatScreenPage|void DrawStatScreenPage(int a1)||
|8088670|DrawStatScreen|int DrawStatScreen(int a1)||
|8088920|StatScreenBGVPosManager_Loop|int StatScreenBGVPosManager_Loop()||
|808894C|StartStatScreen|int StartStatScreen(int a1, signed int a2)||
|80889A0|StartStatScreenHelpTextBubble|int StartStatScreenHelpTextBubble(signed int a1, int a2)||
|8089164|StartHelpTextBubble|int StartHelpTextBubble(int a1, signed int a2)||
|808948C|Loop6C_8A00B20_UpdateOAMData|int Loop6C_8A00B20_UpdateOAMData(int *a1)||
|8089624|LoadChapterTitleGfx|int LoadChapterTitleGfx(int a1, unsigned int a2)||
|8089804|LoadDialogueBoxGfx|int LoadDialogueBoxGfx(int a1, int a2)||
|808BBCC|GetCameraMovementSpeedMaybe|signed int GetCameraMovementSpeedMaybe()||
|808BCF8|Loop6CUI1_DisplayTransition|int Loop6CUI1_DisplayTransition(int a1)||
|808BE70|Loop6CUI1_HideTransition|int Loop6CUI1_HideTransition(int a1)||
|808C388|MMB_DrawStatusText|int MMB_DrawStatusText(int a1, int a2, signed int a3)||
|808C45C|DrawMinimugBoxMaybe|int DrawMinimugBoxMaybe(int a1, int a2)||
|808C5D0|InitMinimugBoxMaybe|int InitMinimugBoxMaybe(int a1, unsigned __int16 **a2)||
|808CCC8|Loop6CUI1_Hidden|int Loop6CUI1_Hidden(_BYTE *a1)||
|808CD74|Loop6CUI1_Displayed|int Loop6CUI1_Displayed(int a1)||
|808CE9C|Init6CUI2|int Init6CUI2(int a1)||
|808CEC8|Loop6CUI2|int Loop6CUI2(int a1)||
|808CFC4|InitPlayerPhaseInterfaceMaybe|int InitPlayerPhaseInterfaceMaybe()||
|808D13C|StartPlayerPhaseSideWindows|int StartPlayerPhaseSideWindows()||
|808D150|EndPlayerPhaseSideWindows|int EndPlayerPhaseSideWindows()||
|808D288|Init6CPI|int Init6CPI(int a1)||
|808D47C|Loop16CPI|int Loop16CPI(int a1)||
|808D6D4|Loop26CPI|int Loop26CPI(int a1)||
|808D71C|Loop46CPI|int Loop46CPI(int a1)||
|808D784|Loop36CPI|int Loop36CPI(_BYTE *a1)||
|808DAE4|MinimalVBlankHandler|int MinimalVBlankHandler()||
|808E764|NewChapterStatusScreen|int NewChapterStatusScreen(signed int a1)||
|8090B44|nullsub_63|void nullsub_63()||
|80920C4|StartUnitListMenu|int StartUnitListMenu()||
|8092BE4|SortUnitList_GetUnitSoloAnimation|int SortUnitList_GetUnitSoloAnimation(int a1)||
|8092BF0|SortUnitList|signed int SortUnitList(char a1, char a2)||
|8095354|GetPrepScreenUnitListEntry|int GetPrepScreenUnitListEntry(int a1)||
|8095364|SetPrepScreenUnitListEntry|int *SetPrepScreenUnitListEntry(int a1, int a2)||
|8095374|GetPrepScreenUnitListSize|int GetPrepScreenUnitListSize()||
|8095384|SetPrepScreenUnitListSize|int SetPrepScreenUnitListSize(int result)||
|80953F0|IsCharacterForceDeployed|int IsCharacterForceDeployed(unsigned __int16 a1)||
|809545C|SomeLeftoverFunctionThatReturns0|int SomeLeftoverFunctionThatReturns0()||
|8095460|IsUnitInCurrentRoster|signed int IsUnitInCurrentRoster(_DWORD *a1)||
|80956D8|ReorderPlayerUnitsBasedOnDeployment|int ReorderPlayerUnitsBasedOnDeployment()||
|8095748|SortPlayerUnitsForPrepScreen|int SortPlayerUnitsForPrepScreen()||
|80958BC|InitPrepScreenUnitList|int InitPrepScreenUnitList()||
|80959B4|AtMenu_AutoDeployPrepScreenUnits|int AtMenu_AutoDeployPrepScreenUnits(unsigned __int8 *a1)||
|8095A1C|RestartScreenMenuScrollingBg|int RestartScreenMenuScrollingBg()||
|8095A38|EndScreenMenuScrollingBg|int EndScreenMenuScrollingBg()||
|8096424|AtMenu_LockGame|int AtMenu_LockGame()||
|8096684|NewPrepScreenTraineePromotionManager|int NewPrepScreenTraineePromotionManager()||
|8096698|PrepScreenTraineePromotionManagerExists|bool PrepScreenTraineePromotionManagerExists()||
|8097684|Delete6CMenuScroll|int Delete6CMenuScroll()||
|8097698|Make6CMenuScroll|int Make6CMenuScroll(signed int a1)||
|80981E4|SomethingPrepListRelated|int SomethingPrepListRelated(_DWORD *a1, int a2, char a3)||
|809839C|CanUnitPrepScreenUse|signed int CanUnitPrepScreenUse(int a1)||
|809B36C|nullsub_21|void nullsub_21()||
|809D2C4|StoreConvoyWeaponIconGraphics|int StoreConvoyWeaponIconGraphics(int a1, int a2)||
|80A2C3C|SramInit|int SramInit()||
|80A2CB0|IsSramWorking|int IsSramWorking()||
|80A2CFC|ComputeChecksum16|int ComputeChecksum16(unsigned __int16 *a1, int a2)||
|80A2D28|LoadGeneralGameMetadata|signed int LoadGeneralGameMetadata(int *a1)||
|80A2DA8|SaveGeneralGameMetadata|int SaveGeneralGameMetadata(unsigned __int16 *a1)||
|80A2DD0|SaveGeneralGameMetadataNoChecksum|int SaveGeneralGameMetadataNoChecksum(int a1)||
|80A2ED4|GetSaveDataOffsetPointer|void *GetSaveDataOffsetPointer(int offset)||
|80A2EF8|SaveMetadata_Load|int SaveMetadata_Load(void *buffer, int saveBlockId)||
|80A2F94|SaveMetadata_Save|int SaveMetadata_Save(int a1, signed int a2)||
|80A3064|GetSaveTargetAddress|signed int GetSaveTargetAddress(int a1)||
|80A3114|GetSaveSourceAddress|void *GetSaveSourceAddress(int saveBlockId)||
|80A3130|SaveLocalEventIndexes|int SaveLocalEventIndexes(int a1)||
|80A3150|SaveGlobalEventIndexes|int SaveGlobalEventIndexes(int a1)||
|80A3170|LoadLocalEventIds|int LoadLocalEventIds(int a1)||
|80A3198|LoadPermanentEids|int LoadPermanentEids(int a1)||
|80A31C0|LoadPermanentEidsIn|int LoadPermanentEidsIn(int a1)||
|80A31E4|SaveConvoyItems|int SaveConvoyItems(int a1)||
|80A326C|LoadConvoyItems|int LoadConvoyItems(int a1)||
|80A37A8|SGM_SetCharacterKnown|int SGM_SetCharacterKnown(signed int a1, unsigned __int16 *a2)||
|80A37F0|GGM_IsCharacterKnown|signed int GGM_IsCharacterKnown(signed int a1, int *a2)||
|80A3834|GGM_IsAnyCharacterKnown|signed int GGM_IsAnyCharacterKnown(int *a1)||
|80A38F4|LoadBonusContentData|signed int LoadBonusContentData(unsigned __int16 *a1)||
|80A3950|SaveBonusContentData|int SaveBonusContentData(unsigned __int16 *a1)||
|80A4104|SaveClearedBWLAndChapterWinData|int SaveClearedBWLAndChapterWinData(int a1)||
|80A421C|LoadBWLEntries|int LoadBWLEntries(int a1)||
|80A4248|LoadChapterDataWinArray|int LoadChapterDataWinArray(int a1)||
|80A4264|SaveBWLEntries|int SaveBWLEntries(int a1)||
|80A4288|SaveChapterWinData|int SaveChapterWinData(int a1)||
|80A429C|GetChapterWinDataEntry|int *GetChapterWinDataEntry(int a1)||
|80A42BC|GetNextChapterWinDataEntryIndex|int GetNextChapterWinDataEntryIndex()||
|80A42EC|GetWonChapterCount|int GetWonChapterCount()||
|80A4350|RegisterChapterTimeAndTurnCount|int RegisterChapterTimeAndTurnCount(int a1)||
|80A43D8|GetGameTotalTurnCount|int GetGameTotalTurnCount()||
|80A4404|DoesThisChapterCount|signed int DoesThisChapterCount(unsigned int a1)||
|80A4448|GetGameTotalTime|int GetGameTotalTime()||
|80A4488|GetGameTotalTurnCount2|int GetGameTotalTurnCount2()||
|80A4684|BWL_AddWinOrLossIdk|int BWL_AddWinOrLossIdk(int a1, unsigned __int8 a2, char a3)||
|80A474C|BWL_IncrementMoveValue|int BWL_IncrementMoveValue(int a1)||
|80A478C|BWL_IncrementStatScreenViews|int BWL_IncrementStatScreenViews(int a1)||
|80A47CC|BWL_IncrementDeployCountMaybe|int BWL_IncrementDeployCountMaybe(int a1)||
|80A481C|BWL_AddTilesMoved|int BWL_AddTilesMoved(int a1, int a2)||
|80A487C|BWL_AddExpGained|int BWL_AddExpGained(int a1, int a2)||
|80A48DC|StoreSomeUnitSetFlags|int StoreSomeUnitSetFlags(unsigned __int8 a1)||
|80A4904|BWL_GetTotalBattles|int BWL_GetTotalBattles()||
|80A4928|BWL_GetTotalWins|int BWL_GetTotalWins()||
|80A49A4|BWL_GetTotalExpGained|int BWL_GetTotalExpGained()||
|80A4A34|BWL_AddFavoritismValue|int BWL_AddFavoritismValue(int a1, int a2)||
|80A4B1C|IsPlaythroughIdUnique|signed int IsPlaythroughIdUnique(int a1)||
|80A4B6C|GetNewPlaythroughId|signed int GetNewPlaythroughId()||
|80A4B90|GGM_GetCompletionCount|int GGM_GetCompletionCount(int a1)||
|80A4BB0|GetGlobalCompletionCount|int GetGlobalCompletionCount()||
|80A4BD0|GGM_RegisterCompletedPlaythrough|signed int GGM_RegisterCompletedPlaythrough(int a1, int a2)||
|80A4C08|GetCurerentGameMode|int GetCurerentGameMode()||
|80A4CFC|BWL_GetEntry|int *BWL_GetEntry(unsigned __int8 a1)||
|80A4D28|GetBonusContentClaimFlags|int GetBonusContentClaimFlags()||
|80A4D34|SetBonusContentClaimFlags|int SetBonusContentClaimFlags(int result)||
|80A4D40|SaveBonusContentClaimFlags|int SaveBonusContentClaimFlags(int a1)||
|80A4D5C|LoadBonusContentClaimFlags|int LoadBonusContentClaimFlags(int a1)||
|80A4D80|UpdateLastUsedGameSaveSlot|int UpdateLastUsedGameSaveSlot(char a1)||
|80A4DA0|GetLastUsedGameSaveSlot|int GetLastUsedGameSaveSlot()||
|80A4E08|CopyGameSave|int CopyGameSave(int a1, int a2)||
|80A4E70|SaveNewGame|int SaveNewGame(int a1, int a2, int a3, signed int a4)||
|80A5010|SaveGame|int SaveGame(int a1)||
|80A5128|LoadGame|int LoadGame(int a1)||
|80A5218|SaveMetadata_CheckId|int SaveMetadata_CheckId(int saveBlockId)||
|80A522C|LoadSavedChapterState|void LoadSavedChapterState(int saveBlockId, void *out)||
|80A524C|LoadSavedBonusClaimFlags|int LoadSavedBonusClaimFlags(int a1)||
|80A5274|LoadSavedWMStuff|int LoadSavedWMStuff(int a1, int a2)||
|80A5290|LoadSavedEid8A|bool LoadSavedEid8A(int a1)||
|80A533C|SaveUnit|int SaveUnit(char *a1, int a2)||
|80A5794|LoadSavedUnit|int LoadSavedUnit(int a1, int a2)||
|80A59E0|SaveRNGState_Maybe|int SaveRNGState_Maybe(int a1)||
|80A5A20|ClearSaveBlock|int ClearSaveBlock(signed int a1)||
|80A5A48|SaveSuspendedGame|int SaveSuspendedGame(int a1)||
|80A5C14|LoadSuspendedGame|int LoadSuspendedGame(int a1)||
|80A5DFC|LoadSuspendedChapterState|int LoadSuspendedChapterState(int a1, void *a2)||
|80A5E10|PackUnitStructForSuspend|int PackUnitStructForSuspend(_DWORD *a1, int a2)||
|80A6118|UnpackUnitStructFromSuspend|int UnpackUnitStructFromSuspend(int a1, int a2)||
|80A6370|SaveTrapStructs|int SaveTrapStructs(int a1)||
|80A63B0|GetLastSuspendSaveId|bool GetLastSuspendSaveId()||
|80A63D0|GetNextSuspendSaveId|int GetNextSuspendSaveId()||
|80A63E0|UpdateNextSuspendSaveId|int UpdateNextSuspendSaveId()||
|80A6408|ComputeSaveChecksum|int ComputeSaveChecksum(int a1, int a2)||
|80A6430|SaveMetadata_VerifyChecksum|bool SaveMetadata_VerifyChecksum(int a1)||
|80A6454|SaveMetadata_ComputeChecksum|int SaveMetadata_ComputeChecksum(int a1)||
|80A70B0|SaveWMStuff|int SaveWMStuff(int a1, unsigned __int8 *a2)||
|80A7138|LoadWMStuff|int LoadWMStuff(int a1, int a2)||
|80A9024|Loop6C_savemenu|int Loop6C_savemenu(_BYTE *a1)||
|80AA4C0|Make6C_savemenu|int Make6C_savemenu(signed int a1)||
|80AA518|Make6C_savemenu2|int Make6C_savemenu2(signed int a1)||
|80AA52C|savemenu_SetDifficultyChoice|int savemenu_SetDifficultyChoice(char a1, char a2)||
|80AB300|StartSaveDraw|int StartSaveDraw(signed int a1)||
|80AC3DC|nullsub_64|void nullsub_64()||
|80AC3E0|NewNewGameDifficultySelect|int NewNewGameDifficultySelect(signed int a1)||
|80AD2E8|_CallDifferedLoop|int CallDifferedLoop(int a1)||
|80AD2F8|Get6CDifferedLoop6C|int Get6CDifferedLoop6C(int a1, signed int a2)||
|80AD31C|DeleteEach6CDifferedLoop|int DeleteEach6CDifferedLoop()||
|80AD338|Find6CDifferedLoop|int Find6CDifferedLoop(int a1)||
|80AD5D8|EnableAllGfx|int EnableAllGfx()||
|80ADB7C|StartSmallBrownNameBoxes|int StartSmallBrownNameBoxes(int objNode, int tileOffset, int palIndex, int oam2base, int oam0base, void *parent)||
|80ADC90|EndSmallBrownNameBoxes|int EndSmallBrownNameBoxes()||
|80AE18C|FadeInOut_Init|int FadeInOut_Init(int a1)||
|80AE1A0|FadeIn_Loop|int FadeIn_Loop(int a1)||
|80AE200|FadeOut_Loop|int FadeOut_Loop(int a1)||
|80AE248|FadeInOut_DisableGfx|int FadeInOut_DisableGfx(int a1)||
|80AE2A0|FadeInExists|bool FadeInExists()||
|80AE2B8|FadeOutExists|bool FadeOutExists()||
|80AE2D0|NewFadeIn|int NewFadeIn(int a1)||
|80AE2F4|NewFadeOut|int NewFadeOut(int a1)||
|80AF228|nullsub_65|void nullsub_65()||
|80B05C0|nullsub_66|void nullsub_66()||
|80B0760|InitBonusContentClaimList|bool InitBonusContentClaimList()||
|80B0894|DrawBonusItemMenuEntry|int DrawBonusItemMenuEntry(signed int a1)||
|80B0A24|SetBonusContentClaimed|int SetBonusContentClaimed(int a1)||
|80B0ADC|ClaimBonusItemMenu_Init|int ClaimBonusItemMenu_Init(signed int a1)||
|80B0D38|ClaimBonusItemMenu_MainLoop|int ClaimBonusItemMenu_MainLoop(int a1)||
|80B1688|StartClaimBonusItemMenu|int StartClaimBonusItemMenu(signed int a1)||
|80B2518|nullsub_67|void nullsub_67()||
|80B29F8|Make6C_opinfo|int Make6C_opinfo(char a1, signed int a2)||
|80B4154|Shop6C_GetPortraitIndex|int Shop6C_GetPortraitIndex(int a1)||
|80B41E0|MakeShopArmory|int MakeShopArmory(int a1, int a2, int a3)||
|80B4200|MakeShopVendor|int MakeShopVendor(int a1, int a2, int a3)||
|80B4240|MakeShop|int MakeShop(int a1, __int16 *a2, char a3, signed int a4)||
|80B5D5C|SuspendCommand|int SuspendCommand()||
|80B6070|GetOverallRank|signed int GetOverallRank(int a1, int a2, int a3, int a4, int a5)||
|80B6144|GetChapterTacticsRank|signed int GetChapterTacticsRank()||
|80B61C4|GetChapterSurvivalRank|unsigned int GetChapterSurvivalRank()||
|80B6284|GetChapterDeathCount|int GetChapterDeathCount()||
|80B62DC|GetChapterFundsRank|signed int GetChapterFundsRank()||
|80B6358|GetChapterWinPerc|signed int GetChapterWinPerc()||
|80B63F0|GetChapterCombatRank|signed int GetChapterCombatRank()||
|80B6424|GetChapterExpRank|signed int GetChapterExpRank()||
|80B6504|ComputeChapterRankings|int ComputeChapterRankings()||
|80B8188|nullsub_6|void nullsub_6()||
|80B818C|nullsub_7|void nullsub_7()||
|80B81FC|nullsub_5|void nullsub_5()||
|80B867C|nullsub_57|void nullsub_57()||
|80B8A18|GM_OnEnd|int GM_OnEnd(int a1)||
|80B8D5C|InitGraphicSystemsForWorldMap|int InitGraphicSystemsForWorldMap()||
|80B8FA4|DeployAllBlueUnits|int DeployAllBlueUnits()||
|80B8FD0|nullsub_22|void nullsub_22()||
|80B8FD4|GM_80B8FD4|int GM_80B8FD4()||
|80B9154|GM_80B9154|int GM_80B9154(int a1)||
|80B9A10|WorldMap_HideEverything|int WorldMap_HideEverything()||
|80B9B38|WorldMap_InitChapterTransition|int WorldMap_InitChapterTransition(int a1)||
|80B9CB0|WorldMap_WaitForChapterIntroEvents|int WorldMap_WaitForChapterIntroEvents(int a1)||
|80B9F08|DoNothing|int DoNothing()||
|80BA024|EndWM|int EndWM()||
|80BA2E4|GM_Start|int GM_Start()||
|80BA334|GM_SetupChapterStuff|int GM_SetupChapterStuff(int a1)||
|80BA3D4|GM_CallChapterWMIntroEvent|int GM_CallChapterWMIntroEvent(int a1)||
|80BA718|StartGMapScreenVSync|int StartGMapScreenVSync(int a1, int a2, int a3, int a4, int a5)||
|80BA758|GMapScreen_OnEnd|int GMapScreen_OnEnd(int a1)||
|80BA764|GMapScreen_Init|int GMapScreen_Init(int a1)||
|80BABF0|StartGMapScreen|int StartGMapScreen(signed int a1)||
|80BAC1C|MMS_GetGfx|int MMS_GetGfx(int a1)||
|80BAC30|MMS_GetROMTCS2|int MMS_GetROMTCS2(int a1)||
|80BAC44|GetMapUnitMMSGfxBuffer|char *GetMapUnitMMSGfxBuffer(int a1)||
|80BAC58|GmapUnit_Destruct|int GmapUnit_Destruct(int a1)||
|80BAC64|GmapUnit_Init|int GmapUnit_Init(int result)||
|80BAC78|GmapUnit_Loop|int GmapUnit_Loop(int a1)||
|80BADD4|GetPaletteIdForAllegience|signed int GetPaletteIdForAllegience(signed int a1)||
|80BADF0|NewMapUnit|signed int NewMapUnit(int a1, unsigned __int16 a2, char a3)||
|80BAF0C|MapUnitC_DeleteGmapUnit|int MapUnitC_DeleteGmapUnit(int a1, int a2)||
|80BAF34|MapUnitC_SetPosition|int MapUnitC_SetPosition(int a1, int a2, __int16 a3, __int16 a4)||
|80BAF84|MapUnitC_SetTCSAnim|int MapUnitC_SetTCSAnim(int a1, int a2, char a3)||
|80BB018|MapUnitC_SetTCSOAMIndex|int MapUnitC_SetTCSOAMIndex(int a1, int a2, __int16 a3)||
|80BB038|MapUnitC_SetAllegienceColorIndex|int MapUnitC_SetAllegienceColorIndex(int a1, int a2, int a3)||
|80BB0A4|MapUnitC_MarkSomething|int MapUnitC_MarkSomething(int a1, int a2)||
|80BB1A0|GmapUnitContainer_Destruct|int GmapUnitContainer_Destruct(int a1)||
|80BB1C8|GmapUnitContainer_Init|int GmapUnitContainer_Init(int a1)||
|80BB1E8|NewGmapUnitContainer|int NewGmapUnitContainer(signed int a1, int a2, char a3)||
|80BB20C|GmapUnitFade_Destruct|int GmapUnitFade_Destruct(int a1)||
|80BB264|GmapUnitFade_Init|int GmapUnitFade_Init(int result)||
|80BB348|GmapUnitFade_Loop|int GmapUnitFade_Loop(int a1)||
|80BB5B0|WMLocation_GetChapterId|int WMLocation_GetChapterId(int a1)||
|80BB5E4|WMLoc_GetNextLocId|int WMLoc_GetNextLocId(int a1)||
|80BB718|GmapScreen2_Destruct|int GmapScreen2_Destruct(int a1)||
|80BB724|GmapScreen2_Init|int GmapScreen2_Init(int a1)||
|80BB798|GmapScreen2_Loop|int GmapScreen2_Loop(int a1)||
|80BBA80|nullsub_59|void nullsub_59()||
|80BBA84|GmapCursor_Init|int GmapCursor_Init(int a1)||
|80BBAD4|GmapCursor_Destruct|int GmapCursor_Destruct(int a1)||
|80BBBC4|NewGmapCursor|int NewGmapCursor(signed int a1, int a2, char a3, int a4)||
|80BBEB4|nullsub_38|void nullsub_38()||
|80BC0BC|GMapRoute_StartTransition|int GMapRoute_StartTransition(int a1)||
|80BC184|GMapRoute_EnableBGSyncs|int GMapRoute_EnableBGSyncs(int a1)||
|80BC1B8|GMapRoute_TransitionLoop|int GMapRoute_TransitionLoop(int a1)||
|80BC228|GMapRoute_TransitionEnd|int GMapRoute_TransitionEnd(_BYTE *a1)||
|80BC29C|MapRoute_BeginRouteTransition|int MapRoute_BeginRouteTransition(int a1, signed int a2)||
|80BC2DC|GMapRoute_80BC2DC|int GMapRoute_80BC2DC(int a1)||
|80BC3A4|StartGMapRoute|int StartGMapRoute(signed int a1, int a2, int a3, char a4)||
|80BC8BC|SetupNewWMRoute|signed int SetupNewWMRoute(int a1, int a2, char a3)||
|80BC8EC|WM_RemovePath|signed int WM_RemovePath(int a1, int a2, int a3)||
|80BD068|GetBattleMapType|signed int GetBattleMapType()||
|80BD2A8|nullsub_37|void nullsub_37()||
|80BD2AC|GetCharacterClassId|int GetCharacterClassId(int a1)||
|80BD2EC|MapMUPrim_MakeUnitForChar|int MapMUPrim_MakeUnitForChar(int a1, int a2, int a3)||
|80BD374|MapMUPrim_MakeUnitForClass|int MapMUPrim_MakeUnitForClass(int a1, unsigned __int16 a2, int a3)||
|80BD3E8|MapMUPrim_RemoveLinkedMapUnit|int MapMUPrim_RemoveLinkedMapUnit(int a1)||
|80BD418|nullsub_70|void nullsub_70()||
|80BDC00|nullsub_49|void nullsub_49()||
|80BDC04|MapMU_FillPrim|int MapMU_FillPrim(int a1)||
|80BDC28|NewMapMU|int NewMapMU(signed int a1)||
|80BDC3C|MapMU_SetUnit|int MapMU_SetUnit(int a1, int a2, unsigned __int8 a3, int a4, int a5, int a6)||
|80BDD2C|MapMU_RemoveUnit|int MapMU_RemoveUnit(int a1, int a2)||
|80BE0E8|MapMU_SetUnitTCSOAMIndex|int MapMU_SetUnitTCSOAMIndex(int a1, int a2, __int16 a3)||
|80BE108|MapMU_80BE108|int MapMU_80BE108(int a1, int a2, char a3)||
|80BE534|MapMU_SetUnitClass|int MapMU_SetUnitClass(int a1, int a2, int a3, int a4, int a5)||
|80BE550|MapMU_SetUnitChar|int MapMU_SetUnitChar(int a1, int a2, int a3, int a4, int a5)||
|80BF4D0|WM_PutClassSprite|int WM_PutClassSprite(int a1, int a2, int a3, int a4)||
|80BF504|WM_PutCharSprite|int WM_PutCharSprite(int a1, int a2, int a3, int a4)||
|80BF538|WM_RemoveUnit|int WM_RemoveUnit(int a1)||
|80BF58C|WM_DrawPath|int WM_DrawPath(char a1, signed int a2)||
|80BF5C0|nullsub_50|void nullsub_50()||
|80BFD7C|nullsub_48|void nullsub_48()||
|80C01DC|StartGMapMuEntry|int StartGMapMuEntry(signed int a1)||
|80C0548|nullsub_47|void nullsub_47()||
|80C0858|GetWMCenteredCameraPosition|int GetWMCenteredCameraPosition(__int16 a1, __int16 a2, signed __int16 *a3, signed __int16 *a4)||
|80C18E8|nullsub_72|void nullsub_72()||
|80C1FDC|nullsub_86|void nullsub_86()||
|80C2420|Make6C_Gmap_RM|int Make6C_Gmap_RM(__int16 a1, __int16 a2, char a3, signed int a4)||
|80C24AC|GetWMDisplayPosition|signed int GetWMDisplayPosition(_WORD *a1, _WORD *a2)||
|80C2C54|nullsub_87|void nullsub_87()||
|80C3EC4|nullsub_71|void nullsub_71()||
|80C6100|nullsub_23|void nullsub_23()||
|80C6738|AddSomeChild6C|int AddSomeChild6C(signed int a1)||
|80C674C|DeleteSome6C|int DeleteSome6C()||
|80C6760|StorePaletteToBufferMaybe|int StorePaletteToBufferMaybe(int a1, int a2, unsigned int a3)||
|80C6A54|Initialize6CIntroSequence|int Initialize6CIntroSequence(signed int a1)||
|80C6E90|Until6C2AIs8Callback|int Until6C2AIs8Callback(int a1)||
|80CC1F8|PrepareHealthAndSafetyScreen|int PrepareHealthAndSafetyScreen(int a1)||
|80CC468|NewPromotionMain|int NewPromotionMain(int a1, char a2, char a3)||
|80CC498|NewPromotionMain_raw|int NewPromotionMain_raw(signed int a1)||
|80CC904|PromotionInit_SetNullState|int PromotionInit_SetNullState(int a1)||
|80CC910|PromotionInit_Loop|int PromotionInit_Loop(int a1)||
|80CCA14|NewPromotion|int NewPromotion(signed int a1)||
|80CCA64|ChangePromotionClassDescText|int ChangePromotionClassDescText(int a1)||
|80CCAAC|PromotionDisplay_InitClassName|int PromotionDisplay_InitClassName(int a1, unsigned __int16 a2)||
|80CCB40|PromotionDisplay_DrawClassName|int PromotionDisplay_DrawClassName(int a1)||
|80CCCA4|IsThirdTraineePromotionAllowed|bool IsThirdTraineePromotionAllowed()||
|80CCD34|Make6C_PromotionSub|int Make6C_PromotionSub(signed int a1)||
|80CCD48|PromotionDisplay_Init|int PromotionDisplay_Init(int a1)||
|80CCF60|PromotionDisplay_InitClassDesc|int PromotionDisplay_InitClassDesc(int a1)||
|80CD014|PromotionDisplay_MainLoop|int PromotionDisplay_MainLoop(int a1)||
|80CD570|GetClassAnimationIdForWeapon|int GetClassAnimationIdForWeapon(__int16 *out, int classIndex, int weapon)||
|80CDB34|PromotionCommand_OnSelect|int PromotionCommand_OnSelect(int a1, int a2)||
|80CDCC4|PromotionCommand_OnTextDraw|int PromotionCommand_OnTextDraw(int a1, int a2)||
|80CDD00|PromotionCommand_OnChange|int PromotionCommand_OnChange(int a1, int a2)||
|80CDD38|Usability_ThirdPromotionOption|signed int Usability_ThirdPromotionOption()||
|80CDD78|PromotionMenuSelect_OnInit|int PromotionMenuSelect_OnInit(signed int a1)||
|80CDDD4|nullsub_60|void nullsub_60()||
|80CDDD8|nullsub_61|void nullsub_61()||
|80CDDDC|StartPromotionMenuSelect|int StartPromotionMenuSelect(signed int a1)||
|80CF4B8|m4a_1|int m4a_1(unsigned int a1, unsigned int a2)||
|80CF4C8|SoundMain|int SoundMain()||
|80CF54C|SoundMainRAM|||
|80CF8EA|nullsub_88|int nullsub_88(int a1, int a2, int a3, int (*a4)(int))||
|80CF8F0|SoundMainBTM|int SoundMainBTM(_DWORD *a1)||
|80CF908|RealClearChain|_DWORD *RealClearChain(_DWORD *result)||
|80CF928|ply_fine|int ply_fine(int a1, int a2)||
|80CF958|MPlayJumpTableCopy|int MPlayJumpTableCopy(int a1)||
|80CF98C|ld_r3_tp_adr_i|int ld_r3_tp_adr_i(int a1, int a2)||
|80CF998|ply_goto|int ply_goto(int a1, int a2)||
|80CF9B8|ply_patt|int ply_patt(int a1, int a2)||
|80CF9D4|ply_pend|void ply_pend(int a1, int a2)||
|80CF9E8|ply_rept|int ply_rept(int a1, int a2)||
|80CFA18|ply_prio|int ply_prio(int a1, int a2)||
|80CFA24|ply_tempo|int ply_tempo(int a1, int a2)||
|80CFA38|ply_keysh|int ply_keysh(int a1, int a2)||
|80CFA4C|ply_voice|int ply_voice(int a1, int a2)||
|80CFA7C|ply_vol|int ply_vol(int a1, int a2)||
|80CFA90|ply_pan|int ply_pan(int a1, int a2)||
|80CFAA4|ply_bend|int ply_bend(int a1, int a2)||
|80CFAB8|ply_bendr|int ply_bendr(int a1, int a2)||
|80CFACC|ply_lfodl|int ply_lfodl(int a1, int a2)||
|80CFAD8|ply_modt|int ply_modt(int a1, int a2)||
|80CFAF0|ply_tune|int ply_tune(int a1, int a2)||
|80CFB04|ply_port|void ply_port(int a1, int a2)||
|80CFB1C|m4aSoundVSync|int m4aSoundVSync()||
|80CFB68|MPlayMain|_DWORD *MPlayMain(_DWORD *result, int a2)||
|80CFDC0|nullsub_89|int nullsub_89(int a1, int a2, int a3, int (*a4)(int, int, int))||
|80CFDD0|TrackStop|int TrackStop(int a1, unsigned __int8 *a2, int a3)||
|80D0158|SoundStuff_80D0158|signed int SoundStuff_80D0158(int a1, __int16 a2)||
|80D0178|m4aSoundInit|int m4aSoundInit()||
|80D01F0|m4aSoundMain|int m4aSoundMain()||
|80D01FC|m4aSongNumStart|int m4aSongNumStart(int a1)||
|80D02C8|m4aSongNumStop|int m4aSongNumStop(int a1)||
|80D0394|m4aMPlayFadeOut|int m4aMPlayFadeOut(int a1, __int16 a2)||
|80D03A4|m4aMPlayFadeOutTemporarily|signed int m4aMPlayFadeOutTemporarily(int a1, __int16 a2)||
|80D03C4|m4aMPlayFadeIn|int m4aMPlayFadeIn(int a1, __int16 a2)||
|80D03EC|m4aMPlayImmInit|int m4aMPlayImmInit(int a1)||
|80D0434|MPlayExtender|int MPlayExtender(_BYTE *a1)||
|80D054C|MusicPlayerJumpTableCopy|void MusicPlayerJumpTableCopy()||
|80D0550|ClearChain|int ClearChain(int a1)||
|80D0564|Clear64byte|int Clear64byte(int a1)||
|80D0578|SoundInit|int SoundInit(_DWORD *a1)||
|80D0670|SampleFreqSet|int SampleFreqSet(int a1)||
|80D0714|m4aSoundMode|int m4aSoundMode(int a1)||
|80D07AC|SoundClear|int SoundClear()||
|80D0800|m4aSoundVSyncOff|int m4aSoundVSyncOff()||
|80D087C|m4aSoundVSyncOn|int m4aSoundVSyncOn()||
|80D08B8|MPlayOpen|int MPlayOpen(int a1, _BYTE *a2, unsigned __int8 a3)||
|80D0930|MPlayStart|int MPlayStart(int a1, unsigned __int8 *a2)||
|80D0A14|m4aMPlayStop|int m4aMPlayStop(int a1, int a2, int a3)||
|80D0A54|FadeOutBody|int FadeOutBody(int a1)||
|80D0B1C|TrkVolPitSet|int TrkVolPitSet(int a1, char *a2)||
|80D0BD0|MidiKeyToCgbFreq|int MidiKeyToCgbFreq(char a1, unsigned __int8 a2, unsigned __int8 a3)||
|80D0C78|CgbOscOff|signed int CgbOscOff(signed int a1)||
|80D0CC8|CgbModVol|int CgbModVol(unsigned __int8 *a1)||
|80D11A4|m4aMPlayVolumeControl|int m4aMPlayVolumeControl(int a1, unsigned __int16 a2, int a3)||
|80D1568|ply_memacc|int ply_memacc(int a1, int a2)||
|80D1634|ply_xswee|int ply_xswee(int a1, int a2)||
|80D1640|ply_xcmd_0C|int ply_xcmd_0C(int a1, int a2)||
|80D1654|ply_xcmd_0D|int ply_xcmd_0D(int a1, int a2)||
|80D1668|DummyFunc|void DummyFunc()||
|80D166C|ArcTan2|void ArcTan2()||
|80D1670|BgAffineSet|void BgAffineSet()||
|80D1674|CpuFastSet|void CpuFastSet()||
|80D1678|CpuSet|void CpuSet()||
|80D167C|Div|void Div()||
|80D1680|DivArm|void DivArm()||
|80D1684|Mod|int Mod(int a1, int a2)||
|80D168C|HuffUnComp|void HuffUnComp()||
|80D1690|LZ77UnCompVram|void LZ77UnCompVram()||
|80D1694|LZ77UnCompWram|void LZ77UnCompWram()||
|80D1698|SVC_Multiboot|void SVC_Multiboot()||
|80D16A0|ObjAffineSet|void ObjAffineSet()||
|80D16A4|RLUnCompVram|void RLUnCompVram()||
|80D16A8|RLUnCompWram|void RLUnCompWram()||
|80D16AC|RegisterRamReset|void RegisterRamReset()||
|80D16D8|SVC_Sqrt|void SVC_Sqrt()||
|80D16DC|VBlankIntrWait|void VBlankIntrWait()||
|80D16E4|ReadSramFast_Core|int ReadSramFast_Core(_BYTE *a1, _BYTE *a2, int a3)||
|80D1724|WriteSramFast|int WriteSramFast(_BYTE *a1, _BYTE *a2, int a3)||
|80D1764|VerifySramFast_Core|int VerifySramFast_Core(unsigned __int8 *a1, unsigned __int8 *a2, int a3)||
|80D17B0|SetSramFastFunc|int SetSramFastFunc()||
|80D184C|WriteAndVerifySramFast|int WriteAndVerifySramFast(_BYTE *a1, _BYTE *a2, int a3, int a4)||
|80D188C|llsl_thumb|int llsl_thumb(int result, int a2, int a3)||
|80D18C4|BXR1|int BXR1(int a1, int (*a2)(int))||
|80D18C8|BXR2|int BXR2(int a1, int a2, int a3)||
|80D18CC|BXR3|int BXR3(int a1, int a2, int a3, int (*a4)(int))||
|80D18D0|BXR4|int BXR4(void)||
|80D18D4|BXR5|int BXR5(int a1)||
|80D18D8|BXR6|int BXR6(int a1)||
|80D18DC|BXR7|int BXR7(int a1)||
|80D18E0|BXR8|int BXR8()||
|80D18E4|BXR9|int BXR9(int a1, int a2)||
|80D18E8|BXR10|int BXR10()||
|80D18EC|BXR11|int BXR11()||
|80D18F0|BXR12|int BXR12()||
|80D18F4|BXSP|||
|80D18F8|BXLR|void BXLR()||
|80D18FC|__divsi3|int _divsi3(unsigned int a1, unsigned int a2)||
|80D1990|nullsub_1|void nullsub_1()||
|80D1994|__modsi3|unsigned int _modsi3(unsigned int result, unsigned int a2)||
|80D1AD4|_div|int div(unsigned int a1, unsigned int a2)||
|80D1B4C|__umodsi3|unsigned int _umodsi3(unsigned int result, unsigned int a2)||
|80D1C0C|memcpy|void *memcpy(void *dest, const void *src, unsigned int count)||
|80D1C6C|memset|_BYTE *memset(_BYTE *a1, char a2, unsigned int a3)||
|80D1CC0|.gcc2_compiled._11|int gcc2_compiled__11(int a1, int a2, int a3, ...)||
|80D1CFC|sprintf|int sprintf(_BYTE *a1, int a2, ...)||
|80D1D3C|strcpy|_DWORD *strcpy(_DWORD *a1, int *a2)||
|80D1D88|strlen|int strlen(_DWORD *a1)||
|80D1DCC|strstr|unsigned __int8 *strstr(unsigned __int8 *a1, _BYTE *a2)||
|80D1E10|.gcc2_compiled._15|int gcc2_compiled__15(int a1, int a2)||
|80D1E30|__sbprintf|int _sbprintf(int a1, int a2, int a3)||
|80D1EA4|vfprintf|int vfprintf(int a1, int a2, int a3)||
|80D1EB8|_vfprintf_r|int vfprintf_r(int a1, int a2, int a3, int a4)||
|80D2E18|cvt|_BYTE *cvt(int a1, int a2, int a3, int a4, char a5, char *a6, _DWORD *a7, int a8, _DWORD *a9)||
|80D2F0C|exponent|int exponent(_BYTE *a1, int a2, char a3)||
|80D2F7C|.gcc2_compiled._16|int gcc2_compiled__16(_BYTE *a1, int a2, int a3)||
|80D2FB0|.gcc2_compiled._17|signed int gcc2_compiled__17(int a1)||
|80D31B8|_dtoa_r|const char *dtoa_r(int a1, int a2, unsigned int a3, int a4, signed int a5, _DWORD *a6, unsigned int *a7, int *a8)||
|80D3EB0|.gcc2_compiled._19|int gcc2_compiled__19(int a1)||
|80D3F7C|__sfmoreglue|_DWORD *_sfmoreglue(int a1, int a2)||
|80D3FAC|__sfp|int _sfp(_DWORD *a1)||
|80D4020|_cleanup_r|int cleanup_r(int a1)||
|80D4030|_cleanup|int cleanup()||
|80D4040|__sinit|int _sinit(_DWORD *a1)||
|80D40A0|.gcc2_compiled._21|int gcc2_compiled__21(int result, int a2)||
|80D4260|_malloc_trim_r|signed int malloc_trim_r(int a1, int a2)||
|80D4320|.gcc2_compiled._22|signed int gcc2_compiled__22(int a1, int **a2)||
|80D454C|.gcc2_compiled._23|int gcc2_compiled__23(int a1)||
|80D458C|.gcc2_compiled._24|int *gcc2_compiled__24(int a1, int a2, int a3)||
|80D45C8|_localeconv_r|int **localeconv_r()||
|80D45D0|setlocale|int *setlocale(int a1, int a2)||
|80D45E8|localeconv|int **localeconv()||
|80D45F8|.gcc2_compiled._25|int gcc2_compiled__25(int a1)||
|80D46D4|.gcc2_compiled._26|int *gcc2_compiled__26(int a1, int a2)||
|80D4830|_malloc_r|int malloc_r(int a1, int a2)||
|80D4BF0|.gcc2_compiled._27|signed int gcc2_compiled__27(int a1, int *a2, _BYTE *a3, int a4)||
|80D4C1C|.gcc2_compiled._28|unsigned __int8 *gcc2_compiled__28(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3)||
|80D4C9C|.gcc2_compiled._29|unsigned int gcc2_compiled__29(unsigned int a1, unsigned int a2, unsigned int a3)||
|80D4D24|nullsub_3|void nullsub_3()||
|80D4D28|nullsub_4|void nullsub_4()||
|80D4D2C|.gcc2_compiled._30|_DWORD *gcc2_compiled__30(int a1, int a2)||
|80D4D84|_Bfree|_DWORD *Bfree(_DWORD *result, _DWORD *a2)||
|80D4D9C|_multadd|_DWORD *multadd(int a1, _DWORD *a2, int a3, unsigned int a4)||
|80D4E34|_s2b|_DWORD *s2b(int a1, int a2, signed int a3, signed int a4, int a5)||
|80D4EB8|_hi0bits|signed int hi0bits(int a1)||
|80D4F10|_lo0bits|signed int lo0bits(unsigned int *a1)||
|80D4F94|_i2b|_DWORD *i2b(int a1, int a2)||
|80D4FA8|_multiply|_DWORD *multiply(int a1, _DWORD *a2, _DWORD *a3)||
|80D5114|_pow5mult|_DWORD *pow5mult(int a1, _DWORD *a2, int a3)||
|80D51AC|_lshift|_DWORD *lshift(int a1, _DWORD *a2, int a3)||
|80D524C|__mcmp|int _mcmp(int a1, int a2)||
|80D528C|__mdiff|_DWORD *_mdiff(int a1, int a2, int a3)||
|80D537C|_ulp|int ulp(int a1)||
|80D53C8|_b2d|__int64 b2d(int a1, _DWORD *a2)||
|80D5484|_d2b|_DWORD *d2b(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)||
|80D556C|_ratio|int ratio(int a1, int a2)||
|80D55BC|_mprec_log10|int mprec_log10(signed int a1)||
|80D55FC|.gcc2_compiled._31|unsigned int gcc2_compiled__31(int a1, unsigned int a2)||
|80D5620|.gcc2_compiled._32|unsigned int gcc2_compiled__32(int a1, unsigned int a2)||
|80D5640|.gcc2_compiled._44|int gcc2_compiled__44(_DWORD *a1, int a2)||
|80D566C|.gcc2_compiled._33|int gcc2_compiled__33(int a1, int a2, int a3)||
|80D56A0|__swrite|int _swrite(int a1, int a2, int a3)||
|80D56E0|__sseek|int _sseek(int a1, int a2, int a3)||
|80D5720|__sclose|int _sclose(int a1)||
|80D578C|.gcc2_compiled._35|signed int gcc2_compiled__35(int a1)||
|80D57AC|remap_handle|int remap_handle(int a1)||
|80D57F8|initialise_monitor_handles|int initialise_monitor_handles()||
|80D5868|get_errno|int get_errno()||
|80D587C|error|int error(int a1)||
|80D5890|wrap|int wrap(int result)||
|80D58A8|_swiread|int swiread(int a1, int a2, int a3)||
|80D58CC|_read|int read(int a1, int a2, int a3)||
|80D5914|_swilseek|signed int swilseek(int a1, int a2, int a3)||
|80D5998|_lseek|int lseek(int a1, int a2, int a3)||
|80D59A4|_swiwrite|int swiwrite(int a1, int a2, int a3)||
|80D59C8|_write|int write(int a1, int a2, int a3)||
|80D5A14|_swiopen|int swiopen(_DWORD *a1, __int16 a2)||
|80D5AB4|_open|int open(_DWORD *a1, __int16 a2)||
|80D5AC8|_swiclose|int swiclose(int a1)||
|80D5AFC|_close|int close(int a1)||
|80D5B08|_exit|int exit()||
|80D5B28|_kill|int kill()||
|80D5B48|_getpid|signed int getpid()||
|80D5B4C|_sbrk|int sbrk(unsigned int a1)||
|80D5B88|_fstat|int fstat(int a1, int a2)||
|80D5B94|_unlink|signed int unlink()||
|80D5B9C|_raise|void raise()||
|80D5BA0|_gettimeofday|int gettimeofday(int a1, _DWORD *a2)||
|80D5BCC|_times|int times()||
|80D5BF0|.gcc2_compiled._36|int gcc2_compiled__36(_DWORD *a1, int a2, int a3, int a4)||
|80D5C20|.gcc2_compiled._37|int gcc2_compiled__37(int a1, int a2, int a3)||
|80D5CA4|.gcc2_compiled._39|int *gcc2_compiled__39()||
|80D5CB0|.gcc2_compiled._40|int gcc2_compiled__40(_DWORD *a1, int a2, int a3)||
|80D5CDC|.gcc2_compiled._41|int gcc2_compiled__41()||
|80D5CFC|isatty|signed int isatty()||
|80D5D00|alarm|void alarm()||
|80D5D04|.gcc2_compiled._42|int gcc2_compiled__42(_DWORD *a1, int a2, int a3, int a4)||
|80D5D34|.gcc2_compiled._43|int gcc2_compiled__43(_DWORD *a1, int a2, int a3, int a4)||
|80D5D64|.gcc2_compiled._47|unsigned int gcc2_compiled__47(int a1)||
|80D5EAC|__unpack_d|int _unpack_d(_DWORD *a1, int a2)||
|80D5F84|_fpadd_parts|int *fpadd_parts(_DWORD *a1, int *a2, _DWORD *a3)||
|80D61F0|__adddf3|unsigned int _adddf3(int a1, int a2, int a3, int a4)||
|80D6220|__subdf3|unsigned int _subdf3(int a1, int a2, int a3, int a4)||
|80D6258|__muldf3|unsigned int _muldf3(int a1, int a2, int a3, int a4)||
|80D6500|__divdf3|unsigned int _divdf3(int a1, int a2, int a3, int a4)||
|80D6688|__fpcmp_parts_d|int _fpcmp_parts_d(_DWORD *a1, _DWORD *a2)||
|80D6788|__cmpdf2|int _cmpdf2(int a1, int a2, int a3, int a4)||
|80D67B4|__eqdf2|int _eqdf2(int a1, int a2, int a3, int a4)||
|80D6800|__nedf2|int _nedf2(int a1, int a2, int a3, int a4)||
|80D684C|__gtdf2|int _gtdf2(int a1, int a2, int a3, int a4)||
|80D6898|__gedf2|int _gedf2(int a1, int a2, int a3, int a4)||
|80D68E4|__ltdf2|int _ltdf2(int a1, int a2, int a3, int a4)||
|80D6930|__ledf2|int _ledf2(int a1, int a2, int a3, int a4)||
|80D697C|__floatsidf|unsigned int _floatsidf(__int64 a1)||
|80D69F8|__fixdfsi|int _fixdfsi(int a1, int a2)||
|80D6A6C|__negdf2|unsigned int _negdf2(int a1, int a2)||
|80D6A94|__make_dp|unsigned int _make_dp(int a1, int a2, int a3, int a4, int a5)||
|80D6ABC|__truncdfsf2|int _truncdfsf2(int a1, int a2)||
|80D6B00|.gcc2_compiled._48|unsigned int gcc2_compiled__48(int *a1)||
|80D6BB8|__unpack_f|int _unpack_f(unsigned int *a1, int *a2)||
|80D6C34|_fpadd_parts_0|int *fpadd_parts_0(int *a1, int *a2, int *a3)||
|80D6DB0|__addsf3|unsigned int _addsf3(int a1, int a2)||
|80D6DDC|__subsf3|unsigned int _subsf3(int a1, int a2)||
|80D6E10|__mulsf3|unsigned int _mulsf3(int a1, int a2)||
|80D6F74|__divsf3|unsigned int _divsf3(int a1, int a2)||
|80D7060|__fpcmp_parts_f|int _fpcmp_parts_f(int *a1, int *a2)||
|80D7144|__cmpsf2|int _cmpsf2(int a1, int a2)||
|80D716C|__eqsf2|int _eqsf2(int a1, int a2)||
|80D71B4|__nesf2|int _nesf2(int a1, int a2)||
|80D71FC|__gtsf2|int _gtsf2(int a1, int a2)||
|80D7244|__gesf2|int _gesf2(int a1, int a2)||
|80D728C|__ltsf2|int _ltsf2(int a1, int a2)||
|80D72D4|__lesf2|int _lesf2(int a1, int a2)||
|80D731C|__floatsisf|unsigned int _floatsisf(unsigned int a1)||
|80D737C|__fixsfsi|unsigned int _fixsfsi(int a1)||
|80D73E4|__negsf2|unsigned int _negsf2(int a1)||
|80D7408|__make_fp|unsigned int _make_fp(int a1, int a2, int a3, int a4)||
|80D7420|__extendsfdf2|unsigned int _extendsfdf2(int a1)||
|80D744C|.gcc2_compiled._49|unsigned int gcc2_compiled__49(unsigned int result, unsigned int a2, int a3)||
|80D7480|.gcc2_compiled._50|int gcc2_compiled__50(int a1)||
|80D7498|ClearOAMBuffer|_DWORD *ClearOAMBuffer(_DWORD *result, unsigned int a2)||
|80D74A0|BgTileMap_ApplyTSA|int BgTileMap_ApplyTSA(int a1, int a2, int a3)||
|80D74A8|BgTileMap_FillRect|_WORD *BgTileMap_FillRect(int result, int a2, int a3, int a4)||
|80D74B8|BgTileMap_CopyRect|_WORD *BgTileMap_CopyRect(int result, int a2, int a3, int a4)||
|80D74C0|ComputeChecksum32|int ComputeChecksum32(unsigned __int16 *a1, int a2)||
