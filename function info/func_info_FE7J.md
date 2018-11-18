# Function infomation in FE7(CN).gba

|Address|Name|Declaration|Comment|
|----|----|----|----|
|8000000|_start|||
|80000FC|intr_main|unsigned int intr_main()||
|8000304|Store160To80Structs|int Store160To80Structs(int result, unsigned int a2)||
|8000360|ARM_ComputeChecksum32|int ARM_ComputeChecksum32(unsigned __int16 *a1, int a2)||
|80003A8|ARM_FillRect|_WORD *ARM_FillRect(_WORD *result, int a2, int a3, __int16 a4)||
|8000494|IRAMARM_CopyToSecondaryOAM|unsigned int IRAMARM_CopyToSecondaryOAM(unsigned int result, int a2, _WORD *a3, __int16 a4)||
|8000534|IRAMARM_CopyToPrimaryOAM|void IRAMARM_CopyToPrimaryOAM()||
|8000A20|AgbMain|void AgbMain(int a1, int a2, int a3, int a4, char a5)||
|8000BB8|generateRN65536|int generateRN65536()|生成一个0-65535的随机整数|
|8000D4C|readRNFromWRAMToIRAM|void readRNFromWRAMToIRAM(int a1)||
|8000DDC|geneateRN100|int geneateRN100()|生成一个0-99的随机整数|
|8000E08|geneateRNRange|int geneateRNRange(int range)|生成0-(range-1)的随机整数<br>即允许自定义范围|
|8000E38|ifHappenSingleRN|signed int ifHappenSingleRN(int pr)|单乱数判定是否发生<br>pr=概率(0~100)|
|8000E5C|ifHappenDoubleRN|signed int ifHappenDoubleRN(int pr)|双乱数判定是否发生<br>pr=概率(1~100)|
|8000EEC|getPlayTime|int getPlayTime()||
|8000F04|setPlayTime|void setPlayTime(int time)||
|8000FD4|SetBGMapSyncFlag|void SetBGMapSyncFlag(u8 flag)||
|8000FF0|EnableBGMapSync|void EnableBGMapSync(u8 n)||
|8001034|EnablePaletteSync|void EnablePaletteSync()||
|8001048|DisablePaletteSync|void DisablePaletteSync()||
|800105C|OutputToBGPaletteBuffer|void OutputToBGPaletteBuffer(void *src, signed int paletteOffset, signed int len)||
|8001370|GetBackgroundTileDataOffset|int GetBackgroundTileDataOffset(unsigned __int16 a1)||
|80013A4|GetTileIndex|int GetTileIndex(unsigned __int16 a1, unsigned __int16 a2)||
|800140C|SetBackgroundTileDataOffset|int SetBackgroundTileDataOffset(unsigned __int16 a1, signed int a2)||
|80014B4|SetBackgroundScreenSize|int SetBackgroundScreenSize(unsigned __int16 a1, char a2)||
|80017E8|memClear2K|void memClear2K(void *mem, int num)|清2K大小的一片连续内存<br>mem是起始地址,num是要置的数?|
|80019CC|_UpdateKeyStatus|int UpdateKeyStatus(int a1, __int16 a2)||
|8001BA0|UpdateKeyStatus|int UpdateKeyStatus(int a1)||
|8001D64|setBGnPosition|void setBGnPosition(unsigned __int16 n, __int16 x, __int16 y)||
|8002BC0|BG_GetMapBuffer|__int16 (*BG_GetMapBuffer(int a1))[1024]||
|8002F54|TileTransferInfoAdd|void TileTransferInfoAdd(void *src, void *dst, int len)||
|8002FD8|RegisterFillTile|int RegisterFillTile(int a1, int a2, int a3)||
|8003264|SetOBJAttribute|int SetOBJAttribute(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)||
|8003DF0|selfAdaptMPlayStart|void selfAdaptMPlayStart(signed int a1, int a2)|自适应音乐播放函数<br>即他自己会根据输入参数取值判断调用对应播放函数<br>既可以通过指定曲子编号播放，也可以通过指定曲子地址播放|
|8004240|huffmanDecompressText|void huffmanDecompressText(int a1, int a2)||
|8004370|Create6C|_6CStruct *Create6C(_6CCode *code, signed int parent)|新建一个6C结构体并设置其父节点|
|80043D4|Create6CBlocking|_6CStruct *Create6CBlocking(_6CCode *code, signed int parent)|新建一个6C结构体并使父节点阻塞计数器加1|
|8004404|Delete6C|void Delete6C(_6CStruct *_6C)|删除指定的6C结构体|
|8004460|Delete6CWrapper|void Delete6CWrapper(_6CStruct *6C)|删除指定的6C结构体（封装好的接口）|
|8004478|Allocate6C|_6CStruct *Allocate6C()|在分配表中登记一个新6C|
|8004498|InsertMain6C|void InsertMain6C(_6CStruct *child, int parentIndex)|设置亲节点，亲节点是主6C，parent是其在主6C指针表中的索引|
|80044B8|InsertChild6C|void InsertChild6C(_6CStruct *child, _6CStruct *parent)|设置亲节点，parent是亲6C指针|
|80044CC|Isolate6C|int Isolate6C(_6CStruct *6C)|孤立（离析）6C结构体|
|8004510|Exec6C|void Exec6C(_6CStruct *_6C)|递归执行6C结构体|
|800457C|breakLoop|void breakLoop(_6CStruct *6C)|清6C结构体循环函数以跳出循环|
|8004584|Find6C|_6CStruct *Find6C(struct _6CCode *startCode)|寻找ROM中某段6C代码所对应的内存中的6C结构体<br>（其实就是匹配第一个成员来搜索结构体）|
|80045A4|Find6CRunning|_6CStruct *Find6CRunning(struct _6CCode *startCode)|根据第一个成员（6CCode开始位置的指针）搜索活动中（非阻塞）的6C结构体|
|80045D0|Find6CByUserval|_6CStruct *Find6CByUserval(int userVal)|根据设置的用户变量来搜索6C结构体|
|80045FC|Goto6CLabel|void Goto6CLabel(struct _6CStruct *6C, int sarg)|移动6C结构体对应的6C代码的游标（当前执行位置）到下一条code=B且sarg匹配的代码处|
|8004644|Set6CDestructor|void Set6CDestructor(_6CStruct *6C, int (*destructor)(int))|设置6C结构体的析构函数|
|8004648|ForEach6CStruct|void ForEach6CStruct(int (*function)(int))|对每个6C结构体执行函数|
|8004670|ForEach6CMatch|void ForEach6CMatch(struct _6CCode *code, int (*func)(int))|对第一个元素（指向6C代码的最开始的指针） 匹配的每一个6C结构体执行函数|
|8004698|ForEach6CMarked|void ForEach6CMarked(int userVal, int (*func)(int))||
|80046C4|BlockEach6CMarked|void BlockEach6CMarked(int userVal)|阻塞所有标记匹配（userVal与给定的值相同）的6C结构体|
|80046E8|UnblockEach6CMarked|int UnblockEach6CMarked(int userVal)|激活所有标记匹配（userVal与给定的值相同）的6C结构体|
|8004710|DeleteEachMarked6C|void DeleteEachMarked6C(int userVal)|删除所有标记（userVal匹配）的6C结构体|
|800473C|callDelete6CWrapper|void callDelete6CWrapper(_6CStruct *_6C)|删除指定的6C结构体|
|8004748|DeleteAll6CMatch|void DeleteAll6CMatch(struct _6CCode *startCode)|删除所有指定的6C代码所对应的6C结构体|
|8004758|callBreakLoop|void callBreakLoop(_6CStruct *_6C)|清零指定6C结构体循环函数的接口函数|
|8004764|callBreakLoopAll6CMatch|void callBreakLoopAll6CMatch(struct _6CCode *startCode)|清零给定6C代码对应的所有的6C结构体的循环函数|
|8004774|ForAllFollowing6C|void ForAllFollowing6C(_6CStruct *6C, int (*func)(int))|对于给定6C结构体所有的后继节点和第一个子节点执行函数|
|80047B8|Interpret6C_00Delete|int Interpret6C_00Delete(_6CStruct *_6C)|删除自己(标识结束)|
|80047D4|Interpret6C_02CallRoutineAndContinue|signed int Interpret6C_02CallRoutineAndContinue(_6CStruct *_6C)|对6C结构体调用给定函数并继续|
|80047E8|Interpret6C_16CallRoutine|int Interpret6C_16CallRoutine(struct _6CStruct *_6C)|调用函数，其返回值为0则挂起，否则继续|
|8004800|Interpret6C_18CallRoutineWithArg|int Interpret6C_18CallRoutineWithArg(_6CStruct *_6C)|带参数(sarg)调用函数|
|8004820|Interpret6C_14CallRoutineYieldWhileReturnsTrue|signed int Interpret6C_14CallRoutineYieldWhileReturnsTrue(_6CStruct *_6C)|调用函数，返回1则挂起且游标不前移（前移后又退回），否则继续|
|800485C|Interpret6C_04SetDestructor|signed int Interpret6C_04SetDestructor(_6CStruct *_6C)|设置析构函数|
|8004878|Interpret6C_05AddChild|signed int Interpret6C_05AddChild(_6CStruct *_6C)|给指定6C结构体增加一个子节点（根据6C代码起始地址创建）|
|8004894|Interpret6C_06AddChildAndYield|int Interpret6C_06AddChildAndYield(_6CStruct *_6C)|增加子节点并挂起|
|80048B0|Interpret6C_07AddGlobal6C|signed int Interpret6C_07AddGlobal6C(_6CStruct *_6C)|增加主6C(全局6C)|
|80048D0|Interpret6C_08Until6CStructExists|signed int Interpret6C_08Until6CStructExists(_6CStruct *_6C)|检查是否有匹配的6C结构体，有则继续，否则挂起且游标不前进（等待对应的6C结构体出现再执行）|
|800493C|Interpret6C_0DJumpto|signed int Interpret6C_0DJumpto(_6CStruct *_6C)|移动游标到指定位置|
|800494C|Interpret6C_0CGotoLabel|signed int Interpret6C_0CGotoLabel(struct _6CStruct *_6C)|移动游标到指定标签(sarg)处|
|8004960|SleepCallback6C|int SleepCallback6C(_6CStruct *_6C)|sleepTimer--,减到0则跳出睡眠循环|
|800497C|Interpret6C_0ESleep|int Interpret6C_0ESleep(_6CStruct *_6C)|睡眠一段时间(sarg)|
|80049C0|Interpret6C_10Yield|int Interpret6C_10Yield()|挂起|
|8004A04|Interpret6C_17DeleteOtherDuplicates|signed int Interpret6C_17DeleteOtherDuplicates(_6CStruct *_6C)|删除与给定6C结构体重复(对应的6C代码相同)的所有其他6C结构体|
|8004A48|Interpret6C_12SetBitFieldBit2|signed int Interpret6C_12SetBitFieldBit2(_6CStruct *a1)|位域置bit2|
|8004A60|Interpret6C|void Interpret6C(_6CStruct *6C)|解释执行6C代码|
|8004AA8|nullsub_2|void nullsub_2()||
|8004AAC|ForEach6CDoNothing|int ForEach6CDoNothing(_6CStruct *a1, _DWORD *a2)||
|8004BC4|unknown_libname_1|int unknown_libname_1()|FE8(US) Stan 2017/10/15|
|8004C6C|GetIconGfxIndex|signed int GetIconGfxIndex(char a1)|Arguments: r0 = Icon Index|
|8004C98|GetIconTileIndex|int GetIconTileIndex(int a1)|Arguments: r0 = Icon Id|
|8004D04|DrawIcon|int DrawIcon(_WORD *a1, int a2, int a3)||
|8004D74|LoadIconObjectGraphics|int LoadIconObjectGraphics(int a1, __int16 a2)|Arguments: r0 = Icon Id, r1 = Output Root Tile Index|
|8004DD4|SetupDebugFontForBG|int SetupDebugFontForBG(int a1, signed int a2)|Arguments: r0 = BG Id, r1 = Tile Offset|
|8004F08|ClearSmallStringBuffer|int ClearSmallStringBuffer()||
|8004F5C|StoreNumberStringOrDashesToSmallBuffer|int StoreNumberStringOrDashesToSmallBuffer(int a1)||
|8005010|PrintStringToDBG|int PrintStringToDBG(_BYTE *a1)|Arguments: r0 = String pointer|
|800515C|SetupDebugFontForOBJ|int SetupDebugFontForOBJ(int a1, int a2)||
|8005280|Font_InitForUIDefault|void Font_InitForUIDefault()||
|80052A4|Font_InitForUI|int Font_InitForUI(_DWORD *a1, int a2, __int16 a3, __int16 a4)||
|80052E0|SetFontGlyphSet|int SetFontGlyphSet(int a1)||
|8005308|Font_ResetAllocation|signed int Font_ResetAllocation()||
|8005320|SetFont|int *SetFont(int a1)||
|8005344|Text_Init|int Text_Init(int a1, __int16 a2)||
|8005394|InitTextBatch|int InitTextBatch(int a1)||
|80053B0|Text_Clear|int Text_Clear(int a1)||
|8005444|Text_SetXCursor|int Text_SetXCursor(int result, char a2)||
|8005450|Text_SetColorId|int Text_SetColorId(int result, char a2)||
|8005454|Text_GetColorId|int Text_GetColorId(int a1)||
|8005458|Text_SetParameters|int Text_SetParameters(int result, char a2, char a3)||
|8005460|Text_Draw|int Text_Draw(unsigned __int8 *a1, _WORD *a2)||
|80054CC|GetStringTextWidth|int GetStringTextWidth(unsigned __int8 *a1)||
|80055C8|String_GetEnd|unsigned __int8 *String_GetEnd(unsigned __int8 *result)||
|80055DC|showFont2|void showFont2(void *mempool, _BYTE *text)||
|80056D8|showFont1|_BYTE *showFont1(void *mempool, _BYTE *text)||
|8005998|DrawTextInline|int DrawTextInline(unsigned __int8 *a1, _WORD *a2, char a3, char a4, __int16 TileSize, unsigned __int8 *String)|Arguments: r0 = Text Struct (0 for temporary), r1 = Output tile root pointer, r2 = color id, r3 = local x start, [sp] = tile width, [sp+4] = String pointer|
|8005ACC|InitSomeOtherGraphicsRelatedStruct|int InitSomeOtherGraphicsRelatedStruct(int a1, int a2, char a3)||
|8005E88|NewGreenTextColorManager|int NewGreenTextColorManager(signed int a1)|Arguments: r0 = Parent|
|8005F14|DoNothing|int DoNothing()||
|8005F70|Text_DrawSpecialUiChar|int Text_DrawSpecialUiChar(int a1, int a2, int a3)||
|8005FAC|DrawSpecialUiChar_|int DrawSpecialUiChar_(int a1, int a2)||
|8006028|DrawSpecialUiDecNumber|int DrawSpecialUiDecNumber(_WORD *a1, int a2, int a3, int a4)||
|8006074|DrawDecNumber|int DrawDecNumber(_WORD *a1, int a2, int a3)||
|80060D0|DrawStatScreenBonusNumber|int DrawStatScreenBonusNumber(int a1, _WORD *a2)||
|8006320|battleAnimationScriptProc|void battleAnimationScriptProc()||
|8006424|AIS_New|AnimationInterpreter *AIS_New(u32 *a1, u16 a2)||
|800650C|callBattleAnimationOAMInfoHandler2|void callBattleAnimationOAMInfoHandler2(int AIS)||
|8006518|BattleAnimationScriptHandler|signed int BattleAnimationScriptHandler(AnimationInterpreter *AIS)||
|8006698|LinkAIS|int LinkAIS(int a1)||
|80066E0|BattleAnimationOAMInfoHandler2|void BattleAnimationOAMInfoHandler2(AnimationInterpreter *AIS)||
|8006840|ClearIntermediateOAMBuffers|int ClearIntermediateOAMBuffers()||
|8006884|RegisterObjectAttributes_SafeMaybe|int RegisterObjectAttributes_SafeMaybe(int a1, __int16 a2, unsigned __int8 a3, int a4, __int16 a5)||
|80068C4|RegisterObjectAttributes|int RegisterObjectAttributes(int a1, __int16 a2, __int16 a3, int a4, __int16 a5)||
|800694C|StartHiObjProc|int StartHiObjProc(signed int a1, __int16 a2, int a3, int a4, int a5, __int16 a6)||
|8006990|MoveHiObjProc|int MoveHiObjProc(int *a1, int a2, int a3)||
|80069B0|GetPortraitStructPointer|int *GetPortraitStructPointer(int a1)||
|80069C4|ResetFaces|int ResetFaces()||
|80069E0|SetupFaceGfxData|int SetupFaceGfxData(int *a1)||
|8006A98|NewFaceAuto|int NewFaceAuto(int a1, __int16 a2, __int16 a3, int a4)||
|8006AC4|NewFace|_6CStruct *NewFace(int a1, int r1_0, __int16 a3, __int16 a4, int a2)||
|8006BE0|DeleteFaceByIndex|int DeleteFaceByIndex(int a1)||
|8006BF8|SetFaceDisplayBits|int SetFaceDisplayBits(int a1, int a2)||
|8006C14|SetFaceDisplayBitsById|int SetFaceDisplayBitsById(int a1, int a2)||
|8006C30|GetFaceDisplayBitsById|int GetFaceDisplayBitsById(int a1)||
|8006C48|ApplyFaceDisplayBitChange|int ApplyFaceDisplayBitChange(int a1)||
|8006DAC|LoadMiniMugGraphics|int LoadMiniMugGraphics(int a1, int a2, int a3)||
|8006E10|DrawMiniMug|int DrawMiniMug(int a1, int a2, int a3, int a4, char a5)|r0 = minimug id, r1 = target bg, r2 = tile id, r3 = palid|
|80070AC|isHighPortrait|bool isHighPortrait(int portraitID)|根据头像id判断其在人物详情界面的头像框内的高度是否需要调整|
|80078D4|SetFaceBlinkControl|int SetFaceBlinkControl(int a1, int a2)|Arguments: r0 = Face, r1 = ?|
|80078F4|SetFaceBlinkControlById|int SetFaceBlinkControlById(int a1, int a2)|Arguments: r0 = Face Id, r1 = ?|
|8007A5C|NewFace2|int NewFace2(int a1, int a2, __int16 a3, int a4, int a5)||
|8007C64|Dialogue_ClearFaceReferences|int Dialogue_ClearFaceReferences()||
|8007C88|Dialogue_InitGfx|int Dialogue_InitGfx(__int16 a1, int a2, unsigned __int8 a3)|Arguments: r0 = root tile index, r1 = Line count?, r2 = (bool) load dialogue bubble gfx?|
|8007D28|Dialogue_InitGfxObj|int Dialogue_InitGfxObj(__int16 a1, int a2, int a3)||
|8007DF4|SetupDialogueFont|int SetupDialogueFont()||
|8007F14|ClearDialogueFlags|_DWORD *ClearDialogueFlags()||
|8007F24|SetDialogueFlag|int SetDialogueFlag(int a1)||
|8007F84|Dialogue_SetDefaultTextColor|int Dialogue_SetDefaultTextColor(char a1)||
|8009E30|DoesTCSWrapperExist|bool DoesTCSWrapperExist()||
|8009E60|.gcc2_compiled._0|int gcc2_compiled__0()||
|8009FAC|calculateTextBoxWidth|signed int calculateTextBoxWidth(int a1, unsigned __int8 a2)|处理对话中头像显示和对话框|
|800A378|MapEventEngineExists|bool MapEventEngineExists()||
|800A4EC|_WhileFace6CExists|int WhileFace6CExists(int a1)||
|800ACE8|NewPopupSimple|int NewPopupSimple(int a1, int a2, char a3, signed int argParent)||
|800AD04|NewPopup|int NewPopup(int a1, int a2, char a3, __int16 a4, char argObjPaletteId, signed int argParent)|Arguments: r0 = Popup Definition, r1 = Time for it to be up (negative for wait for press), r2 = Window Style, r3 = Icon Obj Tile Index|
|800EFB8|GetChapterAllyUnitCount|int GetChapterAllyUnitCount()||
|800F568|EventC7_|signed int EventC7_(int a1)||
|800F588|EventC8_|signed int EventC8_(int a1)||
|800F8A4|EventCD_|int EventCD_(int a1)||
|8011568|fubuki1|void fubuki1(_6CStruct *ctx)||
|8011628|fubuki2|void fubuki2(_6CStruct *ctx)||
|80116A8|fubuki3|void fubuki3(_6CStruct *ctx)||
|80116F0|fubuki4|void fubuki4(_6CStruct *ctx)||
|801176C|fubuki5|void fubuki5()||
|80117AC|eventCodeFunc_DF|signed int eventCodeFunc_DF(_6CStruct *parent)|parent = 0x2025330|
|8012658|TCS_New|int TCS_New()|Arguments: r0 = Source, r1 = OAM index<br>Returns: r0 = TCS pointer (0 on bad alloc)|
|8012694|TCS_Update|int TCS_Update(_DWORD *a1, __int16 a2, __int16 a3)||
|80126BC|TCS_RegisterGraphics|int TCS_RegisterGraphics(_DWORD *a1, __int16 a2, __int16 a3)||
|8012718|TCS_Exec|signed int TCS_Exec(int a1)||
|8012808|TCS_QueueRotScaleData|int TCS_QueueRotScaleData(_DWORD *a1)|Arguments: r0 = The Confusing Struct|
|8012924|TCS_SetROMTCS|int TCS_SetROMTCS(_DWORD *a1)|Arguments: r0 = TCS, r1 = Source|
|8012A54|TCS_Load|_DWORD *TCS_Load(_DWORD *result, unsigned __int16 *a2)|Arguments: r0 = The Confusing Struct, r1 = Its source|
|8012A78|TCS_ExecOneFrame|int TCS_ExecOneFrame(int a1)||
|8012A98|TCS_Init|int TCS_Init(_DWORD *a1, unsigned __int16 *a2, __int16 a3)||
|8012AD0|TCS_Alloc|int *TCS_Alloc(int a1)||
|8012B70|TCSWrapper_SetParameters|int TCSWrapper_SetParameters(_DWORD *a1, int a2, int a3, int a4)||
|8013200|SetNextGameActionId|int SetNextGameActionId(u8 a1)||
|8013214|SetNextChapterId|int SetNextChapterId(u8 a1)||
|8013318|decodeText|void *decodeText(int textID)||
|8013488|FilterSomeTextFromStandardBuffer|void *FilterSomeTextFromStandardBuffer()||
|8013688|AutoCopyOrDecompressImageToVRAM|void AutoCopyOrDecompressImageToVRAM(_BYTE *src, int dst)||
|80136C8|FilterR0ForRawCopy|int FilterR0ForRawCopy(_DWORD *a1)||
|801372C|RegisterObjectTileGraphics|int RegisterObjectTileGraphics(int a1, int a2, int a3, int a4)|Arguments: r0 = Source Gfx, r1 = VRAM Target, r2 = tile width, r3 = tile height|
|8013758|CopyTileGfxForObj|int CopyTileGfxForObj(int a1, int a2, int a3, int a4)|Arguments: r0 = Source, r1 = Destination, r2 = Tile Width, r3 = Tile Height|
|8013B68|SetSomethingInPaletteBB_2A|void SetSomethingInPaletteBB_2A(__int16 a1)||
|8013B78|SetSomethingInPaletteBB_5A|void SetSomethingInPaletteBB_5A(__int16 a1)||
|8013B8C|SetSomethingInPaletteBB_8A|void SetSomethingInPaletteBB_8A(__int16 a1)||
|8013BA0|GetSomethingInPaletteBB_2A|int GetSomethingInPaletteBB_2A()||
|8013BAC|GetSomethingInPaletteBB_5A|int GetSomethingInPaletteBB_5A()||
|8013BBC|GetSomethingInPaletteBB_8A|int GetSomethingInPaletteBB_8A()||
|8013C18|ArchivePalette|int ArchivePalette(int a1)||
|80143D8|IsFadeActive|bool IsFadeActive()||
|8014458|NewFadeInBlack|int NewFadeInBlack(__int16 a1, signed int a2)||
|80147B8|ContinueUntilSomeTransistion6CExists|int ContinueUntilSomeTransistion6CExists(int a1)||
|8014B68|NewPaletteAnimator|_6CStruct *NewPaletteAnimator(int a1, __int16 a2, int a3, __int16 a4, signed int parent)||
|80151D4|RerangeSomething|int RerangeSomething(signed int a1)||
|80151FC|PlaySpacialSoundMaybe|int PlaySpacialSoundMaybe(int a1, signed int a2)|r0 = some sound id, r1 = some ranged thing|
|80157B0|SwitchPhases|int SwitchPhases()||
|8015A68|HandleCursorMovement|int HandleCursorMovement(int a1)||
|8015B90|MoveCameraByStepMaybe|int MoveCameraByStepMaybe(__int16 a1)||
|8015D10|GetSomeAdjustedCameraX|int GetSomeAdjustedCameraX(int a1)||
|8015D54|GetSomeAdjustedCameraY|int GetSomeAdjustedCameraY(int a1)||
|8016080|StoreAdjustedCameraPositions|int StoreAdjustedCameraPositions(int a1, int a2, _DWORD *a3, _DWORD *a4)||
|801615C|EnsureCameraOntoPosition|signed int EnsureCameraOntoPosition(signed int a1, int a2, int a3)|r0 = caller 6C, r1 = map x, r2 = map y<br>returns: r0 = 1 if a GENS has been created|
|80161EC|ShouldMoveCameraPosSomething|bool ShouldMoveCameraPosSomething(int a1, int a2)|Arguments: r0 = x, r1 = y|
|8016620|CanUnitUseAsWeapon|signed int CanUnitUseAsWeapon(_DWORD *a1, int a2)||
|80167FC|CanUnitUseWeapon|int CanUnitUseWeapon(char *a1, int a2)||
|80168EC|DrawItemMenuCommand|int DrawItemMenuCommand(void *a1, int a2, char a3, int a4)||
|8016A4C|DrawTextAndIconForItem|int DrawTextAndIconForItem(int a1, int a2, _WORD *a3)|Arguments: r0 = Text Info Struct, r1 = Item Short, r2 = Position|
|8016BC4|GetUnitEquippedWeapon|int GetUnitEquippedWeapon(_DWORD *a1)||
|8016BF4|GetUnitEquippedWeaponSlot|signed int GetUnitEquippedWeaponSlot(_DWORD *a1)||
|8016C54|EquipUnitItemByIndex|int EquipUnitItemByIndex(int a1, int a2)||
|8016D0C|GetItemRangeString|char *GetItemRangeString(unsigned __int8 a1)||
|8016DA4|GetWeaponRankLevel|signed int GetWeaponRankLevel(signed int a1)||
|8016DD8|GetWRankTextBuffer|int *GetWRankTextBuffer(unsigned __int8 a1)||
|8016E8C|GetWRankBarData|int GetWRankBarData(signed int a1, _DWORD *a2, signed int *a3)||
|80171B4|IsItemHammernable|signed int IsItemHammernable(int a1)||
|8017208|GetWeaponRangeMask|signed int GetWeaponRangeMask(unsigned __int8 a1)||
|8017310|GetUnitRangeMask|signed int GetUnitRangeMask(int a1, int a2)||
|8017364|GetUnitStaffRangeMask_0|signed int GetUnitStaffRangeMask_0(int a1, int a2)||
|80174A0|GetConvoyTotalGoldValue|int GetConvoyTotalGoldValue()||
|80174F4|GetUnitsTotalHeldGoldValue|int GetUnitsTotalHeldGoldValue()||
|8017608|getLowByte|int getLowByte(int result)|取低字节|
|8017684|GetItemAttributes|int GetItemAttributes(unsigned __int8 a1)||
|801782C|GetItemWeaponEffect|int GetItemWeaponEffect(unsigned __int8 a1)||
|80178C8|ClearUnits|void ClearUnits()||
|801793C|GetNextFreeUnitStructPtr|int GetNextFreeUnitStructPtr(int a1)||
|8017A44|UnitAddItem|signed int UnitAddItem(int a1, __int16 a2)|Arguments: r0 = Unit, r1 = Item<br>Returns: r0 = 0 if no room left|
|8017A78|RemoveUnitBlankItems|int RemoveUnitBlankItems(int a1)||
|8017AE8|UnitHasItem|signed int UnitHasItem(int a1, int a2)||
|8017CE4|CharFillInventoryFromCode|int CharFillInventoryFromCode(int a1, int a2)||
|8017DE0|LoadUnitSupports|int LoadUnitSupports(int a1)||
|8017E0C|AutolevelUnitWeaponRanks|int AutolevelUnitWeaponRanks(_DWORD *a1, int a2)||
|8017F70|AutolevelUnit|int AutolevelUnit(_DWORD *a1)||
|8018124|GetUnitByCharId|int GetUnitByCharId(int a1)||
|8018160|GetNonAllyUnitStructById|int GetNonAllyUnitStructById(int a1, int a2)||
|80181A4|CanUnitRescue|signed int CanUnitRescue(int *a1, int a2)||
|80182A8|HandleAllegianceChange|int HandleAllegianceChange(const void *a1, int a2)||
|8018318|ApplyUnitMovement|int ApplyUnitMovement(int a1)||
|801835C|GetUnitDropLocation|int GetUnitDropLocation(int a1, int *a2, int *a3)||
|80184DC|SetupActiveUnit|int SetupActiveUnit(_BYTE *a1)||
|8018554|SetActiveUnit|int SetActiveUnit(_BYTE *a1)||
|8018658|CleanupUnitStatesForPhaseSwitch|int CleanupUnitStatesForPhaseSwitch()||
|801881C|ValidateUnitItem|int ValidateUnitItem(int a1, int a2)|Arguments: r0 = Unit, r1 = Item Slot Index|
|8018840|GetUnitAid|int GetUnitAid(int *a1)||
|801899C|GetUnitUseFlags|int GetUnitUseFlags(int a1)||
|8018A14|GetRedTeamUseFlags|int GetRedTeamUseFlags()||
|8018A4C|CanUnitMove|signed int CanUnitMove()||
|8018B0C|IsPosMagicSealed|signed int IsPosMagicSealed(int a1, int a2)||
|8018E60|GetUnitCurrentHP|int GetUnitCurrentHP(int a1)||
|8018EE0|GetUnitSkill|int GetUnitSkill(_DWORD *a1)||
|8018F20|GetUnitSpeed|int GetUnitSpeed(_DWORD *a1)||
|8019030|SetUnitHP|int SetUnitHP(int a1, char a2)|Arguments: r0 = Unit, r1 = New HP|
|801906C|UnitTryHeal|int UnitTryHeal(int a1, int a2)||
|80190F4|GetUnitStruct|int GetUnitStruct(unsigned __int8 a1)||
|8019150|CanUnitCrossTerrain|signed int CanUnitCrossTerrain(int a1, int a2)||
|8019454|SetupMapRowPointers|int SetupMapRowPointers(int a1, _DWORD *a2, int a3, int a4)||
|8019494|ClearMapWith|int ClearMapWith(int a1, unsigned __int8 a2)||
|80195BC|LoadChapterMapGfx|int LoadChapterMapGfx(int a1)|Arguments: r0 = Chapter Index|
|80197C8|UpdateGameTileGfx|int UpdateGameTileGfx(int a1, int a2, int a3, int a4, int a5)|Arguments: r0 = output map buffer, r1 = local X, r2 = local Y, r3 = camera X, [sp] = camera Y|
|8019838|nullsub_3|void nullsub_3()||
|80198EC|UpdateGameTilesGraphics|int UpdateGameTilesGraphics()|Will update BG3|
|801996C|PrepareMapChangeGfx|int PrepareMapChangeGfx()||
|8019C50|UpdateUnitMapAndVision|int UpdateUnitMapAndVision()||
|8019E24|UpdateTrapFogVision|int UpdateTrapFogVision()||
|8019E50|UpdateTrapHiddenStates|int UpdateTrapHiddenStates()||
|8019EA4|RefreshFogAndUnitMaps|int RefreshFogAndUnitMaps()||
|801A030|FillMovementRangeMapSomehow|int FillMovementRangeMapSomehow(int a1, int a2, int a3)||
|801A060|FillMovementMapSomehow|int FillMovementMapSomehow(int a1, int a2, int a3)||
|801A0C0|StoreMovCostTable|int StoreMovCostTable(int a1)||
|801A0E0|FillMovementMap|int FillMovementMap(int a1, int a2, char a3, int a4)||
|801A23C|GenerateMovementInstructionsToPoint|int GenerateMovementInstructionsToPoint(int a1, int a2, _BYTE *a3)||
|801A424|CheckForHiddenStuffUnitMovement|int CheckForHiddenStuffUnitMovement(_DWORD *a1, int a2, int a3)|Arguments: r0 = Unit, r1 = x, r2 = y|
|801A4DC|DoSomeMovementMapFiltering|int DoSomeMovementMapFiltering()||
|801B1F0|FillMapStaffRangeForUnit|int FillMapStaffRangeForUnit(int a1)|r0 = Unit Struct|
|801B3E8|ApplyStuffToRangeMaps|int ApplyStuffToRangeMaps(unsigned __int8 a1)||
|801B528|MapSetInMagicSealedRange|int MapSetInMagicSealedRange(char a1)||
|801B57C|FillRangeMap|int FillRangeMap(__int16 a1, __int16 a2, __int16 a3, __int16 a4)||
|801BBC4|DebugMenu_ClearIdle|int DebugMenu_ClearIdle(int a1, int a2)||
|801C030|StartupDebugMenu_InitializeFileEffect|signed int StartupDebugMenu_InitializeFileEffect(int a1, int a2)||
|801C224|DebugChargeMenu_Idle|int DebugChargeMenu_Idle(int a1, int a2)||
|801C8D4|DisplayUnitEffectRange|int DisplayUnitEffectRange(unsigned __int8 *a1)||
|801CA60|PlayerPhase_SoundsLikeDangerZone|int PlayerPhase_SoundsLikeDangerZone()||
|801CACC|PlayerPhase_RangeDisplayIdle|int PlayerPhase_RangeDisplayIdle(unsigned __int16 **a1)||
|801D270|GetUnitSelectionValueThing|signed int GetUnitSelectionValueThing(int a1)|Arguments: r0 = Unit Struct<br>Returns: r0 = (0:Nothing there, 1:Unselectable, 2:Movable, 3:NonMovable)|
|801D2F8|CanMoveActiveUnitTo|bool CanMoveActiveUnitTo(int a1, int a2)||
|801D47C|Load6CRangeDisplaySquareGfx|int Load6CRangeDisplaySquareGfx(int a1)||
|801D6A4|DisplayMoveRangeGraphics|int DisplayMoveRangeGraphics(__int16 a1)|Argument: r0 = type bitfield (&1 = Move Blue Squares, &2 = Range Red Squares, &4 = Range Green Squares, &16 = Range Blue Squares)|
|801D7E0|GetSomeFacingDirection|signed int GetSomeFacingDirection(int a1, int a2, int a3, int a4)||
|801D808|NewMoveUnitForUnitBeingRescued|int NewMoveUnitForUnitBeingRescued(_DWORD *a1)|Arguments: r0 = Unit|
|801DA38|BattleEventEngineExists|bool BattleEventEngineExists()||
|801DAA4|GetEnemyStartCursorPosition|int GetEnemyStartCursorPosition(_DWORD *a1, _DWORD *a2)||
|801DD54|SendToConvoyMenu_Draw|int SendToConvoyMenu_Draw()||
|801DF68|FillWarpRangeMap|int FillWarpRangeMap(int a1, int a2)|Arguments: r0 = Caster, r1 = Target|
|801E364|UpdateMenuItemPanel|int UpdateMenuItemPanel(signed int a1)||
|8020F20|DoesBMXFADEExist|bool DoesBMXFADEExist()||
|8021D10|TakeUsability|signed int TakeUsability()||
|8021FAC|DisplayUnitStandingAttackRange|int DisplayUnitStandingAttackRange()||
|8022614|ItemCommandEffect|signed int ItemCommandEffect(int a1, int a2)||
|802267C|ItemSelectMenu_TextDraw|int ItemSelectMenu_TextDraw(int a1, int a2)||
|80227D4|nullsub_9|void nullsub_9()||
|8022EBC|StaffItemSelect_Usability|signed int StaffItemSelect_Usability(int a1, int a2)||
|8023574|StealItemMenuCommand_Usability|signed int StealItemMenuCommand_Usability(int a1, int a2)||
|8023A08|AttackCommandUsability|signed int AttackCommandUsability()||
|8023A84|AttackBallistaCommandUsability|signed int AttackBallistaCommandUsability()||
|8023C50|nullsub_10|void nullsub_10()||
|8023C9C|GetPhaseAbleUnitCount|int GetPhaseAbleUnitCount(int a1)||
|8023D3C|AreUnitsAllied|signed int AreUnitsAllied(char a1, char a2)||
|8023D50|IsSameAllegience|signed int IsSameAllegience(char a1, char a2)||
|8023DD0|ForEachUnitInRange|int ForEachUnitInRange()||
|8023E3C|ForEachUnitInRange_0|int ForEachUnitInRange_0()||
|8023EA8|ForEachPosInRange|int ForEachPosInRange()||
|8023F68|ForEachPosIn12Range|int ForEachPosIn12Range(int a1, int a2)||
|8023FEC|TryAddTrapsToTargetList|int TryAddTrapsToTargetList()||
|80240AC|AddUnitToTargetListIfNotAllied|int AddUnitToTargetListIfNotAllied(char *a1)||
|80241F0|MakeTradeTargetList|int MakeTradeTargetList(int a1)||
|80242F8|TryAddToDropTargetList|int TryAddToDropTargetList(int a1, int a2)||
|8024384|TryAddRescuedUnitToTakeTargetList|int TryAddRescuedUnitToTakeTargetList(int a1)||
|8024554|MakeTargetListForSupport|int MakeTargetListForSupport(int a1)||
|8024600|AddUnitToTargetListIfAllied|int AddUnitToTargetListIfAllied(char *a1)||
|8024638|FillBallistaRangeMaybe|int FillBallistaRangeMaybe(int a1)||
|80246A4|TryAddClosedDoorToTargetList|int TryAddClosedDoorToTargetList(int a1, int a2)||
|80246E4|TryAddBridgeToTargetList|int TryAddBridgeToTargetList(int a1, int a2)||
|8024724|MakeTargetListForDoorAndBridges|int MakeTargetListForDoorAndBridges(int a1, int a2)||
|8024848|MakePoisonDamageTargetList|int MakePoisonDamageTargetList(int a1)||
|80249C4|TryAddUnitToHealTargetList|int TryAddUnitToHealTargetList(int a1)||
|8024A98|TryAddUnitToRestoreTargetList|int TryAddUnitToRestoreTargetList(int a1)||
|8024B1C|TryAddUnitToBarrierTargetList|int TryAddUnitToBarrierTargetList(int a1)||
|8024BA0|TryAddUnitToRescueStaffTargetList|int TryAddUnitToRescueStaffTargetList(char *a1)||
|8024C00|TryAddUnitToSilenceTargetList|int TryAddUnitToSilenceTargetList(char *a1)||
|8024C4C|TryAddUnitToSleepTargetList|int TryAddUnitToSleepTargetList(char *a1)||
|8024C98|TryAddUnitToBerzerkTargetList|int TryAddUnitToBerzerkTargetList(char *a1)||
|8024D5C|TryAddUnitToWarpTargetList|int TryAddUnitToWarpTargetList(char *a1)||
|8024DFC|TryAddUnitToHammerneTargetList|int TryAddUnitToHammerneTargetList(char *a1)||
|8024E88|MakeTargetListForLatona|int MakeTargetListForLatona(int a1)||
|80250B0|TryAddUnitToDanceRingTargetList|int TryAddUnitToDanceRingTargetList(char *a1)||
|8025124|SetupMapSpritesPalettes|int SetupMapSpritesPalettes()|Copies Map Sprite Palettes|
|8025184|SMS_ClearUsageTable|int SMS_ClearUsageTable()||
|80251EC|SMS_80266F0|int SMS_80266F0(unsigned int a1, int a2)||
|8025278|SMS_RegisterUsage|int SMS_RegisterUsage(unsigned int a1)||
|80253D8|SomethingSMS_16x16|int SomethingSMS_16x16(int a1, unsigned int a2)||
|80254B4|SomethingSMS_16x32|int SomethingSMS_16x32(int a1, unsigned int a2)||
|80255A4|SomethingSMS_32x32|int SomethingSMS_32x32(int a1, unsigned int a2)||
|80259A4|SMS_FlushDirect|int SMS_FlushDirect()|Directly copies graphics to VRAM|
|8025A0C|SMS_FlushIndirect|int SMS_FlushIndirect()|Registers graphics for copy on VBlank|
|8025B54|GetUnitSpritePaletteIndexWrapper|signed int GetUnitSpritePaletteIndexWrapper(signed int a1)||
|8025B80|GetUnitMapSpritePaletteIndex|signed int GetUnitMapSpritePaletteIndex(signed int result)||
|8025D64|SMS_GetNewInfoStruct|int SMS_GetNewInfoStruct(signed int a1)|Arguments: r0 = yPos*16?|
|8025F28|DisplayChapterTileMarker|int DisplayChapterTileMarker()||
|8026434|HandleMapSpriteCursorHover|int HandleMapSpriteCursorHover()||
|8026A00|HideUnitSMS|int HideUnitSMS(int a1)|Arguments: r0 = Unit|
|8026AC4|GetROMUnitSupportingId|int GetROMUnitSupportingId(int a1, int a2)||
|8026B20|GetSupportLevelBySupportIndex|signed int GetSupportLevelBySupportIndex(int a1, int a2)||
|8026B44|GetUnitTotalSupportLevels|int GetUnitTotalSupportLevels(int a1)||
|8026C04|CanUnitSupportCommandWith|signed int CanUnitSupportCommandWith(int a1, int a2)||
|8026C98|GetSupportDataIdForOtherUnit|signed int GetSupportDataIdForOtherUnit(int a1, unsigned __int8 a2)||
|8026CD0|ClearUnitSupports|int ClearUnitSupports(int a1)||
|8026D24|HandleSupportGains|int HandleSupportGains()||
|8026EA4|GetUnitSupportBonuses|int GetUnitSupportBonuses(char *a1, _BYTE *a2)|r0 = battle unit struct, r1 = ptr to 8 byte buffer for result|
|8027078|CanUnitsStillSupportThisChapter|unsigned int CanUnitsStillSupportThisChapter(int a1, char a2)||
|8027158|CanUnitUseItem|unsigned int CanUnitUseItem(int a1, int a2)||
|8027584|ItemEffect_Call|int ItemEffect_Call(int a1, int a2)|Arguments: r0 = Unit, r1 = Item|
|802775C|IsGeneratedTargetListEmpty|bool IsGeneratedTargetListEmpty(int a1)||
|8027770|CanUseHealingItem|bool CanUseHealingItem(int a1)||
|80277E0|CanUseChestKey|bool CanUseChestKey(int a1)||
|8027844|CanUseLockpick|bool CanUseLockpick(_DWORD *a1)||
|8027B0C|GenericStaffSelection_OnSelect|signed int GenericStaffSelection_OnSelect(int a1, int a2)||
|8028008|nullsub_8|void nullsub_8()||
|8028830|SimulateBattle|int SimulateBattle(int a1, int a2, int a3, int a4, int a5)||
|802887C|SimulateBattleBallista|int SimulateBattleBallista(int a1, int a2, char a3, char a4)||
|8028A08|ifHappenSingleRNWrapper|int ifHappenSingleRNWrapper(unsigned __int16 pr, unsigned __int8 force)|单乱数判定是否发生<br>pr=概率(0~100)<br>force=强制发生/不发生|
|8028A34|ifHappenDoubleRNWrapper|int ifHappenDoubleRNWrapper(unsigned __int16 pr, unsigned __int8 force)|双乱数判定是否发生<br>pr=概率(1~100)<br>force=强制发生/不发生|
|8028B44|CopyUnitToBattleStructRawStats|int CopyUnitToBattleStructRawStats(unsigned int a1, unsigned int a2)||
|8028EA0|BattleApplyMiscBonuses|int BattleApplyMiscBonuses(char *a1)||
|8028F14|BattleLoadDefense|int BattleLoadDefense(int a1, int a2)||
|8029008|BattleLoadAS|int BattleLoadAS(int a1)||
|80291B0|BattleLoadCrit|int BattleLoadCrit(int a1)||
|80292CC|ComputeLethalityChance|int ComputeLethalityChance(int a1, _DWORD *a2)||
|8029328|BattleApplySRankBonuses|int BattleApplySRankBonuses(int a1)||
|8029568|MakeBattleRound|signed int MakeBattleRound(int a1, int a2)|Arguments: r0 = Subject, r1 = Target|
|80295C4|GetBattleHitCount|signed int GetBattleHitCount(int a1)||
|8029714|calculateBattleDamage|void calculateBattleDamage(u8 battleData[])|战斗中计算实际伤害<br>addr=战斗数据基址<br>203A3EC 我方<br>203A46C 对方|
|802984C|handleWeaponEffect|void handleWeaponEffect(u8 dataAttacker[], u8 dataDefender[])||
|8029A90|GetStatIncrease|int GetStatIncrease(int a1)||
|8029AB4|GetAutoleveledStat|int GetAutoleveledStat(int a1, int a2)||
|8029E20|CheckForLevelUpCaps|int CheckForLevelUpCaps(int a1, char *a2)|Arguments: r0 = Unit Struct, r1 = Battle Unit Struct|
|802A098|BattleUnit_DidWRankGoUp|unsigned int BattleUnit_DidWRankGoUp(int a1)||
|802A0D4|SaveUnitFromBattle|int SaveUnitFromBattle(_BYTE *a1, int a2)||
|802A1E8|UpdateBallistaUsesFromBattle|int UpdateBallistaUsesFromBattle()||
|802A21C|NullSomeStuff|int NullSomeStuff()||
|802A22C|GetUnitEffectiveLevel|int GetUnitEffectiveLevel(int a1)||
|802A3C0|ComputeExpFromBattle|signed int ComputeExpFromBattle(int a1, _DWORD *a2)||
|802A554|SetupBattleUnitEquippedWeapon|int SetupBattleUnitEquippedWeapon(int a1)|Arguments: r0 = Battle Unit|
|802A620|BattleApplyWeaponTriangle|int BattleApplyWeaponTriangle(int a1, unsigned __int8 *a2)|Arguments: r0 = Battle Struct 1, r1 = Battle Struct 2|
|802A788|FillSnagBattleStats|int FillSnagBattleStats()||
|802A940|nullsub_4|void nullsub_4()||
|802B250|TradeMenu_RefreshItemText|int TradeMenu_RefreshItemText(int a1)||
|802BF08|ResetTraps|int ResetTraps()||
|802BF8C|AddTrap|TrapStruct *AddTrap(char a1, char a2, char a3, char a4)|Arguments: r0 = x, r1 = y, r2 = type, r3 = ext1|
|802BFB4|AddTrapExt|TrapStruct *AddTrapExt(char a1, char a2, char a3, char a4, char a5, char a6, char a7)||
|802C100|ApplyTrapMapChanges|int ApplyTrapMapChanges()||
|802C190|GetMapChangesPointerById|char *GetMapChangesPointerById(int a1)|Arguments: r0 = map change id<br>Returns: r0 = pointer to map change data (0 if none)|
|802C1CC|GetMapChangesIdAt|signed int GetMapChangesIdAt(int a1, int a2)|Arguments: r0 = x, r1 = y<br>Returns: r0 = id of first map changes matching position|
|802C2A8|RemoveMapChange|int RemoveMapChange(int a1)|Arguments: r0 = Map Changes Id|
|802C300|UpdateUnitsUnderRoof|int UpdateUnitsUnderRoof()||
|802C70C|HandleTrapDecay|int HandleTrapDecay()||
|802C75C|BattleSomethingTrapChangeTerrain|int BattleSomethingTrapChangeTerrain()||
|802C7D8|GetTrap|char *GetTrap(int a1)||
|802D874|BlockGameGraphicsLogic|int BlockGameGraphicsLogic()||
|802D8A8|UnblockGameGraphicsLogic|int UnblockGameGraphicsLogic()||
|802D8E4|SetupOAMSpliceForWeather|int SetupOAMSpliceForWeather(int a1)||
|802DDFC|nullsub_5|void nullsub_5()||
|802E220|SetupWeatherGraphics_Maybe|int SetupWeatherGraphics_Maybe()||
|802EBCC|GetConvoyItemArray|__int16 *GetConvoyItemArray()||
|802EBD4|ClearConvoyItems|int ClearConvoyItems()||
|802EBF8|ShrinkConvoyItemList|int ShrinkConvoyItemList()||
|802EC3C|GetConvoyItemCount|int GetConvoyItemCount()||
|802EC5C|AddItemToConvoy|signed int AddItemToConvoy(__int16 a1)||
|802ECAC|GetConvoyItemSlot|signed int GetConvoyItemSlot(int a1)||
|802EDEC|LoadPlayerUnitsFromUnitStack|int LoadPlayerUnitsFromUnitStack()||
|802EE2C|LoadPlayerUnitsFromUnitStack2|int LoadPlayerUnitsFromUnitStack2()||
|802EE6C|PrepareArenaStruct|int PrepareArenaStruct(int a1)||
|802EF8C|GetUnitBestWRankType|signed int GetUnitBestWRankType(int a1)||
|802EFB8|GetClassBestWRankType|signed int GetClassBestWRankType(int a1)||
|802F0B0|IsWeaponMagic|signed int IsWeaponMagic(signed int result)||
|802F0C8|GetNearLevel|int GetNearLevel(int a1)||
|802F0E4|GetUnitArenaWeight|int GetUnitArenaWeight(int a1, int a2)||
|802F154|LoadArenaOpponentStruct|int LoadArenaOpponentStruct()||
|802F624|BattleUnit_ShouldDisplayWRankUp|bool BattleUnit_ShouldDisplayWRankUp(int a1)|Arguments: r0 = Battle Unit Struct|
|802FC20|DropRescuedUnitIfDead|int DropRescuedUnitIfDead(signed int a1, int a2)||
|802FD04|KillUnitIfNoHealth|int KillUnitIfNoHealth(int a1)||
|802FF80|MoveCursor_SetLastCursorPosition|void *MoveCursor_SetLastCursorPosition(char a1, char a2)||
|80300BC|MoveCursor_GetPointIndexForPosition|signed int MoveCursor_GetPointIndexForPosition(char a1, char a2)||
|803012C|MoveCursor_AppendFromMoveBuffer|int MoveCursor_AppendFromMoveBuffer()||
|8030340|MoveCursor_8032DA0|signed int MoveCursor_8032DA0()||
|8030B88|displayViewMapPrepScreen|void displayViewMapPrepScreen(int a1)|显示地图上的准备菜单屏幕（包括调整我军单位位置等功能）|
|8031758|CanUnitUseVisit|signed int CanUnitUseVisit()||
|80317EC|CanUnitUseSeize|signed int CanUnitUseSeize()||
|803186C|CanUnitUseAttack|bool CanUnitUseAttack()||
|80318B4|CanActiveUnitUseRescue|bool CanActiveUnitUseRescue()||
|80318D0|CanActiveUnitUseTrade|bool CanActiveUnitUseTrade()||
|8031A7C|GetChapterMapPointer|int *GetChapterMapPointer(int a1)||
|8031AC0|GetChapterMapChangesPointer|int GetChapterMapChangesPointer(int a1)|Arguments: r0 = Chapter Index|
|8031AEC|GetChapterEventDataPointer|int GetChapterEventDataPointer(int a1)||
|8031B54|GetSomethingRelatedToCurrentDifficulty|bool GetSomethingRelatedToCurrentDifficulty()||
|8031FAC|NewUnitInfoWindow_WithAllLines|int NewUnitInfoWindow_WithAllLines(signed int a1)||
|80321EC|DrawHammerneUnitInfoWindow|int DrawHammerneUnitInfoWindow(int a1)||
|8032A90|NewBottomHelpText|int NewBottomHelpText(signed int a1, int a2)||
|8032CDC|BBExists|bool BBExists()||
|8033A04|AddWeaponStatsAfterRound|int AddWeaponStatsAfterRound(int a1, _BYTE *a2, _DWORD *a3)||
|8033FAC|BKSEL_Draw|int BKSEL_Draw(int a1)||
|8034894|GetTriggeredTrapType|signed int GetTriggeredTrapType(int a1)|Arguments: r0 = Unit<br>Returns: r0 = trap type index EXCEPT if unit can disable it returns 0xF (for Fire Trap) or 0x10 (for Mine); returns 0 for ballista & no traps|
|803490C|ExecTrap|int ExecTrap(signed int a1, int a2, __int16 a3)|Arguments: r0 = 6C, r1 = Unit, r2 = ?|
|8034B70|GetSomeBallistaItemAt|int GetSomeBallistaItemAt(int a1, int a2)||
|8034BA0|GetBallistaItemAt|int GetBallistaItemAt(int a1, int a2)|Arguments: r0 = X, r1 = Y<br>Returns: r0 = Ballista Item for ballista at given pos, 0 if none|
|8034C80|TryRemoveUnitFromBallista|int TryRemoveUnitFromBallista(int a1)||
|8034F64|CpOrder_BuildUnitList|int CpOrder_BuildUnitList(signed int a1)||
|8034FA4|GetUnitAiAttackPriority|signed int GetUnitAiAttackPriority(int a1)||
|8035044|GetUnitAiPriority|int GetUnitAiPriority(int a1)||
|803515C|SortAiUnitQueue|int SortAiUnitQueue(signed int a1)||
|8035328|SetAIActionStructParameters|int SetAIActionStructParameters(char a1, char a2, char a3, char a4, char a5, char a6, char a7)|Arguments: r0 = x, r1 = y, r2 = ?, r3 = target unit index, [sp] = item index, [sp+4] = target x, [sp+8] = target y|
|8035418|AiDecisionMaker_HealEscape|int AiDecisionMaker_HealEscape()||
|803551C|AiDecisionMaker_AiScript2|int AiDecisionMaker_AiScript2()||
|8035D10|AICoreCompare|signed int AICoreCompare(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3)|Arguments: r0 = byte* containing value, r1 = comparator code, r2 = value to compare to|
|8036228|CouldStationaryUnitBeInRangeHeuristic|bool CouldStationaryUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|803627C|CouldUnitBeInRangeHeuristic|bool CouldUnitBeInRangeHeuristic(int a1, int a2, unsigned __int8 a3)||
|8036300|IsTerrainIdInList|signed int IsTerrainIdInList(_BYTE *a1, int a2)||
|8036420|GetEffectiveTileMovCost|signed int GetEffectiveTileMovCost(int a1, int a2)||
|8036B28|FillMovementAndRangeMapForItem|int FillMovementAndRangeMapForItem(int a1, unsigned __int8 a2)||
|8036CE8|GetLesserWeightedAdjacentPosition|bool GetLesserWeightedAdjacentPosition(int a1, int a2, int a3, _WORD *a4)||
|8036D64|GetItemAiStealPriority|signed int GetItemAiStealPriority(unsigned __int16 a1)||
|8036D98|AiGetBestItemSlotIndexToSteal|int AiGetBestItemSlotIndexToSteal(int a1)||
|8036DD8|FindAiUnitSafestTileToMoveTo|bool FindAiUnitSafestTileToMoveTo(int a1, _WORD *a2)||
|8036F64|AiCanActiveUnitOpenChests|signed int AiCanActiveUnitOpenChests(_BYTE *a1)||
|80371C4|SetAiActionMoveBest|int SetAiActionMoveBest(int a1, __int16 a2, char a3, unsigned __int8 a4, char a5)||
|80373B0|FindClosestBestPosition|signed int FindClosestBestPosition(int a1, int a2, int a3, signed __int16 *a4)|Arguments: r0 = Unit, r1 = x, r2 = y, r3 = out (word)|
|80375C0|AiIsPositionLootable|signed int AiIsPositionLootable(unsigned __int8 a1, int a2)||
|8037610|SetupUnitInventoryAIFlags|int SetupUnitInventoryAIFlags()||
|80376CC|SetupUnitStatusStaffAIFlags|int SetupUnitStatusStaffAIFlags(int a1, int a2)||
|8037714|SetupUnitHealStaffAIFlags|int SetupUnitHealStaffAIFlags(int a1, int a2)||
|8037760|SaveNumberOfAlliedUnitsIn0To8Range|int SaveNumberOfAlliedUnitsIn0To8Range(char *a1)|Arguments: r0 = Unit|
|8037A40|AiFillMovementMapForUnit|int AiFillMovementMapForUnit(int a1)||
|8037AC0|AiExecFallbackAi1|int AiExecFallbackAi1()||
|8037B50|AiExecFallbackAi2|int AiExecFallbackAi2()||
|8037BF8|AICore_ConditionalGoto|int AICore_ConditionalGoto(_BYTE *a1)||
|8037CCC|AICore_ChangeAI|int AICore_ChangeAI(_BYTE *a1)||
|8037D3C|AICore_Goto|int AICore_Goto(_BYTE *a1)||
|8037DC8|IsUnitEnemyWithActiveUnit|bool IsUnitEnemyWithActiveUnit(int a1)|Arguments: r0 = Unit|
|8037E0C|IsUnitEnemyAndNotInTheAiInstList|bool IsUnitEnemyAndNotInTheAiInstList(int a1)||
|8037E54|IsUnitEnemyOrInTheAiInstList|bool IsUnitEnemyOrInTheAiInstList(int a1)||
|8038284|AiScriptCmd_SomeKindOfLootCommand|int AiScriptCmd_SomeKindOfLootCommand(_BYTE *a1)||
|80389A0|AiDoBerserkAction|int AiDoBerserkAction()||
|80390A0|GetPositionRangeWeight|signed int GetPositionRangeWeight(int a1, int a2)||
|8039258|AiTrySimulateBattle|int AiTrySimulateBattle(_BYTE *a1)||
|8039458|AiSimulateBattle|signed int AiSimulateBattle(char *a1)||
|80394C4|AiBattleGetDamageDealtWeight|signed int AiBattleGetDamageDealtWeight()||
|8039524|AiBattleGetTargetHpWeight|int AiBattleGetTargetHpWeight()||
|8039548|AiBattleGetAlliesAroundWeight|int AiBattleGetAlliesAroundWeight()||
|8039638|AiBattleGetDamageTakenWeight|signed int AiBattleGetDamageTakenWeight()||
|80396F4|ComputeAiAttackWeight|int ComputeAiAttackWeight(int a1)||
|8039768|AiGetUnitReachWeightWithEquippedWeapon|signed int AiGetUnitReachWeightWithEquippedWeapon(int a1, int a2, int a3)|Arguments: r0 = Some X, r1 = Some Y, r2 = Unit Struct|
|80397B8|AiGetPositionTerrainSafetyWeight|int AiGetPositionTerrainSafetyWeight(int a1, int a2)||
|80397F8|AiGetPositionUnitSafetyWeight|int AiGetPositionUnitSafetyWeight(int a1, int a2)||
|8039870|SetupAiDangerMap|int SetupAiDangerMap()||
|803989C|FillAiDangerMap|int FillAiDangerMap()||
|8039C10|UpdateUnitHealingAIStatus|signed int UpdateUnitHealingAIStatus(int a1)|Arguments: r0 = Unit|
|8039C90|AiUnitTryHealSelf|signed int AiUnitTryHealSelf()||
|8039D48|AiUnitTryMoveTowardsEscapePoint|signed int AiUnitTryMoveTowardsEscapePoint()||
|8039DF0|GetEscapePointStructThingMaybe|char *GetEscapePointStructThingMaybe()||
|803A28C|AiTryDoDanceAdjacent|signed int AiTryDoDanceAdjacent(int a1, int a2)||
|803A3B0|AiTryDoStealAdjacent|bool AiTryDoStealAdjacent(int a1, int a2)||
|803AF24|GetStaffAIIndexMaybe|signed int GetStaffAIIndexMaybe(unsigned __int16 a1)||
|803AF8C|AiTryDoStaff|int AiTryDoStaff(int a1)|Arguments: r0 = bool(*)(Unit*)|
|803B034|GetAiSafestAccessibleAdjacentPosition|bool GetAiSafestAccessibleAdjacentPosition(int a1, int a2, _WORD *a3)||
|803C2F0|StoreMovCostTableWithTerrainSetAsPassable|int StoreMovCostTableWithTerrainSetAsPassable(int a1, int a2)||
|803E248|SioPlaySomeIndexedSfx|int SioPlaySomeIndexedSfx(int a1)||
|803F724|NameSelect_DrawNameText|int NameSelect_DrawNameText(int a1)||
|803FCAC|NameSelect_8044C54|int NameSelect_8044C54(int a1, int a2)||
|8042ACC|CheckSomethingSaveRelated|signed int CheckSomethingSaveRelated()||
|8046F18|ITEMRANGEDONE_sub_804AF2C|signed int ITEMRANGEDONE_sub_804AF2C(int a1, _DWORD *a2)||
|8048300|SetMoveUnitMoveManual_Unique|int SetMoveUnitMoveManual_Unique()|Arguments: r0 = Move Manual Pointer (will be copied)|
|804A27C|LoadOldUIPal|int LoadOldUIPal(signed int a1)||
|804A2DC|LoadNewUIPal|int LoadNewUIPal(signed int a1)||
|804A740|UpdateHandCursor|int UpdateHandCursor(int a1, int a2)||
|804AA0C|NewMenu_DefaultAdjusted|||
|804AA68|NewMenu|signed int NewMenu(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned __int16 BackgroundIndexArgument, __int16 Field68Argument, signed int ParentArgument)|Arguments: r0 = Menu Def, r1 = geometry, r2 = backgound BG index, r3 = base tile index ofr UI tiles, [sp+0] = foreground BG index, [sp+4] = ?, [sp+8] = Parent 6C|
|804AE18|Menu_Idle|int Menu_Idle(int a1)||
|804AF18|Menu_HandleDirectionInputs|int Menu_HandleDirectionInputs(_BYTE *a1)||
|804AFFC|Menu_HandleSelectInputs|int Menu_HandleSelectInputs(int a1)||
|804B08C|Menu_GetCursorGfxCurrentPosition|int Menu_GetCursorGfxCurrentPosition(int a1, _DWORD *a2, _DWORD *a3)|Arguments: r0 = Menu, r1 = x out, r2 = y out|
|804B2BC|MarkSomethingInMenu|int MarkSomethingInMenu()||
|804B4D8|AddTarget|int AddTarget(char a1, char a2, char a3, char a4)||
|804B52C|LinkTargets|int LinkTargets()||
|804B664|NewTargetSelection|int NewTargetSelection(int a1)|Arguments: r0 = Pointer to Definition|
|804B710|TargetSelection_HandleMoveInput|int TargetSelection_HandleMoveInput(int a1)||
|804B824|GetFarthestTargetIndex|int GetFarthestTargetIndex()||
|804B938|GetFirstTargetPointer|char *GetFirstTargetPointer()||
|804B950|.gcc2_compiled._4|int gcc2_compiled__4()||
|804B97C|.gcc2_compiled._5|int gcc2_compiled__5()||
|804B9F4|NewEkrBattle|int NewEkrBattle()||
|804BA60|InBattleMainRoutine|int InBattleMainRoutine()||
|804BB80|nullsub_18|void nullsub_18()||
|804BB84|ekrBattle_Init|int ekrBattle_Init(int a1)||
|804BC18|ekrBattle_8050000|int ekrBattle_8050000(int a1)||
|804BC6C|ekrBattle_8050054|int ekrBattle_8050054(int a1)||
|804BD4C|ekrBattle_8050134|int ekrBattle_8050134(int a1)||
|804BDFC|ekrBattle_8050224|int ekrBattle_8050224(int a1)||
|804BE1C|ekrBattle_8050244|int ekrBattle_8050244(int a1)||
|804BE84|ekrBattle_80502B0|int ekrBattle_80502B0(int a1)||
|804C144|ekrBattle_8050600|int ekrBattle_8050600(int a1)||
|804C588|ekrBattle_8050A84|int ekrBattle_8050A84(int a1)||
|804C608|ekrBattle_8050B08|int ekrBattle_8050B08(int a1)||
|804C728|ekrBattle_WaitForLevelup_8050C6C|int ekrBattle_WaitForLevelup_8050C6C(int a1)||
|804C764|ekrBattle_WaitForPopup|int ekrBattle_WaitForPopup(int a1)||
|804C834|ekrBattle_8050D88|int ekrBattle_8050D88(int a1)||
|804C854|ekrBattle_8050DA8|int ekrBattle_8050DA8(int a1)||
|804C88C|nullsub_22|void nullsub_22()||
|804CC68|EkrGauge_80511C0|int EkrGauge_80511C0(int a1)||
|804D62C|ekrDispUP_Loop|int ekrDispUP_Loop(int a1)||
|804E048|StartEfxHpBarResire|int StartEfxHpBarResire(int a1)||
|804E3E0|StartEfxAvoid|int StartEfxAvoid(int a1)||
|804E458|BattlePopup_Wait16Frames|int BattlePopup_Wait16Frames(int a1)||
|804E474|StartEfxHpBarLive|int StartEfxHpBarLive(int a1)||
|804E604|loadNoDamage|void loadNoDamage(int a1, int a2, u8 a3)||
|804E7AC|StartEfxStatusCHG|int StartEfxStatusCHG(int a1)||
|804EC74|ScrollScreen|void ScrollScreen(AnimationInterpreter *targetAIS, unsigned __int16 a2)||
|804EFE0|StartEfxQuake|int StartEfxQuake(unsigned int a1)||
|804F284|StartEfxHitQuake|int StartEfxHitQuake(int a1, int a2, int a3)||
|804F7B8|loadFlashBG|int loadFlashBG(int a1, __int16 a2)||
|804F9D8|StartEfxFlashHPBar|int StartEfxFlashHPBar(int a1, unsigned __int16 a2, __int16 a3)||
|8050274|EndEfxWeaponIcon|int EndEfxWeaponIcon()||
|8050348|loadSpellCast|void loadSpellCast()||
|80503A0|StartEndEfxSpellCast|int StartEndEfxSpellCast()||
|80507D8|SetSomethingSpellFxToFalse_1|void SetSomethingSpellFxToFalse_1()||
|80507F4|ClearBG1Map|void ClearBG1Map()||
|805091C|reduceHPBar|void reduceHPBar(void *targetAIS, bool ifMiss)|减血条(对象的AIS指针,是否命中)|
|805093C|StartBattleAnimHitEffects|int StartBattleAnimHitEffects(int a1, int a2, int a3, int a4)||
|8050AC8|suckBloodAnimation|void suckBloodAnimation(int a1, int ifMiss)||
|8050E10|SomePaletteStoringRoutine_SpellAnim2|void SomePaletteStoringRoutine_SpellAnim2(const char *a1, int a2, ...)||
|8050F54|getAnimationStartFrame|signed int getAnimationStartFrame()||
|8050FE4|.gcc2_compiled._6|int gcc2_compiled__6()||
|80514B8|ekrBattleStarting_8055F00|int ekrBattleStarting_8055F00(int a1)||
|8051558|ekrBattleStarting_8055FA0|int ekrBattleStarting_8055FA0(int a1)||
|80515A0|ekrBattleStarting_8055FE8|int ekrBattleStarting_8055FE8(int a1)||
|80515DC|ekrBattleStarting_8056024|int ekrBattleStarting_8056024(int a1)||
|8051630|ekrBattleStarting_8056078|int ekrBattleStarting_8056078(int a1)||
|8051A50|loadBaseKaiten|int loadBaseKaiten(int a1)||
|8051EC4|loadUnitKakudai|void loadUnitKakudai(int a1)||
|8051F38|UnitKakudai1|void UnitKakudai1(_6CStruct *ctx)||
|80520C4|UnitKakudai2|void UnitKakudai2(_6CStruct *ctx)||
|805226C|UnitKakudai3|void UnitKakudai3(_6CStruct *a1)||
|8052278|loadWindowAppear|void loadWindowAppear(int a1, __int16 a2)||
|805235C|loadNamewinAppear|void loadNamewinAppear(int a1, __int16 a2, __int16 a3)||
|805245C|loadBaseAppear|void loadBaseAppear(int a1, __int16 a2)||
|8053A38|getBallistaBattleAnimationPalette|int *getBallistaBattleAnimationPalette(__int16 battleAnimationID, int weaponIDAndDurability)|获取弩车战斗动画调色板|
|8053A80|getBattleAnimationPalGroupSlotNo|signed int getBattleAnimationPalGroupSlotNo(signed int unitNo)|根据人物序号(与上0xC0之后)判断势力归属，从而选择战斗动画调色板组中相应的调色板序号|
|8053AA8|transformateBattleAnimation|void transformateBattleAnimation(AnimationInterpreter *AIS, __int16 animationID)||
|8053B5C|IsItemDisplayedInBattle|bool IsItemDisplayedInBattle(int a1)||
|8053C3C|battleAnimationEventHandler|void battleAnimationEventHandler()|处理动画事件|
|8054734|loadekrChienCHR|void loadekrChienCHR(int a1)||
|8054764|updateBattleAnimationSheet|void updateBattleAnimationSheet(void *AIS)|更新战斗动画sheet|
|80547C0|getAnimationIDForPaletteGroup|signed int getAnimationIDForPaletteGroup(int animationID, int RightOrLeft)|返回用那个动画ID的调色板|
|805480C|battleAnimationInit|void battleAnimationInit()|战斗动画数据载入到内存|
|8054A30|initBothAIS|void initBothAIS()||
|8054AC0|BattleAnimationAISInit|void BattleAnimationAISInit(int xl, int xr)||
|8054B18|InitLeftAIS|void InitLeftAIS(int x)|左侧AIS初始化<br>x控制近接还是远程|
|8054C5C|InitRightAIS|void InitRightAIS(int x)|右侧AIS初始化<br>x控制近接还是远程|
|8054D7C|InitAIS|void InitAIS(AnimationInterpreter *AIS, int x)||
|8054E60|isUnitAtRightOrLeft|bool isUnitAtRightOrLeft(AnimationInterpreter *AIS)|判断动画是在左边还是右边|
|8054E74|GetSomeBoolean|signed int GetSomeBoolean(int a1)|Arguments: r0 = AIS Related Index|
|8054F4C|checkIfCritical|signed int checkIfCritical(void *AIS)||
|8054F90|getTargetAIS|AnimationInterpreter *getTargetAIS(AnimationInterpreter *AIS)|获取施法对象(对方)的AIS|
|80552D8|DemoBattleAnimationInit|void DemoBattleAnimationInit(void *AIS)|职业介绍的DEMO战斗动画初始化<br>因为只有一个动画，所以AIS就在0x02000000|
|80556A4|AnimeDrvProc|void AnimeDrvProc()||
|80556B0|showDemoBattleAnimation|void showDemoBattleAnimation(void *AIS)||
|80556FC|EkrUnitMainMini_OnLoop|int EkrUnitMainMini_OnLoop(int a1)||
|8055CD8|.gcc2_compiled._7|int gcc2_compiled__7()||
|8055D2C|PlayBattleCroudSfxIfArena|int PlayBattleCroudSfxIfArena()||
|8055D44|RunBattleForecastTutorialEvent|int RunBattleForecastTutorialEvent(int a1)||
|8056070|callWeaponSpell|void callWeaponSpell(void *AIS)||
|80560A4|loadResireRST5|_6CStruct *loadResireRST5(int a1, int a2, int a3, int a4, int a5)||
|80564B8|loadRestWINH|void loadRestWINH(int a1, int a2, __int16 a3, unsigned int a4)||
|80565FC|loadRestWINH1|void loadRestWINH1(int a1, int a2, unsigned int a3)||
|80566F0|loadALPHA|void loadALPHA(int a1, __int16 a2, __int16 a3, int a4, int a5, int a6)||
|8056BC8|spellDummy|void spellDummy(void *AIS)||
|8056BEC|DummyMagic|void DummyMagic(_6CStruct *_6C)||
|8056C40|spellTeono|void spellTeono(void *AIS)||
|8056C78|Teono|void Teono(_6CStruct *ctx)||
|8056F98|spellArrow|void spellArrow(void *AIS)||
|8056FD0|Arrow|void Arrow(_6CStruct *ctx)||
|8057088|loadArrowOBJ|void loadArrowOBJ(void *AIS)||
|80570F0|ArrowOBJ|void ArrowOBJ(_6CStruct *ctx)||
|8057120|spellTeyari1|int spellTeyari1(int a1)||
|805717C|spellTeyari2|int spellTeyari2(AnimationInterpreter *a1)||
|80571D8|spellTeyari3|int spellTeyari3(AnimationInterpreter *a1)||
|8057234|spellTeyari4|int spellTeyari4(AnimationInterpreter *a1)||
|8057290|spellTeyari5|int spellTeyari5(AnimationInterpreter *a1)||
|80572EC|spellTeyari6|int spellTeyari6(AnimationInterpreter *a1)||
|8057348|spellTeyari7|int spellTeyari7(AnimationInterpreter *a1)||
|80573A4|spellTeyari8|int spellTeyari8(AnimationInterpreter *a1)||
|8057400|spellTeyari9|int spellTeyari9(AnimationInterpreter *a1)||
|805745C|spellTeyari10|int spellTeyari10(AnimationInterpreter *a1)||
|80574B8|spellTeyari11|int spellTeyari11(AnimationInterpreter *a1)||
|8057664|spellSong|int spellSong(int a1)||
|8057924|spellDance|int spellDance(AnimationInterpreter *a1)||
|8057A6C|spellShooter|int spellShooter(int a1)||
|8057ABC|shooter|void shooter(_6CStruct *ctx)||
|8057BF4|shooterOBJ|void shooterOBJ(_6CStruct *ctx)||
|8057C24|spellEckesachs|int spellEckesachs(int a1)||
|8057F38|Loop6C_efxFireBG|int Loop6C_efxFireBG(int a1)||
|8057F84|spellHurtmut|int spellHurtmut(int a1)||
|8058120|spellFirebreath|int spellFirebreath(int a1)||
|80583DC|Loop6C_efxIvaldiBG1|int Loop6C_efxIvaldiBG1(int a1)||
|805843C|spellIcebreath|int spellIcebreath(AnimationInterpreter *a1)||
|8058584|spellDarkbreath|int spellDarkbreath(AnimationInterpreter *a1)||
|8058698|Loop6C_efxIvaldiBG2|int Loop6C_efxIvaldiBG2(int a1)||
|805872C|Loop6C_efxIvaldiBG3|int Loop6C_efxIvaldiBG3(int a1)||
|805882C|spellThunder|int spellThunder(int a1)||
|8058868|Loop6C_efxThunder|int Loop6C_efxThunder(int a1)||
|8058A4C|Loop6C_efxNaglfarBG|int Loop6C_efxNaglfarBG(int a1)||
|8058B28|spellFire|int spellFire(int a1)||
|8058B6C|spellElfire|int spellElfire(int a1)||
|8058BB0|fire|void fire(_6CStruct *ctx)||
|8058CB8|loadFireBG|void loadFireBG(void *AIS)||
|8058D18|Loop6C_efxNaglfarBG2|int Loop6C_efxNaglfarBG2(int a1)||
|8058D70|loadFireOBJ|void loadFireOBJ(void *AIS)||
|8058E44|loadFireHITBG|void loadFireHITBG(void *targetAIS)||
|8058F2C|loadElfireBG|void loadElfireBG(void *targetAIS)||
|8058FF8|loadElfireBGCOL|void loadElfireBGCOL(void *targetAIS)||
|8059084|loadElfireOBJ|void loadElfireOBJ(void *targetAIS)||
|8059138|spellFimbulvetr|void spellFimbulvetr(void *AIS)||
|8059174|Fimbulvetr|void Fimbulvetr(_6CStruct *ctx)||
|80592AC|loadFimbulvetrBGTR|int loadFimbulvetrBGTR(int a1)||
|8059394|loadFimbulvetrBG|void loadFimbulvetrBG(void *AIS)||
|805947C|loadFimbulvetrOBJ|void loadFimbulvetrOBJ(void *targetAIS)||
|8059510|loadFimbulvetrOBJ2|int loadFimbulvetrOBJ2(int a1)||
|8059588|loadFimbulvetrOBJ2Fall|void loadFimbulvetrOBJ2Fall(void *AIS, char a2)||
|805979C|spellThunderstorm|int spellThunderstorm(AnimationInterpreter *a1)||
|8059BF4|spellMistyrain|int spellMistyrain(AnimationInterpreter *a1)||
|805A090|spellResire|int spellResire(int a1)||
|805A0CC|Resire|void Resire(_6CStruct *ctx)||
|805A210|loadResireBG|void loadResireBG(int a1, u8 ifMiss)||
|805A29C|loadResireBG2|void loadResireBG2(int a1)||
|805A594|loadResireRST3|void loadResireRST3(int a1, _6CStruct *a2, __int16 a3)||
|805A60C|spellLightning|int spellLightning(AnimationInterpreter *a1)||
|805A838|spellPurge|int spellPurge(AnimationInterpreter *a1)||
|805ABD8|spellForblaze|int spellForblaze(AnimationInterpreter *a1)||
|805B678|spellDevine|int spellDevine(AnimationInterpreter *a1)||
|805B6B4|DivineSfxLoop|int DivineSfxLoop(int a1)||
|805BA78|spellAureola|int spellAureola(AnimationInterpreter *a1)||
|805C3D8|spellHazymoon|int spellHazymoon(int a1)||
|805C414|Hazymoon|void Hazymoon(_6CStruct *ctx)||
|805C5B4|loadHazymoonBG1|void loadHazymoonBG1(void *AIS)||
|805C624|loadHazymoonBG2|void loadHazymoonBG2(AnimationInterpreter *AIS)||
|805C6A8|loadHazymoonBG3|void loadHazymoonBG3(void *AIS)||
|805C77C|loadHazymoonOBJ2|void loadHazymoonOBJ2(void *AIS)||
|805C924|loadHazymoonOBJ3|void loadHazymoonOBJ3(void *AIS)||
|805CA38|spellFenrir|int spellFenrir(AnimationInterpreter *a1)||
|805D1D8|spellLive|int spellLive(int a1)||
|805D328|spellRelive|int spellRelive(int a1)||
|805D4CC|spellRecover|int spellRecover(int a1)||
|805D670|spellReblow|int spellReblow(int a1)||
|805DEC0|spellFortify|int spellFortify(int a1)||
|805DEF0|spellGreenFortify|int spellGreenFortify(int a1)||
|805E3B0|spellRest|int spellRest(AnimationInterpreter *a1)||
|805E650|spellSilence|int spellSilence(AnimationInterpreter *a1)||
|805E8E8|spellSleep|int spellSleep(AnimationInterpreter *a1)||
|805EC08|spellHammarne|int spellHammarne(AnimationInterpreter *a1)||
|805EE84|spellBerserk|int spellBerserk(AnimationInterpreter *a1)||
|805F48C|spellMShield|int spellMShield(AnimationInterpreter *a1)||
|805F6F8|spellShine|int spellShine(AnimationInterpreter *a1)||
|805FBE8|spellLuna|int spellLuna(AnimationInterpreter *a1)||
|80605A4|spellExcalibur|int spellExcalibur(AnimationInterpreter *a1)||
|8060E70|spellGespenst|int spellGespenst(AnimationInterpreter *a1)||
|80615C4|spellOura|void spellOura(AnimationInterpreter *AIS)||
|8061BE0|spellLuce|int spellLuce(AnimationInterpreter *a1)||
|8062350|spellSuperdruid|int spellSuperdruid(AnimationInterpreter *a1)||
|8062AAC|spellRingFilla|int spellRingFilla(AnimationInterpreter *a1)||
|8062AE8|spellRingThor|int spellRingThor(AnimationInterpreter *a1)||
|8062B24|spellRingNini|int spellRingNini(AnimationInterpreter *a1)||
|8062B60|spellRingSet|int spellRingSet(AnimationInterpreter *a1)||
|8062CC8|StartEfxDamageMojiEffectOBJ|int StartEfxDamageMojiEffectOBJ(int a1, int a2)||
|8062D68|criticalEffect|void criticalEffect(int a1)||
|8062E9C|normalEffect|int normalEffect(int a1)||
|8063400|loadMagfcast|void loadMagfcast(void *AIS, bool ifCritical)||
|806347C|loadMagfcastBG|int loadMagfcastBG(int AIS, unsigned int index)||
|80641B0|chillEfect|int chillEfect(int a1)||
|8065214|initSpecialAnimationEffectInfo|void initSpecialAnimationEffectInfo()||
|8065238|getSpecialAnimationEffectInfo|SpecialAnimationEffectInfo *getSpecialAnimationEffectInfo(AnimationInterpreter *AIS)||
|8065258|getSpecialAnimationEffectInfoState|int getSpecialAnimationEffectInfoState(AnimationInterpreter *AIS)||
|8065264|setSpecialAnimationEffectInfoState|void setSpecialAnimationEffectInfoState(AnimationInterpreter *AIS, __int16 state)||
|806527C|callSpecialAnimationEffectTypeGetter|int callSpecialAnimationEffectTypeGetter(AnimationInterpreter *AIS)||
|8065288|getSpecialAnimationEffectInfoType|int getSpecialAnimationEffectInfoType(AnimationInterpreter *AIS)||
|8065294|setSpecialAnimationEffectInfoType|void setSpecialAnimationEffectInfoType(AnimationInterpreter *AIS, __int16 type)||
|80652AC|ifSpecialAnimationEffectExist|bool ifSpecialAnimationEffectExist()||
|8065400|loadFireDragonBattleAnimationBG|void loadFireDragonBattleAnimationBG(AnimationInterpreter *AIS)||
|8065430|setSpecialAnimationEffectInfoState4|void setSpecialAnimationEffectInfoState4(AnimationInterpreter *AIS)||
|806546C|RunPlayerPhaseStartTutorialEvent|int RunPlayerPhaseStartTutorialEvent(int a1)||
|806553C|FireDragonBGAnimation1|void FireDragonBGAnimation1(_6CStruct *ctx)||
|8065564|FireDragonBGAnimation2|void FireDragonBGAnimation2(_6CStruct *ctx)||
|80655A0|FireDragonBGAnimation3|void FireDragonBGAnimation3(_6CStruct *ctx)||
|8065660|FireDragonBGAnimation4|void FireDragonBGAnimation4(_6CStruct *ctx)||
|80656D8|FireDragonBGAnimation5|void FireDragonBGAnimation5(_6CStruct *ctx)||
|806574C|FireDragonBGAnimation6|void FireDragonBGAnimation6(_6CStruct *ctx)||
|80657D4|FireDragonBGAnimation7|void FireDragonBGAnimation7(_6CStruct *ctx)||
|80658F8|FireDragonBGAnimation8|void FireDragonBGAnimation8(_6CStruct *ctx)||
|8065AB0|FireDragonBGAnimation9|void FireDragonBGAnimation9(_6CStruct *ctx)||
|8065BA0|FireDragonBGAnimation10|void FireDragonBGAnimation10(_6CStruct *ctx)||
|8065BC0|FireDragonBGAnimation11|void FireDragonBGAnimation11(_6CStruct *ctx)||
|8065C14|FireDragonBGAnimation12|void FireDragonBGAnimation12(_6CStruct *ctx)||
|8065C34|FireDragonBGAnimation13|void FireDragonBGAnimation13(_6CStruct *ctx)||
|8065CC8|FireDragonBGAnimation14|void FireDragonBGAnimation14(_6CStruct *ctx)||
|8065D20|FireDragonBGAnimation15|void FireDragonBGAnimation15(_6CStruct *ctx)||
|80660F4|loadFireDragonBGPaletteAnimation|_6CStruct *loadFireDragonBGPaletteAnimation(void *AIS)||
|8066118|FireDragonBGPaletteAnimation|void FireDragonBGPaletteAnimation(_6CStruct *ctx)|火龙背景调色板动画|
|80662F4|loadFireSeaBG2|_6CStruct *loadFireSeaBG2(void *AIS)||
|806637C|__malloc_unlock_2|void _malloc_unlock_2()||
|8066CAC|loadFireSeaBG1|void loadFireSeaBG1(void *AIS, __int16 duration)||
|80671A0|FillBGRect|int FillBGRect(_WORD *a1, unsigned __int16 a2, int a3, __int16 a4, __int16 a5)||
|8067750|ApplyFlashingPaletteAnimation|int ApplyFlashingPaletteAnimation(int a1, int a2, int a3, int a4)||
|8067C30|battleAnimationOAMInfoHandler|void battleAnimationOAMInfoHandler(void *battleAnimationOAMInfoBuffer, int a2, unsigned __int16 a3, int a4)|读取并处理解压到内存中的战斗动画OAM信息|
|8067E14|Loop6C_efxSoundSE|int Loop6C_efxSoundSE(int a1)||
|8067EC8|.gcc2_compiled._9|int gcc2_compiled__9()||
|8067F90|playBattleAnimationSFX|int playBattleAnimationSFX(int a1, int a2)|职业战斗动画音效播放|
|8068500|playHitSound|int playHitSound(void *AIS)||
|80689D0|PlaySFX|void PlaySFX(int SFXID, int a2, int a3, int a4)||
|806AC98|nullsub_6|void nullsub_6()||
|806ACC0|EkrTriangle_OnLoop|int EkrTriangle_OnLoop(int a1)||
|806AFB4|StartEkrPegasusKnightBG|int StartEkrPegasusKnightBG(int a1, int a2, int a3, int a4)||
|806BD58|ekrPopup_DrawWRankUp|int ekrPopup_DrawWRankUp(int a1)||
|806BDB8|ekrPopup_DrawWRankUp2|int ekrPopup_DrawWRankUp2(int a1)||
|806C1A4|GetSpellAssocStructPtr|__int16 *GetSpellAssocStructPtr(unsigned __int16 a1)||
|806C1D8|GetSpellAssocCharCount|int GetSpellAssocCharCount(unsigned __int16 a1)||
|806C1F8|GetSpellAssocAlt6CPointer|int GetSpellAssocAlt6CPointer(unsigned __int16 a1)||
|806C218|GetSpellAssocFacing|int GetSpellAssocFacing(unsigned __int16 a1)||
|806D51C|BlockAll6CMarked4|int BlockAll6CMarked4()||
|806D52C|UnblockAll6CMarked4|int UnblockAll6CMarked4()||
|80799A0|MaybeCallEndEvent|int MaybeCallEndEvent()||
|8079F0C|__malloc_unlock_3|void _malloc_unlock_3()||
|8079F24|__malloc_unlock_4|void _malloc_unlock_4()||
|8079F2C|__malloc_unlock_5|void _malloc_unlock_5()||
|807A0B4|SetEventId|int SetEventId(signed int a1)||
|807A0C8|CheckEventId|int CheckEventId(int a1)||
|807A0E0|UnsetEventId|int UnsetEventId(signed int a1)||
|807A0F4|GetGlobalEventIdStorage|_BYTE *GetGlobalEventIdStorage()||
|807A0FC|GetGlobalEventIdStorageSize|signed int GetGlobalEventIdStorageSize()||
|807A7B4|IsCharDeadAsNonPlayerUnit|signed int IsCharDeadAsNonPlayerUnit(unsigned __int8 a1)||
|807A9F0|AreAnyEnemyUnitDead|signed int AreAnyEnemyUnitDead()||
|807AA24|GetDeadEnemyAmount|int GetDeadEnemyAmount()||
|807B2A8|HideAllUnits|int HideAllUnits()||
|807C1E8|loadFireRing|void loadFireRing(signed int parent)||
|807C1FC|ForceKillFireRing|int ForceKillFireRing()||
|807C20A|nullsub_21|int nullsub_21(int (*a1)())||
|807C210|EndFireRing|void EndFireRing()||
|807D140|IceCrystal1|void IceCrystal1(_6CStruct *ctx)||
|807D228|IceCrystal3|void IceCrystal3(_6CStruct *ctx)||
|807D248|IceCrystal4|void IceCrystal4(_6CStruct *a1)||
|807D284|IceCrystal5|void IceCrystal5(_6CStruct *ctx)||
|807D314|loadIceCrystal|void loadIceCrystal(_6CStruct *parent)|parent = 0x2025330|
|8080A94|DrawStatScreenBar|int DrawStatScreenBar(int a1, int a2, int a3, int a4, signed int a5, int a6)||
|8080FB8|DrawUnitScreenSupportList|int DrawUnitScreenSupportList()||
|80810A8|DrawUnitWeaponRank|int DrawUnitWeaponRank(int a1, int r1_0, int r2_0, int a4)||
|8082250|MakeStatScreenRText6C|int MakeStatScreenRText6C(signed int a1, int a2)||
|8082D74|ResetMoveUnitDirection_Unique|int ResetMoveUnitDirection_Unique()||
|808512C|GetCameraMovementSpeedMaybe|signed int GetCameraMovementSpeedMaybe()||
|8086C60|__malloc_unlock_6|void _malloc_unlock_6()||
|808E5C4|__malloc_unlock_7|void _malloc_unlock_7()||
|808E8DC|displayMainPrepScreen|void displayMainPrepScreen(int a1)|显示出击准备菜单|
|808EAF4|SortPlayerUnitsForPrepScreen|int SortPlayerUnitsForPrepScreen()||
|80903A8|NullifyBattleDamageIfUsingStone|int NullifyBattleDamageIfUsingStone(int a1)||
|8090800|addPrepMenuEntry|void addPrepMenuEntry(int id, int (*func)(int), u8 isGrey, int textID, int unk)|显示某个菜单选项（战前准备屏幕）<br>a1=ID,a2=函数指针,a3=是否灰色,a4=文本ID,a5=?|
|8091A74|SomethingPrepListRelated|int SomethingPrepListRelated(_DWORD *a1, int a2, char a3)||
|8091C28|CanUnitPrepScreenUse|signed int CanUnitPrepScreenUse(int a1)||
|80946CC|nullsub_7|void nullsub_7()||
|8099878|__malloc_unlock_8|void _malloc_unlock_8()||
|809BA14|.gcc2_compiled._17|int gcc2_compiled__17()||
|809E5F0|modifyPassword|void modifyPassword(int (*a1)(void))||
|809E7FC|initPassword|void initPassword(int a1, int a2)||
|809EAAC|PrintPassword|int PrintPassword(int a1, int a2)||
|809EE1C|SramInit|int SramInit()||
|809EE90|ShouldSkipHSScreen|int ShouldSkipHSScreen()||
|809EEDC|ComputeChecksum16|int ComputeChecksum16(unsigned __int16 *a1, int a2)||
|809EF08|LoadSomeUnitStatThingUnlockIdk|signed int LoadSomeUnitStatThingUnlockIdk(int *a1)||
|809EF88|SaveSomeUnitStatThingUnlockIdk|void SaveSomeUnitStatThingUnlockIdk(_WORD *a1)||
|809F1B0|setSaveHeader|void setSaveHeader(SaveHeader *pSaveHeader, unsigned int saveslotNum)|设置存档槽头部描述信息<br>输入参数：<br>pSaveHeader 指向存档头结构体的指针<br>saveslotNum 存档槽编号|
|809F280|GetSaveslotAddr|_BYTE *GetSaveslotAddr(unsigned int saveslotNum)|根据存档号取存档地址<br>输入参数：存档号<br>返回值：存档地址(指向存档槽的指针)|
|809F328|CheckSaveAndGetPointer|int CheckSaveAndGetPointer(unsigned int a1)||
|809F364|SaveGlobalEventIds|void SaveGlobalEventIds(_BYTE *pDest)|保存全局事件ID到存档<br>输入参数：<br>pDest 指向目的地址的指针|
|809F3AC|LoadGlobalEventIds|void LoadGlobalEventIds(int a1)||
|809F3D4|SaveConvoyItems|void SaveConvoyItems(_BYTE *pDest)|保存运输队物品到存档<br>输入参数：<br>pDest 指向目的地址的指针|
|809F3EC|LoadConvoyItems|void LoadConvoyItems(int a1)||
|809F908|SetSomeUnitStatThingUnlockMaybeIdk|void SetSomeUnitStatThingUnlockMaybeIdk(signed int unitID, int *a2)|输入参数：<br>unitID 内存中人物的编号ID|
|809F994|GGM_IsAnyCharacterKnown|signed int GGM_IsAnyCharacterKnown(int *a1)||
|809F9CC|__malloc_unlock_9|void _malloc_unlock_9()||
|809F9F8|GetChapterThing|signed int GetChapterThing()||
|80A0470|LoadBWLEntries|void LoadBWLEntries(int a1)||
|80A049C|LoadChapterWinData|void LoadChapterWinData(int a1)||
|80A04B8|SaveBWLEntries|void SaveBWLEntries(_BYTE *pDest, int a2, int a3, int a4)|保存人物战绩表到存档<br>输入参数：<br>pDest 指向目的地址的指针|
|80A04DC|SaveChapterWinData|void SaveChapterWinData(_BYTE *pDest, int a2, int a3, int a4)|保存章节胜利数据到存档<br>输入参数：<br>pDest 指向目的地址的指针|
|80A0510|GetNextChapterWinDataEntryIndex|int GetNextChapterWinDataEntryIndex()||
|80A053C|GetWonChapterCount|int GetWonChapterCount()||
|80A05A0|RegisterChapterTimeAndTurnCount|int RegisterChapterTimeAndTurnCount(int a1)|Arguments: r0 = Chapter Data Struct|
|80A0628|GetGameTotalTurnCount|int GetGameTotalTurnCount()||
|80A0654|DoesThisChapterCount|signed int DoesThisChapterCount(signed int a1)||
|80A067C|GetGameTotalTime|int GetGameTotalTime()||
|80A06BC|GetGameTotalTurnCount2_0|int GetGameTotalTurnCount2_0()||
|80A0938|BWL_IncrementMoveValue|int BWL_IncrementMoveValue(int a1)||
|80A0978|BWL_IncrementStatScreenViews|int BWL_IncrementStatScreenViews(int a1)||
|80A09B8|BWL_IncrementDeployCountMaybe|int BWL_IncrementDeployCountMaybe(int a1)||
|80A0A08|BWL_AddTilesMoved|int BWL_AddTilesMoved(int a1, int a2)|r0 = char id, r1 = movement count?|
|80A0A68|BWL_AddExpGained|int BWL_AddExpGained(int a1, int a2)|r0 = Character Entry, r1 = Exp Gained|
|80A0B88|GetGameTotalTurnCount2|int GetGameTotalTurnCount2()||
|80A0C14|BWL_AddFavoritismValue|int BWL_AddFavoritismValue(int a1, int a2)|Arguments: r0 = Char Index, r1 = Value|
|80A0CE8|IsPlaythroughIdUnique|signed int IsPlaythroughIdUnique(int a1)||
|80A0D58|GGM_GetCompletionCount|int GGM_GetCompletionCount(int a1)||
|80A0D74|GetGlobalCompletionCount|int GetGlobalCompletionCount()||
|80A0D94|GGM_RegisterCompletedPlaythrough|signed int GGM_RegisterCompletedPlaythrough(int a1, int a2)||
|80A0EDC|BWL_GetEntry|int *BWL_GetEntry(unsigned __int8 a1)|Arguments: r0 = Char Id|
|80A0F08|.gcc2_compiled._19|int gcc2_compiled__19()||
|80A0F20|Save0203EC98|void Save0203EC98(int a1, int a2, int a3, int a4)||
|80A119C|SaveGame|void SaveGame(int saveslotNum)|游戏存档主程序<br>输入参数：saveslotNum 存档号|
|80A1278|LoadGame|void LoadGame(int saveslotNum)||
|80A13E8|SaveUnit|int SaveUnit(Unit *pUnitInWRAM, UnitInSave *pUnitInSave)|保存人物数据到存档<br>输入参数：<br>pUnitInWRAM 指向内存中人物数据的指针<br>pUnitInSave 指向存档中人物数据的指针|
|80A1824|LoadSavedUnit|void LoadSavedUnit(int a1, Unit *unit)||
|80A1A88|SaveSuspendedGame|int SaveSuspendedGame(int a1)||
|80A1BEC|LoadSuspendedGame|int LoadSuspendedGame(int a1)||
|80A22AC|GetLastSuspendSaveId|bool GetLastSuspendSaveId()||
|80A22CC|GetNextSuspendSaveId|int GetNextSuspendSaveId()||
|80A22DC|UpdateNextSuspendSaveId|int UpdateNextSuspendSaveId()||
|80A232C|SaveMetadata_VerifyChecksum|bool SaveMetadata_VerifyChecksum(int a1)||
|80A5B20|savemenu_SetDifficultyChoice|int savemenu_SetDifficultyChoice(char a1, char a2)|Arguments: r0 = Difficulty (3 for cancel), r1 = 0?|
|80A8AAC|Call89A2938_PlaySound2|int Call89A2938_PlaySound2(int a1)||
|80AA20C|Get6CDifferedLoop6C|int Get6CDifferedLoop6C(int a1, signed int a2)||
|80AA230|DeleteEach6CDifferedLoop|int DeleteEach6CDifferedLoop()||
|80AA24C|Find6CDifferedLoop|int *Find6CDifferedLoop(int a1)||
|80AB134|DoesMoveUnitExist|bool DoesMoveUnitExist()||
|80AB5E0|IceCrystal2|bool IceCrystal2()||
|80AB7F4|loadGradientPalette|void loadGradientPalette(void *palette1, void *palette2, int a3, int paletteSlot, int a5, _6CStruct *parent)|调色板渐变|
|80AB82C|stopGradientPal|void stopGradientPal()|停止调色板渐变|
|80AC1F4|__malloc_unlock_10|void _malloc_unlock_10()||
|80B4A20|PlaySoundIdA0|int PlaySoundIdA0()||
|80B5D88|.gcc2_compiled._21|void gcc2_compiled__21()||
|80B5D8C|__malloc_unlock_11|void _malloc_unlock_11()||
|80B5D90|.gcc2_compiled._22|void gcc2_compiled__22()||
|80B5D94|__malloc_unlock_12|void _malloc_unlock_12()||
|80B71F8|GetChapterSurvivalRank|unsigned int GetChapterSurvivalRank()||
|80B73FC|GetOverallRank|signed int GetOverallRank(int a1, int a2, int a3, int a4, int a5)||
|80B75A4|GetDeadUnitAmount|int GetDeadUnitAmount()||
|80B75FC|GetChapterDeathCount|int GetChapterDeathCount()||
|80B776C|GetChapterCombatRank|signed int GetChapterCombatRank()||
|80B7880|ComputeChapterRankings|int ComputeChapterRankings()||
|80BE394|umul3232H32|int umul3232H32(unsigned int a1, unsigned int a2)||
|80BE3A4|SoundMain|int SoundMain()||
|80BE7E4|ClearChain|int ClearChain(int result)||
|80BE804|ply_fine|void ply_fine(int a1, int a2)||
|80BE834|MPlyJmpTblCopy|int MPlyJmpTblCopy()||
|80BE84C|ldrb_r3_r2|void ldrb_r3_r2(int a1, int a2, _BYTE *a3)||
|80BE84E|chk_adr_r2|void chk_adr_r2()||
|80BE868|ld_r3_tp_adr_i|void ld_r3_tp_adr_i(int a1, int a2)||
|80BE874|ply_goto|void ply_goto(int a1, int a2)||
|80BE894|ply_patt|void ply_patt(int a1, int a2)||
|80BE8B0|ply_pend|void ply_pend(int a1, int a2)||
|80BE8C4|ply_rept|int ply_rept(int a1, int a2)||
|80BE8F4|ply_prio|int ply_prio(int a1, int a2)||
|80BE900|ply_tempo|int ply_tempo(int a1, int a2)||
|80BE914|ply_keysh|int ply_keysh(int a1, int a2)||
|80BE928|ply_voice|int ply_voice(int a1, int a2)||
|80BE958|ply_vol|int ply_vol(int a1, int a2)||
|80BE96C|ply_pan|int ply_pan(int a1, int a2)||
|80BE980|ply_bend|int ply_bend(int a1, int a2)||
|80BE994|ply_bendr|int ply_bendr(int a1, int a2)||
|80BE9A8|ply_lfodl|int ply_lfodl(int a1, int a2)||
|80BE9B4|ply_modt|int ply_modt(int a1, int a2)||
|80BE9CC|ply_tune|int ply_tune(int a1, int a2)||
|80BEA44|MPlayMain_rev01|int MPlayMain_rev01(int result, int a2)||
|80BECAC|TrackStop_rev01|void TrackStop_rev01(int a1, _BYTE *a2, int a3)||
|80BECF0|ChnVolSetAsm|unsigned int ChnVolSetAsm()||
|80BED20|ply_note_rev01|void ply_note_rev01(int a1, int a2, unsigned int a3)||
|80BEF20|ply_endtie_rev01|signed int ply_endtie_rev01(int a1, int a2)||
|80BEF60|clear_modM|void clear_modM(int a1, int a2)||
|80BEF7C|ld_r3_tp_adr_i_rev|void ld_r3_tp_adr_i_rev(int a1, int a2)||
|80BEF88|ply_lfos_rev01|int ply_lfos_rev01(int a1, int a2)||
|80BEF9C|ply_mod_rev01|void ply_mod_rev01(int a1, int a2)||
|80BEFB0|MidiKey2fr|u32 MidiKey2fr(int a1, unsigned __int8 a2, int a3)||
|80BF018|MPlayContinue|int MPlayContinue(int a1)||
|80BF034|MPlayFadeOut|signed int MPlayFadeOut(int a1, __int16 a2)||
|80BF054|m4aSoundInit|void m4aSoundInit()||
|80BF0CC|m4aSoundMain|void m4aSoundMain()||
|80BF0D8|m4aSongNumStart|void m4aSongNumStart(u16 n)||
|80BF1A4|m4aSongNumStartOrChange|void m4aSongNumStartOrChange(u16 n)||
|80BF1D8|m4aSongNumStartOrContinue|void m4aSongNumStartOrContinue(u16 n)||
|80BF20C|m4aMPlayAllStop|void m4aMPlayAllStop()||
|80BF238|m4aMPlayContinue|void m4aMPlayContinue(MusicPlayerArea *ma)||
|80BF244|m4aMPlayAllContinue|void m4aMPlayAllContinue()||
|80BF280|m4aMPlayFadeOutTemporarily|signed int m4aMPlayFadeOutTemporarily(int a1, __int16 a2)||
|80BF2A0|m4aMPlayFadeIn|int m4aMPlayFadeIn(int a1, __int16 a2)||
|80BF2C8|m4aMPlayImmInit|void m4aMPlayImmInit(MusicPlayerArea *ma)||
|80BF310|MPlayExtender|void MPlayExtender(_BYTE *m4a_cgbchn)||
|80BF42C|ClearChain_rev|void ClearChain_rev(int a1)||
|80BF440|Clear64byte_rev|void Clear64byte_rev(int a1)||
|80BF454|SoundInit_rev01|void SoundInit_rev01(SoundArea *m4a_sound)||
|80BF54C|SampFreqSet_rev01|void SampFreqSet_rev01(int a1)||
|80BF5F0|SoundMode_rev01|void SoundMode_rev01(u32 mode)||
|80BF6DC|SoundVSyncOff_rev01|void SoundVSyncOff_rev01()||
|80BF758|SoundVSyncOn_rev01|void SoundVSyncOn_rev01()||
|80BF794|MPlayOpen_rev01|void MPlayOpen_rev01(int a1, _BYTE *a2, unsigned __int8 a3)||
|80BF80C|MPlayStart_rev01|void MPlayStart_rev01(int a1, int a2)||
|80BF8F0|MPlayStop_rev01|void MPlayStop_rev01(int a1, int a2, int a3)||
|80BF930|FadeOutBody_rev01|void FadeOutBody_rev01(int a1)||
|80BF9F8|TrkVolPitSet_rev01|void TrkVolPitSet_rev01(int a1, int a2)||
|80C0080|SomethingSoundRelated_80D11A4|int SomethingSoundRelated_80D11A4(int a1, int a2, int a3)||
|80C0444|ply_xxx|void ply_xxx(int a1, int a2)||
|80C0458|ply_xwave|void ply_xwave(int a1, int a2)||
|80C04A0|ply_xtype|int ply_xtype(int a1, int a2)||
|80C04B4|ply_xatta|int ply_xatta(int a1, int a2)||
|80C04C8|ply_xdeca|int ply_xdeca(int a1, int a2)||
|80C04DC|ply_xsust|int ply_xsust(int a1, int a2)||
|80C04F0|ply_xrele|int ply_xrele(int a1, int a2)||
|80C0504|ply_xiecv|_BYTE *ply_xiecv(int a1, int a2)||
|80C0510|ply_xiecl|_BYTE *ply_xiecl(int a1, int a2)||
|80C051C|ply_xleng|int ply_xleng(int a1, int a2)||
|80C0530|ply_xswee|int ply_xswee(int a1, int a2)||
|80C0544|nullsub_16|void nullsub_16()||
|80C0548|ArcTan2|u16 ArcTan2(u16 x, s16 y)||
|80C054C|BgAffineSet|void BgAffineSet(BgAffineSrcData *Srcp, BgAffineDestData *Destp, s32 Num)||
|80C0550|CPUFastSet|void CPUFastSet(void *src, void *dst, u32 count)||
|80C0554|CpuSet|void CpuSet(void *Srcp, void *Destp, u32 DmaCntData)||
|80C0558|Div|int Div(int Number, int Demon)||
|80C055C|DivRem|s32 DivRem(s32 Number, s32 Denom)||
|80C0564|HuffUnComp|void HuffUnComp(void *Srcp, void *Destp)||
|80C0568|LZ77UnCompVram|void LZ77UnCompVram(void *Srcp, void *Destp)||
|80C056C|LZ77UnCompWram|void LZ77UnCompWram(void *src, void *dst)||
|80C0570|MultiBoot|int MultiBoot(int result)||
|80C0578|ObjAffineSet|void ObjAffineSet(ObjAffineSrcData *Srcp, void *Destp, s32 Num, s32 Offset)||
|80C057C|RLUnCompVram|void RLUnCompVram(void *Srcp, void *Destp)||
|80C0580|RLUnCompWram|void RLUnCompWram(void *Srcp, void *Destp)||
|80C0584|SoftReset|void SoftReset(void *a1)||
|80C059C|SoundBiasReset|int SoundBiasReset(void)||
|80C05A4|SoundBiasSet|int SoundBiasSet(void)||
|80C05AC|Sqrt|u16 Sqrt(u32 X)||
|80C05B0|VBlankIntrWait|void VBlankIntrWait()||
|80C05B8|.gcc2_compiled.|int gcc2_compiled_(_BYTE *a1, _BYTE *a2, int a3)||
|80C05F8|WriteSramFast|void WriteSramFast(u8 *src, u8 *dst, u32 size)||
|80C0638|VerifySramFast_Core|_BYTE *VerifySramFast_Core(u8 *src, u8 *tgt, u32 size)||
|80C0684|SetSramFastFunc|void SetSramFastFunc()||
|80C071C|SRAMTransfer_WithCheck|int SRAMTransfer_WithCheck(_BYTE *pSrc, _BYTE *pDest, int count, int a4)|拷贝数据到SRAM（带检查）<br>输入参数：<br>pSrc 指向源地址的指针<br>pDest 指向目的地址的指针<br>count 拷贝的字节数|
|80C075C|.gcc2_compiled._27|int gcc2_compiled__27(int result, int a2, int a3)||
|80C0794|_call_via_r1|int call_via_r1(int arg, int (*func)(int))||
|80C0798|_call_via_r2|int call_via_r2(int a1, int a2, int a3)||
|80C079C|_call_via_r3|int call_via_r3(int a1, int a2, int a3, int (*a4)(void))||
|80C07A0|_call_via_r4|int call_via_r4(int a1, int a2, int a3, int a4)||
|80C07A4|_call_via_r5|int call_via_r5(int a1)||
|80C07A8|_call_via_r6|int __usercall call_via_r6@<R0>(int (*func)(int)@<R6>, int a1@<R0>)||
|80C07AC|_call_via_r7|int call_via_r7()||
|80C07B0|_call_via_r8|int call_via_r8()||
|80C07B4|_call_via_r9|int call_via_r9(int a1, int a2)||
|80C07B8|_call_via_r10|int call_via_r10(int a1)||
|80C07BC|_call_via_r11|int call_via_r11()||
|80C07C0|_call_via_ip|int call_via_ip()||
|80C07C4|_call_via_r13|||
|80C07C8|_call_via_lr|void call_via_lr()||
|80C07CC|__divsi3|void _divsi3(int a1, int a2)||
|80C0854|Ldiv0|int Ldiv0()||
|80C0860|nullsub_1|void nullsub_1()||
|80C0864|__modsi3|void _modsi3(int a1, int a2, int a3)||
|80C086E|Over1_0|unsigned int Over1_0(unsigned int result, unsigned int a2, int a3, signed int a4)||
|80C0928|Ldiv0_0|int Ldiv0_0()||
|80C0934|.gcc2_compiled._28|int gcc2_compiled__28(int a1, int a2, int a3)||
|80C09A4|__udivsi3|void _udivsi3(unsigned int a1, unsigned int a2)||
|80C0A12|Ldiv0_1|int Ldiv0_1()||
|80C0A1C|__umodsi3|unsigned int _umodsi3(unsigned int result, unsigned int a2)||
|80C0AD2|Ldiv0_2|int Ldiv0_2()||
|80C0ADC|memcpy|unsigned int memcpy(unsigned int a1, unsigned int a2, unsigned int a3)||
|80C0B3C|.gcc2_compiled._24|_BYTE *gcc2_compiled__24(_BYTE *a1, char a2, unsigned int a3)||
|80C0B90|.gcc2_compiled._25|_DWORD *gcc2_compiled__25(_DWORD *a1, int *a2)||
|80C0BDC|.gcc2_compiled._26|int gcc2_compiled__26(_DWORD *a1)||
|80C0C20|ClearOAMBuffer|_DWORD *ClearOAMBuffer(int result, int a2)||
|80C0C28|writeTemplateTSA|_WORD *writeTemplateTSA(_WORD *TSABufferInWRAM, _WORD *TSATemplate, __int16 TSABaseValue)||
|80C0C30|TileMap_FillRect|_WORD *TileMap_FillRect(int result, int a2, int a3, int a4)|Arguments: r0 = Rect Root, r1 = Width, r2 = Height, r3 = Fill Value|
|8C09BA4|nullsub_23|int nullsub_23(int a1, int a2, int a3, int a4, int a5, int a6, int (*a7)(int, int, int))||
|8C0BE44|nullsub_11|int nullsub_11(int a1, int a2, int a3, int a4, int a5, int a6, int (*a7)(void))||
|8C3BED4|nullsub_24|int nullsub_24(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(int, int, int))||
