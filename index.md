# Functions in GBAFE

|FE6|FE7J|FE7U|FE8J|FE8U|Name|Declaration|Comment|
|----|----|----|----|----|----|----|----|
|8000000|8000000|8000000|8000000|8000000|_start(ARM)|void _start()|Entry Point|
|80000FC|80000FC|80000FC|80000FC|80000FC|intr_main(ARM)|void intr_main()|Interrupt Branch Process (Drawing from table)|
|8000A20|8000A20|8000A50|8000A20|8000A20|AgbMain|[void AgbMain()](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/main.c#L23)|Main Function of a GBA Game|
|8000AFC|8000AF4|8000B1C|8000AE8|8000B10|PrintDebugBuildDateAndTime|[void PrintDebugBuildDateAndTime(u16 *bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/fe3_dummy.c#L5)|print version infomation on this build of the game|
|0|80042FC|8004420|8002B58|8002C08|InitProcSystem|int InitProcSystem()||
|0|8004460|8004584|8002CBC|8002D6C|EndProc|int EndProc(int a1)||
|8003E44|800456C|8004690|8002DD4|8002E84|ExecProc|int ExecProc(int a1)||
|0|80045FC|8004720|8002E74|8002F24|GotoProcLabel|int GotoProcLabel(unsigned __int16 **a1, int a2)||
|0|8004670|8004794|8002EE8|8002F98|ForEachProc|int ForEachProc(int a1)||
|0|80049C4|8004AE8|8003244|80032F8|ProcInst11_EnsureUniqueWeak|signed int ProcInst11_EnsureUniqueWeak(_DWORD *a1)||
|0|8004A04|8004B28|8003284|8003338|ProcInst12_EnsureUniqueStrong|signed int ProcInst12_EnsureUniqueStrong(int *a1)||
|8004920|8004AAC|8004BD0|800332C|80033E0|ForEach6CDoNothing|int ForEach6CDoNothing(_6CStruct *a1, _DWORD *a2)||
|8004978|8004AE4|8004C08|8003364|8003418||||
|0|8004C6C|8004D90|8003570|8003624|GetIconGfxIndex|[int GetIconGfxIndex(int Index)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L51)||
|8004414|8004D04|8004E28|8003608|80036BC|DrawIcon|[void DrawIcon(u16* BgOut, int IconIndex, int OamPalBase) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L89)||
|0|8004F5C|8005080|8003868|800391C|StoreNumberStringOrDashesToSmallBuffer|int StoreNumberStringOrDashesToSmallBuffer(int a1)||
|0|8004FA8|80050CC|80038B4|8003968|StoreNumberHexStringToSmallBuffer|int StoreNumberHexStringToSmallBuffer(int a1)||
|80053B0|80050F4|8005218|8003A08|8003ABC||||
|0|800515C|8005280|8003A70|8003B24|SetupDebugFontForOBJ|int SetupDebugFontForOBJ(int a1, int a2)||
|800566C|80052A4|80053D4|8003BE8|8003CB8|Font_InitForUI|int Font_InitForUI(FontStruct *a1, int a2, __int16 a3, __int16 a4)||
|80058B8|8005394|80054C4|8003CDC|8003DAC|InitClearTextBatch|int InitClearTextBatch(int a1)||
|0|80056D8|8005814|80040B8|8004180|Text_AppendChar|int Text_AppendChar(int a1, unsigned __int8 *a2)||
|8006408|8005998|8005AD4|8004374|800443C|DrawTextInline|int DrawTextInline(unsigned __int8 *a1, _WORD *a2, char a3, char a4, __int16 a5, unsigned __int8 *a6)||
|0|8005B2C|8005C98|8004504|80045FC||||
|0|8005D8C|8005EF8|80047B8|80048B0||||
|8006C9C|8005E88|8005FF4|80048B4|80049AC|NewGreenTextColorManager|int NewGreenTextColorManager(int a1)||
|8006E10|8005FAC|800611C|80049D4|8004ACC|DrawSpecialUiChar_|int DrawSpecialUiChar_(int a1, int a2)||
|8032268|8006074|80061E4|8004A9C|8004B94|DrawUiNumberOrDoubleDashes|int DrawUiNumberOrDoubleDashes(_WORD *a1, int a2, int a3)||
|0|80060D0|8006240|8004AF8|8004BF0|DrawStatScreenBonusNumber|int DrawStatScreenBonusNumber(signed int a1, int a2)||
|0|80060FC|800626C|8004B24|8004C1C||||
|0|8006320|8006490|8004D48|8004E40|UpdateAISs|int UpdateAISs()||
|0|8006424|8006594|8004E50|8004F48|CreateAIS|AIStruct *CreateAIS(int a1, __int16 a2)||
|0|8006488|80065F8|8004EB4|8004FAC|SortAISs|int SortAISs()||
|0|8006698|8006808|80050C8|80051C0|InsertAIS|int InsertAIS(int a1)||
|0|8006840|80069B0|80052AC|80053A4|ClearSprites|[void ClearSprites(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L144)||
|0|80069C4|8006B34|8005430|8005528|Face_Init|int Face_Init()||
|80082D0|8006A98|8006C08|8005518|8005610|StartFaceAuto|int StartFaceAuto(int a1, int a2, int a3, int a4)||
|801AD50|8006BF8|8006D68|8005678|8005770|SetFaceDisplayBits|int SetFaceDisplayBits(int a1, int a2)||
|0|8006DAC|8006F1C|800582C|8005924|LoadMiniMugGraphics|int LoadMiniMugGraphics(int a1, int a2, int a3)||
|0|8007160|80072D0|8005BA8|8005CA4||||
|0|80078D4|8007A44|800633C|8006438|SetFaceBlinkControl|int SetFaceBlinkControl(int a1, int a2)||
|0|8007C10|8007D80|80065AC|80066A8||||
|0|8007C64|8007DD4|80066EC|80067E8|Dialogue_ClearFaceReferences|int Dialogue_ClearFaceReferences()||
|0|8007D28|8007E98|80067B0|80068AC|Dialogue_InitGfxObj|int Dialogue_InitGfxObj(int tileStart, int lineCount, int paletteIndex)||
|80090CC|8007E08|8007F78|8006890|800698C|StartDialogue|int StartDialogue(int a, int b, const char *textString, void *parent)||
|8009524|8008074|80081E4|8006B04|8006C00|DialogueMain_OnInit|int DialogueMain_OnInit()||
|0|8008DC8|8008F38|800785C|8007958||||
|800A918|8008F24|8009094|80079AC|8007AB0||||
|800A9A8|8008F80|80090F0|8007A08|8007B0C||||
|0|80091AC|800931C|8007C34|8007D38||||
|0|8009218|8009388|8007CA0|8007DA4||||
|0|800925C|80093CC|8007CE4|8007DE8|StartDialogueTextChoice|int StartDialogueTextChoice(unsigned __int16 *a1, int a2, int a3, int a4, int a5, int a6)||
|0|8009458|80095C8|8007ED8|8007FDC||||
|0|8009628|8009798|80080E8|80081EC||||
|0|8009834|80099A4|80082F4|80083F8||||
|0|8009920|8009A90|80083DC|80084E0||||
|0|8009AA8|8009C18|8008564|8008668||||
|0|8009DC0|8009F30|800885C|8008960||||
|0|8009E9C|800A00C|8008938|8008A3C||||
|800CCB4|800A4EC|800A4F0|8008E10|8008F20|DialogueEnableBgSyncByMask|int DialogueEnableBgSyncByMask(int a1)||
|0|8011F20|8011888|8008F3C|800904C||||
|0|801227C|8011BE4|80090F0|8009200||||
|0|8012658|8011FC4|800916C|800927C|AP_Create|[struct APHandle* AP_Create(const void* apDefinition, u16 aObjNode) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L65)||
|0|8012694|8012000|80091AC|80092BC|AP_Update|[s8 AP_Update(struct APHandle* handle, int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L80)||
|0|8012B38|80124A4|8009650|8009760|_APProc_OnUpdate|int APProc_OnUpdate(int a1)||
|8017C60|8012B70|80124DC|8009688|8009798|APProc_SetParameters|[void APProc_SetParameters(struct APProc* proc, int x, int y, int tileBase) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L371)||
|0|8012DC8|801274C|8009A3C|8009AEC||||
|0|8013318|8012C60|8009FA8|800A240|GetStringFromIndex|[char *GetStringFromIndex(int index)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/messdecode.c#L80)||
|0|800A7E8|800A7E4|8011080|8010F38|PopupProc_GetInnerLength|int PopupProc_GetInnerLength(int a1)||
|8013BF0|80135D4|80130B4|8012F50|8012E98||||
|8013D04|80136E8|80131C8|8013068|8012FB0||||
|8013DAC|8013790|8013270|8013110|8013058||||
|8013DE8|80137CC|80132AC|801314C|8013094||||
|8013E58|801383C|801331C|80131BC|8013104||||
|8013EE4|80138C8|80133A8|8013288|80131D0||||
|0|8013BCC|80136AC|801358C|80134D4|ArchiveCurrentPalettes|int ArchiveCurrentPalettes()||
|8094438|8013C18|80136F8|80135D8|8013520|ArchivePalette|int ArchivePalette(int a1)||
|801428C|8014094|8013B74|8013A54|801399C||||
|80143B4|80141BC|8013C9C|8013B7C|8013AC4||||
|80143CC|80141D4|8013CB4|8013B94|8013ADC||||
|80145D0|80143D8|8013EB8|8013D40|8013C88|IsFadeActive|bool IsFadeActive()||
|80149B0|80147B8|8014298|8014120|8014068|WaitForFade|int WaitForFade(int a1)||
|8014A44|8014850|8014330|80141B8|8014100||||
|0|8014874|8014354|80141DC|8014124||||
|8014BE4|80149EC|8014590|8014328|8014270||||
|8014D0C|8014B14|8014698|8014450|801443C|SomeDrawTextInlineAutoWidth|TextStruct *SomeDrawTextInlineAutoWidth(_WORD *a1, char a2, unsigned __int8 *a3)||
|8014E30|8014C38|80147BC|8014574|8014560||||
|8015298|80150A0|8014C24|80149EC|80149C4||||
|80153CC|80151D4|8014D58|8014B28|8014B00|RerangeSomething|int RerangeSomething(signed int a1)||
|80153F4|80151FC|8014D80|8014B50|8014B28|PlaySpacialSoundMaybe|int PlaySpacialSoundMaybe(int a1, signed int a2)||
|80154AC|80152B4|8014E38|8014C08|8014BE0||||
|80155B8|80153C0|8014F44|8014FC4|8014F9C||||
|8015A18|801585C|80153E0|8015474|8015450|MapMain_StartPhaseController|int MapMain_StartPhaseController(signed int a1)||
|8015CC4|8015B90|8015714|8015854|8015838|MoveCameraByStepMaybe|int MoveCameraByStepMaybe(__int16 a1)||
|8015E44|8015D10|8015894|80159D4|80159B8|GetSomeAdjustedCameraX|int GetSomeAdjustedCameraX(int a1)||
|8015E88|8015D54|80158D8|8015A18|80159FC|GetSomeAdjustedCameraY|int GetSomeAdjustedCameraY(int a1)||
|8015F1C|8015DE8|801596C|8015AB4|8015A98|DisplayCursor|int DisplayCursor(int a1, int a2, int a3)||
|0|8016080|8015C04|8015D3C|8015D30|StoreAdjustedCameraPositions|int StoreAdjustedCameraPositions(int a1, int a2, _DWORD *a3, _DWORD *a4)||
|0|80160D4|8015C58|8015D90|8015D84||||
|8016290|801622C|8015DB0|8015EE8|8015EDC||||
|80169E4|8016C54|80167F4|8016968|8016BC0|EquipUnitItemSlot|[void EquipUnitItemSlot(struct Unit* unit, int itemSlot) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L509)||
|0|8016F80|8016B2C|8016D24|8016F7C|CanUnitUse_unused|[s8 CanUnitUse_unused(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L770)||
|8016D58|80171B4|8016D60|8016E28|8017080|IsItemHammernable|[s8 IsItemHammernable(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L825)||
|8017364|80178C8|80174D8|801756C|80177C4|ClearUnits|[void ClearUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L207)||
|80173D8|801793C|801754C|80175E0|8017838|GetFreeUnit|[struct Unit* GetFreeUnit(int faction) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L232)||
|80174CC|8017A78|8017688|801772C|8017984|UnitRemoveInvalidItems|[void UnitRemoveInvalidItems(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L437)||
|0|8017CE4|80178F4|8017B18|8017DF8|UnitLoadItemsFromDefinition|[void UnitLoadItemsFromDefinition(struct Unit* unit, const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L687)||
|8017928|8017F70|8017B80|8017E3C|8018120|UnitAutolevel|[void UnitAutolevel(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L814)||
|8017ABC|8018124|8017D34|8017FB0|801829C|GetUnitFromCharId|[struct Unit* GetUnitFromCharId(int charId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L870)||
|0|8018160|8017D70|8017FEC|80182D8|GetUnitFromCharIdAndFaction|[struct Unit* GetUnitFromCharIdAndFaction(int charId, int faction) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L883)||
|8017AF8|80181A4|8017DB4|8018030|801831C|CanUnitRescue|[s8 CanUnitRescue(struct Unit* actor, struct Unit* target) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L896)||
|0|8018658|8018268|80184D4|80187C0|ClearActiveFactionGrayedStates|[void ClearActiveFactionGrayedStates(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1099)||
|801809C|80187E4|80183F4|8018670|801895C|SetAllUnitNotBackSprite|[void SetAllUnitNotBackSprite(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1169)||
|80180D8|801881C|801842C|80186A8|8018994|UnitUpdateUsedItem|[void UnitUpdateUsedItem(struct Unit* unit, int itemSlot) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1180)||
|80180FC|8018840|8018450|80186CC|80189B8|GetUnitAid|[int GetUnitAid(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1187)||
|0|80188F4|8018504|8018790|8018A7C|sub_8018A7C|[void sub_8018A7C(struct Unit* unit, int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1221)||
|0|8018A14|8018624|80188B4|8018BA0|GetCombinedEnemyWeaponUsabilityBits|[int GetCombinedEnemyWeaponUsabilityBits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1288)||
|8018388|8018E60|8018A70|8018E64|8019150|GetUnitCurrentHp|[inline int GetUnitCurrentHp(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L266)||
|8018548|8019030|8018C40|8019040|8019368|SetUnitHp|[inline void SetUnitHp(struct Unit* unit, int value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L340)||
|8018584|801906C|8018C7C|801907C|80193A4|AddUnitHp|[inline void AddUnitHp(struct Unit* unit, int amount) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L347)||
|8018670|8019150|8018D68|8019174|801949C|CanUnitCrossTerrain|[inline s8 CanUnitCrossTerrain(struct Unit* unit, int terrain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L983)||
|8018920|8019454|801906C|801947C|80197A4|SetupMapRowPointers|int SetupMapRowPointers(int a1, _DWORD *a2, int a3, int a4)||
|80189BC|80194F0|8019108|8019518|8019840|BmMapFillEdges|[void BmMapFillEdges(u8** map, u8 value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L209)||
|8018A88|80195BC|80191D4|80195E4|801990C|UnpackChapterMapGraphics|[void UnpackChapterMapGraphics(int chapterId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L245)||
|8018B20|8019654|801926C|801967C|80199A4|InitBaseTilesBmMap|[void InitBaseTilesBmMap(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L269)||
|8018BE0|8019714|801932C|801973C|8019A64|RefreshTerrainBmMap|[void RefreshTerrainBmMap(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L308)||
|8018CE0|801983C|8019454|8019864|8019B8C|DisplayMovementViewTile|[void DisplayMovementViewTile(u16* bg, int xBmMap, int yBmMap, int xTileMap, int yTileMap) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L337)||
|0|8019EA4|8019ABC|8019ECC|801A1F4|RefreshEntityBmMaps|[void RefreshEntityBmMaps(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L641)||
|8019484|801A0C0|8019CE0|801A198|801A4CC|SetWorkingMoveCosts|[void SetWorkingMoveCosts(const s8 mct[TERRAIN_COUNT])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L70)||
|801985C|801A4DC|801A0FC|801A5C0|801A8E4|MarkMovementMapEdges|[void MarkMovementMapEdges(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L339)||
|8019948|801A5C8|801A1E8|801A6AC|801A9D0|MarkWorkingMapEdges|[void MarkWorkingMapEdges(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L370)||
|0|801A7B8|801A3D8|801A89C|801ABC0|MapSetInRange|[void MapSetInRange(int x, int y, int range, int value)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L464)||
|0|801B528|801B148|801B620|801B950|GenerateMagicSealMap|[void GenerateMagicSealMap(int value)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L828)||
|0|801B7C8|801B3E8|801B864|801BB98||||
|801AD84|801C000|801BC50|801BFD0|801C340||||
|0|801C030|801BC80|801C000|801C370|StartupDebugMenu_InitializeFileEffect|signed int StartupDebugMenu_InitializeFileEffect(int a1, int a2)||
|801ADCC|801C074|801BCC4|801C044|801C3B4||||
|801AED8|801C180|801BDDC|801C14C|0||||
|0|801C8D4|801C4D0|801C7D8|801CB70|DisplayUnitEffectRange|int DisplayUnitEffectRange(unsigned __int8 *a1)||
|801BAB4|801D184|801CD80|801D098|801D434||||
|0|801D2F8|801CEF4|801D20C|801D5A8|CanMoveActiveUnitTo|int CanMoveActiveUnitTo(int x, int y)||
|0|801D3B8|801CFB4|801D2CC|801D668|PlayerPhase_ResumeRangeDisplay|int PlayerPhase_ResumeRangeDisplay(unsigned __int16 **a1)||
|801BD88|801D4CC|801D0C8|801D550|801D8EC|Loop6C_MLVCHC|int Loop6C_MLVCHC(int a1)||
|801C0DC|801D758|801D354|801D7B0|801DB4C||||
|801C430|801DAA4|801D6A0|801DAE4|801DE88|GetEnemyStartCursorPosition|int GetEnemyStartCursorPosition(_DWORD *a1, _DWORD *a2)||
|801C49C|801DB0C|801D708|801DB4C|801DEF0||||
|801C510|801DB80|801D77C|801DBC0|801DF64|ADJUSTFROMXI_MoveCameraOnSomeUnit|int ADJUSTFROMXI_MoveCameraOnSomeUnit(signed int a1)||
|8082B74|801DBB0|801D7AC|801DBF0|801DF94||||
|0|801DEB0|801DB0C|801DEF0|801E294||||
|801C6C4|801DEFC|801DB58|801DF3C|801E2E0||||
|0|801DF38|801DB94|801DF78|801E31C||||
|801D6B4|801EFC8|801EC44|801F198|801F540|GasTrapEffectGfx_Setup|int GasTrapEffectGfx_Setup(int a1)||
|0|801F174|801EDF0|801F344|801F6EC||||
|80731D8|801F514|0|801F804|0||||
|800AF0C|801F650|8085D48|801F940|801FBAC||||
|801DB5C|801F7B0|801F348|801FAA0|0||||
|801DBC8|801F81C|801F3B4|801FB0C|801FE14||||
|801DC9C|801F8F0|801F488|801FBE0|801FEE8||||
|801E774|8020630|80201C8|8020F74|802127C||||
|0|8020B84|802071C|802178C|8021A94||||
|0|8021618|80211AC|8022178|0||||
|801EB94|8021B28|80216B0|802276C|80227A4||||
|801F1DC|8022020|8021BA8|8022C6C|8022CA4||||
|801F780|8022704|802228C|802339C|80233D8|ItemSelectMenu_Usability|signed int ItemSelectMenu_Usability(int a1, int a2)||
|0|80229A8|8022530|8023640|802367C||||
|801FA84|8022A20|80225A8|80236B8|80236F4||||
|801FB68|8022B28|80226B0|80237BC|80237F8||||
|801FC78|8022C48|80227D0|80238DC|8023918||||
|80200FC|80230D0|8022C58|8023D70|8023DB4||||
|8020438|8023404|8022F78|8024148|802418C|StealCommandUsability|signed int StealCommandUsability()||
|80205A8|8023574|80230E8|80242BC|8024304|StealItemMenuCommand_Usability|signed int StealItemMenuCommand_Usability(int a1, int a2)||
|0|8023A08|802357C|802495C|80249AC|AttackCommandUsability|signed int AttackCommandUsability()||
|0|8023C2C|80237A0|8024B80|8024BD0||||
|8020B04|8023E3C|80239B0|8024E5C|8024EAC|ForEachUnitInRange|int ForEachUnitInRange()||
|8020F64|80242F8|8023E6C|8025398|80253E8|TryAddToDropTargetList|int TryAddToDropTargetList(int a1, int a2)||
|0|8024F6C|8024AE0|8026410|802646C||||
|8021BD0|8025184|8024CF8|802662C|8026688|SMS_Init|int SMS_Init()||
|8021C04|80251B8|8024D2C|8026660|80266BC||||
|8021C38|8025278|8024DEC|80267A0|80267FC|SMS_RegisterUsage|int SMS_RegisterUsage(int a1)||
|8021FE8|8025A0C|8025580|8026F38|8026F94|SMS_SyncIndirect|int SMS_SyncIndirect()||
|0|8025AE0|8025654|802700C|8027068||||
|0|8025B54|80256C8|80270E0|802713C|GetUnitBattleMapSpritePaletteIndex|int GetUnitBattleMapSpritePaletteIndex(int a1)||
|80221EC|8025D64|80258D8|8027310|802736C|SMS_GetNewInfoStruct|int SMS_GetNewInfoStruct(signed int a1)||
|0|8025F28|8025A9C|80274D4|8027530|DisplayChapterTileMarker|int DisplayChapterTileMarker()||
|8022940|8026628|802619C|8027BDC|8027C48||||
|0|80266DC|8026250|8027C90|8027CFC||||
|0|8026794|8026308|8027D48|8027DB4||||
|0|802682C|80263A0|8027DE0|8027E4C||||
|0|8026A4C|80265C0|80280F4|8028160||||
|8023634|8027770|80272E4|8029024|802907C|CanUnitUseHealItem|[s8 CanUnitUseHealItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L457)||
|8023728|8027844|80273B8|8029108|8029160|CanUnitUseLockpickItem|[s8 CanUnitUseLockpickItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L517)||
|8023D90|802800C|8027B80|80299D8|8029A4C|RepairMenuItemIsAvailable|[u8 RepairMenuItemIsAvailable(const struct MenuItemDef* def, int number)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L940)||
|0|8028620|8028194|802A094|802A108|sub_802A108|[s8 sub_802A108(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1205)||
|8024248|8028830|80283A4|802A2A4|802A318|SimulateBattle|int SimulateBattle(int a1, int a2, int a3, int a4)||
|0|80292CC|8028E1C|802AC68|802ACF8|ComputeLethalityChance|int ComputeLethalityChance(int a1, _DWORD *a2)||
|80250B0|8029A90|80295E0|802B8E8|802B9A0|GetStatIncrease|int GetStatIncrease(int a1)||
|80250D4|8029AB4|8029604|802B90C|802B9C4|GetAutoleveledStat|int GetAutoleveledStat(int a1, int a2)||
|80254CC|8029F20|8029A70|802BF70|802C028|SaveUnitsFromBattle|int SaveUnitsFromBattle()||
|8025608|802A098|8029BE8|802C0F8|802C1B0|BattleUnit_DidWRankGoUp|unsigned int BattleUnit_DidWRankGoUp(int a1)||
|8025644|802A0D4|8029C24|802C134|802C1EC|UpdateUnitFromBattleUnit|int UpdateUnitFromBattleUnit(_BYTE *a1, int a2)||
|802571C|802A1BC|8029D0C|802C21C|802C2D4||||
|80259E4|802A554|802A0A4|802C624|802C6EC|SetupBattleUnitEquippedWeapon|int SetupBattleUnitEquippedWeapon(int a1)||
|8026218|802B1E0|802AD30|802D370|802D438||||
|802636C|802B334|802AE84|802D4C4|802D58C||||
|0|802BCE8|802B828|802DE14|802DEDC|sub_802DEDC|[void sub_802DEDC(struct Proc* ee)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L806)||
|8026AC8|802BF08|802BA48|802E100|802E1C8|ClearTraps|[void ClearTraps(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L26)||
|0|802C078|802BBB8|802E2E0|802E3A8|InitMapObstacles|[void InitMapObstacles(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L157)||
|8026E18|802C190|802BCD0|802E42C|802E4F4|GetMapChange|[const struct MapChange* GetMapChange(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L246)||
|8026E54|802C1CC|802BD0C|802E468|802E530|GetMapChangeIdAt|[int GetMapChangeIdAt(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L264)||
|8026EB0|802C228|802BD68|802E4C4|802E58C|ApplyMapChangesById|[void ApplyMapChangesById(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L287)||
|0|802C2A8|802BDE8|802E544|802E60C|DisableMapChange|[void DisableMapChange(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L315)||
|8026F5C|802C300|802BE40|802E5C8|802E690|UpdateRoofedUnits|[void UpdateRoofedUnits(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L347)||
|8026FF4|802C380|802BEC0|802E648|802E710|AddArrowTrapTargetsToTargetList|int AddArrowTrapTargetsToTargetList(int a1, int a2, int a3)||
|8027038|802C3C4|802BF04|802E68C|802E754||||
|0|802C444|802BF84|802E70C|802E7D4||||
|80270B8|802C4AC|802BFEC|802E774|802E83C|GenerateTrapDamageTargets|[void GenerateTrapDamageTargets(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L483)||
|8027124|802C518|802C058|802E7E0|802E8A8|GenerateDisplayedTrapDamageTargets|[void GenerateDisplayedTrapDamageTargets(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L513)||
|8027A60|802CDEC|802C92C|802F238|802F30C|ExecLatona|int ExecLatona(signed int a1)||
|8027C50|802CFE4|802CB24|802F430|802F510||||
|80984A8|802D440|802CF80|802FB0C|802FBBC||||
|8028394|802D874|802D3B4|80300D4|8030184|BMapDispSuspend|[void BMapDispSuspend(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L297)||
|8028748|802DC30|802D770|8030490|8030540||||
|802895C|802DE44|802D984|80306A8|8030758|WfxFlamesInitGradientPublic|[void WfxFlamesInitGradientPublic(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L593)||
|8028BF4|802E0DC|802DC1C|8030940|80309F0||||
|8028E10|802E2F8|802DE38|8030B5C|8030C0C||||
|8029714|802EC5C|802E790|80314E0|8031594|AddItemToConvoy|signed int AddItemToConvoy(__int16 a1)||
|802982C|802EE2C|802E960|80316A0|8031754|LoadPlayerUnitsFromUnitStack2|int LoadPlayerUnitsFromUnitStack2()||
|8029990|802EF8C|802EAC0|8031800|80318B4|GetUnitBestWRankType|signed int GetUnitBestWRankType(int a1)||
|8029964|802EFB8|802EAEC|803182C|80318E0|GetClassBestWRankType|signed int GetClassBestWRankType(int a1)||
|80299BC|802EFE4|802EB18|8031858|803190C||||
|8029C9C|802F2E0|802EE14|8031B5C|8031C10|PrepareBalancedArenaFight|signed int PrepareBalancedArenaFight()||
|8029F80|802F5C4|802F0F8|8031E3C|8031EF0||||
|807CEF0|802F64C|802F180|8031EC0|8031F74||||
|802A3EC|802FA0C|802F540|8032320|80323D4|ActionSupport|int ActionSupport()||
|802A5CC|802FC20|802F754|80325C0|8032674|DropRescuedUnitIfDead|int DropRescuedUnitIfDead(signed int a1, int a2)||
|802B928|803186C|8031384|8034330|8034428|CanUnitUseAttack|bool CanUnitUseAttack()||
|802BA44|8031994|80314AC|8034458|8034550||||
|802BB74|8031AC0|0|803458C|8034684|GetChapterMapChangesPointer|[const void* GetChapterMapChangesPointer(unsigned chIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L20)||
|802CB14|8032A90|8032560|8035610|8035708|StartBottomHelpText|int StartBottomHelpText(signed int a1, int a2)||
|0|8032B4C|803261C|80356C8|0||||
|0|8032CF4|80327C4|8035870|8035770||||
|0|8033304|8032DD4|8035EDC|8035DDC||||
|0|8033378|8032E48|8035F50|8035E50||||
|802D234|8033424|8032EF4|8035FFC|8035EFC||||
|0|8033650|8033120|80363A4|80362A4||||
|0|8033820|80332F0|8036574|8036474||||
|802D7B8|8033A04|80334E8|803676C|803666C|AddWeaponStatsAfterRound|int AddWeaponStatsAfterRound(int a1, _BYTE *a2, _DWORD *a3)||
|802DD70|8034020|8033B48|8036E4C|8036D4C||||
|802DF80|8034230|8033D58|803704C|8036F4C||||
|802E308|80345D4|80340FC|80373E4|803730C|StartBattleForecast|int StartBattleForecast()||
|802E3D0|80346A0|80341C8|80374B0|80373F0||||
|0|803484C|8034374|8037660|80375A0|MineFireTrap_80375A0|int MineFireTrap_80375A0(int a1)||
|0|8034B70|8034698|80379F4|803795C|GetNonEmptyBallistaAt|TrapStruct *GetNonEmptyBallistaAt(int a1, int a2)||
|802E6B0|8034FA4|8034ACC|8039910|8039898|GetUnitAiAttackPriority|signed int GetUnitAiAttackPriority(int a1)||
|802E868|803515C|8034C84|8039AC8|8039A50|SortAiUnitQueue|int SortAiUnitQueue(signed int a1)||
|0|803576C|8035294|803A0F4|803A07C|CpPerform_PerformCombat|int CpPerform_PerformCombat(signed int a1)||
|802F20C|8035C30|8035758|803A6B4|803A63C||||
|802F29C|8035CC4|80357EC|803A748|803A6D0||||
|802F34C|8035D74|803589C|803A800|803A788|AiFindPositionOfCharacter|signed int AiFindPositionOfCharacter(int a1, signed __int16 *a2)||
|802F430|8035E64|803598C|803A8F0|803A878|AiFindClosestPositionWithUnitOfClass|bool AiFindClosestPositionWithUnitOfClass(int a1, signed __int16 *a2)||
|802F6C0|8036228|8035D50|803AC5C|803AC3C|CouldStationaryUnitBeInRangeHeuristic|bool CouldStationaryUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|802F714|803627C|8035DA4|803ACB0|803AC90|CouldUnitBeInRangeHeuristic|bool CouldUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|802F910|8036478|8035FA0|803AEB4|803AE94||||
|802FC8C|80367F4|803631C|803B244|803B224||||
|802FD00|8036868|8036390|803B2B8|803B298||||
|802FD7C|80368E4|803640C|803B334|803B314||||
|802FFC0|8036B28|8036650|803B560|803B558|FillMovementAndRangeMapForItem|int FillMovementAndRangeMapForItem(int a1, unsigned __int8 a2)||
|8030060|8036BC8|80366F0|803B600|803B5F8||||
|80300E0|8036C48|8036770|803B680|803B678||||
|80301FC|8036D64|803688C|803B79C|803B794|GetItemAiStealPriority|signed int GetItemAiStealPriority(unsigned __int16 a1)||
|803079C|80374F8|8037044|803BEDC|803BF4C||||
|80307D4|8037530|803707C|803BF14|803BF84|AiIsCharacterOnMap|signed int AiIsCharacterOnMap(unsigned __int16 a1)||
|8030860|80375C0|803710C|803BFA4|803C014|AiIsPositionLootable|signed int AiIsPositionLootable(unsigned __int8 a1, int a2)||
|806CBBC|80376CC|8037218|803C0B0|803C120|SetupUnitStatusStaffAIFlags|int SetupUnitStatusStaffAIFlags(int a1, int a2)||
|8030994|8037714|8037260|803C0F8|803C168|SetupUnitHealStaffAIFlags|int SetupUnitHealStaffAIFlags(int a1, int a2)||
|8030AB4|8037834|8037380|803C214|803C284||||
|8030C78|80379FC|8037548|803C3DC|803C44C||||
|8030E08|8037B8C|80376D8|803C56C|803C5DC|AiScript_Exec|int AiScript_Exec(int a1)||
|8030F48|8037CCC|8037818|803C6AC|803C71C|AiScriptCmd_02_ChangeAi|int AiScriptCmd_02_ChangeAi(_BYTE *a1)||
|8031044|8037DC8|8037914|803C7A8|803C818|IsUnitEnemyWithActiveUnit|bool IsUnitEnemyWithActiveUnit(int a1)||
|8031198|8037F1C|8037A68|803C904|803C974|AiScriptCmd_04_ActionOnSelectedCharacter|int AiScriptCmd_04_ActionOnSelectedCharacter(_BYTE *a1)||
|8031230|8037FB4|8037B00|803C99C|803CA0C|AiScriptCmd_05_DoStandardAction|int AiScriptCmd_05_DoStandardAction(_BYTE *a1)||
|80313F8|803817C|8037CC8|803CB64|803CBD4|AiScriptCmd_0D_MoveTowardsCharacterUntilInRange|int AiScriptCmd_0D_MoveTowardsCharacterUntilInRange(_BYTE *a1)||
|80314C0|8038240|8037D8C|803CC28|803CC98|AiScriptCmd_0F_MoveTowardsUnitWithClass|int AiScriptCmd_0F_MoveTowardsUnitWithClass(_BYTE *a1)||
|8031504|8038284|8037DD0|803CC6C|803CCDC|AiScriptCmd_10_DoLooting|int AiScriptCmd_10_DoLooting(_BYTE *a1)||
|80315FC|803837C|8037EC8|803CD64|803CDD4|AiScriptCmd_11_MoveTowardsSafety|int AiScriptCmd_11_MoveTowardsSafety(_BYTE *a1)||
|0|803855C|80380A8|803CF44|803CFB4||||
|8031894|80389A0|80384EC|803D374|803D3E4|AiDoBerserkAction|int AiDoBerserkAction()||
|80318B4|80389C0|803850C|803D394|803D404|AiDoBerserkMove|int AiDoBerserkMove()||
|8031D40|8038F30|8038A7C|803D928|803D998||||
|803206C|8039258|8038DA4|803DC54|803DCC4|AiTrySimulateBattle|int AiTrySimulateBattle(_BYTE *a1)||
|803264C|80397F8|8039344|803E20C|803E27C|AiGetPositionUnitSafetyWeight|int AiGetPositionUnitSafetyWeight(int a1, int a2)||
|8032B84|8039D48|8039894|803E760|803E7D0|AiUnitTryMoveTowardsEscapePoint|signed int AiUnitTryMoveTowardsEscapePoint()||
|8032F94|803A158|8039CA4|803EB80|803EBF0||||
|8032FF4|803A1B8|8039D04|803EBE4|803EC54||||
|8033064|803A228|8039D74|803EC54|803ECC4||||
|8033090|803A254|8039DA0|803EC80|803ECF0||||
|80337B4|803A98C|803A4D8|803F3C4|803F434||||
|8033A30|803AC08|803A754|803F648|803F6B8||||
|8033B50|803AD28|803A874|803F76C|803F7DC||||
|8033B9C|803AF24|803AA70|803F958|803F9D8|AiGetStaffAiIndex|signed int AiGetStaffAiIndex(unsigned __int16 a1)||
|8033C8C|803B034|803AB80|803FA68|803FAE8|GetAiSafestAccessibleAdjacentPosition|bool GetAiSafestAccessibleAdjacentPosition(int a1, int a2, _WORD *a3)||
|8034400|803B7F4|803B340|8040228|80402A8||||
|8034458|803B84C|803B398|8040280|8040300||||
|80348DC|803BCF0|803B83C|80405E8|8040668||||
|8034D80|803C19C|803BCE8|8040AB8|8040B38||||
|8034DD4|803C1F0|803BD3C|8040B0C|8040B8C||||
|8034E9C|803C2B8|803BE04|8040D4C|8040DCC|AiSetMovCostTableWithPassableWalls|int AiSetMovCostTableWithPassableWalls(int a1)||
|8034ED4|803C2F0|803BE3C|8040D84|8040E04|AiSetMovCostTableWithTerrainSetAsPassable|int AiSetMovCostTableWithTerrainSetAsPassable(int a1, int a2)||
|0|803C320|803BE6C|8040DB4|8040E34||||
|803522C|803C748|803C294|8041698|8041718||||
|80358A4|803CDC0|803C90C|8041D0C|8041D8C||||
|8035C58|803D174|803CCC4|80420BC|804213C||||
|8035CF8|803D214|803CD64|8042164|80421E4||||
|8035D7C|803D298|803CDE8|80421EC|804226C||||
|8037600|803EB44|803E6B0|8043A88|8043B08||||
|0|803F584|803F0F4|80444F4|8044560||||
|8017960|803F724|803F294|8044694|8044700|NameSelect_DrawNameText|int NameSelect_DrawNameText(int a1)||
|80382A0|803F9B8|803F504|804490C|8044968||||
|8038DEC|80405B8|803FEAC|804550C|804556C||||
|8038E90|804065C|803FF50|80455B0|8045610||||
|80394BC|8040C88|804057C|8045BC8|8045C28||||
|8039D34|8041504|8040E08|804642C|80464B0||||
|8039F84|8041758|804105C|8046680|8046704||||
|803A468|8041C74|8041584|8046BC4|8046C64||||
|803B248|8042A6C|80423C4|8047970|8047A54||||
|803B2DC|8042B08|8042464|8047A0C|8047AF4|SioMenu_8047AF4|int SioMenu_8047AF4()||
|803B93C|8043168|8042A90|8047FCC|80480B4|SioMenu_80480B4|int SioMenu_80480B4(int a1)||
|803BFB0|8043864|0|80486D4|80487C0||||
|0|80444C8|8043CC8|8049274|0||||
|0|80445B8|8043DB8|8049364|0||||
|803C144|8044998|804419C|8049744|8048934||||
|803C1A4|80449EC|80441F0|8049798|8048988||||
|803CA3C|8045288|8044A8C|804A040|8049238||||
|803D438|8045CAC|80454C0|804AA88|8049C94||||
|803D8FC|804619C|80459B0|804AF4C|804A158||||
|803DB6C|8046440|8045C54|804B1E8|804A44C||||
|803E028|8046900|8046114|804B6B4|804A914||||
|803E0B4|8046990|80461A4|804B744|804A9A4||||
|803E630|8046F18|8046730|804BCCC|804AF2C|ITEMRANGEDONE_sub_804AF2C|signed int ITEMRANGEDONE_sub_804AF2C(int a1, _DWORD *a2)||
|806E278|804723C|8046A54|804BFF0|804B250||||
|803EB24|8047424|8046C3C|804C220|804B480||||
|803EBF8|80474F8|8046D10|804C2F4|804B554||||
|803EDEC|80476F0|8046F04|804C50C|804B76C||||
|803EF4C|8047854|8047068|804C670|804B8D0||||
|8040468|8048D98|80485AC|804D934|804CB94||||
|80406D0|804901C|8048834|804DB80|804CDE8||||
|80408BC|8049208|8048A20|804DDB4|804D01C||||
|8040CC4|8049610|8048E28|804E1BC|804D428||||
|8040D18|8049664|8048E7C|804E210|804D47C||||
|804111C|8049A68|8049280|804E5EC|804D858||||
|0|8049FF8|8049810|804EB80|804DDF0||||
|0|804A228|8049A40|804EDA8|804E024||||
|0|804A240|8049A58|804EDC0|804E03C||||
|0|804A84C|804A064|804F634|804E8A8|DrawUiItemHover|[void DrawUiItemHover(int x, int y, int width)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1115)||
|8041728|804A8B0|804A0C8|804F698|804E90C|ClearUiItemHover|[void ClearUiItemHover(int x, int y, int width)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1132)||
|80417E8|804AA0C|804A224|804F924|804EB98|StartOrphanMenuAdjusted|[    int xSubject, int xTileLeft, int xTileRight)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L82)||
|0|804B390|804ABB4|8050488|804F714|GetForceDisabledMenuItems|[void GetForceDisabledMenuItems(u8 list[MENU_OVERRIDE_MAX])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L709)||
|0|804B3D0|804ABF4|80504C8|804F754|SetForceDisabledMenuItems|[void SetForceDisabledMenuItems(u8 list[MENU_OVERRIDE_MAX])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L722)||
|0|804B3F8|804AC1C|80504F0|804F77C|AddMenuOverride|[void AddMenuOverride(int cmdid, int kind, void* func)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L731)||
|0|804B464|804AC88|805055C|804F7E8|OverriddenMenuSelected|[u8 OverriddenMenuSelected(struct MenuProc* proc, struct MenuItemProc* item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L761)||
|8042138|804B52C|804AD50|8050684|804F910|LinkTargets|int LinkTargets()||
|8042388|804B78C|804AFB0|80508D8|804FB64|TargetSelection_HandleSelectInput|int TargetSelection_HandleSelectInput(_DWORD *a1)||
|8042420|804B824|804B048|8050970|804FBFC|GetFarthestTargetIndex|int GetFarthestTargetIndex()||
|8042480|804B884|804B0A8|80509D0|804FC5C|LinkTargetsOrdered|char *LinkTargetsOrdered()||
|8042534|804B938|804B15C|8050A84|804FD10|GetFirstTargetPointer|char *GetFirstTargetPointer()||
|8042A5C|804BE1C|804B640|8050FB8|8050244|ekrBattle_8050244|int ekrBattle_8050244(int a1)||
|80444EC|804D894|804D0B8|8052AF8|8051E00||||
|8044870|804DC18|804D43C|8052E7C|8052184||||
|8044C68|804DF64|804D788|80531F8|8052504||||
|8044E2C|804E128|804D94C|80533B8|80526C8||||
|8045614|804E81C|804E040|8053AEC|8052DFC||||
|8046010|804EFE0|804E804|805441C|8053730|StartEfxQuake|int StartEfxQuake(int quakeType)||
|8046E9C|804FF70|804F794|8055800|8054B18||||
|8047300|8050348|804FB6C|8055C78|8054FA8|StartEfxSpellCast|int StartEfxSpellCast(int a1)||
|0|8050654|804FE78|8055F90|0||||
|8099E50|80506E0|804FF04|805601C|0||||
|804799C|8050CB8|80504DC|805660C|8055670|SpellFx_WriteBgMap|int SpellFx_WriteBgMap(int a1, int a2, int a3)||
|8047B10|8050E2C|8050650|80567FC|8055860||||
|0|8051180|80509A4|8056B5C|8055BD4|BeginAnimsOnBattleAnimations|int BeginAnimsOnBattleAnimations()||
|804894C|8051E28|805164C|80577EC|8056864||||
|80489E8|8051EC4|80516E8|8057888|8056900|loadUnitKakudai|void loadUnitKakudai(int a1)||
|8048F0C|80523E0|8051C04|8057E2C|8056EA4||||
|8048FE4|80524B8|8051CDC|8057F0C|8056F84||||
|8049BAC|8053040|8052858|8058AF8|8057CAC||||
|0|8053B5C|8053374|80598BC|8058A8C|IsItemDisplayedInBattle|bool IsItemDisplayedInBattle(int a1)||
|804B294|8054A30|8054248|805AACC|8059D28|initBothAIS|void initBothAIS()||
|804C330|8055B08|8055320|805BBFC|805AE58||||
|804D550|8056EBC|80566D4|805CF24|805C188||||
|804EE18|805898C|80581A4|805EA38|805D938|EfxThunderBG_Main|int EfxThunderBG_Main(int a1)||
|8050B10|805A33C|8059B54|80606DC|805F5DC||||
|8050B94|805A3C0|8059BD8|8060760|805F660||||
|8050C9C|805A4C8|8059CE0|806086C|805F76C||||
|8050F54|805A780|8059F98|8060B28|805FA28||||
|8054458|805D0D8|805C8F0|8062024|8060F24||||
|80550EC|805DD78|805D590|8062BCC|8061ACC||||
|805151C|80601E8|805FA00|806503C|8063F3C||||
|8052DF4|80602D0|805FAE8|8065124|8064024||||
|0|8061094|80608AC|8065FF0|8065008||||
|8056A3C|8062C9C|80624B4|806E974|806C650||||
|8056A68|8062CC8|80624E0|806E9A0|806C67C|StartEfxDamageMojiEffectOBJ|int StartEfxDamageMojiEffectOBJ(int a1, int a2)||
|805803C|8064910|8064128|8070FE8|806EA38||||
|80583B4|8064C88|80644A0|8071360|806EDB0||||
|0|80653C8|8064BD8|80721A8|806FBF8||||
|0|80653E4|8064BF4|80721C4|806FC14||||
|805B01C|8067128|806693C|8073228|8070D04||||
|805B094|80671A0|80669B4|80732A0|8070D7C|FillBGRect|int FillBGRect(_WORD *a1, unsigned __int16 a2, int a3, __int16 a4, __int16 a5)||
|805B0D4|80671E0|80669F4|80732E0|8070DBC||||
|805B380|806748C|8066CA0|807356C|8071068||||
|805B458|8067564|8066D78|8073644|8071140||||
|805B5C8|80676D4|8066EE8|80737A4|80712B0||||
|805B644|8067750|8066F64|8073820|807132C|ApplyFlashingPaletteAnimation|int ApplyFlashingPaletteAnimation(__int16 *palBuffer, int palId, int uhh, int clock)||
|805B6C8|80677D4|8066FE8|80738A4|80713B0||||
|805B7F4|8067900|8067114|80739D0|80714DC||||
|805B90C|8067A18|806722C|8073AE8|80715F4||||
|805C2B0|8068458|8067C6C|8074888|80723A4||||
|0|80688FC|8068110|8074DAC|80728D0||||
|0|80697C4|8068FE4|8075EC8|80739E0||||
|805DBD4|8069D7C|806959C|8076468|8073FE0||||
|805DEC8|806A098|80698B8|8076780|80742F8||||
|805E248|806A2EC|8069B0C|80769D4|8074598||||
|0|806A9C0|806A1E0|80770B0|8074C78||||
|8051A60|806AC24|806A444|8077314|8074EDC||||
|805EB40|806B264|806AA84|8077970|8075538||||
|805ED1C|806B440|806AC60|8077B50|8075718||||
|805A394|8065CC8|80654D8|8078CC0|80768A0|FireDragonBGAnimation14|void FireDragonBGAnimation14(_6CStruct *ctx)||
|806ACB8|8078F30|8078760|80852BC|8082F84||||
|806AD48|8078FC4|80787F4|8085350|8083018||||
|806AD74|8078FF0|8078820|808537C|8083044||||
|806AE04|8079058|8078888|80853E4|80830AC||||
|806AE2C|8079080|80788B0|808540C|80830D4||||
|806AE54|80790A8|80788D8|8085434|80830FC||||
|806BBD0|80790D0|8078900|808545C|8083124||||
|806B354|80796CC|8078EFC|8085500|80831C8||||
|806B398|8079710|8078F40|8085544|808320C||||
|809154C|807AA24|8079FB0|80871E8|8084F1C|GetDeadEnemyAmount|int GetDeadEnemyAmount()||
|806C2F8|807AA5C|8079FE8|8087220|8084F54||||
|8083618|807AE7C|807A408|8087604|8085338||||
|0|807B24C|807A7D8|80876F4|8085428||||
|801D03C|807B684|807AC10|80879F4|8085728||||
|806F3DC|8081224|80804C8|8089B58|80878CC|DrawStatScreenPage|void DrawStatScreenPage(int a1)||
|806F8B8|808178C|8080A30|808A108|8087E7C||||
|806FC0C|8081AE4|8080D88|808A488|80881FC||||
|807030C|8082250|80814F4|808AC2C|80889A0|StartStatScreenHelpTextBubble|int StartStatScreenHelpTextBubble(signed int a1, int a2)||
|0|8082580|8081820|808AF88|8088CFC||||
|8070A70|8082AA0|8081D40|808B49C|8089210||||
|8071274|80834D8|8082AD8|808C168|8089E58||||
|8071410|808368C|8082C8C|808C31C|808A00C||||
|8071778|8083A08|8083008|808C694|808A384||||
|0|8083EA8|80834A8|808CBBC|808A8AC||||
|8071AF8|8083F70|8083570|808CC84|808A974||||
|0|8084D1C|8084320|808DAC8|808B7B8||||
|0|8084D68|808436C|808DB14|808B804||||
|0|80853CC|80849D0|808E170|808BE70|Loop6CUI1_HideTransition|int Loop6CUI1_HideTransition(int a1)||
|8072700|80857E0|8084DE4|808E588|808C288||||
|8072AB8|8085C4C|8085250|808EA0C|808C710||||
|0|8086960|8085F70|808F764|808D47C|Loop16CPI|int Loop16CPI(int a1)||
|0|8086CFC|808630C|808FAFC|808D814||||
|0|8087380|8086994|80901D8|808DEF0||||
|0|8088884|8087EFC|80916FC|808F428||||
|0|808929C|8088938|8092184|808FEA4||||
|80743C8|8089720|8088DC0|8092638|8090358||||
|0|8089EBC|808955C|8092E20|8090B48||||
|0|8089FCC|808966C|8092F30|8090C58||||
|8075DF8|808B038|808A6DC|8093FB8|8091CC0||||
|8075E94|808B0CC|808A770|809404C|8091D54||||
|8076250|808B468|808AB0C|80943D4|80920DC||||
|0|808E3B0|808DA70|8097374|8095094||||
|0|808E3E0|808DAA0|80973A4|80950C4||||
|0|808E454|808DB14|8097418|8095138||||
|80791B4|808E5DC|808DCB0|80975CC|80952EC||||
|80791DC|808E604|808DCD8|80975F4|8095314||||
|0|808E794|808DE68|80976FC|809541C||||
|0|808EA54|808E110|8097988|80956A8||||
|0|808EC70|808E32C|8097B9C|80958BC|InitPrepScreenUnitList|int InitPrepScreenUnitList()||
|0|808ECDC|808E398|8097C08|8095928||||
|0|808EE54|808E50C|8097DB8|8095AD8||||
|0|808EEE0|808E598|8097E44|8095B64||||
|807C520|80903FC|808FABC|8098F18|8096C34||||
|0|8090800|808FEC0|8099308|8097024|addPrepMenuEntry|void addPrepMenuEntry(int id, int (*func)(int), u8 isGrey, int textID, int unk)|显示某个菜单选项（战前准备屏幕）<br>a1=ID,a2=函数指针,a3=是否灰色,a4=文本ID,a5=?|
|0|80908A8|808FF68|80993B0|80970CC||||
|0|8090DA0|8090460|809994C|8097668||||
|0|8090DE4|80904A4|8099990|80976AC||||
|0|8090E04|80904C4|80999B0|80976CC||||
|0|8090E38|80904F8|80999E4|8097700||||
|8082B44|80916C4|8090D80|809A0E0|8097E08||||
|8082C80|80916F4|8090DB0|809A110|8097E38||||
|8082B98|8091730|8090DEC|809A178|8097EA0||||
|0|80917D4|8090E90|809A21C|8097F44||||
|8082C34|8091828|8090EE8|809A270|8097F98||||
|0|80918A4|8090F68|809A2EC|8098014||||
|0|8091B48|809120C|809A590|80982B8||||
|0|8091BAC|8091270|809A5F4|809831C||||
|0|8091BD4|8091298|809A61C|8098344||||
|0|8091C28|80912EC|809A674|809839C|CanUnitPrepScreenUse|signed int CanUnitPrepScreenUse(int a1)||
|0|809257C|8091C48|809B284|8098FAC||||
|0|809385C|8092F50|809C84C|809A580||||
|8079D84|8093CD0|80933C4|809CCC4|809A9F8||||
|0|809408C|8093794|809D058|809AD90||||
|0|80940C4|80937CC|809D090|809ADC8||||
|0|8094684|8093D9C|809D5EC|809B324||||
|0|80947E0|8093EF8|809D740|809B478||||
|0|8095750|0|809E6B4|0||||
|0|80960F8|0|809EFAC|809CD14||||
|0|8096A38|8096260|809FB74|809D8D4||||
|0|8098C0C|8098320|80A1DD4|809FB34||||
|0|80990A4|80987E4|80A224C|809FFB0||||
|0|80998A8|0|80A2A28|80A078C||||
|0|809A404|8099A48|80A33E0|0||||
|0|809A528|8099B6C|80A34F0|0||||
|0|809AEDC|809A504|80A3DC8|0||||
|0|809BE18|809B440|80A4CA8|80A0EC0||||
|0|809BFCC|809B604|80A4F4C|80A1174||||
|0|809C038|809B670|80A4FB8|80A11E0||||
|0|809CE20|809C49C|80A58BC|80A1AE4||||
|808DD40|809D5F0|809CBD8|80A5FE8|80A221C||||
|8082F18|809E25C|809D844|80A6AC0|0||||
|8083078|809E3BC|809D9A4|80A6C20|0||||
|808347C|809E7C4|809DDAC|80A7024|0||||
|80841FC|809EE1C|809E404|80A7680|80A2C3C|SramInit|int SramInit()||
|80842BC|809EEDC|809E4C4|80A7740|80A2CFC|ComputeChecksum16|int ComputeChecksum16(unsigned __int16 *a1, int a2)||
|80844D4|809F1B0|809E7A0|80A79D8|80A2F94|SaveMetadata_Save|int SaveMetadata_Save(int a1, signed int a2)||
|0|809F240|809E830|80A7A68|80A3024||||
|8084718|809F490|809EA80|80A7D34|80A32F0||||
|806CC94|809F588|0|80A7E08|80A33C4||||
|0|809F688|809EC4C|80A7F44|80A3500||||
|0|809F6CC|809EC90|80A7F88|80A3544||||
|0|809F908|809EECC|80A81EC|80A37A8|SGM_SetCharacterKnown|int SGM_SetCharacterKnown(signed int a1, unsigned __int16 *a2)||
|0|809F994|809EF58|80A8278|80A3834|GGM_IsAnyCharacterKnown|signed int GGM_IsAnyCharacterKnown(int *a1)||
|0|809FCC4|809F288|80A848C|80A3A48||||
|0|80A0054|809F618|80A881C|80A3DD8||||
|0|80A014C|809F710|80A8914|80A3ED0||||
|0|80A0270|809F834|80A8A70|80A402C||||
|0|80A02A8|809F86C|80A8AA8|80A4064||||
|0|80A0580|809FBB4|80A8D74|80A4330||||
|808EC1C|80A05FC|809FC30|80A8DF0|80A43AC||||
|808F30C|80A0628|809FC5C|80A8E1C|80A43D8|GetGameTotalTurnCount|int GetGameTotalTurnCount()||
|0|80A09B8|809FFEC|80A9210|80A47CC|BWL_IncrementDeployCountMaybe|int BWL_IncrementDeployCountMaybe(int a1)||
|0|80A0BA8|80A01DC|80A940C|80A49C8||||
|8084DC8|80A0CE8|80A031C|80A9560|80A4B1C|IsPlaythroughIdUnique|signed int IsPlaythroughIdUnique(int a1)||
|8084E6C|80A0D94|80A03C8|80A9614|80A4BD0|GGM_RegisterCompletedPlaythrough|signed int GGM_RegisterCompletedPlaythrough(int a1, int a2)||
|8084F4C|80A0EDC|80A0550|80A9740|80A4CFC|BWL_GetEntry|int *BWL_GetEntry(unsigned __int8 a1)||
|8084F94|80A0F80|80A05F4|80A97E4|80A4DA0|GetLastUsedGameSaveSlot|int GetLastUsedGameSaveSlot()||
|8085290|80A13B8|80A0A30|80A9CF4|80A52DC||||
|8085788|80A1A60|80A10D8|80AA438|80A5A20|ClearSaveBlock|int ClearSaveBlock(signed int a1)||
|80863CC|80A27C0|80A1E2C|80AB2F4|80A68DC||||
|808642C|80A2820|80A1E8C|80AB354|80A693C||||
|8086B00|80A2C64|80A1FF0|80ABF90|80A7578||||
|0|80A2D80|80A210C|80AC000|80A75E8||||
|0|80A2E14|80A21A0|80AC148|80A7730||||
|8086FF0|80A3318|80A26A4|80AC674|80A7C5C||||
|80878F8|80A3C2C|80A2FB8|80ACF34|80A851C||||
|8087C78|80A3FE0|80A336C|80AD25C|80A8844||||
|0|80A4018|80A33A4|80AD294|80A887C||||
|808AA54|80A72F4|80A6634|80B09F8|80ABF44||||
|0|80A980C|80A88F8|80B13A4|80AC904||||
|0|80A98DC|80A89C8|80B1474|80AC9D4||||
|0|80A998C|80A8A78|80B1524|80ACA84||||
|0|80A99AC|80A8A98|80B1544|80ACAA4||||
|0|80A9BFC|80A8CE8|80B1794|80ACCF4||||
|0|80AA20C|80A92F8|80B1D98|80AD2F8|Get6CDifferedLoop6C|int Get6CDifferedLoop6C(int a1, signed int a2)||
|0|80AA24C|80A9338|80B1DD8|80AD338|Find6CDifferedLoop|int Find6CDifferedLoop(int a1)||
|0|80AA3B4|80A94A0|80B1F40|80AD4A0||||
|0|80AA3F8|80A951C|80B1FBC|80AD51C||||
|0|80AAE70|80A9FA8|80B2A38|80ADFBC||||
|0|80AAEB0|80A9FE8|80B2A78|80ADFFC||||
|0|80AB7C8|80AA900|80B33B4|80AE938||||
|0|80ABBB4|80AAD18|80B3824|80AEC04||||
|0|80ABC78|80AAD94|80B38D4|80AECB4||||
|0|80ABCD0|80AADEC|80B3930|80AED10||||
|0|80AC16C|80AB288|80B3DC0|80AF1A0||||
|0|80AC1F8|80AB314|80B3E4C|80AF22C||||
|0|80AD39C|80AC4C4|80B4D94|80B017C||||
|0|80AD424|80AC54C|80B4E1C|80B0204||||
|0|80AD778|80AC8A0|80B5070|80B0458||||
|0|80ADA3C|80ACB64|80B5314|80B06FC||||
|808CDCC|80AF608|80AE6D0|80B6DA0|80B2188||||
|0|80AF944|80AEA0C|80B70F4|80B24DC||||
|8094BE0|80B0100|80AF2CC|80B7A98|80B2EA8||||
|0|80B0DF8|80AFFC4|80B89C4|80B3E18||||
|0|80B7540|80B6734|80BAD48|80B61C4|GetChapterSurvivalRank|unsigned int GetChapterSurvivalRank()||
|0|80B75FC|80B67F0|80BAE08|80B6284|GetChapterDeathCount|int GetChapterDeathCount()||
|0|80B7654|80B6848|80BAE60|80B62DC|GetChapterFundsRank|signed int GetChapterFundsRank()||
|0|80B776C|80B6960|80BAF74|80B63F0|GetChapterCombatRank|signed int GetChapterCombatRank()||
|0|80B77A0|80B6994|80BAFA8|80B6424|GetChapterExpRank|signed int GetChapterExpRank()||
|0|80B7980|0|80BB17C|80B65F8||||
|0|80B8FC0|80B8324|80BB58C|80B6A4C||||
|0|80B4690|80B3858|80C8288|80C34D0||||
|809BB2C|80BE3A4|80BD860|80D41C0|80CF4C8|SoundMain|int SoundMain()||
|809BF6C|80BE7E4|80BDCA0|80D4600|80CF908|RealClearChain|_DWORD *RealClearChain(_DWORD *result)||
|809BF8C|80BE804|80BDCC0|80D4620|80CF928|ply_fine|int ply_fine(int a1, int a2)||
|809BFBC|80BE834|80BDCF0|80D4650|80CF958|MPlayJumpTableCopy|int MPlayJumpTableCopy(int a1)||
|809BFD4|80BE84C|80BDD08|80D4668|80CF970|ldrb_r3_r2|void ldrb_r3_r2(int a1, int a2, _BYTE *a3)||
|809BFD6|80BE84E|80BDD0A|80D466A|80CF972|chk_adr_r2|void chk_adr_r2()||
|809BFF0|80BE868|80BDD24|80D4684|80CF98C|ld_r3_tp_adr_i|int ld_r3_tp_adr_i(int a1, int a2)||
|809BFFC|80BE874|80BDD30|80D4690|80CF998|ply_goto|int ply_goto(int a1, int a2)||
|809C01C|80BE894|80BDD50|80D46B0|80CF9B8|ply_patt|int ply_patt(int a1, int a2)||
|809C038|80BE8B0|80BDD6C|80D46CC|80CF9D4|ply_pend|void ply_pend(int a1, int a2)||
|809C04C|80BE8C4|80BDD80|80D46E0|80CF9E8|ply_rept|int ply_rept(int a1, int a2)||
|809C13C|80BE9B4|80BDE70|80D47D0|80CFAD8|ply_modt|int ply_modt(int a1, int a2)||
|809C168|80BE9E0|80BDE9C|80D47FC|80CFB04|ply_port|void ply_port(int a1, int a2)||
|809C180|80BE9F8|80BDEB4|80D4814|80CFB1C|m4aSoundVSync|int m4aSoundVSync()||
|809C1CC|80BEA44|80BDF00|80D4860|80CFB68|MPlayMain|_DWORD *MPlayMain(_DWORD *result, int a2)||
|809C434|80BECAC|80BE168|80D4AC8|80CFDD0|TrackStop|int TrackStop(int a1, unsigned __int8 *a2, int a3)||
|809C478|80BECF0|80BE1AC|80D4B0C|80CFE14|ChnVolSetAsm|unsigned int ChnVolSetAsm()||
|809C4A8|80BED20|80BE1DC|80D4B3C|80CFE44|ply_note_rev01|void ply_note_rev01(int a1, int a2, unsigned int a3)||
|809C6A8|80BEF20|80BE3DC|80D4D3C|80D0044|ply_endtie_rev01|signed int ply_endtie_rev01(int a1, int a2)||
|809C6E8|80BEF60|80BE41C|80D4D7C|80D0084|clear_modM|void clear_modM(int a1, int a2)||
|809C710|80BEF88|80BE444|80D4DA4|80D00AC|ply_lfos_rev01|int ply_lfos_rev01(int a1, int a2)||
|809C724|80BEF9C|80BE458|80D4DB8|80D00C0|ply_mod_rev01|void ply_mod_rev01(int a1, int a2)||
|809C738|80BEFB0|80BE46C|80D4DCC|80D00D4|MidiKeyToFreq|[u32 MidiKeyToFreq(struct WaveData *wav, u8 key, u8 fineAdjust)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L19)||
|809C7A0|80BF018|80BE4D4|80D4E34|80D013C|MPlayContinue|[void MPlayContinue(struct MusicPlayerInfo *mplayInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L44)||
|809C7BC|80BF034|80BE4F0|80D4E50|80D0158|MPlayFadeOut|[void MPlayFadeOut(struct MusicPlayerInfo *mplayInfo, u16 speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L54)||
|809C7DC|80BF054|80BE510|80D4E70|80D0178|m4aSoundInit|[void m4aSoundInit(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L66)||
|809C88C|80BF104|80BE5C0|80D4F20|80D0228|m4aSongNumStartOrChange|[void m4aSongNumStartOrChange(u16 n)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L103)||
|809C8D8|80BF150|80BE60C|80D4F6C|80D0274|m4aSongNumStartOrContinue|[void m4aSongNumStartOrContinue(u16 n)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L124)||
|809C92C|80BF1A4|80BE660|80D4FC0|80D02C8|m4aSongNumStop|[void m4aSongNumStop(u16 n)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L139)||
|809C960|80BF1D8|80BE694|80D4FF4|80D02FC|m4aSongNumContinue|[void m4aSongNumContinue(u16 n)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L150)||
|809C994|80BF20C|80BE6C8|80D5028|80D0330|m4aMPlayAllStop|[void m4aMPlayAllStop(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L161)||
|809C9CC|80BF244|80BE700|80D5060|80D0368|m4aMPlayAllContinue|[void m4aMPlayAllContinue(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L174)||
|809CA08|80BF280|80BE73C|80D509C|80D03A4|m4aMPlayFadeOutTemporarily|[void m4aMPlayFadeOutTemporarily(struct MusicPlayerInfo *mplayInfo, u16 speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L187)||
|809CA28|80BF2A0|80BE75C|80D50BC|80D03C4|m4aMPlayFadeIn|[void m4aMPlayFadeIn(struct MusicPlayerInfo *mplayInfo, u16 speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L199)||
|809CA50|80BF2C8|80BE784|80D50E4|80D03EC|m4aMPlayImmInit|[void m4aMPlayImmInit(struct MusicPlayerInfo *mplayInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L212)||
|809CA98|80BF310|80BE7CC|80D512C|80D0434|MPlayExtender|[void MPlayExtender(struct CgbChannel *cgbChans)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L237)||
|809CBDC|80BF454|80BE910|80D5270|80D0578|SoundInit|[void SoundInit(struct SoundInfo *soundInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L313)||
|809CE64|80BF6DC|80BEB98|80D54F8|80D0800|m4aSoundVSyncOff|[void m4aSoundVSyncOff(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L489)||
|809CEE0|80BF758|80BEC14|80D5574|80D087C|m4aSoundVSyncOn|[void m4aSoundVSyncOn(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L510)||
|809CF1C|80BF794|80BEC50|80D55B0|80D08B8|MPlayOpen|[void MPlayOpen(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *tracks, u8 trackCount)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L525)||
|809CF94|80BF80C|80BECC8|80D5628|80D0930|MPlayStart|[void MPlayStart(struct MusicPlayerInfo *mplayInfo, struct SongHeader *songHeader)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L568)||
|809D078|80BF8F0|80BEDAC|80D570C|80D0A14|m4aMPlayStop|[void m4aMPlayStop(struct MusicPlayerInfo *mplayInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L625)||
|809D0B8|80BF930|80BEDEC|80D574C|80D0A54|FadeOutBody|[void FadeOutBody(struct MusicPlayerInfo *mplayInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L649)||
|809D180|80BF9F8|80BEEB4|80D5814|80D0B1C|TrkVolPitSet|[void TrkVolPitSet(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L734)||
|809D234|80BFAAC|80BEF68|80D58C8|80D0BD0|MidiKeyToCgbFreq|[u32 MidiKeyToCgbFreq(u8 chanNum, u8 key, u8 fineAdjust)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L780)||
|809D2DC|80BFB54|80BF010|80D5970|80D0C78|CgbOscOff|[void CgbOscOff(u8 chanNum)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L827)||
|809D394|80BFC0C|80BF0C8|80D5A28|80D0D30|CgbSound|[void CgbSound(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L896)||
|809D7E0|80C0058|80BF514|80D5E74|80D117C|m4aMPlayTempoControl|[void m4aMPlayTempoControl(struct MusicPlayerInfo *mplayInfo, u16 tempo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1217)||
|809D808|80C0080|80BF53C|80D5E9C|80D11A4|m4aMPlayVolumeControl|[void m4aMPlayVolumeControl(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u16 volume)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1228)||
|809D870|80C00E8|80BF5A4|80D5F04|80D120C|m4aMPlayPitchControl|[void m4aMPlayPitchControl(struct MusicPlayerInfo *mplayInfo, u16 trackBits, s16 pitch)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1262)||
|809D8E4|80C015C|80BF618|80D5F78|80D1280|m4aMPlayPanpotControl|[void m4aMPlayPanpotControl(struct MusicPlayerInfo *mplayInfo, u16 trackBits, s8 pan)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1297)||
|809D94C|80C01C4|80BF680|80D5FE0|80D12E8|ClearModM|[void ClearModM(struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1331)||
|809D96C|80C01E4|80BF6A0|80D6000|80D1308|m4aMPlayModDepthSet|[void m4aMPlayModDepthSet(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u8 modDepth)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1342)||
|809D9E0|80C0258|80BF714|80D6074|80D137C|m4aMPlayLFOSpeedSet|[void m4aMPlayLFOSpeedSet(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u8 lfoSpeed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1378)||
|809DD78|80C05F8|80BFAB4|80D6420|80D1724|WriteSramFast|int WriteSramFast(_BYTE *a1, _BYTE *a2, int a3)||
|809DDB8|80C0638|80BFAF4|80D6460|80D1764|VerifySramFast_Core|int VerifySramFast_Core(unsigned __int8 *a1, unsigned __int8 *a2, int a3)||
|809DE9C|80C071C|80BFBD8|80D6548|80D184C|WriteAndVerifySramFast|int WriteAndVerifySramFast(_BYTE *a1, _BYTE *a2, int a3, int a4)||
|809DEDC|80C075C|80BFC18|80D6588|80D188C|llsl_thumb|int llsl_thumb(int result, int a2, int a3)||
|809F908|80C0934|80BFDF0|80D6760|80D1A64|.gcc2_compiled._28|int gcc2_compiled__28(int a1, int a2, int a3)||
|809F990|80C0ADC|80BFF98|80D6908|80D1C0C|memcpy|void *memcpy(void *dest, const void *src, unsigned int count)||
|809FA44|80C0B90|80C00C8|80D69BC|80D1D3C|strcpy|_DWORD *strcpy(_DWORD *a1, int *a2)||
|809FAA0|80C0C30|80C57BC|80DC0E4|80D74A8|BgTileMap_FillRect|_WORD *BgTileMap_FillRect(int result, int a2, int a3, int a4)||
|809FAB0|80C0C40|80C57CC|80DC0F4|80D74B8|BgTileMap_CopyRect|_WORD *BgTileMap_CopyRect(int result, int a2, int a3, int a4)||
|803E660|8046F48|8046760|804BCFC|804AF5C||||
|809DA54|80C02CC|80BF788|80D60E8|80D13F0|ply_memacc|[void ply_memacc(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1420)||
|0|808EAF4|808E1B0|8097A28|8095748|SortPlayerUnitsForPrepScreen|int SortPlayerUnitsForPrepScreen()||
|0|809CFD8|809C654|80A5A64|80A1C8C||||
|809BBB0|80BE428|80BD8E4|80D4244|80CF54C|SoundMainRAM|||
|80326F0|803989C|80393E8|803E2B0|803E320|FillAiDangerMap|int FillAiDangerMap()||
|801C80C|801E110|801DD6C|801E150|801E4F4||||
|0|809D33C|809C924|80A5D34|80A1F68||||
|0|80863E0|80859E0|808F1C4|808CEC8|Loop6CUI2|int Loop6CUI2(int a1)||
|0|8099E34|8099474|80A2E64|0||||
|0|80AC538|80AB654|80B3FE8|80AF3C8||||
|0|80138E8|80133C8|80132A8|80131F0||||
|802F7B4|803631C|8035E44|803AD58|803AD38|AiFindClosestTileInRangeWithListedTerrain|bool AiFindClosestTileInRangeWithListedTerrain(_BYTE *a1, char a2, _WORD *a3)||
|0|80386CC|8038218|803D0B4|803D124||||
|80333B0|803A574|803A0C0|803EFA8|803F018||||
|0|80210C8|8020C5C|8021C70|8021E10||||
|802DEDC|803418C|8033CB4|8036FA8|8036EA8||||
|8044F90|804DE4C|804D670|80530E0|80523EC||||
|802B814|8031758|8031270|803421C|8034314|CanUnitUseVisit|signed int CanUnitUseVisit()||
|0|8034894|80343BC|80376A8|80375E8|GetTriggeredTrapType|signed int GetTriggeredTrapType(int a1)||
|8057380|80635F0|8062E08|806F678|806D35C||||
|0|8091A74|8091138|809A4BC|80981E4|SomethingPrepListRelated|int SomethingPrepListRelated(_DWORD *a1, int a2, char a3)||
|803D93C|80461DC|80459F0|804AF8C|804A1D0||||
|0|806347C|8062C94|806F4D8|806D1B4|loadMagfcastBG|int loadMagfcastBG(int AIS, unsigned int index)||
|0|808A074|8089714|8092FD8|8090D00||||
|0|809C838|809BE80|80A5774|80A199C||||
|800974C|800821C|800838C|8006CA4|8006DA0|DialogueMain_UpdateDisplay|signed int DialogueMain_UpdateDisplay(signed int a1)||
|0|8023FEC|8023B60|802506C|80250BC|TryAddTrapsToTargetList|int TryAddTrapsToTargetList()||
|803BC60|8043510|8042DF8|8048378|8048460||||
|803E3C8|8046CA4|80464BC|804BA64|804ACC4||||
|8042660|804BA60|804B284|8050BB4|804FE40|InBattleMainRoutine|int InBattleMainRoutine()||
|80477AC|8050AC8|80502EC|80563C0|8055424|StartBattleAnimResireHitEffects|int StartBattleAnimResireHitEffects(int a1, int a2)||
|0|80835D8|8082BD8|808C268|8089F58||||
|0|80A974C|80A8838|80B12E4|80AC844||||
|0|809BB98|809B1C4|80A4A28|80A0C40||||
|8071308|808356C|8082B6C|808C1FC|8089EEC||||
|0|808954C|8088BE8|809242C|809014C||||
|8079A28|808EA84|808E140|80979B8|80956D8|ReorderPlayerUnitsBasedOnDeployment|int ReorderPlayerUnitsBasedOnDeployment()||
|80823A0|8090EC0|8090580|8099AD0|80977EC||||
|8085FB4|80A236C|80A19D8|80AAE88|80A6470||||
|8016860|8016AD0|8016668|80167D4|8016A2C|DrawItemStatScreenLine|[void DrawItemStatScreenLine(struct TextHandle* text, int item, int nameColor, u16* mapOut) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L445)||
|8022774|8026540|80260B4|8027AF4|8027B60||||
|8022940|8026908|802647C|8027FA8|8028014||||
|8023E24|80280A0|8027C14|8029A6C|8029AE0|RepairMenuItemSelect|[u8 RepairMenuItemSelect(struct MenuProc* menu, struct MenuItemProc* menuItem)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L967)||
|8026CA0|802C100|802BC40|802E368|802E430|ApplyEnabledMapChanges|[void ApplyEnabledMapChanges(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L187)||
|0|802C70C|802C24C|802E9F8|802EAC0|DecayTraps|[void DecayTraps(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L669)||
|802986C|802EE6C|802E9A0|80316E0|8031794|PrepareArenaStruct|int PrepareArenaStruct(int a1)||
|806AE7C|80790F8|8078928|8085484|808314C||||
|806F170|8080FB8|8080270|8089910|8087698|DrawUnitScreenSupportList|int DrawUnitScreenSupportList()||
|0|809BEC4|809B4EC|80A4D54|80A0F6C||||
|0|809F5B0|809EB78|80A7E60|80A341C||||
|8087CD4|80A4078|80A3404|80AD2F8|80A88E0||||
|0|80AC4E8|80AB604|80B3F98|80AF378||||
|809406C|800A580|800A584|8008EA4|8008FB4||||
|801D9D0|801F400|801F07C|801F5D0|801F978||||
|0|80251EC|8024D60|8026694|80266F0|SMS_80266F0|int SMS_80266F0(int a1, int a2)||
|8022BA4|8026C04|8026778|80282A4|8028310|CanUnitSupportNow|[s8 CanUnitSupportNow(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L113)||
|8025FB4|802AB90|802A6E0|802CC9C|802CD64||||
|803AD74|804259C|8041ED8|8047494|8047570||||
|0|80462A4|8045AB8|804B054|804A298||||
|803E204|8046AE4|80462F8|804B89C|804AAFC||||
|8042D84|804C144|804B968|8051334|8050600|ekrBattle_8050600|int ekrBattle_8050600(int a1)||
|8047FDC|80514B8|8050CDC|8056E88|8055F00|ekrBattleStarting_8055F00|int ekrBattleStarting_8055F00(int a1)||
|8054D78|805DA04|805D21C|8062874|8061774||||
|0|8065388|8064B98|8072168|806FBB8||||
|0|8083DAC|80833AC|808CAC0|808A7B0||||
|0|8085254|8084858|808DFF8|808BCF8|Loop6CUI1_DisplayTransition|int Loop6CUI1_DisplayTransition(int a1)||
|0|80A9838|80A8924|80B13D0|80AC930||||
|0|80AA910|80A9A34|80B24DC|80ADA3C||||
|0|8006AC4|8006C34|8005544|800563C|StartFace|int StartFace(int fadeId, int portraitId, int x, int y, int dispType)|ARGS (int faceId, int portraitId, int x, int y, int idk)|
|0|800837C|80084EC|8006E04|8006F00||||
|8014F70|8014D78|80148FC|80146B4|80146A0||||
|0|8016E8C|8016A38|8016BF8|8016E50|GetWeaponExpProgressState|[void GetWeaponExpProgressState(int wexp, int* outValue, int* outMax) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L689)||
|0|802242C|8021FB4|80230B8|80230F0||||
|0|80347EC|8034314|8037600|8037540|MineFireTrap_8037540|int MineFireTrap_8037540(int a1)||
|80309E0|8037760|80372AC|803C144|803C1B4|UpdateNumberOfAlliedUnitsWithin8Tiles|int UpdateNumberOfAlliedUnitsWithin8Tiles(char *a1)||
|803E2D0|8046BB0|80463C8|804B96C|804ABCC||||
|803E4AC|8046D80|8046598|804BB40|804ADA0||||
|803E5D0|8046EB0|80466C8|804BC64|804AEC4||||
|0|804FAC4|804F2E8|8055214|805452C||||
|0|8058208|8057A20|805E24C|805D14C||||
|805C76C|8068938|806814C|8074DE8|807290C||||
|8070448|80823C8|8081668|808ADCC|8088B40|HbRedirect_SSItem|[void HbRedirect_SSItem(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2013)||
|0|808ED24|808E3E0|8097C94|80959B4|AtMenu_AutoDeployPrepScreenUnits|int AtMenu_AutoDeployPrepScreenUnits(unsigned __int8 *a1)||
|0|809A324|8099968|80A3300|0||||
|0|80A0C14|80A0248|80A9478|80A4A34|BWL_AddFavoritismValue|int BWL_AddFavoritismValue(int a1, int a2)||
|0|80063C4|8006534|8004DF0|8004EE8||||
|8016EAC|8017310|8016EBC|8016F90|80171E8|GetUnitWeaponReachBits|[int GetUnitWeaponReachBits(struct Unit* unit, int itemSlot) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L877)||
|0|8018914|8018524|80187B0|8018A9C|GetUnitKeyItemSlotForTerrain|[int GetUnitKeyItemSlotForTerrain(struct Unit* unit, int terrain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1230)||
|8019A34|801A6B4|801A2D4|801A798|801AABC|MapAddInRange|[void MapAddInRange(int x, int y, int range, int value)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L401)||
|801B9F4|801D094|801CC90|801CFA8|801D344||||
|801DA54|801F484|801F100|801F654|801F9FC||||
|8020A98|8023DD0|8023944|8024DF0|8024E40|ForEachUnitInRange|int ForEachUnitInRange()||
|8025CFC|802A8E0|802A430|802C9D0|802CA98||||
|803667C|803DB98|803D6E8|8042AEC|8042B68||||
|8047268|80502B0|804FAD4|8055BE0|8054F10|EfxWeaponIcon_OnLoop|int EfxWeaponIcon_OnLoop(_DWORD *a1)||
|80478A0|8050BBC|80503E0|80564B4|8055518||||
|804CA48|8056284|8055A9C|805C384|805B5E0||||
|0|805B930|805B148|806123C|806013C||||
|8054B98|805D824|805D03C|8062694|8061594||||
|8054C54|805D8E0|805D0F8|8062750|8061650||||
|0|805F950|805F168|80647D8|80636D8||||
|8054310|8061128|8060940|8066084|0||||
|0|807A754|8079CE0|8086F18|8084C4C||||
|0|807A7B4|8079D40|8086F78|8084CAC|IsCharDeadAsNonPlayerUnit|signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1)||
|0|807AA74|807A000|8087238|8084F6C|IsCharDeadAsNonPlayerUnit|signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1)||
|806C41C|807ACA8|807A234|808746C|80851A0||||
|0|8082B60|8081E00|808B55C|80892D0|GetHelpBoxItemInfoKind|[int GetHelpBoxItemInfoKind(int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2454)||
|0|8084FC4|80845C8|808DD70|808BA60||||
|0|8085658|8084C5C|808E400|808C100||||
|0|80908E8|808FFA8|80993F0|809710C||||
|0|809B73C|809AD64|80A45AC|0||||
|0|809BAE0|809B10C|80A4954|80A0B6C||||
|0|809DB74|809D15C|80A64FC|80A2730||||
|0|80A2CD0|80A205C|80AC0B4|80A769C||||
|0|80A9A3C|80A8B28|80B15D4|80ACB34||||
|0|80B8F84|80B82E8|80BB550|80B6A10||||
|80209C8|8023D00|8023874|8024D00|8024D50|CountUnitsInState|[int CountUnitsInState(int faction, int state) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L36)||
|80284D8|802D9C0|802D500|8030220|80302D0||||
|0|802ED60|802E894|80315D4|8031688||||
|802C274|80321EC|8031CBC|8034D64|8034E5C|DrawHammerneUnitInfoWindow|int DrawHammerneUnitInfoWindow(int a1)||
|802CD40|8032EF8|80329C8|8035B0C|8035A0C||||
|802E090|8034340|8033E68|803715C|803705C||||
|8031C7C|8038E6C|80389B8|803D864|803D8D4||||
|8032318|80394C4|8039010|803DEC4|803DF34|AiBattleGetDamageDealtWeight|signed int AiBattleGetDamageDealtWeight()||
|803248C|8039638|8039184|803E044|803E0B4|AiBattleGetDamageTakenWeight|signed int AiBattleGetDamageTakenWeight()||
|803BE78|8043728|8043010|8048594|804867C||||
|803ECD0|80475D0|8046DE8|804C3C4|804B624||||
|0|804B428|804AC4C|8050520|804F7AC|OverriddenMenuAvailability|[u8 OverriddenMenuAvailability(const struct MenuItemDef* def, int number)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L743)||
|8042818|804BC18|804B43C|8050D74|8050000|ekrBattle_8050000|int ekrBattle_8050000(int a1)||
|804286C|804BC6C|804B490|8050DC8|8050054|EkrBattle_BattleQuoteInit|int EkrBattle_BattleQuoteInit(int a1)||
|0|8053438|8052C50|8058FE8|80581A0||||
|0|80641D0|80639E8|807034C|806E034||||
|806C168|807A990|8079F1C|8087154|8084E88||||
|0|807AAB0|807A03C|8087274|8084FA8||||
|0|807AAEC|807A078|80872B0|8084FE4||||
|0|807ACEC|807A278|80874B0|80851E4||||
|0|808606C|808566C|808EE58|808CB5C||||
|0|80996D4|8098E18|80A2858|80A05BC||||
|8086558|80A294C|80A1FB8|80AB480|80A6A68||||
|0|80A454C|80A38D8|80AD91C|80A8F04||||
|0|80AAEF8|80AA030|80B2AC0|80AE044||||
|809CE10|80BF688|80BEB44|80D54A4|80D07AC|SoundClear|[void SoundClear(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L450)||
|8013F7C|8013970|8013450|8013330|8013278||||
|0|80051E8|800530C|8003AFC|8003BB0|PrintDebugStringAsOBJ|int PrintDebugStringAsOBJ(int a1, int a2, _BYTE *a3)||
|0|8005580|80056C4|8003EC8|8003FAC||||
|807921C|807B2A8|807A834|800BF08|800BC1C|HideAllUnits|int HideAllUnits()||
|806D028|800AC34|800AC8C|80114AC|80113C0|PopupProc_WaitForPress|int PopupProc_WaitForPress(int a1)||
|801C188|801D808|801D404|801D864|801DC00|NewMoveUnitForUnitBeingRescued|int NewMoveUnitForUnitBeingRescued(_DWORD *a1)||
|0|801DCB4|801D8B0|801DCF4|801E098|HandleNewItemGetFromDrop|int HandleNewItemGetFromDrop(int a1, __int16 a2, signed int a3)||
|0|80212D4|8020E68|8021E4C|8021FEC||||
|0|8021EB4|8021A3C|8022AF8|8022B30||||
|0|8022330|8021EB8|8022FA4|8022FDC||||
|8020164|8023138|8022CC0|8023DD8|8023E1C||||
|8021A1C|8024DFC|8024970|80262A0|80262FC|TryAddUnitToHammerneTargetList|int TryAddUnitToHammerneTargetList(char *a1)||
|8026288|802B250|802ADA0|802D3E0|802D4A8|TradeMenu_RefreshItemText|int TradeMenu_RefreshItemText(int a1)||
|802CCEC|8032EA0|8032970|8035AB4|80359B4||||
|802E01C|80342CC|8033DF4|80370E8|8036FE8||||
|0|80349F8|8034520|803780C|0||||
|8030364|8036ECC|80369F4|803B904|803B8FC|AiGetLootingParameters|bool AiGetLootingParameters(_WORD *a1, int a2)||
|8032A08|8039BB8|8039704|803E5D0|803E640|AiUpdateAllUnitHealAi|int AiUpdateAllUnitHealAi()||
|0|803FB84|803F6C4|8044AC8|8044B2C||||
|803CD74|80455BC|8044DCC|804A390|8049594||||
|803CF14|8045764|8044F74|804A540|8049744||||
|803DDC0|8046694|8045EA8|804B440|804A6A4||||
|8042E14|804C1C8|804B9EC|80513B8|8050684|ekrBattle_8050684|int ekrBattle_8050684(int a1)||
|8048E08|80522DC|8051B00|8057D18|8056D90|EkrWindowAppear_Loop|int EkrWindowAppear_Loop(int a1)||
|804C9FC|8056238|8055A50|805C338|805B594||||
|804D3A8|8056D14|805652C|805CD78|805BFDC||||
|804DBAC|80575BC|8056DD4|805D628|805C88C||||
|8054D08|805D994|805D1AC|8062804|8061704||||
|0|80645D4|8063DEC|8070724|0||||
|0|806466C|8063E84|80707BC|0||||
|805BD04|8067E14|8067628|8073ED4|80719F0|Loop6C_efxSoundSE|int Loop6C_efxSoundSE(int a1)||
|805E890|806AFB4|806A7D4|80776B4|807527C|StartEkrPegasusKnightBG|int StartEkrPegasusKnightBG(int a1, int a2, int a3, int a4)||
|805E964|806B088|806A8A8|8077788|8075350||||
|80717B8|8083A48|8083048|808C6D4|808A3C4||||
|0|8087208|808681C|808FFB8|808DCD0||||
|0|808726C|8086880|80900A8|808DDC0||||
|0|808EA20|808E0DC|8097954|8095674||||
|0|808ECB0|808E36C|8097BDC|80958FC||||
|0|8096618|8095E24|809F718|809D47C||||
|8084BEC|80A0938|809FF6C|80A9190|80A474C|BWL_IncrementMoveValue|int BWL_IncrementMoveValue(int a1)||
|8084BB8|80A0978|809FFAC|80A91D0|80A478C|BWL_IncrementStatScreenViews|int BWL_IncrementStatScreenViews(int a1)||
|8084C30|80A0A08|80A003C|80A9260|80A481C|BWL_AddTilesMoved|int BWL_AddTilesMoved(int a1, int a2)||
|8084C84|80A0A68|80A009C|80A92C0|80A487C|BWL_AddExpGained|int BWL_AddExpGained(int a1, int a2)||
|8087AA8|80A3DDC|80A3168|80AD0E4|80A86CC||||
|0|80AADFC|80A9F34|80B29C4|80ADF48||||
|0|80AC0AC|80AB1C8|80B3D00|80AF0E0||||
|0|80AC10C|80AB228|80B3D60|80AF140||||
|0|8084194|8083798|808CEA8|808AB98||||
|0|80918D8|8090F9C|809A320|8098048||||
|80098A8|8008308|8008478|8006D90|8006E8C||||
|80891DC|8012E40|80127C4|8009AB4|8009B64||||
|8013C30|8013614|80130F4|8012F94|8012EDC|CopyNoCompData|int CopyNoCompData(int a1, int a2)||
|801445C|8014264|8013D44|8013C14|8013B5C||||
|801452C|8014334|8013E14|8013CD0|8013C18||||
|0|80168A4|8016428|80165A8|8016800|CanUnitUseStaffNow|[s8 CanUnitUseStaffNow(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L395)||
|80167E4|8016A4C|80165DC|8016750|80169A8|DrawItemMenuLineNoColor|[void DrawItemMenuLineNoColor(struct TextHandle* text, int item, u16* mapOut) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L434)||
|801EC94|8021C28|80217B0|802286C|80228A4|RescueUsability|signed int RescueUsability()||
|801ED00|8021C94|802181C|80228D8|8022910|DropUsability|signed int DropUsability()||
|801F39C|80221E0|8021D68|8022E54|8022E8C||||
|8020FF0|8024384|8023EF8|8025424|8025474|TryAddRescuedUnitToTakeTargetList|int TryAddRescuedUnitToTakeTargetList(int a1)||
|8022C60|8026CD0|8026844|8028374|80283E0|ClearUnitSupports|[void ClearUnitSupports(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L162)||
|0|802A704|802A254|802C7FC|802C8C4|MakeSnagBattleTarget|int MakeSnagBattleTarget()||
|802826C|802D74C|802D28C|802FFAC|803005C||||
|80282B4|802D794|802D2D4|802FFF4|80300A4||||
|802DCFC|8033FAC|8033AD4|8036DD0|8036CD0|BKSEL_Draw|int BKSEL_Draw(int a1)||
|802EF6C|8035870|8035398|803A1F4|803A17C|CpPerform_LootWait|signed int CpPerform_LootWait(signed int a1)||
|80316C0|80383C0|8037F0C|803CDA8|803CE18|AiScriptCmd_12_MoveTowardsEnemy|int AiScriptCmd_12_MoveTowardsEnemy(_BYTE *a1)||
|0|8038440|8037F8C|803CE28|803CE98|AiScriptCmd_13|int AiScriptCmd_13(_BYTE *a1)||
|8032548|80396F4|8039240|803E108|803E178|ComputeAiAttackWeight|int ComputeAiAttackWeight(int a1)||
|8036804|803DD20|803D870|8042C74|8042CF0||||
|80383F8|803FB28|803F66C|8044A6C|8044AD4||||
|8039178|8040944|8040238|8045888|80458E8||||
|803BC18|80434C8|8042DB0|8048330|8048418||||
|803E514|8046DE8|8046600|804BBA8|804AE08||||
|803ED9C|80476A0|8046EB8|804C4BC|804B71C||||
|803FB84|80484A4|8047CB8|804D14C|804C3AC||||
|0|804E3E0|804DC04|8053668|8052978|StartEfxAvoid|int StartEfxAvoid(int a1)||
|0|805057C|804FDA0|8055EB8|0||||
|0|805073C|804FF60|8056078|0||||
|8047938|8050C54|8050478|80565A8|805560C||||
|8047B6C|8050E88|80506AC|8056858|80558BC||||
|0|80510F4|8050918|8056AC0|8055B38||||
|0|80511E4|8050A08|8056BC0|8055C38||||
|804807C|8051558|8050D7C|8056F28|8055FA0|ekrBattleStarting_8055FA0|int ekrBattleStarting_8055FA0(int a1)||
|804F3B8|8058F2C|8058744|805EFD8|805DED8|StartSubSpell_efxElfireBG|int StartSubSpell_efxElfireBG(int a1)||
|805B780|806788C|80670A0|807395C|8071468||||
|805DA7C|8069C28|8069448|8076314|8073E8C||||
|0|806AAA0|806A2C0|8077190|8074D58||||
|0|807A620|8079BAC|8086DD8|8084B0C||||
|8070738|8082728|80819C8|808B128|8088E9C|StartHelpBoxExt|[void StartHelpBoxExt(const struct HelpBoxInfo* info, int unk)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2193)||
|8070BEC|8082C44|8081EE4|808B640|80893B4|TryRelocateHbLeft|[int TryRelocateHbLeft(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2511)||
|8070C1C|8082C74|8081F14|808B670|0||||
|0|808364C|8082C4C|808C2DC|8089FCC||||
|80715FC|8083880|8082E80|808C510|808A200||||
|0|8084208|808380C|808CF1C|808AC0C||||
|0|8084E8C|8084490|808DC38|808B928||||
|0|80861DC|80857DC|808EFC4|808CCC8|Loop6CUI1_Hidden|int Loop6CUI1_Hidden(_BYTE *a1)||
|0|80869F8|8086008|808F7FC|808D514||||
|0|8086D88|8086398|808FB88|808D8A0||||
|0|80883C8|8087A40|8091240|808EF6C||||
|0|8088404|8087A7C|809127C|808EFA8||||
|0|8088464|8087ADC|80912DC|808F008||||
|0|808F5CC|808EC90|809853C|809625C||||
|0|8096078|8095848|809EF04|809CC60||||
|0|8096374|8095B6C|809F224|809CF8C||||
|0|80965B4|8095DC0|809F6B4|809D418||||
|0|8097020|809689C|80A019C|809DEFC||||
|0|8098210|8097A9C|80A13F0|809F150||||
|0|809B248|809A870|80A40D4|0||||
|0|80A4254|80A35DC|80AD4B4|80A8A9C||||
|0|80AAFA4|80AA0DC|80B2B6C|80AE0F0||||
|0|80AB098|80AA1D0|80B2C7C|80AE200|FadeOut_Loop|int FadeOut_Loop(int a1)||
|809FA98|80C0C28|80C57B4|80DC0DC|80D74A0|BgTileMap_ApplyTSA|int BgTileMap_ApplyTSA(int a1, int a2, int a3)||
|8013B24|8013508|8012FE8|8012E84|8012DCC||||
|80330C8|803A28C|8039DD8|803ECB8|803ED28|AiTryDoDanceAdjacent|signed int AiTryDoDanceAdjacent(int a1, int a2)||
|809FAA8|80C0C38|80C57C4|80DC0EC|80D74B0||||
|802D4D8|8033710|80331E0|8036464|8036364||||
|0|80B735C|80B6550|80BAB54|80B5FD0||||
|0|8088584|8087BFC|80913FC|808F128||||
|0|8004648|800476C|8002EC0|8002F70|ForEveryProc|int ForEveryProc()||
|0|8004698|80047BC|8002F10|8002FC0|ForEach6CMarked|void ForEach6CMarked(int userVal, int (*func)(int))||
|0|8004774|8004898|8002FF4|80030A4|ForProcFamily|int ForProcFamily(int a1)||
|8006B74|8005E00|8005F6C|800482C|8004924||||
|0|80068F4|8006A64|8005360|8005458|PushSpriteLayerObjects|[void PushSpriteLayerObjects(int layer)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L182)||
|0|800773C|80078AC|8006184|8006280||||
|0|8007B94|8007D04|8006530|800662C||||
|800C084|8009D0C|8009E7C|80087A4|80088A8||||
|8016250|80161EC|8015D70|8015EA8|8015E9C|ShouldMoveCameraPosSomething|bool ShouldMoveCameraPosSomething(int a1, int a2)||
|0|8018318|8017F28|80181B0|801849C|UnitFinalizeMovement|[void UnitFinalizeMovement(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L988)||
|8018E10|801996C|8019584|8019994|8019CBC|RenderBmMapOnBg2|[void RenderBmMapOnBg2(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L400)||
|0|8020508|80200A0|8020D88|8021090||||
|806DC50|8020540|80200D8|8020E80|8021188||||
|801FEE8|8022EBC|8022A44|8023B54|8023B90|StaffItemSelect_Usability|signed int StaffItemSelect_Usability(int a1, int a2)||
|0|8023B78|80236EC|8024ACC|8024B1C||||
|80215E4|80249C4|8024538|8025DCC|8025E28|TryAddUnitToHealTargetList|int TryAddUnitToHealTargetList(int a1)||
|802173C|8024B1C|8024690|8025FC0|802601C|TryAddUnitToBarrierTargetList|int TryAddUnitToBarrierTargetList(int a1)||
|8021B30|8024F14|8024A88|80263B8|8026414||||
|0|80282F4|8027E68|8029CC4|8029D38|sub_8029D38|[int sub_8029D38(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1080)||
|8026254|802B21C|802AD6C|802D3AC|802D474|TradeMenu_InitTextHandles|int TradeMenu_InitTextHandles()||
|0|802D8A8|802D3E8|8030108|80301B8|BMapDispResume|[void BMapDispResume(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L307)||
|80296B0|802EBF8|802E72C|8031478|803152C|ShrinkConvoyItemList|int ShrinkConvoyItemList()||
|8029BFC|802F240|802ED74|8031ABC|8031B70|LoadArenaWeapons|int LoadArenaWeapons()||
|0|802FD88|802F8BC|8032714|80327C8|BATTLE_ProbablyMakesTheDeadUnitDissapear|int BATTLE_ProbablyMakesTheDeadUnitDissapear(int a1)||
|0|8030E48|803095C|8033850|8033940||||
|802CAC8|8032A44|8032514|80355C4|80356BC||||
|802D06C|8033224|8032CF4|8035E14|8035D14||||
|802E394|8034664|803418C|8037474|80373B4||||
|802EABC|80353B4|8034EDC|8039D24|8039CAC|AiDecideMain|[void AiDecideMain(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/cp_decide.c#L306)||
|8031308|803808C|8037BD8|803CA74|803CAE4|AiScriptCmd_08_DoStandardActionAgainstClass|int AiScriptCmd_08_DoStandardActionAgainstClass(_BYTE *a1)||
|8033250|803A414|8039F60|803EE40|803EEB0||||
|803395C|803AB34|803A680|803F570|803F5E0||||
|80339F8|803ABD0|803A71C|803F610|803F680||||
|8033B04|803ACDC|803A828|803F720|803F790||||
|8035C84|803D1A0|803CCF0|80420E8|8042168||||
|80368B0|803DDCC|803D91C|8042D20|8042D9C||||
|8038D64|8040530|803FE24|8045484|80454E4||||
|803B508|8042D34|8042690|8047C08|8047CF0|SioMenu_8047CF0|int SioMenu_8047CF0(int a1)||
|0|8044214|8043A14|8048FC0|0||||
|0|804431C|8043B1C|80490C8|0||||
|0|804440C|8043C0C|80491B8|0||||
|803C6BC|8044F08|804470C|8049CC0|8048EB8||||
|803C7D8|8045024|8044828|8049DDC|8048FD4||||
|803CBB4|8045400|8044C10|804A1CC|80493D0||||
|803E8B0|80471AC|80469C4|804BF60|804B1C0||||
|803EECC|80477D4|8046FE8|804C5F0|804B850||||
|804054C|8048E7C|8048690|804DA18|804CC78||||
|8040F70|80498BC|80490D4|804E468|804D6D4||||
|8040FC0|804990C|8049124|804E4B8|804D724||||
|8041A50|804AC90|804A4A8|804FCC4|804EF38|Menu_OnInit|[void Menu_OnInit(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L297)||
|8042704|804BB04|804B328|8050C58|804FEE4|GameLoop_Battle|int GameLoop_Battle()||
|8043208|804C588|804BDAC|80517B8|8050A84|ekrBattle_8050A84|int ekrBattle_8050A84(int a1)||
|8044D08|804E004|804D828|8053298|80525A4||||
|80472D0|8050318|804FB3C|8055C48|8054F78|EfxWeaponIcon_OnEnd|int EfxWeaponIcon_OnEnd(int a1)||
|8047B3C|8050E58|805067C|8056828|805588C||||
|804ED94|8058908|8058120|805E9B4|805D8B4|StartEfxThunderBG|int StartEfxThunderBG(int a1)||
|804F288|8058DFC|8058614|805EEA8|805DDA8||||
|804F2D0|8058E44|805865C|805EEF0|805DDF0|StartSubSpell_efxFireHITBG|int StartSubSpell_efxFireHITBG(int a1)||
|804F738|80592AC|8058AC4|805F330|805E230|loadFimbulvetrBGTR|int loadFimbulvetrBGTR(int a1)||
|804FD78|80598EC|8059104|805F9A4|805E8A4||||
|8050ED4|805A700|8059F18|8060AA8|805F9A8||||
|805120C|805AA38|805A250|8060DE0|805FCE0||||
|80553B4|805E044|805D85C|8062E78|8061D78||||
|8055AA0|805E794|805DFAC|8063624|8062524||||
|8055D30|805EA24|805E23C|80638B4|80627B4||||
|8056C9C|805F8C4|805F0DC|806474C|806364C||||
|0|8061758|8060F70|80666B8|8065008||||
|8056F50|80631B0|80629C8|806F154|806CE30||||
|805765C|8063A6C|8063284|806FAF4|806D7D8||||
|805C3B8|8068564|8067D78|80749E0|8072504||||
|805DD78|8069F38|8069758|8076624|807419C||||
|0|806A658|8069E78|8076D44|807490C||||
|8054E58|806A6FC|8069F1C|8076DE8|80749B0||||
|0|806A958|806A178|8077048|8074C10||||
|8073F90|806ABB4|806A3D4|80772A4|8074E6C||||
|805E91C|806B040|806A860|8077740|8075308||||
|806E9E8|8080650|807F898|8088E38|8086B7C||||
|806EC6C|8080A94|807FD28|8089354|80870BC|DrawStatScreenBar|int DrawStatScreenBar(int a1, int a2, int a3, int a4, signed int a5, int a6)||
|8070518|8082498|8081738|808AEA0|8088C14|HbRedirect_SSSupports|[void HbRedirect_SSSupports(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2057)||
|0|8084E68|808446C|808DC14|808B904||||
|0|808578C|8084D90|808E534|808C234||||
|0|80866FC|8085CFC|808F4B0|808D1B4||||
|0|808F2E4|808E9A8|8098234|8095F54||||
|0|808F670|808ED34|80985C4|80962E0||||
|0|809410C|8093814|809D0D8|809AE10||||
|0|809463C|8093D54|809D5A4|809B2DC||||
|0|809733C|8096BB0|80A04B8|809E218||||
|0|80984B4|8097D30|80A1694|809F3F4||||
|0|8099C98|80992D8|80A2CCC|80A0A18||||
|0|809B890|809AEBC|80A46F8|0||||
|8082F54|809E298|809D880|80A6AFC|0||||
|8082FE8|809E32C|809D914|80A6B90|0||||
|8084280|809EEA0|809E488|80A7704|80A2CC0||||
|0|80AA350|80A943C|80B1EDC|80AD43C||||
|0|80AB840|80AA978|80B342C|80AE9B0||||
|0|80AFDAC|80AEE74|80B75A0|80B2988||||
|0|80B0EDC|80B00A8|80B8AA8|0||||
|0|80B8E80|80B81E4|80BB460|80B6920||||
|0|80B9C88|80B9128|80BC0C0|80B7614||||
|0|80B65CC|80B57AC|80BEF94|80BA100||||
|0|80B66C0|80B58A0|80BF088|80BA1F4||||
|0|80174F4|80170A0|8017178|80173D0|GetUnitItemCostSum|[int GetUnitItemCostSum(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L983)||
|0|80840D8|80836D8|808CDEC|808AADC||||
|0|80887B4|8087E2C|809162C|808F358||||
|806ACEC|8078F64|8078794|80852F0|8082FB8||||
|0|809FD04|809F2C8|80A84CC|80A3A88||||
|0|8004820|8004944|800309C|8003150|ProcInst14_WhileRoutine|signed int ProcInst14_WhileRoutine(int a1)||
|0|80048D0|80049F4|800314C|8003200|ProcInst08_BlockUntilRunning|signed int ProcInst08_BlockUntilRunning(int a1)||
|8004DD8|8004D74|8004E98|8003678|800372C|LoadIconObjectGraphics|[void LoadIconObjectGraphics(int Index, int b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L112)||
|0|800694C|8006ABC|80053B8|80054B0|StartSpriteRefresher|[struct SpriteProc* StartSpriteRefresher(ProcPtr parent, int layer, int x, int y, const u16* object, int tileref)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L200)||
|8008974|8006E54|8006FC4|80058D0|80059CC||||
|0|8008408|8008578|8006E90|8006F8C||||
|806C524|8008EB0|8009020|8007940|8007A3C||||
|0|800909C|800920C|8007B24|8007C28|DialoguePauseTimer_OnLoop|int DialoguePauseTimer_OnLoop(int a1)||
|0|8012924|8012290|8009438|8009548|AP_SetDefinition|[void AP_SetDefinition(struct APHandle* handle, const u16* definition) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L213)||
|0|8012F50|80128D4|8009BA0|8009C40||||
|0|80233E0|8011498|800CC14|800C938|EventB3_|signed int EventB3_()||
|0|800AA80|800AAD8|80112FC|8011210|PopupProc_PlaySound|int PopupProc_PlaySound(int a1)||
|8014BC8|80149D0|80144B0|801430C|8014254|Timer_Countdown|int Timer_Countdown(int a1)||
|801515C|8014F64|8014AE8|80148A4|801487C|FutureCall2_Loop|int FutureCall2_Loop(int a1)||
|0|80158D4|8015458|80154EC|80154C8|MapMain_UpdateTraps|signed int MapMain_UpdateTraps(signed int a1)||
|800F8F8|8016470|8015FF4|801614C|8016140||||
|8017798|8017DE0|80179F0|8017C14|8017EF4|UnitLoadSupports|[void UnitLoadSupports(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L729)||
|0|8018B0C|801871C|80189AC|8018C98|IsPositionMagicSealed|[s8 IsPositionMagicSealed(int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1336)||
|80194A4|801A0E0|8019D00|801A1B8|801A4EC|GenerateMovementMap|[void GenerateMovementMap(int x, int y, int movement, int unitId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L78)||
|801AD50|801BFCC|801BC1C|801BF9C|801C30C||||
|801B754|801CDC0|801C9BC|801CC70|801D008|PlayerPhase_BackToMove|int PlayerPhase_BackToMove(unsigned __int16 **a1)||
|801B9B0|801D050|801CC4C|801CF64|801D300|MaybeRunPostActionEvents|signed int MaybeRunPostActionEvents()||
|801C02C|801D6A4|801D2A0|801D6FC|801DA98|DisplayMoveRangeGraphics|int DisplayMoveRangeGraphics(__int16 a1)||
|801C134|801D7B0|801D3AC|801D808|801DBA4|PlayerPhase_HandleAutoEnd|int PlayerPhase_HandleAutoEnd(unsigned __int16 **a1)||
|801C560|801DBF8|801D7F4|801DC38|801DFDC||||
|801E8F8|80207BC|8020354|80210EC|80213F4||||
|80501B8|8021FAC|8021B34|8022BF8|8022C30|DisplayUnitStandingAttackRange|int DisplayUnitStandingAttackRange()||
|801F6A8|8022614|802219C|80232B0|80232E8|ItemCommandEffect|signed int ItemCommandEffect(int a1, int a2)||
|801F948|80228D4|802245C|802356C|80235A8||||
|801FACC|8022A68|80225F0|8023700|802373C||||
|8020678|8023644|80231B8|8024538|8024588||||
|808FD44|8023AE4|8023658|8024A38|8024A88||||
|801F648|8023B4C|80236C0|8024AA0|8024AF0||||
|0|8023C54|80237C8|8024BA8|8024BF8||||
|8020E5C|80241F0|8023D64|8025280|80252D0|MakeTradeTargetList|int MakeTradeTargetList(int a1)||
|8022F58|8026FC4|8026B38|8028668|80286D4|GetCharacterAffinityIcon|[int GetCharacterAffinityIcon(int characterId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L335)||
|809101C|8027090|8026C08|8028738|80287A4|HaveCharactersMaxSupport|[s8 HaveCharactersMaxSupport(u8 charA, u8 charB)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L384)||
|8026820|802B8BC|802B40C|802DA34|802DAFC|TradeMenu_802DAFC|signed int TradeMenu_802DAFC(int a1)||
|80285FC|802DAE4|802D624|8030344|80303F4||||
|80286EC|802DBD4|802D714|8030434|80304E4||||
|8028804|802DCEC|802D82C|803054C|80305FC||||
|8028918|802DE00|802D940|8030664|8030714||||
|0|8031594|80310A8|8033F98|8034090||||
|802BBD0|8031B1C|0|80345E8|80346E0|sub_80346E0|[const char* sub_80346E0(unsigned chIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L34)||
|802CBB4|8032D68|8032838|80358E4|80357E4||||
|802D178|8033348|8032E18|8035F20|8035E20||||
|802D314|80334E0|8032FB0|80360B8|8035FB8||||
|802E0FC|80343AC|8033ED4|80371C8|80370C8||||
|802E36C|803463C|8034164|803744C|803738C||||
|0|8034A74|803459C|8037888|80377F0||||
|802F268|8035C90|80357B8|803A714|803A69C|CpPerform_StealWait|signed int CpPerform_StealWait(int a1)||
|8031790|8038894|80383E0|803D268|803D2D8|AiScriptCmd_19_MoveTowardsTerrain|int AiScriptCmd_19_MoveTowardsTerrain(_BYTE *a1)||
|8031808|8038910|803845C|803D2E4|803D354|AiScriptCmd_1A_MoveTowardsTerrain|int AiScriptCmd_1A_MoveTowardsTerrain(_BYTE *a1)||
|8036ADC|803E01C|803DB6C|8042F64|8042FE0||||
|8036BFC|803E13C|803DC8C|8043084|8043100||||
|803BE00|80436B0|8042F98|804851C|8048604||||
|803CB3C|8045388|8044B98|804A14C|8049350||||
|803EA74|8047374|8046B8C|804C170|804B3D0||||
|803EAAC|80473AC|8046BC4|804C1A8|804B408||||
|803EAE0|80473E0|8046BF8|804C1DC|804B43C||||
|803EBBC|80474BC|8046CD4|804C2B8|804B518||||
|803ED74|8047678|8046E90|804C46C|804B6CC||||
|0|804A044|804985C|804EBCC|804DE3C||||
|8042B18|804BED8|804B6FC|8051078|8050304|ekrBattle_8050304|int ekrBattle_8050304(int a1)||
|80433B0|804C6F0|804BF14|8051968|8050C34|ekrBattle_CheckForLevelup_8050C34|int ekrBattle_CheckForLevelup_8050C34(int a1)||
|0|804FE1C|804F640|8055570|8054888||||
|8048100|80515DC|8050E00|8056FAC|8056024|ekrBattleStarting_8056024|int ekrBattleStarting_8056024(int a1)||
|8048E88|805235C|8051B80|8057D98|8056E10|StartEkrNamewinAppear|int StartEkrNamewinAppear(int a1, __int16 a2, __int16 a3)||
|8048F88|805245C|8051C80|8057EA8|8056F20|loadBaseAppear|void loadBaseAppear(int a1, __int16 a2)||
|804D4CC|8056E38|8056650|805CEA0|805C104||||
|804E2B4|8057DF0|8057608|805DE30|80C1F18||||
|804E988|80584F8|8057D10|805E544|805D444||||
|804F1FC|8058D70|8058588|805EE1C|805DD1C|loadFireOBJ|void loadFireOBJ(void *AIS)||
|804F510|8059084|805889C|805F130|805E030|StartSubSpell_efxElfireOBJ|int StartSubSpell_efxElfireOBJ(int a1)||
|8051050|805A87C|805A094|8060C24|805FB24||||
|80512BC|805AAE8|805A300|8060E90|805FD90||||
|8051FEC|805B9D4|805B1EC|80612E0|80601E0||||
|0|8062558|8061D70|806749C|0||||
|8056E9C|80630FC|8062914|806F0A0|806CD7C||||
|8057E98|8064140|8063958|80702BC|806DFA4||||
|805826C|8064B40|8064358|8071218|806EC68||||
|80584AC|8064D80|8064598|8071458|806EEA8||||
|0|806544C|8064C5C|80727C4|8070214||||
|805B834|8067940|8067154|8073A10|807151C||||
|805CFC0|8069180|8068994|8075784|80732A8||||
|0|8069A84|80692A4|8076170|8073CE8||||
|805DD08|8069EB8|80696D8|80765A4|807411C||||
|806B37C|80796F4|8078F24|8085528|80831F0|IsThereClosedDoorAt|bool IsThereClosedDoorAt(char a1, char a2)||
|0|80799A0|80791D0|8085620|80832E8|MaybeCallEndEvent|int MaybeCallEndEvent()||
|806AC64|8078EDC|807870C|8085E54|8083B2C|EvCheck0E_|signed int EvCheck0E_(_DWORD *a1)||
|0|807A3A4|0|8086C6C|80849A0||||
|806F9F4|80818CC|8080B70|808A26C|8087FE0|PageNameCtrl_OnIdle|[void PageNameCtrl_OnIdle(struct StatScreenPageNameProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L1443)||
|0|80826A0|8081940|808B0A0|8088E14|StartHelpBox_Unk|[void StartHelpBox_Unk(int x, int y, int mid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2147)||
|0|80827F4|8081A94|808B1F4|8088F68|StartHelpBoxExt_Unk|[void StartHelpBoxExt_Unk(int x, int y, int mid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2242)||
|8091918|8082BB0|8081E50|808B5AC|8089320||||
|0|8083E44|8083444|808CB58|808A848||||
|0|8084000|8083600|808CD14|808AA04||||
|0|8084688|8083C8C|808D42C|808B11C||||
|8073080|8086368|8085968|808F14C|808CE50||||
|80741C8|8087B48|8087190|8090A38|808E764|NewChapterStatusScreen|int NewChapterStatusScreen(signed int a1)||
|8074254|80895BC|8088C58|809249C|80901BC||||
|8075338|808A4F8|8089B9C|8093458|8091180||||
|80762B4|808B4C0|808AB64|809442C|8092134||||
|80762E4|808B4F0|808AB94|809445C|8092164||||
|0|808E558|808DC18|8097520|8095240||||
|0|80909DC|809009C|8099578|8097294||||
|0|8091664|8090D20|809A080|8097DA8||||
|0|8092A1C|809210C|809B8AC|80995D4||||
|806C594|8099CDC|809931C|80A2D10|80A0A5C||||
|0|809BE88|809B4B0|80A4D18|80A0F30||||
|8013788|809C7CC|809BE14|80A5708|80A1930||||
|0|809D420|809CA08|80A5E18|80A204C||||
|809A80C|809E0E0|809D6C8|80A6948|80A2B7C||||
|0|809E134|809D71C|80A699C|80A2BD0||||
|0|809F5FC|809EBC0|80A7EAC|80A3468||||
|0|80A0D74|80A03A8|80A95F4|80A4BB0|GetGlobalCompletionCount|int GetGlobalCompletionCount()||
|8084FB8|80A0FA8|80A061C|80A980C|80A4DC8||||
|8085EF4|80A22AC|80A1918|80AADC8|80A63B0|GetLastSuspendSaveId|bool GetLastSuspendSaveId()||
|80861EC|80A25A4|80A1C10|80AB0D8|80A66C0||||
|8086220|80A25D8|80A1C44|80AB10C|80A66F4||||
|80899F0|80A61B0|80A54C8|80AF64C|80AAB78||||
|800D30C|80ABEF0|80AB00C|80B3B44|80AEF24||||
|0|80AC998|80ABAB4|80B4414|80AF7F4||||
|0|80ACA1C|80ABB38|80B4498|80AF878||||
|0|80AD460|80AC588|80B4E58|80B0240||||
|0|80B74C0|80B66B4|80BACC8|80B6144|GetChapterTacticsRank|signed int GetChapterTacticsRank()||
|0|80B6DCC|80B5FC0|80C7C08|80C2E50||||
|809CD78|80BF5F0|80BEAAC|80D540C|80D0714|m4aSoundMode|[void m4aSoundMode(u32 mode)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L392)||
|809DD38|80C05B8|80BFA74|80D63E0|80D16E4|ReadSramFast_Core|int ReadSramFast_Core(_BYTE *a1, _BYTE *a2, int a3)||
|8018258|801899C|80185AC|801883C|8018B28|GetUnitWeaponUsabilityBits|[int GetUnitWeaponUsabilityBits(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1274)||
|8028B4C|802E034|802DB74|8030898|8030948||||
|80325BC|8039768|80392B4|803E17C|803E1EC|AiGetUnitReachWeightWithEquippedWeapon|signed int AiGetUnitReachWeightWithEquippedWeapon(int a1, int a2, int a3)||
|8054DE8|805DA74|805D28C|80628E4|80617E4||||
|805E59C|806ACC0|806A4E0|80773B8|8074F80|EkrTriangle_OnLoop|int EkrTriangle_OnLoop(int a1)||
|0|8085008|808460C|808DDB4|808BAA4||||
|0|800479C|80048C0|800301C|80030CC||||
|8004E58|8004DD4|8004EF8|80036D8|800378C|SetupDebugFontForBG|int SetupDebugFontForBG(int a1, signed int a2)||
|0|8004EB0|8004FD4|80037BC|8003870||||
|8007F8C|8006990|8006B00|80053FC|80054F4|MoveSpriteRefresher|[void MoveSpriteRefresher(struct SpriteProc* proc, int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L218)||
|0|800722C|800739C|8005C74|8005D70||||
|0|80076F8|8007868|8006140|800623C||||
|800A78C|8008E58|8008FC8|80078E8|80079E4||||
|0|80122CC|8011C34|8009140|8009250||||
|0|800A8EC|800A918|8011184|801106C|GenSomeLongPopupText|int GenSomeLongPopupText(unsigned __int8 *a1, int a2, int a3)|Arguments: r0 = Popup Definition ptr, (r1, r2) = Text Struct Copy|
|8013C74|8013658|8013138|8012FD8|8012F20||||
|80149E0|80147E8|80142C8|8014150|8014098||||
|8014ADC|80148E4|80143C4|801424C|8014194||||
|8015180|8014F88|8014B0C|80148C8|80148A0|FutureCall_Loop|int FutureCall_Loop(_DWORD *a1)||
|801523C|8015044|8014BC8|8014990|8014968||||
|80152C4|80150CC|8014C50|8014A18|80149F0||||
|80716C8|8015274|8014DF8|8014BC8|8014BA0||||
|80158C0|80156C8|801524C|80152C8|80152A4|OnVBlankMain|int OnVBlankMain()||
|8015910|8015718|801529C|8015318|80152F4|OnGameLoopMain|int OnGameLoopMain()||
|80161C0|801615C|8015CE0|8015E18|8015E0C|EnsureCameraOntoPosition|signed int EnsureCameraOntoPosition(signed int a1, int a2, int a3)||
|80162F4|8016290|8015E14|8015F4C|8015F40||||
|809B608|8016410|8015F94|80160EC|80160E0||||
|8018C6C|80197C8|80193E0|80197F0|8019B18|DisplayBmTile|[void DisplayBmTile(u16* bg, int xTileMap, int yTileMap, int xBmMap, int yBmMap) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L322)||
|0|801D154|801CD50|801D068|801D404||||
|801C380|801D9F0|801D5EC|801DA0C|801DDA8|Destruct6CBMXFADE|int Destruct6CBMXFADE(int a1)||
|8093444|801DA38|801D634|801DA74|801DE18|BMXFADEExists|bool BMXFADEExists()||
|801C990|801E2A0|801DEFC|801E2E0|801E684|ForceMenuItemPanel|int ForceMenuItemPanel(signed int a1, _DWORD *a2, char a3, char a4)||
|801D014|801E924|801E5A0|801E988|801ED30||||
|801D310|801EC24|801E8A0|801EDF8|801F1A0||||
|801D398|801ECAC|801E928|801EE80|801F228||||
|801D41C|801ED30|801E9AC|801EF04|801F2AC||||
|801D8E4|801F314|801EF90|801F4E4|801F88C||||
|801E3AC|80200CC|801FC64|8020924|8020C2C||||
|801E9AC|8020870|8020408|80211A0|80214A8||||
|0|8020E2C|80209C4|80219FC|8021D04||||
|0|80215E0|8021174|8022140|0||||
|806DE00|8021750|80212D8|80222AC|80222E0||||
|0|8022C10|8022798|80238A4|80238E0||||
|8021278|8024638|80241AC|80256D8|8025728|FillBallistaRangeMaybe|int FillBallistaRangeMaybe(int a1)||
|8000564|80253D8|8024F4C|8026900|802695C|SomethingSMS_16x16|int SomethingSMS_16x16(int a1, unsigned int a2)||
|8022B14|8026B44|80266B8|80281F8|8028264|GetUnitTotalSupportLevel|[int GetUnitTotalSupportLevel(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L75)||
|80257B0|802A24C|8029D9C|802C2B0|802C368||||
|80267D0|802B86C|802B3BC|802D9E4|802DAAC|TradeMenu_802DAAC|int TradeMenu_802DAAC(_BYTE *a1)||
|8090834|802BCC8|802B808|802DDF4|802DEBC||||
|8027950|802CCDC|802C81C|802F08C|802F154|ExecFortify|int ExecFortify(signed int a1)||
|8028238|802D718|802D258|802FF6C|803001C||||
|8028598|802DA80|802D5C0|80302E0|8030390||||
|802867C|802DB64|802D6A4|80303C4|8030474||||
|80288D0|802DDB8|802D8F8|803061C|80306CC||||
|80289DC|802DEC4|802DA04|8030728|80307D8||||
|8028A6C|802DF54|802DA94|80307B8|8030868||||
|8028E44|802E32C|802DE6C|8030B90|8030C40|ResetMapPaletteAnimations|[void ResetMapPaletteAnimations(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L905)||
|80297EC|802EDEC|802E920|8031660|8031714|LoadPlayerUnitsFromUnitStack|int LoadPlayerUnitsFromUnitStack()||
|8029AA0|802F0C8|802EBFC|8031944|80319F8|GetNearLevel|int GetNearLevel(int a1)||
|802A6B4|802FD04|802F838|803269C|8032750|KillUnitIfNoHealth|int KillUnitIfNoHealth(int a1)||
|802A7F4|802FE70|802F9A4|80327FC|80328B0||||
|0|802FF34|802FA6C|80328C0|8032974||||
|802B750|80313A0|8030EB4|8033D94|8033E8C||||
|802B964|80318B4|80313CC|8034378|8034470|CanActiveUnitUseRescue|bool CanActiveUnitUseRescue()||
|802B980|80318D0|80313E8|8034394|803448C|CanActiveUnitUseTrade|bool CanActiveUnitUseTrade()||
|802C034|8031FAC|8031A74|8034B20|8034C18|NewUnitInfoWindow_WithAllLines|int NewUnitInfoWindow_WithAllLines(signed int a1)||
|802C894|803280C|80322DC|8035384|803547C||||
|802CA58|80329D4|80324A4|8035554|803564C||||
|802CDD8|8032F90|8032A60|8035BA4|8035AA4||||
|802CF24|80330DC|8032BAC|8035CEC|8035BEC||||
|802D09C|8033254|8032D24|8035E44|8035D44||||
|802D0C8|8033280|8032D50|8035E70|8035D70||||
|8027368|8033468|8032F38|8036040|8035F40||||
|802733C|80347A0|80342C8|80375B4|80374F4|MineFireTrap_DoSomeBWLStuffWhenKill|int MineFireTrap_DoSomeBWLStuffWhenKill(int a1)||
|802E4C0|8034DB8|80348E0|8039724|80396AC|CpPhase_Init|int CpPhase_Init(signed int a1)||
|802E52C|8034E24|803494C|8039790|8039718|BskPhase_Init|int BskPhase_Init(signed int a1)||
|802E670|8034F64|8034A8C|80398D0|8039858|CpOrder_BuildUnitList|int CpOrder_BuildUnitList(signed int a1)||
|0|80355E4|803510C|8039F6C|8039EF4|CpPerform_UpdateMapMusic|int CpPerform_UpdateMapMusic()||
|802ED68|803569C|80351C4|803A024|8039FAC|CpPerform_BeginUnitMovement|int CpPerform_BeginUnitMovement(int a1)||
|802F064|8035968|8035490|803A2EC|803A274|CpPerform_TalkWait|signed int CpPerform_TalkWait()||
|0|8035BEC|8035714|803A670|803A5F8|CpPerform_WaitAction|int CpPerform_WaitAction(int a1)||
|8030180|8036CE8|8036810|803B720|803B718|GetLesserWeightedAdjacentPosition|bool GetLesserWeightedAdjacentPosition(int a1, int a2, int a3, _WORD *a4)||
|80326C4|8039870|80393BC|803E284|803E2F4|SetupAiDangerMap|int SetupAiDangerMap()||
|8032F48|803A10C|8039C58|803EB34|803EBA4||||
|8036440|803D95C|803D4AC|80428B0|804292C||||
|80364A4|803D9C0|803D510|8042914|8042990||||
|8036714|803DC30|803D780|8042B84|8042C00||||
|8036918|803DE58|803D9A8|8042DB0|8042E2C|SioCon_8042E2C|int SioCon_8042E2C(int a1)||
|8036A54|803DF94|803DAE4|8042EDC|8042F58||||
|8036D08|803E248|803DD98|8043190|804320C|SioPlaySomeIndexedSfx|int SioPlaySomeIndexedSfx(int a1)||
|80388A4|804005C|803F950|8044F9C|8044FFC|NameSelect_8044FFC|int NameSelect_8044FFC(int a1)||
|8038910|80400C8|803F9BC|8045008|8045068|NameSelect_8045068|int NameSelect_8045068(int a1)||
|803A748|8041F70|8041880|8046EAC|8046F68||||
|803BBF8|80434A8|8042D90|8048310|80483F8||||
|0|804417C|804397C|8048F24|0||||
|0|8044704|8043F04|80494B0|0||||
|803C4CC|8044D14|8044518|8049AC8|8048CB8||||
|803C678|8044EC4|80446C8|8049C7C|8048E6C||||
|803CEDC|804572C|8044F3C|804A508|804970C||||
|803D4B8|8045D2C|8045540|804AB00|8049D0C||||
|803DCC0|8046594|8045DA8|804B340|804A5A4||||
|803F890|804819C|80479B0|804CF58|804C1B8||||
|803F8BC|80481C8|80479DC|804CF84|804C1E4||||
|803F9F4|8048300|8047B14|804D0BC|804C31C|SetMoveUnitMoveManual_Unique|int SetMoveUnitMoveManual_Unique()|Arguments: r0 = Move Manual Pointer (will be copied)|
|80403C0|8048CF0|8048504|804D88C|804CAEC||||
|8040770|80490BC|80488D4|804DC64|804CECC||||
|80407A8|80490F4|804890C|804DC9C|804CF04||||
|8040CA8|80495F4|8048E0C|804E1A0|804D40C||||
|8040F00|804984C|8049064|804E3F8|804D664||||
|8041060|80499AC|80491C4|804E544|804D7B0||||
|8041308|804A30C|8049B24|804EEEC|804E168|UnpackUiFrameBuffered|[void UnpackUiFrameBuffered(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L219)||
|8041E24|804B08C|804A8B0|8050174|804F400|GetMenuCursorPosition|[void GetMenuCursorPosition(struct MenuProc* proc, int* xResult, int* yResult)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L521)||
|8042264|804B664|804AE88|80507B0|804FA3C|StartTargetSelection|int StartTargetSelection(int a1)||
|80425F0|804B9F4|804B218|8050B48|804FDD4|StartEkrBattle|int StartEkrBattle()||
|804294C|804BD4C|804B570|8050EA8|8050134|ekrBattle_8050134|int ekrBattle_8050134(int a1)||
|8042B4C|804BF0C|804B730|80510AC|8050338|ekrBattle_WaitForTriangleAttackAnim|int ekrBattle_WaitForTriangleAttackAnim(int a1)||
|8042C48|804C008|804B82C|80511B4|8050440|ekrBattle_WaitForClassChange|int ekrBattle_WaitForClassChange(int a1)||
|80433E8|804C728|804BF4C|80519A0|8050C6C|ekrBattle_WaitForLevelup_8050C6C|int ekrBattle_WaitForLevelup_8050C6C(int a1)||
|8043424|804C764|804BF88|80519DC|8050CA8|ekrBattle_WaitForPopup|int ekrBattle_WaitForPopup(int a1)||
|8043554|804C854|804C078|8051ADC|8050DA8|ekrBattle_8050DA8|int ekrBattle_8050DA8(int a1)||
|8045578|804E7AC|804DFD0|8053A7C|8052D8C|StartEfxStatusCHG|int StartEfxStatusCHG(int a1)||
|8045694|804E89C|804E0C0|8053B6C|8052E7C||||
|0|804E8CC|804E0F0|8053B9C|8052EAC||||
|0|804E9A8|804E1CC|8053C74|8052F84||||
|804722C|8050274|804FA98|8055BA4|8054ED4|EndEfxWeaponIcon|int EndEfxWeaponIcon()||
|804738C|80503D4|804FBF8|8055D08|8055038||||
|80473F0|8050438|804FC5C|8055D6C|805509C||||
|8047430|8050478|804FC9C|8055DAC|80550DC||||
|0|80504F8|804FD1C|8055E2C|0||||
|0|8050604|804FE28|8055F40|0||||
|8047D38|8051214|8050A38|8056BF0|8055C68|MainUpdate_8055C68|int MainUpdate_8055C68()||
|8048154|8051630|8050E54|8057000|8056078|ekrBattleStarting_8056078|int ekrBattleStarting_8056078(int a1)||
|8048DA4|8052278|8051A9C|8057CAC|8056D24|StartEkrWindowAppear|int StartEkrWindowAppear(int a1, __int16 a2)||
|804C554|8055D2C|8055544|805BE20|805B07C|PlayBattleCroudSfxIfArena|int PlayBattleCroudSfxIfArena()||
|804C56C|8055D44|805555C|805BE38|805B094|RunBattleForecastTutorialEvent|int RunBattleForecastTutorialEvent(int a1)||
|804C860|8056038|8055850|805C138|805B394||||
|0|80561D8|80559F0|805C2D8|805B534||||
|804E540|805807C|8057894|805E0C0|805CFC0||||
|804F450|8058FC4|80587DC|805F070|805DF70||||
|804F9E8|805955C|8058D74|805F610|805E510||||
|804FA14|8059588|8058DA0|805F63C|805E53C|loadFimbulvetrOBJ2Fall|void loadFimbulvetrOBJ2Fall(void *AIS, char a2)||
|8056F28|8063188|80629A0|806F12C|806CE08||||
|8057344|80635B4|8062DCC|806F63C|806D320||||
|8053420|8063804|806301C|806F88C|806D570||||
|8057EC4|806416C|8063984|80702E8|806DFD0||||
|0|8064764|8063F7C|80708B4|0||||
|8057F08|80647DC|8063FF4|8070EB8|806E904||||
|8057F24|80647F8|8064010|8070ED4|806E920||||
|805DA38|8069BE4|8069404|80762D0|8073E48||||
|805DBA4|8069D50|8069570|807643C|8073FB4||||
|805DE8C|806A05C|806987C|8076744|80742BC||||
|805E510|806A5C0|8069DE0|8076CAC|8074874||||
|0|806A888|806A0A8|8076F78|8074B40||||
|0|806AC5C|806A47C|807734C|8074F14||||
|805F15C|806B85C|806B07C|8077F70|8075B3C|DeleteAnimsOnPopup|int DeleteAnimsOnPopup()||
|805F57C|806BD3C|806B550|807848C|807606C|BattlePopup_Wait16Frames|int BattlePopup_Wait16Frames(int a1)||
|805F71C|806BEDC|806B6F0|807863C|807621C|ekrPopup_MarkEnd|int ekrPopup_MarkEnd(int a1)||
|8058D08|806609C|80658AC|8079AA8|8077684||||
|0|807AE18|807A3A4|80875F0|8085324||||
|808F2F0|807AEA8|807A434|8087620|8085354||||
|0|807B878|807AE04|8087BE8|808591C||||
|0|807CD94|807C320|8087C5C|8085990||||
|0|80810A8|8080360|8089A00|8087788|DrawUnitWeaponRank|int DrawUnitWeaponRank(int a1, int a2, int a3, int a4)||
|806FA28|8081900|8080BA4|808A2A0|8088014||||
|806FAF0|80819C8|8080C6C|808A368|80880DC||||
|807049C|808241C|80816BC|808AE20|8088B94|HbPopulate_SSWExp|[void HbPopulate_SSWExp(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2027)||
|80708C0|80828C8|8081B68|808B2C8|808903C|EndHelpBox|[void EndHelpBox(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2291)||
|80708E4|80828EC|8081B8C|808B2EC|8089060||||
|0|8082D8C|808202C|808B7F8|8089588|MoveHelpPromptSprite|[void MoveHelpPromptSprite(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2616)||
|80716F0|8083980|8082F80|808C60C|808A2FC||||
|8071848|8083AD8|80830D8|808C764|808A454||||
|0|8083FBC|80835BC|808CCD0|808A9C0||||
|0|8084CEC|80842F0|808DA98|808B788||||
|0|8086BB8|80861C8|808F9BC|808D6D4|Loop26CPI|int Loop26CPI(int a1)||
|0|8086C00|8086210|808FA04|808D71C|Loop46CPI|int Loop46CPI(int a1)||
|0|8086ED4|80864E8|808FCA0|808D9B8||||
|0|8086FC0|80865D4|808FD88|808DAA0||||
|80733C0|8087054|8086668|808FE1C|808DB34||||
|0|8087B2C|8087174|8090A1C|808E748||||
|0|8088718|8087D90|8091590|808F2BC||||
|0|8088768|8087DE0|80915E0|808F30C||||
|0|8089310|80889AC|80921F8|808FF18||||
|0|808EEAC|808E564|8097E10|8095B30||||
|0|808F2BC|808E980|809820C|8095F2C||||
|0|808F7D4|808EE98|8098708|8096424|AtMenu_LockGame|int AtMenu_LockGame()||
|0|808F7EC|808EEB0|8098720|809643C||||
|0|80903A8|808FA68|8098EA8|8096BC4|NullifyBattleDamageIfUsingStone|int NullifyBattleDamageIfUsingStone(int a1)||
|0|8090494|808FB54|8098FB0|8096CCC||||
|0|8090774|808FE34|809927C|8096F98||||
|0|80909F8|80900B8|8099594|80972B0||||
|0|8090A1C|80900DC|80995B8|80972D4||||
|0|8090AA4|8090164|8099640|809735C||||
|8082CBC|809186C|8090F30|809A2B4|8097FDC||||
|0|8091B8C|8091250|809A5D4|80982FC||||
|0|8094BA4|8094314|809DAF4|809B830||||
|8057208|8096058|8095828|809EEE4|809CC40||||
|0|8097C10|8097488|80A0D94|809EAF4||||
|800EFB4|8097C30|80974A8|80A0DB4|809EB14||||
|0|809AD54|809A378|80A3C64|0||||
|0|809B2BC|809A8E4|80A4148|0||||
|0|809C92C|809BF78|80A5868|80A1A90||||
|0|809D4D0|809CAB8|80A5EC8|80A20FC||||
|8089894|809E1CC|809D7B4|80A6A30|0||||
|8082EC0|809E218|809D800|80A6A7C|0||||
|0|80A0B5C|80A0190|80A93BC|80A4978||||
|8085F24|80A22DC|80A1948|80AADF8|80A63E0|UpdateNextSuspendSaveId|int UpdateNextSuspendSaveId()||
|8087218|80A3540|80A28CC|80AC89C|80A7E84||||
|80877AC|80A3AE0|80A2E6C|80ACDE8|80A83D0||||
|80877EC|80A3B20|80A2EAC|80ACE28|80A8410||||
|0|80A542C|80A47B4|80AE7D8|80A9D84||||
|0|8012F2C|80128B0|80AEF80|80AA49C||||
|0|80A5B20|80A4E34|80AF010|80AA52C|savemenu_SetDifficultyChoice|int savemenu_SetDifficultyChoice(char a1, char a2)||
|0|80A9954|80A8A40|80B14EC|80ACA4C||||
|0|80A99D0|80A8ABC|80B1568|80ACAC8||||
|0|80A99EC|80A8AD8|80B1584|80ACAE4||||
|0|80A9C68|80A8D54|80B1800|80ACD7C||||
|0|80A9C84|80A8D70|80B181C|80ACD60||||
|0|80A9D00|80A8DEC|80B1898|80ACDF8||||
|0|80AA118|80A9204|80B1CA4|80AD204||||
|0|80AA180|80A926C|80B1D0C|80AD26C||||
|0|80AA440|80A9564|80B2004|80AD564||||
|0|80AA870|80A9994|80B2438|80AD998||||
|0|80AA8C0|80A99E4|80B2488|80AD9E8||||
|0|80AAB18|80A9C3C|80B26E4|80ADC44||||
|0|80AB5AC|80AA6E4|80B3198|80AE71C||||
|0|80ABB24|80AAC48|80B3798|80AEB60||||
|0|80AC1A4|80AB2C0|80B3DF8|80AF1D8||||
|0|80AC9E4|80ABB00|80B4460|80AF840||||
|0|80ACC30|80ABD4C|80B4684|80AFA64||||
|0|80ACEAC|80ABFC8|80B4878|80AFC60||||
|0|80AD544|80AC66C|80B4F3C|80B0324||||
|0|80AD920|80ACA48|80B51DC|80B05C4||||
|0|80AE3AC|80AD484|80B5C24|80B1008||||
|808C9AC|80AF114|80AE1FC|80B68B0|80B1C90||||
|0|80AFDDC|80AEEA4|80B75D0|80B29B8||||
|8095A74|80B0E7C|80B0048|80B8A48|80B3E9C||||
|0|80B9250|80B85B4|80BB7B4|80B6C74||||
|0|80B96F0|80B8B90|80BBC98|80B71DC||||
|0|807AE6C|807A3F8|80C3238|80BE44C||||
|803D178|80459EC|80451FC|804A7CC|80499D0||||
|0|80126BC|8012028|80091D4|80092E4|AP_Display|[void AP_Display(struct APHandle* handle, int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L88)||
|0|80174A0|801704C|8017124|801737C|GetConvoyItemCostSum|[int GetConvoyItemCostSum(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L970)||
|801753C|8017AE8|80176F8|80177A0|80179F8|UnitHasItem|[s8 UnitHasItem(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L472)||
|0|803BE78|803B9C4|8040770|80407F0||||
|806C2C4|807A9F0|8079F7C|80871B4|8084EE8|IsAnyEnemyUnitAlive|signed int IsAnyEnemyUnitAlive()||
|8072230|8085188|808478C|808DF38|808BC2C||||
|804C2EC|8055AC4|80552DC|805BBB8|805AE14||||
|0|8004A60|8004B84|80032E0|8003394|ProcInterpretCode|int ProcInterpretCode(int a1)||
|8006F8C|8006094|8006204|8004ABC|8004BB4||||
|0|80167FC|8016380|80164F8|8016750|CanUnitUseWeaponNow|[s8 CanUnitUseWeaponNow(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L357)||
|8020B70|8023EA8|8023A1C|8024EC8|8024F18|ForEachPosInRange|int ForEachPosInRange()||
|8028AE0|802DFC8|802DB08|803082C|80308DC||||
|803B2AC|8042ACC|8042428|80479D0|8047AB8|CheckSomethingSaveRelated|signed int CheckSomethingSaveRelated()||
|808F4F0|80B75A4|80B6798|80BADB0|80B622C|GetDeadUnitAmount|int GetDeadUnitAmount()||
|809DFE4|80C0864|80BFD20|80D6690|80D1994|__modsi3|unsigned int _modsi3(unsigned int result, unsigned int a2)||
|802D66C|80338B8|8033388|803660C|803650C||||
|80581C0|8064A94|80642AC|807116C|806EBBC||||
|8058358|8064C2C|8064444|8071304|806ED54||||
|80585DC|8064EB0|80646C8|8071568|806EFB8||||
|0|8065158|8064970|80717F8|806F248||||
|0|8093814|8092F08|809C804|809A538||||
|0|809B8D0|809AEFC|80A4738|0||||
|0|809B968|809AF94|80A47D0|0||||
|0|80C0BDC|80C0114|80D6A08|80D1D88|strlen|int strlen(_DWORD *a1)||
|8015260|8015068|8014BEC|80149B4|801498C||||
|8016958|8016BC4|8016764|80168D0|8016B28|GetUnitEquippedWeapon|[u16 GetUnitEquippedWeapon(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L479)||
|8016988|8016BF4|8016794|8016900|8016B58|GetUnitEquippedWeaponSlot|[int GetUnitEquippedWeaponSlot(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L489)||
|0|8019E24|8019A3C|8019E4C|801A174|RefreshTrapFogVision|int RefreshTrapFogVision()||
|8022C28|8026C98|802680C|802833C|80283A8|GetUnitSupporterNum|[int GetUnitSupporterNum(struct Unit* unit, u8 charId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L149)||
|0|8028F14|8028A98|802A9B0|802AA44|BattleLoadDefense|int BattleLoadDefense(int a1, int a2)||
|0|804FC7C|804F4A0|80553CC|80546E4||||
|8070B8C|8082BE4|8081E84|808B5E0|8089354|TryRelocateHbUp|[int TryRelocateHbUp(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2483)||
|8070BBC|8082C14|8081EB4|808B610|8089384|TryRelocateHbDown|[int TryRelocateHbDown(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2497)||
|0|80A0BDC|80A0210|80A9440|80A49FC||||
|0|80AB6FC|80AA834|80B32E8|80AE86C||||
|809E12C|80C0A1C|80BFED8|80D6848|80D1B4C|__umodsi3|unsigned int _umodsi3(unsigned int result, unsigned int a2)||
|0|8011FD4|801193C|8008FF0|8009100||||
|0|8013E8C|801396C|801384C|8013794||||
|0|80AA230|80A931C|80B1DBC|80AD31C|DeleteEach6CDifferedLoop|int DeleteEach6CDifferedLoop()||
|809DF4C|80C07CC|80BFC88|80D65F8|80D18FC|__divsi3|int _divsi3(unsigned int a1, unsigned int a2)||
|0|80192D4|8018EEC|80192FC|8019624|sub_8019624|[void sub_8019624(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L93)||
|0|8004710|8004834|8002F90|8003040|EndEachProcMarked|int EndEachProcMarked(int a1)||
|0|8004C98|8004DBC|800359C|8003650|GetIconTileIndex|[u16 GetIconTileIndex(int Index)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L65)||
|8021360|8024724|8024298|80257C4|8025814|MakeTargetListForDoorAndBridges|int MakeTargetListForDoorAndBridges(int a1, int a2)||
|80236C4|80277E0|8027354|80290A4|80290FC|CanUnitUseChestKeyItem|[s8 CanUnitUseChestKeyItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L494)||
|80248E8|8029008|8028B68|802AAE4|802AB74|BattleLoadAS|int BattleLoadAS(int a1)||
|0|8029328|8028E78|802ACC4|802AD54|BattleApplySRankBonuses|int BattleApplySRankBonuses(int a1)||
|80331EC|803A3B0|8039EFC|803EDDC|803EE4C|AiTryDoStealAdjacent|bool AiTryDoStealAdjacent(int a1, int a2)||
|804F820|8059394|8058BAC|805F418|805E318|loadFimbulvetrBG|void loadFimbulvetrBG(void *AIS)||
|80509E4|805A210|8059A28|80605B0|805F4B0|loadResireBG|void loadResireBG(int a1, u8 ifMiss)||
|8051DFC|805B7A4|805AFBC|80610B0|805FFB0||||
|8051E80|805B828|805B040|8061134|8060034||||
|8051F04|805B8AC|805B0C4|80611B8|80600B8||||
|80541FC|805CE60|805C678|8061DAC|8060CAC||||
|805428C|805CEF0|805C708|8061E3C|8060D3C||||
|0|80617EC|8061004|806674C|806509C||||
|0|8061880|8061098|80667E0|8065130||||
|8082B1C|809169C|8090D58|809A0B8|8097DE0||||
|0|80A06BC|809FCF0|80A8ECC|80A4488|GetGameTotalTurnCount2|int GetGameTotalTurnCount2()||
|8086590|80A29DC|0|80AB514|80A6AFC||||
|809CCD4|80BF54C|80BEA08|80D5368|80D0670|SampleFreqSet|[void SampleFreqSet(u32 freq)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L360)||
|8013D74|8013758|8013238|80130D8|8013020|CopyTileGfxForObj|int CopyTileGfxForObj(const void *src, void *dst, unsigned int tileLen, unsigned int height)||
|8013E8C|8013870|8013350|80131F0|8013138||||
|3002D8C|3002E6C|3002F4C|30036FC|300375C||||
|8000234|8000234|8000234|8000234|8000234||||
|0|80049A0|8004AC4|8003220|80032D4|ProcInst0F_Mark|signed int ProcInst0F_Mark(int a1)||
|8082ABC|8004B20|8004C44|80033A0|8003454||||
|0|8004B2C|8004C50|80033AC|8003460||||
|808F4B8|8004F20|8005044|800382C|80038E0|StoreNumberStringToSmallBuffer|int StoreNumberStringToSmallBuffer(int a1)||
|0|8005E48|8005FB4|8004874|800496C||||
|0|8006028|8006198|8004A50|8004B48|DrawSpecialUiDecNumber|int DrawSpecialUiDecNumber(_WORD *a1, int a2, int a3, int a4)||
|0|800680C|800697C|8005278|8005370|PutObjectAffine|[void PutObjectAffine(int id, int pa, int pb, int pc, int pd)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L136)||
|0|8006924|8006A94|8005390|8005488|_HiObjProc_Loop|int HiObjProc_Loop(int a1)||
|0|8007220|8007390|8005C68|8005D64||||
|0|8007490|8007600|8005ED8|8005FD4||||
|0|8007974|8007AE4|80063E0|80064DC||||
|0|8007EEC|800805C|8006974|8006A70|StartDialogueParentless|int StartDialogueParentless(int a1, int a2, const char *a3)||
|0|8007F08|8008078|8006990|8006A8C||||
|0|8007F38|80080A8|80069C0|8006ABC||||
|0|8007F84|80080F4|8006A14|8006B10|Dialogue_SetDefaultTextColor|int Dialogue_SetDefaultTextColor(char a1)||
|0|800968C|80097FC|800814C|8008250||||
|0|8013214|8012B5C|8009EC4|8009F64|SetNextChapterId|int SetNextChapterId(char a1)||
|800D754|800AD04|800AD5C|801157C|8011490|Popup_CreateExt|int Popup_CreateExt(int a1, int a2, char a3, __int16 a4, char a5, signed int a6)||
|8013CEC|80136D0|80131B0|8013050|8012F98||||
|8013D34|8013718|80131F8|8013098|8012FE0||||
|8013D48|801372C|801320C|80130AC|8012FF4|RegisterObjectTileGraphics|int RegisterObjectTileGraphics(int a1, int a2, int a3, int a4)||
|8013EC4|80138A8|8013388|8013268|80131B0||||
|8013ED8|80138BC|801339C|801327C|80131C4||||
|0|8013BA0|8013664|8013560|80134A8|GetSomethingInPaletteBB_2A|int GetSomethingInPaletteBB_2A()||
|8014150|8013F58|8013A38|8013918|8013860||||
|80141E0|8014004|8013AE4|80139C4|801390C||||
|8014A38|8014844|8014324|80141AC|80140F4||||
|8014D9C|8014BA4|8014728|80144E0|80144CC||||
|8014DB4|8014BBC|8014740|80144F8|80144E4|StartPaletteAnimator_|int StartPaletteAnimator_(int a1, __int16 a2, int a3, __int16 a4, signed int a5)||
|801556C|8015374|8014EF8|8014F78|8014F50||||
|8015728|8015530|80150B4|8015134|801510C||||
|801585C|8015664|80151E8|8015264|8015240||||
|8015880|8015688|801520C|8015288|8015264||||
|80158B8|80156C0|8015244|80152C0|801529C||||
|0|80177A8|80173A0|8017448|80176A0|GetItemEncodedRange|[inline int GetItemEncodedRange(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L162)||
|0|80177D8|80173D0|8017478|80176D0|GetItemEffectiveness|[inline const u8* GetItemEffectiveness(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L170)||
|0|80181D4|8017DE4|8018060|801834C|UnitRescue|[void UnitRescue(struct Unit* actor, struct Unit* target) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L903)||
|8018408|8018EE0|8018AF0|8018EE4|80191D0|GetUnitSkill|[inline int GetUnitSkill(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L277)||
|8018448|8018F20|8018B30|8018F24|8019210|GetUnitSpeed|[inline int GetUnitSpeed(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L286)||
|8018784|801926C|8018E84|8019294|80195BC|InitChapterPreviewMap|[void InitChapterPreviewMap(int chapterId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L80)||
|80192B4|8019EF0|0|8019F18|0||||
|801DB00|801F748|801F2E0|801FA38|801FDAC||||
|801E2B0|801FFD0|801FB68|8020818|8020B20||||
|801E6C4|8020580|8020118|8020EC0|80211C8||||
|80238FC|8027B0C|8027680|80294F8|8029550|GenericStaffSelection_OnSelect|signed int GenericStaffSelection_OnSelect(int a1, int a2)||
|0|802889C|8028410|802A310|802A384||||
|0|802BBA8|802B6F8|802DFF8|802E0C0|sub_802E0C0|[void sub_802E0C0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L911)||
|8026B30|802BFB4|802BAF4|802E218|802E2E0|AddDamagingTrap|[struct Trap* AddDamagingTrap(int x, int y, int trapType, int meta, int turnCountdown, int turnInterval, int damage)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L105)||
|8029F5C|802F5A0|802F0D4|8031E18|8031ECC||||
|0|8030C88|803079C|8033680|8033770||||
|802B0FC|8030CB0|80307C4|80336A8|8033798||||
|802B118|8030CCC|80307E0|80336C4|80337B4||||
|802B138|8030CEC|8030800|80336E4|80337D4||||
|802BB30|8031A7C|0|8034548|8034640|GetChapterMapPointer|[const void* GetChapterMapPointer(unsigned chIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L12)||
|802BBA0|8031AEC|0|80345B8|80346B0|GetChapterEventDataPointer|[const void* GetChapterEventDataPointer(unsigned chIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L27)||
|802CF90|8033148|8032C18|8035D58|8035C58||||
|802CFA4|803315C|8032C2C|8035D6C|8035C6C||||
|802E58C|8034E84|80349AC|80397F0|8039778|CpPhase_Cleanup|char *CpPhase_Cleanup()||
|8031880|803898C|80384D8|803D360|803D3D0|AiScriptCmd_1B_NoOp|int AiScriptCmd_1B_NoOp(_BYTE *a1)||
|80336B0|803A888|803A3D4|803F2C0|803F330||||
|0|803AF14|803AA60|803F948|803F9C8||||
|80351F4|803C710|803C25C|8041660|80416E0||||
|8036A40|803DF80|803DAD0|8042EC8|8042F44||||
|8036DEC|803E330|803DE80|8043278|80432F4||||
|0|804397C|0|8048798|0||||
|803F454|8047D5C|8047570|804CB78|804BDD8||||
|8041188|8049AD4|80492EC|804E65C|804D8C8||||
|8042970|804BD70|804B594|8050ECC|8050158|ekrBattle_8050158|_DWORD *ekrBattle_8050158(_DWORD *result)||
|8042D70|804C130|804B954|8051320|80505EC|ekrBattle_80505EC|int ekrBattle_80505EC(int result)||
|8044608|804D9B0|804D1D4|8052C14|8051F1C||||
|0|804FC5C|804F480|80553AC|80546C4||||
|8046B5C|8050290|804FAB4|8055BC0|8054EF0|PauseEfxWeaponIcon|signed int PauseEfxWeaponIcon()||
|80474B0|80507CC|804FFF0|8056108|8055160|SpellFx_Begin|signed int SpellFx_Begin()||
|8047610|805092C|8050150|8056230|8055288||||
|8047C1C|8050F48|805076C|8056914|8055980||||
|0|8053A14|805322C|805976C|805893C||||
|0|8053C10|8053428|8059994|8058B64||||
|804BE3C|8055614|8054E2C|805B700|805A95C||||
|0|805618C|80559A4|805C28C|805B4E8||||
|0|8062824|806203C|8061EC4|8060DC4||||
|8057EF4|80647C8|8063FE0|8070EA4|806E8F0||||
|80939BC|8065238|8064A6C|8071FD8|806FA28|getSpecialAnimationEffectInfo|SpecialAnimationEffectInfo *getSpecialAnimationEffectInfo(AnimationInterpreter *AIS)||
|0|8065264|8064A98|8072004|806FA54|setSpecialAnimationEffectInfoState|void setSpecialAnimationEffectInfoState(AnimationInterpreter *AIS, __int16 state)||
|805F750|806C1A4|806B9B8|807A638|8078214|GetSpellAssocStructPtr|__int16 *GetSpellAssocStructPtr(unsigned __int16 a1)||
|805F794|806C1E8|806B9FC|807A67C|8078258||||
|806ADC4|8079040|8078870|80853CC|8083094||||
|806B338|80796B0|8078EE0|80854E4|80831AC|IsThereClosedChestAt|bool IsThereClosedChestAt(char a1, char a2)||
|806BA5C|807A0C8|80798F8|80860D0|8083DA8|CheckEventId|int CheckEventId(int a1)||
|0|807A26C|8079A9C|8086900|8084634||||
|0|807AD8C|807A318|8087564|8085298||||
|806F414|808125C|8080500|8089B90|8087904||||
|8070504|8082484|8081724|808AE8C|8088C00|HbPopulate_SSClass|[void HbPopulate_SSClass(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2052)||
|0|8083B9C|808319C|808C828|808A518||||
|0|8087E70|80874B8|8090CF0|808EA1C||||
|0|80893F4|8088A90|80922DC|808FFFC||||
|0|8090AF8|80901B8|8099694|80973B0||||
|0|8093AB4|80931A8|809CAE0|809A814||||
|0|8095824|8094FD8|809E788|809C4D8||||
|0|8098F2C|8098650|80A20F8|809FE58||||
|0|809BA78|809B0A4|80A48EC|80A0B04||||
|0|809BFB8|809B5F0|80A4E94|80A10BC||||
|0|809E1A8|809D790|80A6A0C|0||||
|0|809E1B8|809D7A0|80A6A1C|0||||
|8084428|809F0FC|809E6EC|80A792C|80A2EE8||||
|0|809FC60|809F224|80A8428|80A39E4||||
|8084F78|80A0F60|80A05D4|80A97C4|80A4D80|UpdateLastUsedGameSaveSlot|int UpdateLastUsedGameSaveSlot(char a1)||
|8085F74|80A232C|80A1998|80AAE48|80A6430|SaveMetadata_VerifyChecksum|bool SaveMetadata_VerifyChecksum(int a1)||
|0|80A2BE0|0|80AB734|80A6D1C||||
|8086FA0|80A32C8|80A2654|80AC624|80A7C0C||||
|8087290|80A35BC|80A2948|80AC91C|80A7F04||||
|8088854|80A4D64|80A40EC|80AE0E4|80A96D0||||
|8088860|80A4D70|80A40F8|80AE0F0|80A96DC||||
|0|80A9A1C|80A8B08|80B15B4|80ACB14||||
|0|80AB36C|80AA4A4|80B2F54|80AE4D8||||
|0|80AB964|80AAA9C|80B3558|80AEADC||||
|808C340|80AEA50|80ADB38|80B62EC|80B16CC||||
|0|80AFB94|80AEC5C|80B7344|80B272C||||
|808F524|80B71F8|80B63EC|80BA9F0|80B5E6C|GetChapterSurvivalRank|unsigned int GetChapterSurvivalRank()||
|808F490|80B7328|80B651C|80BAB20|80B5F9C||||
|809BF54|80BE7CC|80BDC88|80D45E8|80CF8F0|SoundMainBTM|int SoundMainBTM(_DWORD *a1)||
|809C088|80BE900|80BDDBC|80D471C|80CFA24|ply_tempo|int ply_tempo(int a1, int a2)||
|809C0B0|80BE928|80BDDE4|80D4744|80CFA4C|ply_voice|int ply_voice(int a1, int a2)||
|809DBE0|80C0458|80BF914|80D6274|80D157C|ply_xwave|[void ply_xwave(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1528)||
|809E0B4|80C09A4|80BFE60|80D67D0|80D1AD4|_div|int div(unsigned int a1, unsigned int a2)||
|809F9F0|80C0B3C|80BFFF8|80D6968|80D1C6C|memset|_BYTE *memset(_BYTE *a1, char a2, unsigned int a3)||
|809FA90|80C0C20|80C57AC|80DC0D4|80D7498|ClearOAMBuffer|_DWORD *ClearOAMBuffer(_DWORD *result, unsigned int a2)||
|809FAB8|80C0C48|80C57D4|80DC0FC|80D74C0|ComputeChecksum32|int ComputeChecksum32(unsigned __int16 *a1, int a2)||
|3002F38|3003018|30030F8|30038A8|3003908||||
|80003E0|80003E0|80003E0|80003E0|80003E0||||
|8012470|800EFB8|800F0AC|8012414|8012344|GetChapterAllyUnitCount|int GetChapterAllyUnitCount()||
|8026B08|802BF8C|802BACC|802E1F0|802E2B8|AddTrap|[struct Trap* AddTrap(int x, int y, int trapType, int meta)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L90)||
|8037020|803E564|803E0B8|80434B0|804352C||||
|0|8005F14|8006084|800493C|8004A34|Text_DrawGlyphManual|int Text_DrawGlyphManual(int a1, int a2, int a3)||
|808AF4C|8009598|8009708|8008058|800815C||||
|0|8017574|8017120|80171F8|8017450|GetPartyTotalGoldValue|[int GetPartyTotalGoldValue(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L1005)||
|8018960|8019494|80190AC|80194BC|80197E4|BmMapFill|[void BmMapFill(u8** map, int value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L195)||
|8021D08|8025344|8024EB8|802686C|80268C8|SomethingSMS_16x16_0|int SomethingSMS_16x16_0(int a1, unsigned int a2)||
|8021D9C|80254B4|8025028|80269DC|8026A38|SomethingSMS_16x32|int SomethingSMS_16x32(int a1, unsigned int a2)||
|8021E8C|80255A4|8025118|8026ACC|8026B28|SomethingSMS_32x32|int SomethingSMS_32x32(int a1, unsigned int a2)||
|80243F8|8028A60|80285D4|802A4F0|802A584|InitBattleUnitFromUnit|int InitBattleUnitFromUnit(_BYTE *a1, _DWORD *a2)||
|8024988|80291B0|8028D00|802AB88|802AC18|BattleLoadCrit|int BattleLoadCrit(int a1)||
|8060F10|8034C80|80347A8|8037B04|8037A6C|TryRemoveUnitFromBallista|int TryRemoveUnitFromBallista(int a1)||
|0|8084640|8083C44|808D3E4|808B0D4||||
|0|8084664|8083C68|808D408|808B0F8||||
|0|809F50C|809EAFC|80A7D8C|80A3348||||
|0|808734C|8086960|80D32B8|80CE5BC||||
|0|8025A6C|80255E0|8026F98|8026FF4||||
|8021F80|80259A4|8025518|8026ED0|8026F2C|SMS_SyncDirect|int SMS_SyncDirect()||
|0|80209D0|8020568|802147C|80215F0||||
|0|8020FEC|8020B84|8021610|8021784||||
|0|805C700|805BF18|806768C|806056C||||
|8056C5C|8062EBC|80626D4|806EE60|806C8C4||||
|0|807A284|0|8086B4C|80848E0||||
|0|807A2E4|0|8086BAC|8084940||||
|0|807A344|0|8086C0C|8084880||||
|80140A4|8013A98|8013578|8013458|80133A0||||
|800B4D0|80AAC88|80A9DC0|80B2874|80ADDD4||||
|0|80A9CAC|80A8D98|80B1844|80ACDA4||||
|3002FEC|30030CC|30031AC|300395C|30039BC||||
|300308C|300316C|300324C|30039FC|3003A5C||||
|8000494|8000494|8000494|8000494|8000494|ARM_PushToHiOAM(ARM)|int ARM_PushToHiOAM(int result, unsigned __int16 a2, _WORD *a3, __int16 a4)||
|8000534|8000534|8000534|8000534|8000534|ARM_PushToLoOAM(ARM)|void ARM_PushToLoOAM()||
|802F8B8|8036420|8035F48|803AE5C|803AE3C|GetPositionRangeWeight|signed int GetPositionRangeWeight(int a1, int a2)||
|8031ECC|80390A0|8038BEC|803DA98|803DB08|GetEffectiveTileMovCost|signed int GetEffectiveTileMovCost(int a1, int a2)||
|8034D28|803C144|803BC90|8040A60|8040AE0||||
|3002F00|3002FE0|30030C0|3003870|30038D0||||
|3002F94|3003074|3003154|3003904|3003964||||
|80003A8|80003A8|80003A8|80003A8|80003A8|ARM_FillRect(ARM)|_WORD *ARM_FillRect(_WORD *result, int a2, int a3, __int16 a4)||
|800043C|800043C|800043C|800043C|800043C||||
|0|80047B8|80048DC|8003038|80030E8|ProcInst00_End|int ProcInst00_End(int a1)||
|0|80047D4|80048F8|8003054|8003104|ProcInst02_CallRoutine|signed int ProcInst02_CallRoutine(int a1)||
|0|80047E8|800490C|8003068|8003118|ProcInst16_CallRoutine2|int ProcInst16_CallRoutine2(int a1)||
|80044BC|8004878|800499C|80030F4|80031A8|ProcInst05_AddChild|signed int ProcInst05_AddChild(signed int a1)||
|80044EC|8004894|80049B8|8003110|80031C4|ProcInst06_AddBlockingChild|int ProcInst06_AddBlockingChild(signed int a1)||
|800451C|80048B0|80049D4|800312C|80031E0|ProcInst07_BuggedAddGlobal|signed int ProcInst07_BuggedAddGlobal(int a1)||
|8004590|80048F8|8004A1C|8003174|8003228|ProcInst09_EndAllOf|signed int ProcInst09_EndAllOf(int a1)||
|80045C0|8004914|8004A38|8003190|8003244|ProcInst0A_BreakLoopForAll|signed int ProcInst0A_BreakLoopForAll(int a1)||
|0|800494C|8004A70|80031C8|800327C|ProcInst0C_GotoLabel|signed int ProcInst0C_GotoLabel(int a1)||
|0|8004EF4|8005018|8003800|80038B4||||
|8005154|8004F8C|80050B0|8003898|800394C||||
|80051DC|8004FF4|8005118|8003900|80039B4||||
|80055CC|8005234|8005358|8003B48|8003BFC|PrintDebugNumberDec|int PrintDebugNumberDec(int a1, int a2, int a3, int a4)|Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len|
|80055FC|8005258|800537C|8003B6C|8003C20|PrintDebugNumberHex|int PrintDebugNumberHex(int a1, int a2, int a3, int a4)|Arguments: r0 = Tile X, r1 = Tile Y, r2 = Number, r3 = Display Len|
|0|8005E60|8005FCC|800488C|8004984||||
|0|8006298|8006408|8004CC0|8004DB8||||
|80070B4|80062D8|8006448|8004D00|8004DF8||||
|0|8006A2C|8006B9C|800549C|8005594|FACE_Load|int FACE_Load(int a1)||
|0|8006F5C|80070CC|80059D8|8005AD4||||
|0|8007BB8|8007D28|8006554|8006650||||
|8009240|8007EAC|800801C|8006934|8006A30|StartDialogueFromIndex|int StartDialogueFromIndex(int a1, int a2, int a3)||
|0|8007ECC|800803C|8006954|8006A50||||
|0|8009178|80092E8|8007C00|8007D04||||
|0|8009418|8009588|8007E98|8007F9C||||
|800BF70|8009C58|8009DC8|8008708|800880C||||
|800C4AC|8009F98|800A108|8008A2C|8008B30||||
|0|800A530|800A534|8008E54|8008F64||||
|0|8011F10|8011878|8008F2C|800903C||||
|0|8012030|8011998|800904C|800915C||||
|0|8012214|8011B7C|8009088|8009198||||
|0|8012C64|80125D0|80098D4|80099E4||||
|0|8012D60|80126E4|80099D4|8009A84||||
|0|8012D98|801271C|8009A0C|8009ABC||||
|0|8012FB0|0|8009C04|8009CA4||||
|0|80131B8|8012B00|8009E68|8009F08|NewGameControl|int NewGameControl()||
|801154C|800F518|800F60C|800D004|800CD40||||
|0|800BCE4|800BE20|800E9D4|800E7C4|Event20_|int Event20_()||
|0|800B72C|800B7F0|8010F08|8010DC0||||
|0|800EC08|800ECFC|8010F98|8010E50||||
|806C76C|807AF50|807A4DC|8011030|8010EE8||||
|800D374|800AAC4|800AB1C|8011340|8011254|PopupIconUpdaterLoop|int PopupIconUpdaterLoop(int a1)||
|0|800EEA8|800EF9C|8011610|8011524|ItemGot_DisplayLePopup|int ItemGot_DisplayLePopup(int a1)||
|8012268|800EEBC|800EFB0|8011624|8011538|ItemGot_GotLeItem|int ItemGot_GotLeItem(int a1)||
|0|800ED9C|800EE90|8011710|8011624||||
|8014130|8013B24|8013604|80134E4|801342C||||
|0|8013EF8|80139D8|80138B8|8013800||||
|8014394|801419C|8013C7C|8013B5C|8013AA4||||
|8014618|8014420|8013F00|8013D88|8013CD0|StartFadeInBlack|int StartFadeInBlack(__int16 a1)||
|8014634|801443C|8013F1C|8013DA4|8013CEC|StartFadeOutBlack|int StartFadeOutBlack(__int16 a1)||
|8014668|8014470|8013F50|8013DC0|8013D08|StartBlockingFadeInBlack|int StartBlockingFadeInBlack(__int16 a1, signed int a2)||
|8014650|8014458|8013F38|8013DD8|8013D20|StartBlockingFadeOutBlack|int StartBlockingFadeOutBlack(__int16 a1, signed int a2)||
|8014680|8014488|8013F68|8013DF0|8013D38|StartBlockingFadeInWhite|int StartBlockingFadeInWhite(__int16 a1, signed int a2)||
|8014698|80144A0|8013F80|8013E08|8013D50|StartBlockingFadeOutWhite|int StartBlockingFadeOutWhite(__int16 a1, signed int a2)||
|8014728|8014530|8014010|8013E78|8013DC0|StartBlockingFadeInBlackSlow|int StartBlockingFadeInBlackSlow(signed int a1)||
|80148E0|80146E8|80141C8|8014050|8013F98||||
|8014CA8|8014AB0|8014634|80143EC|80143D8|SomeDrawTextCentered|TextStruct *SomeDrawTextCentered(_WORD *a1, char a2, int a3, unsigned __int8 *a4)||
|8014D60|8014B68|80146EC|80144A4|8014490|StartPaletteAnimator|int StartPaletteAnimator(int a1, __int16 a2, int a3, __int16 a4, signed int a5)||
|80151C4|8014FCC|8014B50|801490C|80148E4|SetupFutureCall|int SetupFutureCall(int a1, int a2, int a3)||
|8015218|8015020|8014BA4|801496C|8014944||||
|801548C|8015294|8014E18|8014BE8|8014BC0||||
|801549C|80152A4|8014E28|8014BF8|8014BD0||||
|8015A6C|80158B0|8015434|80154C8|80154A4|MapMain_StartPlayerPhaseAndApplyAction|int MapMain_StartPlayerPhaseAndApplyAction(signed int a1)||
|8016344|80162E0|8015E64|8015F9C|8015F90||||
|80163E4|8016400|8015F84|80160DC|80160D0|UpdatePlayMapMusic|int UpdatePlayMapMusic()||
|0|80178B4|80174AC|8017558|80177B0|GetItemData|[inline const struct ItemData* GetItemData(int itemIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L81)||
|8017BA8|801824C|8017E5C|80180DC|80183C8|UnitGive|[s8 UnitGive(struct Unit* actor, struct Unit* target) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L930)||
|0|8018BAC|80187BC|8018A48|8018D34|GetUnitLastItem|[int GetUnitLastItem(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1365)||
|801A5E0|801B660|801B280|801B754|801BA88|DebugPrintWithProc|[void DebugPrintWithProc(struct DebugPrintProc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L81)||
|801A644|801B6C4|801B2E4|801B7B8|801BAEC|DebugPrint|[void DebugPrint(int x, int y, int width, const char *text)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L104)||
|801A674|801B6F4|801B314|801B7E8|801BB1C|StartDebugMenu|[int StartDebugMenu(struct MenuProc *menuProc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L115)||
|801A748|801B954|801B580|801B998|801BCCC||||
|801AA74|801BC6C|801B8BC|801BCA8|801C018|DebugMenu_ErasedEffect|signed int DebugMenu_ErasedEffect()||
|801B73C|801CDA8|801C9A4|801CC58|801CFF0|PlayerPhase_CancelAction|int PlayerPhase_CancelAction(unsigned __int16 **a1)||
|0|801D374|801CF70|801D288|801D624|PlayerPhase_DisplayUnitMovement|int PlayerPhase_DisplayUnitMovement()||
|801C264|801D8D4|801D4D0|801D934|801DCD0|Make6CKOIDOAMM|int Make6CKOIDOAMM(_DWORD *a1, int a2)||
|801C59C|801DC34|801D830|801DC74|801E018||||
|0|801DC48|801D844|801DC88|801E02C||||
|801C62C|801DD60|801D95C|801DDA0|801E144|MenuCommand_DrawExtraItem|int MenuCommand_DrawExtraItem(int a1, int a2)||
|0|801DDA4|801D9A0|801DDE4|801E188|SendToConvoyMenu_NormalEffect|signed int SendToConvoyMenu_NormalEffect(int a1, int a2)||
|0|801DDF8|801D9F4|801DE38|801E1DC||||
|0|801DE18|0|801DE58|801E1FC||||
|0|801DE6C|0|801DEAC|801E250||||
|801CD50|801E650|801E2CC|801E6AC|801EA54|EndMenuItemPanel|int EndMenuItemPanel()||
|801CD60|801E660|801E2DC|801E6BC|801EA64||||
|801CF10|801E804|801E480|801E868|801EC10|StartUnitSwapAnimation|int StartUnitSwapAnimation(signed int a1, int a2, __int16 a3, __int16 a4)||
|0|801F0B8|801ED34|801F288|801F630|MineFireEffectGfx_Setup|int MineFireEffectGfx_Setup(int a1)||
|0|801F144|801EDC0|801F314|801F6BC|NewMineTrapEffectGfx|int NewMineTrapEffectGfx(signed int a1, int a2, int a3)||
|0|801F208|801EE84|801F3D8|801F780||||
|801D830|801F260|801EEDC|801F430|801F7D8||||
|801D8B8|801F2E8|801EF64|801F4B8|801F860||||
|801D95C|801F38C|801F008|801F55C|801F904||||
|0|801F71C|0|801FA0C|0||||
|801DAE4|801F72C|801F2C4|801FA1C|801FD90|BgMoverProc_Update|int BgMoverProc_Update()||
|0|801FFA8|801FB40|80207F0|8020AF8||||
|801E92C|80207F0|8020388|8021120|8021428||||
|801E974|8020838|80203D0|8021168|8021470||||
|0|8020A84|802061C|802137C|8021684|BeginLightRuneMapAnim|int BeginLightRuneMapAnim(signed int a1, __int16 a2, __int16 a3)||
|0|802107C|8020C14|8021C28|0||||
|0|80212A0|8020E34|8021E18|8021FB8||||
|0|8021550|80210E4|80220B0|8022250||||
|0|80215B8|802114C|8022118|80222B8||||
|0|8021770|80212F8|80222CC|8022300|BeginMineMapAnim|int BeginMineMapAnim(signed int a1, int a2, int a3)||
|801EAA4|8021A0C|8021594|80225D8|802260C|MapMenuCommand_UnitEffect|signed int MapMenuCommand_UnitEffect()||
|0|8021A4C|80215D4|80226C0|80226F8|MapMenuCommand_DangerZoneUnusedEffect|signed int MapMenuCommand_DangerZoneUnusedEffect()||
|801EB38|8021ACC|8021654|8022710|8022748|GenericSelection_BackToUM|signed int GenericSelection_BackToUM()||
|801EBF8|8021B8C|8021714|80227D0|8022808||||
|801EC1C|8021BB0|8021738|80227F4|802282C|GenericSelection_BackToUM_CamWait|signed int GenericSelection_BackToUM_CamWait()||
|801EC50|8021BE4|802176C|8022828|8022860||||
|801ECCC|8021C60|80217E8|80228A4|80228DC|RescueEffect|signed int RescueEffect()||
|801ED38|8021CCC|8021854|8022910|8022948|DropEffect|signed int DropEffect()||
|801ED58|8021CEC|8021874|8022930|8022968|DropSelection_OnSelect|signed int DropSelection_OnSelect(int a1, char *a2)||
|801EDC4|8021D58|80218E0|802299C|80229D4|TakeEffect|signed int TakeEffect()||
|801EE2C|8021DC0|8021948|8022A04|8022A3C|GiveEffect|signed int GiveEffect()||
|801EE4C|8021DE0|8021968|8022A24|8022A5C|MakeUnitRescueTransferGraphics|int MakeUnitRescueTransferGraphics(int a1, int a2)||
|0|8021F10|8021A98|8022B54|8022B8C||||
|801F228|802206C|8021BF4|8022CB8|8022CF0||||
|801F2BC|8022100|8021C88|8022D4C|8022D84||||
|801F35C|80221A0|8021D28|8022E00|8022E38||||
|801F420|8022264|8021DEC|8022ED8|8022F10||||
|801F484|80222DC|8021E64|8022F50|8022F88||||
|801F4A8|8022300|8021E88|8022F74|8022FAC||||
|0|8022374|8021EFC|8022FE8|8023020||||
|801F7D0|8022754|80222DC|80233EC|8023428|ItemSelectMenu_Effect|signed int ItemSelectMenu_Effect(int a1, int a2)||
|801F854|80227D8|8022360|8023470|80234AC||||
|801F898|802281C|80223A4|80234B4|80234F0||||
|801FBA8|8022B68|80226F0|80237FC|8023838||||
|801FD04|8022CD0|8022858|8023964|80239A0||||
|801FD30|8022CFC|8022884|8023990|80239CC|FillBallistaRange|int FillBallistaRange()||
|801FE94|8022E68|80229F0|8023B00|8023B3C||||
|801FF20|8022EF4|8022A7C|8023B8C|8023BC8|StaffItemSelect_Effect|signed int StaffItemSelect_Effect(int a1, int a2)||
|801FF6C|8022F40|8022AC8|8023BD8|8023C14|StaffItemSelect_OnHover|int StaffItemSelect_OnHover(int a1, int a2)||
|802013C|8023110|8022C98|8023DB0|8023DF4||||
|80201A0|8023174|8022CFC|8023E14|8023E58||||
|8020268|802322C|8022DB4|8023F74|8023FB8||||
|80204E0|80234AC|8023020|80241F4|802423C||||
|8020504|80234D0|8023044|8024218|8024260||||
|80206D0|802369C|8023210|8024590|80245E0||||
|0|80236D4|8023248|80245C8|8024618||||
|80207B4|8023758|80232CC|802464C|802469C|RescueSelection_OnChange|int RescueSelection_OnChange(int a1, char *a2)||
|8020818|80237BC|8023330|80246B0|8024700||||
|802085C|8023800|8023374|80246F4|8024744||||
|0|8023844|80233B8|8024738|8024788||||
|0|8023980|80234F4|80248D0|8024920|RideCommandEffect|signed int RideCommandEffect()||
|0|80239DC|8023550|8024930|8024980||||
|0|8023B08|802367C|8024A5C|8024AAC||||
|0|8023BB0|8023724|8024B04|8024B54||||
|0|8023BF8|802376C|8024B4C|8024B9C||||
|8020C30|8023F68|8023ADC|8024FE8|8025038|ForEachPosIn12Range|int ForEachPosIn12Range(int a1, int a2)||
|8020C64|8023F9C|8023B10|802501C|802506C|ForEachUnitInMagBy2Range|int ForEachUnitInMagBy2Range()||
|8020F30|80242C4|8023E38|8025364|80253B4|MakeRescueTargetList|int MakeRescueTargetList(int a1)||
|8020FBC|8024350|8023EC4|80253F0|8025440|MakeDropTargetList|int MakeDropTargetList(int a1)||
|8021048|80243F0|8023F64|8025490|80254E0|MakeTakeTargetList|int MakeTakeTargetList(int a1)||
|80210E8|80244A4|8024018|8025544|8025594||||
|80219E8|8024DC8|802493C|802626C|80262C8|MakeTargetListForUnlock|int MakeTargetListForUnlock(int a1)||
|8023B34|8027D98|802790C|8029770|80297D0|WarpTargetPosSelect_Confirm|int WarpTargetPosSelect_Confirm(signed int a1)||
|8023B70|8027DD4|8027948|80297AC|802980C|WarpTargetPosSelect_Cancel|int WarpTargetPosSelect_Cancel()||
|8023BA4|8027E08|802797C|80297E0|8029840|WarpTargetPosSelect_Destruct|int WarpTargetPosSelect_Destruct(int a1)||
|8023BB8|8027E1C|8027990|80297F4|8029854|WarpTargetSelection_OnSelect|signed int WarpTargetSelection_OnSelect(int a1, int a2)||
|8023C34|8027EA0|8027A14|8029874|80298D4||||
|0|8027F14|8027A88|80298E4|0||||
|8023D4C|8027FC8|8027B3C|8029994|8029A08|RepairSelectOnChange|[int RepairSelectOnChange(ProcPtr proc, struct SelectTarget* target)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L920)||
|8023F54|80281CC|8027D40|8029B9C|8029C10|BarrierSelectOnChange|[int BarrierSelectOnChange(ProcPtr proc, struct SelectTarget* target)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1021)||
|8023FC0|8028238|8027DAC|8029C08|8029C7C|AttackStaffSelectOnChange|[int AttackStaffSelectOnChange(ProcPtr proc, struct SelectTarget* target)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1043)||
|802402C|80282A4|8027E18|8029C74|8029CE8|sub_8029CE8|[int sub_8029CE8(ProcPtr proc, struct SelectTarget* target)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1065)||
|802406C|80282E4|8027E58|8029CB4|8029D28|sub_8029D28|[void sub_8029D28(ProcPtr proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1074)||
|0|8028328|8027E9C|8029CF8|8029D6C|sub_8029D6C|[void sub_8029D6C(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1088)||
|8024224|802880C|8028380|802A280|802A2F4|BATTLE_SyncMapFromBattle|int BATTLE_SyncMapFromBattle()||
|8025E98|802AA64|802A5B4|802CB54|802CC1C|UpdateActiveUnitFromBattle|int UpdateActiveUnitFromBattle()||
|8025EB4|802AA80|802A5D0|802CB70|802CC38|FinishUp10ExpBattle|int FinishUp10ExpBattle(signed int a1)||
|0|802B544|802B094|802D6CC|802D794|TradeMenu_InitGraphics|int TradeMenu_InitGraphics(int a1)||
|802686C|802B908|802B458|802DA80|802DB48|TradeMenu_802DB48|int TradeMenu_802DB48()||
|0|802BC34|802B774|802DD40|802DE08||||
|8026B68|802C000|802BB40|802E268|802E330|AddGasTrap|[void AddGasTrap(int x, int y, int facing, int turnCountdown, int turnInterval)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L132)||
|8026B88|802C020|802BB60|802E288|802E350|AddArrowTrap|[void AddArrowTrap(int x, int turnCountdown, int turnInterval)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L137)||
|8026F1C|802C294|802BDD4|802E530|802E5F8|EnableMapChange|[void EnableMapChange(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L310)||
|8027248|802C664|802C1A4|802E938|802EA00|sub_802EA00|[void sub_802EA00(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L625)||
|80274A8|802C7E4|802C324|802EAD0|802EB98|ExecStandardHeal|int ExecStandardHeal(signed int a1)||
|80277D0|802CB14|802C654|802EE30|802EEF8|ExecRescueStaff|int ExecRescueStaff(signed int a1)||
|0|802CB9C|802C6DC|802EEB8|802EF80||||
|0|802CBC8|802C708|802EEE4|802EFAC|ExecWarpStaff|int ExecWarpStaff(signed int a1)||
|80279C8|802CD54|802C894|802F1A0|802F274|ExecUnlock|int ExecUnlock(signed int a1)||
|8027A08|802CD94|802C8D4|802F1E0|802F2B4|ExecHammerne|int ExecHammerne(signed int a1)||
|8027AC8|802CE54|802C994|802F2A0|802F380|ExecSomeSelfHeal|int ExecSomeSelfHeal(signed int a1, int a2)||
|8027B2C|802CEB8|802C9F8|802F304|802F3E4||||
|8027C10|802CFA4|802CAE4|802F3F0|802F4D0||||
|0|802D388|802CEC8|802F99C|802FA4C|ExecItemMine|int ExecItemMine(signed int a1)||
|0|802D3CC|802CF0C|802F9E0|802FA90||||
|0|802D40C|802CF4C|802FAD8|802FB88|ExecTorchStaff|int ExecTorchStaff(signed int a1)||
|8028F94|802E4BC|802DFFC|8030D24|8030DD8|ResetGameState|int ResetGameState()||
|80292B8|802E7E0|802E314|80310A0|8031154|BMapDispResume_FromBattleDelayed|[void BMapDispResume_FromBattleDelayed(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1164)||
|8029318|802E848|802E37C|8031108|80311BC|StartBMapMain|[struct BMapMainProc* StartBMapMain(struct GameCtrlProc* gameCtrl) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1190)||
|0|802EBA0|802E6D4|8031420|80314D4|GameCtrl_DeclareCompletedPlaythrough|[void GameCtrl_DeclareCompletedPlaythrough(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1361)||
|802974C|802EC94|802E7C8|8031518|80315CC||||
|0|802F7F4|802F328|80320B0|8032164|ActionRescue|int ActionRescue(signed int a1)||
|803C02C|802F858|802F38C|8032114|80321C8||||
|802A208|802F900|802F434|80321BC|8032270|ActionVisitAndSieze|int ActionVisitAndSieze()||
|802A35C|802F97C|802F4B0|8032290|8032344|ActionArena|int ActionArena(signed int a1)||
|0|802F990|802F4C4|80322A4|8032358|ActionDance|int ActionDance(signed int a1)||
|802A3C0|802F9E0|802F514|80322F4|80323A8|ActionTalk|int ActionTalk()||
|802A5BC|802FC10|802F744|80325B0|8032664|SpriteJumpAnimation_Cleanup|int SpriteJumpAnimation_Cleanup()||
|0|802FE2C|802F960|80327B8|803286C|BATTLE_HandleUnitDeaths|int BATTLE_HandleUnitDeaths(signed int a1)||
|0|803087C|80303B4|8033268|8033358||||
|0|8030890|80303C8|803327C|803336C||||
|0|8030998|0|8033378|8033468||||
|0|8030A14|8030528|80333DC|80334CC||||
|0|8030A30|8030544|80333F8|80334E8||||
|0|8030A5C|8030570|8033424|8033514||||
|802B69C|80312E8|8030DFC|8033CE0|8033DD8||||
|80987B8|803157C|8031090|8033F80|8034078||||
|802B99C|80318EC|8031404|80343B0|80344A8|GetUnitCommandUseFlags|int GetUnitCommandUseFlags()||
|802B9DC|803192C|8031444|80343F0|80344E8||||
|802BA08|8031958|8031470|803441C|8034514||||
|802BC80|8031BF8|803168C|80346B0|80347A8|NewUnitInfoWindow|int NewUnitInfoWindow(signed int a1)||
|802BF14|8031E8C|8031938|80349E4|8034ADC||||
|802C3B4|803232C|8031DFC|8034EA4|8034F9C||||
|802C3C8|8032340|8031E10|8034EB8|8034FB0||||
|802C514|803248C|8031F5C|8034F04|8034FFC||||
|802C434|80323AC|8031E7C|8034F24|803501C||||
|802C4BC|8032434|8031F04|8034FAC|80350A4||||
|802C414|803238C|8031E5C|8035004|80350FC||||
|802C534|80324AC|8031F7C|8035024|803511C||||
|802C5B4|803252C|8031FFC|80350A4|803519C||||
|802C61C|8032594|8032064|803510C|8035204|SetupUnitRescueWindow|int SetupUnitRescueWindow(int a1)||
|802C6D4|803264C|803211C|80351C4|80352BC||||
|802C7D0|8032748|8032218|80352C0|80353B8||||
|802CA24|80329A0|8032470|803551C|8035614||||
|802CA84|8032A00|80324D0|8035580|8035678||||
|802CAA4|8032A20|80324F0|80355A0|8035698||||
|0|8032CA0|8032770|803581C|0||||
|802CF7C|8033134|8032C04|8035D44|8035C44||||
|802D210|8033400|8032ED0|8035FD8|8035ED8||||
|802D34C|8033518|8032FE8|80360F0|8035FF0||||
|0|8034A50|8034578|8037864|80377CC|ExecTrapForActionTarget|int ExecTrapForActionTarget(signed int a1)||
|0|8034AB4|80345DC|80378C8|8037830|ExecTrap_QuietMaybe|int ExecTrap_QuietMaybe(signed int a1, int a2)||
|0|8034C18|8034740|8037A9C|8037A04|AddBallista|TrapStruct *AddBallista(char a1, char a2, int a3)||
|802E59C|8034E94|80349BC|8039800|8039788|CpOrder_Main|int CpOrder_Main(int a1)||
|802EFF4|80358F8|8035420|803A27C|803A204|CpPerform_StaffWait|signed int CpPerform_StaffWait(signed int a1)||
|802F02C|8035930|8035458|803A2B4|803A23C|CpPerform_ChestWait|signed int CpPerform_ChestWait(signed int a1)||
|0|80359D4|80354FC|803A358|803A2E0|CpPerform_ExitBallistaWait|signed int CpPerform_ExitBallistaWait()||
|8030F18|8037C9C|80377E8|803C67C|803C6EC|AiScriptCmd_01_FunctionCall|int AiScriptCmd_01_FunctionCall(_BYTE *a1)||
|80310D0|8037E54|80379A0|803C83C|803C8AC|IsUnitEnemyOrInTheAiInstList|bool IsUnitEnemyOrInTheAiInstList(int a1)||
|8031750|80384D0|803801C|803CEB8|803CF28|AiScriptCmd_16|int AiScriptCmd_16(_BYTE *a1)||
|80318F0|80389FC|8038548|803D3D0|803D440||||
|8033868|803AA40|803A58C|803F47C|803F4EC||||
|0|803AEF4|803AA40|803F928|803F9A8||||
|0|803C3B4|803BF00|8040E48|8040EC8||||
|0|803C3E4|803BF30|8040E78|8040EF8||||
|0|803C474|803BFC0|8040F08|8040F88|InitAiRangeMoveMapForUnitWithDoorsPassable|int InitAiRangeMoveMapForUnitWithDoorsPassable(int a1)||
|0|803C4D8|803C024|8040F6C|8040FEC||||
|0|803C50C|803C058|8040FA0|8041020||||
|80353AC|803C8C8|803C414|8041818|8041898||||
|803661C|803DB38|803D688|8042A8C|8042B08||||
|80366EC|803DC08|803D758|8042B5C|8042BD8||||
|80368F8|803DE38|803D988|8042D90|8042E0C|SioCon_8042E0C|int SioCon_8042E0C()||
|8036B98|803E0D8|803DC28|8043020|804309C||||
|8036C60|803E1A0|803DCF0|80430E8|8043164||||
|0|803F554|803F0C4|80444C4|8044530||||
|803888C|8040044|803F938|8044F84|8044FE4|NameSelect_8044FE4|int NameSelect_8044FE4(int a1)||
|80388E4|804009C|803F990|8044FDC|804503C|NameSelect_804503C|int NameSelect_804503C(int a1)||
|8038A78|8040244|803FB38|80451A8|8045208||||
|80394FC|8040CC8|80405BC|8045C08|8045C68||||
|8089234|8043310|8042C38|8048178|8048260|StartNameSelect|int StartNameSelect(signed int a1)||
|803BD20|80435D0|8042EB8|804843C|8048594||||
|803BD90|8043640|8042F28|80484AC|8048524||||
|0|804395C|80431C0|8048778|8048864||||
|0|8043CC8|80434EC|8048AC4|0||||
|0|8043DB0|80435D4|8048BAC|0||||
|0|8043DE0|8043604|8048BDC|8033608||||
|0|80446B4|8043EB4|8049460|0||||
|0|804471C|8043F1C|80494C8|0||||
|0|80448B8|80440B8|8049664|0||||
|803C690|8044EDC|80446E0|8049C94|8048E84||||
|803CF70|80457C0|8044FD0|804A59C|80497A0||||
|803D0A0|8045914|8045124|804A6F0|80498F4||||
|803D2AC|8045B20|8045334|804A900|8049B04||||
|803D8AC|804614C|8045960|804AEFC|804A108||||
|803DB50|8046424|8045C38|804B1CC|804A430||||
|803E194|8046A74|8046288|804B828|804AA88||||
|803E880|804717C|8046994|804BF30|804B190||||
|803EA44|8047344|8046B5C|804C140|804B3A0||||
|803EC84|8047584|8046D9C|804C380|804B5E0||||
|803ED60|8047664|8046E7C|804C458|804B6B8||||
|803F028|8047930|8047144|804C744|804B9A4||||
|803F1D8|8047AE0|80472F4|804C8F4|804BB54||||
|803F694|8047FA0|80477B4|804CD98|804BFF8||||
|803F820|804812C|8047940|804CEE8|804C148||||
|803F86C|8048178|804798C|804CF34|804C194||||
|803F9B4|80482C0|8047AD4|804D07C|804C2DC||||
|803FC1C|804854C|8047D60|804D21C|804C47C||||
|8040744|8049090|80488A8|804DC24|804CE8C||||
|8040C7C|80495C8|8048DE0|804E170|804D3DC||||
|8040F50|804989C|80490B4|804E448|804D6B4||||
|804108C|80499D8|80491F0|804E570|804D7DC||||
|8041210|8049B5C|8049374|804E6E0|804D950||||
|80417A8|804A930|804A148|804F818|804EA8C|UnpackUnkUiFrame|[void UnpackUnkUiFrame(void* vram, int palId, int palCount)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1193)||
|0|804A9D0|804A1E8|804F8B8|804EB2C|DisplayFrozenUiHandExt|[void DisplayFrozenUiHandExt(int x, int y, unsigned objTileOffset)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1215)||
|8041E78|804B0E4|804A908|80501CC|804F458|MenuStdHelpBox|[u8 MenuStdHelpBox(struct MenuProc* menu, struct MenuItemProc* item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L550)||
|80425B0|804B9B4|804B1D8|8050B00|804FD8C|EndEkrBattleDeamon|int EndEkrBattleDeamon()||
|80425D8|804B9DC|804B200|8050B30|804FDBC|EkrBattleDeamon_OnEnd|int EkrBattleDeamon_OnEnd()||
|8043590|804C890|804C0B4|8051B18|8050DE4|NewEkrLvlupFan|int NewEkrLvlupFan()||
|8043940|804CCA0|804C4C4|8051F2C|80511F8|EkrGauge_80511F8|int EkrGauge_80511F8()||
|8045478|804E6AC|804DED0|805396C|8052C7C||||
|8045974|804EAC4|804E2E8|8053E10|8053120|StartEfxDeadPika|int StartEfxDeadPika(int a1, int a2)||
|0|804ED88|804E5AC|80541D0|80534E4||||
|80467D0|804F7F4|804F018|8054C34|8053F4C||||
|0|804F834|804F058|8054C74|8053F8C||||
|8046B48|804FC48|804F46C|8055398|80546B0|EndEfxHPBarColorChange|int EndEfxHPBarColorChange()||
|0|804FC6C|804F490|80553BC|80546D4||||
|8046EF8|804FFCC|804F7F0|805585C|8054B84||||
|8047258|80502A0|804FAC4|8055BD0|8054F00|ResumeEfxWeaponIcon|int ResumeEfxWeaponIcon()||
|8047C68|8050F94|80507B8|8056964|80559D0||||
|80482F4|80517D0|8050FF4|80571B0|8056228|ekrBattleEnding_8056228|int ekrBattleEnding_8056228(_WORD *a1)||
|804855C|8051A38|805125C|805740C|8056484|ekrBattleEnding_8056484|int ekrBattleEnding_8056484(int a1)||
|804AF88|805474C|8053F64|805A6C8|8059924|EkrChienCHR_OnLoop|int EkrChienCHR_OnLoop(int a1)||
|804B828|8054FAC|80547C4|805B074|805A2D0||||
|804B88C|8055010|8054828|805B0D8|805A334||||
|0|80555E8|8054E00|805B6D4|805A930||||
|804BE98|8055670|8054E88|805B764|805A9C0|StartEkrAnimeDrvProc|int StartEkrAnimeDrvProc()||
|804BEB8|8055690|8054EA8|805B784|805A9E0|EndEkrAnimeDrvProc|int EndEkrAnimeDrvProc()||
|804BED8|80556B0|8054EC8|805B7A4|805AA00|StartEkrUnitMainMini|int StartEkrUnitMainMini(int a1)||
|804BF24|80556FC|8054F14|805B7F0|805AA4C|EkrUnitMainMini_OnLoop|int EkrUnitMainMini_OnLoop(int a1)||
|804C5D0|8055DA8|80555C0|805BEA8|805B104||||
|804C658|8055E30|8055648|805BF30|805B18C||||
|804C730|8055F08|8055720|805C008|805B264||||
|804C744|8055F1C|8055734|805C01C|805B278|NewEkrTogiEndPROC|int NewEkrTogiEndPROC()||
|804C818|8055FF0|8055808|805C0F0|805B34C|NewEkrTogiColor|int NewEkrTogiColor()||
|804C84C|8056024|805583C|805C124|805B380|EndEkrTogiColor|int EndEkrTogiColor()||
|804C9BC|80561F8|8055A10|805C2F8|805B554||||
|804D25C|8056BC8|80563E0|805CC2C|805BE90|StartSpellAnimDummy|int StartSpellAnimDummy(int a1)||
|804D4A4|8056E10|8056628|805CE78|805C0DC||||
|0|80577AC|8056FC4|805D800|805CA64||||
|0|8057888|80570A0|805D8DC|805CB40||||
|804DF30|8057A6C|8057284|805DAA8|805CD0C|spellShooter|int spellShooter(int a1)||
|804EBB8|805872C|8057750|805DF7C|805D680|Loop6C_efxIvaldiBG3|int Loop6C_efxIvaldiBG3(int a1)||
|0|80583DC|8057BF4|805E428|805D328|Loop6C_efxIvaldiBG1|int Loop6C_efxIvaldiBG1(int a1)||
|804EAD4|8058648|8057E60|805E69C|805D59C||||
|8059D34|805FE7C|806112C|805E6EC|805D5EC||||
|804EB7C|80586F0|8057F08|805E744|805D644||||
|804EED8|8058A4C|8057F44|805E780|805D9F8|EfxThunderBGCOL_Main|int EfxThunderBGCOL_Main(int a1)||
|804E3FC|8057F38|8058264|805EAF8|805D680|Loop6C_efxFireBG|int Loop6C_efxFireBG(int a1)||
|804EB24|8058698|8058530|805EDC4|806E0D0|Loop6C_efxIvaldiBG2|int Loop6C_efxIvaldiBG2(int a1)||
|804F354|8058EC8|8058C30|805EF74|805DE74||||
|8050D04|806026C|8058B48|805F3B4|805E2B4||||
|804F99C|8059510|8058D28|805F5C4|805E4C4|loadFimbulvetrOBJ2|int loadFimbulvetrOBJ2(int a1)||
|804FDF8|805996C|8059184|805FA24|805E924||||
|804FE84|80599F8|8059210|805FAB0|805E9B0||||
|8050650|8059E80|80586E0|8060240|805F140||||
|805100C|805A838|805A050|8060BE0|805FAE0|StartSpellAnimPurge|int StartSpellAnimPurge(int a1)||
|0|805C924|805C13C|8061890|8060790|loadHazymoonOBJ3|void loadHazymoonOBJ3(void *AIS)||
|8053D5C|805C9CC|805C1E4|8061938|8060838||||
|80540D0|805CD34|805C54C|8061C7C|8060B7C||||
|8055480|805E368|805F240|8062954|8064B48||||
|8054F8C|805DC18|805D430|8062A6C|806196C||||
|8054FEC|805DC78|805D490|8062ACC|80619CC||||
|8055364|805DFF4|805D80C|8062E28|8061D28||||
|804DE04|805903C|805D2FC|8062F44|805DFE8||||
|804E884|805DAE4|805D928|80631A4|805EDDC||||
|804F1A4|8058D18|805E038|80636B0|805D5EC|Loop6C_efxNaglfarBG2|int Loop6C_efxNaglfarBG2(int a1)||
|8055B84|805E878|805E090|8063708|8062608||||
|8056910|806426C|8057EB0|8063940|805DCC4|Loop6C_efxFireBG|int Loop6C_efxFireBG(int a1)||
|8055EF4|805EBD8|805E3F0|8063A68|8062968||||
|804F4C8|805E110|805DB80|80648B0|806499C||||
|80517E4|805FB64|805F37C|80649F0|80638F0||||
|0|805FE20|805F638|8064C6C|8063B6C||||
|8055B2C|805E820|805E2C8|8064CC8|8062840||||
|8057A5C|805FED4|805F6EC|8064D20|8063C20||||
|0|805FFB0|805F7C8|8064DFC|8063CFC||||
|0|8060150|805F968|8064FA0|8063EA0||||
|80560D4|805EDB8|805FA84|80650C0|8063FC0||||
|80530E4|806052C|805FD44|8065398|806428C||||
|0|8060948|8060160|8065808|80646FC||||
|0|8060A1C|8060234|80658DC|80647D0||||
|8055674|805FA28|8058854|8065AA8|8061E44||||
|804F4C8|8061400|80612EC|8065C54|80620A4||||
|0|8060DD8|80605F0|8065C9C|8064B90||||
|80502C0|8061AD4|80603FC|8066360|80637B0||||
|804EB24|805EAB0|805EE08|8066874|8063378||||
|804DE04|8060BE4|80605A8|8066A34|8064E2C||||
|804F7BC|805F860|8061394|8066ADC|806542C||||
|0|8061D84|806159C|8066CC0|0||||
|8056D28|805F5F0|805F694|8066D24|8063BC8||||
|80561A0|8062350|8061B68|8067294|80657D4|StartSpellAnimIvaldi|int StartSpellAnimIvaldi(int a1)||
|0|805B5D8|805ADF0|8068818|8066470||||
|0|80BB510|80BA998|806D440|806B11C||||
|804F1A4|8061914|8061600|806ECB4|80651C4||||
|8055B2C|8061DE8|80627A0|806EF2C|806C990||||
|8056D80|8062FE0|80627F8|806EF84|806CC60||||
|805755C|80638F0|8063108|806F978|806D65C||||
|805792C|8063C20|8063438|806FCA8|806D98C||||
|80579C0|8063CB0|80634C8|806FD38|806DA1C||||
|8057A5C|8063D24|806353C|806FDAC|806DA90||||
|8057B2C|8063DC8|80635E0|806FE4C|806DB34||||
|0|8064214|8063A2C|8070390|806E078||||
|8055DBC|8062F88|8063A84|80703E8|806CC08||||
|0|80642C4|8063ADC|8070440|806E128||||
|0|8062E60|8063B0C|8070470|80646C0||||
|80580A8|806497C|8064194|8071054|806EAA4||||
|80580D8|80649AC|80641C4|8071084|806EAD4||||
|8058100|80649D4|80641EC|80710AC|806EAFC||||
|8058130|8064A04|806421C|80710DC|806EB2C||||
|8058158|8064A2C|8064244|8071104|806EB54||||
|80581A0|8064A74|806428C|807114C|806EB9C||||
|8058220|8064AF4|806430C|80711CC|806EC1C||||
|8058330|8064C04|806441C|80712DC|806ED2C||||
|8058438|8064D0C|8064524|80713E4|806EE34||||
|805846C|8064D40|8064558|8071418|806F08C||||
|8058630|8064F04|806471C|80715BC|806F00C||||
|805867C|8064F50|8064768|8071608|806F058||||
|80586B0|8064F84|806479C|807163C|806EE68||||
|80586F0|8064FC4|80647DC|807167C|806F0CC||||
|80587C0|8065094|80648AC|8071734|806F184||||
|0|8065140|8064958|80717E0|806F230||||
|0|80651B0|80649C8|8071850|806F75C||||
|805BD54|8067E68|806767C|8073F28|8071A44||||
|805C820|80689EC|8068200|8074E9C|80729C0||||
|805C86C|8068A38|806824C|8074EF0|8072A14|NewEkrClassChg|int NewEkrClassChg(int a1)||
|805D09C|806925C|8068A70|8075944|8073468||||
|805D538|80696F8|8068F18|8075DF8|8073910||||
|805DA08|8069BB4|80693D4|80762A0|8073E18||||
|805E104|806A298|8069AB8|8076980|8074544||||
|805E2C0|806A364|8069B84|8076A4C|8074610||||
|8056C00|806090C|8062678|8076F34|806C840||||
|0|806A8D8|806A0F8|8076FC8|8074B90||||
|0|806A93C|806A15C|807702C|8074BF4||||
|805E578|806AC9C|806A4BC|8077394|8074F5C|StartEkrTriangle|int StartEkrTriangle(int a1)||
|0|806BFE4|806B7F8|80787A0|8076380||||
|0|806C044|806B858|8078800|80763E0||||
|805A410|8065D38|8065548|8078D30|8076910||||
|0|8065DD0|80655E0|8078DC8|80769A8||||
|0|8065BA0|80653B0|8078EA4|8076A84|FireDragonBGAnimation10|void FireDragonBGAnimation10(_6CStruct *ctx)||
|0|8065510|8064D20|8079708|80772E4||||
|0|80668B8|80660CC|8079898|8077474||||
|808A210|80A69A0|80A5CE0|80799A8|8077584||||
|0|8066950|8066164|8079B60|807773C||||
|8014A28|800AD60|800ADB8|807BF0C|8079AF8|MU_AllForceSetMaxMoveSpeed|[void MU_AllForceSetMaxMoveSpeed(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1830)||
|0|807D698|807CC14|8082330|807FFF0||||
|806BEB8|8078A8C|80782BC|8085E80|8083B58|EvCheck0F_|signed int EvCheck0F_(_DWORD *a1)||
|806BFC0|807A698|8079C24|8086E58|8084B8C||||
|806BFCC|807A6A4|8079C30|8086E64|8084B98||||
|806C068|807A740|8079CCC|8086F04|8084C38||||
|0|807AC6C|807A1F8|80873F4|8085128||||
|0|807B43C|807A9C8|80877BC|80854F0||||
|0|807B498|807AA24|808781C|8085550||||
|0|807B4C0|807AA4C|8087844|8085578||||
|0|807B70C|807AC54|8087A38|808576C||||
|0|807B6C8|807AC98|8087A7C|80857B0||||
|0|80BD464|80BCA6C|8087C9C|80859D0||||
|0|807D848|807CDC4|8087DFC|8085B30||||
|806EABC|80807BC|807FA04|8089078|8086DBC|EndBG3Slider|int EndBG3Slider()||
|0|80816C8|808096C|808A084|8087DF8||||
|806F95C|8081834|8080AD8|808A1D4|8087F48||||
|806FBC0|8081A98|8080D3C|808A438|80881AC||||
|806FCF4|8081BCC|8080E70|808A570|80882E4||||
|807036C|80822B0|8081554|808AC8C|8088A00|HbPopulate_SSItem|[void HbPopulate_SSItem(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L1948)||
|0|80824CC|808176C|808AED4|8088C48|UpdateHelpBoxDisplay|[void UpdateHelpBoxDisplay(struct HelpBoxProc* proc, int arg1)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2068)||
|8070C70|8082CC8|8081F68|808B6C4|8089454|StartLockingHelpBox_Unused|[int StartLockingHelpBox_Unused(int mid, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2547)||
|8070D78|8082E9C|8082410|808B96C|80896A8||||
|8070DE8|8082F0C|8082480|808BA54|8089744||||
|8071584|8083808|8082E08|808C498|808A188||||
|80715DC|8083860|8082E60|808C4F0|808A1E0||||
|8071734|80839C4|8082FC4|808C650|808A340||||
|8071748|80839D8|8082FD8|808C664|808A354||||
|80718A8|8083B48|8083148|808C7D4|808A4C4||||
|8071B20|8083F98|8083598|808CCAC|808A99C||||
|0|8084DA8|80843AC|808DB54|808B844||||
|0|80850D8|80846DC|808DE84|808BB74||||
|0|8086044|8085644|808EE30|808CB34||||
|0|80863B4|80859B4|808F198|808CE9C|Init6CUI2|int Init6CUI2(int a1)||
|0|8086D58|8086368|808FB58|808D870||||
|0|8086E98|80864AC|808FC64|808D97C||||
|8073370|8087004|8086618|808FDCC|808DAE4|MinimalVBlankHandler|int MinimalVBlankHandler()||
|0|808781C|8086E60|80906C8|808E3F4||||
|0|80884E0|8087B58|8091358|808F084||||
|0|8088520|8087B98|8091398|808F0C4||||
|0|8088548|8087BC0|80913C0|808F0EC||||
|0|80886CC|8087D44|8091544|808F270||||
|0|8089394|8088A30|809227C|808FF9C||||
|0|80893BC|8088A58|80922A4|808FFC4||||
|8076238|808B450|808AAF4|80943BC|80920C4|StartUnitListMenu|int StartUnitListMenu()||
|0|808EF98|808E65C|8097F0C|8095C2C||||
|0|808F368|808EA2C|80982B8|8095FD8||||
|0|808F394|808EA58|80982E4|8096004||||
|807B6D0|808F818|808EEDC|809874C|8096468||||
|0|8090388|808FA48|8098E88|8096BA4||||
|0|8090720|808FDE0|8099228|8096F44||||
|0|8090748|808FE08|8099250|8096F6C||||
|8082360|8090E80|8090540|8099A90|80977AC||||
|0|80926A4|8091D70|809B3AC|80990D4||||
|0|80926D0|8091D9C|809B3D8|8099100||||
|0|8092AF8|80921E8|809B988|80996B0||||
|0|8092E84|8092578|809BD80|8099AA0||||
|0|8093168|809285C|809C098|8099DB8||||
|0|80931B0|80928A4|809C0E0|8099E00||||
|0|8093920|8093014|809C910|809A644||||
|0|8093BC8|80932BC|809CBC4|809A8F8||||
|0|8093CC0|80933B4|809CCB4|809A9E8||||
|0|8094138|8093840|809D104|809AE3C||||
|0|8094374|8093A7C|809D2DC|809B014||||
|0|80946D0|8093DE8|809D638|809B370||||
|0|80946E8|8093E00|809D650|809B388||||
|0|8094774|8093E8C|809D6D4|809B40C||||
|0|80947A0|8093EB8|809D700|809B438||||
|0|80947C0|8093ED8|809D720|809B458||||
|0|809486C|8093F84|809D7CC|809B504||||
|0|8094888|8093FA0|809D7E8|809B520||||
|0|80951D8|8094948|809E100|809BE3C||||
|0|8095800|8094FB4|809E764|809C4B4||||
|0|8095D38|8095508|809EC98|809C9F4||||
|0|8096464|8095C6C|809F560|809D2C4|StoreConvoyWeaponIconGraphics|int StoreConvoyWeaponIconGraphics(int a1, int a2)||
|0|8096784|8095F90|809F8A4|809D608||||
|0|80968E8|8096110|809FA24|809D784||||
|0|8096D88|8096604|809FF10|809DC70||||
|80867F0|80973E0|8096C54|80A055C|809E2BC||||
|0|8097974|80971E8|80A0AE0|809E840||||
|0|8097BF4|809746C|80A0D78|809EAD8||||
|0|8097C54|80974CC|80A0DD8|809EB38||||
|0|8097C74|80974EC|80A0DF8|809EB58||||
|0|80994D4|8098C18|80A2660|80A03C4||||
|0|8099688|8098DCC|80A280C|80A0570||||
|0|8099840|8098F88|80A29C0|80A0724||||
|0|809987C|0|80A29FC|80A0760||||
|0|8099C44|8099284|80A2C78|80A09C4||||
|0|8099C7C|80992BC|80A2CB0|80A09FC||||
|0|8099E1C|809945C|80A2E4C|80B0620||||
|0|809A044|8099684|80A3074|0||||
|0|809A2E4|8099928|80A32C0|0||||
|0|809B1FC|809A824|80A4088|0||||
|0|809B510|809AB38|80A43A0|0||||
|0|809B554|809AB7C|80A43E4|0||||
|0|809B654|809AC7C|80A44D0|0||||
|0|809B6F8|809AD20|80A4568|0||||
|0|809C7B4|809BDFC|80A56F0|80A1918||||
|0|809E0C0|809D6A8|80A6928|80A2B5C||||
|0|809E7FC|809DDE4|80A705C|0|initPassword|void initPassword(int a1, int a2)||
|0|809E8F0|809DED8|80A7150|0||||
|0|809EB74|809E15C|80A73D4|0||||
|8084388|809EFB0|809E598|80A7814|80A2DD0|SaveGeneralGameMetadataNoChecksum|int SaveGeneralGameMetadataNoChecksum(int a1)||
|0|809F0BC|809E6AC|80A78EC|80A2EA8||||
|8084628|809F344|809E934|80A7B74|80A3130|SaveLocalEventIndexes|int SaveLocalEventIndexes(int a1)||
|8084648|809F364|809E954|80A7B94|80A3150|SaveGlobalEventIndexes|int SaveGlobalEventIndexes(int a1)||
|8084668|809F384|809E974|80A7BB4|80A3170|LoadLocalEventIds|int LoadLocalEventIds(int a1)||
|8084690|809F3AC|809E99C|80A7BDC|80A3198|LoadPermanentEids|int LoadPermanentEids(int a1)||
|0|809FC30|809F1F4|80A83F8|80A39B4||||
|0|80A00A4|809F668|80A886C|80A3E28||||
|0|80A01C8|809F78C|80A89C8|80A3F84||||
|808483C|80A0470|809FAA4|80A8C60|80A421C|LoadBWLEntries|int LoadBWLEntries(int a1)||
|8084868|80A049C|809FAD0|80A8C8C|80A4248|LoadChapterDataWinArray|int LoadChapterDataWinArray(int a1)||
|8084884|80A04B8|809FAEC|80A8CA8|80A4264|SaveBWLEntries|int SaveBWLEntries(int a1)||
|80848A8|80A04DC|809FB10|80A8CCC|80A4288|SaveChapterWinData|int SaveChapterWinData(int a1)||
|0|80A0F20|80A0594|80A9784|80A4D40|SaveBonusContentClaimFlags|int SaveBonusContentClaimFlags(int a1)||
|0|80A0F3C|80A05B0|80A97A0|80A4D5C|LoadBonusContentClaimFlags|int LoadBonusContentClaimFlags(int a1)||
|0|80A0FE8|80A065C|80A984C|80A4E08|CopyGameSave|int CopyGameSave(int a1, int a2)||
|0|80A135C|80A09D4|80A9C64|80A524C|LoadSavedBonusClaimFlags|int LoadSavedBonusClaimFlags(int a1)||
|8085EB4|80A226C|80A18D8|80AAD88|80A6370|SaveTrapStructs|int SaveTrapStructs(int a1)||
|8085ED0|80A2288|80A18F4|80AADA4|80A638C||||
|0|80A261C|80A1C88|80AB150|80A6738||||
|8086264|80A2658|80A1CC4|80AB18C|80A6774||||
|80862B8|80A26AC|80A1D18|80AB1E0|80A67C8||||
|8086330|80A2724|80A1D90|80AB258|80A6840||||
|8086530|80A2924|80A1F90|80AB458|80A6A40||||
|8087BD8|80A3F0C|80A3298|80AD208|80A87F0||||
|80881B8|80A465C|80A39E8|80ADA2C|80A9014||||
|80890B8|80A5688|80A4A0C|80AEA6C|80AA018||||
|806DEA0|80A5AF8|80A4E0C|80AEFFC|80AA518|Make6C_savemenu2|int Make6C_savemenu2(signed int a1)||
|0|80A5DF0|80A5108|80AF1B8|80AA6D8||||
|0|80A6908|80A5C48|80AFDD4|80AB300|StartSaveDraw|int StartSaveDraw(signed int a1)||
|806E50C|80A6B9C|80A5EDC|80AFFF0|80AB534||||
|808A42C|80A6BB0|80A5EF0|80B0250|80AB794||||
|808A8E8|80A7028|80A6368|80B0698|80ABBE4||||
|0|80A95B4|80A86A0|80B114C|80AC6AC||||
|0|80A968C|80A8778|80B1224|80AC784||||
|807D2E0|80A9BE8|80A8CD4|80B1780|80ACCE0||||
|0|80AA1FC|80A92E8|80B1D88|80AD2E8|_CallDifferedLoop|int CallDifferedLoop(int a1)||
|0|80AA828|80A994C|80B23F0|80AD950||||
|0|80AAA50|80A9B74|80B261C|80ADB7C|StartSmallBrownNameBoxes|int StartSmallBrownNameBoxes(int objNode, int tileOffset, int palIndex, int oam2base, int oam0base, void *parent)||
|0|80AAAD0|80A9BF4|80B269C|80ADBFC||||
|0|80AAB64|80A9C88|80B2730|80ADC90|EndSmallBrownNameBoxes|int EndSmallBrownNameBoxes()||
|0|80AB01C|80AA154|80B2BE4|80AE168||||
|0|80AB040|80AA178|80B2C08|80AE18C|FadeInOut_Init|int FadeInOut_Init(int a1)||
|0|80AB324|80AA45C|80B2F0C|80AE490||||
|0|80AB348|80AA480|80B2F30|80AE4B4||||
|0|80AB944|80AAA7C|80B3538|80AEABC||||
|0|80ABAAC|80AABD0|80B3720|80AEAE8||||
|0|80ABE84|80AAFA0|80B3AE4|80AEEC4||||
|0|80AC4C0|80AB5DC|80B3F70|80AF350||||
|0|80ACFB4|80AC0D0|80B4960|80AFD48||||
|0|80AD97C|80ACAA4|80B5238|80B0620||||
|0|80AD994|80ACABC|80B5250|80B0638||||
|0|80AE9F4|80ADADC|80B628C|80B166C||||
|808C668|80AEDA8|80ADE90|80B6540|80B1920||||
|0|80AFE04|80AEECC|80B75F8|80B29E0||||
|80947F0|80AFE1C|80AEEE4|80B7610|80B29F8|Make6C_opinfo|int Make6C_opinfo(char a1, signed int a2)||
|8094F08|80B03D4|80AF584|80B7C6C|80B307C||||
|0|80B7480|80B6674|80BAC88|80B6104||||
|0|80B8D64|80B80C8|80BB328|80B67E8||||
|0|80B8DFC|80B8160|80BB3DC|80B689C||||
|0|80B8F48|80B82AC|80BB514|80B69D4||||
|0|80B99D8|80B8E78|80BBEE8|80B742C||||
|0|80B99F8|80B8E98|80BBF08|80B744C||||
|0|80B9A08|80B8EA8|80BBF18|0||||
|0|80BA8DC|80B9DD4|80BCCF0|0||||
|0|80BA918|80B9E10|80BCD2C|0||||
|0|80BA948|80B9E40|80BCD5C|0||||
|0|80B5D78|80B4F58|80BD55C|80B8694||||
|0|80B63AC|80B558C|80BEEB8|80BA024|EndWM|int EndWM()||
|0|80B6580|80B5760|80BEF48|80BA0B4||||
|808A4F0|80A6C74|80A5FD0|80C5784|80C09B8||||
|80702B0|80821EC|8081490|80C5C18|80C0E4C||||
|0|80BB5DC|80BAAD4|80CB370|80C6424||||
|809C9C0|80BF238|80BE6F4|80D5054|80D035C|m4aMPlayContinue|[void m4aMPlayContinue(struct MusicPlayerInfo *mplayInfo)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L169)||
|809DBAC|80C0424|80BF8E0|80D6240|80D1548|ply_xcmd|[void ply_xcmd(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1506)||
|809DBCC|80C0444|80BF900|80D6260|80D1568|ply_xxx|[void ply_xxx(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1514)||
|0|800EA74|800EB68|80DA7C4|80D5B88|_fstat|int fstat(int a1, int a2)||
|0|80A2EB8|80A2244|80AC1EC|80A77D4||||
|806C540|8011B30|80340E0|80138FC|8013844||||
|806C55C|8013F3C|80846C0|801E8A0|801EC48|UnitSwapAnimationExists|bool UnitSwapAnimationExists()||
|0|8022494|802201C|8023120|8023158||||
|0|80224D0|8022058|802315C|8023194|DanceCommandUsability|signed int DanceCommandUsability(int a1)||
|80212E0|80246A4|8024218|8025744|8025794|TryAddClosedDoorToTargetList|int TryAddClosedDoorToTargetList(int a1, int a2)||
|8021320|80246E4|8024258|8025784|80257D4|TryAddBridgeToTargetList|int TryAddBridgeToTargetList(int a1, int a2)||
|80336CC|803A8A4|803A3F0|803F2DC|803F34C||||
|80336FC|803A8D4|803A420|803F30C|803F37C||||
|8055628|805E31C|805DB34|8063158|8062058||||
|8057130|8063390|8062B5C|806F1E8|806D010||||
|8056FE4|8063244|8062BA8|806F2E8|806CFC4||||
|8057030|8063290|8062A5C|806F334|806CEC4||||
|801EA1C|80208E0|8020478|8081908|807F5C8||||
|806B3C0|8079738|8078F68|808556C|8083234||||
|0|807A3DC|0|8086CA4|80849D8||||
|0|807A414|0|8086CDC|8084A10||||
|80718E0|80345B8|8013A1C|808C80C|808BB58||||
|0|80886E0|8087D58|8091558|808F284||||
|806C540|8090A88|8090148|80B31CC|80AE750||||
|0|8004478|800459C|8002CD4|8002D84|_AllocProcState|int AllocProcState()||
|0|8004488|80045AC|8002CE4|8002D94|_FreeProcState|int FreeProcState(int result)||
|0|8004634|8004758|8002EAC|8002F5C|GotoProcInstruction|int GotoProcInstruction(int result, int a2)||
|8004A54|8004BC4|8004CE8|80034C4|8003578|ResetIconGraphics_|[void ResetIconGraphics_()](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L14)||
|0|8004C58|8004D7C|800355C|8003610|GetIconGfxTileIndex|[u16 GetIconGfxTileIndex(u32 Index)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L46)||
|0|8004D54|8004E78|8003658|800370C|ClearIconGfx|[void ClearIconGfx(u32 Index) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L106)||
|0|8004F08|800502C|8003814|80038C8|ClearSmallStringBuffer|int ClearSmallStringBuffer()||
|800563C|8005280|80053B0|8003BC4|8003C94|Font_InitDefault|int Font_InitDefault()||
|0|8005308|8005438|8003C50|8003D20|Font_ResetAllocation|signed int Font_ResetAllocation()||
|0|8005764|80058A0|8004140|8004208|Get2bppTo4bppLookup|__int16 (*Get2bppTo4bppLookup(int a1))[256]||
|0|8005984|8005AC0|8004360|8004428|Font_SetDraw1DTileNoClear|int (*Font_SetDraw1DTileNoClear())(int a1, int a2)||
|0|8005B08|8005C74|80044E0|80045D8|Text_Init2DLine|int Text_Init2DLine(int result)||
|0|8005F70|80060E0|8004998|8004A90|Text_DrawSpecialUiChar|int Text_DrawSpecialUiChar(int a1, int a2, int a3)||
|8006F30|8006068|80061D8|8004A90|8004B88|DrawUiNumber|int DrawUiNumber(_WORD *a1, int a2, int a3)||
|8006FE0|80060C4|8006234|8004AEC|8004BE4|DrawUiSmallNumber|int DrawUiSmallNumber(_WORD *a1, int a2, int a3)||
|80071F8|800623C|80063AC|8004C64|8004D5C||||
|800DB24|800650C|800667C|8004F3C|8005034|DisplayAIS|int DisplayAIS(int a1)||
|0|8006884|80069F4|80052F0|80053E8|PutSprite|[void PutSprite(int layer, int x, int y, const u16* object, int oam2)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L160)||
|0|80068C4|8006A34|8005330|8005428|PutSpriteExt|[void PutSpriteExt(int layer, int xOam1, int yOam0, const u16* object, int oam2)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ctc.c#L171)||
|0|80069B0|8006B20|800541C|8005514|GetPortraitData|int *GetPortraitData(int a1)||
|8008580|8006BE0|8006D50|8005660|8005758|EndFaceById|int EndFaceById(int a1)||
|0|8006C14|8006D84|8005694|800578C|SetFaceDisplayBitsById|int SetFaceDisplayBitsById(int a1, int a2)||
|0|8006C30|8006DA0|80056B0|80057A8|GetFaceDisplayBitsById|int GetFaceDisplayBitsById(int a1)||
|0|80078F4|8007A64|800635C|8006458|SetFaceBlinkControlById|int SetFaceBlinkControlById(int a1, int a2)||
|0|8007B80|8007CF0|800651C|8006618||||
|0|8007F14|8008084|800699C|8006A98|ClearDialogueFlags|__int16 *ClearDialogueFlags()||
|0|8007F24|8008094|80069AC|8006AA8|SetDialogueFlag|int SetDialogueFlag(int a1)||
|0|8008CB8|8008E28|800773C|8007838|Dialogue_SetActiveFacePosition|int Dialogue_SetActiveFacePosition(int result)||
|0|80095D4|8009744|8008094|8008198|GetTextPauseDurationFromControlCode|int GetTextPauseDurationFromControlCode(int a1)||
|800C274|8009E18|8009F88|80088B4|80089B8||||
|800C28C|8009E24|8009F94|80088C0|80089C4||||
|0|8009E78|8009FE8|8008914|8008A18||||
|0|8013200|8012B48|8009EB0|8009F50|SetNextGameActionId|int SetNextGameActionId(char a1)||
|0|800ACE8|800AD40|8011560|8011474|Popup_Create|int Popup_Create(int a1, int a2, int a3, int a4)||
|0|8013B4C|8013690|801350C|8013454||||
|0|8013B68|801362C|8013528|8013470|SetSomethingInPaletteBB_2A|int SetSomethingInPaletteBB_2A(__int16 a1)||
|0|8013B78|801363C|8013538|8013480|SetSomethingInPaletteBB_5A|int SetSomethingInPaletteBB_5A(__int16 a1)||
|0|8013B8C|8013650|801354C|8013494|SetSomethingInPaletteBB_8A|int SetSomethingInPaletteBB_8A(__int16 a1)||
|0|8013FE8|8013AC8|80139A8|80138F0||||
|8015748|8015550|80150D4|8015154|801512C||||
|801597C|8015784|8015308|8015384|8015360|LockGameLogic|int LockGameLogic()||
|801598C|8015794|8015318|8015394|8015370|UnlockGameLogic|int UnlockGameLogic()||
|801600C|8015F0C|8015A90|8015BD8|8015BBC|SetCursorMapPosition|int SetCursorMapPosition(int a1, __int16 a2)||
|8017128|8017608|80171B4|8017294|80174EC|GetItemIndex|[inline int GetItemIndex(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L85)||
|0|8017634|801722C|80172C0|8017518|GetItemDescId|[inline int GetItemDescId(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L98)||
|0|801764C|8017244|80172D8|8017530|GetItemUseDescId|[inline int GetItemUseDescId(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L102)||
|0|8017684|801727C|8017314|801756C|GetItemAttributes|[inline int GetItemAttributes(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L113)||
|0|80176E8|80172E0|8017384|80175DC|GetItemMight|[inline int GetItemMight(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L131)||
|0|8017700|80172F8|801739C|80175F4|GetItemHit|[inline int GetItemHit(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L135)||
|0|8017718|8017310|80173B4|801760C|GetItemWeight|[inline int GetItemWeight(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L139)||
|0|8017730|8017328|80173CC|8017624|GetItemCrit|[inline int GetItemCrit(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L143)||
|0|80177C0|80173B8|8017460|80176B8|GetItemRequiredExp|[inline int GetItemRequiredExp(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L166)||
|0|80177F0|80173E8|8017490|80176E8|GetItemStatBonuses|[inline const struct ItemStatBonuses* GetItemStatBonuses(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L174)||
|0|801782C|8017424|80174CC|8017724|GetItemWeaponEffect|[inline int GetItemWeaponEffect(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L185)||
|0|8017844|801743C|80174E4|801773C|GetItemUseEffect|[inline int GetItemUseEffect(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L189)||
|0|801785C|8017454|80174FC|8017754|GetItemCostPerUse|[inline int GetItemCostPerUse(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L193)||
|0|801789C|8017494|8017540|8017798|GetItemAwardedExp|[inline int GetItemAwardedExp(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L201)||
|0|80179F0|8017600|801769C|80178F4|SetUnitStatusExt|[void SetUnitStatusExt(struct Unit* unit, int status, int duration) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L380)||
|801860C|80190F4|8018D0C|8019108|8019430|GetUnit|[inline struct Unit* GetUnit(int id) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L189)||
|80192C4|8019F00|8019B20|8019F28|801A258|GetTerrainHealAmount|[int GetTerrainHealAmount(int terrainId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L662)||
|80192D4|8019F10|8019B30|8019F38|801A268|GetTerrainUnk|[int GetTerrainUnk(int terrainId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L666)||
|80193F4|801A030|8019C50|801A108|801A43C|GenerateExtendedMovementMapOnRange|[void GenerateExtendedMovementMapOnRange(int x, int y, const s8 mct[TERRAIN_COUNT])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L47)||
|8019424|801A060|8019C80|801A138|801A46C|GenerateExtendedMovementMap|[void GenerateExtendedMovementMap(int x, int y, const s8 mct[TERRAIN_COUNT])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L55)||
|8022E2C|8026E94|8026A08|8028534|80285A0||||
|0|8027078|8026BF0|8028720|802878C|CanUnitsStillSupportThisChapter|unsigned int CanUnitsStillSupportThisChapter(int a1, char a2)||
|0|8028868|80283DC|802A2DC|802A350||||
|0|802887C|80283F0|802A2F0|802A364|SimulateBattleBallista|int SimulateBattleBallista(int a1)||
|8024884|8028F74|8028AF8|802AA10|802AAA4|LoadRawDefense|_WORD *LoadRawDefense(int a1)||
|80249C4|80291EC|8028D3C|802ABC4|802AC54|BattleLoadDodge|_WORD *BattleLoadDodge(int a1)||
|8024B2C|80294D8|8029028|802AEEC|802AF7C|GetBattleUnitPointers|BattleUnitStruct *GetBattleUnitPointers(_DWORD *a1, _DWORD *a2)||
|8024C18|80295C4|8029114|802AFF0|802B080|GetBattleHitCount|signed int GetBattleHitCount()||
|0|80296E4|8029234|802B134|802B1C4|UpdateBattleStats|int UpdateBattleStats(int a1, int a2)||
|8025780|802A21C|8029D6C|802C27C|802C334|NullSomeStuff|int NullSomeStuff()||
|8025BD8|802A788|802A2D8|802C880|802C948|FillSnagBattleStats|int FillSnagBattleStats()||
|802749C|802C7D8|802C318|802EAC4|802EB8C|GetTrap|[inline struct Trap* GetTrap(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L21)||
|8028AD0|802DFB8|802DAF8|803081C|80308CC||||
|8028BE4|802E0CC|802DC0C|8030930|80309E0||||
|802979C|802ED9C|802E8D0|8031610|80316C4|InitUnitStack|signed int InitUnitStack(int a1)||
|0|802F6A0|802F1D4|8031F14|8031FC8||||
|802A860|802FF80|802FAB8|8032924|80329D8|SetLastCoords|[void SetLastCoords(u16 x, u16 y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L12)||
|802B0B4|80307D4|803030C|8033158|8033248|DrawUpdatedPathArrow|[void DrawUpdatedPathArrow(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L299)||
|802EA10|8035308|8034E30|8039C78|8039C00|AiClearDecision|[void AiClearDecision(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/cp_decide.c#L253)||
|802EA30|8035328|8034E50|8039C98|8039C20|AiSetDecision|[void AiSetDecision(u8 xMove, u8 yMove, u8 actionId, u8 targetId, u8 itemSlot, u8 xTarget, u8 yTarget)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/cp_decide.c#L270)||
|802EA74|803536C|8034E94|8039CDC|8039C64|AiUpdateDecision|[void AiUpdateDecision(u8 actionId, u8 targetId, u8 itemSlot, u8 xTarget, u8 yTarget)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/cp_decide.c#L286)||
|8030D3C|8037AC0|803760C|803C4A0|803C510|AiExecFallbackAi1|int AiExecFallbackAi1()||
|8030DCC|8037B50|803769C|803C530|803C5A0|AiExecFallbackAi2|int AiExecFallbackAi2()||
|803260C|80397B8|8039304|803E1CC|803E23C|AiGetPositionTerrainSafetyWeight|int AiGetPositionTerrainSafetyWeight(int a1, int a2)||
|80351E4|803C700|803C24C|8041650|80416D0||||
|8036494|803D9B0|803D500|8042904|8042980||||
|8036608|803DB24|803D674|8042A78|8042AF4||||
|8036984|803DEC4|803DA14|8042E1C|8042E98|CheckGameLinkArenaBit|unsigned int CheckGameLinkArenaBit()||
|8036994|803DED4|803DA24|8042E2C|8042EA8||||
|8036B38|803E078|803DBC8|8042FC0|804303C||||
|0|803F574|803F0E4|80444E4|8044550||||
|803AE70|8042698|8041FD4|8047590|804766C||||
|803CB28|8045374|8044B84|804A138|804933C||||
|8040084|80489B4|80481C8|804D568|804C7C8||||
|80406B8|8049004|804881C|804DB68|804CDD0||||
|8040768|80490B4|80488CC|804DC5C|804CEC4||||
|0|8049BD0|80493E8|804E754|804D9C4||||
|8041660|804A810|804A028|804F5F8|804E86C|GetUiHandPrevDisplayX|[int GetUiHandPrevDisplayX(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1097)||
|804166C|804A81C|804A034|804F604|804E878|GetUiHandPrevDisplayY|[int GetUiHandPrevDisplayY(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1102)||
|80420CC|804B4C0|804ACE4|8050618|804F8A4|InitTargets|int *InitTargets(__int16 a1, __int16 a2)||
|80420E4|804B4D8|804ACFC|8050630|804F8BC|AddTarget|int AddTarget(char a1, char a2, char a3, char a4)||
|8042180|804B574|804AD98|80506CC|804F958|TargetSelection_GetRealCursorPosition|int TargetSelection_GetRealCursorPosition(int a1, _DWORD *a2, int *a3)||
|8042558|804B95C|804B180|8050AA8|804FD34|GetTarget|char *GetTarget(int a1)||
|80438C8|804CC28|804C44C|8051EB4|8051180|EkrGauge_8051180|int EkrGauge_8051180()||
|80438D8|804CC38|804C45C|8051EC4|8051190|EkrGauge_8051190|signed int EkrGauge_8051190()||
|80438E8|804CC48|804C46C|8051ED4|80511A0|EkrGauge_80511A0|signed int EkrGauge_80511A0()||
|80438F8|804CC58|804C47C|8051EE4|80511B0|EkrGauge_80511B0|signed int EkrGauge_80511B0()||
|8043908|804CC68|804C48C|8051EF4|80511C0|EkrGauge_80511C0|int EkrGauge_80511C0(int a1)||
|8043918|804CC78|804C49C|8051F04|80511D0|EkrGauge_80511D0|__int16 EkrGauge_80511D0(__int16 result, __int16 a2)||
|804392C|804CC8C|804C4B0|8051F18|80511E4|EkrGauge_80511E4|signed int EkrGauge_80511E4(__int16 a1, __int16 a2)||
|8043950|804CCB0|804C4D4|8051F3C|8051208|EkrGauge_8051208|int EkrGauge_8051208()||
|8043960|804CCC0|804C4E4|8051F4C|8051218|EkrGauge_8051218|int EkrGauge_8051218()||
|8043970|804CCD0|804C4F4|8051F5C|8051228|EkrGauge_8051228|int EkrGauge_8051228()||
|80441DC|804D584|804CDA8|8052800|8051B08||||
|80441FC|804D5A4|804CDC8|8052820|8051B28||||
|804420C|804D5B4|804CDD8|8052830|8051B38||||
|804421C|804D5C4|804CDE8|8052840|8051B48|EkrDispUP_8051B48|__int16 EkrDispUP_8051B48(__int16 result, __int16 a2)||
|8044230|804D5D8|804CDFC|8052854|8051B5C||||
|8044244|804D5EC|804CE10|8052868|8051B70||||
|8044254|804D5FC|804CE20|8052878|8051B80||||
|8044264|804D60C|804CE30|8052888|8051B90||||
|8044274|804D61C|804CE40|8052898|8051BA0||||
|80449E4|804DD70|804D594|8052FEC|80522F4||||
|80474BC|80507D8|804FFFC|8056114|805516C|SpellFx_Finish|int SpellFx_Finish()||
|8047600|805091C|8050140|8056220|8055278|StartBattleAnimHitEffectsDefault|int StartBattleAnimHitEffectsDefault(int a1, int a2)||
|805BD9C|8053C1C|8053434|80599A0|8058B70||||
|804BE20|80555F8|8054E10|805B6E4|805A940||||
|804C318|8055AF0|8055308|805BBE4|805AE40||||
|0|8065258|8064A8C|8071FF8|806FA48|getSpecialAnimationEffectInfoState|int getSpecialAnimationEffectInfoState(AnimationInterpreter *AIS)||
|0|806527C|0|807201C|806FA6C|callSpecialAnimationEffectTypeGetter|int callSpecialAnimationEffectTypeGetter(AnimationInterpreter *AIS)||
|805B1AC|80672B8|8066ACC|80733B8|8070E94||||
|805BAEC|8067BF8|806740C|8073CC8|80717D4||||
|805BB08|8067C14|8067428|8073CE4|80717F0||||
|805BD9C|8067EB0|80676C4|8073F70|8071A8C|Unset20200AC|int Unset20200AC()||
|805BDA8|8067EBC|80676D0|8073F7C|8071A98|Set20200AC|signed int Set20200AC()||
|805F784|806C1D8|806B9EC|807A66C|8078248|GetSpellAssocCharCount|int GetSpellAssocCharCount(unsigned __int16 a1)||
|805F7A4|806C1F8|806BA0C|807A68C|8078268|GetSpellAssocMapAnimProcScript|int GetSpellAssocMapAnimProcScript(unsigned __int16 a1)||
|805F7C4|806C218|806BA2C|807A6AC|8078288|GetSpellAssocFacing|int GetSpellAssocFacing(unsigned __int16 a1)||
|806E890|80804F8|807F740|8088CC4|8086A08||||
|806E8AC|8080514|807F75C|8088CE0|8086A24||||
|80706C8|808266C|808190C|808B06C|8088DE0|StartHelpBox|[void StartHelpBox(int x, int y, int mid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2127)||
|80706FC|80826EC|808198C|808B0EC|8088E60|StartItemHelpBox|[void StartItemHelpBox(int x, int y, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2173)||
|8070AFC|8082B2C|8081DCC|808B528|808929C|SetHelpBoxInitPosition|[void SetHelpBoxInitPosition(struct HelpBoxProc* proc, int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2439)||
|8070B20|8082B50|8081DF0|808B54C|80892C0|ResetHelpBoxInitSize|[void ResetHelpBoxInitSize(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2448)||
|8071838|8083AC8|80830C8|808C754|808A444||||
|0|8083BA8|80831A8|808C834|808A524||||
|0|8083E34|8083434|808CB48|808A838||||
|0|8087E2C|8087474|8090CAC|808E9D8||||
|0|8087E44|808748C|8090CC4|808E9F0||||
|0|8087E90|80874D8|8090D10|808EA3C||||
|0|8087E9C|80874E4|8090D1C|808EA48||||
|0|8087EC8|8087510|8090D48|808EA74||||
|0|808BF14|808B5D4|8094EC4|8092BE4|SortUnitList_GetUnitSoloAnimation|int SortUnitList_GetUnitSoloAnimation(int a1)||
|0|808E644|808DD18|8097634|8095354|GetPrepScreenUnitListEntry|int GetPrepScreenUnitListEntry(int a1)||
|0|808E654|808DD28|8097644|8095364|SetPrepScreenUnitListEntry|int *SetPrepScreenUnitListEntry(int a1, int a2)||
|0|808E664|808DD38|8097654|8095374|GetPrepScreenUnitListSize|int GetPrepScreenUnitListSize()||
|0|808E674|808DD48|8097664|8095384|SetPrepScreenUnitListSize|int SetPrepScreenUnitListSize(int result)||
|0|809BA48|809B074|80A48BC|80A0AD4||||
|0|809BA60|809B08C|80A48D4|80A0AEC||||
|0|809BA94|809B0C0|80A4908|80A0B20||||
|0|809BAB8|809B0E4|80A492C|80A0B44||||
|0|809BACC|809B0F8|80A4940|80A0B58||||
|0|809E244|809D82C|80A6AA8|0||||
|8084270|809EE90|809E478|80A76F4|80A2CB0|IsSramWorking|int IsSramWorking()||
|8084414|809F0E8|809E6D8|80A7918|80A2ED4|GetSaveDataOffsetPointer|void *GetSaveDataOffsetPointer(int offset)||
|808460C|809F328|809E918|80A7B58|80A3114|GetSaveSourceAddress|void *GetSaveSourceAddress(int saveBlockId)||
|0|809FC54|809F218|80A841C|80A39D8||||
|80848BC|80A04F0|809FB24|80A8CE0|80A429C|GetChapterWinDataEntry|int *GetChapterWinDataEntry(int a1)||
|8085F14|80A22CC|80A1938|80AADE8|80A63D0|GetNextSuspendSaveId|int GetNextSuspendSaveId()||
|8086F8C|80A32B4|80A2640|80AC610|80A7BF8||||
|8087A88|80A3DBC|80A3148|80AD0C4|80A86AC||||
|809BB1C|80BE394|80BD850|80D41B0|80CF4B8|m4a_1|int m4a_1(unsigned int a1, unsigned int a2)||
|809C704|80BEF7C|80BE438|80D4D98|80D00A0|ld_r3_tp_adr_i_rev|void ld_r3_tp_adr_i_rev(int a1, int a2)||
|809C854|80BF0CC|80BE588|80D4EE8|80D01F0|m4aSoundMain|[void m4aSoundMain(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L88)||
|809C860|80BF0D8|80BE594|80D4EF4|80D01FC|m4aSongNumStart|[void m4aSongNumStart(u16 n)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L93)||
|809C9F8|80BF270|80BE72C|80D508C|80D0394|m4aMPlayFadeOut|[void m4aMPlayFadeOut(struct MusicPlayerInfo *mplayInfo, u16 speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L182)||
|809DD04|80C0584|80BFA40|80D63AC|80D16B0|SoftReset|void SoftReset(void *a1)||
|800448C|800485C|8004980|80030D8|800318C|ProcInst04_SetOnEnd|signed int ProcInst04_SetOnEnd(int a1)||
|0|800493C|8004A60|80031B8|800326C|ProcInst0D_GotoPointer|signed int ProcInst0D_GotoPointer(int a1)||
|8008CC0|8007388|80074F8|8005DD0|8005ECC||||
|0|8009E84|8009FF4|8008920|8008A24||||
|0|800F324|800F418|800C118|800BE2C|Event82_EndWM|int Event82_EndWM()||
|8014AB8|80148C0|80143A0|8014228|8014170||||
|8014ACC|80148D4|80143B4|801423C|8014184||||
|8015454|801525C|8014DE0|8014BB0|8014B88||||
|801AEBC|801C164|801BDC0|801C130|801C4B4|StartupDebugMenu_ReleaseEntryEffect|signed int StartupDebugMenu_ReleaseEntryEffect()||
|801AEC8|801C170|801BDCC|801C13C|801C4C0|DebugMenu_GNightEffect|signed int DebugMenu_GNightEffect()||
|0|801DC24|801D820|801DC64|801E008||||
|801EAD4|8021A3C|80215C4|802261C|8022650|MapMenuCommnd_StatusEffect|signed int MapMenuCommnd_StatusEffect()||
|801F378|80221BC|8021D44|8022E1C|8022E54||||
|8023D70|8027FEC|8027B60|80299B8|8029A2C|RepairSelectOnInit|[void RepairSelectOnInit(ProcPtr proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L926)||
|80265E8|802B5D0|802B120|802D758|802D820|TradeMenu_802D820|int TradeMenu_802D820(int a1)||
|8027264|802C680|802C1C0|802E954|802EA1C|sub_802EA1C|[void sub_802EA1C(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L635)||
|0|802CB8C|802C6CC|802EEA8|802EF70||||
|8028348|802D828|802D368|8030088|8030138|GameVBlankProc_Destructor|int GameVBlankProc_Destructor()||
|0|802F848|802F37C|8032104|80321B8||||
|0|802FC04|802F738|80325A4|8032658|SpriteJumpAnimation_ExecAnyTrap|int SpriteJumpAnimation_ExecAnyTrap(int a1)||
|802A840|802FF60|802FA98|80328EC|80329A0|BATTLE_HandleActiveUnitDeath|int BATTLE_HandleActiveUnitDeath(signed int a1)||
|803D6E0|8030870|80303A8|803325C|803334C||||
|802DE50|8034100|8033C28|8036F1C|8036E1C|BKSEL_Destructor|int BKSEL_Destructor()||
|0|80347BC|80342E4|80375D0|8037510|FireTrap_StartGfx|int FireTrap_StartGfx(signed int a1)||
|0|80347D4|80342FC|80375E8|8037528|MineTrap_StartGfx|int MineTrap_StartGfx(signed int a1)||
|0|80359AC|80354D4|803A330|803A2B8|CpPerform_RideBallistaWait|signed int CpPerform_RideBallistaWait()||
|0|80438E0|0|8048730|804881C||||
|804CC78|80448AC|80440AC|8049658|8039ABC|CpOrder_End|int CpOrder_End(int a1)||
|803EA54|8047354|8046B6C|804C150|804B3B0||||
|803F850|804815C|8047970|804CF18|804C178||||
|803F860|804816C|8047980|804CF28|804C188||||
|803F8B0|80481BC|80479D0|804CF78|804C1D8||||
|804340C|804C74C|804BF70|80519C4|8050C90|ekrBattle_MakePopups|int ekrBattle_MakePopups(int a1)||
|804BECC|80556A4|8054EBC|805B798|805A9F4|ExecAllAIS|int ExecAllAIS()||
|805BD8C|8067EA0|80676B4|8073F60|8071A7C||||
|0|800EBB0|800ECA4|807A8FC|80784D8|MU_ManualUpdate|[void MU_ManualUpdate(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L634)||
|806AA8C|8078CDC|807850C|8085CB0|8083978|EvCheck06_VILL|signed int EvCheck06_VILL(int *a1)||
|8070264|80821A0|8081444|808AB98|808890C||||
|8090D68|808EF44|808E5FC|8097EB8|8095BD8||||
|806DEB4|808EF54|808E618|8097EC8|8095BE8||||
|0|80A2BFC|0|80AB750|80A6D38||||
|0|80ACF54|80AC070|80B48FC|80AFCE4||||
|0|80B0160|80AF334|80B7B1C|80B2F2C||||
|0|80B91C4|80B8528|80BB740|80B6C00||||
|0|808EF60|808E624|80BD020|80B8168||||
|3002E5C|3002F3C|300301C|30037CC|0||||
|3002EB8|3002F98|3003078|3003828|3003888||||
|8000304|8000304|8000304|8000304|8000304|ARM_ClearOAMBuffer(ARM)|_DWORD *ARM_ClearOAMBuffer(_DWORD *result, unsigned int a2)||
|8000360|8000360|8000360|8000360|8000360|ARM_ComputeChecksum32(ARM)|int ARM_ComputeChecksum32(unsigned __int16 *a1, int a2)||
|800D2E0|800AA64|800AABC|80112E0|80111F4||||
|800D348|800AAA8|800AB00|8011324|8011238||||
|801AD6C|801BFE8|801BCAC|801BFB8|801C328||||
|801AD6C|801C05C|801BC38|801C02C|801C39C||||
|8020D44|80240AC|8023C20|80256A0|80256F0|AddUnitToTargetListIfAllied|int AddUnitToTargetListIfAllied(char *a1)||
|80217C0|8024BA0|8024714|8026044|80260A0|TryAddUnitToRescueStaffTargetList|int TryAddUnitToRescueStaffTargetList(char *a1)||
|802197C|8024D5C|80248D0|8026200|802625C|TryAddUnitToWarpTargetList|int TryAddUnitToWarpTargetList(char *a1)||
|8036518|803DA34|803D584|8042988|8042A04||||
|8036590|803DAAC|803D5FC|8042A00|8042A7C||||
|803A5AC|8041DC4|80416F0|8046D30|8046DD0||||
|803A5C8|8041DE0|0|804C584|804B7E4||||
|8042A3C|804BDFC|804B620|8050F98|8050224|ekrBattle_8050224|int ekrBattle_8050224(int a1)||
|8043534|804C834|804C058|8051ABC|8050D88|ekrBattle_8050D88|int ekrBattle_8050D88(int a1)||
|8059A28|804E458|804DC7C|8053AA8|8049940|BattlePopup_Wait16Frames|int BattlePopup_Wait16Frames(int a1)||
|804C788|8055F60|8055778|805BFA4|805B200||||
|804DC24|80570F0|805B260|805D6A0|8060254|ArrowOBJ|void ArrowOBJ(_6CStruct *ctx)||
|804E0B8|8057BF4|80630D8|805F1B4|805DAA4|EfxThunderOBJ_Main|int EfxThunderOBJ_Main(int a1)||
|804EF84|8058AF8|8056908|805F594|805E0B4||||
|8056BA8|8062E08|8062620|806FD84|806DA68||||
|0|8064788|8063F3C|80708D8|0||||
|80582EC|8064BC0|80643D8|80714D4|806F820||||
|8058528|8064DFC|8064614|8071DD0|806F9D8||||
|80480C4|80515A0|8050DC4|8072200|806FC50|ekrBattleStarting_8055FE8|int ekrBattleStarting_8055FE8(int a1)||
|805F658|806BDB8|806B5CC|80784A8|8076088|ekrPopup_DrawWRankUp|int ekrPopup_DrawWRankUp(int a1)||
|805F6B8|806BE78|806B5CC|807850C|80760EC|ekrPopup_DrawWRankUp2|int ekrPopup_DrawWRankUp2(int a1)||
|804C6CC|8055EA4|80556BC|80788D0|8076400||||
|80480C4|8065564|8064D74|8078A04|80765E4|FireDragonBGAnimation2|void FireDragonBGAnimation2(_6CStruct *ctx)||
|80536C4|8065D5C|806556C|8078E30|8076A10||||
|805AE6C|8066FC0|806689C|8079F10|8077AEC||||
|805AEDC|8067030|8066844|8079F80|8077B5C||||
|805AF34|8067088|80667D4|8079FD8|8077BB4||||
|800C2C8|8009E48|8009FB8|807AB44|8078720|MU_Exists|[int MU_Exists(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L768)||
|808D7B4|80414B0|8040DB0|807E420|807ACD0|PlaySoundIdA0|int PlaySoundIdA0()||
|0|807ADE0|807A36C|808759C|8085308||||
|0|807ADFC|807A388|80875B8|80852B4||||
|0|807E074|807D3F8|80875D4|80852D0||||
|0|807B750|807ACDC|8087AE8|808581C||||
|8070640|80825C4|8081864|808AFC8|8088D3C||||
|807155C|80837E0|8082DE0|808C470|808A160||||
|8009934|8008354|80084C4|8098994|808A36C||||
|0|80907AC|808FE6C|80992B4|8096FD0||||
|0|80886FC|8087D74|809965C|808F2A0||||
|0|8090AC0|8090444|8099678|8097394||||
|0|8090D84|809019C|8099930|809764C||||
|0|80963FC|8095BF4|809F4E0|809FDA0||||
|0|8098E8C|80985A0|80A2040|809D244||||
|0|80AA1A0|80A928C|80B1D2C|80AD28C||||
|0|80907E4|808FEA4|80B1FA0|80AD500||||
|800C2A4|8009E30|8009FA0|80BEEE8|80BA054|DoesTCSWrapperExist|bool DoesTCSWrapperExist()||
|0|80B6664|80B5844|80BF11C|80BA198||||
|8092028|8012BA8|800A50C|80C4918|80BFB34||||
|0|8020F20|8012514|80C4AF4|80BFD10|DoesBMXFADEExist|bool DoesBMXFADEExist()||
|0|80839F0|808F7F0|80C4FF4|80C0210||||
|8091A4C|800A508|80084C4|80C55EC|80C081C||||
|0|8090118|8082FF0|80C6498|80C16DC||||
|0|80B4A20|80B3BE8|80C6898|80C1ADC|PlaySoundIdA0|int PlaySoundIdA0()||
|0|8090130|808F7D8|80C699C|80C1BE0||||
|0|8031740|8020AB8|80C7228|80C2470||||
|0|80AB134|80AA26C|80C74A8|80C26F0|DoesMoveUnitExist|bool DoesMoveUnitExist()||
|0|80AB14C|80AA284|80C7BF0|80C2E38||||
|8091A4C|80B6464|80B5644|80C8E10|80C4058||||
|801FDB8|8022D84|802290C|8023A18|8023A54|StaffCommandUsability|signed int StaffCommandUsability()||
|0|8013374|8012CBC|800A004|800A2A4|sub_800A2A4|[char *sub_800A2A4(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/messdecode.c#L97)||
|0|80359FC|8035524|803A440|803A3C8|CpPerform_MoveCameraOntoTarget|int CpPerform_MoveCameraOntoTarget(signed int a1)||
|8004264|8004748|800486C|8002FC8|8003078|EndEachProc|int EndEachProc(int a1)||
|800D824|8004764|8004888|8002FE4|8003094|BreakEachProcLoop|int BreakEachProcLoop(int a1)||
|0|8004BD0|8004CF4|80034D0|8003584|ResetIconGraphics|[void ResetIconGraphics() ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L19)||
|8004AA4|8004C08|8004D2C|8003508|80035BC|LoadIconPalettes|[void LoadIconPalettes(u32 Dest)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L25)||
|8004AC8|8004C20|8004D44|8003520|80035D4|LoadIconPalette|[void LoadIconPalette(u32 Index, u32 Dest)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L30)||
|0|8005344|8005474|8003C8C|8003D5C|Text_InitClear|int Text_InitClear(int a1, __int16 a2)||
|0|800536C|800549C|8003CB4|8003D84|Text_InitDB|int Text_InitDB(int a1, __int16 a2)||
|0|80053B0|80054E0|8003CF8|8003DC8|Text_Clear|int Text_Clear(int a1)||
|0|8005448|8005578|8003D88|8003E58|Text_Advance|int Text_Advance(int result, char a2)||
|0|8005564|80056A8|8003EAC|8003F90|GetStringTextCenteredPos|int GetStringTextCenteredPos(int a1, unsigned __int8 *a2)||
|0|8005904|8005A40|80042E0|80043A8|Font_LoadForUI|int Font_LoadForUI()||
|0|8005944|8005A80|8004320|80043E8|Font_LoadForDialogue|int Font_LoadForDialogue()||
|0|80059DC|8005B18|80043B8|8004480|Text_InsertString|int Text_InsertString(int a1, char a2, char a3, unsigned __int8 *a4)||
|8006484|8005A00|8005B3C|80043DC|80044A4|Text_InsertNumberOr2Dashes|int Text_InsertNumberOr2Dashes(int a1, char a2, char a3, int a4)||
|0|8005ACC|8005C38|80044A4|800459C|Font_InitForObj|int Font_InitForObj(int a1, int a2, char a3)||
|0|8005B8C|8005CF8|80045BC|80046B4|Text_Fill2DLine|int Text_Fill2DLine(int a1, int a2)||
|8008BC8|8005EAC|8006018|80048D8|80049D0|EndGreenTextColorManager|int EndGreenTextColorManager()||
|0|800625C|80063CC|8004C84|8004D7C||||
|0|8006BC0|8006D30|8005640|8005738|EndFace|int EndFace(int a1)||
|0|8007000|8007170|8005A7C|8005B78||||
|0|8007054|80071C4|8005AD0|8005BCC||||
|0|8007354|80074C4|8005D9C|8005E98||||
|8008CDC|8007394|8007504|8005DDC|8005ED8||||
|0|80073AC|800751C|8005DF4|8005EF0||||
|0|80073F4|8007564|8005E3C|8005F38||||
|0|8007C48|8007DB8|80065E4|80066E0||||
|80090B0|8007DF4|8007F64|800687C|8006978|Dialogue_InitFont|int Dialogue_InitFont()||
|800C56C|8007EF8|8008068|8006980|8006A7C|EndDialogue|int EndDialogue()||
|808BD58|8008340|80084B0|8006DC8|8006EC4||||
|8011FD0|800EC74|800ED68|8007748|8007844||||
|0|8008DA8|8008F18|800783C|8007938||||
|0|800914C|80092BC|8007BD4|8007CD8|NewTextBluArrowAndButtonChecker|int NewTextBluArrowAndButtonChecker(signed int a1, __int16 a2, __int16 a3)||
|0|800981C|800998C|80082DC|80083E0|NewDialogueBoxAppearingAnimator|int NewDialogueBoxAppearingAnimator()||
|0|8012A54|80123C0|8009564|8009674|AP_LoadDefinition|[void AP_LoadDefinition(struct APHandle* handle, const u16* definition) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L268)||
|0|8012A78|80123E4|8009588|8009698|AP_ExecDummyFrame|[void AP_ExecDummyFrame(struct APHandle* handle) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L287)||
|0|8012A98|8012404|80095A8|80096B8|AP_Init|[void AP_Init(struct APHandle* handle, const u16* definition, u16 objLayer) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L304)||
|0|8012AF0|801245C|8009608|8009718|APProc_Create|[struct APProc* APProc_Create(const void* apDefinition, int xPos, int yPos, int tileBase, int anim, u16 aObjNode) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L339)||
|80132B0|8012B8C|80124F8|80096A4|80097B4|APProc_Delete|[void APProc_Delete(struct APProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L381)||
|0|8012DB4|8012738|8009A28|8009AD8||||
|0|80131F0|8012B38|8009EA0|8009F40|GetGameControl|int *GetGameControl()||
|8013A0C|8013264|8012BAC|8009EEC|8009F8C|RestartGameAndGoto8|int RestartGameAndGoto8()||
|0|8013288|8012BD0|8009F10|8009FB0|RestartGameAndGoto12|int RestartGameAndGoto12()||
|0|8013354|8012C9C|8009FE4|0||||
|0|800ECEC|800EDE0|80117CC|80116E0|NewPopup_WeaponBroke|int NewPopup_WeaponBroke(__int16 a1, int a2)||
|0|800ED34|800EE28|80117F0|8011704|NewPopup_WRankIncrease|int NewPopup_WRankIncrease(__int16 a1, int a2)||
|8014218|8014020|8013B00|80139E0|8013928||||
|8014374|801417C|8013C5C|8013B3C|8013A84||||
|8014BAC|80149B4|8014494|80142F0|8014238|StartBlockingTimer|int StartBlockingTimer(signed int a1, int a2)||
|80151A8|8014FB0|8014B34|80148F0|80148C8|SetupFutureCall2|int SetupFutureCall2(int a1, int a2)||
|801551C|8015324|8014EA8|8014C7C|8014C54||||
|8015B44|8015A0C|8015590|801569C|8015680|LoadObjUIGfx|int LoadObjUIGfx()||
|8015B80|8015A48|80155CC|8015710|80156F4|LoadGameCoreGfx|int LoadGameCoreGfx()||
|0|8015ED8|8015A5C|8015BA4|8015B88||||
|8016B84|8016E38|80169E0|8016BA0|8016DF8|GetDisplayRankStringFromExp|[int GetDisplayRankStringFromExp(int wexp) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L669)||
|0|8017610|0|801729C|80174F4|GetItemName|[inline char* GetItemName(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L89)||
|0|8017774|801736C|8017414|801766C|GetItemMinRange|[inline int GetItemMinRange(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L154)||
|8017394|80178F8|8017508|801759C|80177F4|ClearUnit|[void ClearUnit(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L220)||
|80173BC|8017920|8017530|80175C4|801781C|CopyUnit|[void CopyUnit(struct Unit* from, struct Unit* to) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L226)||
|0|80184DC|80180EC|8018370|801865C|UnitBeginAction|[void UnitBeginAction(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1048)||
|0|8018554|8018164|80183E8|80186D4|UnitBeginCantoAction|[void UnitBeginCantoAction(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1068)||
|80183C8|8018EA0|8018AB0|8018EA4|8019190|GetUnitMaxHp|[inline int GetUnitMaxHp(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L262)||
|80183E8|8018EC0|8018AD0|8018EC4|80191B0|GetUnitPower|[inline int GetUnitPower(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L273)||
|8018488|8018F60|8018B70|8018F64|8019250|GetUnitDefense|[inline int GetUnitDefense(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L295)||
|80184A8|8018F80|8018B90|8018F84|8019270|GetUnitResistance|[inline int GetUnitResistance(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L299)||
|80184D0|8018FA8|8018BB8|8018FAC|8019298|GetUnitLuck|[inline int GetUnitLuck(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L303)||
|8018658|8019138|8018D50|801915C|8019484|UnitRemoveItem|[inline void UnitRemoveItem(struct Unit* unit, int slot) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L425)||
|80188F4|8019428|8019040|8019450|8019778|sub_8019778|[void sub_8019778(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L164)||
|8018A28|801955C|8019174|8019584|80198AC|UnpackChapterMap|[void UnpackChapterMap(void* into, int chapterId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L227)||
|8018AF0|8019624|801923C|801964C|8019974|UnpackChapterMapPalette|[void UnpackChapterMapPalette(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L263)||
|0|80197A4|80193BC|80197CC|8019AF4|GetTrueTerrainAt|[int GetTrueTerrainAt(int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L318)||
|0|8019F80|8019BA0|801A05C|801A38C|GenerateUnitMovementMap|[void GenerateUnitMovementMap(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L23)||
|0|8019FFC|8019C1C|801A0D4|801A408|GenerateUnitExtendedMovementMap|[void GenerateUnitExtendedMovementMap(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L39)||
|0|801A090|8019CB0|801A168|801A49C|GenerateMovementMapOnWorkingMap|[void GenerateMovementMapOnWorkingMap(struct Unit* unit, int x, int y, int movement)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L63)||
|0|801BA34|0|801BA6C|0||||
|0|801BB60|0|801BB98|0||||
|801C060|801D6D8|801D2D4|801D730|801DACC|HideMoveRangeGraphics|int HideMoveRangeGraphics()||
|801C20C|801D880|801D47C|801D8E0|801DC7C|Make6CKOIDO|int Make6CKOIDO(_DWORD *a1, int a2, char a3, signed int a4)||
|801D680|801EF94|801EC10|801F164|801F50C|ChangeActiveUnitFacing|[void ChangeActiveUnitFacing(int xLook, int yLook) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/unit_facing.c#L6)||
|801D774|801F088|801ED04|801F258|801F600|StartGasTrapEffectGfxMaybe|int StartGasTrapEffectGfxMaybe(signed int a1, int a2, int a3, __int16 a4)||
|0|801F114|801ED90|801F2E4|801F68C|NewFireTrapEffectGfx|int NewFireTrapEffectGfx(signed int a1, int a2, int a3)||
|801D89C|801F2CC|801EF48|801F49C|801F844|StartLightArrowTrapGfx|int StartLightArrowTrapGfx(signed int a1, int a2)||
|0|8021348|8020EDC|8021EC0|8022060||||
|801F8A4|8022828|80223B0|80234C0|80234FC||||
|801F8E0|8022864|80223EC|80234FC|8023538||||
|0|802287C|8022404|8023514|8023550||||
|8020BC8|8023F00|8023A74|8024F20|8024F70|ForEachAdjacentUnit|int ForEachAdjacentUnit(int a1, int a2)||
|8020BFC|8023F34|8023AA8|8024F54|8024FA4|ForEachAdjacentPosition|int ForEachAdjacentPosition(int a1, int a2)||
|8020D7C|80240E4|8023C58|8025164|80251B4|MakeTargetListForWeapon|int MakeTargetListForWeapon(int a1, unsigned __int8 a2)||
|8021164|8024520|8024094|80255C0|8025610||||
|8021538|8024904|8024478|8025B10|8025B6C||||
|80215B0|8024990|8024504|8025BA4|8025C00|MakeTargetListForSteal|int MakeTargetListForSteal(int a1)||
|802166C|8024A4C|80245C0|8025E54|8025EB0|MakeTargetListForRangedHeal|int MakeTargetListForRangedHeal(int a1)||
|0|8024B6C|80246E0|8026010|802606C|MakeTargetListForBarrier|int MakeTargetListForBarrier(int a1)||
|80219B4|8024D94|8024908|8026238|8026294|MakeTargetListForWarp|int MakeTargetListForWarp(int a1)||
|8021A74|8024E54|80249C8|80262F8|8026354|MakeTargetListForHammerne|int MakeTargetListForHammerne(int a1)||
|0|8026BD0|8026744|8028270|80282DC|UnitGainSupportLevel|[void UnitGainSupportLevel(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L105)||
|8022F70|8026FDC|8026B50|8028680|80286EC|GetSupportLevelUiChar|[int GetSupportLevelUiChar(int level)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L345)||
|0|8027028|8026BA0|80286D0|802873C||||
|8023700|802781C|8027390|80290E0|8029138|CanUnitUseDoorKeyItem|[s8 CanUnitUseDoorKeyItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L505)||
|8023714|8027830|80273A4|80290F4|802914C|CanUnitOpenBridge|[s8 CanUnitOpenBridge(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L511)||
|80238C8|8027AD8|802764C|80294C4|802951C|EndItemEffectSelectionThing|int EndItemEffectSelectionThing()||
|80238F0|8027B00|8027674|80294EC|8029544||||
|8023914|8027B24|8027698|8029510|8029568|PrepareTargetSelectionForRescueStaff|int PrepareTargetSelectionForRescueStaff(int a1)||
|0|8027B64|80276D8|8029550|80295A8|SetupTargetSelectionForGenericStaff|int SetupTargetSelectionForGenericStaff(int a1, int a2, int a3)||
|8023ED0|8028184|8027CF8|8029B54|8029BC8|PrepareTargetSelectionForRestoreStaff|int PrepareTargetSelectionForRestoreStaff(int a1)||
|8023F0C|80281F0|8027D64|8029BC0|8029C34||||
|8023FE4|802825C|8027DD0|8029C2C|8029CA0|PrepareTargetSelectionForOffensiveStaff|int PrepareTargetSelectionForOffensiveStaff(int a1)||
|80244DC|8028B44|80286B8|802A5D4|802A668|CopyUnitToBattleStructRawStats|int CopyUnitToBattleStructRawStats(_BYTE *a1, _DWORD *a2)||
|0|8028DE8|802896C|802A884|802A918|SetupBattleBallistaWeaponData|int SetupBattleBallistaWeaponData(int a1)||
|0|8028E2C|80289B0|802A8C8|802A95C|FillPreBattleStats|int FillPreBattleStats(int a1, int a2)||
|0|8028E78|80289FC|802A914|802A9A8|FillBattleStats|int FillBattleStats(int a1, int a2)||
|0|802AA10|802A560|802CB00|802CBC8|SetupTargetBattleUnitForStaff|int SetupTargetBattleUnitForStaff(_DWORD *a1)||
|0|802C360|802BEA0|802E628|802E6F0|AddToTargetListFromPos|int AddToTargetListFromPos(int a1, int a2, int a3)||
|8028304|802D7E4|802D324|8030044|80300F4|SetupGameVBlankProc_TileAnimations|int SetupGameVBlankProc_TileAnimations(int a1)||
|8028360|802D840|802D380|80300A0|8030150|BMapVSync_Start|[void BMapVSync_Start(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L285)||
|8028384|802D864|802D3A4|80300C4|8030174|BMapVSync_End|[void BMapVSync_End(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L293)||
|8028448|802D930|802D470|8030190|8030240||||
|8028C5C|802E144|802DC84|80309A8|8030A58||||
|8028D04|802E1EC|802DD2C|8030A50|8030B00||||
|8028E80|802E368|802DEA8|8030BCC|8030C7C|SetWeather|[void SetWeather(unsigned weatherId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L913)||
|8028E98|802E380|802DEC0|8030BE4|8030C94|GetTextDisplaySpeed|[u8 GetTextDisplaySpeed(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L920)||
|0|802E804|802E338|80310C4|8031178|LoadGameCoreGfx2|int LoadGameCoreGfx2()||
|0|802E834|802E368|80310F4|80311A8|RefreshBMapGraphics|[void RefreshBMapGraphics(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1183)||
|802934C|802E87C|802E3B0|803113C|80311F0|EndBMapMain|[void EndBMapMain(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1202)||
|807D16C|802EBB8|802E6EC|8031438|80314EC|SetTacticianName|[void SetTacticianName(const char* newName) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1370)||
|802968C|802EBD4|802E708|8031454|8031508|ClearConvoyItems|int ClearConvoyItems()||
|80297B8|802EDB8|802E8EC|803162C|80316E0|PushUnit|int PushUnit(_BYTE *a1)||
|8029924|802EF4C|802EA80|80317C0|8031874|PrepareArena|int PrepareArena(int a1)||
|8029940|802EF68|802EA9C|80317DC|8031890|PrepareArena2|int PrepareArena2(int a1)||
|802A008|802F6C4|802F1F8|8031F38|8031FEC|StoreRNStateToActionStruct|int StoreRNStateToActionStruct()||
|802A018|802F6D4|802F208|8031F48|8031FFC|LoadRNStateFromActionStruct|int LoadRNStateFromActionStruct()||
|802ABB0|80302D0|802FE08|8032C4C|8032D30|GenerateMovementMapForActiveUnit|[void GenerateMovementMapForActiveUnit(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L130)||
|802ABF4|8030314|802FE4C|8032C90|8032D74|ResetPathArrow|[void ResetPathArrow(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L138)||
|802CB50|8032CCC|803279C|8035848|8035748|EndBottomHelpText|int EndBottomHelpText()||
|802CBD4|8032D88|8032858|8035904|8035804||||
|802D730|803397C|8033460|80366E4|80365E4|DrawUnitNameForBattleForecast|int DrawUnitNameForBattleForecast(_WORD *a1, unsigned __int8 *a2, unsigned __int16 **a3)||
|802D774|80339C0|80334A4|8036728|8036628||||
|0|8034C48|8034770|8037ACC|8037A34|RideBallista|int RideBallista(int a1)||
|802ECA0|80355BC|80350E4|8039F44|8039ECC|StartAiTargetCursor|int StartAiTargetCursor(int a1, int a2, int a3, signed int a4)||
|0|8035714|803523C|803A09C|803A024|AiRefreshMap|int AiRefreshMap()||
|0|8038508|8038054|803CEF0|803CF60||||
|8031C28|8038E18|8038964|803D810|803D880|AiFillUnitStandingRangeWithWeapon|int AiFillUnitStandingRangeWithWeapon(int a1, unsigned __int8 a2)||
|8032200|80393EC|8038F38|803DDEC|803DE5C|AiGetTileWeightForAttack|unsigned int AiGetTileWeightForAttack(int a1, int a2, int a3)||
|8033038|803A1FC|8039D48|803EC28|803EC98|GetUnitAttackAndWeapon|int GetUnitAttackAndWeapon(_DWORD *a1, _WORD *a2)||
|0|803C354|803BEA0|8040DE8|8040E68|InitAiMoveMapForUnit|int InitAiMoveMapForUnit(int a1)||
|0|803C384|803BED0|8040E18|8040E98||||
|0|803C414|803BF60|8040EA8|8040F28|AiMapRangeFillMovementWithPassableWalls|int AiMapRangeFillMovementWithPassableWalls(int a1, int a2, int a3)||
|0|803C440|803BF8C|8040ED4|8040F54||||
|0|803C4A8|803BFF4|8040F3C|8040FBC||||
|0|803C540|803C08C|8040FD4|8041054||||
|0|803C5B0|803C0FC|8041044|80410C4||||
|8035490|803C9AC|803C4F8|80418FC|804197C||||
|8036884|803DDA0|803D8F0|8042CF4|8042D70||||
|0|803DE14|803D964|8042D6C|8042DE8||||
|8036AF8|803E038|803DB88|8042F80|8042FFC||||
|8036B40|803E080|803DBD0|8042FC8|8043044||||
|8038D14|80404E0|803FDD4|8045434|8045494||||
|8039550|8040D1C|8040610|8045C5C|8045CBC||||
|8039574|8040D40|8040634|8045C80|8045CE0||||
|80397AC|8040F78|8040870|8045EA4|8045F00||||
|803AE58|8042680|8041FBC|8047578|8047654||||
|8089564|80446A0|8043EA0|804944C|80381F4||||
|803C288|8044AD0|80442D4|804987C|8048A6C||||
|803C2B0|8044AF8|80442FC|80498A4|8048A94||||
|803C530|8044D78|804457C|8049B2C|8048D1C||||
|803CA6C|80452B8|0|804A070|0||||
|803CAC8|8045314|8044B24|804A0D4|80492D8||||
|803CF58|80457A8|8044FB8|804A584|8049788||||
|803D6E0|8045F70|8045784|804AD2C|8049F38||||
|0|8046C4C|8046464|804BA08|804AC68||||
|803EA30|8047330|8046B48|804C12C|804B38C||||
|803F990|804829C|8047AB0|804D058|804C2B8||||
|803F9C4|80482D0|8047AE4|804D08C|804C2EC||||
|8040014|8048944|8048158|804D4F8|804C758||||
|80404E8|8048E18|804862C|804D9B4|804CC14||||
|8040530|8048E60|8048674|804D9FC|804CC5C||||
|0|8048FC4|80487DC|804DB28|804CD90||||
|8040A80|80493CC|8048BE4|804DF78|804D1E0||||
|80410F8|8049A44|804925C|804E5C8|804D834||||
|804163C|804A7EC|804A004|804F5D4|804E848|DisplayFrozenUiHand|[void DisplayFrozenUiHand(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1091)||
|8041678|804A828|804A040|804F610|804E884|ClearBg0Bg1|[void ClearBg0Bg1(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1107)||
|80417D4|804A9F8|804A210|804F8F4|804EB68|LoadUiFrameGraphics|[void LoadUiFrameGraphics(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1227)||
|8041818|804AA3C|804A254|804F954|804EBC8|StartMenu|[struct MenuProc* StartMenu(const struct MenuDef* def, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L94)||
|8041834|804AA58|804A270|804F970|804EBE4|StartOrphanMenu|[struct MenuProc* StartOrphanMenu(const struct MenuDef* def)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L104)||
|8041A38|804AC78|804A490|804FCAC|804EF20|EndAllMenus|[void EndAllMenus(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L271)||
|8041FA4|804B210|804AA34|80502F4|804F580|MenuFrozenHelpBox|[u8 MenuFrozenHelpBox(struct MenuProc* proc, int msgid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L607)||
|8042524|804B928|804B14C|8050A74|804FD00|GetLinkedTargetList|char *GetLinkedTargetList()||
|8042584|804B988|804B1AC|8050AD4|804FD60|StartEkrBattleDeamon|int StartEkrBattleDeamon()||
|80438B4|804CC14|804C438|8051EA0|805116C|EndEkrGauge|int EndEkrGauge()||
|8044198|804D540|804CD64|80527BC|8051AC4|StartEkrDispUP|int StartEkrDispUP()||
|80441C8|804D570|804CD94|80527EC|8051AF4||||
|0|804E7F4|804E018|8053AC4|8052DD4|StartEfxDeadEVTENT|int StartEfxDeadEVTENT(int a1, int a2)||
|80457E8|804E9D0|804E1F4|8053C9C|8052FAC|StartEfxDead|int StartEfxDead(int a1, int a2)||
|8045D6C|804ED50|804E574|8054198|80534AC||||
|8045F48|804EF18|804E73C|8054364|8053678||||
|8046794|804F7B8|804EFDC|8054BF8|8053F10|StartEfxFlashBG|int StartEfxFlashBG(int a1, __int16 a2)||
|0|804FB58|804F37C|80552A8|80545C0|StartEfxHPBarColorChange|int StartEfxHPBarColorChange(int a1)||
|8046ED8|804FFAC|804F7D0|805583C|8054B64||||
|8046F48|805001C|804F840|80558AC|8054BD4||||
|80474C8|80507E4|8050008|8056120|8055178|SpellFx_ClearBG1Position|int SpellFx_ClearBG1Position()||
|80474D8|80507F4|8050018|8056130|8055188|SpellFx_ClearBG1|int SpellFx_ClearBG1()||
|8047A88|8050DA4|80505C8|8056774|80557D8|SpellFx_RegisterObjGfx|int SpellFx_RegisterObjGfx(int a1, int a2)||
|8047AB0|8050DCC|80505F0|805679C|8055800|SpellFx_RegisterObjPal|int SpellFx_RegisterObjPal(int a1, int a2)||
|8047ACC|8050DE8|805060C|80567B8|805581C|SpellFx_RegisterBgGfx|int SpellFx_RegisterBgGfx(int a1, int a2)||
|8047AF4|8050E10|8050634|80567E0|8055844|SpellFx_RegisterBgPal|int SpellFx_RegisterBgPal(int a1, int a2)||
|8047C48|8050F74|8050798|8056944|80559B0||||
|0|8050FFC|8050820|80569E4|8055A40||||
|8047CB8|8051170|8050994|8056B4C|8055BC4||||
|8047DAC|8051288|8050AAC|8056C64|8055CDC|StartEkrBattleStarting|int StartEkrBattleStarting()||
|80481B4|8051690|8050EB4|8057060|80560D8||||
|804AF70|8054734|8053F4C|805A6B0|805990C|StartEkrChienCHR|int StartEkrChienCHR(int a1)||
|804B80C|8054F90|80547A8|805B058|805A2B4|GetOpponentFrontAIS|int GetOpponentFrontAIS(int a1)||
|804B848|8054FCC|80547E4|805B094|805A2F0|GetAISNextBattleAnimRoundType|int GetAISNextBattleAnimRoundType(int a1)||
|804B868|8054FEC|8054804|805B0B4|805A310|GetAISCurrentRoundType|int GetAISCurrentRoundType(int a1)||
|804BF00|80556D8|8054EF0|805B7CC|805AA28||||
|804C50C|8055CE4|80554FC|805BDD8|805B034||||
|804C580|8055D58|8055570|805BE4C|805B0A8|BeginAnimsOnBattle_Arena|int BeginAnimsOnBattle_Arena()||
|804C5BC|8055D94|80555AC|805BE94|805B0F0|NewEkrTogiInitPROC|int NewEkrTogiInitPROC()||
|804C8D4|80560A4|80558BC|805C1A4|805B400|loadResireRST5|_6CStruct *loadResireRST5(int a1, int a2, int a3, int a4, int a5)||
|804CC68|80565FC|8055E14|805C6EC|805B93C|loadRestWINH1|void loadRestWINH1(int a1, int a2, unsigned int a3)||
|804CD88|80566F0|8055F08|805C7CC|805BA1C|loadALPHA|void loadALPHA(int a1, __int16 a2, __int16 a3, int a4, int a5, int a6)||
|0|80569B8|80561D0|805CA20|805BC80|StartSpellThing_MagicQuake|int StartSpellThing_MagicQuake(int a1, __int16 a2, int a3)||
|804D728|8057088|80568A0|805D0F4|805C358|loadArrowOBJ|void loadArrowOBJ(void *AIS)||
|804E3C0|8057EFC|8057714|805DF40|805D2EC||||
|0|8058318|8057B30|805E360|805D260||||
|804DDC8|80583A0|8057BB8|805E3EC|805D2EC||||
|804EE9C|8058A10|8058228|805EABC|805D9BC|StartEfxThunderBGCOL|int StartEfxThunderBGCOL(int a1)||
|804EF24|8058A98|80582B0|805EB44|805DA44|StartEfxThunderOBJ|int StartEfxThunderOBJ(int a1)||
|804F144|8058CB8|80584D0|805ED64|805DC64|loadFireBG|void loadFireBG(void *AIS)||
|804F484|8058FF8|8058810|805F0A4|805DFA4|StartSubSpell_efxElfireBGCOL|int StartSubSpell_efxElfireBGCOL(int a1)||
|804F908|805947C|8058C94|805F530|805E430|loadFimbulvetrOBJ|void loadFimbulvetrOBJ(void *targetAIS)||
|804FD24|8059898|80590B0|805F950|805E850||||
|804FDD4|8059948|8059160|805FA00|805E900||||
|804FE60|80599D4|80591EC|805FA8C|805E98C||||
|804FF94|8059B08|8059320|805FBAC|805EAAC||||
|80506B4|8059EE4|80596FC|80602A4|805F1A4||||
|80506F8|8059F28|8059740|80602E8|805F1E8||||
|8050D68|805A594|8059DAC|8060938|805F838|loadResireRST3|void loadResireRST3(int a1, _6CStruct *a2, __int16 a3)||
|80511BC|805A9E8|805A200|8060D90|805FC90||||
|8051288|805AAB4|805A2CC|8060E5C|805FD5C||||
|8051328|805AB54|805A36C|8060EFC|805FDFC||||
|8053A44|805C6A8|805BEC0|8061614|8060514|loadHazymoonBG3|void loadHazymoonBG3(void *AIS)||
|8054168|805CDCC|805C5E4|8061D18|8060C18||||
|80543C4|805D044|805C85C|8061F90|8060E90||||
|8054EA0|805DB2C|805D344|806299C|806189C||||
|8055E14|805EB08|805E320|8063998|8062898||||
|0|805EB60|805E378|80639F0|80628F0||||
|8055ED0|805EBB4|805E3CC|8063A44|8062944||||
|8056080|805ED64|805E57C|8063BF4|8062AF4||||
|8056138|805EE1C|805E634|8063CAC|8062BAC||||
|8056444|805F124|805E93C|8063FAC|8062EAC||||
|80568B4|805F594|805EDAC|806441C|806331C||||
|8056968|805F648|805EE60|80644D0|80633D0||||
|80569C0|805F6A0|805EEB8|8064528|8063428||||
|0|805F808|805F020|8064690|8063590||||
|0|805F9E4|805F1FC|806486C|806376C||||
|0|805FA70|805F288|80648F8|80637F8||||
|0|80613B8|8060BD0|8066318|8064DE4||||
|0|8061448|8060C60|80663A8|0||||
|0|8061A8C|80612A4|80669EC|806533C||||
|0|8061B1C|8061334|8066A7C|80653CC||||
|0|806205C|8061874|8066F9C|0||||
|0|806250C|8061D24|8067450|0||||
|0|80626F0|8061F08|8067634|0||||
|0|80627C4|8061FDC|8067708|8065498||||
|0|80628F0|8062108|8067834|0||||
|0|80629CC|80621E4|8067914|80655C4||||
|0|8062A3C|8062254|8067984|0||||
|0|8062C68|8062480|806E940|806C61C|StartEfxDamagaMojiEffect|int StartEfxDamagaMojiEffect(int a1, char a2)||
|80570A0|8063200|8062A18|806F1A4|806CE80||||
|0|8063300|8062B18|806F2A4|806CF80||||
|805854C|806397C|8063194|806FA04|806D6E8||||
|0|80641B0|80639C8|807032C|806E014|StartEfxChillEffect|int StartEfxChillEffect(int a1)||
|0|8064458|8063C70|80705C8|0||||
|0|8064644|8063E5C|8070794|0||||
|0|80646EC|8063F04|807083C|0||||
|8057FB8|806488C|80640A4|8070F64|806E9B4||||
|805B1DC|80672E8|8066AFC|80733E8|8070EC4||||
|805B9A4|8067AB0|80672C4|8073B80|807168C||||
|805B9C8|8067AD4|80672E8|8073BA4|80716B0|GetOtherRN_N|int GetOtherRN_N(int a1)||
|805B9E0|8067AEC|8067300|8073BBC|80716C8|StartEkrsubAnimeEmulator|int StartEkrsubAnimeEmulator(__int16 a1, __int16 a2, int a3, char a4, int a5, int a6, signed int a7)||
|805C804|80689D0|80681E4|8074E80|80729A4|PlaySFX|void PlaySFX(int SFXID, int a2, int a3, int a4)||
|805C858|8068A24|8068238|8074EDC|8072A00|EndEkrClasschg|int EndEkrClasschg()||
|805D140|8069300|8068B14|80759F4|8073518|EndEkrLevelUp|int EndEkrLevelUp()||
|805D4E0|80696A0|8068EC0|8075DA0|80738B8||||
|805D570|8069730|8068F50|8075E30|8073948||||
|805E230|806A2D4|8069AF4|80769BC|8074580||||
|805E2CC|806A370|8069B90|8076A58|807461C||||
|0|806A610|8069E30|8076CFC|80748C4||||
|0|806A6B0|8069ED0|8076D9C|8074964||||
|0|806A740|8069F60|8076E2C|80749F4||||
|0|806A7AC|8069FCC|8076E98|8074A60||||
|805E7A0|806AEC4|806A6E4|80775BC|8075184|StartEkrPegasusKnight|int StartEkrPegasusKnight(int a1, int a2, int a3, int a4, int a5)||
|805EA38|806B15C|806A97C|807785C|8075424||||
|805EE9C|806B5C0|806ADE0|8077CD4|807589C||||
|805F078|806B778|806AF98|8077E84|8075A50||||
|805F098|806B798|806AFB8|8077EA4|8075A70||||
|805F0DC|806B7DC|806AFFC|8077EE8|8075AB4||||
|805F100|806B800|806B020|8077F0C|8075AD8||||
|0|806BF94|806B7A8|8078750|8076330|BeginAnimsOnBattle_Hensei|int BeginAnimsOnBattle_Hensei()||
|0|806BFB8|806B7CC|8078774|8076354||||
|80685F0|806BFD0|806B7E4|807878C|807636C|NewEkrHenseiInitPROC|int NewEkrHenseiInitPROC()||
|8073310|806C0D4|806B8E8|8078890|8076470||||
|0|8066804|8066018|80796E4|80772C0||||
|0|807A260|8079A90|80868F4|8084628||||
|806E998|8080600|807F848|8088DE8|8086B2C||||
|809874C|80807F0|807FA38|80890AC|8086DF0||||
|80709E8|80829F4|8081C94|808B3F0|8089164|StartMovingHelpBox|[void StartMovingHelpBox(const struct HelpBoxInfo* info, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2354)||
|8070A0C|8082A18|8081CB8|808B414|8089188|StartMovingHelpBoxExt|[void StartMovingHelpBoxExt(const struct HelpBoxInfo* info, struct Proc* parent, int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2364)||
|8070D48|8082E6C|80823E0|808B93C|8089678||||
|0|80832E0|80828B0|808BFE0|8089CD4||||
|80714F8|808377C|8082D7C|808C40C|808A0FC||||
|8071514|8083798|8082D98|808C428|808A118||||
|0|8083EE0|80834E0|808CBF4|808A8E4||||
|8071B6C|8083FEC|80835EC|808CD00|808A9F0||||
|8072298|80851F0|80847F4|808DF94|808BC94||||
|8073510|80871AC|80867C0|808FF5C|808DC74||||
|0|80871E4|80867F8|808FF94|808DCAC||||
|0|8087B80|80871C8|8090A70|808E79C||||
|0|80893E0|8088A7C|80922C8|808FFE8||||
|0|80894EC|8088B88|80923CC|80900EC||||
|0|80903E8|808FAA8|8098F04|8096C20||||
|0|8090DBC|809047C|8099968|8097684|Delete6CMenuScroll|int Delete6CMenuScroll()||
|0|8090DD0|8090490|809997C|8097698|Make6CMenuScroll|int Make6CMenuScroll(signed int a1)||
|808F59C|809158C|8090C48|8099FA0|8097CC8||||
|0|80922DC|8091994|809AF64|8098C8C||||
|0|80932B0|80929A4|809C224|8099F50||||
|0|80932C8|80929BC|809C23C|8099F68||||
|0|80948A0|8093FB8|809D800|809B538||||
|0|8095D1C|80954EC|809EC7C|809C9D8||||
|0|8099C28|8099268|80A2C5C|80A09A8||||
|0|8099C60|80992A0|80A2C94|80A09E0||||
|0|809B2A0|809A8C8|80A412C|0||||
|0|809C820|80A8664|80A575C|80A1984||||
|0|809C948|809BF94|80A5884|80A1AAC||||
|0|809EF88|809E570|80A77EC|80A2DA8|SaveGeneralGameMetadata|int SaveGeneralGameMetadata(unsigned __int16 *a1)||
|0|809F4F0|809EAE0|80A7D70|80A332C||||
|0|809FBCC|809F190|80A8394|80A3950|SaveBonusContentData|int SaveBonusContentData(unsigned __int16 *a1)||
|0|809FC00|809F1C4|80A83C8|80A3984||||
|0|80A0120|809F6E4|80A88E8|80A3EA4||||
|0|80A0244|809F808|80A8A44|80A4000||||
|0|80A0AC8|80A00FC|80A9320|80A48DC|StoreSomeUnitSetFlags|int StoreSomeUnitSetFlags(unsigned __int8 a1)||
|0|80A0ADC|80A0110|80A9334|80A48F0||||
|808525C|80A1328|80A09A0|80A9C30|80A5218|SaveMetadata_CheckId|int SaveMetadata_CheckId(int saveBlockId)||
|8085270|80A133C|80A09B4|80A9C44|80A522C|LoadSavedChapterState|void LoadSavedChapterState(int saveBlockId, void *out)||
|8085A34|80A1D6C|80A13D8|80AA814|80A5DFC|LoadSuspendedChapterState|int LoadSuspendedChapterState(int a1, void *a2)||
|8085F4C|80A2304|80A1970|80AAE20|80A6408|ComputeSaveChecksum|int ComputeSaveChecksum(int a1, int a2)||
|8085F98|80A2350|80A19BC|80AAE6C|80A6454|SaveMetadata_ComputeChecksum|int SaveMetadata_ComputeChecksum(int a1)||
|8086090|80A2448|80A1AB4|80AAF64|80A654C||||
|8086490|80A2884|80A1EF0|80AB3B8|80A69A0||||
|80864CC|80A28C0|80A1F2C|80AB3F4|80A69DC||||
|80864F4|80A28E8|80A1F54|80AB41C|80A6A04||||
|80866EC|80A2B50|0|80AB6A4|80A6C8C||||
|8087C60|80A3FC8|80A3354|80AD244|80A882C||||
|806DD84|80A57A8|80A6384|80AEB98|80A87DC||||
|0|80A6CA8|80A6004|80B032C|80AB874||||
|0|80A6CBC|80A6018|80B0340|80AB888||||
|807CFA4|80A98C8|80A89B4|80B1460|80AC9C0||||
|0|80A9CE4|80A8DD0|80B187C|80ACDDC||||
|0|80A9D28|80A8E14|80B18C0|80ACE20||||
|0|80AA1E8|80A92D4|80B1D74|80AD2D4||||
|0|80AA390|80A947C|80B1F1C|80AD47C||||
|0|80AA45C|80A9580|80B2020|80AD580||||
|0|80AB7F4|80AA92C|80B33E0|80AE964|loadGradientPalette|void loadGradientPalette(void *palette1, void *palette2, int a3, int paletteSlot, int a5, _6CStruct *parent)|调色板渐变|
|0|80ABB94|80AACB8|80B3804|80AEBCC||||
|8089578|80AD190|80ADAF8|80B4B34|0||||
|808A14C|80AD968|80ACA90|80B5224|80AFF1C||||
|0|80ADD5C|80ACE34|80B5640|80B0A24|SetBonusContentClaimed|int SetBonusContentClaimed(int a1)||
|808A418|80AEA10|80B0294|80B62A8|80B060C||||
|0|80B0170|80AF344|80B7B2C|80B2F3C||||
|0|80B0EBC|80B0088|80B8A88|80B3EDC||||
|808F470|80B75DC|80B67D0|80BADE8|80B6264||||
|809CBB4|80BF42C|80BE8E8|80D5248|80D0550|ClearChain|[void ClearChain(void *x)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L301)||
|809CBC8|80BF440|80BE8FC|80D525C|80D0564|Clear64byte|[void Clear64byte(void *x)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L307)||
|804BF40|8055718|8054F30|805B80C|805AA68||||
|8056E34|8063094|80628AC|806F038|806CD14||||
|8056EC4|8063124|806293C|806F0C8|806CDA4||||
|0|80933F0|8092AE4|809C360|809A08C||||
|0|80B0D64|80AFF30|80B8930|80B3D84||||
|0|800463C|8004760|8002EB4|8002F64|MarkProc|_BYTE *MarkProc(int a1, char a2)||
|0|800ACDC|800AD34|8011554|8011468|SetPopupNumber|int SetPopupNumber(int result)||
|8028C88|802E170|802DCB0|80309D4|8030A84||||
|0|8050FE4|8050808|80569CC|8055A28|.gcc2_compiled._6|int gcc2_compiled__6()||
|8057F40|8064814|806402C|8070EF0|806E93C||||
|806BA90|807A0FC|807992C|80860F0|8083DC8|GetGlobalEventIdStorageSize|signed int GetGlobalEventIdStorageSize()||
|8086088|80A2440|80A1AAC|80AAF5C|80A6544||||
|809C178|80BE9F0|80BDEAC|80D480C|80CFB14||||
|809DD2C|80C05AC|80BFA68|80D63D4|80D16D8|SVC_Sqrt|void SVC_Sqrt()||
|80478DC|8050BF8|805041C|80564F0|8055554||||
|0|808512C|8084730|808DEDC|808BBCC|GetCameraMovementSpeedMaybe|signed int GetCameraMovementSpeedMaybe()||
|0|808F740|808EE04|8098674|8096390||||
|0|8004644|8004768|8002EBC|8002F6C|SetProcEndHandler|int SetProcEndHandler(int result, int a2)||
|8071760|800A378|0|8006DDC|8006ED8|MapEventEngineExists|bool MapEventEngineExists()||
|8014288|8014090|8013B70|8013A50|8013998||||
|8018540|8019028|8018C38|8019038|8019360|SetUnitLeaderCharId|[inline void SetUnitLeaderCharId(struct Unit* unit, int charId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L336)||
|8057F4C|8064820|8064038|8070EFC|806E948||||
|0|8079888|80790B8|80855FC|80832C4||||
|0|807988C|80790BC|8085600|80832C8||||
|806BA9C|807A108|8079938|80860FC|8083DD4|GetLocalEventIdStorageSize|signed int GetLocalEventIdStorageSize()||
|8070CA8|8082DAC|808204C|808B818|80895A8|GetLastHelpBoxInfo|[const struct HelpBoxInfo* GetLastHelpBoxInfo(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2627)||
|0|800457C|80046A0|8002DE4|8002E94|BreakProcLoop|int BreakProcLoop(int result)||
|0|8004AA8|8004BCC|8003328|80033DC|nullsub_83|void nullsub_83()||
|0|800527C|80053A0|8003BC0|0||||
|0|8005440|8005570|8003D80|8003E50|Text_GetXCursor|int Text_GetXCursor(int a1)||
|0|8005444|8005574|8003D84|8003E54|Text_SetXCursor|int Text_SetXCursor(int result, char a2)||
|0|8005450|8005580|8003D90|8003E60|Text_SetColorId|int Text_SetColorId(int result, char a2)||
|0|8005454|8005584|8003D94|8003E64|Text_GetColorId|int Text_GetColorId(int a1)||
|0|8005458|8005588|8003D98|8003E68|Text_SetParameters|int Text_SetParameters(int result, char a2, char a3)||
|0|8006C2C|8006D9C|80056AC|80057A4|GetFaceDisplayBits|int GetFaceDisplayBits(int a1)||
|0|800796C|8007ADC|80063D8|80064D4||||
|0|8009E60|8009FD0|80088FC|8008A00|GetLastDialoguePromptResult|int GetLastDialoguePromptResult()||
|0|800ACD0|800AD28|8011548|801145C|SetPopupItem|__int16 SetPopupItem(__int16 result)||
|8013CE4|80136C8|80131A8|8013048|8012F90|GetNoCompDataSize|int GetNoCompDataSize(_DWORD *a1)||
|0|8013B44|8013624|8013504|801344C|GetPaletteFadeBuffer|__int16 *GetPaletteFadeBuffer()||
|801599C|80157A4|8015328|80153A4|8015380|GetGameLogicLock|int GetGameLogicLock()||
|8018CDC|8019838|8019450|8019860|8019B88|nullsub_8|[void nullsub_8(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L335)||
|801A558|801B570|801B190|801B668|801B998|SetWorkingBmMap|[inline void SetWorkingBmMap(u8** map)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L18)||
|801A5A4|801B5BC|801B1DC|801B6B0|801B9E4|GetWorkingMoveCosts|[inline s8* GetWorkingMoveCosts(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L844)||
|8025D58|802A940|802A490|802CA30|802CAF8|nullsub_11|void nullsub_11()||
|8028914|802DDFC|802D93C|8030660|8030710|nullsub_12|void nullsub_12()||
|0|802EBB0|802E6E4|8031430|80314E4|GetTacticianName|[char* GetTacticianName(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1366)||
|8029684|802EBCC|802E700|803144C|8031500|GetConvoyItemArray|__int16 *GetConvoyItemArray()||
|8029F74|802F5B8|802F0EC|8031E30|8031EE4||||
|0|8039454|8038FA0|803DE54|803DEC4|ShouldAiNotBattle|int ShouldAiNotBattle()||
|8040098|80489C8|80481DC|804D57C|804C7DC||||
|804254C|804B950|804B174|8050A9C|804FD28|GetTargetListSize|int GetTargetListSize()||
|804256C|804B970|804B194|8050ABC|804FD48||||
|8042578|804B97C|804B1A0|8050AC8|804FD54|.gcc2_compiled._5|int gcc2_compiled__5()||
|0|8050FF0|8050814|80569D8|8055A34||||
|804C4F4|8055CCC|80554E4|805BDC0|805B01C|SetBattleAnimArenaFlag|int SetBattleAnimArenaFlag(int result)||
|804C500|8055CD8|80554F0|805BDCC|805B028|GetBattleAnimArenaFlag|int GetBattleAnimArenaFlag()||
|8057F58|806482C|8064044|8070F08|806E954||||
|805BDB4|8067EC8|80676DC|8073F88|8071AA4|Get20200AC|int Get20200AC()||
|805E574|806AC98|806A4B8|8077390|8074F58|nullsub_18|void nullsub_18()||
|806BA88|807A0F4|8079924|80860E8|8083DC0|GetGlobalEventIdStorage|char *GetGlobalEventIdStorage()||
|806BA94|807A100|8079930|80860F4|8083DCC|GetLocalEventIdStorage|char *GetLocalEventIdStorage()||
|806EACC|80807CC|807FA14|8089088|8086DCC|GetLastStatScreenUid|[int GetLastStatScreenUid(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L485)||
|0|80807D8|807FA20|8089094|8086DD8|SetLastStatScreenUid|[void SetLastStatScreenUid(int uid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L490)||
|806EAE4|80807E4|807FA2C|80890A0|8086DE4|SetStatScreenConfig|[void SetStatScreenConfig(int config)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L495)||
|8071830|8083AC0|80830C0|808C74C|808A43C||||
|0|809BA14|809B040|80A487C|80A0A94|.gcc2_compiled._17|int gcc2_compiled__17()||
|0|80A0F08|80A057C|80A976C|80A4D28|GetBonusContentClaimFlags|int GetBonusContentClaimFlags()||
|0|80A0F14|80A0588|80A9778|80A4D34|SetBonusContentClaimFlags|int SetBonusContentClaimFlags(int result)||
|8095D40|80B10CC|80B02A8|80B8C78|80B40E4||||
|809BF4E|80BE7C6|80BDC82|80D45E2|80CF8EA|nullsub_88|int nullsub_88(int a1, int a2, int a3, int (*a4)(int))||
|809C424|80BEC9C|80BE158|80D4AB8|80CFDC0|nullsub_89|int nullsub_89(int a1, int a2, int a3, int (*a4)(int, int, int))||
|0|80C054C|80BFA08|80D6368|80D1670|BgAffineSet|void BgAffineSet()||
|809DCD8|80C0550|80BFA0C|80D636C|80D1674|CpuFastSet|void CpuFastSet()||
|809DCDC|80C0554|80BFA10|80D6370|80D1678|CpuSet|void CpuSet()||
|809DCE0|80C0558|80BFA14|80D6374|80D167C|Div|void Div()||
|809DCE4|80C055C|80BFA18|80D637C|80D1684|Mod|int Mod(int a1, int a2)||
|809DCF0|80C0568|80BFA24|80D6390|80D1690|LZ77UnCompVram|void LZ77UnCompVram()||
|809DCF4|80C056C|80BFA28|80D6394|80D1694|LZ77UnCompWram|void LZ77UnCompWram()||
|0|80C0570|80BFA2C|80D6398|80D1698|SVC_Multiboot|void SVC_Multiboot()||
|809DCF8|80C0578|80BFA34|80D63A0|80D16A0|ObjAffineSet|void ObjAffineSet()||
|809DD30|80C05B0|80BFA6C|80D63D8|80D16DC|VBlankIntrWait|void VBlankIntrWait()||
|809DF14|80C0794|80BFC50|80D65C0|80D18C4|BXR1|int BXR1(int a1, int (*a2)(int))||
|809DF18|80C0798|80BFC54|80D65C4|80D18C8|BXR2|int BXR2(int a1, int a2, int a3)||
|809DF1C|80C079C|80BFC58|80D65C8|80D18CC|BXR3|int BXR3(int a1, int a2, int a3, int (*a4)(int))||
|809DF20|80C07A0|80BFC5C|80D65CC|80D18D0|BXR4|int BXR4(void)||
|0|80C07A4|80BFC60|80D65D0|80D18D4|BXR5|int BXR5(int a1)||
|0|80C07A8|80BFC64|80D65D4|80D18D8|BXR6|int BXR6(int a1)||
|809DF2C|80C07AC|80BFC68|80D65D8|80D18DC|BXR7|int BXR7(int a1)||
|809DF34|80C07B4|80BFC70|80D65E0|80D18E4|BXR9|int BXR9(int a1, int a2)||
|809DF38|80C07B8|80BFC74|80D65E4|80D18E8|BXR10|int BXR10()||
|809DFE0|80C0860|80BFD1C|80D668C|80D1990|nullsub_1|void nullsub_1()||
|805C308|80684B0|8067CC4|80748E4|8072400||||
|0|8007774|80078E4|80061BC|80062B8||||
|0|8007860|80079D0|80062C8|80063C4||||
|0|8009D94|8009F04|8008830|8008934||||
|80283FC|802D8E4|802D424|8030144|80301F4|AllocWeatherParticles|[void AllocWeatherParticles(unsigned weatherId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L327)||
|0|80047C4|80048E8|8003044|80030F4|ProcInst01_SetName|signed int ProcInst01_SetName(int a1)||
|0|800484C|8004970|80030C8|800317C|ProcInst03_SetOnCycle|int ProcInst03_SetOnCycle(int a1)||
|0|8004930|8004A54|80031AC|8003260|ProcInst0B_Nop|signed int ProcInst0B_Nop(int a1)||
|0|80049B4|8004AD8|8003234|80032E8|ProcInst13_Nop2|signed int ProcInst13_Nop2(int a1)||
|0|8004A3C|8004B60|80032BC|8003370|ProcInst15_Nop3|signed int ProcInst15_Nop3(int a1)||
|0|8013198|8012AE0|8009E3C|8009EDC|GameControl_GetChapterIdToProc|char *GameControl_GetChapterIdToProc(int a1)||
|0|80131A8|8012AF0|8009E4C|8009EEC|GameControl_GetChapterIdFromProc|int GameControl_GetChapterIdFromProc(int a1)||
|80146B0|80144B8|8013F98|8013E20|8013D68|StartFadeInBlackMedium|int StartFadeInBlackMedium()||
|80146BC|80144C4|8013FA4|8013E2C|8013D74|StartFadeInBlackSlow|int StartFadeInBlackSlow()||
|80146C8|80144D0|8013FB0|8013E38|8013D80|StartFadeInBlackFast|int StartFadeInBlackFast()||
|80146D4|80144DC|8013FBC|8013E44|8013D8C|StartFadeOutBlackMedium|int StartFadeOutBlackMedium()||
|80146E0|80144E8|8013FC8|8013E50|8013D98||||
|80146EC|80144F4|8013FD4|8013E5C|8013DA4|StartFadeOutBlackFast|int StartFadeOutBlackFast()||
|8014758|8014560|8014040|8013EC8|8013E10||||
|8014768|8014570|8014050|8013ED8|8013E20||||
|8014870|8014580|8014060|8013EE8|8013E30||||
|8014888|8014598|8014078|8013F00|8013E48||||
|8014778|80145B0|8014090|8013F18|8013E60||||
|8014790|80145C8|80140A8|8013F30|8013E78||||
|80147A8|80145E0|80140C0|8013F48|8013E90||||
|80147F0|80145F8|80140D8|8013F60|8013EA8||||
|8014804|801460C|80140EC|8013F74|8013EBC||||
|8014818|8014620|8014100|8013F88|8013ED0||||
|801482C|8014634|8014114|8013F9C|8013EE4||||
|80147C0|8014648|8014128|8013FB0|8013EF8||||
|80147D8|8014660|8014140|8013FC8|8013F10||||
|8014840|8014678|8014158|8013FE0|8013F28||||
|8014858|8014690|8014170|8013FF8|8013F40||||
|80148A0|80146A8|8014188|8014010|8013F58||||
|80148B8|80146C0|80141A0|8014028|8013F70||||
|80148CC|80146D4|80141B4|801403C|8013F84||||
|80148F8|8014700|80141E0|8014068|8013FB0||||
|801490C|8014714|80141F4|801407C|8013FC4||||
|8014920|8014728|8014208|8014090|8013FD8||||
|8014934|801473C|801421C|80140A4|8013FEC||||
|8014948|8014750|8014230|80140B8|8014000||||
|801495C|8014764|8014244|80140CC|8014014||||
|8014970|8014778|8014258|80140E0|8014028||||
|8014984|801478C|801426C|80140F4|801403C||||
|8014998|80147A0|8014280|8014108|8014050||||
|80149CC|80147D4|80142B4|801413C|8014084||||
|801F524|8021ABC|8021644|8022700|8022738|EffectWait|signed int EffectWait()||
|801F674|80225E0|8022168|802326C|80232A4||||
|8021B88|8025114|8024C88|80265BC|8026618||||
|8022628|8026428|8025F9C|80279D4|8027A40|ResetMapSpriteHoverTimer|int ResetMapSpriteHoverTimer()||
|8022A2C|80269F4|8026568|8028094|8028100||||
|80314B8|8038024|8037B70|803CA0C|803CA7C|AiScriptCmd_06_DoNothing|_BYTE *AiScriptCmd_06_DoNothing(_BYTE *result)||
|8031740|8038238|8037D84|803CC20|803CC90|AiScriptCmd_0E_DoNothing|_BYTE *AiScriptCmd_0E_DoNothing(_BYTE *result)||
|8031748|80384C0|803800C|803CEA8|803CF18|AiScriptCmd_14_DoNothing|_BYTE *AiScriptCmd_14_DoNothing(_BYTE *result)||
|8031788|80384C8|8038014|803CEB0|803CF20|AiScriptCmd_15_DoNothing|_BYTE *AiScriptCmd_15_DoNothing(_BYTE *result)||
|8036A80|803DFC0|803DB10|8042F08|8042F84||||
|803BECC|8043780|8043068|80485EC|80486D4||||
|803F3AC|8047CB4|80474C8|804CACC|804BD2C||||
|803F504|8047E0C|8047620|804CC28|804BE88||||
|8041200|8049B4C|8049364|804E6D0|804D940||||
|8042BF8|804BFB8|804B7DC|8051160|80503EC|ekrBattle_80503EC|int ekrBattle_80503EC(int result)||
|80441EC|804D594|804CDB8|8052810|8051B18||||
|0|80560E8|8055900|805C1E8|805B444||||
|0|8056228|8055A40|805C328|805B444||||
|0|8056F40|8056758|805CFA8|805B584||||
|0|805CD7C|805C594|8061CC4|805C20C||||
|804C918|805E640|805DE58|80634D0|8060BC4||||
|804C9EC|805EBA4|805E3BC|8063A34|80623D0||||
|804D5D4|805EBF8|805E410|8063A88|8062934||||
|8054118|805EE74|805E68C|8063D04|8062988||||
|805594C|805F1B4|805E9CC|806403C|8062C04||||
|8055EC0|8060198|805F9B0|8064FE8|8062F3C||||
|8055F14|80608FC|8060114|80657BC|8063EE8||||
|8056190|8062A2C|8062244|8067974|80646B0||||
|80564D4|8062A9C|80622B4|80679E4|8065624||||
|8099794|807B7F0|807AD7C|8087B60|80825B0||||
|809A264|807BC94|807B220|8087C54|8085894||||
|809A6DC|807CD8C|807C318|8088400|8085988||||
|809A804|8080648|807F890|8088E30|8086134||||
|0|8087EBC|8087504|8090D3C|808EA68||||
|0|8087EE0|8087528|8090D60|808EA8C||||
|805CB64|80883C0|8087A38|8091238|808EF64||||
|809B01C|8089308|80889A4|80921F0|8086B74||||
|806DDC4|80AA348|80A9434|80B1ED4|80AD434||||
|809B69C|8099DC0|8099400|80CC520|80C7610||||
|809C07C|80BE8F4|80BDDB0|80D4710|80CFA18|ply_prio|int ply_prio(int a1, int a2)||
|809C09C|80BE914|80BDDD0|80D4730|80CFA38|ply_keysh|int ply_keysh(int a1, int a2)||
|809C0E0|80BE958|80BDE14|80D4774|80CFA7C|ply_vol|int ply_vol(int a1, int a2)||
|809C0F4|80BE96C|80BDE28|80D4788|80CFA90|ply_pan|int ply_pan(int a1, int a2)||
|809C108|80BE980|80BDE3C|80D479C|80CFAA4|ply_bend|int ply_bend(int a1, int a2)||
|809C11C|80BE994|80BDE50|80D47B0|80CFAB8|ply_bendr|int ply_bendr(int a1, int a2)||
|809C130|80BE9A8|80BDE64|80D47C4|80CFACC|ply_lfodl|int ply_lfodl(int a1, int a2)||
|809C154|80BE9CC|80BDE88|80D47E8|80CFAF0|ply_tune|int ply_tune(int a1, int a2)||
|809DC28|80C04A0|80BF95C|80D62BC|80D15C4|ply_xtype|[void ply_xtype(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1541)||
|809DC3C|80C04B4|80BF970|80D62D0|80D15D8|ply_xatta|[void ply_xatta(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1547)||
|809DC50|80C04C8|80BF984|80D62E4|80D15EC|ply_xdeca|[void ply_xdeca(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1553)||
|809DC64|80C04DC|80BF998|80D62F8|80D1600|ply_xsust|[void ply_xsust(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1559)||
|809DC78|80C04F0|80BF9AC|80D630C|80D1614|ply_xrele|[void ply_xrele(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1565)||
|809DC8C|80C0504|80BF9C0|80D6320|80D1628|ply_xiecv|[void ply_xiecv(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1571)||
|809DC98|80C0510|80BF9CC|80D632C|80D1634|ply_xiecl|[void ply_xiecl(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1577)||
|809DCA4|80C051C|80BF9D8|80D6338|80D1640|ply_xleng|[void ply_xleng(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1583)||
|809DCB8|80C0530|80BF9EC|80D634C|80D1654|ply_xswee|[void ply_xswee(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L1589)||
|8014738|8014540|8014020|8013E68|8013DB0||||
|8014738|8014550|8014030|8013E88|8013DD0||||
|0|801B650|801B270|801B744|801BA78|SetNewKeyStatusWith16|[void SetNewKeyStatusWith16(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L69)||
|0|801BF90|0|801BF60|801C2D0||||
|0|801BFA4|0|801BF74|801C2E4||||
|0|801BFB8|801BC08|801BF88|801C2F8||||
|0|801DD54|801D950|801DD94|801E138|SendToConvoyMenu_Draw|int SendToConvoyMenu_Draw()||
|801CF8C|801E89C|801E518|801E900|801ECA8||||
|801CFD0|801E8E0|801E55C|801E944|801ECEC||||
|802D430|800A578|800A57C|801F61C|801F198||||
|806C948|801EA6C|801E6E8|801FCC8|801F9C4||||
|806DBA0|801EC1C|801E898|8020DB8|801FFD0||||
|806DC48|801F44C|801F0C8|80217F4|80210C0||||
|0|8021A78|8021600|80226EC|8022724||||
|801ECEC|8021C80|8021808|80228C4|80228FC|RescueSelection_OnSelect|signed int RescueSelection_OnSelect(int a1, int a2)||
|801EE80|8021E14|80219EC|8022A58|8022A90|TakeSelection_OnSelect|signed int TakeSelection_OnSelect(int a1, int a2)||
|801EED0|8021E64|802199C|8022AA8|8022AE0|GiveSelection_OnSelect|signed int GiveSelection_OnSelect(int a1, int a2)||
|0|8022F34|8022ABC|8023BCC|8023C08|StaffItemSelect_TextDraw|int StaffItemSelect_TextDraw(int a1, int a2)||
|8020050|8023024|8022BAC|8023CC0|8023D00||||
|80200E8|80230BC|8022C44|8023D5C|8023DA0||||
|80202C4|8023280|8022E08|8023FD0|8024014||||
|8020320|80232D4|8022E5C|802402C|8024070||||
|802037C|8023328|8022EB0|8024088|80240CC||||
|0|8023738|8023310|80241D4|8024768|TradeTargetSelection_OnInit|int TradeTargetSelection_OnInit(int a1)||
|8020764|80238F4|8023468|80245FC|802464C||||
|802083C|802379C|8023354|802462C|80247B0||||
|0|80237E0|8023424|8024690|802421C|StealTargetSelection_OnInit|int StealTargetSelection_OnInit(int a1)||
|802083C|802386C|8023424|8024718|802467C|RescueSelection_OnConstruction|int RescueSelection_OnConstruction(int a1)||
|8020880|80238B0|0|8024760|80246E0||||
|80208E4|80238D0|8023474|80247C4|8024814||||
|802094C|807C7DC|807BD68|80247E8|8024838||||
|8021904|8024CE4|8024880|802607C|80260D8|MakeTargetListForRescueStaff|int MakeTargetListForRescueStaff(int a1)||
|802192C|8024D34|80248A8|80261D8|8026234|MakeTargetListForBerserk|int MakeTargetListForBerserk(int a1)||
|0|8024FF0|8024B64|8026588|80265E4|MakeTargetListForDanceRing|int MakeTargetListForDanceRing(int a1)||
|8099738|8007DE0|8007F50|8026614|8026670||||
|8023F48|80281C0|8027D34|8029C68|8029CDC|sub_8029CDC|[int sub_8029CDC(ProcPtr proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1060)||
|8006CD4|8005E50|8007160|802DDDC|802DE94||||
|806DFC4|801FE34|801F9CC|802DDEC|8021AFC||||
|0|802BB88|802B6D8|802DFE8|802E0B0|sub_802E0B0|[void sub_802E0B0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L906)||
|0|802BB98|802B6D8|802E008|802E0D0|sub_802E0D0|[void sub_802E0D0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L916)||
|0|802BBB8|802B6E8|802E018|802E0E0|sub_802E0E0|[void sub_802E0E0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L921)||
|0|802BBC8|802B708|802E028|802E0F0|sub_802E0F0|[void sub_802E0F0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L926)||
|0|802BBD8|802B718|802E038|802E100|sub_802E100|[void sub_802E100(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L931)||
|0|802BFE4|802BB24|802E2A4|802E36C|sub_802E36C|[void sub_802E36C(int x, int y, int turnCountdown, int turnInterval)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L142)||
|0|801001C|0|80327AC|8032860|BATTLE_DeleteLinkedMOVEUNIT|int BATTLE_DeleteLinkedMOVEUNIT(int a1)||
|806DFD0|80202A8|801FE40|803639C|802DEB4||||
|0|8034740|8034268|8037554|8037494||||
|802E460|8034770|8034298|8037584|8037494||||
|8031358|80380DC|8037C28|803CAC4|803CB34|AiScriptCmd_09_DoStaffAction|int AiScriptCmd_09_DoStaffAction(_BYTE *a1)||
|8031374|80380F8|8037C44|803CAE0|803CB50|AiScriptCmd_0A_DoStaffAction|int AiScriptCmd_0A_DoStaffAction(_BYTE *a1)||
|8031390|8038114|8037C60|803CAFC|803CB6C|AiScriptCmd_0B_DoStaffAction|int AiScriptCmd_0B_DoStaffAction(_BYTE *a1)||
|806BF70|80419BC|80412C8|804690C|80469AC||||
|806BF98|80419C8|80412D4|8046918|80469AC||||
|0|809039C|808E60C|804C44C|804B6AC||||
|80141C8|8013FD0|0|804C494|804B6F4||||
|806F588|80130DC|8012A24|804C6C0|804B920||||
|8073F1C|80233F8|8022F6C|804C6CC|804B92C||||
|80132C8|800A520|800ADA8|804E458|804D6C4||||
|0|804B1B0|804A9D4|8050294|804F520|MenuAutoHelpBoxSelect|[u8 MenuAutoHelpBoxSelect(struct MenuProc* menu)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L586)||
|0|804B28C|804AAB0|8050370|804F5FC|MenuFrozen|[u8 MenuFrozen(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L628)||
|8046848|804F8C4|804F1E8|8055114|8054224||||
|804E5E4|8058120|8057D9C|805D000|805C264|StartSpellAnimArrow|int StartSpellAnimArrow(int a1)||
|804D7C0|8057120|8056994|805D46C|805C560|spellTeyari1|int spellTeyari1(int a1)||
|804D878|80571D8|8056A4C|805D4C8|805C5BC|spellTeyari3|int spellTeyari3(AnimationInterpreter *a1)||
|804D2D4|8058584|0|805D978|805BF08|StartSpellAnimHandAxe|int StartSpellAnimHandAxe(int a1)||
|8050798|8059FC8|80597E0|806034C|805F24C||||
|80507D4|805A004|805981C|8060388|805F288||||
|8050744|8061558|8060D70|8061764|8060664||||
|8054848|805D4CC|805CE88|8062258|8061024|StartSpellAnimHeal|int StartSpellAnimHeal(int a1)||
|80549E8|805D670|0|80623BC|8061158|StartSpellAnimMend|int StartSpellAnimMend(int a1)||
|8056554|805F234|805EA4C|80640BC|8062FBC||||
|8056590|805F270|805EA88|80640F8|8062FF8||||
|80565CC|805F2AC|805EAC4|8064134|8063034||||
|805075C|805F2E8|805EB00|8064170|8063070||||
|8050798|805F324|805EB3C|80641AC|80630AC||||
|80507D4|805F360|805EB78|80641E8|80630E8||||
|8056554|805F39C|805EBB4|8064224|8063124||||
|8056590|805F3D8|805EBF0|8064260|8063160||||
|80565CC|805F414|805EC2C|806429C|806319C||||
|8056608|805F450|805EC68|80642D8|80631D8||||
|8055BF4|80615C4|8058950|8064580|8062678|StartSpellAnimSleep|int StartSpellAnimSleep(int a1)||
|804E0E8|8057C24|805940C|8064A74|8062998|StartSpellAnimHammerne|int StartSpellAnimHammerne(int a1)||
|804E448|8057F84|80598A8|8065414|8062C14|StartSpellAnimBerserk|int StartSpellAnimBerserk(int a1)||
|805027C|8060BA0|80603B8|8065C10|8064B04||||
|804E0E8|805979C|805B290|8065E08|8063214|spellThunderstorm|int spellThunderstorm(AnimationInterpreter *a1)||
|804E448|8059BF4|805BBF0|8066524|8063974|StartSpellAnimLuna|int StartSpellAnimLuna(int a1)||
|80513AC|805E650|805F400|8066B40|8064308|spellSilence|int spellSilence(AnimationInterpreter *a1)||
|0|80626BC|8061ED4|8067584|806B64C||||
|0|8062AE8|8062300|80679F4|8065634|spellRingThor|int spellRingThor(AnimationInterpreter *a1)||
|0|8062B24|806233C|8067A30|8065670|spellRingNini|int spellRingNini(AnimationInterpreter *a1)||
|0|8062B60|8062378|8067A6C|80656AC|spellRingSet|int spellRingSet(AnimationInterpreter *a1)||
|8051CD0|805E8E8|805FDBC|8067B94|8064E74|StartSpellAnimAura|int StartSpellAnimAura(int a1)||
|8053764|805F6F8|805743C|80688BC|8066514|spellShine|int spellShine(AnimationInterpreter *a1)||
|8053DC8|805FBE8|805779C|8069AC8|8067798|StartSpellAnimEvilEye|int StartSpellAnimEvilEye(int a1)||
|805595C|8060E70|8058044|8069EAC|8067B7C|StartSpellAnimNaglfar|int StartSpellAnimNaglfar(int a1)||
|8046948|804F9C4|0|806AAF8|8054328||||
|804D62C|8056C40|805713C|806AB0C|805D064|StartSpellAnimFireBreath|int StartSpellAnimFireBreath(int a1)||
|804DE4C|8057924|8057938|806AEA8|805D4D0|StartSpellAnimDarkBreath|int StartSpellAnimDarkBreath(int a1)||
|806E9E0|80202FC|801FE94|806B850|803629C||||
|804E8CC|805843C|8059E24|806C1E8|806AEF4|spellIcebreath|int spellIcebreath(AnimationInterpreter *a1)||
|804ECB8|805882C|805A3F0|806D218|806B4F8|spellThunder|int spellThunder(int a1)||
|8081E50|8020538|80200D0|806D660|8069528||||
|80567AC|8059138|805AE90|806D81C|8069EC4|StartSpellAnimCrimsonEye|int StartSpellAnimCrimsonEye(int a1)||
|809338C|8020BEC|8020784|806DC5C|806B33C||||
|8094064|802BCC0|802B800|806E470|806B938||||
|80576AC|8063ABC|80632D4|806FB44|806D764||||
|0|8065120|806426C|8071C64|806F844||||
|8012770|800F224|800F318|80727A4|80701F4||||
|806DDD4|800F230|800F324|80727B4|8070204||||
|0|8065400|8064C10|8072E74|80708CC|loadFireDragonBattleAnimationBG|void loadFireDragonBattleAnimationBG(AnimationInterpreter *AIS)||
|805CD68|8068F28|806873C|80754C4|8072FE8||||
|0|8065D20|8065530|8078D18|80768F8|FireDragonBGAnimation15|void FireDragonBGAnimation15(_6CStruct *ctx)||
|0|8014080|8014314|8079A9C|8074A54||||
|8026194|802B15C|802ACAC|807BDB4|80799A0|MU_CritFlash_Init|_BYTE *MU_CritFlash_Init(int a1)||
|8026194|8068D24|8068538|807BF24|8079B10|MU_ForceSetMaxMoveSpeed|_BYTE *MU_ForceSetMaxMoveSpeed(int a1)||
|8007604|8004758|8055E24|807C394|8079F9C|MU_AllForceSetMaxMoveSpeed_|int MU_AllForceSetMaxMoveSpeed_()||
|80990F0|800AD78|800ADD0|807CBB8|807A800|_InitFontForUIDefault|[void _InitFontForUIDefault(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L67)||
|0|8021064|8020BFC|807F9B4|807D39C||||
|0|800AEA4|800AF68|80800B4|807DD74||||
|801D140|8021954|8020BFC|8080674|807D3B4||||
|0|80215D0|803DBB8|8080D90|8077678||||
|0|80123BC|0|808112C|807EDEC||||
|0|8023708|802327C|808187C|807F53C|MapAnimLevelUpProc_ClearLevelUpSmallText|int MapAnimLevelUpProc_ClearLevelUpSmallText()||
|8048D98|80351C8|8062820|808189C|807F55C||||
|0|807AF3C|807A4C8|8081954|807F614|NewBG0Shaker|int NewBG0Shaker()||
|8098BB4|8033648|8033118|8081968|806C14C||||
|0|801EA54|801E6D0|80831C4|8080E84||||
|0|80803B8|80214DC|8083348|807FCA8||||
|8056F94|805226C|8062A0C|8084188|8081E48|UnitKakudai3|void UnitKakudai3(_6CStruct *a1)||
|801C620|805660C|8062DFC|8084194|8081E54||||
|80992D0|807B1D8|807A764|80848F0|807F628|BG0Shaker_Init|_WORD *BG0Shaker_Init(int a1)||
|0|807A648|8069D00|8086E00|8084B34||||
|0|807A670|8079BD4|8086E2C|8084B34||||
|806C1B4|807A7A4|8079D30|8086FF4|8084D28||||
|0|807A7F0|8079D7C|8087004|8084D38||||
|0|807A800|8079D8C|8087014|8084D48||||
|0|807A810|8079D9C|8087024|8084D58||||
|806C1F4|807A820|8079DAC|8087034|8084D68||||
|0|807A830|8079DBC|8087044|8084D78||||
|806C244|807A840|8079DCC|8087054|8084D88||||
|0|807A850|8079DDC|8087064|8084D98||||
|0|807A860|8079DEC|8087074|8084DA8||||
|0|807A870|8079DFC|8087084|8084DB8||||
|0|807A880|8079E0C|8087094|8084DC8||||
|0|807A890|8079E1C|80870A4|8084DD8||||
|806C0B8|807A8A0|8079E2C|80870B4|8084DE8||||
|806C0C8|807A8B0|8079E3C|80870C4|8084DF8||||
|806C0D8|807A8C0|8079E4C|80870D4|8084E08||||
|806C0E8|807A8D0|8079E5C|80870E4|8084E18||||
|806C0F8|807A8E0|8079E6C|80870F4|8084E28||||
|806C108|807A8F0|8079E7C|8087104|8084E38||||
|806C118|807A900|8079E8C|8087114|8084E48||||
|806C128|807A910|8079E9C|8087124|8084E58||||
|806C138|807A920|8079EAC|8087134|8084E68||||
|806C148|807A930|8079EBC|8087144|8084E78||||
|806C1E4|807A9C0|8079F4C|8087184|8084EB8||||
|806C1F4|807A9D0|8079F5C|8087194|8084EC8||||
|806C204|807A9E0|8079F6C|80871A4|8084ED8||||
|806C214|807AB20|807A0AC|80872E4|8085018||||
|806C224|807AB30|807A0BC|80872F4|8085028||||
|806C234|807AB40|807A0CC|8087304|8085038||||
|806C244|807AB50|807A0DC|8087314|8085048||||
|806C254|807AB60|807A0EC|8087324|8085058||||
|806C264|807AB70|807A0FC|8087334|8085068||||
|806C274|807AB80|807A10C|8087344|8085078||||
|806C284|807AB90|807A11C|8087354|8085088||||
|806C294|807ABA0|807A12C|8087364|8085098||||
|806C2A4|807ABB0|807A13C|8087374|80850A8||||
|806C2B4|807ABC0|807A14C|8087384|80850B8||||
|806C34C|807ABD0|807A15C|8087394|80850C8||||
|806C35C|807ABE0|807A16C|80873A4|80850D8||||
|806C36C|807ABF0|807A17C|80873B4|80850E8||||
|806C37C|807AC00|807A18C|80873C4|80850F8||||
|806C38C|807AC10|807A19C|80873D4|8085108||||
|806C39C|807AC20|807A1AC|80873E4|8085118||||
|0|807AC30|807A1BC|8087408|808513C||||
|0|807AC44|807A1D0|808741C|8085150||||
|0|807AC58|807A1E4|8087430|8085164||||
|0|807AC80|807A20C|8087444|8085178||||
|0|807AC94|807A220|8087458|808518C||||
|80793F0|807BC54|802B7EC|8087640|8085374|StartGameOver|int StartGameOver(signed int a1)||
|0|807AF24|807A4B0|80876C8|8084B60||||
|8098A90|807AF30|807A4BC|80876D4|8085408||||
|807B888|807BCD8|807B1E0|8087EC8|8085374||||
|805AB50|8063008|8063048|8088BE4|8086928||||
|8073F28|80478A4|80470B8|8089D58|8087ACC||||
|8041828|804AA4C|804A264|8097564|80853FC||||
|0|8065430|8064C40|80975A0|8095284|setSpecialAnimationEffectInfoState4|void setSpecialAnimationEffectInfoState4(AnimationInterpreter *AIS)||
|0|80631F4|806342C|8097ED4|8095BF4||||
|0|80900E8|80AAC2C|809894C|809CCE0||||
|0|807CD78|807C304|809A7D8|8098500||||
|0|8099810|0|809E0E8|809BE24||||
|0|807D120|807C6AC|809E124|809BE60||||
|0|80960C4|8095894|809EF78|0||||
|0|8096970|8096198|809FA74|809D7D4||||
|0|8096938|8096160|809FAAC|809D80C||||
|0|8097DD4|80961D0|809FAE4|809D844||||
|809B2F4|808FED8|808F598|80A2DF0|808FF10||||
|0|809B858|809AEA0|80A46C0|0||||
|0|809B874|0|80A46DC|0||||
|80841EC|80478B0|80470C4|80A7670|80A2C2C||||
|805DEBC|80635E4|8064AB0|80AB73C|80A6D24||||
|0|80A4618|80A39A4|80AD9A4|80A8FD0||||
|0|80B45DC|80B37A4|80AE850|80A9DFC||||
|0|80A5764|0|80AEB54|80AA100||||
|805E448|8063830|80655D4|80AEF98|80AA4B4||||
|0|802822C|0|80AF540|80AAA6C||||
|0|80A6278|80A5590|80AF698|80AABC4||||
|0|802BBE8|802B728|80B0B2C|80AC078||||
|0|80AB164|80AA29C|80B2E50|80AE3D4||||
|0|80AB28C|80AA3C4|80B2E74|80AE33C||||
|0|80AB2B0|80AA3E8|80B2E98|80AE3F8||||
|0|80AB21C|80AA434|80B2EBC|80AE440||||
|0|80ABAEC|80AAC10|80B3760|80AEB28||||
|0|80ABB08|0|80B377C|8096668||||
|8036E00|808046C|807ED2C|80B505C|80B0444||||
|805E43C|8066480|80431A0|80B75EC|80AEB1C||||
|8094EE8|80B03B4|0|80B7E4C|80B325C||||
|8094214|809BA00|80A4E20|80B8F30|80B43A8||||
|806E04C|80A5B0C|80A6D9C|80B92D4|80B474C||||
|806E060|80A5E04|80A511C|80B92E8|80B4760||||
|0|80A7044|80A6E64|80B92FC|80B4774||||
|0|80A7A94|80A7194|80B9540|80B49B8||||
|8079D70|80A80A4|80B85D4|80B95C8|80B4A40||||
|8022618|8026418|8025F8C|80BA244|80B56C0||||
|807B888|80A82F0|0|80BA600|80B5A7C||||
|8023FB4|80A2BE8|8027DA0|80BA684|80B5B00||||
|8069DD8|806A4E0|8065C90|80BD0CC|80B8200||||
|808958C|80AD664|80AC78C|80BD548|80B8680||||
|808D368|808144C|80806F0|80BE694|80B97F8||||
|805FF50|8065DC4|8065E48|80BE6A0|80B9804||||
|8024020|8028298|8027E0C|80BE6BC|80B9820||||
|8093120|807B8CC|807AE58|80BE830|80B9994||||
|801FF60|8065EA0|80698AC|80BEC4C|80B9DB8||||
|8092450|809EE0C|809E3F4|80BF950|80BAB00||||
|0|807BBEC|807B178|80BFAA8|80BAC58|GmapUnit_Destruct|int GmapUnit_Destruct(int a1)||
|80740E4|807F438|807E67C|80C0548|80BB718|GmapScreen2_Destruct|int GmapScreen2_Destruct(int a1)||
|0|80310FC|8030C10|80C13DC|80BC59C||||
|8092424|807FF4C|807F184|80C184C|80BCA0C||||
|806DDCC|80AF93C|80AEA04|80C221C|80BD410||||
|0|80B9270|80B90AC|80C2A10|80BDC28|NewMapMU|int NewMapMU(signed int a1)||
|807B0DC|80B8A38|80B7C54|80C3BB8|80BEDCC||||
|8098C94|807FF5C|807F194|80C41E0|80BF3F4||||
|802A798|807FF6C|807F1A4|80C4908|80BFB24||||
|8036B28|807FF7C|807F1B4|80C4AE4|80BFD00||||
|0|807FF8C|807F1C4|80C4FE4|80C0200||||
|806E730|8091370|8090A2C|80C5D70|80C0FA4||||
|8069C1C|806A08C|806B8DC|80C6190|80C13CC||||
|0|80BAAB8|80B9FC4|80C8444|80C368C||||
|0|80BAACC|80BA350|80C8C38|80C3E80||||
|0|80AD914|80ACA3C|80C8E00|80C4048||||
|8092424|80AEA94|80ADB7C|80C8FE0|80C4228||||
|8048D98|806C0C8|80BCE14|80C949C|80C46E4||||
|8090F34|80BAE58|80BC5B8|80C9630|80C4878||||
|8093114|80AFDF8|80AEEC0|80CA1B8|80C5400||||
|804CC78|807E5D4|0|80CB310|80C63C4||||
|0|80A9578|80BAB0C|80CB390|80C6444||||
|0|8066030|8065840|80CC0BC|80C71B0||||
|8056DA8|807EF5C|0|80CD598|80C85FC||||
|8056F94|807FB34|0|80CD620|80C8684||||
|0|80BD83C|80BCE20|80D2358|80CD668||||
|0|80BD978|0|80D2AD8|80CDDDC|StartPromotionMenuSelect|int StartPromotionMenuSelect(signed int a1)||
|8098ACC|80BBFA0|80BB524|80D2FE0|80CE2E4||||
|0|80BCB00|80BC0F8|80D2FEC|80CE2F0||||
|809D32C|80BFBA4|80BF060|80D59C0|80D0CC8|CgbModVol|[void CgbModVol(struct CgbChannel *chan)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/m4a.c#L873)||
|0|80ABD24|80AAE40|80B3984|80AED64||||
|0|800749C|800760C|8005EE4|8005FE0||||
|0|8007A5C|8007BCC|80063F8|80064F4|NewFace2|int NewFace2(int a1, int a2, __int16 a3, int a4, int a5)||
|0|80A71EC|80A652C|80B08F0|80ABE3C||||
|8030270|8036DD8|8036900|803B810|803B808|AiFindUnitSafestTileToMoveTo|bool AiFindUnitSafestTileToMoveTo(int a1, _WORD *a2)||
|0|806238C|8061BA4|80672D0|0||||
|8035734|803CC50|803C79C|8041B9C|8041C1C|SioVSync_8041C1C|int SioVSync_8041C1C()||
|8039E04|80415D4|8040ED8|80464FC|8046580||||
|0|8061600|8060E18|8066560|8064EB0||||
|0|8019C50|8019868|8019C78|8019FA0|RefreshUnitMapAndVision|int RefreshUnitMapAndVision()||
|0|8060014|805F82C|8064E64|8063D64||||
|8083688|809EAAC|809E094|80A730C|0|PrintPassword|int PrintPassword(int a1, int a2)||
|802C8F8|8032870|8032340|80353E8|80354E0||||
|8022CB4|8026D24|8026898|80283C8|8028434|ProcessTurnSupportExp|[void ProcessTurnSupportExp(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L178)||
|80182D0|8018A4C|801865C|80188EC|8018BD8|CanUnitMove|[s8 CanUnitMove(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1301)||
|0|80B98F8|80B8D98|80BBE08|80B734C||||
|803C094|80448E8|80440E8|8049694|8048884||||
|805108C|805A8B8|805A0D0|8060C60|805FB60||||
|8033D5C|803B104|803AC50|803FB38|803FBB8||||
|0|80BA204|80B96FC|80BC638|80B7BD8||||
|0|80075F0|8007760|8006038|8006134||||
|8088870|80A4D80|80A4108|80AE100|80A96EC||||
|0|803AF8C|803AAD8|803F9C0|803FA40|AiTryDoStaff|int AiTryDoStaff(int a1)||
|0|8043BCC|80433F0|80489C8|0||||
|805BDC0|8067ED4|80676E8|8073F94|8071AB0||||
|804F03C|8058BB0|80583C8|805EC5C|805DB5C|EfxFire_Main|int EfxFire_Main(int a1)||
|80177C4|8017E0C|8017A1C|8017C40|8017F20|UnitAutolevelWExp|[void UnitAutolevelWExp(struct Unit* unit, const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L736)||
|0|8083BB4|80831B4|808C840|808A530||||
|8034094|803B44C|803AF98|803FE80|803FF00||||
|802E5C4|8034EBC|80349E4|8039828|80397B0|BskOrder_Init|int BskOrder_Init(signed int a1)||
|8030BDC|8037960|80374AC|803C340|803C3B0||||
|8035DC8|803D2E4|803CE34|8042238|80422B8||||
|80503F8|8059C30|8059448|8060014|805EF14||||
|8051D0C|805B6B4|805AECC|8060FC0|805FEC0|DivineSfxLoop|int DivineSfxLoop(int a1)||
|0|80BA640|80B9B38|80BCA74|0||||
|80275B0|802C8EC|802C42C|802EC08|802ECD0|GetRescueStaffeePosition|int GetRescueStaffeePosition(int a1, int a2, int *a3, int *a4)||
|0|8043D14|8043538|8048B10|0||||
|0|8020D90|8020928|8021960|8021C68||||
|0|8098430|8097CAC|80A1610|809F370||||
|0|8016620|80161A4|801631C|8016574|CanUnitUseWeapon|[s8 CanUnitUseWeapon(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L305)||
|8018E7C|80199D8|80195F0|8019A00|8019D28|UpdateBmMapDisplay|[void UpdateBmMapDisplay(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L417)||
|8021AA8|8024E88|80249FC|802632C|8026388|MakeTargetListForLatona|int MakeTargetListForLatona(int a1)||
|803372C|803A904|803A450|803F33C|803F3AC||||
|0|805F734|805EF4C|80645BC|80634BC||||
|0|80AFD28|80AEDF0|80B751C|80B2904||||
|80308B0|8037610|803715C|803BFF4|803C064|GenBlueUnitAiStats|int GenBlueUnitAiStats()||
|802E750|8035044|8034B6C|80399B0|8039938|GetUnitAiPriority|int GetUnitAiPriority(int a1)||
|8032C2C|8039DF0|803993C|803E808|803E878|AiUnitGetClosestEscapePointData|char *AiUnitGetClosestEscapePointData()||
|0|80096E0|8009850|80081A0|80082A4||||
|802B154|8030D08|803081C|8033700|80337F0||||
|8018D90|80198EC|8019504|8019914|8019C3C|RenderBmMap|[void RenderBmMap(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L379)||
|806EA24|808068C|807F8D4|8088E74|8086BB8|StartScreenMenuScrollingBg|int StartScreenMenuScrollingBg(signed int a1, int a2, signed int a3)||
|8014E98|8014CA0|8014824|80145DC|80145C8||||
|8033ECC|803B27C|803ADC8|803FCB0|803FD30||||
|8036D60|803E2A4|803DDF4|80431EC|8043268||||
|0|804A13C|8049954|804ECBC|804DF38||||
|0|807B7F8|807AD84|8087B68|808589C||||
|0|8021390|8020F24|8021F08|80220A8||||
|8021198|8024554|80240C8|80255F4|8025644|MakeTargetListForSupport|int MakeTargetListForSupport(int a1)||
|8029ABC|802F0E4|802EC18|8031960|8031A14|GetUnitArenaWeight|int GetUnitArenaWeight(_DWORD *a1, int a2)||
|0|80ABF30|80AB04C|80B3B84|80AEF64||||
|80303F8|8036F64|8036A8C|803B99C|803B994|AiGetActiveUniChestKeyItemSlot|signed int AiGetActiveUniChestKeyItemSlot(_BYTE *a1)||
|803DD30|8046604|8045E18|804B3B0|804A614||||
|804FC64|80597D8|8058FF0|805F890|805E790||||
|0|8097178|80969F4|80A02F4|809E054||||
|0|80982D8|8097B64|80A14B8|809F218||||
|0|8098384|8097C08|80A1564|809F2C4||||
|8034178|803B558|803B0A4|803FF8C|804000C||||
|8024144|8028724|8028298|802A198|802A20C||||
|803D208|8045A7C|804528C|804A85C|8049A60||||
|807ACFC|808F24C|808E910|809819C|8095EBC||||
|8014160|8013F68|8013A48|8013928|8013870||||
|0|805C77C|805BF94|80616E8|80605E8|loadHazymoonOBJ2|void loadHazymoonOBJ2(void *AIS)||
|804E484|8057FC0|80577D8|805E004|805CF04||||
|802503C|8029A1C|802956C|802B874|802B92C||||
|80342C4|803B6B0|803B1FC|80400E4|8040164||||
|0|8081278|808051C|8089BAC|8087920||||
|80344AC|803B8A0|803B3EC|80402D4|8040354||||
|0|80932DC|80929D0|809C250|8099F7C||||
|803B730|8042F5C|80428B8|8047E10|8047EF8||||
|8050E1C|805A648|8059E60|80609F0|805F8F0||||
|803462C|803BA2C|803B578|8040460|80404E0||||
|8019028|8019B84|801979C|8019BAC|8019ED4||||
|8018F5C|8019AB8|80196D0|8019AE0|8019E08||||
|0|80066E0|8006850|8005110|8005208|_DisplayAIS|int DisplayAIS(int a1)||
|0|8064478|8063C90|80705E8|0||||
|8034CC0|803C0DC|803BC28|80409F8|8040A78||||
|809AA98|808FF58|808F618|80987D8|80964F4||||
|0|8058158|8057970|805E19C|805D09C||||
|804ECF4|8058868|8058080|805E914|805D814|EfxThunder_Main|int EfxThunder_Main(int a1)||
|8055F60|805EC44|805E45C|8063AD4|80629D4||||
|80567E8|805F4C8|805ECE0|8064350|8063250||||
|8039B5C|8041328|8040C24|8046250|80462D4||||
|0|8013C48|8013728|8013608|8013550|WriteFadedPaletteFromArchive|int WriteFadedPaletteFromArchive(int a1, int a2, int a3, int a4)||
|0|80BA960|80B9E58|80BCD74|0||||
|804E124|8057C60|8057478|805DC9C|0||||
|8017C84|801835C|8017F6C|80181F4|80184E0|UnitGetDeathDropLocation|[void UnitGetDeathDropLocation(struct Unit* unit, int* xOut, int* yOut) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1004)||
|0|8020C44|80207DC|8021828|8021B30||||
|802E7C8|80350BC|8034BE4|8039A28|80399B0|MakeAiUnitQueue|int MakeAiUnitQueue()||
|8032AE0|8039C90|80397DC|803E6A8|803E718|AiUnitTryHealSelf|signed int AiUnitTryHealSelf()||
|808667C|80A2AE0|0|80AB634|80A6C1C||||
|0|806196C|8061184|80668CC|806521C||||
|0|801F758|801F2F0|801FA48|801FDBC||||
|0|80AF278|80AE360|80B6A00|80B1DE8||||
|8037F04|803F454|803EFC4|80443C4|8044430||||
|8057860|8063B64|806337C|806FBEC|806D8D0||||
|8036CB0|803E1F0|803DD40|8043138|80431B4||||
|0|807B5D0|807AB5C|808793C|8085670||||
|8044F90|804E28C|804DAB0|805351C|805282C||||
|0|8097224|8096A98|80A03A0|809E100||||
|805EED4|8084DD4|80843D8|808DB80|808B870||||
|802E914|8035208|8034D30|8039B78|8039B00|CpDecide_Main|int CpDecide_Main(int a1)||
|0|803A6B8|803A204|803F0EC|803F15C||||
|802EC24|803551C|8035044|8039EA4|8039E2C|AiDecisionMaker_AiScript2|int AiDecisionMaker_AiScript2()||
|0|80A419C|80A351C|80AD3FC|80A89E4||||
|803C8F0|804513C|8044940|8049EF4|80490EC||||
|8038990|8040148|803FA3C|80450A8|8045108|NameSelect_8045108|int NameSelect_8045108(int a1)||
|805BCA8|8067DB4|80675C8|8073E74|8071990|SomeBattlePlaySound_8071990|int SomeBattlePlaySound_8071990(int a1, int a2)||
|804E908|8058478|8057C90|805E4C4|805D3C4||||
|802107C|8024424|8023F98|80254C4|8025514||||
|80561DC|805EEC0|805E6D8|8063D50|8062C50||||
|80197E8|801A424|801A044|801A508|801A82C|UnitApplyWorkingMovementScript|[void UnitApplyWorkingMovementScript(struct Unit* unit, int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L280)||
|803BAE0|8043390|8042CB8|80481F8|80482E0||||
|8021480|8024848|80243BC|802599C|80259EC|MakePoisonDamageTargetList|int MakePoisonDamageTargetList(int a1)||
|803FEB4|80487E4|8047FF8|804D398|804C5F8||||
|0|8010630|80101CC|8011870|8011784||||
|805BA2C|8067B38|806734C|8073C08|8071714||||
|802097C|8023C9C|8023810|8024C9C|8024CEC|GetPhaseAbleUnitCount|[int GetPhaseAbleUnitCount(int faction) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L8)||
|0|809E9DC|809DFC4|80A723C|0||||
|8020064|8023038|8022BC0|8023CD4|8023D14||||
|80825B8|809115C|8090818|8099B70|809788C||||
|805B13C|8067248|8066A5C|8073348|8070E24||||
|8032838|80399E8|8039534|803E400|803E470||||
|80830AC|809E3FC|809D9E4|80A6C60|0||||
|800ACA4|80090C0|8009230|8007B48|8007C4C||||
|8057578|806390C|8063124|806F994|806D678||||
|803A9FC|8042224|8041B48|8047140|804720C||||
|803D3C0|8045C34|8045448|804AA0C|8049C18||||
|805794C|8063C40|8063458|806FCC8|806D9AC||||
|0|8007FC0|8008130|8006A50|8006B4C|DialogueSkipInputListener_OnLoop|int DialogueSkipInputListener_OnLoop(int a1)||
|802EC5C|8035578|80350A0|8039F00|8039E88|AiTargetCursor_Main|int AiTargetCursor_Main(int a1)||
|0|803490C|8034434|8037720|8037660|ExecTrap|int ExecTrap(signed int a1, int a2, __int16 a3)||
|0|8006D1C|8006E8C|800579C|8005894||||
|804DF80|8057ABC|80572D4|805DAF8|805CD5C|shooter|void shooter(_6CStruct *ctx)||
|0|809D450|809CA38|80A5E48|80A207C||||
|0|80964A0|8095CA8|809F59C|809D300||||
|8025C7C|802A860|802A3B0|802C94C|802CA14|BeginBattleAnimations|int BeginBattleAnimations()||
|80430C4|804C440|804BC64|8051674|8050940|ekrBattle_8050940|int ekrBattle_8050940(int a1)||
|80452B8|804E54C|804DD70|80537D4|8052AE4||||
|804E1C0|8057CFC|8057514|805DD38|0||||
|0|80ADBCC|80ACCF4|80B54AC|80B0894|DrawBonusItemMenuEntry|int DrawBonusItemMenuEntry(signed int a1)||
|0|80AE0D4|80AD1AC|80B5954|80B0D38|ClaimBonusItemMenu_MainLoop|int ClaimBonusItemMenu_MainLoop(int a1)||
|0|8012CE0|801265C|8009950|0||||
|80350C8|803C5E4|803C130|8041530|80415B0||||
|0|80A8F68|80A8054|80B0C64|80AC1BC||||
|8042AC4|804BE84|804B6A8|8051024|80502B0|ekrBattle_StartUIPaletteAnimations|int ekrBattle_StartUIPaletteAnimations(int a1)||
|8026CE0|8023924|8023498|8024874|80248C4|RideCommandUsability|signed int RideCommandUsability()||
|80322AC|8039458|8038FA4|803DE58|803DEC8|AiSimulateBattle|signed int AiSimulateBattle(unsigned __int8 *a1)||
|0|8012718|8012084|8009230|8009340|AP_ExecFrame|[s8 AP_ExecFrame(struct APHandle* handle) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L110)||
|0|809B028|809A650|80A3EF8|0||||
|8029C4C|802F290|802EDC4|8031B0C|8031BC0|GetArenaBetterItem|void *GetArenaBetterItem(unsigned __int16 a1)||
|0|8006518|8006688|8004F48|8005040|AdvanceAIS|signed int AdvanceAIS(int a1)||
|803CDD4|804561C|8044E2C|804A3F0|80495F4||||
|0|801B84C|801B470|801B8E8|801BC1C||||
|802407C|8028654|80281C8|802A0C8|802A13C||||
|0|80A53C4|80A474C|80AE774|80A9D20||||
|0|80A57BC|0|80AEBAC|0||||
|8030B94|8037914|8037460|803C2F4|803C364||||
|0|8005010|8005134|800391C|80039D0|PrintStringToDBG|int PrintStringToDBG(_BYTE *a1)||
|8036130|803D64C|803D19C|80425A4|8042620||||
|0|800AAE0|800AB38|801135C|8011270|PopupProc_Display|int PopupProc_Display(int a1)||
|803CFE4|8045848|8045058|804A624|8049828||||
|8076314|808B520|808ABC4|80944C4|80921CC||||
|802A6D8|802FD28|802F85C|80326C0|8032774|BATTLE_GOTO1_IfNobodyIsDead|int BATTLE_GOTO1_IfNobodyIsDead(unsigned __int16 **a1)||
|803EE7C|8047784|8046F98|804C5A0|804B800|BeginLinkArenaBattle|int BeginLinkArenaBattle()||
|804F8A4|8063998|80631B0|806FA20|806D704||||
|8016720|8016984|801650C|8016688|80168E0|DrawItemMenuLineLong|[void DrawItemMenuLineLong(struct TextHandle* text, int item, s8 isUsable, u16* mapOut) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L421)||
|8033898|803AA70|803A5BC|803F4AC|803F51C||||
|8042018|804B2DC|804AB00|80503C0|804F64C|StartSemiCenteredOrphanMenu|[    const struct MenuDef* def, int xSubject, int xTileLeft, int xTileRight)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L653)||
|801F444|8022288|8021E10|8022EFC|8022F34||||
|0|80948CC|8093FE4|809D82C|809B564||||
|0|80AB3AC|80AA4E4|80B2F94|80AE518||||
|0|807B578|807AB04|80878E4|8085618||||
|0|80A5C60|80A4F74|80AF034|80AA550||||
|0|80AFA70|80AEB38|80B7220|80B2608||||
|801AE60|801C108|801BD64|801C0D4|801C448|DebugMenu_FogIdle|int DebugMenu_FogIdle(int a1, int a2)||
|0|809FB70|809F134|80A8338|80A38F4|LoadBonusContentData|signed int LoadBonusContentData(unsigned __int16 *a1)||
|0|8099DC8|8099408|80A2DF8|0||||
|8084A10|80A07C8|809FDFC|80A8FD8|80A4594||||
|0|808A55C|8089C00|80934BC|80911E4||||
|805DF90|806A160|8069980|8076848|807DBE4||||
|0|808A604|8089CA8|8093560|8091288||||
|802AD28|8030448|802FF80|8032DCC|8032EB4|UpdatePathArrowWithCursor|[void UpdatePathArrowWithCursor(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L191)||
|8006514|8005A60|8005B9C|800443C|8004504|Text_AppendCharAscii|int Text_AppendCharAscii(int a1, unsigned __int8 *a2)||
|803212C|8039318|8038E64|803DD14|803DD84||||
|80216B8|8024A98|802460C|8025F3C|8025F98|TryAddUnitToRestoreTargetList|int TryAddUnitToRestoreTargetList(int a1)||
|80312A8|803802C|8037B78|803CA14|803CA84|AiScriptCmd_07_DoStandardActionNoMove|int AiScriptCmd_07_DoStandardActionNoMove(_BYTE *a1)||
|803CCD4|804551C|8044D2C|804A2EC|80494F0||||
|8036078|803D594|803D0E4|80424EC|8042568||||
|802C058|8031FD0|8031A98|8034B44|8034C3C||||
|8072C30|8085DF4|80853F8|808EBE8|808C8EC||||
|803858C|803FCAC|0|8044BF0|8044C54|NameSelect_8044C54|int NameSelect_8044C54(int a1, int a2)||
|8022E3C|8026EA4|8026A18|8028544|80285B0|GetUnitSupportBonuses|[int GetUnitSupportBonuses(struct Unit* unit, struct SupportBonuses* bonuses)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L275)||
|8037664|803EBA8|803E714|8043AEC|8043B6C||||
|0|80080A8|8008218|8006B38|8006C34|DialogueMain_OnLoop|int DialogueMain_OnLoop(int a1)||
|8036758|803DC74|803D7C4|8042BC8|8042C44||||
|8041DA8|804AFFC|804A820|80500E8|804F374|ProcessMenuSelectInput|[int ProcessMenuSelectInput(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L484)||
|80266A4|802B6D0|802B220|802D850|802D918|TradeMenu_802D918|int TradeMenu_802D918(_BYTE *a1)||
|0|80643DC|8063BF4|807054C|806E290||||
|8015BA0|8015A68|80155EC|8015730|8015714|HandleCursorMovement|int HandleCursorMovement(int a1)||
|801C070|801D6E8|801D2E4|801D740|801DADC||||
|0|8080724|807F96C|8088F0C|8086C50||||
|8021B98|8025124|8024C98|80265CC|8026628|LoadMapSpritePalettes|int LoadMapSpritePalettes()||
|0|802E3AC|802DEEC|8030C10|8030CC0|IsFirstPlaythrough|[int IsFirstPlaythrough(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L925)||
|80415CC|804A740|8049F58|804F528|804E79C|DisplayUiHand|[void DisplayUiHand(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1069)||
|0|80AF984|80AEA4C|80B7134|80B251C||||
|803D2CC|8045B40|8045354|804A920|8049B24||||
|801ED7C|8021D10|8021898|8022954|802298C|TakeUsability|signed int TakeUsability()||
|801EDE4|8021D78|8021900|80229BC|80229F4|GiveUsability|signed int GiveUsability()||
|80879C0|80A3CF4|80A3080|80ACFFC|80A85E4||||
|0|802F154|802EC88|80319D0|8031A84|LoadArenaOpponentStruct|int LoadArenaOpponentStruct()||
|0|802250C|8022094|8023198|80231D0||||
|8083378|809E6C0|809DCA8|80A6F1C|0||||
|8039580|8040D4C|8040640|8045C8C|8045CEC||||
|801CA50|801E364|801DFC0|801E3A4|801E748|UpdateMenuItemPanel|int UpdateMenuItemPanel(signed int a1)||
|8046DA0|804FE74|804F698|8055704|8054A1C|StartEfxStatusUnit|int StartEfxStatusUnit(int a1)||
|802111C|80244D8|802404C|8025578|80255C8||||
|8032A60|8039C10|803975C|803E628|803E698|AiUnitUpdateGetHealMode|signed int AiUnitUpdateGetHealMode(int a1)||
|0|802BB28|802B678|802DCA4|802DD6C|StartTradeMenu|[struct Proc* StartTradeMenu(struct Unit* lUnit, struct Unit* rUnit, int unused)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L721)||
|0|8094EC0|8094630|809DDF8|809BB34||||
|801FFD8|8022FAC|8022B34|8023C44|8023C80||||
|0|8004404|8004528|8002C60|8002D10|EndProc_Private|int EndProc_Private(int a1)||
|803BA64|8043290|8042BB8|80480F8|80481E0||||
|804BAF0|8055274|8054A8C|805B34C|805A5A8||||
|0|80AA278|80A9364|80B1E04|80AD364||||
|0|80986C0|8097DD4|80A1894|809F5F4||||
|0|80B76D0|80B68C4|80BAEDC|80B6358|GetChapterWinPerc|signed int GetChapterWinPerc()||
|0|8080848|807FA8C|8089100|8086E44||||
|80397F4|8040FC0|80408B8|8045EEC|8045F48||||
|0|80546F0|8053F08|805A670|80598CC||||
|8039388|8040B54|8040444|8045A94|8045AF4||||
|803B11C|8042944|8042298|8047848|8047928||||
|805B88C|8067998|80671AC|8073A68|8071574||||
|0|80AA4E8|80A960C|80B20B0|80AD610||||
|80451E0|804E474|804DC98|80536FC|8052A0C|StartEfxHpBarLive|int StartEfxHpBarLive(int a1)||
|0|8005BDC|8005D48|8004608|8004700|DrawGlyph2DTile|int DrawGlyph2DTile(int a1, int a2)||
|806B470|8083E78|8083478|808CB8C|808A87C||||
|0|804C9AC|804C1D0|8051C2C|8050EF8|StartEkrGauge|int StartEkrGauge()||
|803A4F4|8041D00|8041610|8046C50|8046CF0||||
|0|8008CC4|8008E34|8007758|8007854||||
|0|80B7880|80B6A74|80BB088|80B6504|ComputeChapterRankings|int ComputeChapterRankings()||
|80391C0|804098C|8040280|80458D0|8045930||||
|0|80970D4|8096950|80A0250|809DFB0||||
|0|809D528|809CB10|80A5F20|80A2154||||
|8036E50|803E394|803DEE4|80432E0|804335C||||
|0|80A517C|80A4504|80AE508|80A9AF4||||
|803848C|803FBD0|0|8044B14|8044B78||||
|801B49C|801CA28|801C624|801C8E4|801CC7C|DisplayActiveUnitEffectRange|int DisplayActiveUnitEffectRange()||
|802B784|8031664|803117C|803411C|8034214|ShrinkPlayerUnitList|int ShrinkPlayerUnitList()||
|8092E68|809F9D0|809EF94|80A82B4|80A3870||||
|804FB6C|80596E0|8058EF8|805F794|805E694||||
|8075D34|808AF78|808A61C|8093EF8|8091C00||||
|8048574|8051A50|8051274|8057424|805649C|loadBaseKaiten|int loadBaseKaiten(int a1)||
|801E5A4|802037C|801FF14|8020BA4|8020EAC||||
|0|80A51CC|80A4554|80AE558|80A9B44||||
|8055134|805DDC0|805D5D8|8062C14|8061B14||||
|8026928|802B9C4|802B514|802DB3C|802DC04||||
|8007140|8006148|80062B8|8004B70|8004C68||||
|0|809EC74|809E25C|80A74D4|0||||
|0|8034BE8|8034710|8037A6C|80379D4|GetSomeBallistaItemAt|int GetSomeBallistaItemAt(int a1, int a2)||
|801E938|80207FC|8020394|802112C|8021434||||
|801FCB4|8022C80|8022808|8023914|8023950||||
|801E52C|80A5058|80A43E0|80AE3D4|80A99C0||||
|0|8092420|8091AD8|809B118|8098E40||||
|0|8099534|8098C78|80A26C0|80A0424||||
|0|803FA90|803F5DC|80449D4|8044A40||||
|808F22C|80AE970|80ADA58|80B6208|80B15E8||||
|8074778|8089AA8|8089148|80928F8|8090620||||
|8041CCC|804AF18|804A73C|8050008|804F294|ProcessMenuDpadInput|[void ProcessMenuDpadInput(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L428)||
|80726CC|8028354|8027EC8|8029D24|8029D98|TorchTargetPosSelect_Init|int TorchTargetPosSelect_Init(signed int a1)||
|8088B9C|80A50A0|80A4428|80AE42C|80A9A18||||
|0|80A50F0|80A4478|80AE47C|80A9A68||||
|802A188|802F870|802F3A4|803212C|80321E0|ActionDrop|int ActionDrop(signed int a1)||
|8041284|804A27C|8049A94|804EE2C|804E0A8|UnpackUiFramePalette|[void UnpackUiFramePalette(int palId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L187)||
|80412DC|804A2DC|8049AF4|804EEBC|804E138|UnpackUiBarPalette|[void UnpackUiBarPalette(int palId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L211)||
|0|80B7100|80B62F4|80BA8F8|80B5D74||||
|0|80B7230|80B6424|80BAA28|80B5EA4||||
|0|80A5DB4|80A50CC|80AF17C|80AA69C||||
|0|80B0BF4|80AFDC0|80B87C0|80B3C14||||
|0|8093F10|8093618|809CF0C|809AC40||||
|8057FE8|80648BC|80640D4|8070F94|806E9E4||||
|801BD38|801D47C|801D078|801D500|801D89C|Load6CRangeDisplaySquareGfx|int Load6CRangeDisplaySquareGfx(int a1)||
|8029764|802ECAC|802E7E0|8031530|80315E4|GetConvoyItemSlot|signed int GetConvoyItemSlot(int a1)||
|0|80A5138|80A44C0|80AE4C4|80A9AB0||||
|0|8026434|8025FA8|80279E0|8027A4C|HandleMapSpriteCursorHover|int HandleMapSpriteCursorHover()||
|0|8043EDC|8043700|8048CD8|0||||
|8022A38|8026A00|8026574|80280A0|802810C|HideUnitSMS|int HideUnitSMS(int a1)||
|806C608|807AEC8|807A454|8087654|8085388||||
|0|808A7CC|8089E70|8093744|809144C||||
|803B9F0|804321C|8042B44|8048080|8048168|SioMenu_8048168|int SioMenu_8048168(int a1)||
|8030E74|8037BF8|8037744|803C5D8|803C648|AiScriptCmd_00_ConditionalGoto|int AiScriptCmd_00_ConditionalGoto(_BYTE *a1)||
|8045998|804EAE8|804E30C|8053E34|8053144||||
|0|801CACC|801C6C8|801C984|801CD1C|PlayerPhase_RangeDisplayIdle|int PlayerPhase_RangeDisplayIdle(unsigned __int16 **a1)||
|0|8098D04|8098418|80A1EC4|809FC24||||
|8041F54|804B1C0|804A9E4|80502A4|804F530|Menu_TextBoxIdle|int Menu_TextBoxIdle(int a1)||
|8037878|803EDC4|803E930|8043D0C|8043D8C||||
|0|809D850|809CE38|80A6214|80A2448||||
|8015D18|8015BE4|8015768|80158A8|801588C||||
|0|8095B64|8095324|809EAC4|809C820||||
|8086AAC|80A2C10|0|80AB764|80A6D4C||||
|803BEE0|8043794|804307C|8048600|80486E8||||
|8065CF4|804B244|804AA68|8050328|804F5B4|Menu_804F5B4|int Menu_804F5B4(int a1)||
|802AF44|8030664|803019C|8032FE8|80330D4|GetDirectionOfPathAfterIndex|[u8 GetDirectionOfPathAfterIndex(u8 i) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L252)||
|8044D4C|804E048|804D86C|80532DC|80525E8|StartEfxHpBarResire|int StartEfxHpBarResire(int a1)||
|0|80288B0|8028424|802A324|802A398||||
|801D920|801F350|801EFCC|801F520|801F8C8||||
|80422DC|804B6DC|804AF00|805082C|804FAB8|EndTargetSelection|int EndTargetSelection(int a1)||
|802AEE0|8030600|8030138|8032F80|803306C|GetDirectionOfPathBeforeIndex|[u8 GetDirectionOfPathBeforeIndex(u8 i) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L239)||
|0|809FB14|809F0D8|80A82DC|80A3898||||
|0|80A00C8|809F68C|80A8890|80A3E4C||||
|0|80A01EC|809F7B0|80A89EC|80A3FA8||||
|803912C|80408F8|80401EC|804583C|804589C||||
|8082A40|809159C|8090C58|8099FB0|8097CD8||||
|0|80AE740|80AD820|80B5FDC|80B13BC||||
|8055C30|805E924|805E13C|80637B4|80626B4||||
|0|80B0F5C|80B0134|80B8B28|0||||
|0|8088A20|0|809189C|808F5C8||||
|0|8085B0C|8085110|808E8CC|808C5D0|InitMinimugBoxMaybe|int InitMinimugBoxMaybe(int a1, unsigned __int16 **a2)||
|0|80250B0|8024C24|8026558|80265B4|TryAddUnitToDanceRingTargetList|int TryAddUnitToDanceRingTargetList(char *a1)||
|0|802B738|802B288|802D8B8|802D980|TradeMenu_802D980|int TradeMenu_802D980(unsigned __int8 *a1)||
|8032FBC|803A180|8039CCC|803EBA8|803EC18||||
|80842E8|809EF08|809E4F0|80A776C|80A2D28|LoadGeneralGameMetadata|signed int LoadGeneralGameMetadata(int *a1)||
|8056DB4|8063014|806282C|806EFB8|806CC94||||
|0|805E23C|805DA54|8063078|8061F78||||
|804B5E0|8054D7C|8054594|805AE20|805A07C|SwitchAISFrameDataFromBARoundType|int SwitchAISFrameDataFromBARoundType(int a1, int a2)||
|0|80972A8|8096B1C|80A0424|809E184||||
|8039CFC|80414CC|8040DCC|80463F4|8046478||||
|0|80884A8|8087B20|8091320|808F04C||||
|0|8007C88|8007DF8|8006710|800680C|Dialogue_InitGfx|int Dialogue_InitGfx(__int16 a1, int a2, unsigned __int8 a3)||
|801E244|801FF3C|801FAD4|8020784|8020A8C||||
|805C738|80688C8|80680DC|8074D78|807289C||||
|802B6CC|8031318|8030E2C|8033D10|8033E08||||
|0|80A4B10|80A3E98|80ADEA8|80A9494||||
|8039A1C|80411E8|8040AE0|8046114|804619C||||
|802619C|802B164|802ACB4|802D2F8|802D3C0||||
|801DA24|801F454|801F0D0|801F624|801F9CC||||
|8084908|80A05A0|809FBD4|80A8D94|80A4350|RegisterChapterTimeAndTurnCount|int RegisterChapterTimeAndTurnCount(int a1)||
|802F2E8|8035D10|8035838|803A794|803A71C|AiScriptCompare|signed int AiScriptCompare(unsigned __int8 *a1, char a2, unsigned int a3)||
|0|8004510|8004634|8002D78|8002E28|ExecProc_Private|int ExecProc_Private(int a1)||
|804312C|804C4AC|804BCD0|80516DC|80509A8|ekrBattle_80509A8|int ekrBattle_80509A8(int a1)||
|0|804A95C|804A174|804F844|804EAB8|DisplayUiHandExt|[void DisplayUiHandExt(int x, int y, unsigned objTileOffset)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1199)||
|0|80978D8|809714C|80A0A48|809E7A8||||
|0|8099438|8098B7C|80A25C8|80A032C||||
|808495C|80A06FC|809FD30|80A8F0C|80A44C8||||
|805CFF8|80691B8|80689CC|80757BC|80732E0||||
|0|8016DD8|801697C|8016B3C|8016D94|GetItemDisplayRankString|[char* GetItemDisplayRankString(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L651)||
|808B3B8|80825EC|808188C|808AFF0|8088D64||||
|8034B58|803BF5C|803BAA8|804085C|80408DC||||
|803C5E4|8044E2C|8044630|8049BE0|8048DD0||||
|0|809521C|809498C|809E144|809BE80||||
|0|8098558|0|80A1738|809F498||||
|0|80A053C|809FB70|80A8D30|80A42EC|GetWonChapterCount|int GetWonChapterCount()||
|0|801B5C4|801B1E4|801B6B8|801B9EC|Return2or3BySecondParity|[int Return2or3BySecondParity(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L9)||
|0|801B5F4|801B214|801B6E8|801BA1C|Return3or2BySecondParity|[int Return3or2BySecondParity(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L27)||
|802D4A8|80336E0|80331B0|8036434|8036334||||
|803E1B0|8046A90|80462A4|804B844|804AAA4||||
|0|808AB70|808A214|8093AD0|80917D8||||
|8005E78|8005650|800578C|8003F98|8004074|Text_AppendDecNumber|int Text_AppendDecNumber(int a1, int a2)||
|8025940|802A4A8|8029FF8|802C570|802C638|GetBattleUnitStaffExp|signed int GetBattleUnitStaffExp(int a1)||
|8074558|808989C|8088F3C|80926F8|8090418||||
|0|8049C0C|8049424|804E790|804DA00||||
|0|801D270|801CE6C|801D180|801D51C|GetUnitSelectionValueThing|signed int GetUnitSelectionValueThing(int a1)||
|8032DF4|8039FB8|8039B04|803E9E8|803EA58||||
|802C160|80320D8|8031BA8|8034C54|8034D48||||
|8039084|8040850|8040144|8045798|80457F8||||
|802EB20|8035418|8034F40|8039D88|8039D10|AiDecisionMaker_HealEscape|int AiDecisionMaker_HealEscape()||
|0|802A42C|8029F7C|802C4F0|802C5B8|HandleItemExpGain|int HandleItemExpGain()||
|0|80607B8|805FFD0|8065674|8064568||||
|80435AC|804C8AC|804C0D0|8051B34|8050E00||||
|80064B4|8005A24|8005B60|8004400|80044C8|Text_AppendStringAscii|int Text_AppendStringAscii(int a1, unsigned __int8 *a2)||
|804E2F8|8057E34|805764C|805DE74|0||||
|801BAF0|801D1C0|801CDBC|801D0D4|801D470|PlayerPhase_ApplyUnitMovement|int PlayerPhase_ApplyUnitMovement(int a1)||
|8025748|802A1E8|8029D38|802C248|802C300|UpdateBallistaUsesFromBattle|int UpdateBallistaUsesFromBattle()||
|803C390|8044BD8|80443DC|8049988|8048B78||||
|0|8093014|8092708|809BF50|8099C70||||
|80828B8|809145C|8090B18|8099E70|8097B98||||
|8030CBC|8037A40|803758C|803C420|803C490|AiFillMovementMapForUnit|int AiFillMovementMapForUnit(int a1)||
|8039C30|80413FC|8040CFC|8046324|80463A8||||
|80203EC|8023398|8022F20|8024100|8024144|ArenaCommandEffect|signed int ArenaCommandEffect(int a1, int a2)||
|0|8004370|8004494|8002BCC|8002C7C|StartProc|int StartProc(int a1, signed int a2)||
|0|802B5E4|802B134|802D76C|802D834|TradeMenu_802D834|int TradeMenu_802D834(signed int a1)||
|0|802C140|802BC80|802E3A8|802E470|RefreshAllLightRunes|[void RefreshAllLightRunes(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L209)||
|80362B0|803D7CC|803D31C|8042720|804279C||||
|0|80620FC|8061914|8067040|0||||
|80832A0|809E5F0|809DBD8|80A6E4C|0|modifyPassword|void modifyPassword(int (*a1)(void))||
|80313AC|8038130|8037C7C|803CB18|803CB88|AiScriptCmd_0C_MoveTowardsSetPoint|int AiScriptCmd_0C_MoveTowardsSetPoint(_BYTE *a1)||
|806F594|8081458|80806FC|8089D64|8087AD8||||
|0|80A067C|809FCB0|80A8E8C|80A4448|GetGameTotalTime|int GetGameTotalTime()||
|802AA0C|803012C|802FC64|8032AB8|8032B88|GetPathFromMovementScript|[void GetPathFromMovementScript(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L57)||
|8033998|803AB70|803A6BC|803F5AC|803F61C||||
|0|809997C|8098FC4|80A2AFC|80A0860||||
|0|8099CB4|80992F4|80A2CE8|80A0A34||||
|803D6EC|8045F7C|8045790|804AD38|8049F44||||
|8030FB8|8037D3C|8037888|803C71C|803C78C|AiScriptCmd_03_Goto|int AiScriptCmd_03_Goto(_BYTE *a1)||
|8025ED0|802AA9C|802A5EC|802CB8C|802CC54|FinishUpItemBattle|int FinishUpItemBattle(signed int a1)||
|8014DCC|8014BD4|8014758|8014510|80144FC||||
|0|8081EF8|808119C|808A8FC|8088670|DrawStatScreen|int DrawStatScreen(int a1)||
|801B9CC|801D06C|801CC68|801CF80|801D31C|EnsureCameraOntoActiveUnitPosition|signed int EnsureCameraOntoActiveUnitPosition(signed int a1)||
|0|80BAA54|80B9F4C|80BCE68|0||||
|805E2E8|806A38C|8069BAC|8076A74|8074638||||
|0|8044750|8043F50|80494FC|0||||
|803D110|8045984|8045194|804A760|8049964||||
|804D30C|8056C78|8056490|805CCDC|805BF40|Teono|void Teono(_6CStruct *ctx)||
|804B8E8|805506C|8054884|805B138|805A394||||
|0|80ADE84|80ACF5C|80B56F8|80B0ADC|ClaimBonusItemMenu_Init|int ClaimBonusItemMenu_Init(signed int a1)||
|0|80973EC|8096C60|80A0568|809E2C8||||
|0|804E658|804DE7C|8053914|8052C24||||
|0|8088024|8087690|8090EA8|808EBD4||||
|0|8043E08|804362C|8048C08|0||||
|8087944|80A3C78|80A3004|80ACF80|80A8568||||
|0|809FDC4|809F388|80A858C|80A3B48||||
|0|8019E50|8019A68|8019E78|801A1A0|RefreshTrapHiddenStates|int RefreshTrapHiddenStates()||
|0|801CA60|801C65C|801C91C|801CCB4|PlayerPhase_DisplayDangerZone|int PlayerPhase_DisplayDangerZone()||
|80372B0|803E7F4|803E358|8043744|80437C0||||
|0|8094AC0|8094230|809DA14|809B74C||||
|803AE30|8042658|8041F94|8047550|804762C||||
|8073394|8087028|808663C|808FDF0|808DB08||||
|803CAD8|8045324|8044B34|804A0E4|80492E8||||
|0|809F950|809EF14|80A8234|80A37F0|GGM_IsCharacterKnown|signed int GGM_IsCharacterKnown(signed int a1, int *a2)||
|0|801B3E8|801B008|801B4E8|801B810|GenerateDangerZoneRange|[void GenerateDangerZoneRange(s8 boolDisplayStaffRange)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L769)||
|8026880|802B91C|802B46C|802DA94|802DB5C||||
|0|8012808|8012174|8009320|8009430|AP_QueueObjRotScale|[void AP_QueueObjRotScale(struct APHandle* handle) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L172)||
|0|80904D8|808FB98|8098FF4|8096D10||||
|0|8023A84|80235F8|80249D8|8024A28|AttackBallistaCommandUsability|signed int AttackBallistaCommandUsability()||
|801FB00|8022A9C|8022624|8023734|8023770||||
|0|8056FD0|80567E8|805D038|805C29C|Arrow|void Arrow(_6CStruct *ctx)||
|8053E04|805CA74|805C28C|80619E0|80608E0||||
|801CDE4|801E6E4|801E360|801E740|801EAE8||||
|0|805FAB8|805F2D0|8064940|8063840||||
|8053CFC|805C96C|805C184|80618D8|80607D8||||
|801501C|8014E24|80149A8|8014760|801474C||||
|0|80955D0|8094D74|809E51C|809C254||||
|80253CC|8029E20|8029970|802BE6C|802BF24|CheckForLevelUpCaps|int CheckForLevelUpCaps(int a1, char *a2)||
|804DAFC|8057514|8056D2C|805D580|805C7E4||||
|801A9A8|801BBC4|801B814|801BBFC|801BF6C|DebugMenu_ClearIdle|int DebugMenu_ClearIdle(int a1, int a2)||
|8016D08|8017160|8016D0C|8016DD4|801702C|GetUnitItemSlot|[int GetUnitItemSlot(struct Unit* unit, int itemIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L811)||
|802BBF4|8031B6C|8031600|8034624|803471C||||
|0|804EE24|804E648|8054270|8053584||||
|0|80128F0|801225C|8009408|8009518|AP_SwitchAnimation|[void AP_SwitchAnimation(struct APHandle* handle, int index) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L197)||
|0|8005EBC|8006028|80048E8|80049E0||||
|0|80044CC|80045F0|8002D30|8002DE0|_IsolateProc|int IsolateProc(_DWORD *a1)||
|802E224|80343F0|8033FFC|803720C|803710C||||
|802E140|80344D4|8033F18|80372F0|80371F0||||
|0|8032C40|8032710|80357BC|0||||
|804EA4C|80585BC|8057DD4|805E608|805D508|Loop6C_efxDarkbreath|int Loop6C_efxDarkbreath(int a1)||
|8006E74|8005FEC|800615C|8004A14|8004B0C|DrawSpecialUiChar|int DrawSpecialUiChar(_WORD *a1, int a2, int a3)||
|0|8085530|8084B34|808E2D4|808BFD4||||
|0|805CF78|805C790|8067768|80654F8||||
|0|80A6E44|80A6184|80B04B4|80AB9FC||||
|8050C30|805A45C|8059C74|80607FC|805F6FC||||
|0|806B984|806B1A4|80780DC|0||||
|8008B28|8006F8C|80070FC|8005A08|8005B04||||
|0|8098B60|8098274|80A1D28|809FA88||||
|8041EC4|804B130|804A954|8050214|804F4A0|Menu_HelpBoxIdle|int Menu_HelpBoxIdle(_BYTE *a1)||
|0|80AABE4|0|80B27C4|80ADD24||||
|0|8034BA0|80346C8|8037A24|803798C|GetBallistaItemAt|int GetBallistaItemAt(int a1, int a2)||
|0|80ACF68|80AC084|80B4910|80AFCF8||||
|804E040|8057B7C|8057394|805DBB8|805CE1C||||
|80066F8|806383C|8063054|806F8C4|806D5A8||||
|0|8094BE0|8094350|809DB30|809B86C||||
|8042784|804BB84|804B3A8|8050CD8|804FF64|ekrBattle_Init|int ekrBattle_Init(int a1)||
|8042310|804B710|804AF34|8050860|804FAEC|TargetSelection_HandleMoveInput|int TargetSelection_HandleMoveInput(int a1)||
|0|804F464|804EC88|80548A4|8053BBC||||
|0|8088834|8087EAC|80916AC|808F3D8||||
|0|8012C80|80125EC|80098F0|8009A00|GameControl_HandleSelectRightL|int GameControl_HandleSelectRightL(unsigned __int16 **a1)||
|0|8013050|8012998|808767C|80853B0||||
|0|80A5AD8|80A4DEC|80AEFDC|80AA4F8||||
|804AFFC|80547C0|8053FD8|805A740|805999C|getAnimationIDForPaletteGroup|signed int getAnimationIDForPaletteGroup(int animationID, int RightOrLeft)|返回用那个动画ID的调色板|
|802EEE0|80357E4|803530C|803A16C|803A0F4|CpPerform_PerformEscape|int CpPerform_PerformEscape(int a1)||
|8011A90|80043D4|80044F8|8002C30|8002CE0|StartBlockingProc|int StartBlockingProc(int a1, signed int a2)||
|806BE00|80056A4|80057D8|800407C|8004144|Text_AppendNumberOr2Dashes|int Text_AppendNumberOr2Dashes(int a1, int a2)||
|806FDB4|8081CB0|8080F54|808A610|8088384||||
|804610C|804F0DC|804E900|8054518|805382C||||
|0|800BF1C|800C00C|800FE0C|800FC90|TryPrepareEventUnitMovement|bool TryPrepareEventUnitMovement(int a1, int a2, int a3)||
|801C160|801D7E0|801D3DC|801D838|801DBD4|GetSomeFacingDirection|signed int GetSomeFacingDirection(int a1, int a2, int a3, int a4)||
|802DE60|8034110|8033C38|8036F2C|8036E2C|BKSEL_Display|int BKSEL_Display(int a1)||
|0|802FE90|802F9C4|803281C|80328D0|BATTLE_HandleItemDrop|signed int BATTLE_HandleItemDrop(unsigned int a1)||
|0|8099764|8098EA8|80A28E8|80A064C||||
|0|8053BD4|80533EC|8059954|8058B24||||
|805DC2C|8069DDC|80695FC|80764C8|8074040||||
|80462BC|804F284|804EAA8|80546C8|80539DC|StartEfxHitQuake|int StartEfxHitQuake(int a1, int a2, int a3)||
|80159F0|8015818|801539C|8015434|8015410|MapMain_SwitchPhases|bool MapMain_SwitchPhases()||
|80754F4|808A730|8089DD4|80936B0|0||||
|0|8031198|8030CAC|8033B9C|8033C90||||
|0|80182A8|8017EB8|8018144|8018430|UnitChangeFaction|[void UnitChangeFaction(struct Unit* unit, int faction) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L961)||
|8016B24|8016DA4|8016948|8016B04|8016D5C|GetWeaponLevelFromExp|[int GetWeaponLevelFromExp(int wexp) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L629)||
|80179EC|8018054|8017C64|8017EDC|80181C8|UnitCheckStatCaps|[void UnitCheckStatCaps(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L841)||
|803239C|8039548|8039094|803DF4C|803DFBC|AiBattleGetAlliesAroundWeight|int AiBattleGetAlliesAroundWeight()||
|0|80961B8|80959B0|809F06C|809CDD4||||
|0|8006C48|8006DB8|80056C8|80057C0|ApplyFaceDisplayBitChange|int ApplyFaceDisplayBitChange(int a1)||
|0|8004B38|8004C5C|80033B8|800346C||||
|0|8060A80|8060298|8065AF0|80649E4||||
|0|80A2984|0|80AB4B8|80A6AA0||||
|0|80A9D58|80A8E44|80B18F4|80ACE54||||
|0|806A4F8|8069D18|8076BDC|80747A4||||
|802D438|809A294|80998D8|80A3274|0||||
|8059B78|8043E7C|80436A0|8048C7C|0||||
|0|80316C8|80311E0|8034180|8034278|EndPrepScreen|int EndPrepScreen()||
|0|8087EEC|8087534|8090D6C|808EA98||||
|0|805C414|805BC2C|80613C8|80602C8|Hazymoon|void Hazymoon(_6CStruct *ctx)||
|8036A94|803DFD4|803DB24|8042F1C|8042F98||||
|802EBD0|80354C8|8034FF0|8039E3C|8039DC4|AiDecisionMaker_SpecialItems|int AiDecisionMaker_SpecialItems()||
|804363C|804C944|804C168|8051BC4|8050E90||||
|0|8094714|8093E2C|809D67C|809B3B4||||
|0|8093E9C|80935A4|809CE9C|809ABD0||||
|8013CA4|8013688|8013168|8013008|8012F50|Decompress|int Decompress(_BYTE *a1, int a2)||
|8015344|801514C|8014CD0|8014AA0|8014A78||||
|0|802C75C|802C29C|802EA48|802EB10|DisableAllLightRunes|[void DisableAllLightRunes(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L704)||
|0|802C79C|802C2DC|802EA88|802EB50|EnableAllLightRunes|[void EnableAllLightRunes(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L721)||
|802ECC8|80355FC|8035124|8039F84|8039F0C|CpPerform_MoveCameraOntoUnit|int CpPerform_MoveCameraOntoUnit(signed int a1)||
|8022724|80264F0|8026064|8027AA0|8027B0C||||
|8016140|8016000|8015B84|8015CBC|8015CB0|Loop6C_GENS|int Loop6C_GENS(int a1)||
|804D5E4|8056F50|8056768|805CFB8|805C21C||||
|8028460|802D948|802D488|80301A8|8030258||||
|8022AA8|8026AD8|802664C|8028188|80281F4|GetUnitSupporterUnit|[struct Unit* GetUnitSupporterUnit(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L39)||
|806EB00|8080800|807FA48|80890BC|8086E00|DrawLotsaText|int DrawLotsaText(int a1)||
|0|80AE608|80AD6E4|80B5EA4|80B1288||||
|806F470|8081334|80805D8|8089C68|80879DC||||
|0|8098754|8097E68|80A1928|809F688||||
|809AC94|8032AD0|80325A0|8035650|0||||
|8032CE8|8039EAC|80399F8|803E8CC|803E93C||||
|8076448|808B654|808AD00|80945E8|80922F0||||
|80361A4|803D6C0|803D210|8042618|8042694||||
|0|801D66C|801D268|801D6C4|801DA60|DestructMoveLimitView|int DestructMoveLimitView(int a1)||
|0|80B0C30|80AFDFC|80B87FC|80B3C50||||
|0|8004B6C|8004C90|80033EC|80034A0||||
|0|807B630|807ABBC|808799C|80856D0||||
|0|80879E4|808702C|80908DC|808E608||||
|8039ABC|8041288|8040B80|80461B0|8046234||||
|0|8095D58|8095528|809ECB8|809CA14||||
|0|800EDBC|800EEB0|80115C8|80114DC|NewGotItemPopup|int NewGotItemPopup(int a1, __int16 a2, int a3)||
|808D07C|80AF8F8|80AE9C0|80B707C|80B2464||||
|804D44C|8056DB8|80565D0|805CE1C|805C080||||
|802A514|802FB5C|802F690|80324F8|80325AC|SpriteJumpAnimation_Loop|int SpriteJumpAnimation_Loop(signed __int16 *a1)||
|0|809754C|8096DC0|80A06C0|809E420||||
|803FE64|8048794|8047FA8|804D344|804C5A4||||
|0|80B5330|80B4510|80BD218|80B8350||||
|801BF68|801D5E8|801D1E4|801D640|801D9DC|Loop6C_MoveLimitView|int Loop6C_MoveLimitView(int a1)||
|8072AD0|8085C8C|8085290|808EA4C|808C750||||
|8057BB0|8063E4C|8063664|806FED4|806DBBC||||
|8045EE8|804EEB8|804E6DC|8054304|8053618||||
|80504F0|8059D20|8059538|8060104|805F004||||
|8042194|804B588|804ADAC|80506E0|804F96C|TargetSelection_Loop|int TargetSelection_Loop(int a1)||
|801D234|801EB48|801E7C4|801ED1C|801F0C4||||
|80412B0|804A2AC|8049AC4|804EE8C|804E108|UnpackUiFrameImage|[void UnpackUiFrameImage(void* dest)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L203)||
|803F8E0|80481EC|8047A00|804CFA8|804C208||||
|0|806221C|8061A34|8067160|0||||
|0|8096DEC|8096668|809FF74|809DCD4||||
|8044284|804D62C|804CE50|80528A8|8051BB0|ekrDispUP_Loop|int ekrDispUP_Loop(int a1)||
|8017B4C|80181F8|8017E08|8018084|8018370|UnitDrop|[void UnitDrop(struct Unit* actor, int xTarget, int yTarget) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L914)||
|0|804EDB8|804E5DC|8054200|8053514||||
|0|80B1110|80B02E4|80B8C9C|0||||
|8023A08|8027C58|80277CC|8029644|802969C|WarpTargetPosSelect_Loop|int WarpTargetPosSelect_Loop(int a1)||
|805BD64|8067E78|806768C|8073F38|8071A54||||
|80259A0|802A50C|802A05C|802C5D8|802C6A0|ActiveBattleUnitAdd10Exp|int ActiveBattleUnitAdd10Exp()||
|803DAE8|80463B4|8045BC8|804B164|804A3A8||||
|801A3C0|801B1F0|801AE10|801B2F4|801B618|GenerateUnitCompleteStaffRange|[void GenerateUnitCompleteStaffRange(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L715)||
|8044EEC|804E1E8|804DA0C|8053478|8052788||||
|8036208|803D724|803D274|8042678|80426F4||||
|80522D0|805BCB8|805B4D0|8067EA4|8065BB8|Loop6C_efxIvaldiBG3|int Loop6C_efxIvaldiBG3(int a1)||
|80849BC|80A0768|809FD9C|80A8F78|80A4534||||
|8054580|805D200|805CA18|806214C|806104C||||
|805D154|8069314|8068B28|8075A08|807352C||||
|8029FE0|802F624|802F158|8031E9C|8031F50|CouldUnitUseAnyWeapon|bool CouldUnitUseAnyWeapon(int a1)||
|802A874|802FF94|802FACC|8032938|80329EC|CutOffPathLength|[void CutOffPathLength(s8 newIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L20)||
|0|80AE33C|80AD414|80B5BB0|80B0F94||||
|8016024|8015F24|8015AA8|8015BF0|8015BD4||||
|0|806A7E0|806A000|8076ECC|8074A94||||
|808344C|809E794|809DD7C|80A6FF0|0||||
|80435EC|804C8F4|804C118|8051B74|8050E40||||
|0|8062B9C|80623B4|8067AE4|8065724||||
|8032440|80395EC|8039138|803DFF8|803E068|AiBattleGetWeight_803E068|int AiBattleGetWeight_803E068()||
|8048354|8051830|8051054|8057210|8056288|ekrBattleEnding_8056288|int ekrBattleEnding_8056288(int a1)||
|0|800EE00|800EEF4|8011780|8011694|CreateItemStealingPopup|int CreateItemStealingPopup(__int16 a1, int a2)||
|805089C|805A0CC|80598E4|8060490|805F390|EfxResire_Main|int EfxResire_Main(int a1)||
|0|8029364|8028EB4|802AD00|802AD90|BattleComputeBuffStatus|int BattleComputeBuffStatus(int a1)||
|8084E18|80A0D38|80A036C|80A95B0|80A4B6C|GetNewPlaythroughId|signed int GetNewPlaythroughId()||
|8025D7C|802A964|802A4B4|802CA5C|802CB24|SetupSubjectBattleUnitForStaff|int SetupSubjectBattleUnitForStaff(_DWORD *a1, int a2)||
|804D280|8056BEC|8056404|805CC50|805BEB4|Loop6C_efxDummymagic|int Loop6C_efxDummymagic(int a1)||
|802FF20|8036A88|80365B0|803B4C8|803B4B8||||
|803784C|803ED98|803E904|8043CDC|8043D5C||||
|0|809AC5C|809A280|80A3B70|0||||
|808A658|80A6DD4|80A6114|80B0444|80AB98C||||
|0|8025024|8024B98|80264C8|8026524||||
|805D5B0|8069770|8068F90|8075E70|8073988|NewEkrLevelup|int NewEkrLevelup(int a1)||
|0|809CEC8|809C544|80A5968|80A1B90||||
|805C2E0|8068488|8067C9C|80748B8|80723D4||||
|809331C|806A414|8069C34|8076AF8|80746C0||||
|0|8096834|8096054|809F968|809D6CC||||
|804F600|8059174|805898C|805F220|805E120|Fimbulvetr|void Fimbulvetr(_6CStruct *ctx)||
|80358DC|803CDF8|803C944|8041D44|8041DC4|SioMain_8041DC4|int SioMain_8041DC4()||
|80263C8|802B390|802AEE0|802D520|802D5E8||||
|0|802267C|8022204|8023318|8023350|ItemSelectMenu_TextDraw|int ItemSelectMenu_TextDraw(int a1, int a2)||
|0|802D06C|802CBAC|802F4B8|802F598||||
|8070410|8082394|8081634|808AD94|8088B08|HbPopulate_SSPower|[void HbPopulate_SSPower(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2005)||
|80859E0|80A1D18|80A1384|80AA7C0|80A5DA8||||
|0|809EFC4|809E5AC|80A7828|80A2DE4||||
|8016694|80168EC|8016470|80165F0|8016848|DrawItemMenuLine|[void DrawItemMenuLine(struct TextHandle* text, int item, s8 isUsable, u16* mapOut) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L410)||
|802CC1C|8032DD0|80328A0|803594C|803584C||||
|8058A80|8012F6C|80128F0|8009BBC|8009C5C||||
|8018688|8019170|8018D88|8019194|80194BC|InitChapterMap|[void InitChapterMap(int chapterId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L56)||
|0|808E81C|808DEF0|8097740|8095460|IsUnitInCurrentRoster|signed int IsUnitInCurrentRoster(_DWORD *a1)||
|801B04C|801C584|801C194|801C514|801C8AC|HandlePlayerCursorMovement|int HandlePlayerCursorMovement()||
|802FE84|80369EC|8036514|803B434|803B41C|AiAreEnemiesWithin3Tiles|int AiAreEnemiesWithin3Tiles(__int16 a1, __int16 a2)||
|0|8018BC4|80187D4|8018A60|8018D4C|GetUnitMovementCost|[const s8* GetUnitMovementCost(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1369)||
|80392F4|8040AC0|80403B0|8045A04|8045A64||||
|0|8083950|8082F50|808C5E0|808A2D0||||
|0|8060EAC|80606C4|8065E44|0||||
|801AB64|801BD40|801B990|801BD8C|801C0FC||||
|804D088|80569FC|8056214|805CA64|805BCC4|Loop6C_efxMagicQUAKE|int Loop6C_efxMagicQUAKE(int a1)||
|8017854|8017EB0|8017AC0|8017CE4|8017FC4|UnitAutolevelCore|[void UnitAutolevelCore(struct Unit* unit, u8 classId, int levelCount) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L767)||
|0|80046E8|800480C|8002F64|8003014|ResumeEachProcMarked|int ResumeEachProcMarked(int a1)||
|8045C90|804EC74|804E498|80540C0|80533D0|MoveBattleCameraOnto|int MoveBattleCameraOnto(int a1, unsigned __int16 a2)||
|8070E70|8082F74|8082528|808BB14|8089804|LoadDialogueBoxGfx|int LoadDialogueBoxGfx(int a1, int a2)||
|8070EEC|8083000|80825B4|808BBD4|80898C4||||
|802AC9C|80303BC|802FEF4|8032D40|8032E28|PathArrowDisp_Init|[void PathArrowDisp_Init(u8 a) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L163)||
|8042908|804BD08|804B52C|8050E64|80500F0|EkrBattle_BattleQuoteWait|int EkrBattle_BattleQuoteWait(int a1)||
|8057C94|8063F30|8063748|806FFBC|806DCA4||||
|0|8005460|8005590|8003DA0|8003E70|Text_Draw|int Text_Draw(unsigned __int8 *a1, _WORD *a2)||
|0|8097990|8097204|80A0AFC|809E85C||||
|801C3E0|801DA50|801D64C|801DA8C|801DE30|GetPlayerStartCursorPosition|int GetPlayerStartCursorPosition(_DWORD *a1, _DWORD *a2)||
|8087CB0|80A4054|80A33E0|80AD2D0|80A88B8||||
|8016644|8016850|80163D4|801654C|80167A4|CanUnitUseStaff|[s8 CanUnitUseStaff(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L370)||
|0|8069830|8069050|8075F34|0||||
|805DDA8|8069F68|8069788|8076654|80741CC||||
|0|802D320|802CE60|802F860|802F914|ExecStatBooster|int ExecStatBooster(int a1)||
|804A500|8053A80|8053298|80597E4|80589B4|GetAllegienceId|signed int GetAllegienceId(signed int a1)||
|8094F14|80B03E0|80AF590|80B7C78|80B3088||||
|8044390|804D738|804CF5C|80529BC|8051CC4||||
|8042C0C|804BFCC|804B7F0|8051174|8050400|ekrBattle_StartMainAnimations|int ekrBattle_StartMainAnimations(int a1)||
|8021820|8024C00|8024774|80260A4|8026100|TryAddUnitToSilenceTargetList|int TryAddUnitToSilenceTargetList(char *a1)||
|802186C|8024C4C|80247C0|80260F0|802614C|TryAddUnitToSleepTargetList|int TryAddUnitToSleepTargetList(char *a1)||
|80218B8|8024C98|802480C|802613C|8026198|TryAddUnitToBerzerkTargetList|int TryAddUnitToBerzerkTargetList(char *a1)||
|804695C|804F9D8|804F1FC|8055128|8054440|StartEfxFlashHPBar|int StartEfxFlashHPBar(int a1, unsigned __int16 a2, __int16 a3)||
|80174AC|8017A44|8017654|80176F0|8017948|UnitAddItem|[s8 UnitAddItem(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L412)||
|801A7D4|801B9E4|801B61C|801BA20|801BD58|DebugMapMenu_DisplayInfoIdle|int DebugMapMenu_DisplayInfoIdle(int a1, int a2)||
|8055294|805DF20|805D738|8062D78|8061C78||||
|0|8061C1C|8061434|8066B7C|0||||
|804CAD8|8056314|8055B2C|805C414|805B670||||
|80271FC|802C618|802C158|802E8E0|802E9A8|CountDownTraps|[void CountDownTraps(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L583)||
|8092854|8006A08|8006B78|8005478|8005570|FindFreeFaceSlot|signed int FindFreeFaceSlot()||
|0|8012AD0|801243C|80095E0|80096F0|AP_Find|[struct APHandle* AP_Find(const u16* definition) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L325)||
|8017520|8017ACC|80176DC|8017780|80179D8|GetUnitItemCount|[int GetUnitItemCount(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L462)||
|802FDF8|8036960|8036488|803B3B0|803B390||||
|8023C50|8027EBC|8027A30|8029890|80298F0|PrepareTargetSelectionForMineAndLightRune|int PrepareTargetSelectionForMineAndLightRune(int a1, int a2, int a3)||
|8041BD8|804AE18|804A63C|804FED8|804F164|Menu_OnIdle|[void Menu_OnIdle(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L377)||
|8054A10|805D698|805CEB0|8062548|8061448||||
|8024BBC|8029568|80290B8|802AF88|802B018|MakeBattleRound|signed int MakeBattleRound(int a1, int a2)||
|0|80B7448|80B663C|80BAC4C|80B60C8||||
|8023BE0|8027E44|80279B8|802981C|802987C|SetupWarpTargetSelection|int SetupWarpTargetSelection(int a1)||
|8047620|805093C|8050160|8056240|8055298|StartBattleAnimHitEffects|int StartBattleAnimHitEffects(int a1, int a2, int a3, int a4)||
|8023CFC|8027F74|8027AE8|8029944|80299B8|SetupHammerneUseSelection|int SetupHammerneUseSelection(int a1)||
|805440C|805D08C|805C8A4|8061FE6|8060ED8||||
|0|8009310|8009480|8007D98|8007E9C|DialogueTextChoice_OnLoop|int DialogueTextChoice_OnLoop(int a1)||
|804DC8C|805769C|8056EB4|805D708|805C96C||||
|804DE84|805795C|8057174|805D9B0|805CC14||||
|802F77C|80362E4|8035E0C|803AD18|803ACF8||||
|802F798|8036300|8035E28|803AD38|803AD18|IsTerrainIdInList|signed int IsTerrainIdInList(_BYTE *a1, int a2)||
|804574C|804E944|804E168|8053C14|8052F24||||
|0|8055474|8054C8C|805B558|805A7B4||||
|8033AA4|803AC7C|803A7C8|803F6BC|803F72C||||
|801650C|80165F0|8016174|80162E8|8016540|MakeNewItem|[int MakeNewItem(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L296)||
|80373A4|803E8E8|803E454|8043840|80438C0||||
|0|8079D38|8079568|808598C|8083654||||
|0|8063D44|806355C|806FDCC|806DAB0||||
|0|80809AC|0|8089268|8086FAC||||
|80373E0|803E924|803E490|8043884|8043904||||
|0|8005A94|8005C00|8004470|8004568|GetStringTextWidthAscii|int GetStringTextWidthAscii(unsigned __int8 *a1)||
|0|80283AC|8027F20|8029D7C|8029DF0|TorchTargetSelection_Loop|int TorchTargetSelection_Loop(unsigned __int16 **a1)||
|8033380|803A544|803A090|803EF70|803EFE0|AiIsUnitAtPositionDifferentAllegiance|bool AiIsUnitAtPositionDifferentAllegiance(int a1, int a2)||
|804C928|80560F8|8055910|805C1F8|805B454||||
|0|808940C|8088AA8|80922F4|8090014||||
|8086D04|80A2FE0|80A236C|80AC314|80A78FC||||
|8025A90|802A620|802A170|802C6F8|802C7C0|BattleApplyWeaponTriangle|int BattleApplyWeaponTriangle(int a1, unsigned __int8 *a2)||
|0|8018B7C|801878C|8018A1C|8018D08|IsUnitMagicSealed|[s8 IsUnitMagicSealed(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1355)||
|80505A0|8059DD0|80595E8|80601B0|805F0B0||||
|8038AA4|8040270|803FB64|80451D4|8045234||||
|8041844|804AA68|804A280|804FA3C|804ECB0|StartMenuCore|[    struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L174)||
|0|80B4A90|80B3C58|80C8348|80C3590||||
|0|8004E4C|8004F70|8003750|8003804|DBG_BG_Print|int DBG_BG_Print(_WORD *a1, _BYTE *a2)||
|0|8028EA0|8028A24|802A93C|802A9D0|BattleApplyMiscBonuses|int BattleApplyMiscBonuses(char *a1)||
|8032CB4|8039E78|80399C4|803E890|803E900||||
|0|803AD78|803A8C4|803F7BC|803F82C||||
|8035EC0|803D3DC|803CF2C|8042330|80423B0||||
|8084D64|80A0C84|80A02B8|80A94E8|80A4AA4||||
|0|8086288|8085888|808F070|808CD74|Loop6CUI1_Displayed|int Loop6CUI1_Displayed(int a1)||
|8029A88|802F0B0|802EBE4|8031924|80319D8|IsWeaponMagic|signed int IsWeaponMagic(signed int result)||
|0|80046C4|80047E8|8002F3C|8002FEC|HaltEachProcMarked|int HaltEachProcMarked(int a1)||
|0|80069E0|8006B50|800544C|8005544|SetFaceGfxConfig|int SetFaceGfxConfig(int *a1)||
|0|8040230|803FB24|8045190|80451F0|NameSelect_80451F0|int NameSelect_80451F0()||
|0|806452C|8063D44|807069C|0||||
|8037EA0|803F3F0|803EF60|8044340|80443B0||||
|0|8078C48|8078478|8085C34|80838FC|EvCheck04_CHARASM|signed int EvCheck04_CHARASM(int *a1)||
|802E8E0|80351D4|8034CFC|8039B40|8039AC8|CpDecide_Suspend|int CpDecide_Suspend()||
|800C184|8009D70|8009EE0|8008808|800890C||||
|80702BC|80821F8|808149C|808ABD8|808894C|StartStatScreen|[void StartStatScreen(struct Unit* unit, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L1904)||
|801D160|801EA74|801E6F0|801EC48|801EFF0||||
|803B5A0|8042DCC|8042728|8047CA0|8047D88|SioMenu_8047D88|int SioMenu_8047D88(int a1)||
|803B31C|8042B48|80424A4|8047A4C|8047B34|SioMenu_8047B34|int SioMenu_8047B34(int a1)||
|0|809A47C|8099AC0|80A3458|0||||
|0|80A0D58|80A038C|80A95D4|80A4B90|GGM_GetCompletionCount|int GGM_GetCompletionCount(int a1)||
|0|8090930|808FFF0|8099438|8097154||||
|0|8018FC8|8018BD8|8018FCC|0||||
|806DE20|802849C|8028010|8029E64|8029ED8|NewTorchStaffSelection|int NewTorchStaffSelection()||
|80296F4|802EC3C|802E770|80314BC|8031570|GetConvoyItemCount|int GetConvoyItemCount()||
|804B720|8054EBC|80546D4|805AF74|805A1D0||||
|804B768|8054F04|805471C|805AFC0|805A21C||||
|8018224|8018968|8018578|8018804|8018AF0|GetUnitAidIconId|[int GetUnitAidIconId(u32 attributes) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1259)||
|8074384|80896EC|8088D8C|8092604|8090324||||
|801C3C8|800EC2C|800ED20|800D45C|800D198|EventEngineExists|[u8 EventEngineExists(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L366)||
|8089B3C|80A62F4|80A560C|80AF790|80AACBC||||
|8051F88|8059418|8059D48|80608D4|805F7D4||||
|804F354|8061B7C|805E5D0|80633F4|80622F4||||
|8053A98|805A530|805DD7C|8063C48|8062B48||||
|8055870|805E564|805F078|80646E8|80635E8||||
|802E43C|803471C|8034244|803752C|803746C||||
|0|80AB054|80AA18C|80B2C1C|80AE1A0|FadeIn_Loop|int FadeIn_Loop(int a1)||
|808C58C|80AECCC|80ADDB4|80B6470|80B1850||||
|802AFB4|80306D4|803020C|803305C|8033148|PointInCameraBounds|[u8 PointInCameraBounds(s16 x, s16 y, u8 xBound, u8 yBound) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L265)||
|0|80070AC|800721C|8005B28|8005C24|ShouldPortraitBeSmol|signed int ShouldPortraitBeSmol(int a1)||
|8076060|808B288|808A92C|8094208|8091F10||||
|0|8098C48|809835C|80A1E10|809FB70||||
|0|8062940|8062158|8067884|0||||
|80995B0|8097D1C|809759C|80A0ED8|809EC38||||
|0|80BA15C|80B9654|80BC590|80B7B30||||
|802CC80|8032E34|8032904|8035A2C|803592C|ExecSelfDamage|int ExecSelfDamage(_DWORD *a1, int a2)||
|803AED0|80426F8|804203C|80475F0|80476CC||||
|80987E8|80BCF98|0|80CB650|80C6704||||
|8054870|805D350|805CB68|8062280|8061180||||
|80546D0|805D4F4|805CD0C|80623E4|80612E4||||
|808A4B8|80A6C3C|80A5F98|80B02F8|80AB83C||||
|0|8096330|8095B28|809F418|809CF48||||
|0|80935C4|8092CB8|809C5EC|809A31C||||
|0|80A5A60|80A4D74|80AEF60|80AA47C||||
|0|80055C8|0|8003F10|0|String_GetEnd|unsigned __int8 *String_GetEnd(unsigned __int8 *result)||
|8073454|80870E8|80866FC|808FEB0|808DBC8||||
|804B8B0|8055034|805484C|805B0FC|805A358||||
|0|8083C54|8083254|808C8E0|808A5D0||||
|806AB74|8078DC4|80785F4|8085D90|8083A58|EvCheck0A_SHOP|signed int EvCheck0A_SHOP(char *a1)||
|803D478|8045CEC|8045500|804AAC8|8049CD4||||
|80700A4|8081FD8|808127C|808A9C8|808873C||||
|804BE4C|8034CBC|80347E4|8037B40|8037AA8|IsBallista|bool IsBallista(int a1)||
|803E584|8046E5C|8046674|804BC1C|804AE7C||||
|808BE70|80AD1A4|80AC2C0|80B4B48|80AFF30||||
|0|8013070|80129B8|80BCEA0|8009D6C||||
|0|802AE44|802A994|802CFF4|802D0BC||||
|0|80A119C|80A0810|80A9A28|80A5010|SaveGame|int SaveGame(int a1)||
|8072EAC|8086110|8085710|808EEFC|808CC00||||
|0|8054F4C|8054764|805B00C|805A268|checkIfCritical|signed int checkIfCritical(void *AIS)||
|801D5E4|801EEF8|801EB74|801F0E8|801F490||||
|8013E10|80137F4|80132D4|8013174|80130BC||||
|8092854|8004584|80046A8|8002DEC|8002E9C|FindProc|int *FindProc(int a1)||
|806AA40|8078C90|80784C0|8085C70|8083938|EvCheck05_LOCA|signed int EvCheck05_LOCA(int *a1)||
|806C000|807A6D8|8079C64|8086E98|8084BCC||||
|80851B4|80A1278|80A08EC|80A9B40|80A5128|LoadGame|int LoadGame(int a1)||
|0|80AE3C4|80AD49C|80B5C3C|80B1020||||
|80895A0|80A5E18|80A5130|80AF270|80AA790||||
|0|802A2E0|8029E30|802C354|802C40C||||
|8022AF0|8026B20|8026694|80281D0|802823C|GetUnitSupportLevel|[int GetUnitSupportLevel(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L59)||
|805B4D8|80675E4|8066DF8|80736C4|80711C0||||
|0|80175CC|8017178|8017254|80174AC|IsItemUnsealedForUnit|[s8 IsItemUnsealedForUnit(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L1022)||
|0|80B8C14|80B7EB0|80BB1F8|80B6720||||
|803081C|803757C|80370C8|803BF60|803BFD0|AiArePointsWithinDistance|bool AiArePointsWithinDistance(int a1, __int16 a2, int a3, int a4, unsigned __int8 a5)||
|0|8009FAC|800A11C|8008A40|8008B44|GetStringTextWidthWithDialogueCodes|signed int GetStringTextWidthWithDialogueCodes(unsigned __int8 *a1, unsigned __int8 a2)||
|8084CD8|80A0AF0|80A0124|80A9348|80A4904|BWL_GetTotalBattles|int BWL_GetTotalBattles()||
|8025CD8|802A8BC|802A40C|802C9A8|802CA70||||
|801FE30|8022DFC|8022984|8023A90|8023ACC|StaffCommandEffect|signed int StaffCommandEffect(int a1, int a2)||
|0|8055624|8054E3C|805B710|805A96C||||
|0|8091628|8090CE4|809A040|8097D68||||
|0|809A9FC|809A024|80A390C|0||||
|0|80057C4|8005900|80041A0|8004268|DrawGlyph1DTileNoClear|int DrawGlyph1DTileNoClear(int a1, int a2)||
|8047C28|8050F54|8050778|8056920|805598C|GetSpellAnimationStartFrame|signed int GetSpellAnimationStartFrame()||
|8024DF0|80297D4|8029324|802B4CC|802B578|UpdateBattleTriangleAttackData|int UpdateBattleTriangleAttackData(int a1, int a2)||
|80152E8|80150F0|8014C74|8014A3C|8014A14||||
|8018500|8018FE4|8018BF4|8018FEC|80192F4|GetUnitMiniPortraitId|[inline int GetUnitMiniPortraitId(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L322)||
|0|8093540|8092C34|809C4EC|809A21C||||
|8020488|8023454|8022FC8|8024198|80241DC|StealCommandEffect|signed int StealCommandEffect(int a1, int a2)||
|0|8030958|8030490|803333C|803342C||||
|0|801D50C|801D108|801D590|801D92C|Setup6CRangeDisplayGfx|int Setup6CRangeDisplayGfx()||
|80419CC|804AC0C|804A424|804FC34|804EEA8|EndMenu|[struct Proc* EndMenu(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L248)||
|0|80B73FC|80B65F0|80BABF4|80B6070|GetOverallRank|signed int GetOverallRank(int a1, int a2, int a3, int a4, int a5)||
|0|80211D8|8020D6C|8021D68|8021F08||||
|807090C|8082914|8081BB4|808B314|8089088||||
|802001C|8022FF0|8022B78|8023C88|8023CC4||||
|80848DC|80A0510|809FB44|80A8D00|80A42BC|GetNextChapterWinDataEntryIndex|int GetNextChapterWinDataEntryIndex()||
|805B20C|8067318|8066B2C|8073418|8070EF4||||
|8016928|8016B90|8016730|8016894|8016AEC|GetItemAfterUse|[u16 GetItemAfterUse(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L467)||
|0|80064E0|8006650|8004F0C|8005004|DeleteAIS|int DeleteAIS(int a1)||
|0|80967C0|8095FCC|809F8E0|809D644||||
|80169BC|8016C28|80167C8|8016934|8016B8C|IsItemCoveringRange|[s8 IsItemCoveringRange(int item, int range) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L499)||
|0|8025698|802520C|8026BC0|8026C1C||||
|804AFD4|8054798|8053FB0|805A714|8059970||||
|80163F4|80164BC|8016040|8016198|80163F0|GetItemHpBonus|[int GetItemHpBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L205)||
|801641C|80164E8|801606C|80161C8|8016420|GetItemPowBonus|[int GetItemPowBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L218)||
|8016444|8016514|8016098|80161F8|8016450|GetItemSklBonus|[int GetItemSklBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L231)||
|801646C|8016540|80160C4|8016228|8016480|GetItemSpdBonus|[int GetItemSpdBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L244)||
|8016494|801656C|80160F0|8016258|80164B0|GetItemDefBonus|[int GetItemDefBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L257)||
|80164BC|8016598|801611C|8016288|80164E0|GetItemResBonus|[int GetItemResBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L270)||
|80164E4|80165C4|8016148|80162B8|8016510|GetItemLckBonus|[int GetItemLckBonus(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L283)||
|802D638|8033884|8033354|80365D8|80364D8||||
|0|8006398|8006508|8004DC0|8004EB8|ClearAISs|int ClearAISs()||
|803F5C8|8047ED0|80476E4|804CCEC|804BF4C||||
|8019528|801A164|8019D84|801A23C|801A570|sub_801A570|[void sub_801A570(int connexion, int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L112)||
|8016D34|801718C|8016D38|8016DFC|8017054|IsItemStealable|[s8 IsItemStealable(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L821)||
|0|8086F18|808652C|808FCE4|808D9FC||||
|8052FB4|8060494|805FCAC|80652FC|80641F0||||
|807CB78|80A5464|80A47EC|80AE810|80A9DBC||||
|0|80054B0|80055E0|8003DEC|8003EBC|Text_DrawBlank|int Text_DrawBlank(int a1, _WORD *a2)||
|807CAD4|80ABB50|80AAC74|80B37C4|80AEB8C||||
|80400FC|8048A2C|8048240|804D5DC|804C83C||||
|801EA6C|80219D4|802155C|802259C|80225D0||||
|806F324|808116C|0|8089AC4|8095A44||||
|804B6D8|8054E74|805468C|805AF28|805A184|IsBatteRoundTypeAMiss|signed int IsBatteRoundTypeAMiss(__int16 a1)||
|0|8086C68|8086278|808FA6C|808D784|Loop36CPI|int Loop36CPI(_BYTE *a1)||
|801AF78|801C224|801BE84|801C1F0|801C588|DebugChargeMenu_Idle|int DebugChargeMenu_Idle(int a1, int a2)||
|0|803F788|0|80446FC|8044768|NameSelect_8044768|int NameSelect_8044768(int a1)||
|8073FE0|80A6BD8|80A5F18|80B0278|80AB7BC||||
|0|800EF98|800F08C|800D474|800D1B0|BattleEventEngineExists|[int BattleEventEngineExists(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L370)||
|8025A38|802A5A8|802A0F8|802C678|802C740||||
|0|80931F8|80928EC|809C178|8099E98||||
|0|80B4B08|80B3CD0|80C83A4|80C35EC||||
|0|80313E8|8030EFC|8033DDC|8033ED4|CallCursorShop|int CallCursorShop(int a1)||
|80875FC|80A3930|80A2CBC|80ACC4C|80A8234||||
|803AAF8|8042320|8041C44|804723C|8047308||||
|80873CC|80A36F8|80A2A84|80ACA38|80A8020||||
|0|805FC24|805F43C|8064AB0|80639B0||||
|0|800F528|800F61C|800D014|800CD50|EventC6_|signed int EventC6_(int a1)||
|8048470|805194C|8051170|8057318|8056390|ekrBattleEnding_8056390|int ekrBattleEnding_8056390(signed __int16 *a1)||
|0|8009C8C|8009DFC|800873C|8008840||||
|806D8B0|80B9DAC|80B924C|80BC1B8|80B770C||||
|80858E4|80A1BEC|80A1258|80AA62C|80A5C14|LoadSuspendedGame|int LoadSuspendedGame(int a1)||
|800D928|800F4C0|800F5B4|800CFB4|800CCF0|EventC5_|int EventC5_(int a1)||
|804B37C|8054B18|8054330|805ABBC|8059E18|InitLeftAIS|void InitLeftAIS(int x)|左侧AIS初始化<br>x控制近接还是远程|
|8039650|8040E1C|8040714|8045D60|8045DC0||||
|0|80335D8|80330A8|80362AC|80361AC||||
|0|809F88C|809EE50|80A8168|80A3724||||
|804B4C0|8054C5C|8054474|805AD00|8059F5C|InitRightAIS|void InitRightAIS(int x)|右侧AIS初始化<br>x控制近接还是远程|
|0|8059330|8059698|806E374|806C050||||
|80200B4|8023088|8022C10|8023D24|8023D64||||
|0|801B630|804408C|8049638|8052DB8||||
|803CAAC|80452F8|8044B08|804A0B4|80492B8||||
|0|804488C|0|804A73C|801BA58|Loop6C_WaitForSelectPress|[void Loop6C_WaitForSelectPress(struct Proc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L62)||
|80449C4|804DD50|804D574|8052FC4|80522CC||||
|0|80BB528|80BA9B0|80CB2A0|80C6354||||
|8031118|8037E9C|80379E8|803C884|803C8F4|AiIsUnitScriptCharAndEnemyWithActiveUnit|bool AiIsUnitScriptCharAndEnemyWithActiveUnit(char *a1)||
|8031158|8037EDC|8037A28|803C8C4|803C934|AiIsUnitScriptClassAndEnemyWithActiveUnit|bool AiIsUnitScriptClassAndEnemyWithActiveUnit(int a1)||
|0|8034D14|803483C|8037BA8|8037B10|GetBallistaItemUses|int GetBallistaItemUses(int a1)||
|8015504|801530C|8014E90|8014C60|8014C38||||
|0|8097E64|80976F0|80A102C|809ED8C||||
|0|801D844|801D440|801D8A0|801DC3C|Loop6C_KOIDO|int Loop6C_KOIDO(int a1)||
|80197B4|801A3F0|801A010|801A4D0|801A7F4||||
|0|8017A64|8017674|8017714|801796C|UnitClearInventory|[void UnitClearInventory(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L430)||
|8047358|80503A0|804FBC4|8055CD0|8055000|StartEndEfxSpellCast|int StartEndEfxSpellCast()||
|8086D44|80A3020|80A23AC|80AC358|80A7940||||
|0|802A5D0|802A120|802C6A4|802C76C|BattleReverseWTriangeEffect|int BattleReverseWTriangeEffect(int a1, int a2)||
|808E7CC|8044004|8043828|8048DC0|0||||
|8084798|80A0358|809F98C|80A8B48|80A4104|SaveClearedBWLAndChapterWinData|int SaveClearedBWLAndChapterWinData(int a1)||
|0|80AD260|80AC384|80B4C30|80B0018||||
|8038160|80439BC|80431E0|80487D8|0||||
|0|80799C0|80791F0|8085658|8083320|GetCurrentChapterBallistae2Ptr|int GetCurrentChapterBallistae2Ptr()||
|8022DB4|8026E1C|8026990|80284C0|802852C|GetSupportBonusEntryPtr|char *GetSupportBonusEntryPtr(char *result)||
|8083180|809E4D0|809DAB8|80A6D34|0||||
|801E7B8|8020674|802020C|8020FB8|80212C0||||
|8030230|8036D98|80368C0|803B7D0|803B7C8|AiGetBestItemSlotIndexToSteal|int AiGetBestItemSlotIndexToSteal(int a1)||
|8037E14|803F364|803EED4|804421C|8044324||||
|8089684|80A5EFC|80A5214|80AF2CC|80AA7EC||||
|0|80875FC|8086C10|8090474|808E19C||||
|808665C|80A2AC0|80820CC|80AB610|80A6BF8||||
|0|802BD6C|802B8AC|802DE40|802DF08||||
|8040154|8048A84|8048298|804D634|804C894||||
|80243CC|8028A34|80285A8|802A4C0|802A558|Roll2RNIfBattleStarted|int Roll2RNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2)||
|8015AD0|8015998|801551C|8015624|8015608|SetupBackgroundForWeatherMaybe|int SetupBackgroundForWeatherMaybe()||
|803F224|8047B2C|8047340|804C940|804BBA0||||
|803F3BC|8047CC4|80474D8|804CADC|804BD3C||||
|0|8012680|8011FEC|8009194|80092A4|AP_Delete|[void AP_Delete(struct APHandle* handle) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L75)||
|802A99C|80300BC|802FBF4|8032A54|8032B18|GetPointAlongPath|[s32 GetPointAlongPath(s8 x, s8 y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L48)||
|8037D74|803F2C4|803EE34|8044200|8044280||||
|803CA90|80452DC|8044AEC|804A094|8049298||||
|805E7D8|806AEFC|806A71C|80775F4|80751BC||||
|8040C90|80495DC|8048DF4|804E184|804D3F0||||
|803CB94|80453E0|8044BF0|804A1A4|80493A8||||
|806F824|80816F8|808099C|808A0B4|8087E28||||
|8025880|802A3C0|8029F10|802C46C|802C534|ComputeExpFromBattle|signed int ComputeExpFromBattle(int a1, _DWORD *a2)||
|0|809DFE8|809D5D0|80A6878|80A2AAC||||
|804CF34|805689C|80560B4|805C934|805BB84||||
|803CCBC|8045504|8044D14|804A2D0|80494D4||||
|0|8050530|804FD54|8055E64|0||||
|0|8050548|804FD6C|8055E80|0||||
|801743C|80179D8|80175E8|8017680|80178D8|SetUnitStatus|[void SetUnitStatus(struct Unit* unit, int status) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L370)||
|802AFF8|8030718|8030250|803309C|803318C|DrawPathArrow|[void DrawPathArrow(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L278)||
|8047ED4|80513B0|8050BD4|8056D7C|8055DF4|ekrBattleStarting_8055DF4|int ekrBattleStarting_8055DF4(signed __int16 *a1)||
|0|8018C04|8018814|8018AA4|8018D90|GetClassSMSId|[int GetClassSMSId(int classId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1388)||
|802FA58|80365C0|80360E8|803AFFC|803AFDC|AiSomethingCheckPick|signed int AiSomethingCheckPick(int a1, _DWORD *a2, _WORD *a3)||
|0|8093DC8|80934BC|809CDBC|809AAF0||||
|8015208|8015010|8014B94|8014958|8014930||||
|80791A0|808E5C8|808DC9C|80975B4|80952D4||||
|0|804A068|8049880|804EBF0|804DE60||||
|801C5B0|8082D48|8081FE8|808B7AC|808953C|StartHelpPromptSprite_Unused2|[struct Proc* StartHelpPromptSprite_Unused2(int x, int y, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2594)||
|0|802E3E0|802DF20|8030C44|8030CF4|InitPlaythroughState|[void InitPlaythroughState(int isDifficult, s8 unk) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L935)||
|8038EC0|804068C|803FF80|80455E0|8045640||||
|8029DE4|802F428|802EF5C|8031CA4|8031D58|AdjustArenaOpponentPower|signed int AdjustArenaOpponentPower()||
|8019600|801A23C|8019E5C|801A304|801A640|GenerateBestMovementScript|[void GenerateBestMovementScript(int x, int y, u8 output[])](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L145)||
|0|80A0B14|80A0148|80A936C|80A4928|BWL_GetTotalWins|int BWL_GetTotalWins()||
|0|8013488|8012F14|800A118|800A3B8|FilterSomeTextFromStandardBuffer|[char *FilterSomeTextFromStandardBuffer(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/messdecode.c#L196)||
|0|807CE00|807C38C|80BA8CC|80B5D48||||
|80630C8|8070338|806FB4C|807E114|807BDD0||||
|0|804FA30|804F254|8055180|8054498||||
|8031AD8|8038C64|80387B0|803D648|803D6B8||||
|0|806BBF8|806B40C|8078338|8075F18|StartAnimsOnPopups|int StartAnimsOnPopups()||
|0|807A22C|8079A5C|8085B30|80837F8||||
|804B930|80550B4|80548CC|805B180|805A3DC||||
|0|80AB8B4|80AA9EC|80B34A0|80AEA24||||
|0|8029AE4|8029634|802B93C|802B9F4|CanUnitNotLevelUp|bool CanUnitNotLevelUp(int a1)||
|0|80991C4|8098908|80A2378|80A00DC||||
|0|8025FE0|8025B54|802758C|80275E8|DisplayUnitAdditionalBlinkingIcons|int DisplayUnitAdditionalBlinkingIcons()||
|802DD38|8033FE8|8033B10|8036E0C|8036D0C||||
|8034AC8|803BECC|803BA18|80407C4|8040844|AiTryDoSpecialItems|signed int AiTryDoSpecialItems()||
|0|800F568|800F65C|800D04C|800CD88|EventC7_|signed int EventC7_(int a1)||
|0|800F588|800F67C|800D06C|800CDA8|EventC8_|signed int EventC8_(int a1)||
|0|800507C|80051A0|8003988|8003A3C|FlushDBGToBG2|int FlushDBGToBG2()||
|80243A0|8028A08|802857C|802A490|802A52C|RollRNIfBattleStarted|int RollRNIfBattleStarted(unsigned __int16 a1, unsigned __int8 a2)||
|806A8CC|80788FC|807812C|80851FC|8082EC4|CheckEventDefinition|unsigned __int16 **CheckEventDefinition(unsigned __int16 **a1)||
|8015EF4|8015DC0|8015944|8015A5C|8015A40||||
|8015ECC|8015D98|801591C|8015A88|8015A6C||||
|8056470|8069118|806892C|807571C|8076934||||
|8046880|804F8FC|804F120|8072BC0|8070618||||
|8070D08|8082E2C|0|808B894|8089624|LoadChapterTitleGfx|int LoadChapterTitleGfx(int a1, unsigned int a2)||
|80400A0|80489D0|80481E4|804D584|804C7E4||||
|80172D8|8017808|8017400|80174A8|8017700|GetItemIconId|[inline int GetItemIconId(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L178)||
|80260B0|802ACC4|802A814|802CDD4|802CE9C|BattleUnit_DidWeaponBreak|int BattleUnit_DidWeaponBreak(int a1)||
|80368DC|803DDF8|803D948|8042D4C|8042DC8||||
|0|8008ECC|800903C|800795C|8007A58||||
|0|80AACB0|80A9DE8|80B289C|80ADDFC||||
|8056C9C|8062EFC|8062714|8070B68|806E58C||||
|8040AEC|8049438|8048C50|804DFE4|804D24C||||
|8022A5C|8026A24|8026598|80280C4|8028130|ShowUnitSMS|int ShowUnitSMS(int a1)||
|0|80052E0|8005410|8003C24|8003CF4|Font_SetGlyphSet|int Font_SetGlyphSet(int a1)||
|8022C10|8026C80|80267F4|8028320|802838C|GetUnitSupporterInitialExp|[int GetUnitSupporterInitialExp(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L141)||
|0|80AA470|80A9594|80B3220|80AE7A4||||
|803B45C|8042C88|80425E4|8047B78|8047C60|SioMenu_8047C60|int SioMenu_8047C60(int a1)||
|8088404|80A4924|80A3CAC|80ADCA4|80A9290||||
|8005768|8005320|8005450|8003C68|8003D38|SetFont|int SetFont(int a1)||
|8018620|8019108|8018D20|801911C|8019444|GetClassData|[inline const struct ClassData* GetClassData(int classId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L193)||
|80354F0|803CA0C|803C558|804195C|80419DC|OnSerialCommunication|int OnSerialCommunication()||
|0|80AE584|80AD660|80B5E00|80B11E4||||
|0|80A5980|80A4C94|80AEDF0|80AA30C||||
|0|8079910|8079140|80A96F8|80A4CB4||||
|8038040|803F638|803F1A8|80445A8|8044614||||
|803AB10|8042338|8033410|8047258|8047324||||
|805EA70|806B194|806A9B4|8077894|807545C||||
|0|8029FAC|8029AFC|802BFFC|802C0B4|GetBattleNewWExp|signed int GetBattleNewWExp(int a1)||
|8096610|80B1A24|80B0BFC|80B92B8|80B4730||||
|804B324|8054AC0|80542D8|805AB5C|8059DB8|BattleAnimationAISInit|void BattleAnimationAISInit(int xl, int xr)||
|8084CFC|80A0B88|80A01BC|80A93E8|80A49A4|BWL_GetTotalExpGained|int BWL_GetTotalExpGained()||
|0|802A324|8029E74|802C398|802C450||||
|0|80B19AC|80B0B84|80B9254|80B46CC||||
|0|80A56A0|0|80AEA84|80AA030||||
|0|80054CC|80055FC|8003E0C|8003EDC|GetStringTextWidth|int GetStringTextWidth(unsigned __int8 *a1)||
|803DEE0|80467B0|8045FC4|804B55C|804A7C0||||
|8018528|8019010|8018C20|8019018|8019340|GetUnitLeaderCharId|[inline int GetUnitLeaderCharId(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L329)||
|803E964|8047264|8046A7C|804C018|804B278||||
|0|80846E4|8083CE8|808D488|808B178||||
|80928C0|80850BC|8090148|80B389C|80AEC7C||||
|0|80B84A4|80B76F8|80D2728|80CDA38||||
|806B8FC|8079F68|8079798|8085F88|8083C60|CheckLocalEventId|bool CheckLocalEventId(int a1)||
|806B970|8079FDC|807980C|8085F70|8083C48|ClearLocalEvents|int ClearLocalEvents()||
|8022064|8025B80|80256F4|802710C|8027168|GetUnitMapSpritePaletteIndex|signed int GetUnitMapSpritePaletteIndex(signed int result)||
|8037D8C|803F2DC|803EE4C|80442A8|804429C||||
|0|80034C8|80035EC|800226C|800231C|Sound_FadeOut800231C|[void Sound_FadeOut800231C(int speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L68)||
|0|80055DC|8005718|8003F28|8004004|Text_AppendString|int Text_AppendString(int a1, unsigned __int8 *a2)||
|806C998|8031114|8030C28|8033B20|8033C10|SALLYCURSOR6C_StartUnitSwap|int SALLYCURSOR6C_StartUnitSwap(signed int a1)||
|80603C4|806CF4C|806C760|807AFE0|8078BCC|MU_FogBumpFx_DisplayLoop|int MU_FogBumpFx_DisplayLoop(int a1)||
|8031900|8038A0C|8038558|803D3E0|803D450|AiTryDoOffensiveAction|int AiTryDoOffensiveAction(int a1)||
|8071B44|807E3E8|807D6B4|808C4C8|808A1B8||||
|806BA34|807A0A0|80798D0|8086040|8083D18|ClearGlobalTriggerState|int ClearGlobalTriggerState()||
|0|8095430|8094BD4|809E37C|809C0B4||||
|0|8020904|802049C|802155C|8021864||||
|806DBA8|80218F8|8021480|807A290|8077E6C||||
|8072100|8010AF4|0|8011C88|8011BA4||||
|0|80AC640|80AB75C|80B40F0|80AF4D0||||
|80602E0|806CE68|806C67C|807AF1C|8078B08|MU_FogBumpFx_TransitionInLoop|int MU_FogBumpFx_TransitionInLoop(int a1)||
|0|8025D9C|8025910|8027348|80273A4|SMS_DisplayAllFromInfoStructs|int SMS_DisplayAllFromInfoStructs()||
|0|809402C|8093734|80D2E44|80CE148||||
|0|8003550|8003674|80022CC|800237C|Sound_FadeOut800237C|[void Sound_FadeOut800237C(int speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L87)||
|802F4C8|8035F10|8035A38|803A99C|803A924|AiGetClosestUnitPosition|signed int AiGetClosestUnitPosition(int a1, _WORD *a2)||
|8054EDC|8004960|8004A84|80C6C10|80C1E54|SleepCallback6C|int SleepCallback6C(_6CStruct *_6C)|sleepTimer--,减到0则跳出睡眠循环|
|8058720|8064FF4|806480C|80C7F60|80C31A8||||
|0|809F70C|809ECD0|80A7FC8|80A3584||||
|803A5E4|803ED78|803E8E4|80BEC58|80B9DC4||||
|803F514|8041DFC|804170C|80C5588|80C07B8||||
|803F534|8047E1C|8047650|80C6814|80C1A58||||
|808D938|8047E3C|803E8E4|80C801C|80C3264||||
|80213B0|8024774|80242E8|80258B4|8025904|MakeTerrainHealTargetList|void MakeTerrainHealTargetList(int phase)||
|0|80AD100|80AC21C|80B4AA4|80AFE8C||||
|8030654|80373B0|8036ED8|803BD70|803BDE0|FindClosestBestPosition|signed int FindClosestBestPosition(int a1, int a2, int a3, signed __int16 *a4)||
|0|809F770|809ED34|80A8030|80A35EC||||
|0|80B4BB0|80B3D78|80C8418|80C3660||||
|8024B40|80294EC|802903C|802AF00|802AF90|BattleCheckDoubling|signed int BattleCheckDoubling(int a1, _DWORD *a2)||
|0|803602C|8035B54|803AA9C|803AA40||||
|0|800F070|800F164|80124DC|801240C||||
|0|8000E08|8000E30|8000C58|8000C80|NextRN_N|[int NextRN_N(int max) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L80)||
|80992DC|807A124|8079954|80BDA28|80B8B60||||
|8001264|8001320|8001348|8000EF4|8000F44|BG_GetControlBuffer|[struct BgCnt *BG_GetControlBuffer(u16 bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L93)||
|0|80A6108|80A5420|80AF54C|80AAA78||||
|0|809DC44|809D22C|80A65CC|80A2800||||
|0|809DD98|809D380|80A66AC|80A28E0||||
|804DD94|8057634|8062FEC|805EBA4|805CE94||||
|804F594|8059108|8056E4C|806F85C|806D62C||||
|804F96C|80594E0|805740C|806F948|806D540||||
|0|800F46C|800F560|800CF5C|800CC8C|EventC4_|int EventC4_(int a1)||
|8041FF8|804B2BC|804AAE0|80C7290|80C24D8|MarkSomethingInMenu|int MarkSomethingInMenu()||
|8070668|80040C0|80041E4|80029D8|8002A88|sub_8002A88|[void sub_8002A88(int songId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L452)||
|0|800EA10|800EB04|8010C84|8010B48||||
|8068628|80759E8|8075218|8081970|807F630|BG0Shaker_Loop|int BG0Shaker_Loop(int a1)||
|8025104|8029B10|8029660|802B970|802BA28|CheckForLevelUp|int CheckForLevelUp(int a1)||
|0|8051020|8050844|8056A08|8055A64||||
|80619B0|806EC60|806E474|807CBC4|807A80C|MapAnim_Cleanup|[void MapAnim_Cleanup(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L71)||
|8070DA8|8082ECC|8082440|808B99C|80896D8||||
|805FE9C|806CA1C|806C230|807AC48|8078824|MU_StepSound_OnSecondSound|int MU_StepSound_OnSecondSound(int a1)||
|800DB38|800ED58|800EE4C|8011730|8011644|NewGoldGotPopup|int NewGoldGotPopup(int a1, int a2, int a3)||
|0|809B214|809A83C|80A40A0|0||||
|0|805B2C0|805AAD8|806C32C|806A008||||
|0|80ADAA0|80ACBC8|80B5378|80B0760|InitBonusContentClaimList|bool InitBonusContentClaimList()||
|808A524|80A6CD0|80A602C|80B0354|80AB89C||||
|804E280|805DCDC|8061840|80687DC|8066434||||
|0|8065480|8064C90|807308C|8070AE4||||
|0|8095830|8094FE4|809E794|809C4E4||||
|8067720|8074968|807416C|8080EE4|807EBA4|MapAnimLevelUp_DrawActorStat|int MapAnimLevelUp_DrawActorStat(int a1, int a2, int a3, int a4, char a5)||
|800324C|80037A8|80038CC|8002440|80024F0|Sound_SongVolumeTransitionAProc_Loop|int Sound_SongVolumeTransitionAProc_Loop(int a1)||
|0|807B2DC|807A868|8018CD4|8018FC0|sub_8018FC0|[void sub_8018FC0(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1509)||
|0|805E158|805D970|8062F8C|8061E8C||||
|805B2BC|80673C8|8066BDC|80734BC|8070FA4||||
|8013C18|80135FC|80130DC|8012F78|8012EC0|String_CopyTo|int String_CopyTo(_BYTE *a1, _BYTE *a2)||
|808B9B4|803F774|803F2E4|80446E4|8044750||||
|808B9B4|80ABC60|80AAD7C|80B38B4|80AEC94||||
|0|8082D1C|8081FBC|808B750|80894E0|StartHelpPromptSprite|[struct Proc* StartHelpPromptSprite(int x, int y, int palid, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2578)||
|0|8060124|805F93C|8079AD4|80776B0||||
|0|808FFF4|808F6B4|8098874|8096590||||
|0|802BFD0|802BB10|802E234|802E2FC|RemoveTrap|[struct Trap* RemoveTrap(struct Trap* trap)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L117)||
|804BACC|8055250|8054A68|805B324|805A580||||
|80515A0|805AFC8|805A7E0|8068E34|0||||
|0|80669E8|80661FC|8079C04|80777E0||||
|807089C|80828A4|8081B44|80D0DB4|0||||
|8060408|806CF90|806C7A4|807B010|8078BFC|MU_IsFogBumpFxActive|[u8 MU_IsFogBumpFxActive(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1061)||
|0|80A4320|80A36AC|80AD6EC|80A8CD4||||
|0|809DAD4|809D0BC|80A6474|80A26A8||||
|8029F34|802F578|802F0AC|8031DEC|8031EA0||||
|80176E4|8017D20|8017930|8017B54|8017E34|UnitLoadStatsFromChracter|[void UnitLoadStatsFromChracter(struct Unit* unit, const struct CharacterData* character) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L696)||
|802F5E0|8036148|8035C70|803AB9C|803AB5C||||
|804119C|8049AE8|8049300|804E670|804D8DC||||
|808B40C|8060D2C|8060BB0|807F784|0||||
|0|8008DFC|8008F6C|8007890|800798C||||
|8025790|802A22C|8029D7C|802C28C|802C344|GetUnitEffectiveLevel|int GetUnitEffectiveLevel(int a1)||
|8017174|8017664|801725C|80172F0|8017548|GetItemType|[inline int GetItemType(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L106)||
|8001434|80014F0|8001518|800101C|800106C|BG_SetColorBpp|[void BG_SetColorBpp(int bg, int bitsPerPixel)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L141)||
|80449F4|804DD80|804D5A4|8052FFC|8052304|StartEfxHpBar|int StartEfxHpBar(int a1)||
|802BB0C|8031A5C|0|8034520|8034618|GetROMChapterStruct|[const struct ROMChapterData* GetROMChapterStruct(unsigned chIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L5)||
|80093AC|8007F68|80080D8|80069F4|8006AF0|Dialogue_SetCharacterDisplayDelay|int Dialogue_SetCharacterDisplayDelay(char a1)||
|0|80A5920|80A4C34|80AED2C|80AA248||||
|801863C|8019120|8018D38|801913C|8019464|GetCharacterData|[inline const struct CharacterData* GetCharacterData(int charId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L200)||
|8020A18|8023D50|80238C4|8024D54|8024DA4|IsSameAllegiance|[int IsSameAllegiance(int left, int right) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L56)||
|8020A7C|8023DB4|8023928|8024DD0|8024E20|sub_8024E20|[void sub_8024E20(u32 amt) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmgold.c#L21)||
|80030B4|80035EC|8003710|8002330|80023E0|SoundStuff_80023E0|[void SoundStuff_80023E0(int speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L107)||
|8082708|80912AC|8090968|8099CC0|80979DC||||
|0|808FFD0|808F690|80C7D54|80C2F9C||||
|0|80BAE6C|80BA364|80AB924|80A6F0C||||
|8065E78|80730DC|80728F0|807FF28|0||||
|8000E5C|8000E5C|8000E84|8000C90|8000CB8|Roll2RN|[s8 Roll2RN(int threshold) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L89)||
|0|8028C08|802877C|802A69C|802A730|SetupBattleWeaponData|int SetupBattleWeaponData(_DWORD *a1, signed int a2)||
|0|806C738|806BF4C|807AAB8|8078694|MU_SetFacing|[void MU_SetFacing(struct MUProc* proc, int facingId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L738)||
|80249D0|80291F8|8028D48|802ABD0|802AC60|ComputeHit|int ComputeHit(int a1, int a2)||
|803AF7C|80427A4|80420F0|80476A4|8047780||||
|801FFC0|8022F94|8022B1C|80463D8|804645C||||
|0|80AD704|80AC82C|80BBD30|80B7274||||
|0|809BA38|809B064|80A48A8|80A0AC0||||
|0|8064330|8063B48|80704AC|806E1F0|StartEfxChillAnime|int StartEfxChillAnime(int a1, int a2)||
|0|80A7A60|80A6D68|8009C7C|8009D1C||||
|806042C|806CFB4|806C7C8|807B028|8078C14|MU_State_WaitForFogBump|int MU_State_WaitForFogBump(int a1)||
|808CA14|80AF194|80AE27C|80B6934|80B1D14||||
|8022A6C|8026A34|80265A8|80280D8|8028144|GetUnitStandingSpriteDataFlagThing|int GetUnitStandingSpriteDataFlagThing(int a1)||
|0|800E36C|800E460|800CCEC|800CA18|EventB8_|int EventB8_(int a1)||
|0|809BF40|809B568|80A4DD0|80A0FE8||||
|0|8002BE4|0|8001BD0|8001C78|SoftResetIfKeyComboPressed|[void SoftResetIfKeyComboPressed(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L938)||
|8042070|804B334|804AB58|8050418|804F6A4|ApplyMenuCursorVScroll|[void ApplyMenuCursorVScroll(struct MenuProc* proc, int* xRef, int* yRef)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L669)||
|8017FAC|80186F0|8018300|801856C|8018858|TickActiveFactionTurn|[void TickActiveFactionTurn(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1129)||
|803D0EC|8045960|8045170|80536E0|8038ED0||||
|8071714|80839A4|801B250|806F4BC|808A320||||
|801F310|800F8A4|800F998|800D0BC|800CDF8|EventCC_|int EventCC_(int a1)||
|8031F24|80390F8|8038C44|803DAF0|803DB60|AiTryDoSteal|signed int AiTryDoSteal()||
|805F198|806B8A0|806B0C0|8077FAC|8075B78|MakeBattlePopupTileMapFromTSA|int MakeBattlePopupTileMapFromTSA(_WORD *a1, unsigned __int16 a2)||
|802D3B0|80335B4|8033084|80361B8|80360B8||||
|8058720|805DB68|805D380|80C6E4C|80C2094||||
|0|80284C8|802803C|8029E8C|8029F00|CanUnitUseItemPrepScreen|[s8 CanUnitUseItemPrepScreen(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1158)||
|8016F00|8017364|8016F10|8016FE4|801723C|GetUnitItemUseReachBits|[int GetUnitItemUseReachBits(struct Unit* unit, int itemSlot) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L890)||
|0|800844C|80085BC|8006ED4|8006FD0||||
|802D6F4|8033940|0|8036694|8036594|BattleForecase_SetupLabelText|int BattleForecase_SetupLabelText()||
|0|8003DF0|8003F14|80027E0|8002890|PlaySong|[void PlaySong(int songId, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L331)||
|8061B30|806EDE0|806E5F4|807CCBC|807A904|MapAnim_ShowPoisonEffectIfAny|[void MapAnim_ShowPoisonEffectIfAny(ProcPtr p) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L118)||
|0|8097BBC|8097430|80D27C8|80CDAD8||||
|0|80B85C0|80B77DC|8009CA4|8009D44||||
|800105C|800105C|8001084|8000D68|8000DB8|CopyToPaletteBuffer|[void CopyToPaletteBuffer(const void* src, int b, int size)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L17)||
|8000F20|8000F20|8000F48|8000CF0|8000D40|IncrementGameClock|[void IncrementGameClock() ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/time.c#L26)||
|80618D4|806EB84|806E398|807CB28|807A770|BattleUnit_ShouldDisplayWpnBroke|[s8 BattleUnit_ShouldDisplayWpnBroke(struct BattleUnit *u) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L36)||
|0|8009BE8|8009D58|80086A4|80087A8||||
|802039C|8023348|8022ED0|80240A8|80240EC|ArenaCommandUsability|signed int ArenaCommandUsability()||
|809773C|80B2D50|80B1F2C|80B9F08|80B5384||||
|8024C50|80295FC|802914C|802B03C|802B0CC|CheckForTriangleAttack|signed int CheckForTriangleAttack(int a1, int a2)||
|8061964|806EC14|806E428|807CB90|807A7D8|BattleUnit_ShouldDisplayWRankUp|[s8 BattleUnit_ShouldDisplayWRankUp(struct BattleUnit *u) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L58)||
|8066094|80732FC|8072B10|807FFE8|807DCA8||||
|80483E0|80518BC|80510E0|8057298|8056310|ekrBattleEnding_8056310|int ekrBattleEnding_8056310(int a1)||
|801B90C|801CF9C|801CB98|801CEA8|801D244|TryMakeCantoUnit|signed int TryMakeCantoUnit(unsigned __int16 **a1)||
|8016BD8|8016F04|8016AB0|8016C8C|8016EE4|IsItemDisplayUsable|[s8 IsItemDisplayUsable(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L746)||
|0|809CB24|8041C5C|809D144|809AE7C||||
|0|8082D74|8082014|801DA28|801DDC4|StartBMXFADE|int StartBMXFADE(char a1)||
|0|80A8AC8|80A7BB4|80C33E4|80BE5F8||||
|80670B8|8074300|8073B14|8080B20|807E7E0||||
|8024AB4|8029460|8028FB0|802AE40|802AED0|MakeBattle|int MakeBattle()||
|8061014|806DEC4|806D6D8|807BA2C|8079618|MU_DeathFade_OnLoop|int MU_DeathFade_OnLoop(int a1)||
|80742D0|8089638|8088CD4|8092518|8090238||||
|802368C|80277A8|802731C|8029060|80290B8|CanUnitUseTorchItem|[s8 CanUnitUseTorchItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L478)||
|0|8013128|8012A70|8009DB4|8009E54||||
|8043980|804CCE0|804C504|8051F6C|8051238||||
|0|80B58FC|80B4ADC|80C53A8|80C05C4||||
|8041B7C|804ADBC|804A5E0|804FE54|804F0E0|DrawMenuItemHover|[void DrawMenuItemHover(struct MenuProc* proc, int item, s8 boolHover)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L352)||
|0|807B3AC|807A938|800F338|800F124|Event23_BlockGameGraphics|signed int Event23_BlockGameGraphics(int a1)||
|806D868|80B63DC|80B55BC|80C3424|80BE638||||
|0|80A2D64|80A20F0|80ABFE4|80A75CC||||
|803E944|800D204|800D2F4|8025854|80258A4|MakeTargetListForPick|int MakeTargetListForPick(int a1)||
|0|801C608|801C218|801C590|801C928|CanShowUnitStatScreen|bool CanShowUnitStatScreen(int a1)||
|8061AC8|806ED78|806E58C|807CC4C|807A894|MapAnim_PrepareNextBattleRound|[void MapAnim_PrepareNextBattleRound(ProcPtr p) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L98)||
|806BF14|80652AC|807D424|80976D0|80953F0|IsCharacterForceDeployed|int IsCharacterForceDeployed(unsigned __int16 a1)||
|0|8086748|0|808F4FC|808D200||||
|80019DC|8001D64|8001D8C|8001448|800148C|BG_SetPosition|[void BG_SetPosition(u16 a, u16 b, u16 c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L387)||
|802A68C|802FCD4|802F808|8086288|8083FB0|RunCharacterEvents|int RunCharacterEvents(int a1, char a2)||
|80635E0|8070858|807006C|807E43C|807C0F8|MapAnimExpBar_FillLoop|int MapAnimExpBar_FillLoop(int a1)||
|801C39C|801DA0C|801D608|805587C|8054BA4||||
|0|80A7D9C|80A6E78|80AF4B8|80AA9D8||||
|8011EC8|800EBBC|800ECB0|800E854|800E640||||
|8011F70|8001BA0|8001BC8|800139C|80013E0|UpdateKeyStatus|[void UpdateKeyStatus(struct KeyStatusBuffer *keyStatus)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L325)||
|0|807E4C0|807D78C|803618C|803608C||||
|800DD08|800B15C|800B220|80C77B0|80C29F8||||
|0|800790C|8007A7C|8006374|8006470|GetFaceBlinkProcUnk8006470|signed int GetFaceBlinkProcUnk8006470(int a1)||
|8065F9C|8073204|8072A18|808004C|807DD0C||||
|80012E8|80013A4|80013CC|8000F54|8000FA4|GetTileIndex|[int GetTileIndex(int bg, int offset)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L109)||
|8098340|807E444|807D710|80C7C5C|80C2EA4||||
|0|8003B4C|8003C70|8002680|8002730|ISuspectThisToBeMusicRelated_8002730|[void ISuspectThisToBeMusicRelated_8002730(int volume, int b, int c, struct Proc *parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L260)||
|0|8092920|8092010|80A3018|0||||
|0|8087B00|8087148|8033DAC|8033EA4||||
|806E8C8|8080530|807F778|8088CFC|8086A40||||
|0|80A77E8|80A6B00|802E960|802EA28|sub_802EA28|[void sub_802EA28(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L640)||
|0|802414C|8023CC0|80251CC|802521C|TryAddUnitToTradeTargetList|int TryAddUnitToTradeTargetList(int a1)||
|0|807FE8C|807F0C4|806A41C|80680EC||||
|804A57C|8053AFC|8053314|8059864|8058A34|GetBattleAnimRoundTypeFlags|int GetBattleAnimRoundTypeFlags(int a1)||
|803F6C8|8047FD4|80477E8|80B1D48|80AD2A8||||
|8068338|80756F0|8074F20|80817CC|807F48C|MapAnimLevelUpProc_DisplayLevelUpSmallText|int MapAnimLevelUpProc_DisplayLevelUpSmallText(int a1)||
|0|806E154|806D968|807BB44|8079730|MU_PixelEffect_OnLoop|int MU_PixelEffect_OnLoop(int a1)||
|801D43C|801ED50|801E9CC|801EF24|801F2CC|LoadPhaseIntroGraphics|int LoadPhaseIntroGraphics()||
|0|80A79C8|80A6CD0|808CD7C|808AA6C||||
|0|801140C|8010FBC|80D1F10|80CD218||||
|0|807E658|807D908|80332E4|80333D4||||
|0|800BE6C|800BF5C|803633C|803623C||||
|806B43C|80798D4|8079104|8086240|8083F68|CheckForCharacterEvents|bool CheckForCharacterEvents(int a1, char a2)||
|8031088|8037E0C|8037958|8085CC4|808398C|EvCheck07_CHES|signed int EvCheck07_CHES(int a1)||
|801C2E8|801D958|801D554|801D9B8|801DD54||||
|80324EC|8039698|80391E4|803E0A4|803E114|AiBattleGetTileDangerWeight|signed int AiBattleGetTileDangerWeight()||
|0|8099FE8|8099628|80CB8BC|80C69B0||||
|8066C70|8073ED8|80736EC|80808C4|807E584||||
|8017410|80179AC|80175BC|8017650|80178A8|GetUnitFogViewRange|[int GetUnitFogViewRange(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L361)||
|0|8094178|0|80D39AC|80CECB0||||
|806C750|802C68C|802C1CC|809A02C|8097D54||||
|806CC80|8031B40|0|80C5314|80C0530||||
|0|8007254|80073C4|8005C9C|8005D98||||
|8032378|8039524|8039070|803DF24|803DF94|AiBattleGetTargetHpWeight|int AiBattleGetTargetHpWeight()||
|8032524|80396D0|803921C|803E0E0|803E150|AiBattleGetSubjectHpWeight|int AiBattleGetSubjectHpWeight()||
|802156C|8024938|80244AC|8025B44|8025BA0|AddAsTarget_IfCanStealFrom|int AddAsTarget_IfCanStealFrom(int a1)||
|8003CA8|8004498|80045BC|8002CF4|8002DA4|_InsertMainProc|int InsertMainProc(int a1, int a2)||
|0|807D248|807C7D4|80BB864|80B6D24|IceCrystal4|void IceCrystal4(_6CStruct *a1)||
|803FD40|8048670|8047E84|80331E0|80332D0||||
|8003CF4|80044B8|80045DC|8002D18|8002DC8|_InsertChildProc|int InsertChildProc(int a1, int a2)||
|8061878|806EB28|806E33C|807CAE4|807A72C|DisplayWpnBrokePopup|[void DisplayWpnBrokePopup(u32 a) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L23)||
|8061908|806EBB8|806E3CC|807CB4C|807A794|DisplayWRankUpPopup|[void DisplayWRankUpPopup(u32 a) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L45)||
|80837C8|80BC240|0|80B6628|80B1A08||||
|8020A04|8023D3C|80238B0|8024D3C|8024D8C|AreUnitsAllied|[int AreUnitsAllied(int left, int right) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L50)||
|0|803FF30|803F828|8044E74|8044ED8|NameSelect_8044ED8|int NameSelect_8044ED8(int a1)||
|801BC68|801D39C|801CF98|80DC020|80D73E4|__negsf2|unsigned int _negsf2(int a1)||
|802CB78|8032D2C|80327FC|807B9B0|807959C|MU_StartDeathFade|[void MU_StartDeathFade(struct MUProc* muProc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1511)||
|0|809CDD0|809C44C|80C5CCC|80C0F00||||
|80935A0|8065E38|8065648|8089F4C|8087CC0||||
|0|80B85F4|80B7810|80A6040|80A2274||||
|0|807E4A4|807D770|8088628|808635C||||
|809DE04|80C0684|80BFB40|80D64AC|80D17B0|SetSramFastFunc|int SetSramFastFunc()||
|8086D70|80A304C|80A23D8|80AC388|80A7970||||
|0|80188A4|80184B4|80D16AC|80CC990||||
|0|8063400|8062C18|806F3A4|806D080|loadMagfcast|void loadMagfcast(void *AIS, bool ifCritical)||
|8065540|80727BC|8071FD0|807FAA4|807D760||||
|80237F4|8027A04|8027578|80293B4|802940C|CanUnitUseStatGainItem|[s8 CanUnitUseStatGainItem(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L618)||
|80594CC|8033544|8033014|80C9568|80C47B0||||
|0|8005528|0|8003E6C|0||||
|0|800E44C|800E540|801E9B0|801ED58||||
|80855C4|80A1824|80A0E9C|80AA1AC|80A5794|LoadSavedUnit|int LoadSavedUnit(int a1, int a2)||
|8093394|80BB0A8|0|8098574|8096294||||
|0|800B04C|800B110|80B8FA0|80B4418||||
|0|8002E30|8002F54|8001D50|8001E00|GetBackgroundFromBufferPointer|[int GetBackgroundFromBufferPointer(u16 *ptr)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1011)||
|807226C|80851C4|80847C8|808DF74|808BC68||||
|80269FC|802BA98|802B5E8|80D10E0|80CC13C||||
|8084AEC|80A08B4|809FEE8|80851B8|8082E80|CallEventDefinition|int CallEventDefinition(int a1, unsigned __int8 a2)||
|0|80B68A4|80B5A84|8082108|807FDC8||||
|0|80BAF34|80BA42C|804CDCC|804C02C||||
|8041F54|808F604|808ECC8|80D13B4|80CC698||||
|0|8000DDC|8000E04|8000C3C|8000C64|NextRN_100|[int NextRN_100(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L68)||
|0|8020478|8020010|8020CF0|8020FF8||||
|8072218|8085170|8084774|808DF20|808BC10||||
|8041A88|804ACC8|804A4E0|804FCFC|804EF70|RedrawMenu|[void RedrawMenu(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L306)||
|8024A88|8029434|8028F84|802AE00|802AE90|ClearRounds|int ClearRounds()||
|8088B40|800CC28|800CD18|8033780|8033870|InitPrepScreenUnitsAndCamera|int InitPrepScreenUnitsAndCamera(int a1)||
|80857B0|80A1A88|80A1100|80AA460|80A5A48|SaveSuspendedGame|int SaveSuspendedGame(int a1)||
|8074EF0|808A0F4|8089794|8093058|8090D80||||
|0|8050038|804F85C|8018730|8018A1C|GetUnitMagBy2Range|[int GetUnitMagBy2Range(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1197)||
|808171C|808F010|808E6D4|809FCA0|809DA00||||
|0|80A2CB8|80A2044|80AC094|80A767C||||
|805A9F8|806C114|806B928|805FBF0|805EAF0||||
|0|807D478|807CA04|800E4E8|800E290||||
|0|808E588|808DC5C|8022348|802237C||||
|0|801096C|8010508|80C8108|80C3350||||
|80370E4|803E628|803E184|80B94B8|80B4930||||
|0|807D9AC|807CF2C|8059938|8058B08||||
|0|800CEBC|800CFAC|800BEA0|800BBB4||||
|80439CC|804CD2C|804C550|8051FB8|8051284|ekrGauge_Loop|int ekrGauge_Loop(int a1)||
|803703C|803E580|803E0D4|80434CC|8043548||||
|0|809B798|809ADC0|80AEF3C|80AA458||||
|8000E38|8000E38|8000E60|8000C78|8000CA0|Roll1RN|[s8 Roll1RN(int threshold) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L85)||
|803046C|8036FD8|8036B00|803BA10|803BA08|AiTryMoveTowards|int AiTryMoveTowards(int xPos, int yPos, int actionId, int safetyThreshold, int idkFlag)||
|0|8099BB0|80991F8|80A2C10|80A095C||||
|0|80A7778|80A6A90|80CC754|80C7844||||
|8002C04|8003054|8003178|8001FD8|8002088|FlushTiles|[void FlushTiles(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1145)||
|0|80BD304|80BC8F8|807A49C|8078078||||
|8020ED0|8024264|8023DD8|80252F4|8025344|TryAddUnitToRescueTargetList|int TryAddUnitToRescueTargetList(int a1)||
|8084438|809F10C|809E6FC|80A793C|80A2EF8|SaveMetadata_Load|int SaveMetadata_Load(void *buffer, int saveBlockId)||
|800E7F0|800BDFC|800BEEC|80337D0|80338C0||||
|0|80A13E8|80A0A60|80A9D54|80A533C|SaveUnit|int SaveUnit(char *a1, int a2)||
|80468D8|804F954|804F178|8078D54|8062ED8||||
|0|809FA3C|809F000|808605C|8083D34|CheckGlobalEventIdFrom|bool CheckGlobalEventIdFrom(signed int a1, int a2)||
|8002B04|8002F54|8003078|8001F64|8002014|RegisterTileGraphics|[void RegisterTileGraphics(void *a, void *b, int c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1121)||
|0|80371C4|8036CEC|803BBC0|803BBF4|SetAiActionMoveBest|int SetAiActionMoveBest(int a1, __int16 a2, char a3, unsigned __int8 a4, char a5)||
|805CBF4|8068DB4|80685C8|806A2E8|8067A30||||
|8076D3C|808BF20|808B5E0|8094ED0|8092BF0|SortUnitList|signed int SortUnitList(char a1, char a2)||
|0|80B38AC|80B2A88|80BA51C|80B5998||||
|8057B4C|8063DE8|8063600|8080C74|807E934||||
|804FEB8|8059A2C|8059244|806AA60|8068738||||
|8053340|80203D0|801FF68|8072974|80703C4||||
|801E144|801FE3C|801F9D4|8066FD4|80664A8||||
|8023620|802775C|80272D0|80294AC|8029504|CanUnitUseFruitItem|[s8 CanUnitUseFruitItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L670)||
|8094460|807C080|807B60C|80D11C8|80CC4AC||||
|0|801C624|0|801C5A8|801C940|PlayerPhase_MainIdle|int PlayerPhase_MainIdle(unsigned __int16 **a1)||
|0|8082A3C|8081CDC|808B438|80891AC||||
|80619E8|806EC98|806E4AC|807CBF0|807A838|MapAnim_AdvanceBattleRound|[void MapAnim_AdvanceBattleRound(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L82)||
|0|802939C|8028EEC|802AD3C|802ADCC|ComputeSpecialWeapons|int ComputeSpecialWeapons(int a1, int a2)||
|0|801C2F4|801BF54|809F45C|809D1C0||||
|0|802324C|8022DD4|8023F94|8023FD8||||
|0|80232A0|8022E28|8023FF0|8024034||||
|0|80232F4|8022E7C|802404C|8024090||||
|0|808A6AC|8089D50|8093604|809132C||||
|8048BF0|80520C4|80518E8|8057AF4|8056B70|UnitKakudai2|void UnitKakudai2(_6CStruct *ctx)||
|0|8012944|80122B0|8009458|8009568|AP_QueueObjGraphics|[void AP_QueueObjGraphics(struct APHandle* handle) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L221)||
|804A5DC|8053C3C|8053454|80599F8|8058BC8|BattleAIS_ExecCommands|int BattleAIS_ExecCommands()||
|802A718|806DD98|806D5AC|80358A8|80357A8||||
|8000BC0|8000BB8|8000BE0|8000B60|8000B88|NextRN|[int NextRN(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L7)||
|8017654|8017C58|8017868|8017A5C|8017D3C|UnitInitFromDefinition|[void UnitInitFromDefinition(struct Unit* unit, const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L655)||
|8047BA4|8050EC0|80506E4|8056890|80558F4|SpellFx_InterpretBgAnimScript|signed int SpellFx_InterpretBgAnimScript(unsigned __int16 *a1, unsigned __int16 *a2, __int16 *a3)||
|0|808AE64|808A508|8093DE4|8091AEC||||
|0|80564B8|8055CD0|805C5D8|805B828|loadRestWINH|void loadRestWINH(int a1, int a2, __int16 a3, unsigned int a4)||
|8002EDC|800332C|8003450|80D3658|80CE95C||||
|0|809CEA8|809C524|80A5944|80A1B6C||||
|802430C|80ACFC8|80AC0E4|80B4974|80AFD5C||||
|8043288|804C608|804BE2C|805183C|8050B08|ekrBattle_8050B08|int ekrBattle_8050B08(int a1)||
|805C840|8068A0C|8068220|8074EBC|80729E0|EkrClasschgFinished|bool EkrClasschgFinished()||
|805D128|80692E8|8068AFC|80759D4|80734F8|DoesEkrLevelUpSomething|bool DoesEkrLevelUpSomething()||
|801D0DC|801E9F0|801E66C|8054E9C|80540B0||||
|8066F34|8073648|80739B0|808021C|807E054||||
|80663E0|80738E0|8072E5C|8080394|807E6E0||||
|8066678|807419C|80730F4|8080A20|807DEDC||||
|8051BAC|805B210|805AA28|80C7B5C|80C2DA4||||
|80622FC|806F514|806ED28|807D7AC|807B464|SetupMapBattleMUs|int SetupMapBattleMUs()||
|80425C4|804B9C8|804B1EC|8050B14|804FDA0|IsBattleDeamonActive|bool IsBattleDeamonActive()||
|805E560|806AC84|806A4A4|8077374|8074F3C|HasBattleAnimTriangeAttackEnded|bool HasBattleAnimTriangeAttackEnded()||
|0|8003FD4|80040F8|8002938|80029E8|sub_80029E8|[void sub_80029E8(int songId, int b, int c, int d, struct Proc *parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L424)||
|0|804A12C|8049944|804ECA8|804DF24||||
|805EE2C|806B550|806AD70|808029C|807DF5C||||
|80728A4|80859B0|8084FB4|808E75C|808C45C|DrawMinimugBoxMaybe|int DrawMinimugBoxMaybe(int a1, int a2)||
|80671F4|807443C|8073C50|8012B28|8012A64||||
|808A79C|80A6EE0|80A6220|80B054C|80ABA98||||
|0|807C5A4|807BB30|80C2250|80BD444||||
|0|80B9AC4|80B8F64|80D1F8C|80CD294||||
|8065298|8072514|8071D28|8065708|8075828||||
|8085A48|80A1D80|80A13EC|80AA828|80A5E10|PackUnitStructForSuspend|int PackUnitStructForSuspend(_DWORD *a1, int a2)||
|806CC68|8034D44|803486C|8037BDC|8037B44|GetCurrentPromotedLevelBonus|signed int GetCurrentPromotedLevelBonus()||
|0|800F5A8|800F69C|800D08C|800CDC8|EventC9_|signed int EventC9_(int a1)||
|0|805F150|805E968|8068850|0||||
|8042C74|804C034|804B858|80511E0|805046C|ekrBattle_WaitForRoundAnimations|int ekrBattle_WaitForRoundAnimations(int a1)||
|804B6B0|8054E4C|8054664|805AEF8|805A154|GetAISLayerId|bool GetAISLayerId(int a1)||
|804B6C4|8054E60|8054678|805AF10|805A16C|GetAISSubjectId|bool GetAISSubjectId(int a1)||
|80527A4|805C18C|805B9A4|809F370|809D0D4||||
|0|8028918|802848C|802A38C|802A400|SetupBattleStructFromUnitAndWeapon|int SetupBattleStructFromUnitAndWeapon(void *src)||
|804BB54|80552D8|8054AF0|805B3B0|805A60C|DemoBattleAnimationInit|void DemoBattleAnimationInit(void *AIS)|职业介绍的DEMO战斗动画初始化<br>因为只有一个动画，所以AIS就在0x02000000|
|0|80BD928|0|80CBDBC|80C6EB0||||
|0|80889FC|8088074|8091874|808F5A0||||
|0|8068634|8067E48|8074B88|80726AC||||
|0|8033B40|8033668|8036918|8036818|BKSEL_DrawStandard|int BKSEL_DrawStandard(int a1)||
|806AC34|8078EB0|80786E0|8085EC0|8083B98|EvCheck10_|signed int EvCheck10_(_DWORD *a1)||
|805C358|8068500|8067D14|8074934|8072450|playHitSound|int playHitSound(void *AIS)||
|804A554|8053AD4|80532EC|805983C|8058A0C|GetBattleAnimRoundType|signed int GetBattleAnimRoundType(int a1)||
|8052D8C|806C064|806B878|805FB4C|805EA4C||||
|0|8093550|8092C44|809C544|809A274||||
|0|8085110|8084714|808DEBC|808BBAC||||
|0|808EBEC|808E2A8|8097B20|8095840||||
|8060228|806CDA8|806C5BC|807AE78|8078A64|MU_FogBumpFx_FirstFrame|int MU_FogBumpFx_FirstFrame(int a1)||
|0|80A715C|80A649C|80B083C|80ABD88||||
|802AB0C|803022C|802FD64|8032BB0|8032C88|GetMovementScriptFromPath|[void GetMovementScriptFromPath(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmpatharrowdisp.c#L102)||
|0|8062094|80618AC|8077AF4|80756BC||||
|0|8029CC8|8029818|802BB48|802BC00||||
|8020640|802360C|8023180|8023830|802386C||||
|0|80BD904|0|80D1040|80CC074||||
|0|8065BC0|80653D0|8078BB8|8076798|FireDragonBGAnimation11|void FireDragonBGAnimation11(_6CStruct *ctx)||
|80171A4|801769C|8017294|801732C|8017584|GetItemUses|[inline int GetItemUses(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L117)||
|806210C|806F30C|806EB20|80395CC|8039554||||
|80171C8|80176C4|80172BC|8017358|80175B0|GetItemMaxUses|[inline int GetItemMaxUses(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L124)||
|802BE24|8031D9C|8031830|80348DC|80349D4|GetUnitInfoWindowX|int GetUnitInfoWindowX(int a1, int a2)||
|8032814|80399C4|8039510|803E3D8|803E448|IsAiTileSafe|int IsAiTileSafe(int x, int y, int threshold)||
|0|80ABCB0|80AADCC|80B390C|80AECEC||||
|805ECC4|806B3E8|806AC08|805C060|805B2BC||||
|8087AE4|80A3E18|80A31A4|80AD120|80A8708||||
|804BE80|80866DC|8085CDC|808F48C|808D190||||
|0|808E84C|808DF20|8097778|8095498||||
|8082DA4|80AD2D0|80AC3F8|80B4CA0|80B0088||||
|8024C2C|80295D8|8029128|802B004|802B094|BattleCheckBrave|signed int BattleCheckBrave(int a1)||
|0|809BA20|809B04C|80A4888|80A0AA0||||
|8035CD4|803D1F0|803CD40|804213C|80421BC||||
|8022F44|8026FB0|8026B24|8028650|80286BC|GetUnitAffinityIcon|[int GetUnitAffinityIcon(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L325)||
|8048DF4|80522C8|8051AEC|8057CFC|8056D74||||
|8048ED8|80523AC|8051BD0|8057DE8|8056E60|HasEkrNamewinAppearEnded|bool HasEkrNamewinAppearEnded()||
|805F148|806B848|806B068|8077F54|8075B20|DoesBattlePopupExist|bool DoesBattlePopupExist()||
|80160AC|8015F6C|8015AF0|8015C38|8015C1C|Init6C_GENS|int Init6C_GENS(int a1)||
|0|802AB1C|802A66C|802CC14|802CCDC|GetStaffAccuracy|int GetStaffAccuracy(_DWORD *a1, int a2)||
|0|80669A4|80661B8|8079BB4|8077790||||
|8053BFC|805C8C8|805C0E0|8070E58|806E8A4||||
|0|8072F70|8072784|807FE74|807DB30||||
|0|8016318|8015E9C|8015FD4|8015FC8|GetCurrentMapMusicIndex|int GetCurrentMapMusicIndex()||
|806CE18|806BF78|806B78C|8078730|8076310||||
|0|807EB9C|807DDEC|8085B6C|8083834|EvCheck01_AFEV|signed int EvCheck01_AFEV(int *a1)||
|804E814|8062028|805C644|80620A4|8060FA4||||
|8001478|80016C4|80016EC|80010FC|800114C|FlushBackgrounds|[void FlushBackgrounds(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L198)||
|8053BA0|805C810|805C028|8068FB8|8066C1C||||
|0|80A0E48|80A049C|80A9658|80A4C14||||
|802EBEC|80354E4|803500C|8039E58|8039DE0|AiDecisionMaker_AiScript1|int AiDecisionMaker_AiScript1()||
|0|8085E6C|8085478|808EC60|808C964||||
|0|800B848|800B90C|800E468|800E210||||
|80214F4|80248C0|8024434|8025ABC|8025B18||||
|0|80652DC|8064AEC|8072088|806FAD8||||
|0|800FF74|80429B8|8039604|803958C||||
|0|80B07EC|80AF99C|80B83A8|80B37FC||||
|8036E88|803E3CC|803DF1C|80BB21C|80B6744||||
|0|80A940C|80A84F8|8020270|8020578||||
|80257E0|802A27C|8029DCC|802C2E0|802C398|GetUnitEffectivePowerLevel|int GetUnitEffectivePowerLevel(int a1)||
|805F680|806BD80|806B5F4|806DA60|806B73C||||
|0|802A7C4|802A314|802C8BC|802C984|SaveSnagWallFromBattle|int SaveSnagWallFromBattle(int a1)||
|0|8012BC0|801252C|8009840|8009950||||
|0|809B098|809A6C0|80A3F68|0||||
|805F6E0|806BEA0|806B750|8068D3C|806699C||||
|808A918|80A7058|80A6398|80B06C8|80ABC14||||
|0|807E63C|807D8EC|8010E1C|0||||
|0|80B6E98|80B608C|8087CB8|80859EC||||
|0|80666D4|8065EE8|807949C|807707C||||
|0|802ACEC|802A83C|802CE00|802CEC8|CurrentRound_ComputeDamage|int CurrentRound_ComputeDamage(int a1)||
|0|80B1428|80B0600|800290C|80029BC|sub_80029BC|[void sub_80029BC(struct Proc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L398)||
|0|80BD7C8|80BCDB4|80BBF84|80B74D8||||
|806B028|80793A0|8078BD0|8086350|8084078|GetLocationEventCommandAt|int GetLocationEventCommandAt(char a1, char a2)||
|808F2F0|8047768|8046F7C|80B9238|80B46B0||||
|805EA10|806B134|806A954|806A608|8068A28||||
|0|806EAA4|806E2B8|807BFCC|8079BB8|MU_GetByUnit|[struct MUProc* MU_GetByUnit(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1871)||
|803B830|804305C|0|8047F10|8047FF8|SioMenu_8047FF8|int SioMenu_8047FF8(int a1)||
|8024FA8|8029988|80294D8|802B784|802B83C|MakeNextBattleHitRound|signed int MakeNextBattleHitRound(BattleUnitStruct *a1, int a2)||
|0|8091D38|80913FC|809A8F8|8098620||||
|0|807F758|807E99C|807D028|807ACEC||||
|8053BA0|805C86C|805C084|806D4B8|806B194||||
|805EE74|806B598|806ADB8|8072484|806FED4||||
|0|808E524|808DBE4|807D044|807B054||||
|0|80B8464|80B76B8|80CA350|80C5580||||
|0|80A8B1C|80A7C08|8098EC4|8096BE0||||
|8049058|805252C|8051D50|8057F80|8056FF8|PrepareBattleGraphicsMaybe|bool PrepareBattleGraphicsMaybe()||
|0|0|0|8000DC4|8000E14|sub_8000E14|[void sub_8000E14(u16 *a, int b, int size, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L30)||
|8001394|8001450|8001478|8000FB4|8001004|SetBackgroundMapDataOffset|[void SetBackgroundMapDataOffset(int bg, int offset)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L125)||
|0|0|0|80014EC|8001530|sub_8001530|[void sub_8001530(u16 *a, u16 *b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L423)||
|0|0|0|8001650|80016C4|sub_80016C4|[void sub_80016C4(u16 *a, struct UnknownDmaStruct *b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L676)||
|0|0|0|800169C|8001710|sub_8001710|[void sub_8001710(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L697)||
|0|0|0|80016B8|800172C|sub_800172C|[void sub_800172C(u16 *src, int b, int c, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L705)||
|0|0|0|8001740|80017B4|sub_80017B4|[void sub_80017B4(int a, int b, int c, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L725)||
|0|0|0|80017C8|800183C|sub_800183C|[void sub_800183C(int a, int b, int c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L745)||
|0|0|0|8001F30|8001FE0|ClearTileRigistry|[void ClearTileRigistry(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1105)||
|0|8056490|8055CA8|80020CC|800217C|FlushPrimaryOAM|[void FlushPrimaryOAM(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1191)||
|0|0|0|8002134|80021E4|sub_80021E4|[void sub_80021E4(struct UnknownDmaStruct2 *a, int b, int c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1217)||
|0|0|0|80023C8|8002478|PlaySong8002478|[void PlaySong8002478(int songId, int speed, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L130)||
|80034B8|8003B04|8003C28|800265C|800270C|sub_800270C|[void sub_800270C(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L244)||
|0|0|0|800276C|800281C|Some6CMusicRelatedWaitCallback|[void Some6CMusicRelatedWaitCallback(struct Proc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L300)||
|0|0|0|80027A8|8002858|StartSongDelayed|[void StartSongDelayed(int songId, int delay, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L319)||
|0|0|0|80028A0|8002950|IsMusicProc2Running|[int IsMusicProc2Running(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L378)||
|0|0|0|80028BC|800296C|sub_800296C|[void sub_800296C(struct Proc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L386)||
|0|0|0|80029BC|8002A6C|sub_8002A6C|[int sub_8002A6C(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L444)||
|0|80045A4|80046C8|8002E14|8002EC4|Find6CRunning|_6CStruct *Find6CRunning(struct _6CCode *startCode)|根据第一个成员（6CCode开始位置的指针）搜索活动中（非阻塞）的6C结构体|
|0|80045D0|80046F4|8002E44|8002EF4|Find6CByUserval|_6CStruct *Find6CByUserval(int userVal)|根据设置的用户变量来搜索6C结构体|
|0|800497C|8004AA0|80031F8|80032AC|ProcInst0E_Sleep|int ProcInst0E_Sleep(int a1)||
|0|8004BA0|8004CC4|8003420|80034D4||||
|0|0|0|8003448|80034FC||||
|0|0|0|800348C|8003540||||
|0|8004C38|8004D5C|8003538|80035EC|GetNextFreeIcon|[int GetNextFreeIcon() // Unused](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/icon.c#L35)||
|0|0|0|800523C|8005334||||
|0|0|0|80054C4|80055BC|FACE_Display|int FACE_Display(int a1)||
|0|0|0|8009150|8009260|AP_ClearAll|[void AP_ClearAll(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L52)||
|805A4B4|8012D4C|80126D0|80099BC|8009A6C|Delete6CIfNotMarkedB|int Delete6CIfNotMarkedB(int a1)||
|0|0|0|8009C40|8009CE0||||
|0|0|0|800B1D4|800AE7C||||
|0|0|0|800B4C4|800B16C||||
|0|0|0|800BAD0|800B7E0||||
|0|0|0|800BFC8|800BCDC||||
|0|0|0|800C800|800C528|Event9D_|signed int Event9D_(int a1)||
|0|0|0|800D2D0|800D00C|EnqueueEventCall|[void EnqueueEventCall(const u16* events, u8 execType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L256)||
|0|0|0|800D308|800D044|HandleNextEventEngineCall|int HandleNextEventEngineCall()||
|0|807DEC0|807D2B0|800D4CC|800D208|sub_800D208|[int sub_800D208(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L389)||
|0|0|0|800D668|800D3A4|EventEngine_CanSkipMaybe|bool EventEngine_CanSkipMaybe(int a1)||
|0|0|0|800D6A8|800D3E4|sub_800D3E4|[void sub_800D3E4(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L505)||
|0|0|0|800D9DC|800D754|Event04_CheckRandom|int Event04_CheckRandom(int a1)||
|0|0|0|800DA1C|800D794|Event06_SlotOperation|signed int Event06_SlotOperation(int a1)||
|0|0|0|800DC08|800D980|Event09_Goto|int Event09_Goto(int a1)||
|0|0|0|800DC94|800DA2C|Event0B_EnqueueCall|int Event0B_EnqueueCall(int a1)||
|0|0|0|800DCE0|800DA78|Event0C_Branch|signed int Event0C_Branch(int a1)||
|0|0|0|800DEF0|800DC98|Event10_ModifyEvBit|signed int Event10_ModifyEvBit(int a1)||
|0|0|0|800E0BC|800DE74|Event15_|signed int Event15_(int a1)||
|0|0|0|800E730|800E51C|Event1C_TEXTCONT|signed int Event1C_TEXTCONT(int a1)||
|0|0|0|800E8AC|800E698|_WhileFace6CExists|int WhileFace6CExists(int a1)||
|0|0|0|800EC98|800EA84||||
|0|0|0|800F704|800F50C|UNIT_GetListSize|int UNIT_GetListSize(_BYTE *a1)||
|0|0|0|800F720|800F528|UNIT_ShouldBeLoaded|bool UNIT_ShouldBeLoaded(unsigned __int8 *a1, unsigned __int8 a2)||
|0|0|0|80100CC|800FF68|Event31_DisplayEffectRange|signed int Event31_DisplayEffectRange(int a1)||
|0|0|0|8010770|8010618|Event38_ChangeActiveUnit|signed int Event38_ChangeActiveUnit(int a1)||
|0|0|0|8010890|8010748||||
|0|0|0|80109F0|80108AC|Event3D_|int Event3D_(int a1)||
|0|0|0|8010AD0|801098C||||
|0|0|0|8010B6C|8010A28||||
|0|0|0|8010EA4|8010D5C|Event45_|signed int Event45_(int a1)||
|0|0|0|80116C8|80115DC||||
|0|0|0|8011C30|8011B4C||||
|0|0|0|8011DB0|8011CCC|ChangeUnitAIThing|int ChangeUnitAIThing(int a1, unsigned __int8 a2, int a3)||
|0|0|0|8011DF4|8011D10||||
|0|0|0|80122A4|80121D4||||
|0|0|0|801263C|8012578||||
|0|0|0|8012684|80125C0||||
|0|0|0|801273C|8012678|LoadUnitWordStructs|int LoadUnitWordStructs()||
|0|0|0|8012780|80126BC||||
|0|0|0|80128E8|8012824||||
|0|0|0|8012954|8012890||||
|0|0|0|8012C54|8012B9C||||
|0|0|0|8013220|8013168||||
|0|0|0|801492C|8014904||||
|0|0|0|8014944|801491C||||
|0|0|0|8014CEC|8014CC4||||
|0|0|0|8015568|8015544|MapMain_DeployEveryone|int MapMain_DeployEveryone()||
|0|0|0|8016994|8016BEC|IsItemEffectiveAgainst|[s8 IsItemEffectiveAgainst(u16 item, struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L520)||
|0|0|0|8016A30|8016C88|IsUnitEffectiveAgainst|[s8 IsUnitEffectiveAgainst(struct Unit* actor, struct Unit* target) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L558)||
|0|0|0|8016C70|8016EC8|IsItemDanceRing|[s8 IsItemDanceRing(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L730)||
|0|0|0|8017220|8017478|SetItemUnsealedForCharacter|[void SetItemUnsealedForCharacter(int item, u8 unk) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L1018)||
|0|8017748|8017340|80173E4|801763C|GetItemCost|[inline int GetItemCost(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L147)||
|0|8017874|801746C|8017514|801776C|GetItemMaxCost|[inline int GetItemMaxCost(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L197)||
|0|8017974|8017584|8017618|8017870|GetFreeBlueUnit|[struct Unit* GetFreeBlueUnit(const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L245)||
|8017578|8017B24|8017734|80177DC|8017A34|LoadUnits|[int LoadUnits(const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L484)||
|0|0|0|80177FC|8017A54|sub_8017A54|[void sub_8017A54(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L497)||
|0|0|0|8017834|8017A8C|CanClassWieldWeaponType|[s8 CanClassWieldWeaponType(u8 classId, u8 wpnType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L508)||
|0|0|0|8017BDC|8017EBC|FixROMUnitStructPtr|[void FixROMUnitStructPtr(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L722)||
|0|0|0|8018C5C|8018F48|IsUnitSlotAvailable|[s8 IsUnitSlotAvailable(int faction) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1483)||
|0|0|0|8018C94|8018F80|sub_8018F80|[void sub_8018F80(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1493)||
|0|0|0|8018D04|8018FF0|CountAvailableBlueUnits|[u16 CountAvailableBlueUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1522)||
|0|0|0|8018D48|8019034|CountRedUnits|[int CountRedUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1542)||
|0|0|0|8018D88|8019074|CountGreenUnits|[int CountGreenUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1562)||
|0|0|0|8018DC8|80190B4|ClearCutsceneUnits|[void ClearCutsceneUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1582)||
|0|0|0|8019F48|801A278|sub_801A278|[void sub_801A278(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L670)||
|0|0|0|801D3C0|801D75C|ClearActiveUnit|int ClearActiveUnit(_BYTE *a1)||
|0|0|0|801D498|801D834||||
|0|0|0|801E840|801EBE8||||
|0|0|0|801EB00|801EEA8||||
|0|0|0|801FD08|8020010||||
|0|0|0|801FFF0|80202F8||||
|0|0|0|8020DC0|80210C8||||
|801EA54|80219BC|8021544|802257C|80225B0||||
|0|0|0|802262C|8022660||||
|0|0|0|8023280|80232B8||||
|0|0|0|8023EAC|8023EF0||||
|0|0|0|8023F20|8023F64|SupplyUsability|signed int SupplyUsability(int a1)||
|0|80239AC|8023520|80248FC|802494C||||
|0|0|0|8024BF0|8024C40||||
|0|0|0|8024D98|8024DE8|GetPartyGoldAmount|[u32 GetPartyGoldAmount() ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmgold.c#L3)||
|0|0|0|8024DB4|8024E04|SetPartyGoldAmount|[void SetPartyGoldAmount(s32 amt) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmgold.c#L13)||
|0|0|0|8027080|80270DC||||
|8022A84|8026AB4|8026628|802815C|80281C8|GetUnitSupporterCount|[int GetUnitSupporterCount(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L23)||
|8022A94|8026AC4|8026638|8028170|80281DC|GetUnitSupporterCharacter|[u8 GetUnitSupporterCharacter(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L31)||
|0|0|0|8028224|8028290|UnitGainSupportExp|[void UnitGainSupportExp(struct Unit* unit, int num)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L89)||
|0|0|0|8029048|80290A0|CanUnitUsePureWaterItem|[s8 CanUnitUsePureWaterItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L470)||
|0|0|0|802908C|80290E4|CanUnitUseAntitoxinItem|[s8 CanUnitUseAntitoxinItem(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L486)||
|0|0|0|802AB54|802ABE4|BattleLoadAvoid|int BattleLoadAvoid(int a1)||
|0|0|0|802BDE8|802BEA0||||
|0|0|0|802C320|802C3D8||||
|0|0|0|802C428|802C4F0||||
|0|0|0|802C77C|802C844|DoSomeBattleWeaponStuff|int DoSomeBattleWeaponStuff()||
|0|0|0|802CA34|802CAFC||||
|0|0|0|802E048|802E110||||
|0|0|0|802E128|802E1F0|GetTrapAt|[struct Trap* GetTrapAt(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L36)||
|0|0|0|802E184|802E24C|GetTypedTrapAt|[struct Trap* GetTypedTrapAt(int x, int y, int trapType)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L62)||
|0|0|0|802E3E4|802E4AC|GetObstacleHpAt|[int GetObstacleHpAt(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L226)||
|0|0|0|802E570|802E638|IsMapChangeEnabled|[s8 IsMapChangeEnabled(int id)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L326)||
|0|0|0|802E598|802E660|UnitHideIfUnderRoof|[void UnitHideIfUnderRoof(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L339)||
|0|0|0|802E908|802E9D0|ResetCountedDownTraps|[void ResetCountedDownTraps(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L603)||
|802887C|802DD64|802D8A4|80305C4|8030674||||
|8028E28|802E310|802DE50|8030B74|8030C24|DisableMapPaletteAnimations|[void DisableMapPaletteAnimations(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L898)||
|0|0|0|8030D50|8030E04|StartBattleMap|[void StartBattleMap(struct GameCtrlProc* gameCtrl) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L970)||
|0|0|0|8033168|8033258|GetPlayerLeaderUnitId|signed int GetPlayerLeaderUnitId()||
|0|0|0|80332B4|80333A4||||
|0|802FD68|802F89C|803365C|803374C|CanCharacterBePrepMoved|bool CanCharacterBePrepMoved(int a1)||
|0|0|0|803409C|8034194||||
|802B8A0|80317EC|8031304|80342B0|80343A8|CanUnitUseSeize|signed int CanUnitUseSeize()||
|0|0|0|80346DC|80347D4|UnitInfoWindow_PositionUnitName|int UnitInfoWindow_PositionUnitName(int a1)||
|0|0|0|80354B4|80355AC||||
|0|0|0|8035538|8035630||||
|0|0|0|8036288|8036188||||
|0|0|0|8037B58|8037AC0||||
|0|0|0|8037B84|8037AEC||||
|0|0|0|8037BFC|8037B64|CanUnitSeize|signed int CanUnitSeize(int a1, int a2, signed int a3)||
|0|0|0|8037C44|8037BAC||||
|0|0|0|80380F8|8037FCC||||
|0|0|0|8038260|8038134||||
|0|0|0|803914C|80390D4||||
|0|0|0|8039314|803929C||||
|0|0|0|8039520|80394A8||||
|0|0|0|80396E0|8039668||||
|0|0|0|803C7D8|803C848|IsUnitNotActiveUnit|bool IsUnitNotActiveUnit(int a1)||
|0|0|0|803F434|803F4A4||||
|0|0|0|8040B34|8040BB4|AiSomethingGetPick|bool AiSomethingGetPick(int a1, int a2, signed __int16 *a3, _WORD *a4)||
|8097DFC|80B3418|80B25F4|8041010|8041090||||
|0|0|0|8041078|80410F8||||
|0|0|0|8041178|80411F8||||
|0|0|0|8042114|8042194||||
|0|0|0|80421B8|8042238||||
|0|0|0|8042538|80425B4||||
|0|0|0|8043318|8043394||||
|8036EB4|803E3F8|803DF48|8043344|80433C0||||
|0|0|0|8044F24|8044F84|OnNameSelectHBlank|int OnNameSelectHBlank()||
|0|0|0|8046D6C|8046E0C||||
|0|0|0|80498B8|8048AA8||||
|803E1E8|8046AC8|80462DC|804B87C|804AADC||||
|803E2BC|8046B9C|80463B4|804B954|804ABB4||||
|803E3B4|8046C90|80464A8|804BA4C|804ACAC||||
|8041168|8049AB4|80492CC|804E638|804D8A4||||
|0|0|0|804EF40|804E1BC|DrawUiFrame|[void DrawUiFrame(u16* tilemap, int x, int y, int width, int height, int tilebase, int style)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L236)||
|0|0|0|804F718|804E98C|DrawUiItemHoverExt|[void DrawUiItemHoverExt(int bg, int base, int x, int y, int width)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1150)||
|0|0|0|804F794|804EA08|ClearUiItemHoverExt|[void ClearUiItemHoverExt(int bg, int base, int x, int y, int width)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1170)||
|0|0|0|804F980|804EBF4|StartOrphanMenuAdjustedExt|[    int unk)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L115)||
|0|0|0|805046C|804F6F8|ResetMenuOverrides|[void ResetMenuOverrides(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L701)||
|0|0|0|8051004|8050290|ekrBattle_WaitForFrame8|int ekrBattle_WaitForFrame8(int a1)||
|8042B74|804BF34|804B758|80510D4|8050360|ekrBattle_InitMainAnimations|int ekrBattle_InitMainAnimations(int a1)||
|0|0|0|80513FC|80506C8|ekrBattle_80506C8|int ekrBattle_80506C8(int a1)||
|0|80AB0E0|80AA218|8051624|80508F0|ekrBattle_80508F0|int ekrBattle_80508F0(int a1)||
|0|0|0|80517EC|8050AB8|ekrBattle_8050AB8|int ekrBattle_8050AB8(int a1)||
|0|0|0|8053CDC|8052FEC||||
|0|0|0|8053EFC|805320C||||
|0|0|0|8054058|8053368||||
|0|0|0|805596C|8054C94||||
|0|80119EC|0|8055B24|8054E4C||||
|0|0|0|8057078|80560F0|ekrBattleEnding_80560F0|int ekrBattleEnding_80560F0(int a1)||
|0|0|0|80570F8|8056170|ekrBattleEnding_8056170|int ekrBattleEnding_8056170(int a1)||
|0|0|0|8057150|80561C8|ekrBattleEnding_80561C8|int ekrBattleEnding_80561C8(int a1)||
|0|0|0|8059678|8058848|GetBattleAnimationId|int GetBattleAnimationId(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)||
|0|0|0|8059748|8058918||||
|0|0|0|80599AC|8058B7C||||
|0|0|0|805A78C|80599E8||||
|0|0|0|805B748|805A9A4||||
|0|0|0|805C52C|805B77C||||
|0|0|0|805C814|805BA64||||
|0|0|0|805F49C|805E39C||||
|0|0|0|805FCD4|805EBD4||||
|0|0|0|8063228|8062128||||
|8055998|805E68C|805DEA4|806351C|806241C||||
|0|0|0|8067BD0|8065810|Loop6C_efxIvaldi|int Loop6C_efxIvaldi(int a1)||
|0|0|0|80688F8|8066550||||
|0|0|0|8068C7C|80668DC||||
|0|0|0|8068EDC|8066B40||||
|0|0|0|8069010|8066C74||||
|0|0|0|8069840|8067510||||
|0|0|0|8069990|8067660||||
|0|0|0|8069B04|80677D4||||
|0|0|0|8069EE8|8067BB8|Loop6C_efxNaglfar|int Loop6C_efxNaglfar(int a1)||
|0|0|0|806AE24|8068AFC||||
|0|0|0|806AEE0|8068BB8||||
|0|0|0|806B858|8069530||||
|0|0|0|806B888|8069560||||
|0|0|0|806BCCC|80699A8||||
|0|0|0|806C224|8069F00||||
|0|0|0|806C89C|806A578||||
|0|0|0|806C988|806A664||||
|0|0|0|806D254|806AF30||||
|0|0|0|806D3AC|806B088||||
|0|0|0|806D570|806B24C||||
|0|0|0|806D858|806B534||||
|0|0|0|806DC64|806B940||||
|0|0|0|806DF14|806BBF0||||
|0|0|0|806E0B8|806BD94||||
|0|0|0|8070918|806E310||||
|0|0|0|8070E1C|806E868||||
|806A8AC|80788D0|8078100|8072060|806FAB0||||
|0|0|0|807267C|80700CC||||
|0|0|0|80727E4|8070234||||
|0|0|0|8072804|8070254||||
|0|0|0|8072880|80702D0||||
|0|0|0|8072DA4|80707FC||||
|0|0|0|8074A24|8072548||||
|0|0|0|8074F20|8072A44||||
|0|0|0|807533C|8072E60||||
|0|0|0|807589C|80733C0||||
|0|0|0|8079608|80771E4||||
|0|0|0|80797E0|80773BC||||
|0|0|0|8079808|80773E4||||
|0|0|0|807A2D0|8077EAC||||
|0|0|0|807A4C8|80780A4||||
|0|0|0|807A774|8078350|GenerateMonsterItems|[u32 GenerateMonsterItems(u8 classId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/monstergen.c#L48)||
|0|0|0|807A830|807840C|MU_Init|[void MU_Init(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L569)||
|0|0|0|807A918|80784F4|MU_CreateForUI|[struct MUProc* MU_CreateForUI(struct Unit* pUnit, int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L646)||
|0|0|0|807AB5C|8078738|MU_IsAnyActive|[int MU_IsAnyActive(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L796)||
|0|0|0|807AB94|8078770|MU_IsActive|[int MU_IsActive(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L837)||
|0|0|0|807ABB4|8078790|MU_StartMoveScript|[void MU_StartMoveScript(struct MUProc* proc, const u8 commands[MU_COMMAND_MAX_COUNT]) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L844)||
|0|0|0|807ABE8|80787C4|MU_CreateScripted|[struct MUProc* MU_CreateScripted(u16 x, u16 y, u16 classIndex, unsigned palId, const u8 commands[MU_COMMAND_MAX_COUNT]) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L856)||
|0|0|0|807B04C|8078C38|MU_State_WaitForTimer|int MU_State_WaitForTimer(int a1)||
|0|0|0|807B074|8078C60|MU_State_DuringMovement|int MU_State_DuringMovement(int a1)||
|0|0|0|807B444|8079030|MU_OnLoop|int MU_OnLoop(int a1)||
|0|0|0|807B50C|80790F8|MU_GetComputedEndPosition|[void MU_GetComputedEndPosition(int* xOut, int* yOut, const u8* commands) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1281)||
|0|0|0|807B580|807916C|MU_CanStart|[int MU_CanStart(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1315)||
|0|0|0|807B5A4|8079190|MU_AllRestartAnimations|[void MU_AllRestartAnimations(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1325)||
|0|0|0|807B70C|80792F8|MU_DisplayAsSMS|int MU_DisplayAsSMS(int a1)||
|0|0|0|807B7B8|80793A4|MU_DisplayAsMMS|int MU_DisplayAsMMS(int a1)||
|0|0|0|807B950|807953C|MU_SetMoveConfig|[void MU_SetMoveConfig(struct MUProc* proc, u16 config) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1492)||
|0|0|0|807BAE8|80796D4|MU_SetupPixelEffect|int MU_SetupPixelEffect(int a1, int a2)||
|0|0|0|807BFA4|8079B90|MU_GetByIndex|int MU_GetByIndex(int a1)||
|0|0|0|807C0DC|8079CD8|CopyEventMoveToBuffer|char *CopyEventMoveToBuffer(char *result, unsigned __int8 a2)||
|0|0|0|807C144|8079D40|ClearEventMoveBuffer|int ClearEventMoveBuffer(char *a1)||
|0|0|0|807C4D8|807A0E4||||
|0|0|0|807C588|807A194||||
|0|0|0|807C688|807A294||||
|0|0|0|807C6F4|807A300||||
|0|0|0|807C718|807A324||||
|0|0|0|807C74C|807A358|MuCtr_ExecREDA_807A358|int MuCtr_ExecREDA_807A358(int a1)||
|0|0|0|807CF54|807ABB8|MapAnim_CallBattleQuoteEvents|int MapAnim_CallBattleQuoteEvents()||
|0|0|0|807D818|807B4D0||||
|0|0|0|807DD70|807BA28||||
|0|0|0|807DE58|807BB10||||
|0|0|0|807DE88|807BB40||||
|0|0|0|807DF48|807BC00||||
|0|0|0|807E098|807BD54||||
|0|0|0|807E9C4|807C680||||
|0|0|0|807EC40|807C8FC||||
|0|0|0|807F274|807CF30||||
|0|0|0|807F440|807D0FC||||
|0|0|0|807F7A8|807D464||||
|0|0|0|8080BF0|807E8B0||||
|0|0|0|80811C4|807EE84||||
|0|0|0|8081330|807EFF0||||
|0|0|0|8081A98|807F758||||
|0|0|0|8081DE0|807FAA0||||
|0|0|0|8081F0C|807FBCC||||
|0|0|0|8082748|8080408||||
|0|0|0|808278C|808044C||||
|0|0|0|8082D18|80809D8||||
|0|0|0|8082F18|8080BD8||||
|0|0|0|80835A0|8081260|MapAnim_GetRoundProcScript|int *MapAnim_GetRoundProcScript()||
|8068CB8|8076080|80758B0|808375C|808141C||||
|8068D9C|8076164|8075994|80837B8|8081478||||
|0|0|0|8083814|80814D4|MapAnim_MoveSubjectsTowardsTarget|int MapAnim_MoveSubjectsTowardsTarget()||
|0|0|0|8083874|8081534|MapAnim_MoveSubjectsAwayFromTarget|int MapAnim_MoveSubjectsAwayFromTarget()||
|0|0|0|8083C18|80818D8||||
|0|0|0|80846E0|80823A0||||
|0|0|0|80846FC|80823BC||||
|0|0|0|808471C|80823DC||||
|0|0|0|808473C|80823FC||||
|0|0|0|8084804|80824C4||||
|0|0|0|8084928|80825E8||||
|0|0|0|8084998|8082658||||
|0|0|0|8084AA4|8082764||||
|0|0|0|8084B9C|808285C||||
|0|0|0|8084BE8|80828A8||||
|0|0|0|8084C2C|80828EC||||
|0|0|0|8084C5C|808291C||||
|0|0|0|8084EBC|8082B84||||
|0|0|0|8084F24|8082BEC||||
|806A920|8078950|8078180|8085260|8082F28|CheckNextEventDefinition|unsigned __int16 **CheckNextEventDefinition(unsigned __int16 **a1)||
|806AC90|8078F08|8078738|8085290|8082F58||||
|0|0|0|80855B8|8083280|CallEndEvent|int CallEndEvent()||
|0|0|0|80856E8|80833B0|GetChapterEnemyUnitDefinitions|int GetChapterEnemyUnitDefinitions()||
|0|0|0|808575C|8083424||||
|806B6B0|8079AF0|8079320|80857A0|8083468||||
|0|0|0|80858E0|80835A8|ShouldDisplayDeathQuoteForChar|signed int ShouldDisplayDeathQuoteForChar(unsigned __int8 a1)||
|0|0|0|8085A9C|8083764||||
|0|0|0|8085B10|80837D8||||
|0|0|0|8085B9C|8083864|EvCheck02_TURN|signed int EvCheck02_TURN(int *a1)||
|0|0|0|8085BE4|80838AC|EvCheck03_CHAR|signed int EvCheck03_CHAR(int *a1)||
|0|0|0|8085F00|8083BD8|SetLocalEventId|int SetLocalEventId(int a1)||
|0|0|0|8085F34|8083C0C|UnsetLocalEventId|int UnsetLocalEventId(int a1)||
|0|0|0|8085FC8|8083CA0|SetGlobalEventId|int SetGlobalEventId(signed int a1)||
|0|0|0|8086000|8083CD8|UnsetGlobalEventId|int UnsetGlobalEventId(signed int a1)||
|806BA74|807A0E0|8079910|80860A8|8083D80|SetEventId|int SetEventId(signed int a1)||
|806BA48|807A0B4|80798E4|80860BC|8083D94|UnsetEventId|int UnsetEventId(signed int a1)||
|0|0|0|8086100|8083DD8||||
|0|0|0|808615C|8083E34|CheckTutorialEvent|bool CheckTutorialEvent(char a1)||
|0|0|0|808682C|8084560|CheckBattleForecastTutorialEvent|bool CheckBattleForecastTutorialEvent(int a1)||
|0|0|0|8086A14|8084748||||
|0|0|0|8086ACC|8084800|IsCharacterForceDeployed_|signed int IsCharacterForceDeployed_(unsigned __int16 a1)||
|0|0|0|8086E0C|8084B40||||
|0|0|0|8086E38|8084B6C||||
|8090630|807AD28|807A2B4|80874EC|8085220||||
|0|807AD3C|807A2C8|8087504|8085238||||
|0|807AD50|807A2DC|808751C|8085250||||
|0|807AD64|807A2F0|8087534|8085268||||
|0|807AD78|807A304|808754C|8085280||||
|0|807AF10|807A49C|80876B0|80853E4||||
|0|0|0|8088160|8085E94||||
|0|0|0|8088408|808613C||||
|0|0|0|8088868|808659C||||
|0|0|0|808A450|80881C4||||
|0|0|0|808AE60|8088BD4|HbPopulate_SSCharacter|[void HbPopulate_SSCharacter(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2042)||
|0|0|0|808B2A4|8089018|CloseHelpBox|[void CloseHelpBox(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2280)||
|0|0|0|808BA30|8089720||||
|0|808586C|8084E70|808E614|808C314||||
|0|808588C|8084E90|808E63C|808C33C||||
|0|0|0|808F2C0|808CFC4|InitPlayerPhaseInterfaceMaybe|int InitPlayerPhaseInterfaceMaybe()||
|0|80872A4|80868B8|80900E0|808DDF8||||
|0|8087B98|80871E0|8090120|808DE38||||
|0|0|0|80901A4|808DEBC||||
|0|0|0|8090780|808E4AC||||
|0|0|0|8090DE0|808EB0C||||
|0|0|0|80927EC|8090514||||
|0|0|0|80972D4|8094FF4||||
|0|0|0|80974F0|8095210||||
|0|0|0|80976A0|80953C0||||
|0|0|0|80977E4|8095504||||
|0|0|0|8097C50|8095970||||
|0|0|0|8098DA0|8096ABC||||
|0|0|0|80996C8|80973E4||||
|0|0|0|8099B24|8097840||||
|80827F8|809139C|8090A58|8099DA4|8097ACC||||
|0|0|0|809A14C|8097E74||||
|0|8091C08|80912CC|809A650|8098378||||
|0|0|0|809C500|809A230||||
|0|0|0|809EDDC|809CB38||||
|0|80966CC|8095ED8|809F7CC|809D530||||
|0|0|0|80A0D1C|809EA7C||||
|0|0|0|80A0E18|809EB78||||
|0|0|0|80A139C|809F0FC||||
|0|8098EF4|8098618|80A20BC|809FE1C||||
|0|0|0|80A2D28|80A0A74||||
|0|0|0|80A49DC|80A0BF4||||
|8084560|809F280|809E870|80A7AA8|80A3064|GetSaveTargetAddress|signed int GetSaveTargetAddress(int a1)||
|0|0|0|80A7CB0|80A326C|LoadConvoyItems|int LoadConvoyItems(int a1)||
|0|0|0|80A894C|80A3F08||||
|0|0|0|80A8E48|80A4404|DoesThisChapterCount|signed int DoesThisChapterCount(unsigned int a1)||
|0|0|0|80A939C|80A4958||||
|0|0|0|80A971C|80A4CD8||||
|0|0|0|80A9CD4|80A52BC||||
|0|0|0|80A9D24|80A530C||||
|80865EC|80A2A50|0|80AB588|80A6B70||||
|0|0|0|80AB5A8|80A6B90||||
|8086624|80A2A88|0|80AB5CC|80A6BB4||||
|0|0|0|80AB5EC|80A6BD4||||
|0|0|0|80AB83C|80A6E24||||
|0|0|0|80AB8C8|80A6EB0||||
|0|0|0|80AB968|80A6F50||||
|0|0|0|80AB9D4|80A6FBC||||
|0|0|0|80ABA4C|80A7034||||
|0|0|0|80ABA6C|80A7054||||
|0|0|0|80ABB50|80A7138|LoadWMStuff|int LoadWMStuff(int a1, int a2)||
|0|0|0|80ABD8C|80A7374||||
|0|0|0|80AD368|80A8950||||
|0|0|0|80AD508|80A8AF0||||
|0|0|0|80ADA3C|80A9024|Loop6C_savemenu|int Loop6C_savemenu(_BYTE *a1)||
|0|0|0|80AF224|80AA744||||
|0|0|0|80AF964|80AAE90||||
|0|0|0|80AFA40|80AAF6C||||
|0|0|0|80B0004|80AB548||||
|0|0|0|80B0028|80AB56C||||
|0|0|0|80B0A94|80ABFE0||||
|0|0|0|80B0FA0|80AC4F8||||
|0|0|0|80B18DC|80ACE3C||||
|0|0|0|80B2098|80AD5F8||||
|0|0|0|80B24C4|80ADA24||||
|0|0|0|80B2744|80ADCA4||||
|0|0|0|80B2CC4|80AE248|FadeInOut_DisableGfx|int FadeInOut_DisableGfx(int a1)||
|0|80AB8FC|80AAA34|80B34EC|80AEA70||||
|0|0|0|80B4130|80AF510||||
|0|0|0|80B566C|80B0A50||||
|8035D4C|803D268|803CDB8|80B62BC|80B169C||||
|0|0|0|80B7398|80B2780||||
|80951FC|80B06B4|80AF864|80B828C|80B36E0||||
|0|0|0|80B8EB4|80B432C||||
|0|0|0|80B8ED8|80B4350||||
|0|0|0|80B9580|80B49F8||||
|0|0|0|80B9704|80B4B7C||||
|0|0|0|80B9738|80B4BB0||||
|0|0|0|80B9774|80B4BEC||||
|0|0|0|80B9A3C|80B4EB4||||
|0|0|0|80B9B18|80B4F90||||
|0|0|0|80B9DA4|80B5220||||
|0|0|0|80BA0B8|80B5534||||
|0|0|0|80BA100|80B557C||||
|0|0|0|80BA188|80B5604||||
|0|0|0|80BA250|80B56CC||||
|0|0|0|80BA274|80B56F0||||
|0|0|0|80BA290|80B570C||||
|0|0|0|80BA2B4|80B5730||||
|0|0|0|80BA570|80B59EC||||
|0|0|0|80BA69C|80B5B18||||
|0|0|0|80BAD80|80B61FC||||
|0|0|0|80BB4AC|80B696C||||
|0|80B9284|80B85E8|80BB7E8|80B6CA8||||
|0|0|0|80BBD80|80B72C4||||
|0|0|0|80BD0D8|80B820C||||
|0|0|0|80BD138|80B826C||||
|0|0|0|80BD158|80B828C||||
|0|0|0|80BD174|80B82A8||||
|0|0|0|80BD594|80B86CC||||
|0|0|0|80BD70C|80B8844||||
|0|0|0|80BD944|80B8A7C||||
|0|0|0|80BDA6C|80B8BA4||||
|0|0|0|80BDE6C|80B8FA4|DeployAllBlueUnits|int DeployAllBlueUnits()||
|0|0|0|80BDEF0|80B9028||||
|0|0|0|80BDF94|80B90CC||||
|0|0|0|80BDFDC|80B9114||||
|0|0|0|80BE0E0|80B9218||||
|0|0|0|80BE198|80B92D0||||
|0|0|0|80BE3F8|80B955C||||
|0|0|0|80BE44C|80B95B0||||
|0|0|0|80BE988|80B9AEC||||
|0|0|0|80BEDE8|80B9F54||||
|0|0|0|80BEF00|80BA06C||||
|0|0|0|80BF2F0|80BA458||||
|0|0|0|80BF368|80BA4D0||||
|0|0|0|80BF578|80BA6DC||||
|0|0|0|80BFC04|80BADD4|GetPaletteIdForAllegience|signed int GetPaletteIdForAllegience(signed int a1)||
|0|0|0|80BFE68|80BB038|MapUnitC_SetAllegienceColorIndex|int MapUnitC_SetAllegienceColorIndex(int a1, int a2, int a3)||
|0|0|0|80BFED4|80BB0A4|MapUnitC_MarkSomething|int MapUnitC_MarkSomething(int a1, int a2)||
|0|0|0|80BFFD0|80BB1A0|GmapUnitContainer_Destruct|int GmapUnitContainer_Destruct(int a1)||
|0|0|0|80C003C|80BB20C|GmapUnitFade_Destruct|int GmapUnitFade_Destruct(int a1)||
|0|0|0|80C009C|80BB26C||||
|0|0|0|80C0178|80BB348|GmapUnitFade_Loop|int GmapUnitFade_Loop(int a1)||
|0|0|0|80C02CC|80BB49C||||
|0|0|0|80C03E0|80BB5B0|WMLocation_GetChapterId|int WMLocation_GetChapterId(int a1)||
|0|0|0|80C0458|80BB628||||
|0|0|0|80C0554|80BB724|GmapScreen2_Init|int GmapScreen2_Init(int a1)||
|0|0|0|80C0890|80BBA4C||||
|0|0|0|80C0A38|80BBBF4||||
|0|0|0|80C0A98|80BBC54||||
|0|0|0|80C0B0C|80BBCC8||||
|0|0|0|80C0BE8|80BBDA4||||
|0|0|0|80C0D60|80BBF1C||||
|0|0|0|80C0DA4|80BBF60||||
|0|0|0|80C0FFC|80BC1B8|GMapRoute_TransitionLoop|int GMapRoute_TransitionLoop(int a1)||
|0|0|0|80C1120|80BC2DC|GMapRoute_80BC2DC|int GMapRoute_80BC2DC(int a1)||
|0|0|0|80C13F4|80BC5B4||||
|806FBD8|8081AB0|8080D54|80C14B4|80BC674||||
|0|0|0|80C14EC|80BC6AC||||
|0|0|0|80C1524|80BC6E4||||
|0|0|0|80C156C|80BC72C||||
|0|0|0|80C1594|80BC754||||
|0|0|0|80C16D8|80BC898||||
|0|0|0|80C16FC|80BC8BC|SetupNewWMRoute|signed int SetupNewWMRoute(int a1, int a2, char a3)||
|0|0|0|80C172C|80BC8EC|WM_RemovePath|signed int WM_RemovePath(int a1, int a2, int a3)||
|0|0|0|80C185C|80BCA1C||||
|0|0|0|80C1894|80BCA54||||
|0|0|0|80C18D0|80BCA90||||
|0|0|0|80C1BFC|80BCDE4||||
|0|0|0|80C1DC0|80BCFB4||||
|0|0|0|80C1E20|80BD014||||
|0|0|0|80C2018|80BD20C||||
|0|0|0|80C2030|80BD224||||
|0|0|0|80C246C|80BD660||||
|0|0|0|80C261C|80BD830||||
|0|0|0|80C2C24|80BDE3C||||
|0|0|0|80C2C9C|80BDEB4||||
|0|0|0|80C2F14|80BE12C||||
|0|0|0|80C3118|80BE330||||
|0|0|0|80C3248|80BE45C||||
|0|0|0|80C37C4|80BE9D8||||
|0|0|0|80C3C88|80BEE9C||||
|0|0|0|80C3D0C|80BEF20||||
|0|0|0|80C4098|80BF2AC||||
|0|0|0|80C415C|80BF370||||
|0|0|0|80C43C0|80BF5DC||||
|0|0|0|80C4514|80BF730||||
|0|0|0|80C45E8|80BF804||||
|0|0|0|80C46B0|80BF8CC||||
|0|0|0|80C4800|80BFA1C||||
|0|0|0|80C49B0|80BFBCC||||
|0|0|0|80C4B84|80BFDA0||||
|0|0|0|80C4E64|80C0080||||
|0|0|0|80C4F28|80C0144||||
|0|0|0|80C5024|80C0240||||
|0|0|0|80C5088|80C02A4||||
|0|0|0|80C52B0|80C04CC||||
|0|0|0|80C572C|80C0960||||
|0|0|0|80C64E0|80C1724||||
|0|0|0|80C68B4|80C1AF8||||
|0|0|0|80C69B4|80C1BF8||||
|0|0|0|80C7048|80C2290||||
|0|0|0|80C74C0|80C2708||||
|0|0|0|80C7934|80C2B7C||||
|0|0|0|80C797C|80C2BC4||||
|0|0|0|80C7A38|80C2C80||||
|0|0|0|80C7C28|80C2E70||||
|0|0|0|80C7E04|80C304C||||
|0|0|0|80C7E4C|80C3094||||
|0|0|0|80C7EDC|80C3124||||
|0|0|0|80C7FB4|80C31FC||||
|0|0|0|80C84A0|80C36E8||||
|0|0|0|80C8528|80C3770||||
|0|0|0|80C85C4|80C380C||||
|0|0|0|80C8674|80C38BC||||
|0|0|0|80C8870|80C3AB8||||
|0|0|0|80C88F8|80C3B40||||
|0|0|0|80C8E28|80C4070||||
|0|802C17C|802BCBC|80C8E40|80C4088||||
|0|0|0|80C8E54|80C409C||||
|0|0|0|80C8FF0|80C4238||||
|0|0|0|80C9218|80C4460||||
|0|0|0|80C9398|80C45E0||||
|0|0|0|80C941C|80C4664||||
|0|0|0|80CA4C4|80C56F4||||
|0|0|0|80CA618|80C5848||||
|0|0|0|80CA8E4|80C5AF0||||
|0|0|0|80CAA58|80C5C64||||
|0|0|0|80CB054|80C6144||||
|0|0|0|80CB6C8|80C677C||||
|0|0|0|80CB6E0|80C6794||||
|0|0|0|80CB70C|80C67C0||||
|0|0|0|80CBD28|80C6E1C||||
|0|0|0|80CBE7C|80C6F70||||
|0|0|0|80CC2C0|80C73B0||||
|0|0|0|80CC7CC|80C78BC||||
|0|0|0|80CD474|80C84D8||||
|0|0|0|80CEAC8|80C9AFC||||
|0|0|0|80CF238|80CA26C||||
|0|0|0|80CF9D4|80CA9F8||||
|0|0|0|80CFB8C|80CABB0||||
|0|0|0|80D0854|80CB878||||
|0|0|0|80D0C1C|80CBC40||||
|0|0|0|80D0EC4|80CBEF8||||
|0|0|0|80D12D0|80CC5B4||||
|0|0|0|80D1344|80CC628||||
|0|0|0|80D13F0|80CC6D4||||
|0|0|0|80D162C|80CC910|PromotionInit_Loop|int PromotionInit_Loop(int a1)||
|0|0|0|80D19A0|80CCCA4|IsThirdTraineePromotionAllowed|bool IsThirdTraineePromotionAllowed()||
|0|0|0|80D1FC4|80CD2CC||||
|0|0|0|80D2028|80CD330||||
|0|0|0|80D236C|80CD67C||||
|0|0|0|80D23A0|80CD6B0||||
|0|0|0|80D26A8|80CD9B8||||
|0|0|0|80D2904|80CDC14||||
|0|0|0|80D2BA4|80CDEA8||||
|0|0|0|80D2C48|80CDF4C||||
|0|0|0|80D2F44|80CE248||||
|0|0|0|80D2F88|80CE28C||||
|0|0|0|80D3284|80CE588||||
|0|0|0|80D3964|80CEC68||||
|0|0|0|80D3C44|80CEF48||||
|0|0|0|80D4178|80CF480||||
|0|0|0|80D6A80|80D1E10|.gcc2_compiled._15|int gcc2_compiled__15(int a1, int a2)||
|0|0|0|80D6AA0|80D1E30|__sbprintf|int _sbprintf(int a1, int a2, int a3)||
|0|0|0|80D7A88|80D2E18|cvt|_BYTE *cvt(int a1, int a2, int a3, int a4, char a5, char *a6, _DWORD *a7, int a8, _DWORD *a9)||
|0|0|0|80D7B7C|80D2F0C|exponent|int exponent(_BYTE *a1, int a2, char a3)||
|0|0|0|80D7BEC|80D2FB0|.gcc2_compiled._17|signed int gcc2_compiled__17(int a1)||
|0|0|0|80D7C98|80D305C||||
|0|0|0|80D7DF4|80D31B8|_dtoa_r|const char *dtoa_r(int a1, int a2, unsigned int a3, int a4, signed int a5, _DWORD *a6, unsigned int *a7, int *a8)||
|0|0|0|80D8AEC|80D3EB0|.gcc2_compiled._19|int gcc2_compiled__19(int a1)||
|0|0|0|80D8BE8|80D3FAC|__sfp|int _sfp(_DWORD *a1)||
|0|0|0|80D8CDC|80D40A0|.gcc2_compiled._21|int gcc2_compiled__21(int result, int a2)||
|0|0|0|80D8F5C|80D4320|.gcc2_compiled._22|signed int gcc2_compiled__22(int a1, int **a2)||
|0|0|0|80D9188|80D454C|.gcc2_compiled._23|int gcc2_compiled__23(int a1)||
|0|0|0|80D91C8|80D458C|.gcc2_compiled._24|int *gcc2_compiled__24(int a1, int a2, int a3)||
|0|0|0|80D9234|80D45F8|.gcc2_compiled._25|int gcc2_compiled__25(int a1)||
|0|0|0|80D9310|80D46D4|.gcc2_compiled._26|int *gcc2_compiled__26(int a1, int a2)||
|0|0|0|80D982C|80D4BF0|.gcc2_compiled._27|signed int gcc2_compiled__27(int a1, int *a2, _BYTE *a3, int a4)||
|0|0|0|80D9858|80D4C1C|.gcc2_compiled._28|unsigned __int8 *gcc2_compiled__28(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3)||
|0|0|0|80D98D8|80D4C9C|.gcc2_compiled._29|unsigned int gcc2_compiled__29(unsigned int a1, unsigned int a2, unsigned int a3)||
|0|0|0|80D9968|80D4D2C|.gcc2_compiled._30|_DWORD *gcc2_compiled__30(int a1, int a2)||
|0|0|0|80D99C0|80D4D84|_Bfree|_DWORD *Bfree(_DWORD *result, _DWORD *a2)||
|0|0|0|80D9A70|80D4E34|_s2b|_DWORD *s2b(int a1, int a2, signed int a3, signed int a4, int a5)||
|0|0|0|80D9BE4|80D4FA8|_multiply|_DWORD *multiply(int a1, _DWORD *a2, _DWORD *a3)||
|0|0|0|80D9D50|80D5114|_pow5mult|_DWORD *pow5mult(int a1, _DWORD *a2, int a3)||
|0|0|0|80D9DE8|80D51AC|_lshift|_DWORD *lshift(int a1, _DWORD *a2, int a3)||
|0|0|0|80D9E88|80D524C|__mcmp|int _mcmp(int a1, int a2)||
|0|0|0|80D9FB8|80D537C|_ulp|int ulp(int a1)||
|0|0|0|80DA004|80D53C8|_b2d|__int64 b2d(int a1, _DWORD *a2)||
|0|0|0|80DA0C0|80D5484|_d2b|_DWORD *d2b(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)||
|0|0|0|80DA1A8|80D556C|_ratio|int ratio(int a1, int a2)||
|0|0|0|80DA1F8|80D55BC|_mprec_log10|int mprec_log10(signed int a1)||
|0|0|0|80DA27C|80D5640|.gcc2_compiled._44|int gcc2_compiled__44(_DWORD *a1, int a2)||
|0|0|0|80DA2A8|80D566C|.gcc2_compiled._33|int gcc2_compiled__33(int a1, int a2, int a3)||
|0|0|0|80DA2DC|80D56A0|__swrite|int _swrite(int a1, int a2, int a3)||
|0|0|0|80DA31C|80D56E0|__sseek|int _sseek(int a1, int a2, int a3)||
|0|0|0|80DA3C8|80D578C|.gcc2_compiled._35|signed int gcc2_compiled__35(int a1)||
|0|0|0|80DA3E8|80D57AC|remap_handle|int remap_handle(int a1)||
|0|0|0|80DA434|80D57F8|initialise_monitor_handles|int initialise_monitor_handles()||
|0|0|0|80DA4CC|80D5890|wrap|int wrap(int result)||
|0|0|0|80DA508|80D58CC|_read|int read(int a1, int a2, int a3)||
|0|0|0|80DA550|80D5914|_swilseek|signed int swilseek(int a1, int a2, int a3)||
|0|0|0|80DA604|80D59C8|_write|int write(int a1, int a2, int a3)||
|0|0|0|80DA704|80D5AC8|_swiclose|int swiclose(int a1)||
|0|0|0|80DA788|80D5B4C|_sbrk|int sbrk(unsigned int a1)||
|0|0|0|80DA7DC|80D5BA0|_gettimeofday|int gettimeofday(int a1, _DWORD *a2)||
|0|0|0|80DA808|80D5BCC|_times|int times()||
|0|0|0|80DA82C|80D5BF0|.gcc2_compiled._36|int gcc2_compiled__36(_DWORD *a1, int a2, int a3, int a4)||
|0|0|0|80DA8B4|80D5C78||||
|0|0|0|80DA8EC|80D5CB0|.gcc2_compiled._40|int gcc2_compiled__40(_DWORD *a1, int a2, int a3)||
|0|0|0|80DA940|80D5D04|.gcc2_compiled._42|int gcc2_compiled__42(_DWORD *a1, int a2, int a3, int a4)||
|0|0|0|80DA970|80D5D34|.gcc2_compiled._43|int gcc2_compiled__43(_DWORD *a1, int a2, int a3, int a4)||
|0|0|0|80DA9A0|80D5D64|.gcc2_compiled._47|unsigned int gcc2_compiled__47(int a1)||
|0|0|0|80DAAE8|80D5EAC|__unpack_d|int _unpack_d(_DWORD *a1, int a2)||
|0|0|0|80DABC0|80D5F84|_fpadd_parts|int *fpadd_parts(_DWORD *a1, int *a2, _DWORD *a3)||
|0|0|0|80DB13C|80D6500|__divdf3|unsigned int _divdf3(int a1, int a2, int a3, int a4)||
|0|0|0|80DB2C4|80D6688|__fpcmp_parts_d|int _fpcmp_parts_d(_DWORD *a1, _DWORD *a2)||
|0|0|0|80DB3F0|80D67B4|__eqdf2|int _eqdf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB43C|80D6800|__nedf2|int _nedf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB488|80D684C|__gtdf2|int _gtdf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB4D4|80D6898|__gedf2|int _gedf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB520|80D68E4|__ltdf2|int _ltdf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB56C|80D6930|__ledf2|int _ledf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB5B8|80D697C|__floatsidf|unsigned int _floatsidf(__int64 a1)||
|0|0|0|80DB634|80D69F8|__fixdfsi|int _fixdfsi(int a1, int a2)||
|0|0|0|80DB6A8|80D6A6C|__negdf2|unsigned int _negdf2(int a1, int a2)||
|0|0|0|80DB6F8|80D6ABC|__truncdfsf2|int _truncdfsf2(int a1, int a2)||
|0|0|0|80DB73C|80D6B00|.gcc2_compiled._48|unsigned int gcc2_compiled__48(int *a1)||
|0|0|0|80DB7F4|80D6BB8|__unpack_f|int _unpack_f(unsigned int *a1, int *a2)||
|0|0|0|80DB870|80D6C34|_fpadd_parts_0|int *fpadd_parts_0(int *a1, int *a2, int *a3)||
|0|0|0|80DBA4C|80D6E10|__mulsf3|unsigned int _mulsf3(int a1, int a2)||
|0|0|0|80DBBB0|80D6F74|__divsf3|unsigned int _divsf3(int a1, int a2)||
|0|0|0|80DBC9C|80D7060|__fpcmp_parts_f|int _fpcmp_parts_f(int *a1, int *a2)||
|0|0|0|80DBDA8|80D716C|__eqsf2|int _eqsf2(int a1, int a2)||
|0|0|0|80DBDF0|80D71B4|__nesf2|int _nesf2(int a1, int a2)||
|0|0|0|80DBE38|80D71FC|__gtsf2|int _gtsf2(int a1, int a2)||
|0|0|0|80DBE80|80D7244|__gesf2|int _gesf2(int a1, int a2)||
|0|0|0|80DBEC8|80D728C|__ltsf2|int _ltsf2(int a1, int a2)||
|0|0|0|80DBF10|80D72D4|__lesf2|int _lesf2(int a1, int a2)||
|0|0|0|80DBF58|80D731C|__floatsisf|unsigned int _floatsisf(unsigned int a1)||
|0|0|0|80DBFB8|80D737C|__fixsfsi|unsigned int _fixsfsi(int a1)||
|0|0|0|80DC088|80D744C|.gcc2_compiled._49|unsigned int gcc2_compiled__49(unsigned int result, unsigned int a2, int a3)||
|0|0|0|80DC0BC|80D7480|.gcc2_compiled._50|int gcc2_compiled__50(int a1)||
|0|0|0|801A998|801ACBC|GenerateUnitCompleteAttackRange|[void GenerateUnitCompleteAttackRange(struct Unit* unit)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L533)||
|0|0|0|806A670|8068348||||
|0|0|0|80A5388|80A15B0||||
|0|0|0|809D300|809B038||||
|0|0|0|80AE870|80A9E1C||||
|0|0|0|806C510|806A1EC||||
|0|0|0|806845C|80660B4||||
|0|0|0|8092A5C|8090784||||
|0|0|0|80BD304|80B843C||||
|0|0|0|8033888|8033978||||
|0|0|0|809B3F8|8099120||||
|0|0|0|806C000|8069CDC||||
|0|0|0|809830C|809602C||||
|0|0|0|80C6530|80C1774||||
|0|0|0|80D946C|80D4830|_malloc_r|int malloc_r(int a1, int a2)||
|0|0|0|80681A0|8065DF8||||
|0|0|0|80D1A50|80CCD48|PromotionDisplay_Init|int PromotionDisplay_Init(int a1)||
|0|0|0|8050EE8|8050174|ekrBattle_8050174|int ekrBattle_8050174(_DWORD *a1)||
|0|0|0|808D00C|808ACFC||||
|0|0|0|80D2C84|80CDF88||||
|0|801DF68|801DBC4|801DFA8|801E34C|FillWarpRangeMap|int FillWarpRangeMap(int a1, int a2)||
|0|0|0|807CE78|807AADC||||
|0|0|0|80AFB30|80AB05C||||
|0|0|0|80DAE94|80D6258|__muldf3|unsigned int _muldf3(int a1, int a2, int a3, int a4)||
|0|0|0|8031160|8031214|ChapterChangeUnitCleanup|[void ChapterChangeUnitCleanup(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1213)||
|0|0|0|80D36E4|80CE9E8||||
|0|0|0|800E774|800E560|Event1D_TEXTEND|signed int Event1D_TEXTEND(int a1)||
|0|0|0|8041384|8041404||||
|0|0|0|806830C|8065F64|Loop6C_efxIvaldiOBJSideWash|int Loop6C_efxIvaldiOBJSideWash(int a1)||
|0|0|0|807B890|807947C|MU_GetMovementSpeed|signed int MU_GetMovementSpeed(int a1)||
|0|0|0|800D110|800CE4C|EventEngine_OnUpdate|[void EventEngine_OnUpdate(struct EventEngineProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L158)||
|0|0|0|8040BDC|8040C5C|AiTrySomethingPick|int AiTrySomethingPick()||
|0|0|0|804AB18|8049D24||||
|0|0|0|8098C3C|8096958||||
|0|0|0|80BB620|80B6AE0||||
|0|0|0|80BE594|80B96F8||||
|0|0|0|8051A2C|8050CF8|ekrBattle_8050CF8|int ekrBattle_8050CF8(_DWORD *a1)||
|0|0|0|80C3448|80BE65C||||
|0|0|0|80D37E4|80CEAE8||||
|0|0|0|80D38A0|80CEBA4||||
|0|0|0|801B13C|801B460|GenerateUnitStandingReachRange|[void GenerateUnitStandingReachRange(struct Unit* unit, int reach)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmidoten.c#L654)||
|0|0|0|802099C|8020CA4||||
|0|0|0|809C938|809A66C||||
|0|8097AB0|8097324|80A0C14|809E974||||
|0|0|0|80B9030|80B44A8||||
|0|0|0|80B933C|80B47B4||||
|0|0|0|80D067C|80CB6A0||||
|0|0|0|80D0A40|80CBA64||||
|0|0|0|800BB3C|800B84C||||
|0|0|0|800E160|800DF20|Event17_Fade|signed int Event17_Fade(int a1)||
|0|0|0|80D3110|80CE414||||
|0|0|0|80D6B28|80D1EB8|_vfprintf_r|int vfprintf_r(int a1, int a2, int a3, int a4)||
|0|0|0|8033E3C|8033F34||||
|0|0|0|80C3AA4|80BECB8||||
|0|0|0|80C77F8|80C2A40||||
|0|0|0|80CC5D8|80C76C8||||
|0|0|0|80CCC50|80C7CF8||||
|0|0|0|80CCEE8|80C7F90||||
|0|0|0|80CD62C|80C8690||||
|0|0|0|80CFF08|80CAF2C||||
|0|0|0|80D007C|80CB0A0||||
|0|0|0|80D2260|80CD570|GetClassAnimationIdForWeapon|int GetClassAnimationIdForWeapon(__int16 *out, int classIndex, int weapon)||
|0|0|0|800D220|800CF5C|EventEngine_OnEnd|[void EventEngine_OnEnd(struct EventEngineProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L212)||
|0|0|0|80408F4|8040974||||
|0|0|0|8072324|806FD74||||
|0|0|0|807F4F8|807D1B4||||
|0|0|0|807F8C0|807D57C||||
|0|0|0|80816DC|807F39C||||
|0|0|0|8082B08|80807C8||||
|0|0|0|80C5E84|80C10B8||||
|0|0|0|8018AC4|8018DB0|UpdatePrevDeployStates|[void UpdatePrevDeployStates(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1392)||
|0|0|0|8018B44|8018E30|LoadUnitPrepScreenPositions|[void LoadUnitPrepScreenPositions(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1418)||
|0|0|0|807F1BC|807CE78||||
|0|0|0|808310C|8080DCC||||
|0|0|0|8083284|8080F44||||
|0|0|0|8084F88|8082C50||||
|0|0|0|809F80C|809D570||||
|0|0|0|80A5048|80A1270||||
|0|0|0|80B4A0C|80AFDF4||||
|0|0|0|80B95DC|80B4A54||||
|0|0|0|80C916C|80C43B4||||
|0|0|0|80D344C|80CE750||||
|0|0|0|80D3554|80CE858||||
|0|0|0|8027144|80271A0|SMS_UpdateFromGameData|int SMS_UpdateFromGameData()||
|0|0|0|805C708|805B958||||
|0|0|0|8065450|8064344||||
|0|0|0|806B89A|8069572||||
|0|0|0|806CC0C|806A8E8||||
|0|0|0|806CDC4|806AAA0||||
|0|0|0|8088730|8086464|HandleCh5xUnits_End|int HandleCh5xUnits_End()||
|0|0|0|80BB5C0|80B6A80||||
|0|0|0|80C252C|80BD740||||
|0|0|0|80C899C|80C3BE4||||
|0|0|0|80CD7D8|80C883C||||
|0|0|0|800B2BC|800AF64||||
|0|0|0|800ACA8|800A950||||
|0|0|0|8020500|8020808||||
|0|0|0|807E8AC|807C568||||
|0|0|0|8083440|8081100||||
|0|0|0|8085914|80835DC|DisplayDeathQuoteForChar|int DisplayDeathQuoteForChar(unsigned __int8 a1)||
|0|0|0|8086694|80843C0|RunPostActionEvents|int RunPostActionEvents()||
|0|80B3AB4|80B2C90|809AD4C|8098A74||||
|0|0|0|80B762C|80B2A14||||
|0|0|0|80BFC20|80BADF0|NewMapUnit|signed int NewMapUnit(int a1, unsigned __int16 a2, char a3)||
|0|0|0|80D0F8C|80CBFC0||||
|0|0|0|800D6D8|800D414|EventEngine_EnableSkip|int EventEngine_EnableSkip(int a1)||
|0|0|0|800E3E0|800E188|Event1A_TEXTSTART|signed int Event1A_TEXTSTART(int a1)||
|0|0|0|8012430|8012360|InitPlayerUnitPositionsForPrepScreen|int InitPlayerUnitPositionsForPrepScreen()||
|0|0|0|80244AC|80244FC||||
|0|80AFBE8|80AECB0|8026720|802677C|SMS_SomethingGmapUnit|int SMS_SomethingGmapUnit(int a1, int a2, int a3)||
|0|0|0|806B94C|8069624||||
|0|0|0|807282C|807027C||||
|0|0|0|8078EF4|8076AD4||||
|0|0|0|807A888|8078464|MU_Create|[struct MUProc* MU_Create(struct Unit* pUnit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L593)||
|0|0|0|80805CC|807E28C||||
|0|0|0|80844CC|808218C||||
|0|0|0|8088254|8085F88||||
|0|0|0|80886E0|8086414|HandleCh5xUnits_Start|int HandleCh5xUnits_Start()||
|0|0|0|8097304|8095024||||
|0|80AB654|80AA78C|80B3240|80AE7C4||||
|0|0|0|80C476C|80BF988||||
|0|0|0|80C4A28|80BFC44||||
|0|0|0|80B6B7C|80B1F64||||
|0|0|0|802EF48|802F010|ExecStatusStaff|int ExecStatusStaff(signed int a1)||
|0|0|0|800C644|800C36C|Event98_|int Event98_(int a1)||
|0|0|0|800F15C|800EF48||||
|0|0|0|800FEA4|800FD28|Event2E_CheckAt|int Event2E_CheckAt(int a1)||
|0|0|0|8031568|803161C|HasConvoyAccess|signed int HasConvoyAccess()||
|0|0|0|8034744|803483C|UnitInfoWindow_DrawBase|int *UnitInfoWindow_DrawBase(int *a1, unsigned __int16 **a2, int a3, int a4, signed int w, int a6)||
|0|0|0|806AB44|806881C||||
|0|0|0|806ABE8|80688C0||||
|0|0|0|806DDF0|806BACC||||
|0|0|0|806E584|806C260||||
|0|0|0|80724F8|806FF48||||
|0|0|0|80753D0|8072EF4||||
|0|0|0|807A964|8078540|MU_CreateInternal|int MU_CreateInternal(__int16 a1, __int16 a2, unsigned __int16 a3, signed int a4, unsigned __int8 a5)||
|0|0|0|8088368|808609C||||
|0|0|0|80A90C8|80A4684|BWL_AddWinOrLossIdk|int BWL_AddWinOrLossIdk(int a1, unsigned __int8 a2, char a3)||
|0|0|0|80C3FFC|80BF210||||
|0|0|0|80CEFC4|80C9FF8||||
|0|0|0|80CF0D8|80CA10C||||
|0|0|0|80CFA14|80CAA38||||
|0|0|0|800C52C|800C254|Event96_|int Event96_(int a1)||
|0|0|0|800E9E0|800E7D0||||
|0|0|0|800F0FC|800EEE8||||
|0|0|0|8011ED0|8011DF4||||
|0|0|0|8017DE8|80180CC|UnitApplyBonusLevels|[void UnitApplyBonusLevels(struct Unit* unit, int levelCount) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L801)||
|0|0|0|806BE8C|8069B68||||
|0|0|0|806BF3C|8069C18||||
|0|0|0|8079074|8076C54||||
|0|0|0|807A334|8077F10||||
|8061C8C|806EF3C|806E750|807CD9C|807AA00|MapAnimProc_DisplayDeathFade|int MapAnimProc_DisplayDeathFade()||
|0|0|0|80B7CEC|80B30FC||||
|0|0|0|80BA720|80B5B9C||||
|0|0|0|80C3A44|80BEC58||||
|0|0|0|80C3BC0|80BEDD4||||
|0|0|0|80C40C4|80BF2D8||||
|0|0|0|80C823C|80C3484||||
|0|0|0|80CF384|80CA3B8||||
|0|0|0|80D1FF0|80CD2F8||||
|0|0|0|802CE84|802CF4C||||
|0|0|0|800C35C|800C084|Event89_|signed int Event89_(int a1)||
|0|0|0|800C70C|800C434|Event99_|signed int Event99_(int a1)||
|0|0|0|8012D40|8012C88||||
|0|0|0|80206D0|80209D8||||
|0|0|0|8037D38|8037CA0||||
|0|0|0|8037D90|8037CF8||||
|0|0|0|803D1B8|803D228|AiScriptCmd_18|int AiScriptCmd_18(_BYTE *a1)||
|0|0|0|80543A4|80536B8||||
|0|0|0|805E874|805D774||||
|0|0|0|806E478|806C154||||
|0|0|0|8071EA0|806F8F0||||
|0|0|0|8081CA4|807F964||||
|0|0|0|8082478|8080138||||
|0|0|0|8097F64|8095C84||||
|0|0|0|80A7E30|80A33EC||||
|0|0|0|80B0A28|80ABF74||||
|0|0|0|80B48B0|80AFC98||||
|0|0|0|80B6558|80B1938||||
|0|0|0|80B7E9C|80B32AC||||
|0|0|0|80BEA40|80B9BA4||||
|0|0|0|80BF1C8|80BA334|GM_SetupChapterStuff|int GM_SetupChapterStuff(int a1)||
|0|0|0|80C20B8|80BD2AC|GetCharacterClassId|int GetCharacterClassId(int a1)||
|0|0|0|80C5A10|80C0C44||||
|0|0|0|80C9840|80C4A88||||
|0|0|0|80CC904|80C79F4||||
|0|0|0|80CD0DC|80C8184||||
|0|0|0|80CFDFC|80CAE20||||
|0|0|0|80D01E8|80CB20C||||
|0|0|0|80D0570|80CB594||||
|0|0|0|80D24EC|80CD7FC||||
|0|0|0|8086918|808464C|GetBattleQuoteEntry|__int16 *GetBattleQuoteEntry(unsigned __int16 a1, unsigned __int16 a2)||
|0|0|0|800BED0|800BBE4||||
|0|0|0|8011688|801159C|NewGeneralItemGot|int NewGeneralItemGot(int a1, int a2, unsigned int a3)||
|0|0|0|8023E38|8023E7C|PickCommandUsability|signed int PickCommandUsability()||
|0|0|0|8043644|80436C0||||
|0|0|0|8055500|8054818||||
|0|0|0|8055618|8054930||||
|0|0|0|805668C|80556F0||||
|0|0|0|80629F4|80618F4||||
|0|0|0|806B728|8069400||||
|0|0|0|806BB1C|80697F4||||
|0|0|0|80716C8|806F118||||
|0|0|0|8072FBC|8070A14||||
|0|0|0|80789BC|807659C||||
|0|0|0|8082A70|8080730||||
|0|0|0|8089E2C|8087BA0||||
|0|0|0|808C0F8|8089DE8||||
|0|0|0|80994E4|8097200||||
|0|0|0|809AF98|8098CC0||||
|0|0|0|80A49A4|80A0BBC||||
|0|0|0|80AAF78|80A6560||||
|0|0|0|80AF8B4|80AADE0||||
|0|0|0|80AFD74|80AB2A0||||
|0|0|0|80B0EC0|80AC418||||
|0|0|0|80B9C50|80B50C8||||
|0|0|0|80BA864|80B5CE0||||
|0|0|0|80BD824|80B895C||||
|0|0|0|80BF178|80BA2E4|GM_Start|int GM_Start()||
|0|0|0|80C0218|80BB3E8||||
|0|0|0|80C0414|80BB5E4|WMLoc_GetNextLocId|int WMLoc_GetNextLocId(int a1)||
|0|0|0|80C0918|80BBAD4|GmapCursor_Destruct|int GmapCursor_Destruct(int a1)||
|0|0|0|80C2BAC|80BDDC4||||
|0|0|0|80C44A4|80BF6C0||||
|0|0|0|80C5830|80C0A64||||
|0|0|0|80C5868|80C0A9C||||
|0|0|0|80C60E8|80C1324||||
|0|0|0|80C7D78|80C2FC0||||
|0|0|0|80C81F4|80C343C||||
|0|0|0|80D2A34|80CDD38|Usability_ThirdPromotionOption|signed int Usability_ThirdPromotionOption()||
|0|0|0|80D2AEC|80CDDF0||||
|0|0|0|80D32EC|80CE5F0||||
|0|0|0|8086A58|808478C||||
|0|0|0|8016D60|8016FB8|GetUnitItemHealAmount|[int GetUnitItemHealAmount(struct Unit* unit, int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L777)||
|0|0|0|8079CC0|807789C||||
|0|0|0|8018BCC|8018EB8|ClearTemporaryUnits|[void ClearTemporaryUnits(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1447)||
|0|0|0|8037FDC|8037EB0||||
|0|0|0|80C1E74|80BD068|GetBattleMapType|signed int GetBattleMapType()||
|0|0|0|8002570|8002620|sub_8002620|[void sub_8002620(int songId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L204)||
|0|0|0|80026D8|8002788|Sound_SongVolumeTransitionBProc_Loop|int Sound_SongVolumeTransitionBProc_Loop(signed __int16 *a1)||
|0|0|0|8009DF8|8009E98||||
|0|0|0|800C5B4|800C2DC|Event97_|int Event97_(int a1)||
|0|0|0|800C90C|800C634|EventA5_|signed int EventA5_(int a1)||
|0|0|0|800CB60|800C884|EventAE_|signed int EventAE_(int a1)||
|0|0|0|800CBD4|800C8F8|EventB1_|signed int EventB1_(int a1)||
|0|0|0|800CCC4|800C9F0|EventB7_|signed int EventB7_(int a1)||
|0|0|0|800CEE8|800CC18|EventC3_|int EventC3_(int a1)||
|0|0|0|8010088|800FF24|Event30_ENUN|signed int Event30_ENUN(int a1)||
|80135C8|800D22C|800D31C|8010E38|8010CF0|Event43_|signed int Event43_(int a1)||
|0|800E71C|800E810|8010E70|8010D28|Event44_|signed int Event44_(int a1)||
|0|800EE60|800EF54|8011640|8011554|NewItemGot|int NewItemGot(unsigned int a1, int a2, unsigned __int16 a3)||
|0|0|0|8012700|801263C|StoreUnitWordStructs|int StoreUnitWordStructs()||
|0|0|0|8018110|80183FC|UnitKill|[void UnitKill(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L949)||
|0|0|0|8019FBC|801A2EC|RevertMapChange|[void RevertMapChange(int id) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmmap.c#L687)||
|0|0|0|801C884|801CC1C|PlayerPhase_InitUnitMovementSelect|int PlayerPhase_InitUnitMovementSelect()||
|0|0|0|801D370|801D70C|MakeMoveunitForActiveUnit|int MakeMoveunitForActiveUnit()||
|0|0|0|801E9EC|801ED94||||
|0|0|0|801EA60|801EE08||||
|0|0|0|8022DB8|8022DF0||||
|0|0|0|802F134|802F208||||
|0|0|0|803611C|803601C||||
|0|0|0|803621C|803611C||||
|0|0|0|8038788|8038668||||
|0|0|0|8038FF0|8038F78||||
|0|0|0|805E7CC|805D6CC||||
|0|80A93A0|80A848C|806BE20|8069AFC||||
|0|0|0|80720DC|806FB2C||||
|0|0|0|8080DD8|807EA98|MapAnimLevelUp_InitLevelUpBox|int MapAnimLevelUp_InitLevelUpBox(int a1, int a2, int a3)||
|0|0|0|8081A28|807F6E8||||
|0|0|0|8082BD0|8080890||||
|0|0|0|8087750|8085484|ResetAllPlayerUnitState|int ResetAllPlayerUnitState()||
|0|0|0|8097570|8095290||||
|0|0|0|8098B54|8096870||||
|0|0|0|809EF34|809CC9C||||
|0|0|0|80B0568|80ABAB4||||
|0|0|0|80B91D4|80B464C||||
|0|0|0|80BB718|80B6BD8||||
|0|0|0|80C2B14|80BDD2C|MapMU_RemoveUnit|int MapMU_RemoveUnit(int a1, int a2)||
|0|0|0|80C3618|80BE82C||||
|0|0|0|80C6134|80C1370||||
|0|0|0|80C62E0|80C1524||||
|0|0|0|80C63E0|80C1624||||
|0|0|0|80C6830|80C1A74||||
|0|0|0|80C9BD0|80C4E18||||
|0|0|0|80C9D18|80C4F60||||
|0|0|0|80C9EBC|80C5104||||
|0|0|0|80CAC94|80C5EA0||||
|0|0|0|80D273C|80CDA4C||||
|0|0|0|808214C|807FE0C||||
|0|0|0|8090AEC|808E818||||
|0|0|0|80378D8|8037840|LoadTrapData|int LoadTrapData(char *a1)||
|0|0|0|80862D4|8083FFC||||
|0|0|0|80B44C0|80AF8A0||||
|0|0|0|8009CF8|8009D98||||
|0|0|0|800C4DC|800C204|Event95_|int Event95_(int a1)||
|0|0|0|800E2C8|800E070|Event19_|int Event19_(int a1)||
|0|0|0|800F068|800EE54||||
|0|0|0|8015530|801550C|MapMain_StartIntroFx|int MapMain_StartIntroFx(signed int a1)||
|0|0|0|8018454|8018740|MoveActiveUnit|[void MoveActiveUnit(int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1085)||
|0|0|0|8021894|8021B9C||||
|0|0|0|8025814|8025864||||
|0|0|0|802DC10|802DCD8||||
|0|0|0|80359C0|80358C0||||
|0|0|0|8039094|803901C||||
|0|0|0|80393D8|8039360||||
|0|0|0|8042E74|8042EF0||||
|0|0|0|8043574|80435F0||||
|0|0|0|805FE44|805ED44||||
|8050A70|805A29C|8059AB4|806063C|805F53C|loadResireBG2|void loadResireBG2(int a1)||
|0|0|0|806A218|8067EE8|Loop6C_efxNaglfarBG2|int Loop6C_efxNaglfarBG2(int a1)||
|0|0|0|806C7A0|806A47C||||
|0|0|0|806C8B4|806A590||||
|0|0|0|806CA20|806A6FC||||
|0|0|0|806D3D0|806B0AC||||
|0|0|0|806DB54|806B830||||
|0|0|0|80718B4|806F304||||
|0|0|0|80719A8|806F3F8||||
|0|0|0|80724B0|806FF00||||
|0|0|0|8072F14|807096C||||
|0|0|0|8076550|80740C8||||
|0|0|0|807BA68|8079654|MU_BlinkEffect_OnLoop|int MU_BlinkEffect_OnLoop(int a1)||
|0|0|0|807BE24|8079A10|MU_CritFlash_SpriteShakeLoop|int MU_CritFlash_SpriteShakeLoop(int a1)||
|0|0|0|807C5F0|807A1FC|MuCtr_OnEnd|int MuCtr_OnEnd(int a1)||
|0|0|0|807D004|807ACAC||||
|0|0|0|807FC88|807D944||||
|0|0|0|807FCFC|807D9B8||||
|0|0|0|8081AC8|807F788||||
|0|0|0|8082E58|8080B18||||
|0|0|0|808618C|8083E64|RunTutorialEvent|signed int RunTutorialEvent(char a1)||
|0|0|0|8086D14|8084A48||||
|0|0|0|80880D4|8085E08||||
|0|0|0|80AED8C|80AA2A8||||
|0|0|0|80AF248|80AA768||||
|0|0|0|80B0CD4|80AC22C||||
|0|0|0|80B9E00|80B527C||||
|0|0|0|80BD4F8|80B8630||||
|0|0|0|80BE01C|80B9154|GM_80B9154|int GM_80B9154(int a1)||
|0|0|0|80BE4B8|80B961C||||
|0|0|0|80C27C4|80BD9D8||||
|0|0|0|80C2B7C|80BDD94||||
|0|0|0|80C2F7C|80BE194||||
|0|0|0|80C6070|80C12AC||||
|0|0|0|80C64B0|80C16F4||||
|0|0|0|80D1388|80CC66C||||
|0|0|0|800A788|800A42C||||
|0|0|0|80C3C34|80BEE48||||
|0|0|0|80D9EC8|80D528C|__mdiff|_DWORD *_mdiff(int a1, int a2, int a3)||
|0|0|0|800A874|800A518||||
|0|0|0|800A9DC|800A680||||
|0|0|0|806D9A4|806B680||||
|0|0|0|80869B0|80846E4|GetCharDeathQuoteEntry|__int16 *GetCharDeathQuoteEntry(unsigned __int16 a1)||
|0|0|0|8000BA0|8000BC8|InitRN|[void InitRN(int seed) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L30)||
|0|0|0|80012E4|8001334|ExecMainUpdate|[void ExecMainUpdate(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L279)||
|0|80039D4|8003AF8|80025C0|8002670|sub_8002670|[void sub_8002670(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L218)||
|0|0|0|800260C|80026BC|sub_80026BC|[void sub_80026BC(u16 speed)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L231)||
|0|0|0|8007FCC|80080D0||||
|0|0|0|8008004|8008108||||
|0|0|0|8009D60|8009E00||||
|0|0|0|800BD4C|800BA5C|SetSomeRealCamPos|int SetSomeRealCamPos(int a1, int a2, char a3)||
|0|0|0|800C0D4|800BDE8|Event81_|signed int Event81_(int a1)||
|0|0|0|800C410|800C138|Event90_WM_DRAWPATH|signed int Event90_WM_DRAWPATH(int a1)||
|0|0|0|800C740|800C468|Event9A_|signed int Event9A_(int a1)||
|0|0|0|800CB38|800C85C|EventAD_|int EventAD_(int a1)||
|0|0|0|800CC5C|800C980|EventB5_|int EventB5_(int a1)||
|806D398|800ECB8|800EDAC|800D760|800D49C|SetEventTriggerState|[void SetEventTriggerState(u16 triggerId, bool8 value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L542)||
|0|807F550|807E794|800E98C|800E77C|Event1F_|int Event1F_(int a1)||
|0|0|0|80153F8|80153D4|MapMain_CallBeginningEvent|int MapMain_CallBeginningEvent()||
|0|8015840|80153C4|8015458|8015434|MapMain_ThisProbablyUsedToBeEventRelatedInEarlierGames|signed int MapMain_ThisProbablyUsedToBeEventRelatedInEarlierGames()||
|0|0|0|801BED8|801C248|UNUSED_StartupDebugMenu_ChapterSelectEffect|signed int UNUSED_StartupDebugMenu_ChapterSelectEffect(int a1, int a2)||
|0|0|0|801D44C|801D7E8|ASMC_801D7E8|int ASMC_801D7E8()||
|0|0|0|8022E2C|8022E64||||
|0|0|0|8023088|80230C0||||
|0|0|0|8024354|802439C|StealItemMenuCommand_Effect|signed int StealItemMenuCommand_Effect(int a1, int a2)||
|0|0|0|8025EA0|8025EFC|AddToTargetListIfNotAllied|int AddToTargetListIfNotAllied(char *a1)||
|0|0|0|80315AC|8031660||||
|0|0|0|8032700|80327B4|DidUnitDie|bool DidUnitDie(int a1)||
|0|0|0|8034014|803410C||||
|802D2C8|8033494|8032F64|803606C|8035F6C||||
|0|0|0|8038574|8038448||||
|0|0|0|80396B4|803963C||||
|802F244|8035C6C|8035794|803A6F0|803A678|CpPerform_EscapeWait|signed int CpPerform_EscapeWait()||
|0|0|0|804532C|804538C||||
|0|0|0|804F098|804E314|ClearUiFrame|[void ClearUiFrame(u16* tilemap, int x, int y, int width, int height)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L301)||
|0|0|0|80556A4|80549BC||||
|8047A1C|8050D38|805055C|8056708|805576C||||
|0|0|0|8057E04|8056E7C||||
|0|0|0|8057EF0|8056F68||||
|0|0|0|806EA40|806C71C|StartEfxCriticalEffect|int StartEfxCriticalEffect(int a1)||
|0|0|0|806EBA0|806C87C||||
|0|0|0|807223C|806FC8C||||
|0|0|0|80728AC|80702FC||||
|0|0|0|8072E1C|8070874||||
|0|0|0|8072EA4|80708FC||||
|0|0|0|8078A60|8076640||||
|0|0|0|8078ABC|807669C||||
|0|0|0|8079220|8076E00||||
|0|0|0|80792A4|8076E84||||
|0|0|0|807EE14|807CAD0||||
|80684EC|80758AC|80750DC|80818A8|807F568||||
|0|0|0|8081F98|807FC58||||
|0|0|0|80826CC|808038C||||
|0|0|0|8083548|8081208||||
|0|0|0|8083600|80812C0||||
|0|0|0|8083CB0|8081970||||
|0|0|0|8085588|8083250|ShouldCallEndEvent|int ShouldCallEndEvent(int a1)||
|0|0|0|8087F48|8085C7C||||
|0|0|0|8088098|8085DCC||||
|0|0|0|8088114|8085E48||||
|0|0|0|8089EC0|8087C34||||
|0|0|0|8089FB0|8087D24||||
|0|0|0|809448C|8092194||||
|0|0|0|8097544|8095264||||
|0|0|0|8097D24|8095A44||||
|0|0|0|809AE40|8098B68||||
|0|0|0|809AEC0|8098BE8||||
|0|0|0|809C148|8099E68||||
|0|0|0|80A7F10|80A34CC||||
|0|0|0|80AF1F8|80AA718||||
|0|0|0|80B31E8|80AE76C||||
|0|0|0|80B7DA0|80B31B0||||
|0|0|0|80B7DF8|80B3208||||
|0|0|0|80B8088|80B3498||||
|0|0|0|80B9D44|80B51C0||||
|0|0|0|80BD56C|80B86A4||||
|800F644|8010440|800FFD0|80BDEB4|80B8FEC||||
|0|0|0|80BE9D4|80B9B38|WorldMap_InitChapterTransition|int WorldMap_InitChapterTransition(int a1)||
|0|800FCBC|0|80BF5B4|80BA718|StartGMapScreenVSync|int StartGMapScreenVSync(int a1, int a2, int a3, int a4, int a5)||
|0|0|0|80BF6B4|80BA818||||
|0|0|0|80C02F0|80BB4C0||||
|0|0|0|80C0368|80BB538||||
|0|0|0|80C10E0|80BC29C|MapRoute_BeginRouteTransition|int MapRoute_BeginRouteTransition(int a1, signed int a2)||
|0|80A9034|80A8120|80C126C|80BC428||||
|0|0|0|80C1E54|80BD048||||
|80977C0|80B2DD4|80B1FB0|80C3F84|80BF198||||
|0|800E32C|800E420|80C48D0|80BFAEC||||
|0|0|0|80C4AAC|80BFCC8||||
|0|0|0|80C4FC0|80C01DC|StartGMapMuEntry|int StartGMapMuEntry(signed int a1)||
|0|0|0|80C51F0|80C040C||||
|0|0|0|80C52D8|80C04F4||||
|0|0|0|80C55A4|80C07D4||||
|0|0|0|80C57DC|80C0A10||||
|0|0|0|80C5DB4|80C0FE8||||
|0|0|0|80C6CD0|80C1F18||||
|0|0|0|80C6EC4|80C210C||||
|0|0|0|80C7004|80C224C||||
|0|0|0|80C71D8|80C2420|Make6C_Gmap_RM|int Make6C_Gmap_RM(__int16 a1, __int16 a2, char a3, signed int a4)||
|0|0|0|80C7264|80C24AC|GetWMDisplayPosition|signed int GetWMDisplayPosition(_WORD *a1, _WORD *a2)||
|0|0|0|80C73B0|80C25F8||||
|0|0|0|80C7410|80C2658||||
|0|0|0|80C7474|80C26BC||||
|0|0|0|80C75BC|80C2804||||
|0|0|0|80C7694|80C28DC||||
|0|0|0|80C788C|80C2AD4||||
|0|0|0|80C7AFC|80C2D44||||
|0|0|0|80C7BBC|80C2E04||||
|0|0|0|80C8130|80C3378||||
|0|0|0|80C818C|80C33D4||||
|0|0|0|80C8DC4|80C400C||||
|0|0|0|80C8E70|80C40B8||||
|0|0|0|80C8EE4|80C412C||||
|0|0|0|80C8F3C|80C4184||||
|0|0|0|80C996C|80C4BB4||||
|0|0|0|80C9B58|80C4DA0||||
|0|0|0|80C9C7C|80C4EC4||||
|0|0|0|80C9DD4|80C501C||||
|0|0|0|80CA144|80C538C||||
|0|0|0|80CAC54|80C5E60||||
|8095100|80B05B8|80AF768|80CAE84|80C6090||||
|0|0|0|80CBD9C|80C6E90|Until6C2AIs8Callback|int Until6C2AIs8Callback(int a1)||
|0|0|0|80CC178|80C726C||||
|0|0|0|80CC528|80C7618||||
|0|0|0|80CDC80|80C8CE4||||
|0|0|0|80D1ECC|80CD1D4||||
|0|0|0|802AC00|802AC90|ComputeCrit|int ComputeCrit(unsigned __int16 *a1, int a2)||
|0|0|0|802B258|802B2E8|RollForGreatShield|int RollForGreatShield(int a1, int a2)||
|0|0|0|808583C|8083504|CallBattleQuoteEventsIfAny|int CallBattleQuoteEventsIfAny(int a1, unsigned __int8 a2)||
|0|0|0|808BAAC|808979C||||
|0|0|0|80DA85C|80D5C20|.gcc2_compiled._37|int gcc2_compiled__37(int a1, int a2, int a3)||
|80677A8|80749F0|80741F4|8080F48|807EC08|MapAnimLevelUp_GetActorStatUp|signed int MapAnimLevelUp_GetActorStatUp(int a1, int a2)||
|0|0|0|802B164|802B1F4|RollForSureShot|int RollForSureShot(int a1)||
|0|0|0|80323C8|803247C|ActionSteal|int ActionSteal(signed int a1)||
|0|0|0|8036B70|8036A70|BKSEL_DrawDetailed|int BKSEL_DrawDetailed(int a1)||
|0|0|0|807D704|807B3BC|SetBattleAnimActorFacing|int SetBattleAnimActorFacing(int a1, int a2, signed int a3)||
|0|0|0|80BFF10|80BB0E0||||
|0|0|0|80C1DE8|80BCFDC||||
|0|0|0|80C3864|80BEA78||||
|0|0|0|80DA36C|80D5730||||
|0|0|0|80BF95C|80BAB0C||||
|0|0|0|8000B0C|8000B34|StoreIRQToIRAM|[void StoreIRQToIRAM(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/irq.c#L12)||
|0|0|0|80024C4|8002574|Sound_PlaySong8002574|[void Sound_PlaySong8002574(int songId, int b, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L181)||
|0|0|0|8004564|800465C|Text_Clear2DLine|int Text_Clear2DLine(int a1)||
|0|0|0|80088E4|80089E8|FaceExists|bool FaceExists()||
|0|0|0|8008E2C|8008F3C||||
|0|0|0|80096C0|80097D0|APProc_Exists|[int APProc_Exists(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L391)||
|0|0|0|8009B7C|8009C1C||||
|0|0|0|8009D40|8009DE0|CallActualSaveMenu|int CallActualSaveMenu(int a1)||
|0|0|0|800BE84|800BB98||||
|0|0|0|800C7BC|800C4E4|Event9C_|int Event9C_()||
|0|0|0|800D0EC|800CE28|EventCD_|int EventCD_(int a1)||
|0|0|0|800DFB0|800DD58|Event11_SetIgnoredKeys|int Event11_SetIgnoredKeys(int a1)||
|0|0|0|800F364|800F150|Event24_UnblockGameGraphics|signed int Event24_UnblockGameGraphics(int a1)||
|0|0|0|80106FC|80105A4|Event37_GiveItem|signed int Event37_GiveItem(int a1)||
|0|0|0|8011B84|8011AA0||||
|0|0|0|8012888|80127C4||||
|0|0|0|8012B84|8012AC0||||
|0|0|0|8014DD0|8014DA8||||
|0|0|0|801D2B0|801D64C|PlayerPhase_WaitForUnitMovement|int PlayerPhase_WaitForUnitMovement(int a1)||
|0|0|0|801FFB4|80202BC||||
|0|0|0|8020AE0|8020DE8||||
|0|0|0|8020BF8|8020F00||||
|0|0|0|80217FC|8021B04||||
|0|0|0|8021AE4|8021DF8||||
|0|0|0|8022060|8022200||||
|0|0|0|8022BA0|8022BD8||||
|0|0|0|802E078|802E140|TradeMenu_802E140|int TradeMenu_802E140(int a1)||
|0|0|0|802FA20|802FAD0||||
|0|0|0|80321E8|803229C|ActionCombat|int ActionCombat(signed int a1)||
|0|0|0|8032674|8032728|KillUnitIfDefeatedBy|int KillUnitIfDefeatedBy(int a1, int a2)||
|0|0|0|8035D80|8035C80||||
|0|0|0|803836C|8038240||||
|0|0|0|8038EB0|8038E38||||
|0|0|0|8038F20|8038EA8||||
|0|0|0|8039278|8039200||||
|0|0|0|80394B4|803943C||||
|0|0|0|8039708|8039690||||
|0|0|0|8046798|8046838||||
|0|0|0|804CE18|804C078||||
|0|0|0|804DBF4|804CE5C||||
|8041FD8|804B29C|804AAC0|8050380|804F60C|FreezeMenu|[void FreezeMenu(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L633)||
|0|0|0|80503A0|804F62C|ResumeMenu|[void ResumeMenu(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L641)||
|80423E0|804B7E4|804B008|8050930|804FBBC||||
|8042400|804B804|804B028|8050950|804FBDC||||
|8046810|804F88C|804F0B0|8054CCC|8053FE4||||
|0|0|0|8055160|8054478||||
|0|0|0|805FAE4|805E9E4||||
|8050038|8059BAC|80593C4|805FC54|805EB54||||
|0|0|0|8061C48|8060B48||||
|0|0|0|8062B64|8061A64||||
|0|0|0|8063F44|8062E44||||
|0|0|0|8064F74|8063E74||||
|0|0|0|806A9A8|8068680||||
|0|0|0|806B048|8068D20||||
|0|0|0|806C3F0|806A0CC||||
|0|0|0|806C45C|806A138||||
|0|0|0|806C9E8|806A6C4||||
|0|0|0|806CEF0|806ABCC||||
|0|0|0|806E210|806BEEC||||
|0|0|0|806EA10|806C6EC||||
|0|0|0|8071798|806F1E8||||
|0|0|0|8072F94|80709EC||||
|0|0|0|80756A4|80731C8||||
|0|0|0|8075988|80734AC||||
|0|0|0|8078C14|80767F4||||
|0|0|0|8079208|8076DE8||||
|0|0|0|807947C|807705C||||
|0|0|0|8079734|8077310||||
|0|0|0|8079A0C|80775E8||||
|805FC54|806C7CC|806BFE0|807AB0C|80786E8|MU_SetDefaultFacing_Auto|[void MU_SetDefaultFacing_Auto(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L754)||
|0|0|0|807BAA0|807968C|MU_StartBlinkEffect|[void MU_StartBlinkEffect(struct MUProc* muProc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1564)||
|0|0|0|807BB9C|8079788|MU_StartPixelEffect|[void MU_StartPixelEffect(struct MUProc* muProc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1623)||
|0|0|0|807C37C|8079F84|MuCtr_Exists|bool MuCtr_Exists()||
|8061838|806EAE8|806E2FC|807CAC0|807A708|sub_807A708|[void sub_807A708(u32 a) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L17)||
|0|806EE5C|806E670|807CD14|807A95C|MapAnim_MoveCameraOntoTarget|[void MapAnim_MoveCameraOntoTarget(ProcPtr p) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L133)||
|0|0|0|807D308|807AFE0||||
|0|0|0|807E298|807BF54||||
|0|0|0|807E4F0|807C1AC|MapAnimExpBar_TransitionInLoop|int MapAnimExpBar_TransitionInLoop(int a1)||
|0|0|0|807E554|807C210|MapAnimExpBar_StartLevelUp|int MapAnimExpBar_StartLevelUp(int a1)||
|0|0|0|807F66C|807D328||||
|0|0|0|807F750|807D40C||||
|0|0|0|8080744|807E404||||
|0|0|0|8080788|807E448||||
|0|0|0|80814EC|807F1AC|MapAnimLevelUpProc_InitLevelUpBox|int MapAnimLevelUpProc_InitLevelUpBox(int a1)||
|0|0|0|80815FC|807F2BC||||
|0|0|0|808164C|807F30C||||
|0|0|0|8081694|807F354||||
|0|0|0|80818CC|807F58C||||
|0|0|0|808192C|807F5EC||||
|0|0|0|80825C8|8080288||||
|0|0|0|8082C40|8080900||||
|8069504|80768F4|8076124|8083C54|8081914|MapAnim_WaitForHPToEndChangingMaybe|int MapAnim_WaitForHPToEndChangingMaybe(int a1)||
|0|0|0|8083EB0|8081B70|MapAnim_TargetUnitWarpRing|int MapAnim_TargetUnitWarpRing()||
|0|0|0|80840C4|8081D84|MapAnim_TargetStarImplosion|int MapAnim_TargetStarImplosion()||
|0|0|0|80855A4|808326C|MaybeCallEndEvent_|int MaybeCallEndEvent_(int a1)||
|806BFE4|807A6BC|8079C48|8086E7C|8084BB0||||
|0|0|0|8087D98|8085ACC||||
|0|0|0|8087E24|8085B58||||
|0|0|0|8088A6C|808679C||||
|0|0|0|8088FA4|8086CE8||||
|0|0|0|808A024|8087D98||||
|0|0|0|808B71C|80894AC|StartHelpPromptSprite_Unused|[struct Proc* StartHelpPromptSprite_Unused(int x, int y, struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2564)||
|0|0|0|808B7E0|8089570|EndHelpPromptSprite|[void EndHelpPromptSprite(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L2608)||
|0|0|0|80909F0|808E71C||||
|0|0|0|8097E74|8095B94||||
|0|808EF6C|808E630|8097EE0|8095C00||||
|0|0|0|80992EC|8097008||||
|8082AD8|809163C|8090CF8|809A058|8097D80||||
|0|0|0|809A74C|8098474||||
|0|0|0|809A804|809852C||||
|0|0|0|80A6638|80A286C||||
|0|0|0|80A6718|80A294C||||
|0|0|0|80ACBD0|80A81B8||||
|0|0|0|80B0AE8|80AC034||||
|0|80AA0E4|80A91D0|80B1C70|80AD1D0||||
|0|0|0|80B1F84|80AD4E4||||
|0|0|0|80B79D8|80B2DF0||||
|0|0|0|80B7B64|80B2F74||||
|8095FC4|80B13B0|80B0588|80B8E70|80B42E8||||
|8095FF8|80B13E4|80B05BC|80B8E90|80B4308||||
|0|0|0|80B8F44|80B43BC||||
|0|0|0|80B9A8C|80B4F04||||
|0|0|0|80B9BE4|80B505C||||
|0|0|0|80BA5BC|80B5A38||||
|0|0|0|80BB350|80B6810||||
|0|80B5DBC|80B4F9C|80BB9D8|80B6ED0||||
|0|0|0|80BBFEC|80B7540||||
|0|80B5430|80B4610|80BD05C|80B8190||||
|0|0|0|80BDA04|80B8B3C||||
|0|0|0|80BE578|80B96DC||||
|0|0|0|80BE8D0|80B9A34||||
|0|0|0|80BEB4C|80B9CB0|WorldMap_WaitForChapterIntroEvents|int WorldMap_WaitForChapterIntroEvents(int a1)||
|0|80AD754|80AC87C|80BECD4|80B9E40||||
|0|0|0|80BEE68|80B9FD4||||
|0|0|0|80BF268|80BA3D4|GM_CallChapterWMIntroEvent|int GM_CallChapterWMIntroEvent(int a1)||
|0|0|0|80BF328|80BA490||||
|0|0|0|80BFD3C|80BAF0C|MapUnitC_DeleteGmapUnit|int MapUnitC_DeleteGmapUnit(int a1, int a2)||
|0|0|0|80C0F00|80BC0BC|GMapRoute_StartTransition|int GMapRoute_StartTransition(int a1)||
|0|0|0|80C165C|80BC81C||||
|0|0|0|80C20F8|80BD2EC|MapMUPrim_MakeUnitForChar|int MapMUPrim_MakeUnitForChar(int a1, int a2, int a3)||
|0|0|0|80C2180|80BD374|MapMUPrim_MakeUnitForClass|int MapMUPrim_MakeUnitForClass(int a1, unsigned __int16 a2, int a3)||
|0|0|0|80C21F4|80BD3E8|MapMUPrim_RemoveLinkedMapUnit|int MapMUPrim_RemoveLinkedMapUnit(int a1)||
|0|0|0|80C29EC|80BDC04|MapMU_FillPrim|int MapMU_FillPrim(int a1)||
|0|0|0|80C3D58|80BEF6C||||
|0|0|0|80C3DA4|80BEFB8||||
|0|0|0|80C4080|80BF294||||
|0|0|0|80C4370|80BF58C|WM_DrawPath|int WM_DrawPath(char a1, signed int a2)||
|0|0|0|80C452C|80BF748||||
|0|0|0|80C5330|80C054C||||
|0|0|0|80C6050|80C128C||||
|0|0|0|80C622C|80C1470||||
|0|0|0|80C623C|80C1480||||
|0|0|0|80C66A8|80C18EC||||
|0|0|0|80C686C|80C1AB0||||
|0|0|0|80C70B4|80C22FC||||
|0|0|0|80C72B0|80C24F8||||
|0|0|0|80C74E0|80C2728||||
|0|0|0|80C7508|80C2750||||
|0|0|0|80C767C|80C28C4||||
|0|0|0|80C771C|80C2964||||
|0|0|0|80C77D4|80C2A1C||||
|0|0|0|80C7D34|80C2F7C||||
|0|0|0|80C83DC|80C3624||||
|0|0|0|80C8ADC|80C3D24||||
|0|0|0|80C8B14|80C3D5C||||
|0|0|0|80C8C94|80C3EDC||||
|0|0|0|80C8CBC|80C3F04||||
|0|0|0|80C8F10|80C4158||||
|0|0|0|80C8FC8|80C4210||||
|0|0|0|80C96A8|80C48F0||||
|0|0|0|80C96D0|80C4918||||
|0|0|0|80C99F4|80C4C3C||||
|0|0|0|80C9F80|80C51C8||||
|0|0|0|80CABE4|80C5DF0||||
|0|0|0|80CAD20|80C5F2C||||
|0|0|0|80CAEC0|80C60CC||||
|0|0|0|80CBA98|80C6B8C||||
|0|0|0|80CBB30|80C6C24||||
|0|0|0|801F6E4|801FA8C||||
|0|0|0|80B528C|80B0674||||
|0|0|0|802B1E8|802B278|RollForPierce|int RollForPierce(int a1)||
|0|0|0|8069CB4|8067984||||
|0|0|0|807AC60|807883C|MU_StartStepSfx|[void MU_StartStepSfx(int soundId, int b, int hPosition) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L883)||
|0|0|0|807DC48|807B900|SetupMapBattleAnim|int SetupMapBattleAnim(int a1, int a2)||
|0|0|0|80857E8|80834B0|ShouldCallBattleQuote|bool ShouldCallBattleQuote(int a1, int a2)||
|0|0|0|808BA78|8089768||||
|0|0|0|80B8DC8|80B4240|MakeShop|int MakeShop(int a1, __int16 *a2, char a3, signed int a4)||
|0|0|0|80C17B0|80BC970||||
|0|0|0|80D8E9C|80D4260|_malloc_trim_r|signed int malloc_trim_r(int a1, int a2)||
|0|0|0|8001044|8001094|SyncPalettes_AdditiveFilter|int SyncPalettes_AdditiveFilter(int a1)||
|0|0|0|80010A0|80010F0|SyncPalettes_SubstractiveFilter|int SyncPalettes_SubstractiveFilter(int a1)||
|0|0|0|8072CB8|8070710||||
|0|0|0|807CDE8|807AA4C|MapAnimProc_DisplayExpBar|int MapAnimProc_DisplayExpBar(signed int a1)||
|0|0|0|80828EC|80805AC||||
|0|0|0|800D374|800D0B0|EventEngine_Create|[struct EventEngineProc* EventEngine_Create(const u16* events, u8 execType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L301)||
|0|0|0|802F8C4|802F978||||
|0|0|0|8053888|8052B98|StartEfxNoDamage|int StartEfxNoDamage(int a1, int a2, char a3)||
|0|0|0|8065944|8064838||||
|0|0|0|806C718|806A3F4||||
|0|0|0|806C7F0|806A4CC||||
|0|0|0|806DACC|806B7A8||||
|0|0|0|806E3DC|806C0B8||||
|0|0|0|807A6CC|80782A8|SelectFromWeightedArray|[int SelectFromWeightedArray(const u8 *weights, u8 size) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/monstergen.c#L12)||
|0|0|0|80D99D8|80D4D9C|_multadd|_DWORD *multadd(int a1, _DWORD *a2, int a3, unsigned int a4)||
|0|0|0|80CDEC4|80C8ED4||||
|0|0|0|80CE3FC|80C940C||||
|0|0|0|80CE740|80C9750||||
|0|0|0|8001C78|8001D28|UpdateHBlankHandlerState|[void UpdateHBlankHandlerState(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L971)||
|0|0|0|807193C|806F38C||||
|0|0|0|8071CB4|806F704||||
|0|0|0|8071E44|806F894||||
|0|0|0|806B7B0|8069488||||
|0|0|0|806DBC0|806B89C||||
|0|0|0|80CE0F0|80C98A0||||
|0|0|0|80CE208|80C9100||||
|0|0|0|80CE628|80C9218||||
|0|0|0|80CE890|80C9638||||
|0|0|0|8018E1C|8019108|sub_8019108|[void sub_8019108(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1600)||
|0|0|0|806B5D8|80692B0||||
|0|0|0|807DB9C|807B854|BeginBattleMapAnims|int BeginBattleMapAnims()||
|0|0|0|80989D4|80966F0||||
|0|0|0|8098A94|80967B0||||
|0|0|0|80A7C28|80A31E4|SaveConvoyItems|int SaveConvoyItems(int a1)||
|0|0|0|80C3918|80BEB2C||||
|0|0|0|8086B24|8084858|IsSethLArachelMyrrhInnes|signed int IsSethLArachelMyrrhInnes(__int16 a1)||
|0|0|0|809A6AC|80983D4||||
|0|0|0|80ABC70|80A7258||||
|0|0|0|80C1218|80BC3D4||||
|0|0|0|8001ACC|8001B58|SetupBackgrounds|[void SetupBackgrounds(u16 *bgConfig)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L866)||
|0|0|0|802FF04|802FFB4|ActionPick|int ActionPick()||
|0|0|0|80558C8|8054BF0||||
|0|0|0|8069904|80675D4||||
|0|0|0|8069BBC|806788C||||
|0|0|0|80858A8|8083570||||
|0|0|0|80C3744|80BE958||||
|0|0|0|806C884|806A560||||
|0|0|0|80AAB30|80A6118|UnpackUnitStructFromSuspend|int UnpackUnitStructFromSuspend(int a1, int a2)||
|0|0|0|80CD8D0|80C8934||||
|0|0|0|80CD9BC|80C8A20||||
|0|0|0|80CDAA8|80C8B0C||||
|0|0|0|80CDB94|80C8BF8||||
|0|0|0|80D9AF4|80D4EB8|_hi0bits|signed int hi0bits(int a1)||
|0|0|0|80D9B4C|80D4F10|_lo0bits|signed int lo0bits(unsigned int *a1)||
|0|0|0|80CE014|80C9024||||
|0|0|0|80CE320|80C9330||||
|0|0|0|80CE54C|80C955C||||
|0|0|0|80CE9A8|80C99B8||||
|0|0|0|8000F74|8000FC4|BG_GetTileMapOffset|[int BG_GetTileMapOffset(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L115)||
|0|0|0|8001208|8001258|SetInterrupt_LCDVBlank|[void SetInterrupt_LCDVBlank(InterruptHandler handler)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L232)||
|8001610|80018A8|80018D0|800125C|80012AC|SetInterrupt_LCDVCountMatch|[void SetInterrupt_LCDVCountMatch(InterruptHandler handler)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L247)||
|0|0|0|80012B8|8001308|sub_8001308|[void sub_8001308(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L263)||
|0|0|0|80013D0|8001414|sub_8001414|[void sub_8001414(struct KeyStatusBuffer *keyStatus)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L336)||
|0|0|0|80013DC|8001420|ResetKeyStatus|[void ResetKeyStatus(struct KeyStatusBuffer *keyStatus)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L343)||
|0|0|0|8001414|8001458|KeyStatusSetter_Set|[void KeyStatusSetter_Set(struct Proc *proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L365)||
|0|0|0|80014D8|800151C|sub_800151C|[void sub_800151C(u8 a, u8 b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L417)||
|0|0|0|8001DDC|8001E8C|BG_GetPriority|[int BG_GetPriority(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1037)||
|0|0|0|8001F20|8001FD0|sub_8001FD0|[void sub_8001FD0(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1097)||
|8004230|800473C|8004860|8002FBC|800306C|_EndProc|int EndProc(int a1)||
|0|8004A48|8004B6C|80032C8|800337C|ProcInst12_SetBit4|signed int ProcInst12_SetBit4(int a1)||
|0|0|0|8003D70|8003E40||||
|0|8013228|8012B70|8009ED8|8009F78||||
|0|0|0|8009F3C|8009FDC|GameControl_EnableSoundEffects|int GameControl_EnableSoundEffects()||
|0|80132C8|8012C10|8009F58|8009FF8||||
|0|0|0|800AB34|800A7D8||||
|0|0|0|800C4C0|800C1E8|Event94_|int Event94_(int a1)||
|0|0|0|800D340|800D07C|CallEvent|[void CallEvent(const u16* events, u8 execType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L292)||
|0|0|0|800D524|800D260|CallBattleQuoteEvent|[void CallBattleQuoteEvent(u16 textIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L421)||
|0|0|0|800D618|800D354|CallRetreatPromptEvent|[void CallRetreatPromptEvent(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L468)||
|0|0|0|800D77C|800D4B8|GetEventTriggerState|[int GetEventTriggerState(u16 triggerId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L549)||
|0|0|0|800DA04|800D77C|Event05_SetSlot|int Event05_SetSlot(int a1)||
|0|0|0|8011258|801116C||||
|0|0|0|8014F04|8014EDC||||
|0|0|0|80190C0|80193E8|GetUnitRescueName|[inline char* GetUnitRescueName(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L942)||
|0|0|0|80201A4|80204AC||||
|0|0|0|80204EC|80207F4||||
|0|0|0|8020AB4|8020DBC||||
|0|0|0|8023E94|8023ED8||||
|0|0|0|8037CD8|8037C40||||
|0|0|0|8039248|80391D0||||
|8031764|80384E4|8038030|803CECC|803CF3C|AiScriptCmd_17_DoEscape|int AiScriptCmd_17_DoEscape(_BYTE *a1)||
|8035880|803CD9C|803C8E8|8041CE8|8041D68|SioReady|int SioReady()||
|0|0|0|80432A0|804331C||||
|803BF8C|8043840|8043130|80486B0|804879C||||
|0|0|0|804C3A4|804B604||||
|803F2BC|8047BC4|80473D8|804C9DC|804BC3C||||
|0|0|0|804CCD0|804BF30||||
|0|0|0|804F9E4|804EC58|StartOrphanMenuAtExt|[    int unk)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L144)||
|0|0|0|804FA00|804EC74|StartOrphanMenuExt|[    int unk)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L154)||
|0|0|0|8050604|804F890|HasMenuChangedItem|[s8 HasMenuChangedItem(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L292)||
|0|0|0|80598A0|8058A70||||
|0|0|0|805FDD4|805ECD4||||
|0|0|0|805FF24|805EE24||||
|8055434|805E0C4|805D8DC|8062EF8|8061DF8||||
|80558D4|805E5C8|805DDE0|8063458|8062358||||
|0|0|0|8068A78|80666D0||||
|0|0|0|8068CB4|8066914||||
|0|0|0|8068DAC|8066A0C||||
|0|0|0|806B0C4|8068D9C||||
|0|0|0|806B40C|80690E4||||
|0|0|0|806D5E4|806B2C0||||
|0|0|0|8071B90|806F5E0||||
|0|0|0|80721E0|806FC30||||
|0|0|0|80728DC|807032C||||
|0|0|0|807290C|807035C||||
|0|0|0|8072E48|80708A0||||
|0|0|0|8075528|807304C||||
|0|0|0|8075864|8073388||||
|0|0|0|8078A40|8076620||||
|0|0|0|8079030|8076C10||||
|0|0|0|8079328|8076F08||||
|0|0|0|807A288|8077E64||||
|0|0|0|807A328|8077F04||||
|0|0|0|807A3C0|8077F9C||||
|0|0|0|807A3EC|8077FC8||||
|0|0|0|807A598|8078174||||
|0|0|0|807A748|8078324|GenerateMonsterClass|[int GenerateMonsterClass(u8 baseClassId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/monstergen.c#L42)||
|805FC18|806C790|806BFA4|807AAE0|80786BC|MU_SetDefaultFacing|[void MU_SetDefaultFacing(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L747)||
|0|0|0|807AC20|80787FC|MU_StepSound_OnInit|_WORD *MU_StepSound_OnInit(int a1)||
|0|0|0|807BDBC|80799A8|MU_CritFlash_SetFadedPalette|int MU_CritFlash_SetFadedPalette(int a1)||
|0|0|0|807BF80|8079B6C|MU_SetPaletteId|[void MU_SetPaletteId(struct MUProc* proc, unsigned paletteId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1857)||
|0|0|0|807E23C|807BEF8||||
|0|0|0|807E490|807C14C|MapAnimExpBar_TransitionInInit|int MapAnimExpBar_TransitionInInit(int a1)||
|0|0|0|8081464|807F124||||
|0|0|0|80814D0|807F190||||
|0|0|0|8081A64|807F724||||
|0|0|0|8082EE8|8080BA8||||
|0|0|0|8083700|80813C0||||
|80698BC|8076CB0|80764E0|8083F58|8081C18||||
|0|8076E34|8076664|8084080|8081D40|MapAnim_TargetStarExplosion|int MapAnim_TargetStarExplosion()||
|0|0|0|80848F8|80825B8||||
|0|0|0|8084984|8082644||||
|0|8077E1C|807764C|8084A70|8082730||||
|0|0|0|8088BF0|8086934||||
|8074804|8089B34|80891D4|8092984|80906AC||||
|0|0|0|8097674|8095394||||
|80848C8|80A04FC|809FB30|80A8CEC|80A42A8||||
|0|0|0|80AECD0|80AA1EC||||
|0|0|0|80AFDE8|80AB314||||
|0|0|0|80B0E9C|80AC3F4||||
|0|0|0|80B70C4|80B24AC||||
|0|0|0|80B7AF8|80B2F08||||
|0|0|0|80B7DDC|80B31EC||||
|0|0|0|80B7E6C|80B327C||||
|0|0|0|80B7FD4|80B33E4||||
|0|0|0|80B8E3C|80B42B4||||
|0|0|0|80B9554|80B49CC||||
|8097AC4|80B30E0|80B22BC|80BA130|80B55AC||||
|0|0|0|80BDE9C|80B8FD4|GM_80B8FD4|int GM_80B8FD4()||
|0|0|0|80BEBA0|80B9D04||||
|0|0|0|80BF4B4|80BA61C||||
|0|0|0|80BFAB4|80BAC64|GmapUnit_Init|int GmapUnit_Init(int result)||
|0|0|0|80BFD88|80BAF58||||
|0|0|0|80BFDFC|80BAFCC||||
|0|0|0|80BFE38|80BB008||||
|0|0|0|80BFE58|80BB028||||
|0|0|0|80BFEA8|80BB078||||
|0|0|0|80BFFB8|80BB188||||
|0|0|0|80C0538|80BB708||||
|0|0|0|80C086C|80BBA28||||
|0|0|0|80C2E3C|80BE054||||
|0|0|0|80C2E50|80BE068||||
|0|0|0|80C3F6C|80BF180||||
|0|0|0|80C43A8|80BF5C4||||
|0|0|0|80C456C|80BF788||||
|0|0|0|80C4598|80BF7B4||||
|0|0|0|80C4B64|80BFD80||||
|0|0|0|80C5D7C|80C0FB0||||
|0|0|0|80C6BA4|80C1DE8||||
|0|0|0|80C837C|80C35C4||||
|0|0|0|80C8B54|80C3D9C||||
|0|0|0|80C8C80|80C3EC8||||
|0|0|0|80C8F9C|80C41E4||||
|0|0|0|80C9958|80C4BA0||||
|0|0|0|80CAD78|80C5F84||||
|0|0|0|80CADA8|80C5FB4||||
|0|0|0|80CD4F0|80C8554||||
|0|0|0|80D1620|80CC904|PromotionInit_SetNullState|int PromotionInit_SetNullState(int a1)||
|0|0|0|80D2348|80CD658||||
|0|0|0|80D2EBC|80CE1C0||||
|0|0|0|80D8BB8|80D3F7C|__sfmoreglue|_DWORD *_sfmoreglue(int a1, int a2)||
|0|0|0|80D8C5C|80D4020|_cleanup_r|int cleanup_r(int a1)||
|0|0|0|80D8C6C|80D4030|_cleanup|int cleanup()||
|0|0|0|80D920C|80D45D0|setlocale|int *setlocale(int a1, int a2)||
|0|0|0|80DA35C|80D5720|__sclose|int _sclose(int a1)||
|0|0|0|80DA6F0|80D5AB4|_open|int open(_DWORD *a1, __int16 a2)||
|0|0|0|80DB3C4|80D6788|__cmpdf2|int _cmpdf2(int a1, int a2, int a3, int a4)||
|0|0|0|80DB6D0|80D6A94|__make_dp|unsigned int _make_dp(int a1, int a2, int a3, int a4, int a5)||
|0|0|0|80DB9EC|80D6DB0|__addsf3|unsigned int _addsf3(int a1, int a2)||
|0|0|0|80DBA18|80D6DDC|__subsf3|unsigned int _subsf3(int a1, int a2)||
|0|0|0|80DBD80|80D7144|__cmpsf2|int _cmpsf2(int a1, int a2)||
|0|0|0|80DC05C|80D7420|__extendsfdf2|unsigned int _extendsfdf2(int a1)||
|0|0|0|802BC98|802BD50||||
|0|0|0|806E6BC|806C398||||
|0|0|0|806E860|806C53C||||
|0|0|0|8001C50|8001D00|ExecBothHBlankHandlers|[void ExecBothHBlankHandlers(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L963)||
|0|0|0|808395C|808161C|MapAnim_BeginRoundSpecificAnims|int MapAnim_BeginRoundSpecificAnims()||
|0|0|0|80D4158|80CF460||||
|0|0|0|80DA650|80D5A14|_swiopen|int swiopen(_DWORD *a1, __int16 a2)||
|0|0|0|80088CC|80089D0|DialogueExists|bool DialogueExists()||
|0|0|0|8029010|8029068|IsGeneratedTargetListEmpty|bool IsGeneratedTargetListEmpty(int a1)||
|0|0|0|802B328|802B3D0|NullifyBattleDamageIfUsingStone|int NullifyBattleDamageIfUsingStone(int a1)||
|0|0|0|802EB58|802EC20|ExecRestore|int ExecRestore(signed int a1)||
|0|0|0|8037FA8|8037E7C||||
|0|0|0|804D23C|804C49C||||
|0|0|0|804EDFC|804E078|UnpackLegacyUiFramePalette|[void UnpackLegacyUiFramePalette(int palId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L179)||
|0|0|0|804EE5C|804E0D8|UnpackLegacyUiFrameImage|[void UnpackLegacyUiFrameImage(void* dest)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L195)||
|0|0|0|807AB24|8078700|MU_StartMoveScript_Auto|[void MU_StartMoveScript_Auto(const u8 commands[MU_COMMAND_MAX_COUNT]) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L761)||
|0|0|0|8085A54|808371C||||
|0|80907C8|808FE88|80992D0|8096FEC||||
|0|0|0|80B9F7C|80B53F8||||
|0|0|0|80C6ABC|80C1D00||||
|0|0|0|800CD34|800CA60|EventBA_|signed int EventBA_(int a1)||
|0|0|0|800CE40|800CB70|EventBE_|signed int EventBE_(int a1)||
|0|0|0|800EE64|800EC50||||
|0|0|0|800EF64|800ED50||||
|0|80582B8|8057AD0|805E2FC|805D1FC||||
|0|0|0|806AC98|8068970||||
|0|0|0|80CC590|80C7680||||
|0|0|0|80D2588|80CD898||||
|0|0|0|80D25E8|80CD8F8||||
|0|0|0|80D2648|80CD958||||
|0|0|0|8006230|800632C||||
|0|0|0|800627C|8006378||||
|0|0|0|8021B98|8021918||||
|0|0|0|806166C|805CAC4||||
|0|0|0|806EBE8|806CB3C||||
|0|0|0|80884F8|808622C||||
|0|0|0|8088590|80862C4||||
|0|0|0|80C79C8|80C2C10||||
|0|0|0|80C7E98|80C30E0||||
|0|0|0|8002B44|8002BF4|CallARM_FillMovementMap|[void CallARM_FillMovementMap()](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L65)||
|0|0|0|80A8AEC|80A40A8||||
|0|0|0|8025BD8|8025C34|AddAsTarget_IfPositionCleanForSummon|int AddAsTarget_IfPositionCleanForSummon(int a1, int a2)||
|0|0|0|8025C7C|8025CD8||||
|0|0|0|8078670|8076250||||
|0|0|0|80786F0|80762D0||||
|0|0|0|807B5E0|80791CC|MU_GenerateConfigDefault|MOVEUNITExtraData *MU_GenerateConfigDefault(__int16 a1, _BYTE *a2)||
|0|0|0|807B620|807920C|MU_GenerateConfigOther|MOVEUNITExtraData *MU_GenerateConfigOther(__int16 a1, _BYTE *a2)||
|0|0|0|8084C8C|808294C||||
|0|0|0|8084D5C|8082A24||||
|0|0|0|8084DB4|8082A7C||||
|0|0|0|8084E0C|8082AD4||||
|0|0|0|8084E64|8082B2C||||
|0|0|0|808B824|80895B4||||
|0|0|0|800142C|8001470|NewKeyStatusSetter|[void NewKeyStatusSetter(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L380)||
|0|0|0|80014A4|80014E8|sub_80014E8|[void sub_80014E8(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L410)||
|800285C|8002C24|8002D48|8001C00|8001CB0|sub_8001CB0|[void sub_8001CB0(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L949)||
|0|8004110|8004234|8002A18|8002AC8|sub_8002AC8|[void sub_8002AC8(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L467)||
|0|0|0|8002A48|8002AF8|StoreRoutinesToIRAM|[void StoreRoutinesToIRAM(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L24)||
|0|0|0|8002AE0|8002B90|CallARM_Func3|[void CallARM_Func3(int a, int b, int c, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L40)||
|0|0|0|8002AF4|8002BA4|CallARM_DecompText|[void CallARM_DecompText(const char *a, char *b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L45)||
|0|0|0|8003798|800384C||||
|0|0|0|8003D30|8003E00||||
|0|0|0|8004150|8004218|DrawGlyph1DTile|int DrawGlyph1DTile(int a1, int a2)||
|800AC30|8009080|80091F0|8007B08|8007C0C|DialogueMain_OnEnd|int DialogueMain_OnEnd()||
|0|0|0|80089A4|8008AA8||||
|8013428|8012CA4|8012610|8009914|8009A24||||
|0|8012FCC|0|8009C20|8009CC0||||
|0|0|0|800AEB0|800AB58||||
|0|0|0|800B044|800ACEC||||
|0|0|0|800BC00|800B910||||
|0|0|0|800BC44|800B954||||
|0|0|0|800BC84|800B994||||
|0|0|0|800C13C|800BE4C|Event84_WM_SETCAMONLOC|int Event84_WM_SETCAMONLOC(int a1)||
|0|0|0|800C17C|800BE8C|Event85_WM_SETCAMONSPRITE|int Event85_WM_SETCAMONSPRITE(int a1)||
|0|0|0|800C43C|800C164|Event91_WM_DRAWPATH_Silent|int Event91_WM_DRAWPATH_Silent(int a1)||
|0|0|0|800C470|800C198|Event92_REMOVEPATH|int Event92_REMOVEPATH(int a1)||
|0|0|0|800C934|800C65C|EventA6_|int EventA6_(int a1)||
|0|0|0|800CC00|800C924|EventB2_|signed int EventB2_(int a1)||
|0|0|0|800CE7C|800CBAC|EventBF_|signed int EventBF_(int a1)||
|0|0|0|800CEA8|800CBD8|EventC0_|signed int EventC0_()||
|8092E94|80B1E90|80B1068|800D48C|800D1C8|DeleteEventEngines|[void DeleteEventEngines(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L374)||
|0|0|0|800D640|800D37C|CallSuspendPromptEvent|[void CallSuspendPromptEvent(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L475)||
|0|0|0|800D798|800D4D4|sub_800D4D4|[struct Proc* sub_800D4D4(struct Proc* parent, ProcFunc init, ProcFunc loop, ProcFunc dest) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L555)||
|0|0|0|800EDC4|800EBB0||||
|0|0|0|800EE14|800EC00||||
|0|0|0|800F5EC|800F3EC|Event28_ChangeWeather|signed int Event28_ChangeWeather(int a1)||
|0|0|0|800FE88|800FD0C|Event2D_|int Event2D_(int a1)||
|0|0|0|8010AAC|8010968|Event3E_PrepScreenCall|signed int Event3E_PrepScreenCall(signed int a1)||
|0|0|0|8011288|801119C|PopupProc_InitGfx|int PopupProc_InitGfx(int a1)||
|0|0|0|80114E4|80113F8|LongPopup_Clear|int LongPopup_Clear(unsigned __int8 *a1)||
|0|0|0|8011814|8011728|CreateNewUnitPopup|int CreateNewUnitPopup(int a1, unsigned __int8 a2)||
|0|0|0|801183C|8011750||||
|0|0|0|8011C74|8011B90||||
|0|0|0|8011D78|8011C94||||
|0|0|0|8012340|8012270||||
|0|0|0|80123F4|8012324||||
|0|0|0|8012A14|8012950||||
|0|0|0|8012A48|8012984||||
|0|0|0|8012AF0|8012A2C||||
|0|0|0|8012BF4|8012B3C||||
|0|0|0|8012D9C|8012CE4||||
|0|0|0|8013BAC|8013AF4||||
|0|0|0|8013C58|8013BA0||||
|0|0|0|8013D10|8013C58||||
|0|0|0|8013D28|8013C70||||
|0|0|0|8014E64|8014E3C||||
|0|0|0|80190EC|8019414|GetUnitStatusName|[inline char* GetUnitStatusName(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L385)||
|0|0|0|801B820|801BB54|DebugMenu_MapEffect|[u8 DebugMenu_MapEffect(struct MenuProc *menuProc, struct MenuItemProc *menuItemProc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L130)||
|0|0|0|801BCC0|801C030||||
|0|0|0|801BCEC|801C05C||||
|0|801BCD4|0|801BD20|801C090|DEBUGONLY_Startup|int DEBUGONLY_Startup()||
|801ABE8|801BDC0|801BA10|801BE28|801C198||||
|0|0|0|801BE6C|801C1DC|UNUSED_StartupDebugMenu_WorldMapEffect|signed int UNUSED_StartupDebugMenu_WorldMapEffect()||
|0|0|0|801BEB4|801C224|UNUSED_StartupDebugMenu_ChapterSelectIdle|int UNUSED_StartupDebugMenu_ChapterSelectIdle(int a1, int a2)||
|0|0|0|801D47C|801D818|PlayerPhase_RangeDisplayIdle_ForceAPress|int PlayerPhase_RangeDisplayIdle_ForceAPress(unsigned __int16 **a1)||
|0|0|0|801D980|801DD1C||||
|0|0|0|801F000|801F3A8||||
|0|0|0|801FCD0|801FFD8||||
|0|0|0|801FD94|802009C||||
|0|0|0|801FDE8|80200F0||||
|0|0|0|80201DC|80204E4||||
|0|0|0|8020470|8020778||||
|0|0|0|80204C0|80207C8||||
|0|0|0|80205F0|80208F8||||
|0|0|0|802063C|8020944||||
|0|0|0|8020738|8020A40||||
|0|0|0|8020828|8020B30||||
|0|0|0|8020B40|8020E48||||
|0|0|0|8020F00|8021208||||
|801E9D8|802089C|8020434|80211CC|80214D4||||
|0|0|0|8021234|802153C||||
|0|0|0|80213C8|80216D0||||
|0|0|0|80216A4|80219AC||||
|0|0|0|8021D2C|8021ECC||||
|0|0|0|80224B8|80224EC||||
|0|0|0|80224F4|8022528||||
|0|0|0|80225C4|80225F8|MapMenuCommnd_EndEffect|signed int MapMenuCommnd_EndEffect()||
|0|0|0|8023E70|8023EB4||||
|0|0|0|80244F8|8024548||||
|0|0|0|80246D4|80247F4||||
|0|0|0|80286A4|8028710|GetAffinityName|[char* GetAffinityName(int affinity)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L355)||
|8023954|8027BA4|8027718|8029590|80295E8|WarpTargetPosSelect_Init|int WarpTargetPosSelect_Init(signed int a1)||
|0|0|0|802D218|802D2E0|TradeMenu_802D2E0|int TradeMenu_802D2E0(unsigned __int16 ***parent)||
|0|0|0|802DD08|802DDD0||||
|0|0|0|802F65C|802F73C||||
|0|0|0|802F680|802F760||||
|0|0|0|8031044|80310F8|RefreshBMapDisplay_FromBattle|[void RefreshBMapDisplay_FromBattle(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1143)||
|0|802EB7C|802E6B0|80313FC|80314B0|GameCtrl_DeclareCompletedChapter|[void GameCtrl_DeclareCompletedChapter(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1352)||
|0|0|0|803290C|80329C0||||
|0|0|0|80332D4|80333C4||||
|0|0|0|803339C|803348C||||
|0|8030A04|8030518|80333CC|80334BC||||
|0|0|0|8033458|8033548||||
|0|0|0|8033484|8033574||||
|0|0|0|8033544|8033634||||
|0|0|0|8034070|8034168||||
|0|0|0|80340D8|80341D0|PrepScreenProc_LockGame|int PrepScreenProc_LockGame()||
|0|0|0|8034964|8034A5C||||
|0|0|0|8034A18|8034B10||||
|0|0|0|8034AEC|8034BE4||||
|0|8032FF8|8032AC8|8035C0C|8035B0C||||
|0|0|0|8035C44|8035B44||||
|0|0|0|8035E9C|8035D9C||||
|0|0|0|80361E8|80360E8||||
|0|0|0|8036E9C|8036D9C|BKSEL_InitGfx|int BKSEL_InitGfx(int a1)||
|800D85C|802BC98|0|803830C|80381E0||||
|0|0|0|8038334|8038208|PushGlobalTimer|int PushGlobalTimer()||
|0|0|0|803835C|8038230||||
|0|0|0|8038F68|8038EF0||||
|0|0|0|8039504|803948C||||
|0|0|0|803C7F4|803C864|IsUnitEnemyAndNotInTheAiInstList|bool IsUnitEnemyAndNotInTheAiInstList(int a1)||
|0|0|0|804134C|80413CC||||
|0|0|0|8041504|8041584||||
|8035414|803C930|803C47C|8041880|8041900||||
|0|0|0|8042E38|8042EB4||||
|8036D3C|803E280|803DDD0|80431C8|8043244||||
|0|0|0|8043C74|8043CF4||||
|0|0|0|8046CCC|8046D6C||||
|0|8043330|0|8048198|8048280||||
|803C578|8044DC0|80445C4|8049B74|8048D64||||
|0|8046510|8045D24|804B2B8|804A51C||||
|0|0|0|804C6D8|804B938||||
|803F040|8047948|804715C|804C75C|804B9BC||||
|0|0|0|804CD4C|804BFAC||||
|0|0|0|804D18C|804C3EC||||
|8040880|80491CC|80489E4|804DD78|804CFE0||||
|0|0|0|804E110|804D37C||||
|0|0|0|804F598|804E80C|DisplayUiHand_unused|[void DisplayUiHand_unused(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1085)||
|0|0|0|804F964|804EBD8|StartOrphanMenuAt|[struct MenuProc* StartOrphanMenuAt(const struct MenuDef* def, struct MenuRect rect)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L99)||
|0|0|0|80501E8|804F474|Menu_HelpBoxInit|int Menu_HelpBoxInit(int a1)||
|0|0|0|80505A0|804F82C|SyncMenuBgs|[void SyncMenuBgs(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L277)||
|0|0|0|80505C0|804F84C|ClearMenuBgs|[void ClearMenuBgs(struct MenuProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L283)||
|0|0|0|8051A00|8050CCC|ekrBattle_8050CCC|int ekrBattle_8050CCC(_DWORD *a1)||
|0|804F86C|804F090|8054CAC|8053FC4||||
|0|0|0|8056C78|8055CF0|ekrBattleStarting_8055CF0|int ekrBattleStarting_8055CF0(_WORD *a1)||
|0|0|0|805F0E8|8065384||||
|0|0|0|805FEDC|8061854||||
|0|0|0|806177C|8060734||||
|0|0|0|80617D8|806067C||||
|0|0|0|8061834|80606D8||||
|0|0|0|8061CD4|8063EF8||||
|0|0|0|8064478|80625B0||||
|0|0|0|8064FF8|8060BD4||||
|0|806030C|805FB24|8065160|8064060||||
|0|0|0|8065D8C|8064C80||||
|0|0|0|8068F58|8066BBC||||
|0|0|0|806923C|8066EA8||||
|0|0|0|8069D60|8067914||||
|0|0|0|806A14C|8067E1C|Loop6C_efxNaglfarBG|int Loop6C_efxNaglfarBG(int a1)||
|0|0|0|806A3AC|8067FB8||||
|0|0|0|806A960|8068638||||
|0|0|0|806ACFC|80689D4||||
|0|0|0|806ADC4|8068A9C||||
|0|0|0|806B6F4|80693CC||||
|8056B28|8062D88|80625A0|806EA8C|806C768||||
|0|0|0|806EB64|806CAE0||||
|0|0|0|806EC28|806CB7C||||
|0|0|0|806ED2C|806CA08||||
|0|80642F4|0|806EE04|8074AFC||||
|0|0|0|806EEA0|806C904||||
|8057B90|8063E2C|8063644|806FEB4|806DB9C||||
|0|0|0|8070BEC|806E610||||
|0|0|0|8070C94|806E6E0||||
|0|0|0|8070D50|806E79C||||
|0|0|0|8071514|806EF64||||
|0|0|0|807197A|806F3CA||||
|0|0|0|8071B6C|806F5BC||||
|0|0|0|8071C18|806F668||||
|0|0|0|8071C84|806F6D4||||
|0|0|0|8071C9C|806F6EC||||
|0|0|0|8071D70|806F7C0||||
|0|0|0|8071E14|806F864||||
|0|0|0|8071E2C|806F87C||||
|0|0|0|8071F18|806F968||||
|0|0|0|8072288|806FCD8||||
|0|0|0|8072798|80701E8||||
|0|0|0|8072B10|8070568||||
|0|0|0|8072D68|80707C0||||
|0|0|0|8072F74|80709CC||||
|0|0|0|8075450|8072F74||||
|0|0|0|80784D0|8076178|ekrPopup_WaitWpnBroke|int ekrPopup_WaitWpnBroke(int a1)||
|0|0|0|8078534|80760B0|ekrPopup_WaitWRankUp|int ekrPopup_WaitWRankUp(int a1)||
|0|0|0|8078598|8076114|ekrPopup_WaitWRankUp2|int ekrPopup_WaitWRankUp2(int a1)||
|0|0|0|80785FC|80761DC|ekrPopup_WaitWpnBroke2|int ekrPopup_WaitWpnBroke2(int a1)||
|0|0|0|80786B0|8076290||||
|0|0|0|8078960|8076540||||
|0|0|0|80789EC|80765CC||||
|0|0|0|8078B04|80766E4||||
|0|0|0|8078C38|8076818||||
|0|0|0|8078EC4|8076AA4||||
|0|0|0|80797BC|8077398||||
|0|0|0|8079884|8077460||||
|0|0|0|8079930|807750C||||
|0|0|0|80799C0|807759C||||
|0|0|0|8079A44|8077620||||
|0|0|0|807A15C|8077D38||||
|0|0|0|807A1EC|8077DC8||||
|0|807DDAC|0|807A2C0|8077E9C||||
|0|0|0|807A310|8077EEC||||
|0|0|0|807A548|8078124||||
|0|0|0|807A564|8078140||||
|0|806C474|806BC88|807A948|8078524|MU_8078524|[void MU_8078524(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L660)||
|805FE78|806C9F8|806C20C|807AC34|8078810|MU_StepSound_OnFirstSound|int MU_StepSound_OnFirstSound(int a1)||
|0|0|0|807B4A4|8079090|MU_OnEnd|int MU_OnEnd(int a1)||
|0|0|0|807BBF8|80797E4|MU_SetDisplayPosition|[void MU_SetDisplayPosition(struct MUProc* proc, int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1649)||
|0|0|0|807BC08|80797F4|MU_SetDisplayOffset|[void MU_SetDisplayOffset(struct MUProc* proc, int xOff, int yOff) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1654)||
|0|0|0|807BC18|8079804|MU_StartFlashFade|[void MU_StartFlashFade(struct MUProc* proc, int flashType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1659)||
|0|0|0|807BC6C|8079858|MU_8079858|[void MU_8079858(struct MUProc* muProc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1674)||
|0|0|0|807BCC4|80798B0|MU_StartActionAnim|[void MU_StartActionAnim(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1694)||
|0|0|0|807BCFC|80798E8|MU_StartDelayedFaceTarget|[void MU_StartDelayedFaceTarget(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1710)||
|0|0|0|807BD20|807990C|MU_EndRefaceApAnim|int MU_EndRefaceApAnim(int a1)||
|0|0|0|807BE00|80799EC|MU_CritFlash_StartFadeBack_maybe|int MU_CritFlash_StartFadeBack_maybe(int a1)||
|0|0|0|807BF2C|8079B18|MU_SetSpecialSprite|[void MU_SetSpecialSprite(struct MUProc* proc, int displayedClassId, const u16* palette) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1838)||
|8061B10|806EDC0|806E5D4|807CCA8|807A8F0|MapAnim_DisplayRoundAnim|[void MapAnim_DisplayRoundAnim(ProcPtr p) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L114)||
|0|806EE30|806E644|807CCF8|807A940|MapAnim_MoveCameraOntoSubject|[void MapAnim_MoveCameraOntoSubject(ProcPtr p) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mapanim.c#L126)||
|0|0|0|807D060|807AD08|New6C_SummonGfx_FromActionPos|int New6C_SummonGfx_FromActionPos(int a1)||
|0|0|0|807D39C|807B070||||
|0|0|0|807D5B4|807B234||||
|0|0|0|807D5D4|807B254||||
|0|0|0|807D5F4|807B274||||
|0|0|0|807D614|807B294||||
|0|0|0|807D634|807B2B4||||
|0|0|0|807DF10|807BBC8|MapAnim_StartBattleInfoBox|int MapAnim_StartBattleInfoBox(char a1, char a2, int a3)||
|8062D64|806FFCC|806F7E0|807DF38|807BBF0|MapAnimUi_Clear|int MapAnimUi_Clear()||
|0|0|0|807E370|807C02C|MapAnimExpBar_LoadGfx|int MapAnimExpBar_LoadGfx(int a1)||
|0|0|0|807E834|807C4F0||||
|806495C|8071BD8|80713EC|807EDEC|807CAA8||||
|0|0|0|807EE48|807CB04||||
|0|0|0|807EF6C|807CC28|WallBreakAnim_Init|int WallBreakAnim_Init(int a1)||
|0|0|0|807EFBC|807CC78|StartMapAnimPoisonEffect|int StartMapAnimPoisonEffect(int a1)||
|0|0|0|807F05C|807CD18||||
|0|0|0|807F114|807CDD0||||
|0|0|0|807F3F8|807D0B4||||
|0|0|0|807F624|807D2E0||||
|0|0|0|807F710|807D3CC||||
|0|0|0|807F818|807D4D4||||
|0|0|0|807F9CC|807D688||||
|0|0|0|807FA1C|807D6D8||||
|0|0|0|807FB1C|807D7D8||||
|0|0|0|807FB70|807D82C|NewMapAnimEffectAnimator|int NewMapAnimEffectAnimator(int a1, int a2, int a3, __int16 a4)||
|0|0|0|807FBA4|807D860||||
|0|0|0|807FD70|807DA2C||||
|0|0|0|807FDAC|807DA68||||
|0|0|0|807FDEC|807DAA8|StartUnitWarpRing|int StartUnitWarpRing(int a1)||
|0|0|0|807FE2C|807DAE8||||
|0|8073084|8072898|807FEEC|807DBA8||||
|0|0|0|80800C0|807DD80||||
|0|0|0|8080108|807DDC8||||
|0|0|0|8080170|807DE30||||
|0|0|0|80801C0|807DE80||||
|0|0|0|8080334|807DFF4||||
|806664C|80738B4|80730C8|8080378|807E038||||
|0|0|0|8080414|807E0D4||||
|0|0|0|8080458|807E118||||
|0|0|0|80804BC|807E17C||||
|0|0|0|80804F0|807E1B0||||
|0|0|0|8080524|807E1E4||||
|0|0|0|808068C|807E34C||||
|0|0|0|80806D0|807E390||||
|0|0|0|80807CC|807E48C||||
|0|0|0|8080810|807E4D0||||
|0|0|0|8080978|807E638||||
|0|0|0|80809BC|807E67C||||
|0|0|0|8080AA0|807E760||||
|0|80742A8|8073ABC|8080ADC|807E79C||||
|0|80742DC|8073AF0|8080B04|807E7C4||||
|0|0|0|8080D60|807EA20||||
|0|0|0|8080DA0|807EA60||||
|0|0|0|808144C|807F10C|MapAnim_StartLevelUp|int MapAnim_StartLevelUp(__int16 a1, signed int a2)||
|0|0|0|8081B38|807F7F8|StartStarRotationEffect|int StartStarRotationEffect(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)||
|0|0|0|8081B78|807F838|StartStarExplosionEffect|int StartStarExplosionEffect(__int16 a1, __int16 a2)||
|0|0|0|8081B98|807F858|StartStarImplosionEffect|int StartStarImplosionEffect(__int16 a1, __int16 a2)||
|0|0|0|8081BDC|807F89C||||
|0|0|0|8082024|807FCE4||||
|0|0|0|8082378|8080038||||
|0|0|0|8082390|8080050||||
|0|0|0|8082718|80803D8||||
|0|0|0|80829A0|8080660||||
|0|0|0|8082EC4|8080B84||||
|0|0|0|808306C|8080D2C|New6C_SummonGfx|int New6C_SummonGfx(signed int a1, int a2, int a3)||
|0|0|0|80833B8|8081078||||
|0|0|0|80834EC|80811AC||||
|0|0|0|808352C|80811EC||||
|8069028|80763F0|8075C20|808392C|80815EC|MapAnim_MoveCameraOnWarpTarget|int MapAnim_MoveCameraOnWarpTarget(signed int a1)||
|80698E4|8076CD8|8076508|8083F0C|8081BCC|MapAnim_WarpTargetWarpRing|int MapAnim_WarpTargetWarpRing()||
|80699A4|8076D98|80765C8|8084014|8081CD4|MapAnim_TargetUnitFlashOut|int MapAnim_TargetUnitFlashOut()||
|0|0|0|8084144|8081E04|MapAnim_MoveTargetForWarp|int MapAnim_MoveTargetForWarp()||
|0|0|0|8084298|8081F58||||
|0|0|0|8085178|8082E40||||
|0|0|0|8085AC8|8083790||||
|806AAA0|8078CF0|8078520|8085D00|80839C8|EvCheck08_DOOR|signed int EvCheck08_DOOR(_DWORD *a1)||
|806AAEC|8078D3C|807856C|8085D48|8083A10|EvCheck09_|signed int EvCheck09_(_DWORD *a1)||
|0|0|0|8086DA8|8084ADC||||
|0|0|0|808769C|80853D0||||
|0|807B448|807A9D4|80877C8|80854FC||||
|0|0|0|80877F8|808552C||||
|0|0|0|808786C|80855A0||||
|0|0|0|8087E80|8085BB4||||
|0|0|0|80883CC|8086100||||
|0|0|0|8088798|80864CC|CallRouteSplitMenu|int CallRouteSplitMenu(int a1)||
|0|0|0|80887E0|8086514|MenuCommand_DrawRouteSplit|int MenuCommand_DrawRouteSplit(int a1, int a2)||
|0|0|0|8089DCC|8087B40||||
|0|0|0|8089E90|8087C04||||
|0|0|0|808A144|8087EB8|DisplayPageNameSprite|[void DisplayPageNameSprite(int pageid)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L1404)||
|0|0|0|808A5E0|8088354||||
|0|0|0|808A6D8|808844C||||
|0|0|0|808A73C|80884B0||||
|0|0|0|808AB40|80888B4||||
|0|0|0|808ABAC|8088920|StatScreenBGVPosManager_Loop|int StatScreenBGVPosManager_Loop()||
|0|0|0|808B3DC|8089150||||
|0|0|0|808B6FC|808948C|Loop6C_8A00B20_UpdateOAMData|int Loop6C_8A00B20_UpdateOAMData(int *a1)||
|0|0|0|808D3AC|808B09C||||
|0|0|0|8090A88|808E7B4||||
|0|0|0|80929D0|80906F8||||
|0|0|0|80974C0|80951E0||||
|0|0|0|8098778|8096494||||
|0|0|0|80988D4|80965F0||||
|8082A7C|80915D8|8090C94|8099FEC|8097D14||||
|0|0|0|809A6E0|8098408||||
|0|0|0|809A7C4|80984EC||||
|0|0|0|809A8D8|8098600||||
|0|0|0|809AC94|80989BC||||
|0|0|0|809B92C|8099654||||
|0|0|0|809BDD8|8099AF8||||
|0|8093004|80926F8|809BF40|8099C60||||
|0|0|0|809C128|8099E48||||
|0|0|0|809EBFC|809C958||||
|0|0|0|809EE4C|809CBA8||||
|0|80960E0|80958B0|809EF94|809CCFC||||
|0|0|0|809FBB4|809D914||||
|0|8098E3C|8098550|80A1FF4|809FD54||||
|0|8098E74|8098588|80A2028|809FD88||||
|0|0|0|80A2074|809FDD4||||
|0|0|0|80A2198|809FEFC||||
|0|0|0|80A2210|809FF74||||
|0|0|0|80A298C|80A06F0||||
|0|8099828|8098F70|80A29A8|80A070C||||
|0|0|0|80A4ED4|80A10FC||||
|0|0|0|80A4F38|80A1160||||
|0|0|0|80A532C|80A1554||||
|0|0|0|80A5354|80A157C||||
|0|809D5A4|809CB8C|80A5F9C|80A21D0||||
|0|0|0|80A63C4|80A25F8||||
|0|0|0|80A678C|80A29C0||||
|0|0|0|80A8BE8|80A41A4||||
|0|80A041C|0|80A8C0C|80A41C8||||
|0|0|0|80ABA8C|80A7074||||
|0|0|0|80AC934|80A7F1C||||
|0|0|0|80AD644|80A8C2C||||
|0|0|0|80AE41C|80A9A08||||
|0|0|0|80AEB6C|80AA118||||
|0|80A5AA0|80A4DB4|80AEFA4|80AA4C0|Make6C_savemenu|int Make6C_savemenu(signed int a1)||
|0|0|0|80AF138|80AA614||||
|807B89C|807C658|807BBE4|80AF1CC|80AA6EC||||
|0|0|0|80B01DC|80AB720||||
|0|0|0|80B0238|80AB77C||||
|0|0|0|80B0C50|80AC1A8||||
|0|0|0|80B1138|80AC698||||
|0|0|0|80B2D4C|80AE2D0|NewFadeIn|int NewFadeIn(int a1)||
|0|0|0|80B3B08|80AEEE8||||
|0|0|0|80B4144|80AF524||||
|0|0|0|80B46B4|80AFA94||||
|0|0|0|80B47D4|80AFBBC||||
|0|0|0|80B50D4|80B04BC||||
|0|0|0|80B5110|80B04F8||||
|0|80AE6D4|0|80B5F70|80B1350||||
|0|80AE9A8|80ADA90|80B6240|80B1620||||
|0|0|0|80B70D8|80B24C0||||
|0|0|0|80B7430|80B2818||||
|0|0|0|80B7BC0|80B2FD0||||
|0|0|0|80B7FEC|80B33FC||||
|0|0|0|80B8D48|80B41C0||||
|0|0|0|80B8DA8|80B4220||||
|0|0|0|80B8DB8|80B4230||||
|0|0|0|80B8FFC|80B4474||||
|80965C0|80B19DC|80B0BB4|80B9284|80B46FC||||
|0|0|0|80B9310|80B4788||||
|8097280|80B28D8|80B1AAC|80B9BC8|80B5040||||
|8097418|80B2A70|80B1C44|80B9CD0|80B5148||||
|0|0|0|80B9E28|80B52A4||||
|0|80B3A84|80B2C60|80B9EFC|80B5378||||
|0|0|0|80BA324|80B57A0||||
|0|0|0|80BA4F4|80B5970||||
|80983D0|80B39EC|80B2BC8|80BA628|80B5AA4||||
|0|0|0|80BA638|80B5AB4||||
|0|0|0|80BA690|80B5B0C||||
|0|0|0|80BB754|80B6C14||||
|0|0|0|80BBCF8|80B723C||||
|0|0|0|80BBF5C|80B74B0||||
|0|0|0|80BBFAC|80B7500||||
|0|0|0|80BC020|80B7574||||
|0|0|0|80BC058|80B75AC||||
|0|0|0|80BC0F4|80B7648||||
|0|0|0|80BCECC|80B8014||||
|0|0|0|80BD108|80B823C||||
|0|0|0|80BD8E0|80B8A18|GM_OnEnd|int GM_OnEnd(int a1)||
|0|0|0|80BE8F4|80B9A58||||
|0|0|0|80BE94C|80B9AB0||||
|0|0|0|80BEC74|80B9DE0||||
|0|0|0|80BECF8|80B9E64||||
|0|0|0|80BED38|80B9EA4||||
|0|0|0|80BF600|80BA764|GMapScreen_Init|int GMapScreen_Init(int a1)||
|0|0|0|80BFFF8|80BB1C8|GmapUnitContainer_Init|int GmapUnitContainer_Init(int a1)||
|0|0|0|80C08C8|80BBA84|GmapCursor_Init|int GmapCursor_Init(int a1)||
|0|0|0|80C0CFC|80BBEB8||||
|0|0|0|80C0F38|80BC0F4||||
|0|0|0|80C0FC8|80BC184|GMapRoute_EnableBGSyncs|int GMapRoute_EnableBGSyncs(int a1)||
|0|0|0|80C106C|80BC228|GMapRoute_TransitionEnd|int GMapRoute_TransitionEnd(_BYTE *a1)||
|0|0|0|80C1248|80BC404||||
|0|0|0|80C1298|80BC454||||
|0|0|0|80C1490|80BC650||||
|0|0|0|80C2D8C|80BDFA4||||
|0|0|0|80C2EB0|80BE0C8||||
|0|0|0|80C31B4|80BE3C8||||
|0|0|0|80C39C0|80BEBD4||||
|0|0|0|80C3E34|80BF048||||
|0|0|0|80C3F28|80BF13C||||
|0|0|0|80C3F48|80BF15C||||
|0|0|0|80C4274|80BF490||||
|0|0|0|80C428C|80BF4A8||||
|0|0|0|80C42E8|80BF504|WM_PutCharSprite|int WM_PutCharSprite(int a1, int a2, int a3, int a4)||
|0|0|0|80C431C|80BF538|WM_RemoveUnit|int WM_RemoveUnit(int a1)||
|0|0|0|80C4338|80BF554||||
|0|0|0|80C4930|80BFB4C||||
|0|0|0|80C4B0C|80BFD28||||
|0|0|0|80C4CDC|80BFEF8||||
|0|0|0|80C4DB4|80BFFD0||||
|0|0|0|80C500C|80C0228||||
|0|0|0|80C50EC|80C0308||||
|0|0|0|80C57B8|80C09EC||||
|0|0|0|80C5810|80C0A44||||
|0|0|0|80C5AC0|80C0CF4||||
|0|0|0|80C5BBC|80C0DF0||||
|0|0|0|80C5C24|80C0E58||||
|0|0|0|80C5C88|80C0EBC||||
|0|0|0|80C6448|80C168C||||
|0|0|0|80C6B2C|80C1D70||||
|0|0|0|80C6BE8|80C1E2C||||
|0|0|0|80C6BFC|80C1E40||||
|0|0|0|80C6C2C|80C1E70||||
|0|0|0|80C6D24|80C1F6C||||
|0|0|0|80C6D98|80C1FE0||||
|0|0|0|80C6E68|80C20B0||||
|0|0|0|80C6F04|80C214C||||
|0|0|0|80C70D8|80C2320||||
|0|0|0|80C7150|80C2398||||
|0|0|0|80C7350|80C2598||||
|0|0|0|80C7370|80C25B8||||
|0|0|0|80C7A10|80C2C58||||
|0|0|0|80C7FD8|80C3220||||
|0|0|0|80C7FFC|80C3244||||
|0|0|0|80C8038|80C3280||||
|0|0|0|80C809C|80C32E4||||
|0|0|0|80C8458|80C36A0||||
|0|0|0|80C8B64|80C3DAC||||
|0|0|0|80C8C4C|80C3E94||||
|0|0|0|80C8D40|80C3F88||||
|0|0|0|80C8D6C|80C3FB4||||
|0|0|0|80C8D98|80C3FE0||||
|0|0|0|80C94A8|80C46F0||||
|0|0|0|80C94F0|80C4738||||
|0|0|0|80C95AC|80C47F4||||
|0|0|0|80C9644|80C488C||||
|0|0|0|80C96FC|80C4944||||
|0|0|0|80C97F4|80C4A3C||||
|0|0|0|80C9A18|80C4C60||||
|0|0|0|80C9A88|80C4CD0||||
|0|0|0|80C9B0C|80C4D54||||
|0|0|0|80C9E58|80C50A0||||
|0|0|0|80C9F60|80C51A8||||
|0|0|0|80C9FD0|80C5218||||
|0|0|0|80CA0E0|80C5328||||
|0|0|0|80CA128|80C5370||||
|0|807FAE8|807EB38|80CA1D4|80C541C||||
|0|0|0|80CA318|80C5548||||
|0|80AB620|80A9D08|80CA388|80C55B8||||
|0|0|0|80CA39C|80C55CC||||
|0|0|0|80CA640|80C5870||||
|0|0|0|80CA838|80C5A44||||
|0|0|0|80CA9C8|80C5BD4||||
|0|0|0|80CADDC|80C5FE8||||
|0|0|0|80CB014|80C6104||||
|0|0|0|80CB228|80C62DC||||
|0|0|0|80CB31C|80C63D0||||
|0|0|0|80CB684|80C6738|AddSomeChild6C|int AddSomeChild6C(signed int a1)||
|0|80AB82C|80AA758|80CB698|80C674C|DeleteSome6C|int DeleteSome6C()||
|0|0|0|80CB960|80C6A54|Initialize6CIntroSequence|int Initialize6CIntroSequence(signed int a1)||
|0|0|0|80CBA5C|80C6B50||||
|0|0|0|80CBE1C|80C6F10||||
|0|0|0|80CBF5C|80C7050||||
|0|0|0|80CC0E0|80C71D4||||
|0|0|0|80CC810|80C7900||||
|0|0|0|80CD058|80C8100||||
|0|0|0|80CD500|80C8564||||
|0|0|0|80CEB38|80C9B6C||||
|0|0|0|80CEBD4|80C9C08||||
|0|0|0|80CEC78|80C9CAC||||
|0|0|0|80CECC8|80C9CFC||||
|0|0|0|80CED18|80C9D4C||||
|0|0|0|80CEDBC|80C9DF0||||
|0|0|0|80CEE38|80C9E6C||||
|0|0|0|80CEEB4|80C9EE8||||
|0|0|0|80CEF48|80C9F7C||||
|0|0|0|80CF470|80CA4A4||||
|0|0|0|80D0D58|80CBD7C||||
|0|0|0|80D0DD8|80CBE0C||||
|0|0|0|80D0F68|80CBF9C||||
|0|0|0|80D165C|80CC940||||
|0|0|0|80D1780|80CCA64|ChangePromotionClassDescText|int ChangePromotionClassDescText(int a1)||
|0|0|0|80D1928|80CCC2C||||
|0|0|0|80D1A3C|80CCD34|Make6C_PromotionSub|int Make6C_PromotionSub(signed int a1)||
|0|0|0|80D1C68|80CCF60|PromotionDisplay_InitClassDesc|int PromotionDisplay_InitClassDesc(int a1)||
|0|0|0|80D231C|80CD62C||||
|0|0|0|80D2480|80CD790||||
|0|0|0|80D271C|80CDA2C||||
|0|0|0|80D2780|80CDA90||||
|0|0|0|80D29C0|80CDCC4|PromotionCommand_OnTextDraw|int PromotionCommand_OnTextDraw(int a1, int a2)||
|0|0|0|80D29FC|80CDD00|PromotionCommand_OnChange|int PromotionCommand_OnChange(int a1, int a2)||
|0|0|0|80D2A74|80CDD78|PromotionMenuSelect_OnInit|int PromotionMenuSelect_OnInit(signed int a1)||
|0|0|0|80D2B94|80CDE98||||
|0|0|0|80D4140|80CF448||||
|0|0|0|80D6A4C|80D2F7C|.gcc2_compiled._16|int gcc2_compiled__16(_BYTE *a1, int a2, int a3)||
|0|0|0|80C5668|80C089C||||
|0|0|0|80103F4|8010298|Event34_MessWithUnitState|signed int Event34_MessWithUnitState(int a1)||
|0|0|0|801C2C4|801C65C||||
|0|0|0|800C3C8|800C0F0|Event8D_|signed int Event8D_(int a1)||
|0|0|0|800C3E0|800C108|Event8E_|signed int Event8E_(int a1)||
|0|0|0|800C3F8|800C120|Event8F_|signed int Event8F_(int a1)||
|0|0|0|800CD0C|800CA38|EventB9_|int EventB9_(int a1)||
|0|0|0|800CE18|800CB48|EventBD_|int EventBD_(int a1)||
|0|0|0|800CF2C|800CC5C|EventCE_|signed int EventCE_(int a1)||
|0|0|0|800CF44|800CC74|EventCF_|signed int EventCF_(int a1)||
|0|0|0|8021210|807F878||||
|0|807CDEC|807C378|8022608|802263C||||
|0|0|0|8024C7C|8024CCC||||
|0|0|0|806F234|806CF10||||
|0|0|0|8079180|8076F48||||
|0|0|0|8079368|8076FD4||||
|0|0|0|80793F4|8076D60||||
|0|800FC6C|800FD60|8081BB8|807FCC0||||
|0|0|0|8082000|8021518||||
|0|0|0|8082354|8080014||||
|0|0|0|80827B4|8080474||||
|0|0|0|80842A4|8081F64||||
|0|0|0|80842E8|8081FA8||||
|0|0|0|808433C|8081FFC||||
|0|0|0|8084390|8082050||||
|0|0|0|80843D4|8082094||||
|0|0|0|808DE68|8097340||||
|0|0|0|8099624|808A4FC||||
|0|0|0|809F1E0|809D17C||||
|8012120|809B598|809AC9C|80CD54C|80C85B0||||
|8012178|809B5F8|809AC20|80CD5D4|80C8638||||
|0|0|0|8000B50|8000B78|SetIRQHandler|[void SetIRQHandler(int index, void *irq)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/irq.c#L25)||
|0|0|0|8000C0C|8000C34|LoadRNState|[void LoadRNState(const u16* seeds) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L56)||
|0|0|0|8000C24|8000C4C|StoreRNState|[void StoreRNState(u16* seeds) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L62)||
|0|0|0|8000CC0|8000CE8|AdvanceGetLCGRNValue|[unsigned AdvanceGetLCGRNValue(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L103)||
|80010CC|8001188|80011B0|8000E4C|8000E9C|FlushLCDControl|[void FlushLCDControl(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L46)||
|0|0|0|8000F3C|8000F8C|GetBackgroundTileDataOffset|[int GetBackgroundTileDataOffset(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L104)||
|8001350|800140C|8001434|8000F8C|8000FDC|SetBackgroundTileDataOffset|[void SetBackgroundTileDataOffset(int bg, int offset)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L120)||
|80013F8|80014B4|80014DC|8000FFC|800104C|SetBackgroundScreenSize|[void SetBackgroundScreenSize(int bg, int size)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L136)||
|0|0|0|8001BC0|8001C4C|BG_GetMapBuffer|[u16* BG_GetMapBuffer(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L923)||
|8002A28|8002DF0|8002F14|8001D28|8001DD8|SetPrimaryHBlankHandler|[void SetPrimaryHBlankHandler(void (*hblankHandler)(void))](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L999)||
|8002A48|8002E10|8002F34|8001D3C|8001DEC|SetSecondaryHBlankHandler|[void SetSecondaryHBlankHandler(void (*hblankHandler)(void))](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1005)||
|0|0|0|8001DBC|8001E6C|BG_SetPriority|[void BG_SetPriority(int bg, int priority)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1032)||
|0|0|0|8001DF0|8001EA0|SetSpecialColorEffectsParameters|[void SetSpecialColorEffectsParameters(u16 effect, u8 coeffA, u8 coeffB, u8 blendY)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1042)||
|0|0|0|8001E20|8001ED0|sub_8001ED0|[void sub_8001ED0(int a, int b, int c, int d, int e)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1050)||
|0|0|0|8001E5C|8001F0C|sub_8001F0C|[void sub_8001F0C(int a, int b, int c, int d, int e)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1056)||
|0|0|0|8001E98|8001F48|sub_8001F48|[void sub_8001F48(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1062)||
|0|0|0|8001EB4|8001F64|sub_8001F64|[void sub_8001F64(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1067)||
|0|0|0|8001ED0|8001F80|SetDefaultColorEffects|[void SetDefaultColorEffects(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1072)||
|0|0|0|8001EE4|8001F94|EnablePaletteSync|[void EnablePaletteSync(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1077)||
|0|0|0|8001EF0|8001FA0|DisablePaletteSync|[void DisablePaletteSync(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1082)||
|0|0|0|8001EFC|8001FAC|BG_EnableSyncByMask|[void BG_EnableSyncByMask(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1087)||
|0|0|0|8001F0C|8001FBC|BG_EnableSync|[void BG_EnableSync(int bg)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1092)||
|0|0|0|8001FA4|8002054|RegisterFillTile|[void RegisterFillTile(void *a, void *b, int c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1133)||
|8002CB8|8003108|800322C|800204C|80020FC|SetupOAMBufferSplice|[void SetupOAMBufferSplice(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1169)||
|0|0|0|8002100|80021B0|WriteOAMRotScaleData|[void WriteOAMRotScaleData(int index, s16 pa, s16 pb, s16 pc, s16 pd)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1201)||
|0|0|0|80021B4|8002264|sub_8002264|[s8 sub_8002264(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L46)||
|8003210|800376C|8003890|8002424|80024D4|Sound_PlaySong80024D4|[void Sound_PlaySong80024D4(int songId, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L149)||
|800322C|8003788|80038AC|8002434|80024E4|Sound_PlaySong80024E4|[void Sound_PlaySong80024E4(int songId, int speed, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L154)||
|0|8003E48|8003F6C|8002820|80028D0|Sound_SetDefaultMaxNumChannels|[void Sound_SetDefaultMaxNumChannels(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L345)||
|8006C3C|80040F8|800421C|8002A08|8002AB8|DeleteAll6CWaitMusicRelated|[void DeleteAll6CWaitMusicRelated(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L462)||
|0|0|0|800347C|8003530||||
|0|0|0|8005E70|8005F6C|GetGenericMiniMugGfx|int *GetGenericMiniMugGfx(int a1)||
|0|0|0|80069CC|8006AC8|UnsetDialogueFlag|__int16 UnsetDialogueFlag(__int16 result)||
|0|0|0|80069E0|8006ADC|CheckDialogueFlag|int CheckDialogueFlag(unsigned __int16 a1)||
|0|80098A0|8009A10|8008360|8008464||||
|0|0|0|8008908|8008A0C||||
|0|0|0|800A844|800A4E8||||
|0|0|0|800D548|800D284|CallBattleQuoteEventInBattle|[void CallBattleQuoteEventInBattle(u16 textIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L428)||
|0|0|0|800D568|800D2A4|CallTileChangeEvent|[void CallTileChangeEvent(u16 tileChangeIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L435)||
|0|0|0|800D594|800D2D0|CallChestOpeningEvent|[void CallChestOpeningEvent(u16 tileChangeIndex, u16 idr) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L443)||
|0|0|0|800D5C8|800D304|CallMapSupportEvent|[void CallMapSupportEvent(u16 musicIndex, u16 textIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L452)||
|0|0|0|800D5F4|800D330|CallSupportViewerEvent|[void CallSupportViewerEvent(u16 textIndex) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L461)||
|80127B0|800F264|800F358|800D654|800D390|CallGameOverEvent|[void CallGameOverEvent(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L480)||
|0|0|0|800D7EC|800D528|SlotQueuePush|[void SlotQueuePush(unsigned value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L569)||
|0|0|0|8011FA4|8011EC8||||
|0|0|0|8011FB8|8011EDC||||
|0|8013BAC|0|801356C|80134B4|GetSomethingInPaletteBB_5A|int GetSomethingInPaletteBB_5A()||
|0|8013BBC|0|801357C|80134C4|GetSomethingInPaletteBB_8A|int GetSomethingInPaletteBB_8A()||
|0|0|0|8014E9C|8014E74||||
|0|0|0|8014ED0|8014EA8||||
|0|0|0|8014EEC|8014EC4||||
|0|0|0|8014F1C|8014EF4||||
|0|0|0|801742C|8017684|GetItemMaxRange|[inline int GetItemMaxRange(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L158)||
|0|0|0|801876C|8018A58|UnitHasMagicRank|[s8 UnitHasMagicRank(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L1210)||
|0|0|0|801C2B8|801C650||||
|0|0|0|8024D6C|8024DBC|GetCurrentPhase|[int GetCurrentPhase(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L66)||
|0|0|0|8024D80|8024DD0|GetNonActiveFaction|[int GetNonActiveFaction(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmphase.c#L70)||
|8022DD4|8026E3C|80269B0|80284E4|8028550|StoreAddedAffinityBonusesForSupportLevel|int StoreAddedAffinityBonusesForSupportLevel(_BYTE *a1, char *a2, char a3)||
|0|0|0|802A60C|802A6A0|WriteBattleStructTerrainBonuses|_BYTE *WriteBattleStructTerrainBonuses(int a1, char a2)||
|0|0|0|802A648|802A6DC|BattleSetupTerrainData|_BYTE *BattleSetupTerrainData(int a1)||
|0|0|0|802CDC0|802CE88|IsCurrentBattleTriangleAttack|unsigned int IsCurrentBattleTriangleAttack()||
|80260CC|802B040|802AB90|802D1EC|802D2B4||||
|0|0|0|802D1FC|802D2C4||||
|0|0|0|802E24C|802E314|AddFireTile|[void AddFireTile(int x, int y, int turnCountdown, int turnInterval)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L127)||
|0|802C058|802BB98|802E2C0|802E388|AddTrap8|[void AddTrap8(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L147)||
|0|802C068|802BBA8|802E2D0|802E398|AddTrap9|[void AddTrap9(int x, int y, int meta)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L152)||
|0|0|0|802E990|802EA58|AddLightRune|[struct Trap* AddLightRune(int x, int y)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L653)||
|0|0|0|803460C|8034704|IsDifficultMode|[int IsDifficultMode(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/chapterdata.c#L42)||
|0|0|0|8037F34|8037E08||||
|0|0|0|8037F5C|8037E30||||
|0|0|0|8037F78|8037E4C||||
|0|0|0|8037F90|8037E64||||
|0|0|0|803C1E8|803C258|SetUnitAiFromDefinition|int SetUnitAiFromDefinition(int a1, _BYTE *a2)||
|8030CE8|8037A6C|80375B8|803C44C|803C4BC|AiExecAi1|int AiExecAi1()||
|8030D78|8037AFC|8037648|803C4DC|803C54C|AiExecAi2|int AiExecAi2()||
|0|0|0|803E02C|803E09C|AiBattleGetTurnNumberWeight|int AiBattleGetTurnNumberWeight()||
|0|0|0|8042DFC|8042E78|SetGameLinkArenaBit|int SetGameLinkArenaBit()||
|8036974|803DEB4|803DA04|8042E0C|8042E88|ClearGameLinkArenaBit|int ClearGameLinkArenaBit()||
|0|0|0|8046DBC|8046E5C||||
|0|0|0|8046DF4|8046E94||||
|803AE90|80426B8|8041FF8|80475B0|804768C||||
|0|80457EC|8044FFC|804A5C8|80497CC||||
|0|0|0|804F9C0|804EC34|StartMenuExt|[    struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L133)||
|0|0|0|804FA24|804EC98|StartMenuAt|[    struct Proc* parent)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uimenu.c#L162)||
|80422CC|804B6CC|804AEF0|8050818|804FAA4|StartTargetSelectionExt|int StartTargetSelectionExt(int a1, int a2)||
|0|0|0|8052F0C|8052214||||
|0|0|0|8052F18|8052220||||
|0|0|0|8056B3C|8055BB4||||
|0|0|0|8059890|8058A60|GetSomeBattleAnimHpValue|int GetSomeBattleAnimHpValue(int a1)||
|0|0|0|805B734|805A990||||
|0|0|0|806C958|806A634||||
|0|0|0|806C970|806A64C||||
|0|0|0|8071FAC|806F9FC||||
|0|0|0|8072028|806FA78||||
|0|0|0|8072034|806FA84||||
|8067A14|806EC4C|806E460|8072930|8070380||||
|0|0|0|807A1D8|8077DB4||||
|805F7B4|806C208|806BA1C|807A69C|8078278|GetSpellAssocReturnBool|int GetSpellAssocReturnBool(unsigned __int16 a1)||
|805F7D4|806C228|806BA3C|807A6BC|8078298|GetSpellAssocFlashColor|int GetSpellAssocFlashColor(unsigned __int16 a1)||
|0|0|0|807A84C|8078428|MU_CreateExt|[struct MUProc* MU_CreateExt(struct Unit* pUnit, unsigned classIndex, unsigned palId) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L576)||
|0|0|0|807A908|80784E4|MU_EnableAttractCamera|[void MU_EnableAttractCamera(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L638)||
|0|0|0|807A910|80784EC|MU_DisableAttractCamera|[void MU_DisableAttractCamera(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L642)||
|809B36C|807978C|8078FBC|807B4C8|80790B4|MU_End|[void MU_End(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1260)||
|0|0|0|807B96C|8079558|MU_GetGfxBufferById|char *MU_GetGfxBufferById(int a1)||
|0|0|0|807B988|8079574|MU_GetSheetGfx|__int16 *MU_GetSheetGfx(int a1)||
|0|0|0|807B99C|8079588|MU_GetAnimationByClassId|int MU_GetAnimationByClassId(int a1)||
|0|0|0|807BBE8|80797D4|MU_Hide|[void MU_Hide(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1641)||
|0|0|0|807BBF0|80797DC|MU_Show|[void MU_Show(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1645)||
|8069C34|807702C|807685C|80841B8|8081E78||||
|8069DA4|807719C|80769CC|8084264|8081F24||||
|0|80BBB4C|80BB0D0|80846D0|8082390||||
|0|0|0|8086094|8083D6C|CheckGlobalEventId|bool CheckGlobalEventId(signed int a1)||
|0|0|0|8086884|80845B8|RegisterEventActivation|int RegisterEventActivation(int a1, __int16 a2)||
|0|0|0|8088C1C|8086960||||
|0|0|0|8088C40|8086984||||
|0|0|0|8088C68|80869AC||||
|0|0|0|8088C94|80869D8||||
|0|0|0|808E660|808C360||||
|0|0|0|80ABC54|80A723C||||
|0|0|0|80ABCB0|80A7298||||
|0|0|0|80ABD54|80A733C||||
|0|0|0|80ABD64|80A734C||||
|0|0|0|80AF1E0|80AA700||||
|0|0|0|80AFFD0|80AB514||||
|0|0|0|80B1120|80AC680||||
|0|0|0|80B6320|80B1700||||
|0|0|0|80B8C80|80B40EC||||
|0|0|0|80B8CDC|80B4154|Shop6C_GetPortraitIndex|int Shop6C_GetPortraitIndex(int a1)||
|0|0|0|80B8D58|80B41D0||||
|0|0|0|80B8D68|80B41E0|MakeShopArmory|int MakeShopArmory(int a1, int a2, int a3)||
|0|0|0|80B8D78|80B41F0||||
|0|0|0|80B8D88|80B4200|MakeShopVendor|int MakeShopVendor(int a1, int a2, int a3)||
|0|0|0|80B8D98|80B4210||||
|0|0|0|80BA210|80B568C||||
|0|0|0|80BA21C|80B5698||||
|0|0|0|80BA22C|80B56A8||||
|0|0|0|80BFA6C|80BAC1C|MMS_GetGfx|int MMS_GetGfx(int a1)||
|0|0|0|80BFA80|80BAC30|MMS_GetROMTCS2|int MMS_GetROMTCS2(int a1)||
|0|0|0|80BFA94|80BAC44|GetMapUnitMMSGfxBuffer|char *GetMapUnitMMSGfxBuffer(int a1)||
|0|0|0|80BFD64|80BAF34|MapUnitC_SetPosition|int MapUnitC_SetPosition(int a1, int a2, __int16 a3, __int16 a4)||
|0|0|0|80BFD74|80BAF44||||
|0|0|0|80BFDA0|80BAF70||||
|0|0|0|80BFE48|80BB018|MapUnitC_SetTCSOAMIndex|int MapUnitC_SetTCSOAMIndex(int a1, int a2, __int16 a3)||
|0|0|0|80BFFC4|80BB194||||
|0|0|0|80C052C|80BB6FC||||
|0|0|0|80C2098|80BD28C||||
|0|0|0|80C20A8|80BD29C||||
|0|0|0|80C45C0|80BF7DC||||
|0|0|0|80C6B5C|80C1DA0||||
|0|0|0|80C6B84|80C1DC8||||
|0|0|0|80C6B94|80C1DD8||||
|0|0|0|80C881C|80C3A64||||
|0|0|0|80D1184|80CC468|NewPromotionMain|int NewPromotionMain(int a1, char a2, char a3)||
|0|0|0|80D6B14|80D1EA4|vfprintf|int vfprintf(int a1, int a2, int a3)||
|0|0|0|80D8B80|80D3F44||||
|0|0|0|80D8C7C|80D4040|__sinit|int _sinit(_DWORD *a1)||
|0|0|0|80D9224|80D45E8|localeconv|int **localeconv()||
|0|0|0|80D9BD0|80D4F94|_i2b|_DWORD *i2b(int a1, int a2)||
|0|0|0|80DA238|80D55FC|.gcc2_compiled._31|unsigned int gcc2_compiled__31(int a1, unsigned int a2)||
|0|0|0|80DA25C|80D5620|.gcc2_compiled._32|unsigned int gcc2_compiled__32(int a1, unsigned int a2)||
|0|0|0|80DA4A4|80D5868|get_errno|int get_errno()||
|0|0|0|80DA4B8|80D587C|error|int error(int a1)||
|0|0|0|80DA4E4|80D58A8|_swiread|int swiread(int a1, int a2, int a3)||
|0|0|0|80DA5D4|80D5998|_lseek|int lseek(int a1, int a2, int a3)||
|0|0|0|80DA5E0|80D59A4|_swiwrite|int swiwrite(int a1, int a2, int a3)||
|0|0|0|80DA738|80D5AFC|_close|int close(int a1)||
|0|0|0|80DA918|80D5CDC|.gcc2_compiled._41|int gcc2_compiled__41()||
|0|0|0|80DAE2C|80D61F0|__adddf3|unsigned int _adddf3(int a1, int a2, int a3, int a4)||
|0|0|0|80DAE5C|80D6220|__subdf3|unsigned int _subdf3(int a1, int a2, int a3, int a4)||
|0|0|0|80DC044|80D7408|__make_fp|unsigned int _make_fp(int a1, int a2, int a3, int a4)||
|0|0|0|8085680|8083348|GetChapterAllyUnitDefinitions|int GetChapterAllyUnitDefinitions()||
|0|0|0|8023008|8023040||||
|0|0|0|8002B30|8002BE0|CallARM_Func5|[void CallARM_Func5(int a, int b, int c)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L60)||
|0|0|0|800C0B8|800BDCC|Event80_|signed int Event80_(int a1)||
|0|0|0|800C864|800C58C|EventA0_REMSPRITE|int EventA0_REMSPRITE(int a1)||
|0|0|0|800C874|800C59C|EventA1_|int EventA1_(int a1)||
|0|0|0|800C884|800C5AC|EventA2_|int EventA2_(int a1)||
|0|0|0|8012A38|8012974||||
|0|0|0|801B80C|801BB40|DebugMenu_MapIdle|[u8 DebugMenu_MapIdle(struct MenuProc *menuProc, struct MenuItemProc *menuItemProc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmdebug.c#L124)||
|0|0|0|801D360|801D6FC|PlayerPhase_ReloadGameGfx|int PlayerPhase_ReloadGameGfx(int a1)||
|0|0|0|8024C90|8024CE0||||
|0|8024A18|0|8025C48|8025CA4|ListSummonTargets|int ListSummonTargets(int a1)||
|0|0|0|8034108|8034200|PrepScreenProc_HideEverythingAndUnlockGame|int PrepScreenProc_HideEverythingAndUnlockGame()||
|802C4A8|8032420|8031EF0|8034F98|8035090||||
|0|0|0|80373D4|80372D4|MapEventEngineExists_|bool MapEventEngineExists_()||
|0|80A79B8|8066544|8037DF0|8037D58||||
|0|0|0|8038348|803821C|PopGlobalTimer|int PopGlobalTimer()||
|0|0|0|803A408|803A390|CpPerform_PickWait|signed int CpPerform_PickWait(signed int a1)||
|0|0|0|804874C|8048838||||
|0|0|0|8077F8C|8075B58||||
|0|0|0|8077F9C|8075B68||||
|8065674|80728F0|0|807FB5C|807D818||||
|8066300|8073568|8072D7C|80801B0|807DE70||||
|8068A74|8075E34|8075664|80835B8|8081278|MapAnim_AnimateSubjectIdle|int MapAnim_AnimateSubjectIdle()||
|8068AA8|8075E68|8075698|80835DC|808129C|MapAnim_SubjectResetAnim|int MapAnim_SubjectResetAnim()||
|8068C84|807604C|807587C|8083738|80813F8|MapAnim_BeginSubjectFastAnim|int MapAnim_BeginSubjectFastAnim()||
|8069530|8076920|8076150|8083C70|8081930|MapAnimProc_PoisonEffectOnDefender|int MapAnimProc_PoisonEffectOnDefender()||
|80699D8|8076DCC|80765FC|8084038|8081CF8|MapAnim_TargetUnitFlashIn|int MapAnim_TargetUnitFlashIn()||
|8069A0C|8076E00|8076630|808405C|8081D1C|MapAnim_TargetHide|int MapAnim_TargetHide()||
|8069B3C|8076F34|8076764|8084120|8081DE0|MapAnim_TargetShow|int MapAnim_TargetShow()||
|0|0|0|8087C3C|8085970|TriggerDisableMapIcons|int TriggerDisableMapIcons()||
|0|0|0|8087C48|808597C|UnTriggerDisableMapIcons|int UnTriggerDisableMapIcons()||
|0|0|0|8098768|8096484||||
|0|0|0|8098E9C|8096BB8||||
|0|0|0|80B9570|80B49E8||||
|0|0|0|80BA550|80B59CC||||
|0|0|0|80BA8C0|80B5D3C||||
|0|0|0|80BE6AC|80B9810||||
|0|0|0|80BED9C|80B9F08|DoNothing|int DoNothing()||
|0|0|0|80C31F8|80BE40C||||
|0|0|0|80C3218|80BE42C||||
|0|0|0|80CF8F8|80CA92C||||
|0|0|0|80D2C74|80CDF78||||
|0|0|0|80031DC|806F0FC||||
|0|0|0|800CB8C|800C8B0|EventAF_|int EventAF_(int a1)||
|0|0|0|800CBB0|800C8D4|EventB0_|int EventB0_(int a1)||
|0|0|0|8012BDC|8012B84||||
|0|8032CDC|80327AC|8012C3C|80342FC|BBExists|bool BBExists()||
|0|0|0|8021AFC|80219F8||||
|0|0|0|8022DA0|8022DD8||||
|0|8022154|8021CDC|8023C2C|8023C68||||
|0|0|0|802512C|802517C|AddUnitToTargetListIfNotAllied|int AddUnitToTargetListIfNotAllied(char *a1)||
|0|0|0|8034204|8035758|IsBottomHelpTextActive|bool IsBottomHelpTextActive()||
|0|0|0|8035858|8096698|PrepScreenTraineePromotionManagerExists|bool PrepScreenTraineePromotionManagerExists()||
|803EFEC|80478F4|8047108|804C704|804B964||||
|0|0|0|804CC58|804BE98||||
|0|0|0|8054D3C|8054360||||
|0|0|0|8054D98|80543BC||||
|0|0|0|8054E40|8054054||||
|0|0|0|8054F44|8054158||||
|0|0|0|8054FA0|80541B4||||
|0|0|0|8055048|805425C||||
|0|0|0|80550A4|80542B8||||
|0|8050560|804FD84|8055E9C|805501C||||
|0|0|0|8056F70|8055FE8|ekrBattleStarting_8055FE8|int ekrBattleStarting_8055FE8(int a1)||
|0|0|0|805C4D4|805B724||||
|0|0|0|805C500|805B750||||
|0|0|0|805C56C|805B7BC||||
|0|0|0|805C5AC|805B7FC||||
|0|0|0|805D15C|805C904||||
|8050D98|805A5C4|8059DDC|805FFAC|805EEAC||||
|0|0|0|806042C|805F32C||||
|805183C|805CE2C|0|8060968|80642BC||||
|0|0|0|80629D8|8003290|_ProcSleepCallback|int ProcSleepCallback(int a1)||
|8050390|805FBBC|805F3D4|8062CE4|8061A30||||
|0|0|0|8063FD8|8073240||||
|8053114|806055C|805FD74|8064A48|8063948||||
|0|0|0|8064E1C|806DB54||||
|0|8060E44|806065C|80653C8|805F868||||
|0|0|0|8065758|8064DC4||||
|0|0|0|80658FC|8063D1C||||
|0|0|0|8065BF0|806464C||||
|80534FC|80614B0|8060CC8|8065D08|8064BFC||||
|0|0|0|80662F8|8064938||||
|0|0|0|8066410|8061A98||||
|0|0|0|80669CC|8064AE4||||
|8057720|8063B30|8063348|8066F68|8061BE4||||
|805D0E0|80692A0|8068AB4|8068704|806635C||||
|0|0|0|8069114|8066E74||||
|0|0|0|8069208|8066F90||||
|0|0|0|8069320|80670A8||||
|0|0|0|8069430|80671C0||||
|0|0|0|8069540|80674A0||||
|0|0|0|80697D0|8066D7C||||
|0|0|0|8069A94|8067764||||
|0|0|0|8069E78|8067B48||||
|0|0|0|806A530|80682E0||||
|0|80663EC|8065BFC|806B100|8068DD8||||
|0|0|0|806B13C|8068E14||||
|0|0|0|806B178|8068E50||||
|0|0|0|806B1B4|8068E8C||||
|0|0|0|806B1F0|8068EC8||||
|0|0|0|806B22C|8068F04||||
|0|0|0|806B268|8068F40||||
|0|0|0|806B2A4|8068F7C||||
|0|0|0|806B2E0|8068FB8||||
|0|0|0|806B31C|8068FF4||||
|0|0|0|806B358|8069030||||
|0|0|0|806B394|806906C||||
|0|0|0|806B3D0|80690A8||||
|0|0|0|806CAE8|806A7C4||||
|0|0|0|806CCE8|806A9C4||||
|0|0|0|806EB0C|806C7E8||||
|0|0|0|806EDAC|806CA88||||
|0|0|0|806FBB8|806D89C||||
|0|0|0|806FE6C|80647F0||||
|0|0|0|8071298|806EF24||||
|0|0|0|8071B44|806F594||||
|0|0|0|8072B50|80705A8||||
|0|0|0|8072C18|8070670||||
|0|0|0|8076C6C|8074834||||
|0|0|0|8077C60|80645FC||||
|0|0|0|8077CAC|80753FC||||
|0|806BE18|806B62C|8078570|8076088||||
|0|0|0|80785D4|80760EC||||
|0|0|0|8078820|80764B0||||
|0|0|0|807D380|807C0DC|MapAnimExpBar_FillInit|int MapAnimExpBar_FillInit()||
|0|0|0|80802EC|807DFAC||||
|0|0|0|8080930|807E5F0||||
|0|0|0|808685C|808457C|RunBattleForecastTutorialEvent|int RunBattleForecastTutorialEvent(int a1)||
|0|0|0|8086D34|8084AF4||||
|0|0|0|8086DC0|8084A68||||
|0|807ADA8|807A334|8087580|80852EC||||
|0|0|0|808C630|808A4A4||||
|8071888|8083B28|8083128|808C7B4|8089430||||
|0|0|0|8091574|8097378||||
|0|0|0|809897C|80966B0||||
|8087254|80A3580|80A290C|80AC8DC|80A7EC4||||
|0|0|0|80B2D1C|80AE2B8|FadeOutExists|bool FadeOutExists()||
|0|0|0|80B2D34|80AE2A0|FadeInExists|bool FadeInExists()||
|803C044|80438FC|8043154|80B91B8|80B4630||||
|0|0|0|80BE930|80B9A94||||
|0|0|0|80BF02C|80BA288||||
|0|0|0|80C6E14|80C205C||||
|0|0|0|80C6E30|80C2078||||
|0|0|0|80C7F7C|80C31C4||||
|0|0|0|80C7F98|80C31E0||||
|0|0|0|80C8CDC|80C3F24||||
|0|0|0|80CBE04|80C6EF8||||
|0|0|0|80D10A0|80CC1A0||||
|0|0|0|80D1144|80CC0FC||||
|0|0|0|80D2B70|80CDE74||||
|0|0|0|80D2FF8|80CE2FC||||
|0|0|0|80D3084|80CE388||||
|0|0|0|807E588|807C244||||
|0|0|0|807DD00|807B9B8|GetFacingDirection|signed int GetFacingDirection(int a1, int a2, int a3, int a4)||
|0|0|0|8000D14|8000D64|ComputeDisplayTime|[u8 ComputeDisplayTime(u32 frameTotal, u16* hours, u16* minutes, u16* seconds) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/time.c#L31)||
|8001550|80017E8|8001810|80011D0|8001220|BG_Fill|[void BG_Fill(void *dest, int b)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L222)||
|8001580|8001818|8001840|80011F0|8001240|RegisterBlankTile|[void RegisterBlankTile(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L227)||
|0|0|0|8002088|8002138|FlushSecondaryOAM|[void FlushSecondaryOAM(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1182)||
|0|0|0|80021C4|8002274|Sound_SetVolume8002274|[void Sound_SetVolume8002274(int volume)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L51)||
|0|0|0|800223C|80022EC|Sound_SetVolume80022EC|[void Sound_SetVolume80022EC(int volume)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L62)||
|0|0|0|8002398|8002448|Sound_PlaySong8002448|[void Sound_PlaySong8002448(int songId, struct MusicPlayerInfo *player)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L120)||
|0|8003E68|8003F8C|8002838|80028E8|Sound_SetMaxNumChannels|[void Sound_SetMaxNumChannels(int maxchn)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L351)||
|0|800B040|800B104|8002B08|8002BB8|CallARM_PushToSecondaryOAM|[void CallARM_PushToSecondaryOAM(int a, int b, const u16 *c, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L50)||
|0|0|0|8002B1C|8002BCC|CallARM_PushToPrimaryOAM|[void CallARM_PushToPrimaryOAM(int a, int b, const u16 *c, int d)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ramfunc.c#L55)||
|0|0|0|8005EA0|8005F9C|LoadGenericMiniMugPalette|int LoadGenericMiniMugPalette(int a1, int a2)||
|0|0|0|8006600|80066FC||||
|0|0|0|8006620|800671C||||
|800D7F0|800836C|80084DC|8006DF4|8006EF0||||
|0|80095E4|8009754|80080A4|80081A8||||
|0|0|0|80096B0|80097C0|APProc_DeleteAll|[void APProc_DeleteAll(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/ap.c#L386)||
|0|0|0|800BCF4|800BA04||||
|0|0|0|800BD24|800BA34||||
|0|0|0|800D404|800D140|EventEngine_CreateBattle|[void EventEngine_CreateBattle(const u16* events) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L341)||
|0|8030B74|8030688|800D74C|800D488||||
|0|0|0|800F2DC|800F0C8|Event22_CLEAN|int Event22_CLEAN(int a1)||
|0|0|0|8014268|80141B0||||
|0|0|0|8014494|8014480|DeleteAllPaletteAnimator|int DeleteAllPaletteAnimator()||
|0|0|0|8014CCC|8014CA4||||
|0|0|0|80156D8|80156BC||||
|0|0|0|80156F0|80156D4||||
|0|0|0|8016BC8|8016E20|GetWeaponTypeDisplayString|[char* GetWeaponTypeDisplayString(int wpnType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L678)||
|0|0|0|8021510|8021818||||
|0|0|0|8025EE8|8025F44|MakeTargetListForFuckingNightmare|int MakeTargetListForFuckingNightmare(int a1)||
|0|0|0|8029B18|8029B8C|PrepareTargetSelectionForHeal|int PrepareTargetSelectionForHeal(int a1)||
|0|0|0|802AB1C|802ABAC|BattleLoadHit|int BattleLoadHit(int a1)||
|8026504|802B4DC|802B02C|802D664|802D72C||||
|8012780|800F23C|8013AB0|802DDA4|802DE6C||||
|8012798|800F250|8030EE8|802DDB8|802DE80||||
|0|800AD84|800ADDC|802E064|802E12C||||
|0|0|0|802E0A0|802E168||||
|0|0|0|802E0C0|802E188||||
|0|0|0|802E0E0|802E1A8||||
|0|0|0|802E9C8|802EA90|RemoveLightRune|[struct Trap* RemoveLightRune(struct Trap* trap)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrick.c#L663)||
|0|802C8A8|802C3E8|802EBC4|802EC8C||||
|0|0|0|802F104|802F1D8||||
|0|802CF24|802CA64|802F370|802F450||||
|0|802CF60|802CAA0|802F3AC|802F48C||||
|0|802E5B4|802E0F4|8030E94|8030F48|RestartBattleMap|[void RestartBattleMap(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1040)||
|0|0|0|803124C|8031300|MapMain_ResumeFromPhaseIdle|[void MapMain_ResumeFromPhaseIdle(struct BMapMainProc* mapMain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1267)||
|0|0|0|8031288|803133C|MapMain_ResumeFromAction|[void MapMain_ResumeFromAction(struct BMapMainProc* mapMain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1280)||
|0|0|0|8031308|80313BC|MapMain_ResumeFromBskPhase|[void MapMain_ResumeFromBskPhase(struct BMapMainProc* mapMain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1301)||
|0|0|0|8031344|80313F8|MapMain_ResumeFromArenaFight|[void MapMain_ResumeFromArenaFight(struct BMapMainProc* mapMain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1314)||
|0|0|0|80313C0|8031474|MapMain_ResumeFromPhaseChange|[void MapMain_ResumeFromPhaseChange(struct BMapMainProc* mapMain) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1339)||
|0|0|0|80324A0|8032554|ActionSummon|int ActionSummon(signed int a1)||
|0|0|0|80324CC|8032580|ActionSummonDK|int ActionSummonDK(signed int a1)||
|800D83C|800ADAC|0|8033530|8033620||||
|0|0|0|80379A8|8037910|LoadChapterBallistae|int LoadChapterBallistae()||
|0|0|0|8038C1C|8038BA4||||
|0|8035824|803534C|803A1AC|803A134|CpPerform_PerformSteal|int CpPerform_PerformSteal(int a1)||
|0|0|0|803A380|803A308|CpPerform_PerformSomeOtherCombat|signed int CpPerform_PerformSomeOtherCombat(signed int a1)||
|0|0|0|803A3D0|803A358|CpPerform_PerformDkSummon|int CpPerform_PerformDkSummon(signed int a1)||
|0|0|0|8043438|80434B4||||
|0|0|0|804A4A0|80496A4||||
|0|0|0|804CC78|804BED8||||
|0|0|0|804D0DC|804C33C||||
|80608D4|8048494|8047CA8|804D298|804C4F8||||
|0|0|0|804D2A8|804C508||||
|0|0|0|804D2F8|804C558||||
|0|0|0|804D330|804C590||||
|0|80313D4|800F330|804DC48|804CEB0||||
|0|0|0|804DD50|804CFB8||||
|0|0|0|804E5A0|804D80C||||
|0|0|0|804F8E0|804EB54|LoadLegacyUiFrameGraphics|[void LoadLegacyUiFrameGraphics(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1221)||
|0|0|0|804F908|804EB7C|LoadUiFrameGraphicsTo|[void LoadUiFrameGraphicsTo(unsigned vramOffset, int palId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L1233)||
|0|0|0|8053E94|80531A4||||
|0|0|0|8053F7C|805328C||||
|804685C|804F8D8|804F0FC|8054D18|8054030||||
|0|0|0|8054E1C|8054134||||
|0|0|0|8056158|80551B0|SpellFx_SetSomeColorEffect|int SpellFx_SetSomeColorEffect()||
|0|0|0|8056214|805526C|SpellFx_ClearColorEffects|int SpellFx_ClearColorEffects()||
|804AFA0|8054764|8053F7C|805A6E0|805993C|RegisterAISSheetGraphics|int RegisterAISSheetGraphics(int a1)||
|0|0|0|805BE70|805B0CC||||
|0|0|0|805FE98|805ED98||||
|0|0|0|8061540|8060440||||
|80539C4|805C624|805BE3C|80615B0|80604B0|loadHazymoonBG2|void loadHazymoonBG2(AnimationInterpreter *AIS)||
|8053FF4|805CC58|805C470|8061B9C|8060A9C||||
|0|0|0|80633A0|80622A0||||
|0|0|0|8063E30|8062D30||||
|80564E4|805F1C4|805E9DC|806404C|8062F4C||||
|0|8060730|805FF48|80655EC|80644E0||||
|0|80608B8|80600D0|8065778|806466C||||
|0|0|0|8065A64|8064958||||
|0|0|0|8065D34|8064C28||||
|0|80612D4|8060AEC|8066234|8064D00||||
|0|0|0|8067D6C|80659AC|StartSpellBG_IvaldiBG1|int StartSpellBG_IvaldiBG1(int a1)||
|0|0|0|8067E38|8065A80|StartSpellBG_IvaldiBG2|int StartSpellBG_IvaldiBG2(int a1)||
|0|0|0|8067F04|8065B54|StartSpellBG_IvaldiBG3|int StartSpellBG_IvaldiBG3(int a1)||
|0|0|0|8067FE4|8065C38|StartSpellBG_IvaldiBG4|int StartSpellBG_IvaldiBG4(int a1)||
|0|0|0|806812C|8065D84|PrepareSomeIvaldiParticleGraphics|int PrepareSomeIvaldiParticleGraphics()||
|0|0|0|806814C|8065DA4|StartSpellOBJ_IvaldiFall|int StartSpellOBJ_IvaldiFall(int a1, __int16 a2)||
|0|0|0|80682B8|8065F10|StartSpellOBJ_IvaldiSideWash|int StartSpellOBJ_IvaldiSideWash(int a1, __int16 a2)||
|0|0|0|8068408|8066060||||
|0|0|0|8068B84|80667E0||||
|0|0|0|8068EB0|8066B14||||
|0|0|0|8068F70|8066BD4||||
|0|0|0|8069034|8066C98||||
|0|0|0|8069574|80671F4||||
|0|0|0|8069A14|80676E4||||
|0|0|0|8069DD0|8067AA0||||
|0|0|0|806A0F4|8067DC4||||
|0|0|0|806A1C8|8067E98||||
|0|0|0|806A294|8067F64||||
|0|0|0|806A358|8068028||||
|0|0|0|806A564|806823C||||
|0|0|0|806A63C|8068314||||
|0|0|0|806A93C|8068614||||
|0|0|0|806B0A0|8068D78||||
|0|80850A8|80846AC|806BA18|80696F0||||
|0|0|0|806BDE8|8069AC4||||
|0|0|0|806C1AC|8069E88||||
|0|0|0|806C38C|806A068||||
|0|0|0|806C6F0|806A3CC||||
|0|0|0|806D458|806B134||||
|0|0|0|806D50C|806B1E8||||
|0|0|0|806D808|806B4E4||||
|0|0|0|806DF00|806BBDC||||
|0|0|0|806E788|806C464||||
|0|0|0|806E92C|806C608||||
|8056B08|8062D68|8062580|806ED0C|806C9E8|StartEfxPierceCriticalEffect|int StartEfxPierceCriticalEffect(int a1)||
|8056C3C|8062E9C|80626B4|806EE40|806CB1C|normalEffect|int normalEffect(int a1)||
|0|0|0|806FF20|806DC08||||
|0|0|0|8071A00|806F450||||
|0|0|0|8071A2C|806F47C||||
|0|0|0|8072454|806FEA4||||
|0|0|0|8072768|80701B8||||
|0|0|0|807293C|807038C||||
|0|0|0|80752B4|8072DD8||||
|805CB6C|8068D2C|8068540|80752F8|8072E1C||||
|805CCE8|8068E24|8068638|80753B4|8072ED8||||
|0|0|0|8075460|8072F84||||
|0|0|0|80755A0|80730C4||||
|805CF38|80690F8|806890C|80756FC|8073220||||
|0|0|0|80795EC|80771C8||||
|0|0|0|8079984|8077560||||
|0|0|0|8079AFC|80776D8||||
|0|0|0|8079ED0|8077AAC||||
|0|0|0|807A1A4|8077D80||||
|0|0|0|807A468|8078044||||
|80990E4|8075898|8075094|807ACAC|8078888|MU_PlayStepSfx|[void MU_PlayStepSfx(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L900)||
|0|0|0|807AE28|8078A14|MU_StartFogBumpFx|[void MU_StartFogBumpFx(int x, int y) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L985)||
|8067AF0|806D4A4|806CCB8|807B4B8|80790A4|MU_EndAll|[void MU_EndAll(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1256)||
|8098490|8076FFC|807682C|807B4D4|80790C0|MU_EndInternal|int MU_EndInternal(int a1)||
|0|0|0|807B4E0|80790CC|MU_80790CC|int MU_80790CC(int a1)||
|806094C|806D51C|806CD30|807B4F4|80790E0|MU_AllDisable|[void MU_AllDisable(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1273)||
|806095C|806D52C|806CD40|807B500|80790EC|MU_AllEnable|[void MU_AllEnable(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1277)||
|0|0|0|807BD58|8079944|MU_StartFastMoveAnim|[void MU_StartFastMoveAnim(struct MUProc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1732)||
|0|0|0|807BD84|8079970|MU_StartCritFlash|[void MU_StartCritFlash(struct MUProc* muProc, int flashType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1746)||
|0|0|0|807BE88|8079A74|MU_StartHitFlash|[void MU_StartHitFlash(struct MUProc* muProc, int flashType) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1802)||
|0|0|0|807D924|807B5DC||||
|0|0|0|807D97C|807B634||||
|0|0|0|807D9D4|807B68C|StartSomeMapAnim_807B68C|int StartSomeMapAnim_807B68C()||
|0|0|0|807DA2C|807B6E4|BeginMapAnimForSteal|int BeginMapAnimForSteal()||
|0|0|0|807DA88|807B740|BeginMapAnimForSummon|int BeginMapAnimForSummon()||
|0|0|0|807DAE0|807B798|BeginMapAnimForSummonDK|int BeginMapAnimForSummonDK()||
|0|0|0|807DB38|807B7F0||||
|0|0|0|807DC1C|807B8D4|SetupMapAnimSpellData|int SetupMapAnimSpellData(int a1, int a2, int a3)||
|8062A80|806FCE8|806F4FC|807DD40|807B9F8||||
|0|0|0|807DE2C|807BAE4||||
|806DC38|806FF58|806F76C|807DF00|807BBB8|MapAnim_EndBattleInfoBox|int MapAnim_EndBattleInfoBox()||
|0|0|0|807E160|807BE1C||||
|0|0|0|807E308|807BFC4||||
|0|0|0|807EBE4|807C8A0||||
|0|0|0|807EE68|807CB24|MapAnim_BeginMISSAnim|int MapAnim_BeginMISSAnim(int a1)||
|0|0|0|807EEC4|807CB80|MapAnim_BeginNODAMAGEAnim|int MapAnim_BeginNODAMAGEAnim(int a1)||
|0|0|0|807EF20|807CBDC|MapAnim_BeginWallBreakAnim|int MapAnim_BeginWallBreakAnim(int a1, __int16 a2)||
|0|0|0|807F6A4|807D360||||
|0|0|0|8080CB8|807E978||||
|0|0|0|8081138|807EDF8||||
|0|8074D38|807453C|80811B4|807EE74||||
|0|0|0|8081A00|807F6C0|LoadSparkGfx|int LoadSparkGfx()||
|0|0|0|80827D8|8080498||||
|0|0|0|8082870|8080530||||
|0|0|0|80831DC|8080E9C||||
|0|0|0|8083360|8081020||||
|806EAF0|807DA64|807CFE4|80833A8|8081068||||
|0|0|0|8083510|80811D0||||
|0|0|0|80841EC|8081EAC||||
|0|0|0|8084418|80820D8||||
|0|0|0|8085610|80832D8|CheckWin|int CheckWin()||
|0|0|0|8085640|8083308|GetCurrentChapterBallistaePtr|int GetCurrentChapterBallistaePtr()||
|0|0|0|8085738|8083400|GetChapterSkirmishLeaderClasses|int GetChapterSkirmishLeaderClasses(unsigned __int8 a1, _BYTE *a2)||
|0|0|0|8085AE8|80837B0||||
|0|0|0|8086870|80845A4|ClearActiveEventRegistry|int ClearActiveEventRegistry()||
|0|0|0|808F44C|808D150|EndPlayerPhaseSideWindows|int EndPlayerPhaseSideWindows()||
|0|0|0|808FC0C|808D924||||
|0|0|0|8090710|808E43C||||
|0|0|0|80973C8|80950E8||||
|0|0|0|8097CFC|8095A1C|RestartScreenMenuScrollingBg|int RestartScreenMenuScrollingBg()||
|0|80B3D4C|0|8097D18|8095A38|EndScreenMenuScrollingBg|int EndScreenMenuScrollingBg()||
|0|0|0|8097F30|8095C50||||
|8091008|80A3EF8|80B26A4|8098738|8096454||||
|0|0|0|80989AC|80966C8||||
|0|0|0|8098C14|8096930||||
|0|80903C4|808FA84|8098EE0|8096BFC||||
|0|8090788|808FE48|8099290|8096FAC||||
|0|0|0|8099A2C|8097748||||
|0|0|0|809A780|80984A8||||
|0|0|0|809A7A4|80984CC||||
|0|0|0|809A82C|8098554||||
|0|0|0|809A848|8098570||||
|0|0|0|809A868|8098590||||
|0|80BCFD8|80B5B6C|809A87C|80985A4||||
|0|0|0|809A890|80985B8||||
|0|0|0|809ACDC|8098A04||||
|0|0|0|809AF14|8098C3C||||
|0|0|0|809B79C|80994C4||||
|0|0|0|809CB40|809A874||||
|0|0|0|809CBFC|809A930||||
|0|0|0|809F514|809D278||||
|0|0|0|80A0E90|809EBF0||||
|0|8099128|8098868|80A22D0|80A0034||||
|808B578|8099B94|80991DC|80A2BF8|80A0944||||
|0|0|0|80A2C40|80A098C||||
|0|0|0|80A4F18|80A1140||||
|0|0|0|80A7C04|80A31C0|LoadPermanentEidsIn|int LoadPermanentEidsIn(int a1)||
|0|0|0|80A9C8C|80A5274|LoadSavedWMStuff|int LoadSavedWMStuff(int a1, int a2)||
|0|0|0|80A9CA8|80A5290|LoadSavedEid8A|bool LoadSavedEid8A(int a1)||
|0|0|0|80AA3F8|80A59E0|SaveRNGState_Maybe|int SaveRNGState_Maybe(int a1)||
|0|0|0|80AA418|80A5A00||||
|0|0|0|80ABAC8|80A70B0|SaveWMStuff|int SaveWMStuff(int a1, unsigned __int8 *a2)||
|0|0|0|80ABBFC|80A71E4||||
|0|8030B60|0|80ABC10|80A71F8||||
|0|0|0|80ABC24|80A720C||||
|0|0|0|80ABCC8|80A72B0||||
|0|0|0|80ABD04|80A72EC||||
|0|0|0|80ABD40|80A7328||||
|0|0|0|80ABD78|80A7360||||
|0|0|0|80ACEB4|80A849C||||
|0|0|0|80ACEF0|80A84D8||||
|0|0|0|80AD1E0|80A87C8||||
|0|803E344|0|80AD1F4|80A87DC||||
|0|0|0|80AF28C|80AA7AC||||
|0|0|0|80AF714|80AAC40||||
|0|0|0|80B021C|80AB760||||
|0|0|0|80B15A0|80ACB00||||
|0|80AA0C0|80A91AC|80B1C4C|80AD1AC||||
|0|0|0|80B3F58|80AF338||||
|0|0|0|80B56D8|80B0ABC||||
|0|0|0|80B62FC|80B16DC||||
|0|0|0|80B63A4|80B1784||||
|0|0|0|80B6404|80B17E4||||
|0|80AFCC4|80AED8C|80B74B8|80B28A0||||
|0|0|0|80B8C64|80B40D0||||
|8095D88|80B1174|80B034C|80B8CF0|80B4168||||
|0|0|0|80B99AC|80B4E24||||
|0|0|0|80B9A10|80B4E88||||
|8097084|80B26DC|80B18B0|80B9A5C|80B4ED4||||
|0|0|0|80B9DEC|80B5268||||
|0|0|0|80B9E50|80B52CC||||
|0|0|0|80B9F40|80B53BC||||
|0|0|0|80B9FC4|80B5440||||
|8097E84|80B34A0|80B267C|80BA2F0|80B576C||||
|0|0|0|80BA310|80B578C||||
|80985D8|80B3BD0|80B2DAC|80BA788|80B5C04||||
|0|0|0|80BA7CC|80B5C48||||
|0|80B94EC|80B88C0|80BBA1C|80B6F14||||
|0|80B97EC|80B8C8C|80BBD60|80B72A4||||
|0|0|0|80BDC24|80B8D5C|InitGraphicSystemsForWorldMap|int InitGraphicSystemsForWorldMap()||
|0|0|0|80BDCDC|80B8E14||||
|0|0|0|80BDD28|80B8E60||||
|0|0|0|80BEE54|80B9FC0||||
|0|0|0|80BEE9C|80BA008||||
|0|0|0|80BFA40|80BABF0|StartGMapScreen|int StartGMapScreen(signed int a1)||
|0|0|0|80BFDB4|80BAF84|MapUnitC_SetTCSAnim|int MapUnitC_SetTCSAnim(int a1, int a2, char a3)||
|0|0|0|80C0018|80BB1E8|NewGmapUnitContainer|int NewGmapUnitContainer(signed int a1, int a2, char a3)||
|0|0|0|80C02AC|80BB47C||||
|0|0|0|80C02BC|80BB48C||||
|0|0|0|80C07E8|80BB9A4||||
|0|0|0|80C0A08|80BBBC4|NewGmapCursor|int NewGmapCursor(signed int a1, int a2, char a3, int a4)||
|0|0|0|80C11E8|80BC3A4|StartGMapRoute|int StartGMapRoute(signed int a1, int a2, int a3, char a4)||
|0|0|0|80C206C|80BD260||||
|0|0|0|80C207C|80BD270||||
|0|0|0|80C2228|80BD41C||||
|0|0|0|80C2E8C|80BE0A4||||
|0|0|0|80C2ED0|80BE0E8|MapMU_SetUnitTCSOAMIndex|int MapMU_SetUnitTCSOAMIndex(int a1, int a2, __int16 a3)||
|0|0|0|80C318C|80BE3A0||||
|0|0|0|80C3320|80BE534|MapMU_SetUnitClass|int MapMU_SetUnitClass(int a1, int a2, int a3, int a4, int a5)||
|0|0|0|80C333C|80BE550|MapMU_SetUnitChar|int MapMU_SetUnitChar(int a1, int a2, int a3, int a4, int a5)||
|0|0|0|80C36D4|80BE8E8||||
|0|0|0|80C3704|80BE918||||
|0|0|0|80C378C|80BE9A0||||
|0|0|0|80C42B4|80BF4D0|WM_PutClassSprite|int WM_PutClassSprite(int a1, int a2, int a3, int a4)||
|0|0|0|80C4354|80BF570||||
|0|0|0|80C5604|80C0834||||
|0|0|0|80C59F4|80C0C28||||
|0|0|0|80C619C|80C13D8||||
|0|0|0|80C6D14|80C1F5C||||
|0|0|0|80C7218|80C2460||||
|0|0|0|80C7498|80C26E0||||
|0|0|0|80C7864|80C2AAC||||
|0|0|0|80C7BE0|80C2E28||||
|0|0|0|80C87E0|80C3A28||||
|0|0|0|80C8844|80C3A8C||||
|0|0|0|80C8FAC|80C41F4||||
|0|0|0|80CB6AC|80C6760|StorePaletteToBufferMaybe|int StorePaletteToBufferMaybe(int a1, int a2, unsigned int a3)||
|0|0|0|80CBAE4|80C6BD8||||
|0|0|0|80CBAFC|80C6BF0||||
|0|0|0|80D11B4|80CC498|NewPromotionMain_raw|int NewPromotionMain_raw(signed int a1)||
|0|0|0|80D1730|80CCA14|NewPromotion|int NewPromotion(signed int a1)||
|0|0|0|80D18D0|80CCBD4||||
|0|0|0|80D18F0|80CCBF4||||
|0|0|0|808FFE0|808DCF8||||
|0|0|0|8000CB4|8000CDC|SetLCGRNValue|[void SetLCGRNValue(int seed) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/rng.c#L98)||
|0|0|0|8001408|800144C|GetKeyStatus_IgnoreMask|[int GetKeyStatus_IgnoreMask(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L360)||
|0|0|0|8002B4E|8002BFE||||
|0|0|0|8074A4C|8072570||||
|0|0|0|80C2090|80BD284||||
|0|0|0|80DA7D0|80D5B94|_unlink|signed int unlink()||
|0|0|0|805654C|80555B0||||
|0|0|0|806DFBC|806BC98||||
|0|804EA54|804E278|8053D70|8053080||||
|0|0|0|8098600|809631C||||
|0|0|0|80C3380|80BE594||||
|0|0|0|80012CC|800131C|SetLCDVCountSetting|[void SetLCDVCountSetting(int set)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L269)||
|0|0|0|800339C|8003450|SetProcOnCycle|int SetProcOnCycle(int result, int a2)||
|0|0|0|8009F34|8009FD4|nullsub_RestartGameAndGoto7|void nullsub_RestartGameAndGoto7()||
|0|0|0|800D4BC|800D1F8|SetEventSlotC|[void SetEventSlotC(unsigned value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L383)||
|0|0|0|801153C|8011450|SetPopupUnit|int SetPopupUnit(int result)||
|0|0|0|80BA0AC|80B5528||||
|0|0|0|80CF4A8|80CA4DC||||
|0|0|0|807B180|8078D6C|MU_AdvanceStepSfx|int MU_AdvanceStepSfx(int a1)||
|0|0|0|8000CD8|8000D28|GetGameClock|[u32 GetGameClock() ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/time.c#L18)||
|0|0|0|8000CE4|8000D34|SetGameClock|[void SetGameClock(int newTime) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/time.c#L22)||
|0|0|0|80012D8|8001328|SetMainUpdateRoutine|[void SetMainUpdateRoutine(void (*func)(void))](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L274)||
|0|0|0|80013FC|8001440|SetKeyStatus_IgnoreMask|[void SetKeyStatus_IgnoreMask(int a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L355)||
|0|0|0|800219C|800224C|GetPrimaryOAMSize|[int GetPrimaryOAMSize(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L1230)||
|0|0|0|80021A8|8002258|Sound_GetCurrentSong|[int Sound_GetCurrentSong(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L41)||
|0|0|0|8008E08|8008F18|GetZero|int GetZero()||
|0|0|0|8008F28|8009038|nullsub_15|void nullsub_15()||
|0|0|0|8009F38|8009FD8|nullsub_9|void nullsub_9()||
|0|0|0|800D844|800D588|SetEventSlotCounter|[void SetEventSlotCounter(unsigned value) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L588)||
|0|0|0|800D850|800D594|GetEventSlotCounter|[unsigned GetEventSlotCounter(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L592)||
|0|0|0|802CDF4|802CEBC||||
|0|0|0|8031E24|8031ED8||||
|0|0|0|804D140|804C3A0|nullsub_16|void nullsub_16()||
|0|0|0|804D144|804C3A4|nullsub_14|void nullsub_14()||
|0|0|0|804D148|804C3A8|nullsub_13|void nullsub_13()||
|0|0|0|80598F8|8058AC8||||
|0|0|0|8072048|806FA98||||
|0|0|0|8072054|806FAA4||||
|0|0|0|807ACB8|8078894|MU_8078894|void MU_8078894()||
|0|0|0|8085604|80832CC||||
|0|0|0|8086AC4|80847F8||||
|0|0|0|8087CB4|80859E8|nullsub_20|void nullsub_20()||
|0|0|0|809773C|809545C|SomeLeftoverFunctionThatReturns0|int SomeLeftoverFunctionThatReturns0()||
|0|0|0|80A2D24|80A0A70||||
|0|0|0|80A7D6C|80A3328||||
|0|0|0|80A964C|80A4C08|GetCurerentGameMode|int GetCurerentGameMode()||
|0|0|0|80BB170|80B65EC||||
|0|0|0|80D6364|80D166C|ArcTan2|void ArcTan2()||
|0|0|0|80D6378|80D1680|DivArm|void DivArm()||
|809DF30|80C07B0|80BFC6C|80D65DC|80D18E0|BXR8|int BXR8()||
|0|0|0|80D9204|80D45C8|_localeconv_r|int **localeconv_r()||
|0|0|0|80D9960|80D4D24|nullsub_3|void nullsub_3()||
|0|0|0|80D9964|80D4D28|nullsub_4|void nullsub_4()||
|0|0|0|80DA8E0|80D5CA4|.gcc2_compiled._39|int *gcc2_compiled__39()||
|0|0|0|80DA938|80D5CFC|isatty|signed int isatty()||
|0|801DC64|801D860|801DCA4|801E048||||
|0|0|0|8002FD8|8003088|_BreakProcLoop|int BreakProcLoop(int a1)||
|0|0|0|8004120|80041E8|Text_Get1DVRAMTarget|unsigned int Text_Get1DVRAMTarget(unsigned __int8 *a1)||
|0|0|0|80045E8|80046E0|Text_Get2DVRAMTarget|unsigned int Text_Get2DVRAMTarget(unsigned __int8 *a1)||
|8013258|8012B64|80124D0|800967C|800978C|_APProc_OnDelete|int APProc_OnDelete(int a1)||
|0|0|0|800C390|800C0B8|Event8A_|int Event8A_()||
|0|0|0|800C3A0|800C0C8|Event8B_|int Event8B_()||
|0|0|0|800C4A4|800C1CC|Event93_|int Event93_(int a1)||
|0|0|0|800C7A0|800C4C8|Event9B_|int Event9B_(int a1)||
|0|0|0|800CEC0|800CBF0|EventC1_SKIPWM|int EventC1_SKIPWM()||
|0|0|0|800CED4|800CC04|EventC2_|int EventC2_()||
|0|0|0|8013E98|8013DE0||||
|0|0|0|8013EA8|8013DF0||||
|0|0|0|8013EB8|8013E00||||
|0|0|0|8014F38|8014F10||||
|0|0|0|8014F58|8014F30||||
|0|0|0|80170A0|80172F8|GetUnitStaffReachBits|[int GetUnitStaffReachBits(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L934)||
|0|0|0|801EAF0|801EE98||||
|0|0|0|801EDF0|801EFE8||||
|0|0|0|80279C4|8027A30||||
|0|0|0|802D2F0|802D3B8||||
|0|0|0|802DFD8|802E0A0|sub_802E0A0|[void sub_802E0A0(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmtrade.c#L901)||
|0|0|0|80599C8|8058B98||||
|0|0|0|80599D8|8058BA8||||
|0|0|0|80599E8|8058BB8||||
|0|0|0|807529C|8072DC0||||
|0|0|0|8079054|8076C34||||
|0|0|0|8079348|8076F28||||
|0|0|0|8079A90|807766C||||
|0|0|0|807B044|8078C30|MU_State_StartMovement|_BYTE *MU_State_StartMovement(int a1)||
|0|0|0|807BCA0|807988C|MU_807988C|int MU_807988C(int a1)||
|0|0|0|807BCF4|80798E0|MU_EndSelectionApAnim|int MU_EndSelectionApAnim(int result)||
|0|0|0|807BD7C|8079968|MU_EndFasterApAnim|int MU_EndFasterApAnim(int result)||
|0|0|0|807BDDC|80799C8|MU_CritFlash_SetRegularPalette|int MU_CritFlash_SetRegularPalette(int a1)||
|0|0|0|807BE64|8079A50|MU_CritFlash_RestorePalette|int MU_CritFlash_RestorePalette(int a1)||
|0|0|0|807BEE8|8079AD4|MU_HitFlash_RestorePalette|int MU_HitFlash_RestorePalette(int a1)||
|0|0|0|807D2F8|807AFD0||||
|8069590|8076980|80761B0|8083CE8|80819A8||||
|80695C0|80769B0|80761E0|8083D08|80819C8||||
|8069944|8076D38|8076568|8083F74|8081C34||||
|8069974|8076D68|8076598|8083F94|8081C54||||
|0|0|0|8083FB4|8081C74||||
|0|0|0|8083FD4|8081C94||||
|0|0|0|8083FF4|8081CB4||||
|0|0|0|8086F58|8084C8C||||
|0|0|0|8086F68|8084C9C||||
|0|0|0|8086FB4|8084CE8||||
|0|0|0|8086FC4|8084CF8||||
|0|0|0|8086FD4|8084D08||||
|0|0|0|8086FE4|8084D18||||
|809AD64|807B534|807AAC0|80878A0|80855D4||||
|8074830|807B558|807AAE4|80878C4|80855F8||||
|0|80A5A94|80B2F28|8087F30|8085C64||||
|0|0|0|8087F3C|8085C70||||
|807B69C|807C8BC|807BE48|80906A8|808E3D4||||
|0|80877FC|8086E40|80929B0|80906D8||||
|0|8089B60|8089200|80986E8|8096404||||
|0|8094828|8093F40|809D788|809B4C0||||
|0|808F7B4|808EE78|809D7AC|809B4E4||||
|0|80AA490|80A95B4|80B2054|80AD5B4||||
|0|809484C|8093F64|80B2078|80AD5D8|EnableAllGfx|int EnableAllGfx()||
|0|0|0|80B92A4|80B471C||||
|0|0|0|80BA238|80B56B4||||
|0|0|0|80BA614|80B5A90||||
|0|80AA4B4|80A95D8|80BE88C|80B99F0||||
|0|0|0|80BE8AC|80B9A10|WorldMap_HideEverything|int WorldMap_HideEverything()||
|0|0|0|80C5390|80C05AC||||
|0|0|0|80C53DC|80C05F8||||
|0|0|0|80C6BB8|80C1DFC||||
|0|0|0|80C6BD0|80C1E14||||
|0|0|0|80C8E68|80C40B0||||
|0|0|0|80CA1E8|80C5430||||
|0|0|0|80DA744|80D5B08|_exit|int exit()||
|0|0|0|80DA764|80D5B28|_kill|int kill()||
|0|0|0|8029150|80291A8|CanUnitUsePromotionItem|[s8 CanUnitUsePromotionItem(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L528)||
|0|0|0|80D2824|80CDB34|PromotionCommand_OnSelect|int PromotionCommand_OnSelect(int a1, int a2)||
|8009958|8006FF0|0|8005A6C|8004974||||
|0|0|0|8009E5C|8009EFC||||
|0|0|0|800C834|800C55C|Event9E_PUTSPRITE|int Event9E_PUTSPRITE(int a1)||
|0|0|0|800C84C|800C574|Event9F_|int Event9F_(int a1)||
|0|0|0|800D104|800CE40|_MarkSomethingInMenu|[void _MarkSomethingInMenu(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L154)||
|0|0|0|8011B2C|8011AF4||||
|0|0|0|8011BD8|8011A48||||
|8014D50|8012B98|8012504|801419C|8013988||||
|0|0|0|80142C4|8009E28||||
|8015AB8|8015900|8015484|8015518|80154F4|MapMain_Suspend|int MapMain_Suspend()||
|801B034|801C56C|801C17C|801C4FC|801C894|PlayerPhase_Suspend|int PlayerPhase_Suspend()||
|801CF48|801E858|801E4D4|801E8BC|801EC64||||
|0|0|0|801EC40|8008FAC||||
|0|0|0|8021C10|8081008||||
|0|0|0|8022130|80140E4||||
|0|0|0|80226AC|801C63C||||
|0|0|0|8022C60|8022C98|HideMoveRangeGraphicsWrapper|int HideMoveRangeGraphicsWrapper()||
|0|0|0|802345C|8023498||||
|0|0|0|8023B48|8023B84||||
|0|0|0|8024468|80244B8||||
|0|0|0|8024514|80244D8||||
|0|0|0|80247A4|8024724||||
|8020928|8023900|0|80247F4|8024658||||
|0|0|0|8024C6C|8024CBC||||
|0|0|0|8025CEC|8025D48||||
|0|0|0|8025D24|8025D80||||
|0|0|0|8025D5C|8025DB8||||
|0|0|0|8025D94|8025DF0||||
|0|8024AE8|802458C|8025E20|8025E7C|MakeTargetListForAdjacentHeal|int MakeTargetListForAdjacentHeal(int a1)||
|0|0|0|8025F8C|8025FE8|MakeTargetListForRestore|int MakeTargetListForRestore(int a1)||
|0|0|0|8026188|80261E4|MakeTargetListForSilence|int MakeTargetListForSilence(int a1)||
|0|8024D0C|0|80261B0|802620C|MakeTargetListForSleep|int MakeTargetListForSleep(int a1)||
|0|802507C|8024BF0|8026494|80264F0|MakeTargetListForMine|int MakeTargetListForMine(int a1)||
|0|80250E0|8024C54|8026524|8026580|MakeTargetListForLightRune|int MakeTargetListForLightRune(int a1)||
|0|0|0|80299C4|8029A38|RepairMenuItemOnChange|[int RepairMenuItemOnChange(struct MenuProc* menu, struct MenuItemProc* item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L931)||
|0|0|0|8029B90|8029C04|BarrierSelectOnInit|[int BarrierSelectOnInit(ProcPtr proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1016)||
|0|0|0|8029BFC|8029C70|AttackStaffSelectOnInit|[int AttackStaffSelectOnInit(ProcPtr proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L1038)||
|0|0|0|802DDCC|80222D0||||
|0|0|0|802FFA0|8030050||||
|0|0|0|8033B08|8033BF8||||
|0|0|0|8038320|800D1E4|sub_800D1E4|[void sub_800D1E4(struct Proc* proc) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L379)||
|0|0|0|8039B34|8009A60|GameControl_8009A60_Null|int GameControl_8009A60_Null(int a1)||
|0|0|0|80458C0|8045920||||
|0|0|0|8048764|8048850||||
|0|0|0|804C4A8|804B708||||
|0|0|0|8054F0C|805401C||||
|80709D4|80829E0|8081C80|8055010|8054120||||
|0|0|0|8055024|805433C||||
|805F8DC|8063C14|0|8057CA0|8056D18||||
|804C7EC|8055FC4|80557DC|805C0C4|8076514||||
|0|0|0|805C6FC|805B94C||||
|0|0|0|805CCA4|8068B80||||
|0|0|0|805D18C|805C674||||
|804D81C|805717C|0|805D1E8|805C6D0|spellTeyari2|int spellTeyari2(AnimationInterpreter *a1)||
|0|0|0|805D244|805C72C||||
|804D8D4|8057234|0|805D2A0|805C788|spellTeyari4|int spellTeyari4(AnimationInterpreter *a1)||
|804D930|8057290|8056AA8|805D2FC|805C3F0|StartSpellAnimJavelin|int StartSpellAnimJavelin(int a1)||
|804D98C|80572EC|8056B04|805D358|805C44C|spellTeyari6|int spellTeyari6(AnimationInterpreter *a1)||
|804D9E8|8057348|8056B60|805D3B4|805C4A8|spellTeyari7|int spellTeyari7(AnimationInterpreter *a1)||
|804DA44|80573A4|8056BBC|805D410|805C504|spellTeyari8|int spellTeyari8(AnimationInterpreter *a1)||
|0|80574B8|8056CD0|805D524|805C618|spellTeyari11|int spellTeyari11(AnimationInterpreter *a1)||
|0|0|0|805E164|805C264||||
|0|0|0|805E5D0|805C934|StartSpellAnimSong|int StartSpellAnimSong(int a1)||
|0|0|0|805E8D8|805CEC8||||
|0|0|0|805F854|805F8B4||||
|0|0|0|805FC98|805D388|StartSpellAnimIceBreath|int StartSpellAnimIceBreath(int a1)||
|0|0|0|805FFD8|805D7D8|StartSpellAnimThunder|int StartSpellAnimThunder(int a1)||
|0|0|0|80603C4|805F2C4||||
|80503BC|805A090|0|8060454|805E0E4|StartSpellAnimFimbulvetr|int StartSpellAnimFimbulvetr(int a1)||
|8050860|805A60C|0|80609B4|805E754|spellLightning|int spellLightning(AnimationInterpreter *a1)||
|8050DE0|805ABD8|0|8060F84|805EB98|spellForblaze|int spellForblaze(AnimationInterpreter *a1)||
|0|805B678|0|806138C|805EED8|spellDevine|int spellDevine(AnimationInterpreter *a1)||
|0|805BA78|0|80619A4|805F354|StartSpellAnimNosferatu|int StartSpellAnimNosferatu(int a1)||
|0|0|0|8062520|80612BC|StartSpellAnimRecover|int StartSpellAnimRecover(int a1)||
|8055234|805DEC0|805D6D8|8062D18|8061C18|spellFortify|int spellFortify(int a1)||
|8055264|805DEF0|805D708|8062D48|8061C48|spellGreenFortify|int spellGreenFortify(int a1)||
|8052090|805C3D8|0|80631EC|805FE84|StartSpellAnimDivine|int StartSpellAnimDivine(int a1)||
|80529EC|805CA38|805C250|80634E0|806028C|spellFenrir|int spellFenrir(AnimationInterpreter *a1)||
|0|805E3B0|805DBC8|8063778|80608A4|StartSpellAnimFenrir|int StartSpellAnimFenrir(int a1)||
|0|0|0|8063A98|8063480|StartSpellAnimShine|int StartSpellAnimShine(int a1)||
|80556BC|805EC08|805E420|8063D14|80620EC|spellHammarne|int spellHammarne(AnimationInterpreter *a1)||
|0|805EE84|805E69C|8064314|80623E0|StartSpellAnimSilence|int StartSpellAnimSilence(int a1)||
|0|806079C|805FFB4|80661D0|8060B2C||||
|0|0|0|80664B8|8062FA4||||
|0|8061EE8|8061700|8066E24|8063E58||||
|0|0|0|8067AA8|80656E8||||
|0|0|0|8069804|80674D4|StartSpellAnimStone|int StartSpellAnimStone(int a1)||
|0|0|0|806AD88|8068A60||||
|8056B58|8062DB8|80625D0|806EABC|806C798||||
|0|0|0|806ED5C|806CA38||||
|0|0|0|806EDD4|806C810||||
|8066190|8066634|80656B0|806EFAC|806CC88||||
|0|0|0|806F198|806CE74||||
|0|0|0|806F66C|806D350||||
|0|0|0|806F8B8|806D59C||||
|806B414|806A4EC|0|806FC9C|806D980||||
|8058180|8064A54|0|807112C|806ED0C||||
|0|0|0|80711A8|806EBF8||||
|0|0|0|807133E|806ED8E||||
|0|0|0|807159E|806EFEE||||
|0|0|0|80717C0|806F648||||
|0|0|0|807182E|806F27E||||
|0|0|0|8071928|806F378||||
|0|8065F8C|806579C|8071A64|8054B54|DeleteEach6C_efxStatusUnit|int DeleteEach6C_efxStatusUnit()||
|0|0|0|8071A70|806F4C0||||
|0|0|0|8071AA8|806F4F8||||
|0|0|0|8071AE0|806F530||||
|0|0|0|8071B18|805F300||||
|0|0|0|8071BF8|806F6B4||||
|0|0|0|8071CE8|806F738||||
|0|0|0|8071E7C|806F8CC||||
|0|0|0|8072750|80768F8||||
|0|0|0|8072C88|80706E0||||
|0|0|0|80752A4|806F4B4||||
|807AD6C|806C398|806BBAC|8076774|80742EC||||
|0|806CAD0|806C2E4|8076BD0|8074798||||
|80608EC|806D4BC|806CCD0|8078884|8076464||||
|0|806C0E8|806B8FC|80788A4|8076484||||
|8098478|806D4D4|0|8078DBC|807699C||||
|80684A4|80733F8|806CCE8|8078E98|8076A78||||
|0|0|0|807A048|8077C24||||
|8087BC4|80759B0|8085C68|807E574|8045C14|New6C_SIOMAIN2|int New6C_SIOMAIN2()||
|0|0|0|807F004|807CD60||||
|0|0|0|807F0A4|807CCC0|MapAnim_BeginPoisonAnim|int MapAnim_BeginPoisonAnim(int a1)||
|0|0|0|807F15C|8080EE4||||
|806511C|8072398|8071BAC|807F6E0|807D09C||||
|0|807F8DC|807EB20|807F6F8|807D2C8||||
|0|0|0|807F860|807CE18||||
|0|0|0|808056C|807D51C||||
|0|0|0|8082994|807EA50||||
|0|0|0|80830AC|807E22C||||
|0|0|0|8083224|8080D6C||||
|0|8075F68|8075798|8083688|8081348||||
|0|8075FAC|80757DC|80836C4|8081384||||
|0|8076350|8075B80|80838D4|8081594|MapAnim_MoveCameraOnSubject|int MapAnim_MoveCameraOnSubject(signed int a1)||
|0|80763A0|8075BD0|8083900|80815C0|MapAnim_MoveCameraOnTarget|int MapAnim_MoveCameraOnTarget(signed int a1)||
|8069560|8076950|8076180|8083C90|8081950||||
|806984C|8076C40|8076470|8083D28|80819E8||||
|806988C|8076C80|80764B0|8083D48|8081A08||||
|80695F0|80769E0|8076210|8083D68|8081A28||||
|806962C|8076A1C|807624C|8083D94|8081A54||||
|8069668|8076A58|8076288|8083DC0|8081A80||||
|80696A4|8076A94|80762C4|8083DF0|8081AB0||||
|80696E0|8076AD0|8076300|8083E20|8081AE0||||
|806971C|8076B0C|807633C|8083E50|8081B10||||
|8069758|8076B48|8076378|8083E80|8081B40||||
|8069914|8076D08|8076538|8083F38|8081BF8||||
|0|0|0|80841A0|807CDB8||||
|0|0|0|80876E0|807C230||||
|0|807B430|807A9BC|80877B0|80854E4||||
|0|0|0|8087EDC|8085C10||||
|0|0|0|8087EF0|8085C24||||
|0|0|0|8087F04|8085C38||||
|0|0|0|8087F18|8085C4C||||
|806DB2C|80BD96C|0|8087F24|8085C58||||
|0|0|0|8088830|8086564|Command_EirikaMode|signed int Command_EirikaMode()||
|0|0|0|808884C|8086580|Command_EphraimMode|signed int Command_EphraimMode()||
|809058C|808F804|808F7C4|8089E7C|8085414||||
|0|0|0|808EF9C|808CCA0||||
|809060C|8090104|80A3284|808F438|8087BF0||||
|0|0|0|8093DAC|804D778||||
|8091C2C|80B34C8|0|8098968|808BB44||||
|0|0|0|8099D78|80952C0||||
|0|0|0|809A720|8098448||||
|0|0|0|809AE20|8098B48||||
|0|809221C|80918D4|809AE80|8098BA8||||
|0|0|0|809AEA0|8098BC8||||
|0|0|0|809C0C8|8099DE8||||
|0|0|0|809C0F8|8099E18||||
|0|0|0|809C110|8099E30||||
|0|8095C90|8095454|809EBE4|809C940||||
|0|0|0|80A0F9C|809ECFC||||
|0|809B6D4|809ACFC|80A4544|80A0900||||
|0|0|0|80AD9E8|80A8F8C||||
|0|0|0|80B06B4|80AA144||||
|8081E3C|807CA1C|807BFA8|80B0E88|80ABC00||||
|0|80AB188|80AA2C0|80B2D70|80AE2F4|NewFadeOut|int NewFadeOut(int a1)||
|0|80AB1D0|80AA308|80B2DB8|80AE318||||
|0|80AB1F4|80AA32C|80B2DDC|80AE360||||
|0|0|0|80B2E04|80AE388||||
|0|80AB244|80AA37C|80B2E2C|80AE3B0||||
|0|80AB2FC|0|80B2EE4|80AE468||||
|0|0|0|80B320C|80ADA10||||
|0|80AA8E8|0|80B3418|80AE790||||
|0|0|0|80B3754|8097AA0||||
|0|0|0|80B3874|80AEC54||||
|0|0|0|80B3888|80AEC68||||
|80951DC|80B0694|80AF844|80B7C4C|80B305C||||
|0|0|0|80B82EC|80B3740||||
|0|0|0|80BA768|80B4A20||||
|0|0|0|80BA8B0|80B5D2C||||
|8098798|80B3D98|80B2F74|80BA8E0|80B5D5C|SuspendCommand|int SuspendCommand()||
|0|807D314|80A73E4|80BB7D4|80B1688|StartClaimBonusItemMenu|int StartClaimBonusItemMenu(signed int a1)||
|0|807D938|0|80BC044|80B6C94||||
|8098A9C|80BAA80|0|80BCE94|80B29D4||||
|0|807C1E8|807B264|80BD02C|80B7598|loadFireRing|void loadFireRing(signed int parent)||
|808B7A0|807F8F4|807CEB4|80BD040|80B8174||||
|0|0|0|80BE6C8|80B982C||||
|0|0|0|80BE718|80B987C||||
|0|0|0|80BE738|80B989C||||
|0|0|0|80BE744|80B98A8||||
|0|0|0|80BE794|80B98F8||||
|0|0|0|80BE7B4|80B9918||||
|0|0|0|80BE7C0|80B9924||||
|0|0|0|80BE810|80B9974||||
|0|0|0|80BE83C|80B99A0||||
|0|0|0|80BEDA8|80B9F14||||
|0|0|0|80BEDB8|80B9F24||||
|0|0|0|80BEDC8|80B9F34||||
|0|0|0|80BEDD8|80B9F44||||
|0|0|0|80BF5F4|80BA758|GMapScreen_OnEnd|int GMapScreen_OnEnd(int a1)||
|0|0|0|80C12D4|80BC490||||
|0|0|0|80C12E4|80BC4A0||||
|0|0|0|80C12F0|80BC4AC||||
|0|0|0|80C1308|80BC4C4||||
|0|0|0|80C1320|80BC4DC||||
|0|0|0|80C13AC|80BC56C||||
|0|0|0|80C13C4|80BC584||||
|0|0|0|80C1474|80BC634||||
|0|0|0|80C1484|80BC644||||
|0|0|0|80C15BC|80BC77C||||
|0|0|0|80C15E4|80BC7A4||||
|0|0|0|80C160C|80BC7CC||||
|0|0|0|80C1634|80BC7F4||||
|0|80861B4|80857B4|80C3358|80BE56C||||
|0|0|0|80C4674|80BF890||||
|0|0|0|80C4974|80BFB90||||
|0|0|0|80C5304|80C0520||||
|0|0|0|80C55DC|80C080C||||
|0|0|0|80C8DF0|80C4038||||
|0|0|0|80CA1C4|80C540C||||
|8093570|8080214|802B870|80CA374|80C55A4||||
|0|0|0|80CB3A8|80C645C||||
|0|0|0|80CC0CC|80C71C0||||
|0|0|0|80CD51C|80C8580||||
|0|0|0|80CD5A4|80C8608||||
|0|0|0|80CEC28|80C9C5C||||
|0|0|0|80CED6C|80C9DA0||||
|0|0|0|80D2044|80CD34C||||
|0|0|0|80D2308|80CD618||||
|0|0|0|80D2774|80CDA84||||
|0|0|0|80D280C|80CDB1C||||
|0|0|0|80D2818|80CDB28||||
|0|0|0|80D3C0C|80CEF10||||
|0|0|0|8030F30|8030FE4|GameCtrl_StartResumedGame|[void GameCtrl_StartResumedGame(struct GameCtrlProc* gameCtrl) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmio.c#L1081)||
|0|0|0|803A55C|803A4E4|CpPerform_PerformAction|int CpPerform_PerformAction(signed int a1)||
|0|0|0|80D02FC|80CB320||||
|0|0|0|8046924|80469C4||||
|0|0|0|800663C|8006738||||
|0|0|0|80367A0|80366A0|BKSEL_SetupHitAndSuchStats|int BKSEL_SetupHitAndSuchStats(_BYTE *a1)||
|0|0|0|807DFF0|807BCA8||||
|0|0|0|8027EBC|8027F28|SMS_DisplayOne|int SMS_DisplayOne(int a1, int a2, int a3, int a4, int a5, char a6)||
|0|0|0|80BA01C|80B5498||||
|0|0|0|809F2AC|809D014||||
|0|0|0|809CF80|809ACB4||||
|0|0|0|809020C|808DF24||||
|0|0|0|809B600|8099328||||
|0|0|0|80C23C4|80BD5B8||||
|0|0|0|806B428|8069100||||
|0|0|0|80B68CC|80B1CAC||||
|0|0|0|806804C|8065CA0||||
|0|0|0|804DA6C|804CCCC||||
|0|0|0|807C3A0|8079FA8||||
|0|0|0|80C2864|80BDA78||||
|0|0|0|801CCEC|801D084|PlayerPhase_PreAction|signed int PlayerPhase_PreAction(unsigned __int16 **a1)||
|0|0|0|8065278|806416C||||
|0|0|0|8068600|8066258||||
|0|0|0|806B684|806935C||||
|0|0|0|80012FC|800134C|_UpdateKeyStatus|[void _UpdateKeyStatus(struct KeyStatusBuffer *keyStatus, s16 keys)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L285)||
|0|0|0|80ADC68|80A9250||||
|0|0|0|800FA64|800F8A8||||
|0|0|0|80C2A24|80BDC3C|MapMU_SetUnit|int MapMU_SetUnit(int a1, int a2, unsigned __int8 a3, int a4, int a5, int a6)||
|0|0|0|8012DB4|8012CFC||||
|0|0|0|8012CEC|8012C34||||
|0|0|0|806F5B8|806D294||||
|0|0|0|80C66DC|80C1920||||
|0|0|0|80CD1E8|80C8278||||
|0|0|0|80386AC|8038588||||
|0|0|0|802F584|802F664||||
|0|0|0|8001870|80018E4|sub_80018E4|[void sub_80018E4(u8 a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L770)||
|0|0|0|80CD2E0|80C7B80||||
|0|0|0|800FE54|800FCD8|GetSomeEventEngineMoveRelatedBitfield|int GetSomeEventEngineMoveRelatedBitfield(int a1, char a2)||
|0|0|0|802B344|802B3EC|GenerateCurrentRoundData|int GenerateCurrentRoundData(int a1, int a2)||
|0|0|0|80BFDD4|80BAFA4||||
|0|0|0|800DE3C|800DBE0|Event0F_CounterOperation|int Event0F_CounterOperation(int a1, int a2, int a3, unsigned int a4)||
|0|0|0|80CCAC0|80C835C||||
|0|0|0|80C53F4|80C0610||||
|0|0|0|80C1338|80BC4F4||||
|0|0|0|800DD9C|800DB38|Event0E_STAL|signed int Event0E_STAL(int a1)||
|0|0|0|80B7BE8|80B2FF8||||
|0|0|0|80D216C|80CD47C||||
|0|0|0|80CA1F8|80C5440||||
|0|0|0|80D2938|80CDC48||||
|0|0|0|8086604|8084330|CheckForPostActionEvents|signed int CheckForPostActionEvents()||
|0|0|0|80CA69C|80C58CC||||
|0|0|0|80155E0|80155C4|MapMain_ChapterSwitch|int MapMain_ChapterSwitch()||
|0|0|0|800DBA0|800D918|Event07_QueueOperation|int Event07_QueueOperation(int a1)||
|0|0|0|8010FB4|8010E6C||||
|0|0|0|8003FEC|80040C0||||
|0|0|0|8022644|8022678||||
|0|0|0|8011FCC|8011EF0||||
|0|0|0|80CCA10|80C7AE8||||
|0|0|0|807A5C0|807819C||||
|0|0|0|8012038|8011F5C||||
|0|0|0|80BFE10|80BAFE0||||
|0|0|0|8084630|80822F0||||
|0|0|0|800E8C8|800E6B4|Event1E_|signed int Event1E_(int a1)||
|0|0|0|80896EC|8087484|DrawUnitItemScreen|int DrawUnitItemScreen()||
|0|0|0|80C0574|80BB744||||
|0|0|0|80845EC|80822AC||||
|0|0|0|80C61AC|80C13E8||||
|0|0|0|800AC34|800A8D8||||
|0|0|0|80AB7B8|80A6DA0||||
|0|0|0|80B0B38|80AC084||||
|0|0|0|8068738|8066390||||
|0|0|0|800BCA8|800B9B8||||
|0|0|0|809E1D4|809BF10||||
|0|0|0|80C7560|80C27A8||||
|0|0|0|8068BE0|806683C||||
|0|0|0|8024390|80243D8||||
|0|0|0|809B9C0|80996E8||||
|0|0|0|80C1C4C|80BCE34||||
|80960D4|80B14D0|80B06A8|80C6C48|80C1E8C||||
|0|0|0|80B9CEC|80B5164||||
|0|0|0|80C5F68|80C119C||||
|0|0|0|80CC1B0|80C72A4||||
|0|0|0|800BF3C|800BC50|GetUnitStructFromEventParameter|int GetUnitStructFromEventParameter(int a1)||
|0|0|0|80845A8|8082268||||
|0|800B5F0|800B6B4|8070F10|806E95C||||
|0|0|0|8094590|8092298||||
|0|0|0|8084568|8082228||||
|0|0|0|800EADC|800E8CC|Event21_TextBGStuff|signed int Event21_TextBGStuff(signed int a1)||
|0|0|0|8046F4C|8047008||||
|0|0|0|800B88C|800B574||||
|0|0|0|807D074|807AD1C||||
|0|0|0|80B2034|80AD594||||
|0|0|0|807C44C|807A054|GetPreferredPositionForUNIT|int GetPreferredPositionForUNIT(unsigned __int8 *a1, _BYTE *a2, _BYTE *a3, char a4)||
|0|0|0|800E004|800DDB0|Event13_|signed int Event13_(int a1)||
|0|0|0|8059034|80581EC||||
|0|0|0|800D860|800D5A4|Event01_End|signed int Event01_End(int a1)||
|0|0|0|807D324|807AFFC||||
|0|0|0|8086784|80844B0|RunMoveEventsMaybe|signed int RunMoveEventsMaybe(int a1)||
|0|0|0|80867D8|8084508|RunPostMoveEvents|signed int RunPostMoveEvents(int a1)||
|0|0|0|800B4F0|800B198||||
|0|0|0|800B6C0|800B388||||
|0|0|0|800BE34|800BB48|UntriggerMapChange|int UntriggerMapChange(unsigned __int16 a1, char a2, int a3)||
|0|0|0|8071D0C|806F2A0||||
|0|0|0|800FD04|800FB84|Event2C_LoadUnits|signed int Event2C_LoadUnits(int a1)||
|0|0|0|80017EC|8001860|sub_8001860|[void sub_8001860(u8 a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L753)||
|0|0|0|80018F0|8001964|sub_8001964|[void sub_8001964(u8 a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L788)||
|0|0|0|8001974|80019E8|sub_80019E8|[void sub_80019E8(u8 a)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L805)||
|0|0|0|800FAD0|800F914|UNIT_Filter|UnitEventStruct *UNIT_Filter(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)||
|0|0|0|8086730|808445C|RunSelectEvents|int RunSelectEvents(int a1)||
|0|0|0|801DA50|801DDF0|StartBlockingBMXFADE|int StartBlockingBMXFADE(char a1, signed int a2)||
|0|0|0|80C7CA8|80C2EF0||||
|0|0|0|800BDE8|800BAF8|TriggerMapChanges|int TriggerMapChanges(unsigned __int16 a1, char a2, int a3)||
|0|0|0|8010B9C|8010A58|Event3F_|signed int Event3F_(signed int a1)||
|0|0|0|800F4D0|800F2D4|Event27_MapChange|signed int Event27_MapChange(int a1)||
|0|0|0|8010834|80106E4|Event3A_|signed int Event3A_(int a1)||
|0|0|0|80C7240|80C2488||||
|0|0|0|80108E4|801079C|Event3B_|signed int Event3B_(signed int a1)||
|0|0|0|800BD98|800BAA8||||
|0|0|0|807C178|8079D74||||
|0|0|0|806D750|806B3B8||||
|0|0|0|80A98B4|80A4E70|SaveNewGame|int SaveNewGame(int a1, int a2, int a3, signed int a4)||
|0|0|0|800FCA0|800FB18|Event2B_|int Event2B_(int a1)||
|0|0|0|802F92C|802F9E0||||
|0|0|0|80AF0F8|80AA658||||
|0|0|0|80CB720|80C67D4||||
|0|0|0|800CAF4|800C814|EventAC_|signed int EventAC_(int a1)||
|8048A64|8051F38|805175C|80578FC|8056974|UnitKakudai1|void UnitKakudai1(_6CStruct *ctx)||
|0|0|0|809C3E8|809A114||||
|0|0|0|80CC994|80C7A84||||
|0|0|0|80CD16C|80C8214||||
|0|0|0|800CA34|800C754|EventA9_|int EventA9_(int a1)||
|0|0|0|80BF4C0|80BA628||||
|0|0|0|8028768|80287D4|SwapUnitStats|[void SwapUnitStats(struct Unit* unitA, struct Unit* unitB)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmreliance.c#L394)||
|0|0|0|802AA28|802AABC|BattleLoadAttack|int BattleLoadAttack(int a1, int a2)||
|0|0|0|80B6E24|80B220C||||
|0|0|0|800C894|800C5BC|EventA3_|int EventA3_(int a1)||
|0|0|0|800C8D0|800C5F8|EventA4_|int EventA4_(int a1)||
|0|0|0|807D544|807B1C0||||
|0|0|0|801079C|8010644|Event39_CHAI|int Event39_CHAI(int a1)||
|0|0|0|80C54CC|80C06F0||||
|0|0|0|800DFCC|800DD74|Event12_|signed int Event12_(int a1)||
|0|0|0|807B660|807924C|MU_ComputeDisplayPosition|[u8 MU_ComputeDisplayPosition(struct MUProc* proc, struct Vec2* out) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1372)||
|0|0|0|801060C|80104B0|Event35_UnitClassChanging|int Event35_UnitClassChanging(int a1)||
|0|0|0|8068B00|8065BB8||||
|0|0|0|808639C|80840C4|RunLocationEvents|int RunLocationEvents(char a1, unsigned __int8 a2)||
|0|0|0|808BC90|8089980||||
|0|0|0|8010270|8010110|Event33_CheckUnitVarious|signed int Event33_CheckUnitVarious(int a1)||
|0|0|0|8061D78|805D030||||
|0|0|0|8067DD0|8065AEC|Loop6C_efxIvaldiBG2|int Loop6C_efxIvaldiBG2(int a1)||
|0|0|0|80651D0|80640D0||||
|0|0|0|80CC0F0|80C71E4||||
|0|0|0|8010994|8010850|Event3C_|int Event3C_(int a1)||
|0|0|0|800CA94|800C7B4|EventAA_|int EventAA_(int a1)||
|0|0|0|800CAC4|800C7E4|EventAB_|int EventAB_(int a1)||
|0|0|0|8017E7C|8018160|UnitAutolevelRealistic|[void UnitAutolevelRealistic(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L821)||
|803F938|8048244|8047A58|804D000|804C260||||
|0|0|0|80C5628|80C0858|GetWMCenteredCameraPosition|int GetWMCenteredCameraPosition(__int16 a1, __int16 a2, signed __int16 *a3, signed __int16 *a4)||
|0|0|0|80BFAC8|80BAC78|GmapUnit_Loop|int GmapUnit_Loop(int a1)||
|0|0|0|800BA5C|800B764||||
|0|0|0|80B0D30|80AC288||||
|0|0|0|8097804|8095524||||
|0|0|0|800CC2C|800C950|EventB4_|int EventB4_(int a1)||
|0|0|0|8053990|8052CA0||||
|0|0|0|8010D9C|8010C70|Event42_|signed int Event42_(int a1)||
|0|806B5F8|806AE18|8077D0C|80758D4||||
|0|0|0|8024F88|8024FD8||||
|0|0|0|80C24B4|80BD6A8||||
|0|0|0|8010D24|8010BEC|Event41_|signed int Event41_(int a1)||
|0|0|0|801254C|801247C||||
|0|0|0|80C05C8|80BB798|GmapScreen2_Loop|int GmapScreen2_Loop(int a1)||
|0|0|0|8011B08|8011A1C||||
|0|0|0|802B554|802B600|CurrentRound_ComputeWeaponEffects|int CurrentRound_ComputeWeaponEffects(int a1, int a2)||
|0|0|0|80C513C|80C0358||||
|0|0|0|80A5C54|80A1E7C||||
|0|0|0|800F8D4|800F704|UNIT_Load_800F704|int UNIT_Load_800F704(unsigned __int8 *a1, unsigned __int16 a2, char a3, unsigned __int8 a4)||
|0|80AAB3C|80A9C60|80B2708|80ADC68||||
|0|0|0|800E5CC|800E3C8|Event1B_TEXTSHOW|signed int Event1B_TEXTSHOW(int a1)||
|0|0|0|80385E8|80384BC||||
|0|0|0|80C19D4|80BCBAC||||
|0|0|0|80D1D1C|80CD014|PromotionDisplay_MainLoop|int PromotionDisplay_MainLoop(int a1)||
|0|0|0|800F86C|800F698|UNITs_LoadInstant_800F698|int UNITs_LoadInstant_800F698(unsigned __int8 *a1, unsigned __int16 a2, unsigned __int8 a3)||
|0|0|0|800C2B8|800BFD8|Event88_|signed int Event88_(int a1)||
|0|0|0|800F390|800F17C|Event25_LOMA|signed int Event25_LOMA(int a1)||
|0|0|0|800C224|800BF38|Event87_|signed int Event87_(int a1)||
|0|0|0|800CDB0|800CADC|EventBC_|int EventBC_(int a1)||
|0|0|0|80BC2A4|80B7800||||
|0|0|0|800C1C4|800BED4|Event86_WM_MOVECAM|signed int Event86_WM_MOVECAM(int a1)||
|0|0|0|807ACBC|8078898|MU_InterpretCommandScript|int MU_InterpretCommandScript(int a1)||
|0|0|0|800F41C|800F20C|Event26_CameraControlMaybe|signed int Event26_CameraControlMaybe(int a1)||
|0|0|0|800CC7C|800C9A0|EventB6_|int EventB6_(int a1)||
|0|0|0|80019F8|8001A6C|sub_8001A6C|[void sub_8001A6C(void)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L822)||
|0|0|0|80BE2A8|80B93E0||||
|0|0|0|8085DDC|8083AA4|EvCheck0B_AREA|signed int EvCheck0B_AREA(_DWORD *a1)||
|0|0|0|80868B0|80845E4|GetEventTriggerId|int GetEventTriggerId(int a1)||
|0|0|0|8069C44|8065A10|Loop6C_efxIvaldiBG1|int Loop6C_efxIvaldiBG1(int a1)||
|8055200|805DE8C|805D6A4|8062B98|8060C78||||
|8052060|805BA48|0|8061354|805E494||||
|0|0|0|80AFE14|80AB340||||
|0|0|0|807CA10|807A644||||
|0|0|0|807C8DC|807A4E8|GetAdjustedPositionForNewUnit|int GetAdjustedPositionForNewUnit(int a1, signed __int16 *a2, char a3)||
|80550B8|805DD44|805D55C|8062B30|805D2B4||||
|0|0|0|806AD50|8068208||||
|0|0|0|801015C|800FFF8|Event32_SpawnSingleUnit|int Event32_SpawnSingleUnit(int a1)||
|0|0|0|800F5FC|800F3FC|Event29_SetFogVision|signed int Event29_SetFogVision(int a1)||
|0|0|0|808F584|808D288|Init6CPI|int Init6CPI(int a1)||
|0|0|0|805DC30|805C3C0||||
|0|0|0|800D808|800D544|SlotQueuePop|[unsigned SlotQueuePop(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/event.c#L574)||
|0|0|0|80C1B20|80BCCFC||||
|0|0|0|800F62C|800F42C|Event2A_MoveToChapter|int Event2A_MoveToChapter(int a1)||
|0|0|0|800E1FC|800DFBC|Event18_|signed int Event18_(int a1)||
|0|0|0|800D914|800D670|Event02_EvBitAndIdMod|int Event02_EvBitAndIdMod(int a1)||
|0|0|0|80BD194|80B82C8||||
|0|0|0|800C994|800C6C0|EventA8_|int EventA8_(int a1)||
|0|0|0|807A710|80782EC|GenerateMonsterLevel|[int GenerateMonsterLevel(u8 baseLevel) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/monstergen.c#L29)||
|0|0|0|80C18F8|80BCAB8||||
|0|0|0|807C270|8079E78|MuCtr_InitFromReda|int MuCtr_InitFromReda(int a1, signed int a2, int a3, int a4, unsigned __int16 a5)||
|0|0|0|80D3CD0|80CEFD4||||
|0|0|0|8011E44|8011D60||||
|0|0|0|8038F48|80529F0||||
|8070C4C|8082CA4|8081F44|808B6A0|806D198||||
|0|0|0|8088B0C|808683C||||
|0|0|0|800FF08|800FD8C|Event2F_MoveUnit|signed int Event2F_MoveUnit(int a1)||
|0|0|0|8001570|800159C|sub_800159C|[void sub_800159C(u16 *a, u16 *b, s16 c, s16 d, u16 e)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/hardware.c#L514)||
|0|0|0|800D97C|800D6E4|Event03_CheckEvBitOrId|int Event03_CheckEvBitOrId(int a1)||
|0|0|0|80BEBB0|80B9D14||||
|0|0|0|8025A14|8025A64|MakeGorgonEggHatchTargetList|int MakeGorgonEggHatchTargetList(int a1)||
|0|0|0|80BF73C|80BA8A0||||
|0|0|0|800DC40|800D9B8|Event0A_Call|signed int Event0A_Call(int a1)||
|0|0|0|80B2924|80ADE90||||
|0|0|0|800E064|800DE14|Event14_|signed int Event14_(int a1)||
|0|0|0|80B296C|80ADEE0||||
|0|0|0|807BFF4|8079BE0|MU_SortObjLayers|[void MU_SortObjLayers(void) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/mu.c#L1884)||
|0|0|0|8070A4C|8066758||||
|0|0|0|800284C|80028FC|sub_80028FC|[void sub_80028FC(int songId)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/soundwrapper.c#L357)||
|0|0|0|8017D84|8018064|UnitAutolevelPenalty|[void UnitAutolevelPenalty(struct Unit* unit, u8 classId, int levelCount) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L779)||
|0|0|0|800CD70|800CA9C|EventBB_|int EventBB_(int a1)||
|0|0|0|801786C|8017AC4|LoadUnit|[struct Unit* LoadUnit(const struct UnitDefinition* uDef) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L515)||
|0|0|0|806BBA0|8069878||||
|0|0|0|807CD3C|807A984|MapAnimProc_DisplayDeathQuote|int MapAnimProc_DisplayDeathQuote()||
|0|0|0|806D692|806B344||||
|0|0|0|804F0EC|804E368|DrawUiFrame2|[void DrawUiFrame2(int x, int y, int width, int height, int style)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/uiutils.c#L506)||
|0|0|0|801B724|80618D8||||
|0|0|0|809C7D4|809A504||||
|0|0|0|80730E4|8070B3C||||
|0|0|0|8033558|8033648||||
|0|0|0|8043CBC|8012B24||||
|0|0|0|8065A44|809656C||||
|8000B38|8000B30|8000B58|0|0||||
|0|80010CC|80010F4|0|0||||
|8001394|8001450|8001478|0|0||||
|80015A4|800183C|8001864|0|0||||
|8001610|80018A8|80018D0|0|0||||
|8001714|80019AC|80019D4|0|0||||
|8001734|80019CC|80019F4|0|0|_UpdateKeyStatus|int UpdateKeyStatus(int a1, __int16 a2)||
|8001B4C|8001ED4|8001EFC|0|0||||
|8001B8C|8001F14|8001F3C|0|0||||
|8001C68|8001FF0|8002018|0|0||||
|8001D0C|8002094|80020BC|0|0||||
|8001D44|80020CC|80020F4|0|0||||
|8001E68|80021F0|8002218|0|0||||
|8001F88|8002310|8002338|0|0||||
|800210C|8002494|80024BC|0|0||||
|8001FD4|80025BC|80025E4|0|0||||
|800236C|80026F4|800271C|0|0||||
|80024A4|800282C|8002854|0|0||||
|8002A68|8002EB8|8002FDC|0|0||||
|800319C|80036F0|8003814|0|0||||
|0|800394C|8003A70|0|0||||
|80034B8|8003B04|8003C28|0|0||||
|800361C|8003CE8|8003E0C|0|0||||
|80036B0|8003D7C|8003EA0|0|0||||
|0|8003F28|800404C|0|0||||
|0|8003F94|80040B8|0|0||||
|0|80045A4|80046C8|0|0||||
|0|80045D0|80046F4|0|0||||
|0|800497C|8004AA0|0|0||||
|0|8004BA0|8004CC4|0|0||||
|0|8004C38|8004D5C|0|0||||
|0|800798C|8007AFC|0|0||||
|0|800A720|800A71C|0|0||||
|0|800A7A4|800A7A0|0|0||||
|0|800B100|800B1C4|0|0||||
|0|800B404|800B4C8|0|0||||
|0|800B434|800B4F8|0|0||||
|0|800B464|800B528|0|0||||
|0|800B4F4|800B5B8|0|0||||
|806D398|800B578|800B63C|0|0||||
|0|800B678|800B73C|0|0||||
|0|800B900|800B9A8|0|0||||
|0|800B93C|800B9E4|0|0||||
|0|800BB64|800BC54|0|0||||
|0|800BBF8|800BCE8|0|0||||
|0|800C2C4|800C3B4|0|0||||
|0|800C374|800C464|0|0||||
|0|800C3FC|800C4EC|0|0||||
|0|800C5F4|800C6E4|0|0||||
|0|800C70C|800C7FC|0|0||||
|0|800C7CC|800C8BC|0|0||||
|0|800C868|800C958|0|0||||
|0|800C8BC|800C9AC|0|0||||
|0|800C92C|800CA1C|0|0||||
|0|800C9F8|800CAE8|0|0||||
|0|800CA84|800CB74|0|0||||
|0|800CCFC|800CDEC|0|0||||
|0|800CDCC|800CEBC|0|0||||
|0|800CE54|800CF44|0|0||||
|0|800CEF4|800CFE4|0|0||||
|0|800D484|800D574|0|0||||
|0|800D4AC|800D59C|0|0||||
|0|800D4C8|800D5B8|0|0||||
|0|800D4EC|800D5DC|0|0||||
|0|800D678|800D768|0|0||||
|0|800D69C|800D78C|0|0||||
|0|800D6C0|800D7B0|0|0||||
|0|800D840|800D934|0|0||||
|0|800D864|800D958|0|0||||
|0|800D8DC|800D9D0|0|0||||
|0|800DA9C|800DB90|0|0||||
|0|800DB8C|800DC80|0|0||||
|800FF18|800DC44|800DD38|0|0||||
|0|800DC94|800DD88|0|0||||
|0|800DDD4|800DEC8|0|0||||
|8010244|800E120|800E214|0|0||||
|0|800E160|800E254|0|0||||
|0|800E1C4|800E2B8|0|0||||
|8010530|800E32C|800E420|0|0||||
|0|800E570|800E664|0|0||||
|0|800E598|800E68C|0|0||||
|0|800E5C0|800E6B4|0|0||||
|0|800E5EC|800E6E0|0|0||||
|0|800E60C|800E700|0|0||||
|0|800F0CC|800F1C0|0|0||||
|0|800F208|800F2FC|0|0||||
|0|800F5C4|800F6B8|0|0||||
|0|800F67C|800F770|0|0||||
|0|800F6C4|800F7B8|0|0||||
|0|800F710|800F804|0|0||||
|0|800FAFC|800FBF0|0|0||||
|0|800FBA4|800FC98|0|0||||
|0|800FE60|800FE18|0|0||||
|0|8010480|8010010|0|0||||
|0|8010540|80100D0|0|0||||
|0|80108C8|8010464|0|0||||
|0|8010C5C|801080C|0|0||||
|0|8010E14|80109C4|0|0||||
|0|8011038|8010BE8|0|0||||
|0|8011214|8010DC4|0|0||||
|0|8011248|8010DF8|0|0||||
|800D928|8011508|80110B8|0|0||||
|0|8011C5C|80115C4|0|0||||
|0|8011CBC|8011624|0|0||||
|0|801206C|80119D4|0|0||||
|0|80121A4|8011B0C|0|0||||
|0|80122DC|8011C44|0|0||||
|0|8012350|8011CB8|0|0||||
|0|80124BC|8011E28|0|0||||
|0|80125EC|8011F58|0|0||||
|0|8012640|8011FAC|0|0||||
|80150DC|8014EE4|8014A68|0|0||||
|80151E4|8014FEC|8014B70|0|0||||
|80151F8|8015000|8014B84|0|0||||
|0|8015918|801549C|0|0||||
|8016A10|8016C80|8016820|0|0||||
|0|801759C|8017148|0|0||||
|0|8017748|8017340|0|0||||
|0|8017874|801746C|0|0||||
|8017578|8017B24|8017734|0|0||||
|0|8017B44|8017754|0|0||||
|8017764|8017DAC|80179BC|0|0||||
|0|8018C20|8018830|0|0||||
|0|8018C78|8018888|0|0||||
|0|8018CC4|80188D4|0|0||||
|801A698|801B718|801B338|0|0||||
|0|801E7E0|801E45C|0|0||||
|0|801FDB8|801F950|0|0||||
|0|80214E8|802107C|0|0||||
|0|80217EC|8021374|0|0||||
|801EA54|80219BC|8021544|0|0||||
|801F534|8022394|8021F1C|0|0||||
|801F688|80225F4|802217C|0|0||||
|801FBDC|8022B9C|8022724|0|0||||
|0|8023198|8022D20|0|0||||
|0|80239AC|8023520|0|0||||
|8020A64|8023D9C|8023910|0|0||||
|8022A84|8026AB4|8026628|0|0||||
|8022A94|8026AC4|8026638|0|0||||
|0|8026B70|80266E4|0|0||||
|0|80270C0|8026C38|0|0||||
|8023678|8027794|8027308|0|0||||
|80236B0|80277CC|8027340|0|0||||
|802581C|802A2B8|8029E08|0|0||||
|8025B1C|802A6A4|802A1F4|0|0||||
|8025D5C|802A944|802A494|0|0||||
|0|802AD58|802A8A8|0|0||||
|0|802BD14|802B854|0|0||||
|0|802C17C|802BCBC|0|0||||
|8026F30|802C2D4|802BE14|0|0||||
|8027220|802C63C|802C17C|0|0||||
|802887C|802DD64|802D8A4|0|0||||
|8029370|802E8A0|802E3D4|0|0||||
|806C310|802ECE4|802E818|0|0||||
|802AC20|8030340|802FE78|0|0|MoveCursor_8032DA0|signed int MoveCursor_8032DA0()||
|801E674|80309BC|80304D0|0|0||||
|0|8030C68|803077C|0|0||||
|802B8A0|80317EC|8031304|0|0||||
|802C9C0|803293C|803240C|0|0||||
|802CA40|80329BC|803248C|0|0||||
|0|8033D60|8033888|0|0||||
|0|8034AC4|80345EC|0|0||||
|0|8034CD0|80347F8|0|0||||
|0|8034CF8|8034820|0|0||||
|802F244|8035C6C|8035794|0|0||||
|8031074|8037DF8|8037944|0|0||||
|8033824|803A9FC|803A548|0|0||||
|80347A4|803BBB0|803B6FC|0|0||||
|8034DFC|803C218|803BD64|0|0||||
|8035064|803C57C|803C0C8|0|0||||
|8035CB0|803D1CC|803CD1C|0|0||||
|8035D4C|803D268|803CDB8|0|0||||
|80360C4|803D5E0|803D130|0|0||||
|80369E0|803DF20|803DA70|0|0||||
|8038324|803FA38|803F584|0|0||||
|803882C|803FFE4|803F8D8|0|0||||
|803A640|8041E68|804177C|0|0||||
|0|8043DF4|8043618|8048BF0|0||||
|0|8043E6C|8043690|0|0||||
|0|8043F64|8043788|0|0||||
|803C2C4|8044B0C|8044310|0|0||||
|803E1E8|8046AC8|80462DC|0|0||||
|803E2BC|8046B9C|80463B4|0|0||||
|803E3B4|8046C90|80464A8|0|0||||
|803FAA4|80483C0|8047BD4|0|0||||
|803FB08|8048424|8047C38|0|0||||
|803FCBC|80485EC|8047E00|0|0||||
|8040B44|8049490|8048CA8|0|0||||
|8041168|8049AB4|80492CC|0|0||||
|0|804A360|8049B78|0|0||||
|0|804B378|804AB9C|0|0||||
|8042AA8|804BE68|804B68C|0|0||||
|8042B74|804BF34|804B758|0|0||||
|8042E58|804C20C|804BA30|0|0||||
|8043078|804C3F4|804BC18|0|0||||
|804323C|804C5BC|804BDE0|0|0||||
|8045F88|804EF58|804E77C|0|0||||
|8047058|80500DC|804F900|0|0||||
|8047C88|8050FB4|80507D8|0|0||||
|8048298|8051774|8050F98|0|0||||
|8048A64|8051F38|805175C|0|0||||
|804A484|80539FC|8053214|0|0||||
|806C49C|8053C28|8053440|0|0||||
|804B048|805480C|8054024|0|0|battleAnimationInit|void battleAnimationInit()|战斗动画数据载入到内存|
|0|8055658|8054E70|0|0||||
|804CD4C|8056418|8055C30|0|0||||
|804CDD0|8056738|8055F50|0|0||||
|804FF1C|8059A90|80592A8|0|0||||
|805083C|805A06C|8059884|0|0||||
|80520CC|805BAB4|805B2CC|0|0||||
|8052544|805BF2C|805B744|0|0||||
|8052598|805BF80|805B798|0|0||||
|8055998|805E68C|805DEA4|0|0||||
|0|805FEF4|805F70C|0|0||||
|8057A7C|806096C|8060184|0|0||||
|0|806574C|8064F5C|0|0|FireDragonBGAnimation6|void FireDragonBGAnimation6(_6CStruct *ctx)||
|0|80660C8|80658D8|0|0||||
|0|8066118|8065928|0|0|FireDragonBGPaletteAnimation|void FireDragonBGPaletteAnimation(_6CStruct *ctx)|火龙背景调色板动画|
|0|8066224|8065A34|0|0||||
|0|8066398|8065BA8|0|0||||
|0|806648C|8065C9C|0|0||||
|805BB24|8067C30|8067444|0|0|battleAnimationOAMInfoHandler|void battleAnimationOAMInfoHandler(void *battleAnimationOAMInfoBuffer, int a2, unsigned __int16 a3, int a4)|读取并处理解压到内存中的战斗动画OAM信息|
|805C3FC|80685A8|8067DBC|0|0||||
|805C89C|8068A68|806827C|0|0||||
|805F7E4|806C238|806BA4C|0|0||||
|805F93C|806C3F8|806BC0C|0|0||||
|805FD40|806C8B8|806C0CC|0|0||||
|805FD78|806C8F0|806C104|0|0||||
|805FDEC|806C964|806C178|0|0||||
|8060488|806D010|806C824|0|0||||
|8060840|806D3F8|806CC0C|0|0||||
|806096C|806D53C|806CD50|0|0||||
|8060A1C|806D5EC|806CE00|0|0||||
|8060A5C|806D62C|806CE40|0|0||||
|8060B68|806D7E8|806CFFC|0|0||||
|800E4C0|806D934|806D148|0|0||||
|8060CB4|806DA3C|806D250|0|0||||
|0|806DCB8|806D4CC|0|0||||
|0|806E07C|806D890|0|0||||
|0|806EA64|806E278|0|0||||
|8061BAC|806EE5C|806E670|0|0||||
|8061BEC|806EE9C|806E6B0|0|0||||
|8061C8C|806EF3C|806E750|0|0||||
|8061E14|806F0C4|806E8D8|0|0||||
|8061FD0|806F280|806EA94|0|0||||
|80620D8|806F2D8|806EAEC|0|0||||
|806212C|806F330|806EB44|0|0||||
|80621EC|806F404|806EC18|0|0||||
|8062380|806F598|806EDAC|0|0||||
|8062AB4|806FD1C|806F530|0|0||||
|8062BD4|806FE3C|806F650|0|0||||
|8062C38|806FEA0|806F6B4|0|0||||
|8062D80|806FFE8|806F7FC|0|0||||
|80646E4|8071960|8071174|0|0||||
|80652E0|807255C|8071D70|0|0||||
|8066484|80736EC|8072F00|0|0||||
|0|80749F0|80741F4|0|0||||
|8068060|807540C|8074C10|0|0||||
|80687BC|8075B7C|80753AC|0|0||||
|8068858|8075C18|8075448|0|0||||
|8068A48|8075E08|8075638|0|0||||
|8068CB8|8076080|80758B0|0|0||||
|8068D9C|8076164|8075994|0|0||||
|8068E80|8076248|8075A78|0|0||||
|8068F04|80762CC|8075AFC|0|0||||
|8069430|8076820|8076050|0|0||||
|806A330|807761C|8076E4C|0|0||||
|0|8077694|8076EC4|0|0||||
|0|8077714|8076F44|0|0||||
|0|8077794|8076FC4|0|0||||
|806A3A8|807781C|807704C|0|0||||
|806A44C|80778C0|80770F0|0|0||||
|806A4D4|80778FC|807712C|0|0||||
|0|8077944|8077174|0|0||||
|806A51C|807798C|80771BC|0|0||||
|806A600|8077A70|80772A0|0|0||||
|0|8077D1C|807754C|0|0||||
|0|8077FB4|80777E4|0|0||||
|8069FD8|8078030|8077860|0|0||||
|0|8078098|80778C8|0|0||||
|0|80780E0|8077910|0|0||||
|0|80781C8|80779F8|0|0||||
|0|807850C|8077D3C|0|0||||
|0|80785B8|8077DE8|0|0||||
|806A920|8078950|8078180|0|0||||
|806A954|8078984|80781B4|0|0||||
|806BB9C|80789AC|80781DC|0|0||||
|0|80789EC|807821C|0|0||||
|0|8078ACC|80782FC|0|0||||
|0|8078BC4|80783F4|0|0||||
|806AAA0|8078CF0|8078520|0|0||||
|806ABD0|8078E20|8078650|0|0||||
|0|8078E84|80786B4|0|0||||
|806AC90|8078F08|8078738|0|0||||
|806B268|80795E0|8078E10|0|0||||
|806B284|80795FC|8078E2C|0|0||||
|806B310|8079688|8078EB8|0|0||||
|806B3DC|8079754|8078F84|0|0||||
|0|8079798|8078FC8|0|0||||
|0|807982C|807905C|0|0||||
|0|8079894|80790C4|0|0||||
|0|8079CE4|8079514|0|0||||
|806B8C8|8079F34|8079764|0|0||||
|806B938|8079FA4|80797D4|0|0||||
|806B984|8079FF0|8079820|0|0||||
|806B9BC|807A028|8079858|0|0||||
|806B9F8|807A064|8079894|0|0||||
|806BA48|807A0B4|80798E4|0|0||||
|806BA74|807A0E0|8079910|0|0||||
|806BAA0|807A10C|807993C|0|0||||
|806BAB8|807A160|8079990|0|0||||
|806BAF0|807A198|80799C8|0|0||||
|0|807A568|8079AF4|0|0||||
|0|807A5D0|8079B5C|0|0||||
|806BFA4|807A67C|8079C08|0|0||||
|0|807AD28|807A2B4|0|0||||
|0|807AD3C|807A2C8|0|0||||
|0|807AD50|807A2DC|0|0||||
|0|807AD64|807A2F0|0|0||||
|0|807AD78|807A304|0|0||||
|0|807AE94|807A420|0|0||||
|806C62C|807AEF0|807A47C|0|0||||
|0|807AF10|807A49C|0|0||||
|0|807B32C|807A8B8|0|0||||
|0|807C228|807B7B4|0|0||||
|0|807D3E0|807C96C|0|0||||
|0|807DAF4|807CFF4|0|0||||
|0|807DB8C|807D094|0|0||||
|0|807DD0C|807D1C8|0|0||||
|801ADB4|807DD24|807D1E0|0|0||||
|0|807DD3C|807D1F8|0|0||||
|0|807DDDC|807D240|0|0||||
|0|807DF0C|807D2EC|0|0||||
|0|807DF44|807D324|0|0||||
|806BF14|807E0A0|807D424|0|0||||
|0|807E14C|807D4C0|0|0||||
|0|807E188|807D4EC|0|0||||
|0|807E378|807D644|0|0||||
|0|807E540|807D80C|0|0||||
|0|807E6A4|807D954|0|0||||
|0|807E774|807D9E4|0|0||||
|0|807E7A4|807DA14|0|0||||
|0|807E950|807DBA0|0|0||||
|0|807E9E0|807DC30|0|0||||
|0|807EBCC|807DE1C|0|0||||
|0|807ED8C|807DFDC|0|0||||
|0|807EE34|807E084|0|0||||
|0|807EED8|807E128|0|0||||
|0|807F1FC|807E440|0|0||||
|0|807F258|807E49C|0|0||||
|0|807F3FC|807E640|0|0||||
|0|807F448|807E68C|0|0||||
|0|807FC74|807EEAC|0|0||||
|0|807FC88|807EEC0|0|0||||
|0|807FC9C|807EED4|0|0||||
|806CC80|807FCB0|807EEE8|0|0||||
|0|807FCC4|807EEFC|0|0||||
|0|807FD34|807EF6C|0|0||||
|0|807FD58|807EF90|0|0||||
|806F5F8|80814C4|8080768|0|0||||
|806F708|80815D4|8080878|0|0||||
|806FBD8|8081AB0|8080D54|0|0||||
|80704DC|808245C|80816FC|0|0||||
|8070DC8|8082EEC|8082460|0|0||||
|0|808586C|8084E70|0|0||||
|0|808588C|8084E90|0|0||||
|0|80864DC|8085ADC|0|0||||
|0|80872E4|80868F8|0|0||||
|8074668|8089998|8089038|0|0||||
|0|808E7D4|808DEA8|0|0||||
|806C4B0|808E8C8|808DC48|0|0||||
|0|808ED8C|808E448|0|0||||
|0|808F938|808EFFC|0|0||||
|0|808FCF8|808F3B8|0|0||||
|0|80902F0|808F9B0|0|0||||
|0|8090B2C|80901EC|0|0||||
|0|8090FD4|8090690|0|0||||
|8082574|8091118|80907D4|0|0||||
|80827F8|809139C|8090A58|0|0||||
|0|8091618|8090CD4|0|0||||
|0|8091C08|80912CC|0|0||||
|0|80937E0|8092ED4|0|0||||
|0|8095E8C|809565C|0|0||||
|0|80966CC|8095ED8|0|0||||
|0|8097C94|809750C|0|0||||
|0|8098EF4|8098618|0|0||||
|0|8099B50|8099198|0|0||||
|806CE18|8099D00|8099340|0|0||||
|0|809A214|8099858|0|0||||
|0|809B380|809A9A8|0|0||||
|8084560|809F280|809E870|0|0||||
|0|809F660|809EC24|0|0||||
|0|809F9F8|809EFBC|0|0|GetChapterThing|signed int GetChapterThing()||
|0|80A0184|809F748|0|0||||
|0|80A0654|809FC88|0|0|DoesThisChapterCount|signed int DoesThisChapterCount(signed int a1)||
|8084D1C|80A0B44|80A0178|0|0||||
|0|80A0DCC|80A0400|0|0||||
|0|80A1384|80A09FC|0|0||||
|0|80A3F48|80A32D4|0|0||||
|0|80A5218|80A45A0|0|0||||
|0|80A5838|80A4B4C|0|0||||
|80895B8|80A5E30|80A5148|0|0||||
|0|80A838C|80A7480|0|0||||
|0|80A8774|80A7860|0|0||||
|0|80A8850|80A793C|0|0||||
|0|80A8B74|80A7C60|0|0||||
|0|80A9034|80A8120|0|0||||
|0|80A9D44|80A8E30|0|0||||
|0|80AA4D4|80A95F8|0|0||||
|0|80AA8FC|80A9A20|0|0||||
|0|80AAB78|80A9C9C|0|0||||
|0|80AAD44|80A9E7C|0|0||||
|0|80AAD94|80A9ECC|0|0||||
|0|80AB0E0|80AA218|0|0||||
|0|80AB654|80AA78C|0|0||||
|0|80ABC4C|80AAD68|0|0||||
|0|80AC304|80AB420|0|0||||
|0|80AC324|80AB440|0|0||||
|0|80AC3D0|80AB4EC|0|0||||
|0|80AC670|80AB78C|0|0||||
|0|80ADD88|80ACE60|0|0||||
|0|80AEA24|80ADB0C|0|0||||
|0|80AF130|80AE218|0|0||||
|808CE4C|80AF68C|80AE754|0|0||||
|0|80AFBE8|80AECB0|0|0||||
|80951FC|80B06B4|80AF864|0|0||||
|809604C|80B1454|80B062C|0|0||||
|0|80B1E64|80B103C|0|0||||
|809704C|80B26A4|80B1878|0|0||||
|80978AC|80B2EC0|80B209C|0|0||||
|80979C8|80B2FE4|80B21C0|0|0||||
|8097A54|80B3070|80B224C|0|0||||
|8097BC0|80B31DC|80B23B8|0|0||||
|8097E2C|80B3448|80B2624|0|0||||
|80984A8|80B3AB4|80B2C90|0|0||||
|80986DC|80B3CD4|80B2EB0|0|0||||
|0|80B3E94|80B3070|0|0||||
|0|80B40D8|80B32A0|0|0||||
|0|80B4104|80B32CC|0|0||||
|0|80B45FC|80B37C4|0|0||||
|0|80B4750|80B3918|0|0||||
|0|80B4778|80B3940|0|0||||
|0|80B4810|80B39D8|0|0||||
|0|80B4934|80B3AFC|0|0||||
|0|80B5130|80B4310|0|0||||
|0|80B519C|80B437C|0|0||||
|0|80B520C|80B43EC|0|0||||
|0|80B5430|80B4610|0|0||||
|0|80B5600|80B47E0|0|0||||
|0|80B5B6C|80B4D4C|0|0||||
|0|80B60F0|80B52D0|0|0||||
|0|80B6170|80B5350|0|0||||
|0|80B6754|80B5934|0|0||||
|0|80B6A1C|80B5BFC|0|0||||
|0|80B6C8C|80B5E80|0|0||||
|0|80B6DEC|80B5FE0|0|0||||
|0|80B7578|80B676C|0|0||||
|0|80B79FC|80B6C14|0|0||||
|0|80B7B30|80B6D48|0|0||||
|0|80B7B4C|80B6D64|0|0||||
|0|80B7E60|80B70B4|0|0||||
|0|80B812C|80B7380|0|0||||
|0|80B81B4|80B7408|0|0||||
|8017C04|80B8808|80B7A24|0|0||||
|0|80B8A20|80B7C3C|0|0||||
|0|80B8FF4|80B8358|0|0||||
|0|80B9038|80B839C|0|0||||
|0|80B9A4C|80B8EEC|0|0||||
|0|80BAEA8|80BA3A0|0|0||||
|0|80BAED4|80BA3CC|0|0||||
|0|80BB210|80BA6D8|0|0||||
|0|80BB8CC|80BAE50|0|0||||
|0|80BB940|80BAEC4|0|0||||
|0|80BBB5C|80BB0E0|0|0||||
|0|80BBDD0|80BB354|0|0||||
|0|80BBFAC|80BB530|0|0||||
|0|80BC8B8|80BBEB0|0|0||||
|0|80BCD00|80BC2D8|0|0||||
|0|80BD19C|80BC790|0|0||||
|0|80BD36C|80BC960|0|0||||
|0|80BD3B0|80BC9B8|0|0||||
|0|80BD98C|80BCE34|0|0||||
|0|80BD9B8|80BCE60|0|0||||
|0|80BDC2C|80BD0D4|0|0||||
|0|80BDD34|80BD1DC|0|0||||
|0|80BDEBC|80BD364|0|0||||
|0|80BE04C|80BD4F4|0|0||||
|0|80BE0B4|80BD570|0|0||||
|0|80BE1DC|80BD698|0|0||||
|0|80BE2A8|80BD764|0|0||||
|8019B38|801A8B4|801A4D4|0|0||||
|0|80A9090|80A817C|0|0||||
|0|800D044|800D134|0|0||||
|0|8030E80|8030994|0|0||||
|0|807EA0C|807DC5C|0|0||||
|0|808F3BC|808EA80|0|0||||
|8069098|8076460|8075C90|0|0||||
|0|8018D70|8018980|0|0||||
|0|8020144|801FCDC|0|0||||
|0|800B2CC|800B390|0|0||||
|0|806DB6C|806D380|0|0||||
|0|80B4208|80B33D0|0|0||||
|0|800E854|800E948|0|0||||
|0|801DF68|801DBC4|0|0||||
|8096234|80B1630|80B0808|0|0||||
|80966C4|80B1AC4|80B0C9C|0|0||||
|0|8079DF4|8079624|0|0||||
|0|80842F8|80838FC|0|0||||
|803D4D0|8045D44|8045558|0|0||||
|0|807FD9C|807EFD4|0|0||||
|0|808F834|808EEF8|0|0||||
|0|801BE04|801BA54|0|0||||
|0|80A69EC|80A5D2C|0|0||||
|0|800BF68|800C058|0|0||||
|0|800C06C|800C15C|0|0||||
|0|800CFA8|800D098|0|0||||
|0|80926F0|8091DBC|0|0||||
|0|8097AB0|8097324|0|0||||
|0|80A88B8|80A79A4|0|0||||
|0|80A8B98|80A7C84|0|0||||
|0|80B1ED4|80B10AC|0|0||||
|801A210|801B040|801AC60|0|0||||
|801B7D0|801CE3C|801CA38|0|0||||
|0|807AFCC|807A558|0|0||||
|0|809C0C8|809B700|0|0||||
|0|80B7A74|80B6C8C|0|0||||
|0|8056618|8055E30|0|0||||
|805CC80|8068E40|8068654|0|0||||
|0|80BD0B4|80BC6A8|0|0||||
|0|800EFD4|800F0C8|0|0||||
|0|8031440|8030F54|0|0||||
|805CD04|8068EC4|80686D8|0|0||||
|8062E94|80700FC|806F910|0|0||||
|8067B08|8074D50|8074554|0|0||||
|0|8093948|809303C|0|0||||
|0|80AD058|80AC174|0|0||||
|0|80B549C|80B467C|0|0||||
|0|800B244|800B308|0|0||||
|0|800D994|800DA88|0|0||||
|0|8078688|8077EB8|0|0||||
|0|80B86C0|80B78DC|0|0||||
|0|800D5E8|800D6D8|0|0||||
|0|800DE98|800DF8C|0|0||||
|0|805B404|805AC1C|0|0||||
|80556F8|805E3EC|805DC04|0|0||||
|8067920|8074B68|807436C|8081070|807ED30|MapAnimLevelUp_GetActorStatBase|int MapAnimLevelUp_GetActorStatBase(int a1, int a2)||
|0|8093F88|8093690|0|0||||
|8070F64|8083088|808263C|0|0||||
|0|8025BB0|8025724|0|0||||
|0|800C16C|800C25C|0|0||||
|0|800C214|800C304|0|0||||
|0|800C54C|800C63C|0|0||||
|0|800EB4C|800EC40|0|0||||
|0|800F9FC|800FAF0|0|0||||
|0|800FDD8|800FD90|0|0||||
|8034BF0|803BFF4|803BB40|0|0||||
|8064DF8|8072074|8071888|0|0||||
|806A270|807755C|8076D8C|0|0||||
|0|807CFEC|807C578|0|0||||
|0|807DF88|807D368|0|0||||
|0|807EF7C|807E1C0|0|0||||
|0|808F970|808F034|0|0||||
|80640D0|807134C|8070B60|0|0||||
|0|800D8FC|800D9F0|0|0||||
|0|800F188|800F27C|0|0||||
|801B3FC|801C980|801C57C|0|0||||
|0|804BD8C|804B5B0|0|0||||
|0|804C7C4|804BFE8|0|0||||
|0|805AC14|805A42C|0|0||||
|0|80656D8|8064EE8|0|0|FireDragonBGAnimation5|void FireDragonBGAnimation5(_6CStruct *ctx)||
|805F9B8|806C4A0|806BCB4|0|0||||
|0|80873B4|80869C8|0|0||||
|0|80ACEE4|80AC000|0|0||||
|0|80AEDC0|80ADEA8|0|0||||
|8095034|80B04EC|80AF69C|0|0||||
|0|80BE0CC|80BD588|0|0||||
|0|80605E0|805FDF8|0|0||||
|0|800D510|800D600|0|0||||
|0|800D57C|800D66C|0|0||||
|0|800D774|800D868|0|0||||
|0|800DBD4|800DCC8|0|0||||
|0|800DD08|800DDFC|0|0||||
|806D35C|807A528|8079AB4|0|0||||
|0|807A590|8079B1C|0|0||||
|0|8090244|808F904|0|0||||
|8097180|80B27D8|80B19AC|0|0||||
|0|800F278|800F36C|0|0||||
|0|800F3A0|800F494|0|0||||
|0|800FEC8|800FE80|0|0||||
|0|8010BF4|80107A4|0|0||||
|8024E68|802984C|802939C|0|0|handleWeaponEffect|void handleWeaponEffect(u8 dataAttacker[], u8 dataDefender[])||
|0|80387D0|803831C|0|0||||
|8060748|806D2E4|806CAF8|0|0||||
|0|807F104|807E348|0|0||||
|807B90C|80897E0|8088E80|0|0||||
|0|8096708|8095F14|0|0||||
|0|809F40C|809E9FC|0|0||||
|808C390|80AEAA4|80ADB8C|0|0||||
|8094F94|80B044C|80AF5FC|0|0||||
|0|800B9E8|800BA90|0|0||||
|0|800BBB0|800BCA0|0|0||||
|806CD78|800DDA4|800DE98|0|0||||
|0|800E800|800E8F4|0|0||||
|0|800F850|800F944|0|0||||
|0|80185C0|80181D0|0|0||||
|0|801FBD8|801F770|0|0||||
|0|801FCD0|801F868|0|0||||
|802BCF4|8031C6C|8031700|0|0||||
|0|8043F74|8043798|0|0||||
|0|80582B8|8057AD0|0|0||||
|0|805B09C|805A8B4|0|0||||
|0|805B384|805AB9C|0|0||||
|8060504|806D08C|806C8A0|0|0||||
|0|807D370|807C8FC|0|0||||
|8073688|8087230|8086844|0|0||||
|0|80872A4|80868B8|0|0||||
|0|80BCEBC|80BC494|0|0||||
|0|80BDBE4|80BD08C|0|0||||
|0|8017B78|8017788|0|0||||
|8002234|800235C|8002384|0|0||||
|0|800B63C|800B700|0|0||||
|0|800C4C0|800C5B0|0|0||||
|0|800CF2C|800D01C|0|0||||
|0|800DF64|800E058|0|0||||
|0|800E00C|800E100|0|0||||
|0|80308E8|8030420|0|0||||
|804549C|804E6D0|804DEF4|0|0||||
|0|804EA10|804E234|0|0||||
|0|804FDB0|804F5D4|0|0||||
|80528CC|805C2B4|805BACC|0|0||||
|8054EF8|805DB84|805D39C|0|0||||
|805873C|8065010|8064828|0|0||||
|0|8065AB0|80652C0|0|0|FireDragonBGAnimation9|void FireDragonBGAnimation9(_6CStruct *ctx)||
|0|8066500|8065D10|0|0||||
|0|80797D4|8079004|0|0||||
|0|807C464|807B9F0|0|0||||
|806D028|807DEC0|807D2B0|0|0||||
|0|807EC58|807DEA8|0|0||||
|0|8090148|808F808|0|0||||
|0|8099A20|8099068|0|0||||
|0|809D648|809CC30|0|0||||
|80860A4|80A245C|80A1AC8|0|0||||
|0|80AC42C|80AB548|0|0||||
|0|80B1908|80B0AE0|0|0||||
|0|80B217C|80B1354|0|0||||
|0|80B4B58|80B3D20|0|0||||
|0|8077E50|8077680|0|0||||
|0|807E854|807DAC4|0|0||||
|80026BC|8002A44|8002A6C|0|0||||
|8003434|80039D4|8003AF8|0|0||||
|0|8003A68|8003B8C|0|0||||
|0|8003BFC|8003D20|0|0||||
|800DE3C|800B200|800B2C4|0|0||||
|0|800B494|800B558|0|0||||
|0|800B5AC|800B670|0|0||||
|0|800D22C|800D31C|0|0||||
|0|800D2E4|800D3D4|0|0||||
|0|800DB18|800DC0C|0|0||||
|0|800E71C|800E810|0|0||||
|800E120|80104D4|8010064|0|0||||
|0|802ED30|802E864|0|0||||
|802B1D4|8030D88|803089C|0|0||||
|0|804EA54|804E278|0|0||||
|80481CC|80516A8|8050ECC|0|0||||
|805238C|805BD74|805B58C|0|0||||
|0|8066640|8065E54|0|0||||
|0|8066D40|8066554|0|0||||
|8061554|806E76C|806DF80|0|0||||
|0|807C384|807B910|0|0||||
|0|807E340|807D60C|0|0||||
|8058F00|807E908|807DB74|0|0||||
|80763D8|808B5E4|808AC90|0|0||||
|0|808F8D0|808EF94|0|0||||
|808A7B8|80A6EF8|80A6238|0|0||||
|0|80A93A0|80A848C|0|0||||
|0|80AEEB8|80ADFA0|0|0||||
|0|80B4C58|80B3E20|0|0||||
|0|80B916C|80B84D0|0|0||||
|0|80BD48C|80BCA94|0|0||||
|8002910|8002CD8|8002DFC|0|0||||
|0|8029224|8028D74|0|0||||
|0|80ACA44|80ABB60|0|0||||
|0|8079C34|8079464|0|0||||
|80028DC|8002CA4|8002DC8|0|0||||
|0|800AE34|800AE8C|0|0||||
|0|800B9B8|800BA60|0|0||||
|0|800BC98|800BDD4|0|0||||
|0|800BD84|800BE74|0|0||||
|0|800D2B0|800D3A0|0|0||||
|0|800F63C|800F730|0|0||||
|0|800F7D0|800F8C4|0|0||||
|0|800F810|800F904|0|0||||
|0|8011628|80111D8|0|0|fubuki2|void fubuki2(_6CStruct *ctx)||
|0|80116F0|80112A0|0|0|fubuki4|void fubuki4(_6CStruct *ctx)||
|0|8011E48|80117B0|0|0||||
|0|801B8FC|801B528|0|0||||
|801D03C|801E94C|801E5C8|0|0||||
|0|8020CB0|8020848|0|0||||
|8024D60|8029714|8029264|0|0|calculateBattleDamage|void calculateBattleDamage(u8 battleData[])|战斗中计算实际伤害<br>addr=战斗数据基址<br>203A3EC 我方<br>203A46C 对方|
|0|802FD68|802F89C|0|0||||
|8048244|8051720|8050F44|0|0||||
|8050A70|805A29C|8059AB4|0|0||||
|8025C18|805AE68|805A680|0|0||||
|0|805B52C|805AD44|0|0||||
|8052878|805C260|805BA78|0|0||||
|0|806037C|805FB94|0|0||||
|0|8060414|805FC2C|0|0||||
|8056B28|8062D88|80625A0|0|0||||
|80572EC|806355C|8062D74|0|0||||
|0|8065660|8064E70|0|0|FireDragonBGAnimation4|void FireDragonBGAnimation4(_6CStruct *ctx)||
|0|80657D4|8064FE4|0|0|FireDragonBGAnimation7|void FireDragonBGAnimation7(_6CStruct *ctx)||
|0|80658F8|8065108|0|0|FireDragonBGAnimation8|void FireDragonBGAnimation8(_6CStruct *ctx)||
|805DCB4|8069E64|8069684|0|0||||
|0|806DF58|806D76C|0|0||||
|8065830|8072AAC|80722C0|0|0||||
|8065994|8072C10|8072424|0|0||||
|802D1A8|807B158|807A6E4|0|0||||
|806C950|807B1E0|807A76C|0|0||||
|0|807BC9C|807B228|0|0||||
|8074084|807BDC8|807B354|0|0||||
|0|807C108|807B694|0|0||||
|0|807C3E8|807B974|0|0||||
|0|807D9FC|807CF7C|0|0||||
|0|807DD54|807D210|0|0||||
|0|807DFF4|807D3D4|0|0||||
|0|807E7F8|807DA68|0|0||||
|0|807F238|807E47C|0|0||||
|0|807FA64|807ECA8|0|0||||
|0|8087B98|80871E0|0|0||||
|0|8087C6C|80872B4|0|0||||
|0|809AF38|809A560|80A3E24|0||||
|0|80A58C4|80A4BD8|0|0||||
|0|80A8FD8|80A80C4|0|0||||
|0|80A9338|80A8424|0|0||||
|0|80AC490|80AB5AC|0|0||||
|0|80B50F4|80B42D4|0|0||||
|0|80B5CA8|80B4E88|0|0||||
|0|80B5EE4|80B50C4|0|0||||
|0|80B8084|80B72D8|0|0||||
|0|80B8260|80B74B4|0|0||||
|80524A8|80B89C0|80B7BDC|0|0||||
|0|80B8AB4|80B7CD0|0|0||||
|0|80B94A0|80B8874|0|0||||
|0|80BDCC0|80BD168|0|0||||
|0|80BDCFC|80BD1A4|0|0||||
|8041358|804A4CC|8049CE4|0|0||||
|806B650|8079A94|80792C4|0|0||||
|0|8066AE0|80662F4|0|0||||
|80278A0|802CC2C|802C76C|0|0||||
|0|807E0D4|807D448|0|0||||
|8000C88|8000C80|8000CA8|0|0||||
|8002DC4|8003214|8003338|0|0||||
|80032F0|8003858|800397C|0|0||||
|800E088|800B3DC|800B4A0|0|0||||
|800E200|800B5F0|800B6B4|0|0||||
|8013754|800B8CC|800B974|0|0||||
|0|800BA34|800BADC|0|0||||
|800E5A8|800BA5C|800BB04|0|0||||
|8024844|800BA8C|800BB34|0|0||||
|0|800BC48|800BD84|0|0||||
|806B500|800CC74|800CD64|0|0||||
|8071BC0|800CCB8|800CDA8|0|0||||
|80815E4|800CD90|800CE80|0|0||||
|0|800D28C|800D37C|0|0||||
|801F5A0|800D7CC|800D8C0|0|0||||
|0|800DE5C|800DF50|0|0||||
|80104F0|800E25C|800E350|0|0||||
|0|800E390|800E484|0|0||||
|0|800E3B4|800E4A8|0|0||||
|8010608|800E3DC|800E4D0|0|0||||
|0|800E40C|800E500|0|0||||
|8071B80|800EA9C|800EB90|0|0||||
|0|800EAE4|800EBD8|0|0||||
|0|800ECB8|800EDAC|0|0||||
|0|800F2E0|800F3D4|0|0||||
|0|800F330|800F424|0|0||||
|0|800F3F8|800F4EC|0|0||||
|0|800F44C|800F540|0|0||||
|0|800FC6C|800FD60|0|0||||
|0|8010404|800FF94|0|0||||
|0|8010440|800FFD0|0|0||||
|0|8010CB0|8010860|0|0||||
|0|80117AC|801135C|0|0|eventCodeFunc_DF|signed int eventCodeFunc_DF(_6CStruct *parent)|parent = 0x2025330|
|0|8011AFC|8011464|0|0||||
|0|8011EC0|8011828|0|0||||
|8012428|8012378|8011CE0|0|0||||
|0|8012440|8011DAC|0|0||||
|0|8015840|80153C4|0|0||||
|0|8015940|80154C4|0|0||||
|0|801BF24|801BB74|0|0||||
|0|8021820|80213A8|0|0||||
|0|8030814|803034C|0|0||||
|0|8030DFC|8030910|0|0||||
|802BCAC|8031C24|80316B8|0|0||||
|802D2C8|8033494|8032F64|0|0||||
|8038C04|80403D0|803FCC4|0|0||||
|803C060|8043918|8043170|0|0||||
|803F938|8048244|8047A58|0|0||||
|8045A70|804EBC0|804E3E4|0|0||||
|0|80501E4|804FA08|0|0||||
|8047A1C|8050D38|805055C|0|0||||
|8048EEC|80523C0|8051BE4|0|0||||
|8048FD0|80524A4|8051CC8|0|0||||
|804EC04|8058778|8057F90|0|0||||
|80558D4|805E5C8|805DDE0|0|0||||
|8057F60|8064834|806404C|0|0||||
|805FC54|806C7CC|806BFE0|0|0||||
|8061838|806EAE8|806E2FC|0|0||||
|8063848|8070AC4|80702D8|0|0||||
|8067E84|8075224|8074A28|0|0||||
|80684EC|80758AC|80750DC|0|0||||
|8068578|8075938|8075168|0|0||||
|8068ADC|8075E9C|80756CC|0|0||||
|8069504|80768F4|8076124|0|0||||
|806AED8|8079158|8078988|0|0||||
|806AF4C|80791CC|80789FC|0|0||||
|0|807D534|807CAC0|0|0||||
|0|807D668|807CBE4|0|0||||
|0|807E514|807D7E0|0|0||||
|0|807ECD4|807DF24|0|0||||
|0|807F16C|807E3B0|0|0||||
|0|807F550|807E794|0|0||||
|0|807F590|807E7D4|0|0||||
|80718E0|8083B80|8083180|0|0||||
|0|8084068|8083668|0|0||||
|0|808EDB0|808E46C|0|0||||
|0|8093B5C|8093250|0|0||||
|0|809B5F8|809AC20|0|0||||
|0|809B7BC|809ADE4|0|0||||
|0|809BB58|809B184|0|0||||
|0|809C980|809BFCC|0|0||||
|0|809DEEC|809D4D4|0|0||||
|80846F0|809F468|809EA58|0|0||||
|0|80A5A40|80A4D54|0|0||||
|0|80A8304|80A73F8|0|0||||
|0|80A84D8|80A75CC|0|0||||
|0|80A9538|80A8624|0|0||||
|807061C|80AB5FC|80AA734|0|0||||
|0|80AD738|80AC860|0|0||||
|8095100|80B05B8|80AF768|0|0||||
|8095138|80B05F0|80AF7A0|80CEA84|0||||
|80951A4|80B065C|80AF80C|0|0||||
|8095FC4|80B13B0|80B0588|0|0||||
|8095FF8|80B13E4|80B05BC|0|0||||
|80960D4|80B14D0|80B06A8|0|0||||
|8096164|80B1560|80B0738|0|0||||
|8096AFC|80B2140|80B1318|0|0||||
|8097444|80B2A9C|80B1C70|0|0||||
|0|80B2B64|80B1D40|0|0||||
|0|80B4A50|80B3C18|0|0||||
|0|80B56B0|80B4890|0|0||||
|0|80B8054|80B72A8|0|0||||
|0|80B8BF8|80B7E20|0|0||||
|0|80B8ECC|80B8230|0|0||||
|0|80A17F2|80A0E6A|0|0||||
|8068704|8075AC4|80752F4|0|0||||
|806B6B0|8079AF0|8079320|0|0||||
|0|8079B38|8079368|0|0||||
|0|8079B80|80793B0|0|0||||
|806B6F8|8079BC8|80793F8|0|0||||
|0|80AB8FC|80AAA34|0|0||||
|0|800B06C|800B130|0|0||||
|800DBF4|800B0BC|800B180|0|0||||
|0|800B0D4|800B198|0|0||||
|0|800D894|800D988|0|0||||
|0|800DA64|800DB58|0|0||||
|0|800DAF4|800DBE8|0|0||||
|800FFEC|800DCD4|800DDC8|0|0||||
|0|800EC40|800ED34|0|0||||
|0|800FC40|800FD34|0|0||||
|0|8010A70|801060C|0|0||||
|0|8010D88|8010938|0|0||||
|0|8010EEC|8010A9C|0|0||||
|0|8011130|8010CE0|0|0||||
|0|801135C|8010F0C|0|0||||
|0|80116A8|8011258|0|0|fubuki3|void fubuki3(_6CStruct *ctx)||
|0|8011BD4|801153C|0|0||||
|0|8011C08|8011570|0|0||||
|0|8011C38|80115A0|0|0||||
|0|8011DD8|8011740|0|0||||
|0|8012D4C|80126D0|0|0||||
|806E714|80130C0|8012A08|0|0||||
|801D078|801E98C|801E608|0|0||||
|0|801FC6C|801F804|0|0||||
|806D000|801FD78|801F910|0|0||||
|801E1F8|801FEF0|801FA88|0|0||||
|0|8020BF4|802078C|0|0||||
|801F328|802216C|8021CF4|0|0||||
|8028E28|802E310|802DE50|0|0||||
|802B768|80313B8|8030ECC|0|0||||
|0|8032CDC|80327AC|0|0||||
|802CFB8|8033170|8032C40|0|0||||
|803F714|8048020|8047834|0|0||||
|803FBC4|80484E4|8047CF8|0|0||||
|8046810|804F88C|804F0B0|0|0||||
|8046994|804FA10|804F234|0|0||||
|8046F18|804FFEC|804F810|0|0||||
|804FFD8|8059B4C|8059364|0|0||||
|8050038|8059BAC|80593C4|0|0||||
|80540A0|805CD04|805C51C|0|0||||
|80544D8|805D158|805C970|0|0||||
|8055084|805DD10|805D528|0|0||||
|80563E0|805F0C0|805E8D8|0|0||||
|8056AD8|8062D38|8062550|0|0||||
|8058824|80650F8|8064910|0|0||||
|0|8065328|8064B38|0|0||||
|0|806546C|8064C7C|8086848|0|RunPlayerPhaseStartTutorialEvent|int RunPlayerPhaseStartTutorialEvent(int a1)||
|0|8065C14|8065424|0|0|FireDragonBGAnimation12|void FireDragonBGAnimation12(_6CStruct *ctx)||
|805A7C0|8065F0C|806571C|0|0||||
|0|8065F98|80657A8|0|0||||
|0|8065FEC|80657FC|0|0||||
|805A6DC|8066828|806603C|0|0||||
|0|8066DD8|80665EC|0|0||||
|805CEE0|80690A0|80688B4|0|0||||
|805D0E0|80692A0|8068AB4|0|0||||
|0|806B5F8|806AE18|0|0||||
|0|806BF10|806B724|0|0||||
|805FCB4|806C82C|806C040|0|0||||
|0|806DFF0|806D804|0|0||||
|0|806E204|806DA18|0|0||||
|8061D00|806EFB0|806E7C4|0|0||||
|80633B0|8070620|806FE34|0|0||||
|0|8070828|807003C|0|0||||
|806376C|80709E8|80701FC|0|0||||
|8064FD0|807224C|8071A60|0|0||||
|80651E0|807245C|8071C70|0|0||||
|80669BC|8073C24|8073438|0|0||||
|8066A48|8073CB0|80734C4|0|0||||
|80672B0|80744F8|8073D0C|0|0||||
|80680F0|807549C|8074CA0|0|0||||
|8068164|8075510|8074D14|0|0||||
|8069794|8076B84|80763B4|0|0||||
|8069AB4|8076EA8|80766D8|0|0||||
|806B540|8079950|8079180|0|0||||
|0|807A6BC|8079C48|0|0||||
|806C9F8|807B228|807A7B4|0|0||||
|0|807B778|807AD04|0|0||||
|0|807BAE4|807B070|0|0||||
|0|807BF08|807B494|0|0||||
|0|807C7E8|807BD74|0|0||||
|0|807CF94|807C520|0|0||||
|0|807D088|807C614|0|0||||
|0|807D140|807C6CC|0|0|IceCrystal1|void IceCrystal1(_6CStruct *ctx)||
|0|807D284|807C810|0|0|IceCrystal5|void IceCrystal5(_6CStruct *ctx)||
|0|807D6BC|807CC38|0|0||||
|0|807D6E0|807CC5C|0|0||||
|0|807D7D0|807CD4C|0|0||||
|803782C|807D870|807CDEC|0|0||||
|806C2F8|807DA28|807CFA8|0|0||||
|0|807E4E8|807D7B4|0|0||||
|0|807E5E0|807D890|0|0||||
|0|807E624|807D8D4|0|0||||
|0|807E71C|807D9CC|0|0||||
|0|807F1DC|807E420|0|0||||
|0|807F78C|807E9D0|0|0||||
|0|807F9EC|807EC30|0|0||||
|0|80800E0|807F328|0|0||||
|0|808034C|807F594|0|0||||
|0|8080480|807F6C8|0|0||||
|806F688|8081554|80807F8|0|0||||
|806F780|808164C|80808F0|0|0||||
|0|808E4FC|808DBBC|0|0||||
|0|808EF10|808E5C8|0|0||||
|0|808EF6C|808E630|0|0||||
|8082AD8|809163C|8090CF8|0|0||||
|0|8093478|8092B6C|0|0||||
|0|809ADDC|809A404|0|0||||
|0|809CAFC|809C12C|0|0||||
|0|809DCEC|809D2D4|0|0||||
|0|809DE40|809D428|0|0||||
|0|80A38A4|80A2C30|0|0||||
|805A584|80A5A80|80A4D94|0|0||||
|0|80A7388|80A66C4|0|0||||
|0|80A739C|80A66D8|0|0||||
|0|80A76FC|80A6A14|0|0||||
|0|80A8A90|80A7B7C|0|0||||
|0|80A8AAC|80A7B98|0|0|Call89A2938_PlaySound2|int Call89A2938_PlaySound2(int a1)||
|0|80A8AF0|80A7BDC|0|0||||
|0|80A8B38|80A7C24|0|0||||
|0|80A8B80|80A7C6C|0|0||||
|0|80A9590|80A867C|0|0||||
|0|80AA0E4|80A91D0|0|0||||
|0|80AA1BC|80A92A8|0|0||||
|0|80AAB3C|80A9C60|0|0||||
|0|80AB634|80AA76C|0|0||||
|808DE70|80AD688|80AC7B0|0|0||||
|0|80AD754|80AC87C|0|0||||
|8094B28|80B0048|80AF234|0|0||||
|8096AC4|80B2108|80B12E0|0|0||||
|0|80B3968|80B2B44|0|0||||
|0|80B4534|80B36FC|0|0||||
|0|80B4558|80B3720|0|0||||
|0|80B4CD0|80B3E98|0|0||||
|0|80B5558|80B4738|0|0||||
|0|80B5724|80B4904|0|0||||
|0|80B59AC|80B4B8C|0|0||||
|0|80B5A80|80B4C60|0|0||||
|0|80B5DBC|80B4F9C|0|0||||
|0|80B6B60|80B5D40|0|0||||
|0|80B6F9C|80B6190|0|0||||
|0|80B7BCC|80B6DE4|0|0||||
|0|80B7C10|80B6E28|0|0||||
|0|80B7F54|80B71A8|0|0||||
|0|80B7FA0|80B71F4|0|0||||
|0|80B8010|80B7264|0|0||||
|0|80B80E0|80B7334|0|0||||
|0|80B8418|80B766C|0|0||||
|800AEA0|80B88FC|80B7B18|0|0||||
|0|80B97A0|80B8C40|0|0||||
|0|80B9B80|80B9020|0|0||||
|0|80BAEFC|80BA3F4|0|0||||
|0|80BC448|80BBA3C|0|0||||
|0|80BC53C|80BBB30|0|0||||
|0|80BCACC|80BC0C4|0|0||||
|0|80BD2CC|80BC8C0|0|0||||
|0|80BDB40|80BCFE8|0|0||||
|0|80A87A4|80A7890|0|0||||
|8063EF0|807116C|8070980|0|0||||
|0|8001534|800155C|0|0||||
|0|80015FC|8001624|0|0||||
|0|800D384|800D474|0|0||||
|806B2AC|8079624|8078E54|0|0||||
|0|802BF58|802BA98|0|0||||
|0|8017FB0|8017BC0|0|0||||
|0|8053B98|80533B0|0|0||||
|0|8060C2C|8060444|0|0||||
|805FEC8|806CA48|806C25C|0|0||||
|0|80B49A8|80B3B70|0|0||||
|8095E90|80B127C|80B0454|0|0||||
|8026AE0|802BF30|802BA70|0|0||||
|0|808FDE8|808F4A8|0|0||||
|0|809BB30|809B15C|0|0||||
|0|80A1050|80A06C4|0|0||||
|8085CE0|80A2054|80A16C0|0|0||||
|0|80B3F48|80B3124|0|0||||
|0|800E65C|800E750|0|0||||
|0|800E698|800E78C|0|0||||
|0|800EE60|800EF54|0|0||||
|0|8017974|8017584|0|0||||
|802A30C|802F92C|802F460|0|0||||
|0|80654C8|8064CD8|0|0||||
|0|80B69A0|80B5B80|0|0||||
|8097354|80B29AC|80B1B80|0|0||||
|0|807A1E4|8079A14|0|0||||
|0|8091C60|8091324|0|0||||
|807D0A8|80AD9D0|80ACAF8|0|0||||
|0|80B4170|80B3338|0|0||||
|0|80B8C38|80B7ED4|0|0||||
|8052238|805BC20|805B438|0|0||||
|8062890|806FAF8|806F30C|0|0||||
|0|800F384|800F478|0|0||||
|0|80104B8|8010048|0|0||||
|0|80120E0|8011A48|0|0||||
|8068524|80758E4|8075114|0|0||||
|80685B0|8075970|80751A0|0|0||||
|0|807B3D0|807A95C|0|0||||
|0|807B400|807A98C|0|0||||
|80970BC|80B2714|80B18E8|0|0||||
|80972AC|80B2904|80B1AD8|0|0||||
|0|800CB6C|800CC5C|0|0||||
|0|800E628|800E71C|0|0||||
|80526F4|805C0DC|805B8F4|0|0||||
|0|807DCD0|807D18C|0|0||||
|0|809F4C8|809EAB8|0|0||||
|0|80B6250|80B5430|0|0||||
|8011F64|8000B88|8000BB0|0|0||||
|8000E98|8000E98|8000EC0|0|0||||
|8001010|8001010|8001038|0|0||||
|8001688|8001920|8001948|0|0||||
|80016D0|8001968|8001990|0|0||||
|8001934|8001BF4|8001C1C|0|0||||
|8001968|8001C28|8001C50|0|0||||
|0|8001CC4|8001CEC|0|0||||
|8001AE4|8001E6C|8001E94|0|0||||
|8001B18|8001EA0|8001EC8|0|0||||
|0|800473C|8004860|0|0||||
|0|8004A48|8004B6C|0|0||||
|0|800542C|800555C|0|0||||
|0|8006A54|8006BC4|0|0||||
|0|8009F08|800A078|0|0||||
|0|800A7C0|800A7BC|0|0||||
|0|800A7D0|800A7CC|0|0||||
|0|800A9C0|800AA18|0|0||||
|809A0E0|800B148|800B20C|0|0||||
|0|800D278|800D368|0|0||||
|0|800D87C|800D970|0|0||||
|0|800E510|800E604|0|0||||
|0|800FDC4|800FD7C|0|0||||
|809AD3C|8010ACC|8010668|0|0||||
|0|8011B4C|80114B4|0|0||||
|8073598|80130E8|8012A30|0|0||||
|0|8013228|8012B70|0|0||||
|0|80132AC|8012BF4|0|0||||
|0|80132C8|8012C10|0|0||||
|80144A0|80142A8|8013D88|0|0||||
|801456C|8014374|8013E54|0|0||||
|801459C|80143A4|8013E84|0|0||||
|8014B68|8014970|8014450|0|0||||
|801577C|8015584|8015108|0|0||||
|8017BDC|8018280|8017E90|0|0||||
|801E1A0|801FE98|801FA30|0|0||||
|0|802C03C|802BB7C|0|0||||
|8025E28|802FAB4|802F5E8|0|0||||
|8031764|80384E4|8038030|0|0||||
|8035880|803CD9C|803C8E8|0|0||||
|80369A0|803DEE0|803DA30|0|0||||
|8036E14|803E358|803DEA8|0|0||||
|803BF8C|8043840|8043130|0|0||||
|803ECA8|80475A8|8046DC0|0|0||||
|803EFB4|80478BC|80470D0|0|0||||
|803F2BC|8047BC4|80473D8|0|0||||
|803F5AC|8047EB4|80476C8|0|0||||
|8040C00|804954C|8048D64|0|0||||
|80420B4|804B4A8|804ACCC|0|0||||
|8043448|804C788|804BFAC|0|0||||
|804A528|8053AA8|80532C0|8059810|80589E0|transformateBattleAnimation|void transformateBattleAnimation(AnimationInterpreter *AIS, __int16 animationID)||
|804A5C0|8053B40|8053358|0|0||||
|8055434|805E0C4|805D8DC|0|0||||
|0|8065288|8064ABC|0|0|getSpecialAnimationEffectInfoType|int getSpecialAnimationEffectInfoType(AnimationInterpreter *AIS)||
|805FC18|806C790|806BFA4|0|0||||
|805FC80|806C7F8|806C00C|0|0||||
|805FE3C|806C9BC|806C1D0|0|0||||
|806113C|806E334|806DB48|0|0||||
|0|806E450|806DC64|0|0||||
|8061360|806E564|806DD78|0|0||||
|8061474|806E678|806DE8C|0|0||||
|0|806E698|806DEAC|0|0||||
|80627D0|806FA28|806F23C|0|0||||
|80632C4|8070534|806FD48|0|0||||
|806367C|80708F8|807010C|0|0||||
|8067D2C|80750CC|80748D0|0|0||||
|8067E50|80751F0|80749F4|0|0||||
|8068048|80753F4|8074BF8|0|0||||
|8068C28|8075FF0|8075820|0|0||||
|8069A40|8076E34|8076664|0|0||||
|806A770|8077BE0|8077410|0|0||||
|0|8077E1C|807764C|0|0||||
|0|8078894|80780C4|0|0||||
|806A8AC|80788D0|8078100|0|0||||
|806AF08|8079188|80789B8|0|0||||
|806B254|80795CC|8078DFC|0|0||||
|0|807AE2C|807A3B8|0|0||||
|0|807B4E8|807AA74|0|0||||
|0|807C58C|807BB18|0|0||||
|0|807CBD0|807C15C|0|0||||
|0|807DE3C|807D26C|0|0||||
|0|807E414|807D6E0|0|0||||
|0|807E428|807D6F4|0|0||||
|0|807F198|807E3DC|0|0||||
|0|807F62C|807E870|0|0||||
|0|807F7BC|807EA00|0|0||||
|0|807F918|807EB5C|0|0||||
|0|807F9A0|807EBE4|0|0||||
|0|807FF9C|807F1E4|0|0||||
|8074804|8089B34|80891D4|0|0||||
|0|8091C90|8091354|0|0||||
|0|809E190|809D778|0|0||||
|0|809FADC|809F0A0|0|0||||
|0|809FAF4|809F0B8|0|0||||
|80848C8|80A04FC|809FB30|0|0||||
|0|80A5868|80A4B7C|0|0||||
|0|80A8880|80A796C|0|0||||
|809517C|80B0634|80AF7E4|0|0||||
|809525C|80B0714|80AF8C4|0|0||||
|8095F5C|80B1348|80B0520|0|0||||
|0|80B1E24|80B0FFC|0|0||||
|80977C0|80B2DD4|80B1FB0|0|0||||
|8097AC4|80B30E0|80B22BC|0|0||||
|806C68C|80B3DD4|80B2FB0|0|0||||
|0|80B44D8|80B36A0|0|0||||
|0|80B4AC8|80B3C90|0|0||||
|0|80B4BF0|80B3DB8|0|0||||
|0|80B4CB0|80B3E78|0|0||||
|0|80B5648|80B4828|0|0||||
|0|80B6240|80B5420|0|0||||
|0|80B6920|80B5B00|0|0||||
|0|80B70A4|80B6298|0|0||||
|0|80B70D0|80B62C4|0|0||||
|0|80B9750|80B8BF0|0|0||||
|0|80B9B1C|80B8FBC|0|0||||
|0|80B9BD4|80B9074|0|0||||
|0|80BB3EC|80BA898|0|0||||
|0|80BB7D8|80BAD7C|0|0||||
|0|80BBAEC|80BB070|0|0||||
|0|80BD358|80BC94C|0|0||||
|0|80BE1D0|80BD68C|0|0||||
|0|800F8BC|800F9B0|0|0||||
|0|800F95C|800FA50|0|0||||
|0|8010550|80100E0|0|0||||
|0|80105A8|8010138|0|0||||
|0|800D7F0|800D8E4|0|0||||
|806AFD0|80792C4|8078AF4|0|0||||
|0|800BAD4|800BBC4|0|0||||
|0|800D3F0|800D524|0|0||||
|0|800D434|800D4E0|0|0||||
|0|80BCFEC|80BC5E0|0|0||||
|8049F1C|8053484|8052C9C|0|0||||
|0|8012150|8011AB8|0|0||||
|8010804|8079210|8078A40|0|0||||
|0|80907C8|808FE88|0|0||||
|0|80B5A48|80B4C28|0|0||||
|0|80B5B34|80B4D14|0|0||||
|806AFD0|8079250|8078A80|0|0||||
|0|8082DB8|8082058|0|0||||
|0|805780C|8057024|805D860|0||||
|0|8062748|8061F60|0|0||||
|0|806D6A0|806CEB4|0|0||||
|0|806D744|806CF58|0|0||||
|806A7AC|8077C1C|807744C|0|0||||
|0|80B980C|80B8CAC|0|0||||
|0|800D31C|800D40C|0|0||||
|0|800D34C|800D43C|0|0||||
|0|8013160|8012AA8|0|0||||
|0|8061290|8060AA8|0|0||||
|0|8061F04|806171C|0|0||||
|0|8078130|8077960|0|0||||
|0|80782AC|8077ADC|0|0||||
|0|8078344|8077B74|0|0||||
|0|80783DC|8077C0C|0|0||||
|0|8078474|8077CA4|0|0||||
|0|807B304|807A890|0|0||||
|0|80A466C|80A39F8|0|0||||
|0|8001D2C|8001D54|0|0||||
|800285C|8002C24|8002D48|0|0||||
|0|8004110|8004234|0|0||||
|8003764|8004158|800427C|0|0||||
|8003820|8004214|8004338|0|0||||
|80038C8|80042BC|80043E0|0|0||||
|0|8004800|8004924|0|0|Interpret6C_18CallRoutineWithArg|int Interpret6C_18CallRoutineWithArg(_6CStruct *_6C)|带参数(sarg)调用函数|
|0|8004E9C|8004FC0|0|0||||
|0|80053E8|8005518|0|0||||
|0|8005774|80058B0|0|0||||
|0|80077E8|8007958|0|0||||
|0|8007824|8007994|0|0||||
|0|8007A00|8007B70|0|0||||
|0|800836C|80084DC|0|0||||
|8092E94|8009080|80091F0|0|0||||
|800B3F8|8009564|80096D4|0|0||||
|0|800A9F4|800AA4C|0|0||||
|0|800AC6C|800ACC4|0|0||||
|0|800ADF8|800AE50|0|0||||
|0|800B70C|800B7D0|0|0||||
|0|800BEEC|800BFDC|0|0||||
|0|800CD68|800CE58|0|0||||
|0|800D168|800D258|0|0||||
|0|800D3E0|800D4D0|0|0||||
|0|800D8BC|800D9B0|0|0||||
|8010104|800DD70|800DE64|0|0||||
|0|800DFE0|800E0D4|0|0||||
|0|800E078|800E16C|0|0||||
|0|800E098|800E18C|0|0||||
|0|800E0B4|800E1A8|0|0||||
|0|800E0D0|800E1C4|0|0||||
|0|800E0F8|800E1EC|0|0||||
|0|800E43C|800E530|0|0||||
|0|800E4C0|800E5B4|0|0||||
|0|800EA44|800EB38|0|0||||
|0|800EA68|800EB5C|0|0||||
|0|800EA7C|800EB70|0|0||||
|8010D70|800EAD4|800EBC8|0|0||||
|0|800EB1C|800EC10|0|0||||
|0|800ED10|800EE04|0|0||||
|0|800EED8|800EFCC|0|0||||
|0|800EEF4|800EFE8|0|0||||
|0|800F200|800F2F4|0|0||||
|0|800F750|800F844|0|0||||
|0|800F790|800F884|0|0||||
|0|800FAB8|800FBAC|0|0||||
|0|80108F0|801048C|0|0||||
|0|80109F4|8010590|0|0||||
|0|80111A8|8010D58|0|0||||
|0|80114A4|8011054|0|0||||
|0|8011568|8011118|0|0|fubuki1|void fubuki1(_6CStruct *ctx)||
|0|801176C|801131C|0|0|fubuki5|void fubuki5()||
|0|8011A24|801138C|0|0||||
|0|8011DF4|801175C|0|0||||
|0|80121FC|8011B64|0|0||||
|0|80125A4|8011F10|0|0||||
|8041F44|8012B64|80124D0|0|0||||
|0|8012CA4|8012610|0|0||||
|0|801309C|80129E4|0|0||||
|0|80157F8|801537C|0|0||||
|801A724|801B7A4|801B3C4|0|0||||
|0|801BC84|801B8D4|0|0||||
|801AABC|801BCB0|801B900|0|0||||
|0|801BCD4|801B924|0|0||||
|801ABE8|801BDC0|801BA10|0|0||||
|801B018|801C2D8|801BF38|0|0||||
|801BD08|801D44C|801D048|0|0||||
|801C2B0|801D920|801D51C|0|0||||
|801D4E8|801EDFC|801EA78|0|0||||
|0|801F9D8|801F570|0|0||||
|801DF34|801FB94|801F72C|0|0||||
|801E220|801FF18|801FAB0|0|0||||
|801E2C0|801FFE0|801FB78|0|0||||
|801E578|8020350|801FEE8|0|0||||
|801E704|80205C0|8020158|0|0||||
|801E9D8|802089C|8020434|0|0||||
|0|8020ECC|8020A64|0|0||||
|0|8021184|8020D18|0|0||||
|0|8021678|802120C|80221D8|0||||
|0|8021F5C|8021AE4|0|0||||
|80205EC|80235B8|802312C|8024300|8024348|StealItemMenuCommand_Draw|int StealItemMenuCommand_Draw(int a1, int a2)||
|80207D8|802377C|80232F0|0|0||||
|8023954|8027BA4|8027718|0|0||||
|8023DC8|8028044|8027BB8|8029A10|8029A84|RepairMenuItemDraw|[int RepairMenuItemDraw(struct MenuProc* menu, struct MenuItemProc* menuItem)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L953)||
|0|802B064|802ABB4|0|0||||
|0|802BBF8|802B738|0|0||||
|0|802E4E8|802E028|0|0||||
|0|802E5B4|802E0F4|0|0||||
|8029240|802E768|802E29C|0|0||||
|80294E0|802EA08|802E53C|0|0||||
|802959C|802EAC4|802E5F8|0|0||||
|0|802EB7C|802E6B0|0|0||||
|0|8030A04|8030518|0|0||||
|0|8030A90|80305A4|0|0||||
|0|8030AB8|80305CC|0|0||||
|802C4A8|8032420|8031EF0|0|0||||
|802CE40|8032FF8|8032AC8|0|0||||
|802CE78|8033030|8032B00|0|0||||
|802D0F4|80332AC|8032D7C|0|0||||
|802D40C|8033624|80330F4|0|0||||
|802DDC0|8034070|8033B98|0|0||||
|8035414|803C930|803C47C|0|0||||
|8036D3C|803E280|803DDD0|0|0||||
|80377E8|803ED34|803E8A0|0|0||||
|8038954|804010C|803FA00|0|0||||
|0|8041D7C|804168C|0|0||||
|0|8043330|8042C58|0|0||||
|803BCD8|8043588|8042E70|0|0||||
|0|8043948|80431AC|0|0||||
|803C578|8044DC0|80445C4|0|0||||
|803DC3C|8046510|8045D24|0|0||||
|803F040|8047948|804715C|0|0||||
|803F068|8047970|8047184|804C784|804B9E4||||
|803F304|8047C0C|8047420|804CA24|804BC84||||
|803F478|8047D80|8047594|804CB9C|804BDFC||||
|803F648|8047F54|8047768|0|0||||
|803FC60|8048590|8047DA4|0|0||||
|803FDD8|8048708|8047F1C|0|0||||
|803FE0C|804873C|8047F50|0|0||||
|803FE48|8048778|8047F8C|0|0||||
|804085C|80491A8|80489C0|0|0||||
|8040880|80491CC|80489E4|0|0||||
|0|80498AC|80490C4|0|0||||
|0|804A7B0|8049FC8|0|0||||
|8041E94|804B100|804A924|0|0||||
|0|804F86C|804F090|0|0||||
|8047DC0|805129C|8050AC0|0|0||||
|804CED4|805683C|8056054|805C8D4|0||||
|8050810|805A040|8059858|8060400|0||||
|805166C|805AF28|805B6A8|0|0||||
|805166C|805BE90|805A740|0|0||||
|8054128|805CD8C|805F9C0|0|0||||
|8054128|80601A8|805C5A4|0|0||||
|0|806030C|805FB24|0|0||||
|804E884|8060D90|8060C18|0|0||||
|0|80625D0|8061DE8|0|0||||
|8056B58|8062DB8|80625D0|0|0||||
|8056BD0|8062E30|8062648|806EB34|0||||
|0|8063E2C|8063644|0|0||||
|0|80642F4|806A064|0|0||||
|805CC64|8064E20|8064638|80714F8|806EF48||||
|8058568|8064E3C|8064654|0|0||||
|0|806553C|8064D4C|0|0|FireDragonBGAnimation1|void FireDragonBGAnimation1(_6CStruct *ctx)||
|0|80655A0|8064DB0|0|0|FireDragonBGAnimation3|void FireDragonBGAnimation3(_6CStruct *ctx)||
|0|8065C34|8065444|0|0|FireDragonBGAnimation13|void FireDragonBGAnimation13(_6CStruct *ctx)||
|0|8065EAC|80656BC|0|0||||
|0|80664CC|8065CDC|0|0||||
|0|80666A4|8065EB8|0|0||||
|805AFA4|80670F8|806690C|0|0||||
|805CDB4|8068F74|8068788|80754AC|8072FD0||||
|805F5C0|806BDE0|806B654|0|0||||
|805F620|806BE40|806B594|0|0||||
|0|806C398|806BBAC|0|0||||
|805FE78|806C9F8|806C20C|0|0||||
|805FF78|806CAF8|806C30C|0|0||||
|80608AC|806D47C|806CC90|0|0||||
|0|806E380|806DB94|0|0||||
|80611FC|806E400|806DC14|0|0||||
|806129C|806E4A0|806DCB4|0|0||||
|8061318|806E51C|806DD30|0|0||||
|8061518|806E730|806DF44|0|0||||
|8061748|806E974|806E188|0|0||||
|806199C|806EC4C|806E460|0|0||||
|8061B10|806EDC0|806E5D4|0|0||||
|8061B80|806EE30|806E644|0|0||||
|8062D64|806FFCC|806F7E0|0|0||||
|8063504|8070774|806FF88|0|0||||
|807B6BC|8070AF8|807030C|0|0||||
|8063CF4|8070F70|8070784|0|0||||
|806495C|8071BD8|80713EC|0|0||||
|8064B20|8071D9C|80715B0|0|0||||
|8064B7C|8071DF8|807160C|0|0||||
|8064BEC|8071E68|807167C|0|0||||
|8064C50|8071ECC|80716E0|0|0||||
|8064CC0|8071F3C|8071750|0|0||||
|8064F4C|80721C8|80719DC|0|0||||
|8065140|80723BC|8071BD0|0|0||||
|80653BC|8072638|8071E4C|0|0||||
|806543C|80726B8|8071ECC|0|0||||
|8065608|8072884|8072098|0|0||||
|8065674|80728F0|8072104|0|0||||
|8065694|8072910|8072124|0|0||||
|80656F0|807296C|8072180|0|0||||
|8065AF8|8072D74|8072588|0|0||||
|8065B90|8072E0C|8072620|0|0||||
|8065C30|8072EAC|80726C0|0|0||||
|8065C9C|8072F18|807272C|0|0||||
|0|8073084|8072898|0|0||||
|80661A4|807340C|8072C20|0|0||||
|8066214|807347C|8072C90|0|0||||
|8066294|80734FC|8072D10|0|0||||
|8066300|8073568|8072D7C|0|0||||
|806631C|8073584|8072D98|0|0||||
|80665E4|807384C|8073060|0|0||||
|806664C|80738B4|80730C8|0|0||||
|806671C|8073984|8073198|0|0||||
|8066784|80739EC|8073200|0|0||||
|80667F0|8073A58|807326C|0|0||||
|8066830|8073A98|80732AC|0|0||||
|806686C|8073AD4|80732E8|0|0||||
|80668D8|8073B40|8073354|0|0||||
|8066AD4|8073D3C|8073550|0|0||||
|8066B3C|8073DA4|80735B8|0|0||||
|8066DFC|8074064|8073878|0|0||||
|8066E64|80740CC|80738E0|0|0||||
|8066FD8|8074240|8073A54|0|0||||
|0|80742A8|8073ABC|0|0||||
|0|80742DC|8073AF0|0|0||||
|8067498|80746E0|8073EF4|0|0||||
|806752C|8074774|8073F88|0|0||||
|8067CF8|8075098|807489C|0|0||||
|8068318|80756D0|8074F00|80817B8|807F478|MapAnimLevelUpProc_StartMusicThingy|int MapAnimLevelUpProc_StartMusicThingy(int a1)||
|80684B8|8075878|80750A8|8081888|807F548||||
|8068938|8075CF8|8075528|0|0||||
|80689F0|8075DB0|80755E0|0|0||||
|8068A1C|8075DDC|807560C|0|0||||
|8069028|80763F0|8075C20|0|0||||
|806984C|8076C40|8076470|0|0||||
|80698BC|8076CB0|80764E0|0|0||||
|80699A4|8076D98|80765C8|0|0||||
|8069B70|8076F68|8076798|0|0||||
|8069DD8|80771D0|8076A00|0|0||||
|806AAEC|8078D3C|807856C|0|0||||
|806AB30|8078D80|80785B0|0|0||||
|0|8079ED4|8079704|0|0||||
|806C3AC|807AE4C|807A3D8|0|0||||
|0|807AFA0|807A52C|0|0||||
|0|807B448|807A9D4|0|0||||
|0|807B478|807AA04|0|0||||
|0|807B8E4|807AE70|0|0||||
|0|807B94C|807AED8|0|0||||
|0|807BA14|807AFA0|0|0||||
|0|807BB48|807B0D4|0|0||||
|0|807BBFC|807B188|0|0||||
|0|807BC80|807B20C|0|0||||
|0|807BD00|807B28C|0|0||||
|0|807BDFC|807B388|0|0||||
|0|807BF5C|807B4E8|0|0||||
|0|807BFEC|807B578|0|0||||
|0|807C170|807B6FC|0|0||||
|0|807C28C|807B818|0|0||||
|0|807C490|807BA1C|0|0||||
|0|807C66C|807BBF8|0|0||||
|0|807C754|807BCE0|0|0||||
|0|807C8DC|807BE68|0|0||||
|0|807C9A4|807BF30|0|0||||
|0|807CA9C|807C028|0|0||||
|0|807CAB8|807C044|0|0||||
|0|807CCCC|807C258|0|0||||
|0|807CE14|807C3A0|0|0||||
|0|807CE90|807C41C|0|0||||
|0|807D0E0|807C66C|0|0||||
|0|807D228|807C7B4|0|0|IceCrystal3|void IceCrystal3(_6CStruct *ctx)||
|0|807D328|807C8B4|0|0||||
|0|807D424|807C9B0|0|0||||
|0|807D4B8|807CA44|0|0||||
|0|807D8E4|807CE60|0|0||||
|0|807D990|807CF10|0|0||||
|0|807D9E8|807CF68|0|0||||
|0|807DBC8|807D0B8|0|0||||
|0|807DE6C|807D29C|0|0||||
|0|807E3BC|807D688|0|0||||
|0|807E694|807D944|0|0||||
|0|807E9A4|807DBF4|0|0||||
|0|807E9C4|807DC14|0|0||||
|0|807EB44|807DD94|0|0||||
|0|807EB80|807DDD0|0|0||||
|0|807EF68|807E1AC|0|0||||
|0|807F1B8|807E3FC|0|0||||
|0|807F7EC|807EA30|0|0||||
|0|807F89C|807EAE0|0|0||||
|0|807F958|807EB9C|0|0||||
|0|807FAFC|807ED40|0|0||||
|0|807FEBC|807F0F4|0|0||||
|0|807FFE4|807F22C|0|0||||
|0|8080090|807F2D8|0|0||||
|0|808014C|807F394|0|0||||
|0|80801D0|807F418|0|0||||
|0|8080228|807F470|0|0||||
|0|80802C4|807F50C|0|0||||
|0|80803D0|807F618|0|0||||
|0|808043C|807F684|0|0||||
|806F8F0|80817C8|8080A6C|0|0||||
|0|8081C40|8080EE4|0|0||||
|806FE80|8081D7C|8081020|0|0||||
|0|8081DE4|8081088|0|0||||
|807022C|8082168|808140C|0|0||||
|8070278|80821B4|8081458|0|0||||
|0|80829E0|8081C80|0|0||||
|0|8082D00|8081FA0|0|0||||
|0|8084608|8083C0C|0|0||||
|0|80850A8|80846AC|0|0||||
|0|80861B4|80857B4|0|0||||
|0|8089B80|8089220|0|0||||
|807B6BC|808F804|808EEC8|0|0||||
|0|808FEE0|808F5A0|0|0||||
|0|809005C|808F71C|0|0||||
|80827D8|809137C|8090A38|8099D84|8097AAC||||
|8082A7C|80915D8|8090C94|0|0||||
|0|8091CC8|809138C|0|0||||
|0|8091D14|80913D8|0|0||||
|0|8092150|8091824|0|0||||
|0|8092310|80919C8|0|0||||
|0|8092A9C|809218C|0|0||||
|0|8092EDC|80925D0|0|0||||
|0|8093004|80926F8|0|0||||
|0|80951FC|809496C|0|0||||
|0|8095FAC|809577C|0|0||||
|0|80960E0|80958B0|0|0||||
|0|80981E0|8097A6C|0|0||||
|0|8098E3C|8098550|0|0||||
|0|8098E74|8098588|0|0||||
|0|8098FDC|809871C|0|0||||
|0|8099050|8098790|0|0||||
|0|8099828|8098F70|0|0||||
|0|809A978|8099FA0|0|0||||
|0|809C410|809BA48|0|0||||
|0|809CD78|809C3F4|0|0||||
|0|809CDA0|809C41C|0|0||||
|0|809D5A4|809CB8C|0|0||||
|0|809DA10|809CFF8|0|0||||
|0|809E16C|809D754|80A69D4|80A2C08||||
|8084138|809EDC0|809E3A8|80A7620|0||||
|0|809EDF0|809E3D8|80A7650|0||||
|0|809FAC0|809F084|0|0||||
|80872A8|80A35D4|80A2960|0|0||||
|0|80A5AA0|80A4DB4|0|0||||
|0|80A5B44|80A4E58|0|0||||
|0|80A5D6C|80A5084|0|0||||
|0|80A6950|80A5C90|0|0||||
|808A8B4|80A6FF4|80A6334|0|0||||
|0|80A7374|80A66B0|0|0||||
|0|80A75C4|80A68DC|0|0||||
|0|80A76C8|80A69E0|0|0||||
|0|80A7AE8|80A6DE0|0|0||||
|0|80AB1AC|80AA2E4|80B2D94|0||||
|0|80AB1D0|80AA308|0|0||||
|0|80AB82C|80AA964|0|0||||
|0|80ABEA8|80AAFC4|0|0||||
|0|80AC680|80AB79C|0|0||||
|0|80ACDD8|80ABEF4|0|0||||
|0|80AD6C0|80AC7E8|0|0||||
|0|80AD7DC|80AC904|0|0||||
|0|80AD818|80AC940|0|0||||
|0|80AE6D4|80AD7B4|0|0||||
|0|80AE9A8|80ADA90|0|0||||
|0|80AFC3C|80AED04|0|0||||
|80961F4|80B15F0|80B07C8|0|0||||
|80965C0|80B19DC|80B0BB4|0|0||||
|809668C|80B1A8C|80B0C64|0|0||||
|8097280|80B28D8|80B1AAC|0|0||||
|8097418|80B2A70|80B1C44|0|0||||
|8097600|80B2C14|80B1DF0|0|0||||
|8097728|80B2D3C|80B1F18|0|0||||
|80979AC|80B2FC8|80B21A4|0|0||||
|8097EAC|80B34C8|80B26A4|0|0||||
|8097ECC|80B34E8|80B26C4|0|0||||
|8098258|80B3874|80B2A50|0|0||||
|0|80B38E4|80B2AC0|0|0||||
|80983D0|80B39EC|80B2BC8|0|0||||
|0|80B3A08|80B2BE4|0|0||||
|8098490|80B3A9C|80B2C78|0|0||||
|8098730|80B3D30|80B2F0C|0|0||||
|8098798|80B3D98|80B2F74|0|0||||
|80987B8|80B3DB8|80B2F94|0|0||||
|0|80B3DF0|80B2FCC|0|0||||
|0|80B5148|80B4328|0|0||||
|0|80B5D98|80B4F78|0|0||||
|0|80B5E04|80B4FE4|0|0||||
|0|80B5E50|80B5030|0|0||||
|0|80B60A0|80B5280|0|0||||
|0|80B6450|80B5630|0|0||||
|0|80B67B0|80B5990|0|0||||
|0|80B6964|80B5B44|0|0||||
|0|80B698C|80B5B6C|0|0||||
|0|80B6E40|80B6034|0|0||||
|0|80B7018|80B620C|0|0||||
|80947DC|80B7BBC|80B6DD4|0|0||||
|0|80B7FC8|80B721C|0|0||||
|0|80B8198|80B73EC|0|0||||
|0|80B82DC|80B7530|0|0||||
|0|80B8484|80B76D8|0|0||||
|0|80B84C0|80B7714|0|0||||
|0|80B87F0|80B7A0C|0|0||||
|0|80B8958|80B7B74|0|0||||
|8096A78|80B89AC|80B7BC8|0|0||||
|0|80B8A0C|80B7C28|0|0||||
|0|80B8A40|80B7C5C|0|0||||
|0|80B8D8C|80B80F0|0|0||||
|0|80B91D8|80B853C|0|0||||
|0|80B9C20|80B90C0|0|0||||
|0|80B9CBC|80B915C|0|0||||
|0|80BA85C|80B9D54|0|0||||
|0|80BAE14|80BA30C|0|0||||
|0|80BB1EC|80BA6B4|0|0||||
|0|80BBA64|80BAFE8|0|0||||
|0|80BBAA4|80BB028|0|0||||
|0|80BBF64|80BB4E8|0|0||||
|0|80BC398|80BB98C|0|0||||
|0|80BC4D0|80BBAC4|0|0||||
|0|80BC688|80BBC80|0|0||||
|0|80BC730|80BBD28|0|0||||
|0|80BCAAC|80BC0A4|0|0||||
|0|80BCB0C|80BC104|0|0||||
|0|80BCD34|80BC30C|0|0||||
|0|80BCFD8|80BC5CC|0|0||||
|0|80BD000|80BC5F4|0|0||||
|0|80BD1F0|80BC7E4|0|0||||
|0|80BD534|80BCB1C|0|0||||
|0|80BDE68|80BD310|0|0||||
|0|80BE01C|80BD4C4|0|0||||
|0|80BE0A0|80BD548|0|0||||
|0|800D704|800D7F4|0|0||||
|0|800D724|800D814|0|0||||
|8010988|800E6D4|800E7C8|0|0||||
|80109C4|800E6F8|800E7EC|0|0||||
|8010A00|800E750|800E844|0|0||||
|8010A3C|800E774|800E868|0|0||||
|0|800E7B0|800E8A4|0|0||||
|0|800E7D8|800E8CC|0|0||||
|0|800F734|800F828|0|0||||
|806C578|801E83C|8087D58|0|0||||
|8052974|805C064|805B87C|0|0||||
|0|805C35C|805BB74|0|0||||
|80570E4|8063344|8062AA8|0|0||||
|8069DE8|80771E0|8076A10|0|0||||
|8069E50|8077248|8076A78|0|0||||
|8069ED4|80772CC|8076AFC|0|0||||
|0|8077350|8076B80|0|0||||
|8069DE8|80773B8|8076BE8|0|0||||
|806BF7C|807A654|8079BE0|0|0||||
|0|807CDEC|807C378|0|0||||
|806BF7C|807FBE8|807EE20|0|0||||
|0|808FD10|808F3D0|0|0||||
|0|808FD7C|808F43C|0|0||||
|0|808FE6C|808F52C|0|0||||
|0|809B598|809ABC0|0|0||||
|0|809B674|809AC9C|0|0||||
|0|80AB5E0|80B76F8|0|0|IceCrystal2|bool IceCrystal2()||
|0|80B5934|80B4B14|0|0||||
|0|80B5970|80B4B50|0|0||||
|0|80B8B64|80B7D88|0|0||||
|0|80BAA8C|80B9F84|0|0||||
|8000B9C|8000B94|8000BBC|0|0||||
|8000D54|8000D4C|8000D74|0|0|readRNFromWRAMToIRAM|void readRNFromWRAMToIRAM(int a1)||
|8000DB0|8000DA8|8000DD0|0|0||||
|8000EB4|8000EB4|8000EDC|0|0||||
|8000EEC|8000EEC|8000F14|0|0|getPlayTime|int getPlayTime()||
|8000F04|8000F04|8000F2C|0|0|setPlayTime|void setPlayTime(int time)||
|8000FD4|8000FD4|8000FFC|0|0|SetBGMapSyncFlag|void SetBGMapSyncFlag(u8 flag)||
|8000FF0|8000FF0|8001018|0|0|EnableBGMapSync|void EnableBGMapSync(u8 n)||
|8001034|8001034|800105C|0|0|EnablePaletteSync|void EnablePaletteSync()||
|8001048|8001048|8001070|0|0|DisablePaletteSync|void DisablePaletteSync()||
|80010CC|8001188|80011B0|0|0||||
|80012B4|8001370|8001398|0|0|GetBackgroundTileDataOffset|int GetBackgroundTileDataOffset(unsigned __int16 a1)||
|800131C|80013D8|8001400|0|0||||
|8001350|800140C|8001434|0|0||||
|80013F8|80014B4|80014DC|0|0||||
|80016F8|8001990|80019B8|0|0||||
|800D6E4|8001CA8|8001CD0|0|0||||
|8002818|8002BC0|8002BE8|0|0|BG_GetMapBuffer|__int16 (*BG_GetMapBuffer(int a1))[1024]||
|8002A28|8002DF0|8002F14|0|0||||
|8002A48|8002E10|8002F34|0|0||||
|8002B88|8002FD8|80030FC|0|0|RegisterFillTile|int RegisterFillTile(int a1, int a2, int a3)||
|8002CB8|8003108|800322C|0|0||||
|8002D54|80031A4|80032C8|0|0||||
|8002E14|8003264|8003388|0|0|SetOBJAttribute|int SetOBJAttribute(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)||
|8002F68|80033B8|80034DC|0|0||||
|8002F80|80033D0|80034F4|0|0||||
|8003210|800376C|8003890|0|0||||
|800322C|8003788|80038AC|0|0||||
|0|8003E48|8003F6C|0|0||||
|0|80040F8|800421C|0|0||||
|0|8006E10|8006F80|8005890|8005988|DrawMiniMug|int DrawMiniMug(int id, void *targetBg, int tileId, int palId)|r0 = minimug id, r1 = target bg, r2 = tile id, r3 = palid|
|8008DB8|8007428|8007598|0|0||||
|0|8007F44|80080B4|0|0||||
|0|8007F58|80080C8|0|0||||
|0|80098A0|8009A10|0|0||||
|0|800AE98|800AF5C|0|0||||
|80146F8|8014500|8013FE0|0|0||||
|8014708|8014510|8013FF0|0|0||||
|0|801778C|8017384|0|0||||
|8018188|80188CC|80184DC|0|0||||
|801A564|801B57C|801B19C|0|0|FillRangeMap|int FillRangeMap(__int16 a1, __int16 a2, __int16 a3, __int16 a4)||
|8020A2C|8023D64|80238D8|0|0||||
|8020A40|8023D78|80238EC|0|0||||
|8022DD4|8026E3C|80269B0|0|0||||
|8024514|8028B7C|80286F0|0|0||||
|802454C|8028BB4|8028728|0|0||||
|8025360|8029DB4|8029904|0|0||||
|80260A0|802ACB4|802A804|0|0||||
|0|802B040|802AB90|0|0||||
|80260DC|802B050|802ABA0|0|0||||
|0|802C058|802BB98|0|0||||
|0|802C068|802BBA8|0|0||||
|0|802C6A8|802C1E8|0|0||||
|0|8031B54|80315E8|0|0|GetSomethingRelatedToCurrentDifficulty|bool GetSomethingRelatedToCurrentDifficulty()||
|8030A84|8037804|8037350|0|0||||
|8030CE8|8037A6C|80375B8|0|0||||
|8030D78|8037AFC|8037648|0|0||||
|8032474|8039620|803916C|0|0||||
|8036964|803DEA4|803D9F4|0|0||||
|8036974|803DEB4|803DA04|0|0||||
|803A680|8041EA8|80417BC|0|0||||
|0|80457EC|8044FFC|0|0||||
|80422CC|804B6CC|804AEF0|0|0||||
|0|804DCA8|804D4CC|0|0||||
|8047500|805081C|8050040|0|0||||
|80475D8|80508F4|8050118|0|0||||
|804A5A8|8053B28|8053340|0|0||||
|804BE6C|8055644|8054E5C|0|0||||
|0|8065214|8064A48|0|0|initSpecialAnimationEffectInfo|void initSpecialAnimationEffectInfo()||
|805F7B4|806C208|806BA1C|0|0||||
|805F7D4|806C228|806BA3C|0|0||||
|0|806C274|806BA88|0|0||||
|805F8F4|806C3B0|806BBC4|0|0||||
|805F91C|806C3D8|806BBEC|0|0||||
|805FF50|806CAD0|806C2E4|0|0||||
|805FF68|806CAE8|806C2FC|0|0||||
|80608EC|806D4BC|806CCD0|0|0||||
|806091C|806D4EC|806CD00|0|0||||
|8060E88|806DD10|806D524|0|0||||
|8060EB8|806DD40|806D554|0|0||||
|8060EE4|806DD6C|806D580|0|0||||
|80610A8|806E2A0|806DAB4|0|0||||
|80610D0|806E2C8|806DADC|0|0||||
|80610F0|806E2E8|806DAFC|0|0||||
|0|806EA0C|806E220|0|0||||
|0|806F2C8|806EADC|0|0||||
|806283C|806FAA4|806F2B8|0|0||||
|8067324|807456C|8073D80|0|0||||
|806875C|8075B1C|807534C|0|0||||
|8069C34|807702C|807685C|0|0||||
|8069DA4|807719C|80769CC|0|0||||
|806A424|8077898|80770C8|0|0||||
|806A87C|8077CEC|807751C|0|0||||
|0|80788F0|8078120|0|0||||
|806B404|807977C|8078FAC|0|0||||
|806B414|807978C|8078FBC|0|0||||
|0|8079990|80791C0|0|0||||
|0|807A794|8079D20|0|0||||
|0|807AE3C|807A3C8|0|0||||
|0|807AE5C|807A3E8|0|0||||
|0|807D97C|807CEFC|0|0||||
|806E83C|80804A4|807F6EC|0|0||||
|806E860|80804C8|807F710|0|0||||
|807280C|80858B0|8084EB4|0|0||||
|0|808E684|808DD58|0|0||||
|0|808E694|808DD68|0|0||||
|0|8099CF0|8099330|0|0||||
|808A3C8|80A6B4C|80A5E8C|0|0||||
|808A3E8|80A6B6C|80A5EAC|0|0||||
|0|80A7AB8|80A6DB0|0|0||||
|0|80A7AC8|80A6DC0|0|0||||
|0|80A7AD8|80A6DD0|0|0||||
|0|80AEA60|80ADB48|0|0||||
|0|80AEB3C|80ADC24|0|0||||
|8095D5C|80B1148|80B0320|0|0||||
|8095E10|80B11FC|80B03D4|0|0||||
|8095E30|80B121C|80B03F4|0|0||||
|8095E50|80B123C|80B0414|0|0||||
|8097CF4|80B3310|80B24EC|0|0||||
|8097D10|80B332C|80B2508|0|0||||
|8097D34|80B3350|80B252C|0|0||||
|0|80B41F0|80B33B8|0|0||||
|0|80B41FC|80B33C4|0|0||||
|0|80BBB4C|80BB0D0|0|0||||
|0|80BBD98|80BB31C|0|0||||
|0|80BBDA8|80BB32C|0|0||||
|0|80BC848|80BBE40|0|0||||
|806B06C|80793E4|8078C14|0|0||||
|0|807E1E8|807D528|0|0||||
|0|800954C|80096BC|0|0||||
|0|800B02C|800B0F0|0|0||||
|0|800B040|800B104|0|0||||
|0|800E23C|800E330|0|0||||
|0|800E24C|800E340|0|0||||
|0|800E35C|800E450|0|0||||
|0|800EB0C|800EC00|0|0||||
|8011FB0|800EC58|800ED4C|0|0||||
|0|800ECD4|800EDC8|0|0||||
|0|800EE48|800EF3C|0|0||||
|0|800EF1C|800F010|0|0||||
|0|800F23C|800F330|0|0||||
|0|800FA74|800FB68|0|0||||
|0|800FA84|800FB78|0|0||||
|0|800FC5C|800FD50|0|0||||
|0|80121F0|8011B58|0|0||||
|0|8015988|801550C|0|0||||
|801EB14|8021AA8|8021630|0|0||||
|0|8030B74|8030688|0|0||||
|0|8031610|8031124|0|0||||
|0|804097C|8040270|0|0||||
|0|8041E58|804176C|8046DAC|8046E4C||||
|0|806543C|8064C4C|0|0||||
|8058F28|8066D30|8066544|0|0||||
|0|806B878|806B098|0|0||||
|0|806B88C|806B0AC|0|0||||
|8066190|80733F8|8072C0C|0|0||||
|0|807475C|8073F70|0|0||||
|8068A74|8075E34|8075664|0|0||||
|8068AA8|8075E68|8075698|0|0||||
|8068C84|807604C|807587C|0|0||||
|8069530|8076920|8076150|0|0||||
|80699D8|8076DCC|80765FC|0|0||||
|8069A0C|8076E00|8076630|0|0||||
|8069B3C|8076F34|8076764|0|0||||
|0|807B8D8|807AE64|0|0||||
|0|807DA64|807CFE4|0|0||||
|0|807DFDC|807D3BC|0|0||||
|0|807E090|807D414|0|0||||
|0|80A5A94|80A4DA8|0|0||||
|0|80A781C|80A6B34|0|0||||
|0|80A79B8|80A6CC0|0|0||||
|0|80ACC60|80ABD7C|0|0||||
|0|80AD678|80AC7A0|0|0||||
|8098478|80B3A84|80B2C60|0|0||||
|809874C|80B3D4C|80B2F28|0|0||||
|0|800ADC0|800AE18|0|0||||
|0|800ADDC|800AE34|0|0||||
|0|800F93C|800FA30|0|0||||
|0|800F9DC|800FAD0|0|0||||
|0|8010EA0|8011008|0|0||||
|801E4D8|80202B0|801FE48|0|0||||
|0|8020304|801FE9C|0|0||||
|0|8020AD0|8020AD0|0|0||||
|0|8020F38|8020668|0|0||||
|801EAF8|8021A8C|8021614|0|0||||
|801F310|8022154|8021CDC|0|0||||
|8020D44|8024600|8024174|0|0|AddUnitToTargetListIfAllied|int AddUnitToTargetListIfAllied(char *a1)||
|803C044|80438FC|8043154|0|0||||
|803EFEC|80478F4|8047108|0|0||||
|0|804B29C|804AAC0|0|0||||
|0|804B7E4|804B008|0|0||||
|8047370|80503B8|804FBDC|8055CEC|0||||
|0|8050560|804FD84|0|0||||
|8057A34|80563C8|8055BE0|0|0||||
|0|80563F0|8055C08|0|0||||
|804CD4C|8056454|8055C6C|0|0||||
|0|8056490|8055CA8|0|0||||
|80541C8|80578F0|8057108|805D944|805CBA8||||
|0|8057DBC|80575D4|805DDF8|0||||
|8055050|80587F8|805D6A4|0|0||||
|8053114|805A5C4|8059DDC|0|0||||
|0|805B610|805AE28|0|0||||
|0|805FBBC|805F3D4|0|0||||
|0|805FFD0|8060254|0|0||||
|80590FC|806055C|805FD74|0|0||||
|0|806084C|8060064|0|0||||
|0|8060898|8060398|0|0||||
|0|8060A3C|805F7E8|0|0||||
|0|8060B80|8060544|0|0||||
|0|8060E44|806065C|0|0||||
|8090720|8061398|8061284|0|0||||
|8090834|8061A6C|80600B0|0|0||||
|8057A0C|8063CFC|8063514|0|0||||
|809B7D4|8064724|8063FA0|8070874|0||||
|0|80663EC|8065BFC|0|0||||
|8057A34|8066590|8065DA0|0|0||||
|805E4D4|806A584|8069DA4|0|0||||
|805F6B8|806BE18|806B56C|0|0||||
|8066D5C|80737AC|8072FC0|0|0||||
|8066544|8073FC4|80737D8|0|0||||
|0|807ADA8|807A334|0|0||||
|0|807ADC4|807A350|0|0||||
|0|807DA48|807EE58|0|0||||
|0|807DC80|807EE74|0|0||||
|0|807E81C|807DA8C|0|0||||
|0|807E838|807DAA8|0|0||||
|0|807FC20|807EF34|0|0||||
|0|807FC3C|807EF50|0|0||||
|8070C4C|8082CA4|8045170|0|0||||
|0|8090ADC|8090180|0|0||||
|8087254|80A3580|80A290C|0|0||||
|8098550|80B3B44|80B2D20|0|0||||
|0|800AEB0|800AF74|0|0||||
|805FCD8|806C850|806C064|0|0||||
|8098764|80B3D64|80B2F40|0|0||||
|0|80858D8|8084EDC|0|0||||
|0|80799E4|8079214|0|0||||
|8000F58|8000F58|8000F80|0|0||||
|8001550|80017E8|8001810|0|0||||
|8001580|8001818|8001840|0|0||||
|8002D6C|80031BC|80032E0|0|0||||
|0|80033EC|8003510|0|0||||
|8003028|800348C|80035B0|0|0||||
|0|8003684|80037A8|0|0||||
|0|8003E68|8003F8C|0|0||||
|800384C|8004240|8004364|0|0|huffmanDecompressText|void huffmanDecompressText(int a1, int a2)||
|8003870|8004264|8004388|0|0||||
|800389C|8004290|80043B4|0|0||||
|80038F0|80042E4|8004408|0|0||||
|8008E00|8007458|80075C8|0|0||||
|0|80095E4|8009754|0|0||||
|0|800A70C|800A708|0|0||||
|0|800AD84|800ADDC|0|0||||
|8009914|800AD98|800ADF0|0|0||||
|0|800B12C|800B1F0|0|0||||
|0|800B7BC|800B880|0|0||||
|0|800E520|800E614|0|0||||
|0|800EC84|800ED78|0|0||||
|0|800EC9C|800ED90|0|0||||
|0|800EF34|800F028|0|0||||
|0|800EF50|800F044|0|0||||
|0|800EF78|800F06C|0|0||||
|0|8010F48|8010AF8|0|0||||
|0|80111E8|8010D98|0|0||||
|0|80114EC|801109C|0|0||||
|0|80123C8|8011D34|0|0||||
|0|8012B98|8012504|0|0||||
|80139DC|8013240|8012B88|0|0||||
|0|8013BAC|8013670|0|0||||
|0|8013BBC|8013680|0|0||||
|8014AF8|8014900|80143E0|0|0||||
|8014D50|8014B58|80146DC|0|0||||
|80178F4|8017F3C|8017B4C|0|0||||
|80192E4|8019F20|8019B40|0|0||||
|0|8019FC0|8019BE0|0|0||||
|0|8020E5C|80209F4|0|0||||
|0|802196C|80214F4|0|0||||
|801F26C|80220B0|8021C38|8022CFC|8022D34||||
|0|802516C|8024CE0|0|0||||
|8026504|802B4DC|802B02C|0|0||||
|806DC90|802BD30|802B870|0|0||||
|0|802BD44|802B884|804328C|8043308||||
|806DC24|802BD58|802B898|80A4868|0||||
|0|802C6DC|802C21C|0|0||||
|8027530|802C86C|802C3AC|0|0||||
|802756C|802C8A8|802C3E8|0|0||||
|8027B98|802CF24|802CA64|0|0||||
|0|802CF60|802CAA0|0|0||||
|0|802D128|802CC68|0|0||||
|0|802D148|802CC88|0|0||||
|802A918|8030038|802FB70|0|0||||
|0|8030B60|8030674|0|0||||
|802EF20|8035824|803534C|0|0||||
|8036FA8|803E4EC|803E040|0|0||||
|0|80441D0|80439D0|0|0||||
|0|80456C8|8044ED8|0|0||||
|803F554|8047E5C|8047670|0|0||||
|0|8048320|8047B34|0|0||||
|803FB74|8048494|8047CA8|0|0||||
|803FC3C|804856C|8047D80|0|0||||
|803FE28|8048758|8047F6C|0|0||||
|80410BC|8049A08|8049220|0|0||||
|804536C|804E604|804DE28|0|0|loadNoDamage|void loadNoDamage(int a1, int a2, u8 a3)||
|80459F8|804EB48|804E36C|0|0||||
|804685C|804F8D8|804F0FC|0|0||||
|8046C14|804FD74|804F598|80554C4|80547DC|StartEfxFlashUnit|int StartEfxFlashUnit(int a1, __int16 a2, __int16 a3, char a4)||
|80471E4|805022C|804FA50|0|0||||
|804AFA0|8054764|8053F7C|0|0||||
|804C5A4|8055D7C|8055594|0|0||||
|0|8056070|8055888|805C170|805B3CC|StartSpellAnimation|int StartSpellAnimation(int a1)||
|804D590|8056EFC|8056714|805CF64|0||||
|0|805AE14|805A62C|0|0||||
|8051624|805AEE0|805A6F8|0|0||||
|8053A44|805AF74|805A78C|0|0||||
|8051720|805B04C|805A864|0|0||||
|0|805B264|805AA7C|0|0||||
|0|805B32C|805AB44|0|0||||
|8052334|805BD1C|805B534|0|0||||
|8052460|805BE48|805B660|0|0||||
|80524F4|805BEDC|805B6F4|0|0||||
|8052848|805C230|805BA48|0|0||||
|0|805C5B4|805BDCC|0|0|loadHazymoonBG1|void loadHazymoonBG1(void *AIS)||
|0|805C624|805BE3C|0|0||||
|8053FF4|805CC58|805C470|0|0||||
|805581C|805E510|805DD28|0|0||||
|80562C0|805EFA0|805E7B8|0|0||||
|80564E4|805F1C4|805E9DC|0|0||||
|0|8060730|805FF48|0|0||||
|0|80608B8|80600D0|0|0||||
|0|8060D4C|8060564|0|0||||
|0|80611CC|80609E4|8066128|0||||
|0|80612D4|8060AEC|0|0||||
|0|80614E4|8060CFC|8066444|0||||
|0|8061E40|8061658|0|0||||
|0|8061F48|8061760|8066E88|0||||
|0|8061FC4|80617DC|8066F04|0||||
|0|8062658|8061E70|806759C|0||||
|8056B08|8062D68|8062580|0|0||||
|8056C3C|8062E9C|80626B4|0|0||||
|8057BF8|8063E94|80636AC|0|0||||
|0|8065F38|8065748|0|0||||
|0|806603C|806584C|0|0||||
|0|80660F4|8065904|0|0|loadFireDragonBGPaletteAnimation|_6CStruct *loadFireDragonBGPaletteAnimation(void *AIS)||
|0|8066200|8065A10|0|0||||
|0|80662F4|8065B04|0|0|loadFireSeaBG2|_6CStruct *loadFireSeaBG2(void *AIS)||
|0|8066380|8065B90|0|0||||
|0|8066CAC|80664C0|0|0|loadFireSeaBG1|void loadFireSeaBG1(void *AIS, __int16 duration)||
|0|8066DA0|80665B4|0|0||||
|0|8066F80|8066794|0|0||||
|805CB6C|8068D2C|8068540|0|0||||
|805CBB0|8068D70|8068584|0|0||||
|805CC64|8068E24|8068638|0|0||||
|805CCE8|8068EA8|80686BC|8075434|8072F58||||
|805CDCC|8068F8C|80687A0|0|0||||
|805CF38|80690F8|806890C|0|0||||
|0|806C474|806BC88|0|0||||
|80601AC|806CD2C|806C540|0|0||||
|80608D4|806D4A4|806CCB8|0|0||||
|8060904|806D4D4|806CCE8|0|0||||
|806094C|806D51C|806CD30|0|0||||
|0|806D52C|806CD40|0|0||||
|80613BC|806E5C0|806DDD4|0|0||||
|806142C|806E630|806DE44|0|0||||
|0|806E840|806E054|0|0||||
|8061704|806E930|806E144|0|0||||
|0|806F7B0|806EFC4|0|0||||
|0|806F83C|806F050|0|0||||
|0|806F8C8|806F0DC|0|0||||
|0|806F97C|806F190|0|0||||
|8062A80|806FCE8|806F4FC|0|0||||
|8062BA0|806FE08|806F61C|0|0||||
|8062CF0|806FF58|806F76C|0|0||||
|8062D08|806FF70|806F784|0|0||||
|8062FE8|8070258|806FA6C|0|0||||
|8063120|8070390|806FBA4|0|0||||
|8063494|8070704|806FF18|0|0||||
|80645F8|8071874|8071088|0|0||||
|8064994|8071C10|8071424|0|0||||
|8064A10|8071C8C|80714A0|0|0||||
|8064A8C|8071D08|807151C|0|0||||
|80650A4|8072320|8071B34|0|0||||
|8067A28|8074C70|8074474|0|0||||
|80132C8|8074D38|807453C|0|0||||
|80685F0|80759B0|80751E0|0|0||||
|80686D8|8075A98|80752C8|0|0||||
|8069C74|807706C|807689C|0|0||||
|806A0DC|8077420|8076C50|0|0||||
|0|807A208|8079A38|0|0||||
|0|807BD6C|807B2F8|0|0||||
|0|807CDD4|807C360|0|0||||
|0|807FC04|807EE3C|0|0||||
|0|807FC14|807EE4C|0|0||||
|0|808667C|8085C7C|0|0||||
|0|8086E0C|8086420|0|0||||
|0|8087864|8086EA8|0|0||||
|0|808E404|808DAC4|0|0||||
|0|808EDD0|808E488|0|0||||
|0|808EFBC|808E680|0|0||||
|0|80903C4|808FA84|0|0||||
|0|8090788|808FE48|0|0||||
|0|80910B0|809076C|0|0||||
|0|8091104|80907C0|0|0||||
|0|809225C|8091914|0|0||||
|0|809228C|8091944|0|0||||
|0|8093B14|8093208|0|0||||
|0|8093C00|80932F4|0|0||||
|0|8099128|8098868|0|0||||
|0|8099B94|80991DC|0|0||||
|0|8099D18|8099358|0|0||||
|0|809B2FC|809A924|0|0||||
|0|809F098|809E688|0|0||||
|80846B8|809F3D4|809E9C4|0|0|SaveConvoyItems|void SaveConvoyItems(_BYTE *pDest)|保存运输队物品到存档<br>输入参数：<br>pDest 指向目的地址的指针|
|80846D0|809F3EC|809E9DC|0|0|LoadConvoyItems|void LoadConvoyItems(int a1)||
|0|809FA94|809F058|0|0||||
|0|80A03F8|809FA2C|0|0||||
|0|80A041C|809FA50|0|0||||
|8087878|80A3BAC|80A2F38|0|0||||
|80878B4|80A3BE8|80A2F74|0|0||||
|0|80A3EF8|80A3284|0|0||||
|0|80A54A8|80A4830|0|0||||
|0|80A61FC|80A5514|0|0||||
|0|80A86D4|80A77C0|0|0||||
|0|80A870C|80A77F8|0|0||||
|0|80A8B60|80A7C4C|0|0||||
|0|80A9064|80A8150|0|0||||
|0|80A9A08|80A8AF4|0|0||||
|0|80AA0C0|80A91AC|0|0||||
|0|80ADE30|80ACF08|0|0||||
|0|80AEBDC|80ADCC4|0|0||||
|0|80AEC4C|80ADD34|0|0||||
|0|80AFCC4|80AED8C|0|0||||
|8095D88|80B1174|80B034C|0|0||||
|8096F70|80B25C8|80B17A0|0|0||||
|8097084|80B26DC|80B18B0|0|0||||
|80975A0|80B2BB4|80B1D90|0|0||||
|8097638|80B2C4C|80B1E28|0|0||||
|809777C|80B2D90|80B1F6C|0|0||||
|8097830|80B2E44|80B2020|0|0||||
|8097E84|80B34A0|80B267C|0|0||||
|80985D8|80B3BD0|80B2DAC|0|0||||
|0|80B3E60|80B303C|0|0||||
|808B7A0|80B4A3C|80B3C04|0|0||||
|0|80B4BDC|80B3DA4|0|0||||
|0|80B4C34|80B3DFC|0|0||||
|808BE5C|80B5D64|80B4F44|0|0||||
|0|80B6374|80B5554|0|0||||
|0|80B7C40|80B6E58|0|0||||
|0|80B94EC|80B88C0|0|0||||
|0|80B97EC|80B8C8C|0|0||||
|0|80BB000|80BA4BC|0|0||||
|0|80BBAFC|80BB080|0|0||||
|0|80BBD28|80BB2AC|0|0||||
|0|80BC664|80BBC5C|0|0||||
|0|80BC7D8|80BBDD0|0|0||||
|0|80BC858|80BBE50|0|0||||
|0|80BC884|80BBE7C|0|0||||
|0|80BD4E0|80BCAE8|0|0||||
|0|80BDB24|80BCFCC|0|0||||
|0|80BDF7C|80BD424|0|0||||
|0|807931C|8078B4C|0|0||||
|8093284|809FB10|809F0D4|0|0||||
|0|800D478|800D568|0|0||||
|0|800D4A0|800D590|0|0||||
|0|800D834|800D928|0|0||||
|0|800D858|800D94C|0|0||||
|0|8016FBC|8016B68|0|0||||
|0|8079A50|8079280|0|0||||
|0|808F6AC|808ED70|0|0||||
|0|8003E9C|8003FC0|0|0||||
|0|808E6A4|808DD78|0|0||||
|0|800ACC4|800AD1C|0|0||||
|0|802ACE0|802A830|0|0||||
|805C41C|80685C8|8067DDC|0|0||||
|80629FC|806FC64|806F478|0|0||||
|0|80946CC|8093DE4|0|0|nullsub_7|void nullsub_7()||
|0|809FB0C|809F0D0|0|0||||
|0|80B647C|80B565C|0|0||||
|0|8012E64|80127E8|0|0||||
|0|8034D5C|8034884|0|0||||
|0|8004B1C|8004C40|0|0||||
|0|8009E6C|8009FDC|0|0||||
|8020A58|8023D90|8023904|0|0||||
|8029F68|802F5AC|802F0E0|0|0||||
|0|80B3DE4|80B2FC0|0|0||||
|0|80BE1CC|80BD688|0|0||||
|0|80C0548|80BFA04|0|0|ArcTan2|u16 ArcTan2(u16 x, s16 y)||
|0|801DC64|801D860|0|0||||
|8023278|80273D4|8026F4C|0|0||||
|80975C8|80B2BDC|80B1DB8|0|0||||
|0|8005740|800587C|0|0||||
|0|8005BB8|8005D24|0|0||||
|0|800A604|800A608|0|0||||
|80143E4|800B188|800B24C|0|0||||
|0|800D268|800D358|0|0||||
|0|800D828|800D91C|0|0||||
|0|800EA58|800EB4C|0|0||||
|80143E4|80141EC|8013CCC|0|0||||
|8014718|8014520|8014000|0|0||||
|80157C8|80155D0|8015154|0|0||||
|8015810|8015618|801519C|0|0||||
|803FC70|80485A0|8047DB4|0|0||||
|803FC70|8049960|8049178|0|0||||
|80581FC|8064AD0|80642E8|0|0||||
|8058392|8064C66|806447E|0|0||||
|8058612|8064EE6|80646FE|0|0||||
|0|806518E|80649A6|0|0||||
|8060460|806CFE8|806C7FC|0|0||||
|800F094|806D06C|806C880|0|0||||
|80604E4|806D07C|806C890|0|0||||
|80612F0|806E4F4|806DD08|0|0||||
|8061404|806E608|806DE1C|0|0||||
|0|806E6DC|806DEF0|0|0||||
|0|806E7EC|806E000|0|0||||
|0|806E8DC|806E0F0|0|0||||
|8061720|806E94C|806E160|0|0||||
|8068608|80759C8|80751F8|0|0||||
|8069C04|8076FFC|807682C|0|0||||
|8069C1C|8077014|8076844|0|0||||
|806A750|8077BC0|80773F0|0|0||||
|806C158|807A940|8079ECC|0|0||||
|806C1A4|807A950|8079EDC|0|0||||
|806C1B4|807A960|8079EEC|0|0||||
|806C1C4|807A970|8079EFC|0|0||||
|806C1D4|807A980|8079F0C|0|0||||
|0|807B534|807AAC0|0|0||||
|0|807B558|807AAE4|0|0||||
|0|807C8BC|807BE48|0|0||||
|0|807F5C8|807E80C|0|0||||
|0|807F610|807E854|0|0||||
|0|807F648|807E88C|0|0||||
|0|807F690|807E8D4|0|0||||
|0|807F6B0|807E8F4|0|0||||
|0|807F6D0|807E914|0|0||||
|0|807F718|807E95C|0|0||||
|0|807F738|807E97C|0|0||||
|0|807F9D0|807EC14|0|0||||
|0|807FB40|807ED78|0|0||||
|0|807FB54|807ED8C|0|0||||
|0|807FB6C|807EDA4|0|0||||
|0|80877FC|8086E40|0|0||||
|0|8089B60|8089200|0|0||||
|0|808F7B4|808EE78|0|0||||
|8041014|808FCAC|808F36C|0|0||||
|0|8094828|8093F40|0|0||||
|0|809484C|8093F64|0|0||||
|808A160|80A691C|80A5C5C|0|0||||
|808A228|80A69B8|80A5CF8|0|0||||
|809AD64|80AA490|80A95B4|0|0||||
|8074830|80AA4B4|80A95D8|0|0||||
|8095DF0|80B11DC|80B03B4|0|0||||
|8095E70|80B125C|80B0434|0|0||||
|80604F4|80B1418|80B05F0|0|0||||
|0|80B14B8|80B0690|0|0||||
|0|80B1A0C|80B0BE4|0|0||||
|0|80B1A44|80B0C1C|0|0||||
|0|80B1A5C|80B0C34|0|0||||
|0|80B1A74|80B0C4C|0|0||||
|0|80B1E0C|80B0FE4|0|0||||
|0|80B1E4C|80B1024|0|0||||
|0|80B1EBC|80B1094|0|0||||
|8097D50|80B336C|80B2548|0|0||||
|8097D7C|80B3398|80B2574|0|0||||
|0|80B39BC|80B2B98|0|0||||
|0|80B39D4|80B2BB0|0|0||||
|0|80B7084|80B6278|0|0||||
|0|80B7094|80B6288|0|0||||
|807B69C|80BCE9C|80BC474|0|0||||
|8016FB4|8017420|8016FCC|0|0||||
|0|802788C|8027400|0|0||||
|80982D8|80B3908|80B2AE4|0|0||||
|8096944|80B1D44|80B0F1C|0|0||||
|0|8006FF0|800A524|0|0||||
|8014278|800AD50|8013B60|8008E44|8008F54||||
|0|800DD90|800DE84|0|0||||
|8010750|800E490|800E584|0|0||||
|0|800E4A8|800E59C|0|0||||
|0|800E7A4|800E88C|0|0||||
|0|800F250|800F344|0|0||||
|0|800F264|800F358|0|0||||
|0|800FA94|800E898|0|0||||
|0|800FAA0|800FB94|0|0||||
|0|800FAE4|800FBD8|0|0||||
|0|8010F74|8010B24|0|0||||
|0|8011298|8010E48|0|0||||
|0|8011AC8|8011430|0|0||||
|0|8011E8C|80117F4|0|0||||
|0|8012F44|80128C8|8009B94|0||||
|0|8014834|8021164|0|0||||
|801B034|801C56C|8015484|0|0||||
|801CF48|801E858|801E4D4|0|0||||
|0|8020A48|80205E0|0|0||||
|0|80219F8|8021580|0|0||||
|0|8022014|8021B9C|0|0||||
|0|80221CC|801C168|0|0||||
|0|8022EB0|8022A38|0|0||||
|0|802348C|80232AC|0|0||||
|8020770|8023714|8023400|8024608|0||||
|80207F8|8023824|80233E0|0|0||||
|80208A0|802388C|8023444|8024780|80247D0||||
|80217F8|8024BD8|8024858|0|0||||
|8021904|8024D0C|80248A8|0|0||||
|0|802507C|8024BF0|0|0||||
|8021638|80250E0|8024C54|0|0||||
|8028354|802D834|802D374|8030094|8030144|GameVBlankProc_Loop|int GameVBlankProc_Loop(unsigned __int16 **a1)||
|8029560|802EA88|802E500|0|0||||
|8029618|802EB40|802E5BC|0|0||||
|0|802FE20|802F954|0|0||||
|0|8031634|8031148|0|0||||
|802C798|8032710|803202C|8035288|8035380||||
|0|803E068|807B178|8042FB0|804302C||||
|803ED54|8047658|8046E70|0|0||||
|804DE4C|8056F98|8056458|0|0|spellArrow|void spellArrow(void *AIS)||
|0|805717C|80569F0|0|0||||
|804D7C0|8057234|8056AA8|0|0||||
|804D81C|8057290|8056B04|0|0||||
|804D878|80572EC|8056B60|0|0||||
|804D8D4|8057348|8056BBC|0|0||||
|804D930|80573A4|8056C18|0|0||||
|804D9E8|8057400|8056C74|0|0|spellTeyari9|int spellTeyari9(AnimationInterpreter *a1)||
|804DA44|805745C|8056CD0|0|0|spellTeyari10|int spellTeyari10(AnimationInterpreter *a1)||
|804E5E4|8057664|80567B0|805D6D0|0|spellSong|int spellSong(int a1)||
|804E9FC|805856C|8057D84|805E5B8|805D4B8||||
|0|8059F74|805978C|8060334|805F234||||
|0|8059F8C|80597A4|0|0||||
|804E8CC|805A090|805C250|0|0||||
|804ECB8|805A60C|805DBC8|0|0||||
|8051394|805ABC0|805A3D8|8060F68|805FE68||||
|804F5C4|805ABD8|805DE68|0|0||||
|804FC28|805B678|805E100|0|0||||
|805007C|805BA78|805E420|0|0||||
|80503BC|805C3D8|805E69C|0|0||||
|8053B88|805C7F8|805C010|0|0||||
|8053DB0|805CA20|805C238|806198C|806088C||||
|8050860|805CA38|805ECA4|0|0||||
|8054084|805CCE8|805C500|8061C2C|0||||
|8054558|805D1D8|805CB40|8062124|0|spellLive|int spellLive(int a1)||
|80546A8|805D328|805CCE4|0|0|spellRelive|int spellRelive(int a1)||
|8055234|805DEC0|805D6D8|0|0||||
|8055264|805DEF0|805D708|0|0||||
|8050DE0|805E3B0|805EF10|0|0||||
|8055BDC|805E8D0|805E0E8|8063760|8062660||||
|8052090|805EC08|8060688|0|0||||
|80529EC|805EE84|8060DDC|0|0||||
|805653C|805F21C|805EA34|80640A4|0||||
|0|805F48C|80613F8|0|0|spellMShield|int spellMShield(AnimationInterpreter *a1)||
|8056A00|805F6E0|805EEF8|8064568|8063468||||
|0|8060108|805F920|8064F58|0||||
|80556BC|80605A4|8057C54|0|0|spellExcalibur|int spellExcalibur(AnimationInterpreter *a1)||
|0|806079C|805FFB4|0|0||||
|0|8060B64|806037C|8065658|806454C||||
|0|8060D10|8060528|8065A28|806491C||||
|0|8061274|8060A8C|8065BD4|8064AC8||||
|0|806137C|8060B94|80662DC|8065300||||
|0|80615A8|8060D88|8067618|0||||
|0|8061A50|8061268|80669B0|0||||
|8055F24|8061BE0|8058FB4|0|0|spellLuce|int spellLuce(AnimationInterpreter *a1)||
|0|8061EE8|8061700|0|0||||
|0|8062640|8061E58|0|0||||
|0|80626D4|8060DA4|806D988|0||||
|0|8062AAC|80622C4|0|0|spellRingFilla|int spellRingFilla(AnimationInterpreter *a1)||
|80575E8|80639F8|8063210|806FA80|0||||
|0|8063C14|80656B0|0|0||||
|8058180|8064A54|80643FC|0|0||||
|8058310|8064BE4|8064938|80712BC|0||||
|0|8065F8C|806579C|0|0||||
|0|8066090|80658A0|0|0||||
|802E8D4|8066634|8069D0C|0|0||||
|0|806A7A0|8069FC0|8076E8C|0||||
|804C7EC|806C178|80557DC|8078934|0||||
|8064F28|80721A4|8071B88|807F3E0|0||||
|80650F8|8072374|8071BAC|807F60C|0||||
|80684D8|8074C5C|8074460|0|0||||
|808B56C|8075864|8075094|0|0||||
|0|8075F68|8075798|0|0||||
|0|8075FAC|80757DC|0|0||||
|8068F88|8076350|8075B80|0|0||||
|8068FD8|80763A0|8075BD0|0|0||||
|8069560|8076950|8076180|0|0||||
|8069590|8076980|80761B0|0|0||||
|80695C0|80769B0|80761E0|0|0||||
|80695F0|80769E0|8076210|0|0||||
|806962C|8076A1C|807624C|0|0||||
|8069668|8076A58|8076288|0|0||||
|80696A4|8076A94|80762C4|0|0||||
|80696E0|8076AD0|8076300|0|0||||
|806971C|8076B0C|807633C|0|0||||
|8069758|8076B48|8076378|0|0||||
|806988C|8076C80|80764B0|0|0||||
|80698E4|8076CD8|8076508|0|0||||
|8069914|8076D08|8076538|0|0||||
|8069944|8076D38|8076568|0|0||||
|8069974|8076D68|8076598|0|0||||
|0|807B430|807A9BC|0|0||||
|0|807B7A0|807AD2C|8087B10|8085844||||
|0|807B7C8|807AD54|8087B38|808586C||||
|0|807B8A4|807AE30|8087C14|8085948||||
|0|807C658|803DE94|0|0||||
|0|807C6F0|807BC7C|0|0||||
|0|807CA30|807BFBC|0|0||||
|0|807CD48|807B1F4|0|0||||
|0|807CD60|807B79C|0|0||||
|0|807D314|807B1E0|0|0||||
|0|807D59C|807CB28|0|0||||
|0|807D938|807B264|0|0||||
|0|807D94C|807CEC8|0|0||||
|0|807D95C|807CED8|0|0||||
|806DA90|807D96C|807CEE8|0|0||||
|80947AC|807DA3C|807CFBC|0|0||||
|0|807F8DC|801E6D0|0|0||||
|0|807F8F4|807ED2C|0|0||||
|8014278|807F908|807EB4C|0|0||||
|0|807FAE8|807F45C|0|0||||
|0|807FB80|807EDB8|0|0||||
|0|807FB98|807EDD0|0|0||||
|0|807FBB0|807EDE8|0|0||||
|0|807FBCC|807EE04|0|0||||
|0|8080214|807F6B4|0|0||||
|808E6FC|8086668|808F7C4|0|0||||
|0|808E4E8|808DBA8|80974AC|80951CC||||
|0|808E57C|808DC3C|0|0||||
|0|808E5B4|808DC88|0|0||||
|0|80921FC|80918B4|0|0||||
|0|809221C|80918D4|0|0||||
|0|809223C|80918F4|0|0||||
|0|8093198|809288C|0|0||||
|0|80931C8|80928BC|0|0||||
|0|80931E0|80928D4|0|0||||
|0|80951C0|8094930|0|0||||
|0|8095C90|8095454|0|0||||
|0|80960A8|809AE84|0|0||||
|0|80969A8|8097660|0|0||||
|0|8099B2C|809BA24|80A2B9C|0||||
|0|809B6D4|809ACFC|0|0||||
|0|809C808|809BE68|80A5744|80A196C||||
|0|80A45D4|80A3960|0|0||||
|0|80A773C|80A6A54|0|0||||
|80793F0|80A7D88|80A73E4|0|0||||
|0|80AA8E8|80AA758|0|0||||
|0|80AB188|80AA3A0|0|0||||
|0|80AB1F4|80AA40C|0|0||||
|0|80ABAE0|80AAC04|0|0||||
|8095D2C|80B10B8|80B42FC|0|0||||
|8096A98|80B1E90|80B1068|0|0||||
|80985AC|80B3BA4|80B2D80|80B95A8|0||||
|808BD58|80B511C|80B6264|0|0||||
|8098A78|80B6444|80B5624|0|0||||
|808D99C|80B7070|80B85D4|0|0||||
|8098AA8|80B9244|80B85A8|0|0||||
|0|80B9C0C|80B9FB0|0|0||||
|8098AC0|80BAA80|80B9F78|0|0||||
|0|80BC5B0|80BBBA4|0|0||||
|0|80BD3A0|80BC9A8|0|0||||
|0|80BD47C|80BCA84|0|0||||
|8063894|8070B10|8070324|0|0||||
|0|805B110|805A928|0|0||||
|0|8089BDC|808927C|0|0||||
|0|80419D4|80412E0|0|0||||
|0|80B7D64|80B6FB8|0|0||||
|0|80878A8|8086EEC|0|0||||
|0|80A7E4C|80A6F34|0|0||||
|0|809A0E8|8099728|0|0||||
|0|8080E04|80800B4|0|0||||
|0|8048ED0|80486E4|0|0||||
|0|80BAC14|80BA10C|0|0||||
|0|8010364|800FEF0|0|0||||
|0|808E8DC|808DF9C|0|0|displayMainPrepScreen|void displayMainPrepScreen(int a1)|显示出击准备菜单|
|0|80A8140|80A722C|0|0||||
|0|80A64E0|80A5818|0|0||||
|80185C8|80190B0|8018CC0|0|0||||
|0|8090F14|80905D4|0|0||||
|0|808E344|808DA04|0|0||||
|0|80BAAE0|80B9FD8|0|0||||
|0|80290F8|8028C50|0|0||||
|0|80BAD64|80BA25C|0|0||||
|0|8029040|8028BA0|0|0||||
|0|800D744|800D834|0|0||||
|80974A0|80B2AF8|80B1CCC|0|0||||
|8036EB4|803E3F8|803DF48|0|0||||
|0|808F9E0|808F0A4|0|0||||
|0|80A80B8|80A71A8|0|0||||
|0|8030B88|803069C|0|0|displayViewMapPrepScreen|void displayViewMapPrepScreen(int a1)|显示地图上的准备菜单屏幕（包括调整我军单位位置等功能）|
|803A604|8041E1C|804172C|0|0||||
|803A7E8|8042010|8041920|0|0||||
|0|80A40E8|80A3474|0|0||||
|0|800B994|800BA3C|0|0||||
|801F5A0|8022404|8021F8C|0|0||||
|0|809C448|809BA80|0|0||||
|0|8092B30|8092220|0|0||||
|0|80A0DFC|80A0458|0|0||||
|0|80B92E8|80B8654|0|0||||
|0|8094398|8093AA0|0|0||||
|8094CEC|80B01BC|80AF368|0|0||||
|0|80A7424|80A6748|0|0||||
|8088F60|80A54C8|80A4850|0|0||||
|0|8066414|8065C24|0|0||||
|8079BC8|807D5B0|807CB3C|0|0||||
|0|80A7328|80A6664|0|0||||
|0|80A8618|80A76F8|0|0||||
|80456C4|80BB7FC|80BADA0|0|0||||
|0|8088D08|8088380|0|0||||
|0|80B0330|80AF4D4|0|0||||
|0|807BF9C|807C1B8|0|0||||
|0|807C954|807C208|0|0||||
|0|807CC2C|807BEE0|0|0||||
|0|807CC7C|807C10C|0|0||||
|0|807CB80|807B528|0|0||||
|80588E0|80A02EC|809F924|0|0||||
|0|80867D8|8085DCC|0|0||||
|0|80B4CEC|80B3EB4|0|0||||
|0|801C43C|801C070|0|0||||
|0|80B8384|80B75D8|0|0||||
|805183C|805CE2C|8060CC8|0|0||||
|804F96C|805BA48|8058310|0|0||||
|0|805836C|805D4F4|805E3B4|0||||
|804E744|80614B0|8057B84|0|0||||
|0|80580EC|8058010|805E130|0||||
|804E5B0|805DD44|8063348|0|0||||
|80534FC|805DE8C|8057904|0|0||||
|804EC84|8063B30|805D55C|0|0||||
|8052060|80637D4|8058920|0|0||||
|805752C|80638C0|8058CF8|0|0||||
|0|80665B8|8065DC8|0|0||||
|8071888|8083B28|8062C78|0|0||||
|0|8096A78|8096370|0|0||||
|0|80B7C6C|80B6E84|0|0||||
|0|8092838|8091F04|0|0||||
|0|80ABC28|809F8F4|0|0||||
|0|80BB46C|80BA918|0|0||||
|80675AC|80747F4|8074008|0|0||||
|0|80BB29C|80BA764|0|0||||
|80930D4|80B6404|80B7EF8|0|0||||
|0|800A614|800A618|0|0||||
|80681D8|8075584|8074D88|0|0||||
|0|80B6BBC|80B5D9C|0|0||||
|0|80AB970|80AAAA8|0|0||||
|0|800FD04|80C3CDC|0|0||||
|0|80B4050|80B322C|0|0||||
|0|80B9284|80B85E8|0|0||||
|0|807DB3C|807D020|0|0||||
|0|808341C|8082A10|0|0||||
|802D7F0|8033A38|803351C|0|0||||
|806ED34|8080B5C|807FDF0|0|0||||
|80865EC|80A2A50|0|0|0||||
|8086608|80A2A6C|0|0|0||||
|8086624|80A2A88|0|0|0||||
|8086640|80A2AA4|0|0|0||||
|80371B4|803E6F8|0|0|0||||
|803A08C|8041864|0|0|0||||
|8016BAC|8016E60|0|0|0||||
|8022F94|8027000|0|0|0||||
|802BE4C|8031DC4|0|0|0||||
|802BEA0|8031E18|0|0|0||||
|802BEE0|8031E58|0|0|0||||
|802BF48|8031EC0|0|0|0||||
|802BF7C|8031EF4|0|0|0||||
|802BFD4|8031F4C|0|0|0||||
|802C008|8031F80|0|0|0||||
|803A028|8041800|0|0|0||||
|803BF28|80437DC|0|0|0||||
|803C00C|80438C0|0|0|0||||
|805F6E0|806BF3C|0|0|0||||
|80684D8|8075898|0|0|0||||
|8071120|8083268|0|0|0||||
|80951DC|80B0694|0|0|0||||
|8097014|80B266C|0|0|0||||
|8098624|80B3C1C|0|0|0||||
|803AE90|80426B8|0|0|0||||
|8059A28|8063460|0|0|0||||
|805F5F8|806BD58|0|0|0|ekrPopup_DrawWRankUp|int ekrPopup_DrawWRankUp(int a1)||
|80185F8|80190E0|0|0|0||||
|80294A4|802E9CC|0|0|0||||
|803A6BC|8041EE4|0|0|0||||
|8015AB8|8015900|0|0|0||||
|804DAA0|80574B8|0|0|0||||
|806511C|8072398|0|0|0||||
|806DC24|807CD34|807C2C0|0|0||||
|8045FF8|8090104|0|0|0||||
|8094878|80AFE38|0|0|0||||
|8094B80|80B00A0|0|0|0||||
|8073570|8083838|8082E38|0|0||||
|8073BE8|80BD4F4|0|0|0||||
|8066094|8010230|0|0|0||||
|800CAD4|800A3C8|0|0|0||||
|8013EBC|80138A0|8013380|8013260|80131A8||||
|809DD1C|80C059C|80BFA58|80D63C4|80D16C8|SoundBiasReset|int SoundBiasReset(void)||
|809DD24|80C05A4|80BFA60|80D63CC|80D16D0|SoundBiasSet|int SoundBiasSet(void)||
|809DF3C|80C07BC|80BFC78|80D65E8|80D18EC|BXR11|int BXR11()||
|809DF40|80C07C0|80BFC7C|80D65EC|80D18F0|BXR12|int BXR12()||
|800C49C|8009F8C|800A0FC|8008A20|8008B24||||
|800CA70|800A390|0|8013990|80138D8||||
|80159A8|80157B0|8015334|80153B0|801538C|SwitchGameplayPhase|int SwitchGameplayPhase()||
|801A89C|801BAB4|801B6F8|801BAEC|801BE28|DebugMenu_WeatherIdle|int DebugMenu_WeatherIdle(int a1, int a2)||
|8028D38|802E220|802DD60|8030A84|8030B34|SetupWeatherGraphics_Maybe|int SetupWeatherGraphics_Maybe()||
|8028DA8|802E290|802DDD0|8030AF4|8030BA4|UpdateWeatherGraphics|int UpdateWeatherGraphics()||
|0|8030948|8030480|803332C|803341C||||
|0|8030988|80304C0|8033368|8033458||||
|802C5E4|803255C|0|80350D4|80351CC||||
|80394A8|8040C74|8040568|8045BB4|0||||
|804C75C|8055F34|805574C|805C034|805B290||||
|804EFB4|8058B28|8058340|805EBD4|805DAD4|StartSpellAnimFire|int StartSpellAnimFire(int a1)||
|804EFF8|8058B6C|8058384|805EC18|805DB18|StartSpellAnimElfire|int StartSpellAnimElfire(int a1)||
|804FE3C|80599B0|80591C8|805FA68|805E968||||
|0|8061570|0|80664D0|806B664||||
|0|806158C|0|8066508|0||||
|805707C|80632DC|8062AF4|806F280|806CF5C||||
|805717C|80633DC|8062BF4|806F380|806D05C||||
|0|806830C|8067B20|807473C|8072258||||
|80706A0|8082644|80818E4|808B044|8088DB8||||
|8072734|8085824|8084E28|808E5CC|808C2CC||||
|0|8088C78|0|8091AF8|808F824||||
|0|808E4D4|808DB94|8097498|80951B8||||
|0|809A270|80998B4|80A3250|0||||
|804C478|8055C50|8055468|805BD44|805AFA0||||
|0|80A30C8|80A2454|80AC424|80A7A0C||||
|0|8027584|80270FC|8028E0C|8028E60|DoItemUse|[void DoItemUse(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L365)||
|8017454|8017A00|8017610|80176AC|8017904|GetUnitSMSId|[int GetUnitSMSId(struct Unit* unit) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmunit.c#L389)||
|0|802D1E8|802CD28|802F728|802F808|ApplyStatBoosterAndGetMessageId|signed int ApplyStatBoosterAndGetMessageId(int a1, int a2)||
|8016A90|8016D0C|80168AC|8016A68|8016CC0|GetItemDisplayRangeString|[char* GetItemDisplayRangeString(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L587)||
|8026D88|80307E4|803031C|80C33A0|80BE5B4||||
|801ADEC|801C094|0|801C064|0||||
|804A4B8|8053A38|8053250|8059790|8058960|SomethingFilterBattleAnimId|int *SomethingFilterBattleAnimId(signed int a1, int a2)||
|0|0|0|80096D8|80097E8||||
|0|0|0|8016E7C|80170D4|GetItemReachBits|[int GetItemReachBits(int item) ](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitem.c#L841)||
|0|0|0|8058BF4|8057DA8||||
|0|0|0|8058D1C|8057ED0||||
|0|0|0|806BA2C|8069704||||
|0|0|0|806BAA4|806977C||||
|0|0|0|80AFFB0|80AB4F4||||
|0|0|0|80C2EF0|80BE108|MapMU_80BE108|int MapMU_80BE108(int a1, int a2, char a3)||
|0|0|0|80C31D4|80BE3E8||||
|0|0|0|8006868|8006964||||
|0|0|0|800C124|800BE38|Event83_WM_SETCAM|int Event83_WM_SETCAM(int a1)||
|0|0|0|800DD68|800DB00|Event0D_AsmCall|signed int Event0D_AsmCall(int a1)||
|0|0|0|801EAD8|801EE80||||
|0|0|0|8021360|8021668||||
|0|0|0|80214F4|80217FC||||
|0|0|0|8021688|8021990||||
|0|0|0|802881C|8028870|CanUnitUseItem|[s8 CanUnitUseItem(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L168)||
|0|0|0|802FB98|802FC48|ActionStaffDoorChestUseItem|int ActionStaffDoorChestUseItem(signed int a1)||
|0|0|0|8031F58|803200C|ApplyUnitAction|signed int ApplyUnitAction(signed int a1)||
|0|0|0|8033DC8|8033EC0||||
|0|0|0|8035DB8|8035CB8||||
|0|0|0|80379C0|8037928|AddGorgonEggTrap|int AddGorgonEggTrap(char a1, char a2, char a3, char a4, char a5)||
|0|0|0|8046D14|8046DB4||||
|0|0|0|8046D4C|8046DEC||||
|0|0|0|804CECC|804C12C||||
|0|0|0|8054F20|8054238||||
|0|0|0|80555C8|80548E0||||
|0|0|0|8075510|8073034||||
|0|0|0|8075588|80730AC||||
|0|0|0|8076BC4|807478C||||
|0|0|0|807C1DC|8079DDC|MuCtr_CreateWithReda|int MuCtr_CreateWithReda(int a1, char a2, char a3, char a4)||
|0|0|0|807C40C|807A014|MoveUnit_|int MoveUnit_(int a1, char a2, char a3, unsigned __int16 a4)||
|0|0|0|8087AC0|80857F4||||
|0|0|0|808895C|8086690||||
|0|0|0|809A7EC|8098514||||
|0|0|0|80A4EA8|80A10D0||||
|0|0|0|8084678|8082338||||
|0|0|0|807004C|806DD34||||
|0|0|0|808E688|808C388|MMB_DrawStatusText|int MMB_DrawStatusText(int a1, int a2, signed int a3)||
|0|0|0|80CB3C0|80C6474||||
|0|0|0|808ACB8|8088A2C|HbPopulate_SSStatus|[void HbPopulate_SSStatus(struct HelpBoxProc* proc)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/statscreen.c#L1956)||
|0|0|0|8028BB8|8028C0C|GetItemCantUseMsgid|[int GetItemCantUseMsgid(struct Unit* unit, int item)](https://github.com/laqieer/fireemblem8u/blob/remove_tools/src/bmitemuse.c#L295)||
|0|0|0|8074050|8071B6C||||
|0|0|0|80389CC|8038900||||
|0|0|0|8058E44|8057FF8|GetSpellAnimId|int GetSpellAnimId(unsigned __int16 a1, unsigned __int16 a2)||
|0|0|0|8091B88|808F8B4||||
|0|0|0|80CDCCC|80C8D30||||
|0|0|0|80CB114|80C6204||||
|0|0|0|808941C|8087184|DrawUnitStatScreen|int DrawUnitStatScreen()||
|800A82C|8003F04|8004028|0|0||||
|0|800409C|80041C0|0|0||||
|8016DA8|8017208|8016DB4|0|0|GetWeaponRangeMask|signed int GetWeaponRangeMask(unsigned __int8 a1)||
|0|8035B0C|8035634|0|0||||
|0|805313C|8052954|0|0||||
|0|8053218|8052A30|0|0||||
|0|80A1398|80A0A10|0|0||||
|8097DA8|80B33C4|80B25A0|0|0||||
|8097DD8|80B33F4|80B25D0|0|0||||
|0|8065294|8064AC8|0|0|setSpecialAnimationEffectInfoType|void setSpecialAnimationEffectInfoType(AnimationInterpreter *AIS, __int16 type)||
|0|80BCFC4|807B774|0|0||||
|803C080|802BCAC|800AE04|0|0||||
|0|800E284|800E378|0|0||||
|0|80110E4|8010C94|0|0||||
|0|801233C|8011CA4|0|0||||
|0|8012FEC|8012934|0|0||||
|0|8027158|8026CD0|0|0|CanUnitUseItem|unsigned int CanUnitUseItem(int a1, int a2)||
|0|802D4CC|802D00C|0|0||||
|802A028|802F6E4|802F218|0|0||||
|802D010|80331C8|8032C98|0|0||||
|803F7E4|80480F0|8047904|0|0||||
|80455A4|804E7D8|804DFFC|0|0||||
|0|80532F0|8052B08|0|0||||
|0|8063FBC|80637D4|0|0||||
|0|806C2DC|806BAF0|0|0||||
|0|8074F40|8074744|0|0||||
|80740D0|807BCEC|807B278|0|0||||
|0|807C1FC|807B788|0|0|ForceKillFireRing|int ForceKillFireRing()||
|0|807E2F0|807D5BC|0|0||||
|0|807E584|807D840|0|0||||
|0|807FC58|807EE90|0|0||||
|0|80A7D50|80A6E2C|0|0||||
|0|80A806C|80A715C|0|0||||
|0|80A82B8|80A73AC|0|0||||
|80964E0|80B18D4|80B0AAC|0|0||||
|809656C|80B1978|80B0B50|0|0||||
|0|80822DC|8081580|0|0||||
|0|8067F90|80677A4|0|0|playBattleAnimationSFX|int playBattleAnimationSFX(int a1, int a2)|职业战斗动画音效播放|
|0|809A560|8099BA4|0|0||||
|0|80A5D24|80A503C|0|0||||
|800CAB8|800A3B8|0|0|0||||
|8094228|80BD830|0|0|0||||
|80599D0|80833B4|0|0|0||||
|801A760|801B96C|0|0|0||||
