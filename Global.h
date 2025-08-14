#pragma once

#define KOREAN_VERSION

//#define DISABLE_GAMEGUARD

#define MAPPING_NAME_1			/*L"ODIN_GAME_LIST"					//*/	L"{effc5ab8-e7ea-e62f-1bbf-5f6d462d12d6}"
#define MAPPING_NAME_4			/*L"ODIN_GAME_ALIGN"				//*/	L"{8fa012a3-539e-fc7d-2ee6-1129b769a00a}"
#define MUTEX_NAME_1			/*L"ODIN_PROCESS_SYNCHRONIZE"		//*/	L"{bfcc5179-3180-707c-8a41-086c57af689c}"
#define MUTEX_NAME_3			/*L"ODIN_BACKER_MUTEX"				//*/	L"{ffc99182-0b49-cab5-b748-bacf9e68b123}"
#define EVENT_NAME_1			/*L"ODIN_MULTI_VERIFY"				//*/	L"{cf2f5878-4841-71af-2e64-a1c9153b2528}"
#define EVENT_NAME_17			/*L"Active"							//*/	L"{9f6500b0-600f-0fc4-652d-44c332813b22}"
#define EVENT_NAME_18			/*L"ODIN_BACKER_EVENT"				//*/	L"{0f1340d5-0b1c-eb99-f61a-3a648fd16b9a}"

#define MAPPING_NAME_2			/*L"GAME_MAPPING_%d"				//*/	L"{7fa27f4c-81df-bda8-57a4-dd1682b42df%d}"
#define MAPPING_NAME_3			/*L"GAME_INFO_%d"					//*/	L"{7faa2780-7ae1-dd69-f253-b46ea59119c%d}"
#define EVENT_NAME_10			/*L"ODIN_RESUME_%d"					//*/	L"{8f82df27-5fc9-d464-7eae-57c68ff2979%d}"
#define EVENT_NAME_11			/*L"ODIN_LAUNCH_%d"					//*/	L"{1fc3ff99-a6e0-3810-332d-2eb6876c3fd%d}"
#define EVENT_NAME_14			/*L"CloseGame_%d"					//*/	L"{cfe52f50-d8cd-72f5-c859-c1b637596a1%d}"

#define MAPPING_NAME_5			/*L"%s_Mapping"						//*/	L"{%s-98fc1641ceb6}"
#define MUTEX_NAME_2			/*L"%s_Running"						//*/	L"{%s-2bf3acbbb46d}"
#define EVENT_NAME_2			/*L"%s_Avail"						//*/	L"{%s-f2f15130d571}"
#define EVENT_NAME_3			/*L"%s_Launch"						//*/	L"{%s-85ffbd38878b}"
#define EVENT_NAME_4			/*L"%s_AutoStart"					//*/	L"{%s-4df4484a5402}"
#define EVENT_NAME_5			/*L"%s_AutoStop"					//*/	L"{%s-d0f88adeb270}"
#define EVENT_NAME_6			/*L"%s_Exit"						//*/	L"{%s-98f5fc6e4b5a}"
#define EVENT_NAME_7			/*L"%s_Show"						//*/	L"{%s-1bf0147f663a}"
#define EVENT_NAME_8			/*L"%s_Game"						//*/	L"{%s-d3f45b9cab98}"
#define EVENT_NAME_9			/*L"%s_Close"						//*/	L"{%s-46f74a3a82db}"
#define EVENT_NAME_12			/*L"%s_Wait"						//*/	L"{%s-0ef167d4829c}"
#define EVENT_NAME_13			/*L"%s_Answer"						//*/	L"{%s-72fb3c001543}"
#define EVENT_NAME_15			/*L"%s_Event"						//*/	L"{%s-2afd3f36c377}"
#define EVENT_NAME_16			/*L"%s_EventWait"					//*/	L"{%s-9dfedaef2280}"

#define PIPE_NAME_1															L"\\\\.\\pipe\\E095C07%d"
#define EVENT_PIPE_1														L"{%s-c09fe0743fde}"

#define MAX_WRITE_LEN			256
#define MAX_STRING_LEN			256
#define MAX_NAME				50
#define MAX_NAME_LEN			256

#define MAX_SERVER				10 //11
#define MAX_WORLD				7
#define MAX_FIELD				20
#define MAX_DUNGEON				52
#define MAX_MODE				8
#define MAX_GRADE				6
#define MAX_TYPE				7
#define MAX_AVATARRES			259 * 2 + 258 * 3 //1162
#define MAX_VEHICLERES			155	//152
#define MAX_WEAPONRES			1410	//1235
#define MAX_MAINQUEST			880
#define MAX_PARTYDUNGEON		4
#define MAX_EXPAND				9
#define MAX_EXCHANGE			35

#define ItemMode_None			0
#define ItemMode_Sell			1
#define ItemMode_Decompose		2
#define ItemMode_Store			3
#define ItemMode_Delete			4
#define ItemMode_Use			5
#define ItemMode_Trade			6
#define ItemMode_Get			7

#define ItemType_Weapon			0
#define ItemType_Armor			1
#define ItemType_Accessory		2
#define ItemType_Material		3
#define ItemType_Dungeon		4
#define ItemType_Gold			5
#define ItemType_Skill			6

#define OPCODE_VERSIONCHECK		0
#define OPCODE_USERLOGIN		1
#define OPCODE_RELOGIN			2
#define OPCODE_TIMEEXPIRED		3
#define OPCODE_PATCHDOWN		4

#define OPCODE_SCREENACEPT		112
#define OPCODE_SYSTEM			113
#define OPCODE_USERHACK			114

#define STATUS_CONNECTFAIL		0		// 서버 접속 실패
#define STATUS_SENDFAIL			1		// 서버 전송 실패
#define STATUS_RECVFAIL			2		// 서버 수신 실패
#define STATUS_ALREADYCONNECT	3		// 이미 접속중
#define STATUS_WRONGIDPW		4		// 그릇된 아이디 혹은 비번
#define STATUS_BLOCKID			5		// 정지당한 아이디
#define STATUS_SERVERMAINTANCE	6		// 서버 점검중
#define STATUS_WRONGHWID		7		// 하드 인증 실패
#define STATUS_NOUSERINFO		8		// 사용자 정보 없음
#define STATUS_LOGINSUCCESS		9		// 로그인 성공 (마감기간 정보)
#define STATUS_ADDRINVALID		10		// 주소 정보 없음
#define STATUS_DISCONNECT		11		// 서버와 접속이 끊어짐
#define STATUS_TIMEEXPIRED		12		// 사용기간 만료됨
#define STATUS_CURVERSION		13		// 현재 프로그램 버젼
#define STATUS_GAMESTATUSLOG	14		// 기타 게임 상태 로그
#define STATUS_AUTHERROR		15		// 서버 인증에 필요한 정보가 없다
#define STATUS_GAMECHARLOG		16		// 게임 캐릭 로그

typedef struct _LOG{
	WCHAR szLog[10000];
}LOGVIEWER;

typedef struct _CLIENTSTATUS_
{
	WORD	nOpCode;
	int		nValue;
	WCHAR	szLog[200];

	int		nLevel;
	WCHAR	szChar[50];
	WCHAR	szServer[50];
	WCHAR	szRegion[50];
	DWORD	nGold;
	DWORD	nDia;
}CLIENTSTATUS;

typedef struct _Align_Info_
{
	BYTE	bAlign;
	BYTE	nAlign;

	int		nIndex;
	DWORD	dwClientPID;
}Align_Info;

// -------------- ScheduleDetail --------------//

typedef struct _SCHEDULE_SETTING_
{
	BYTE	bSelServer;
	WORD	nSelServer;
	BYTE	bSelChar;
	BYTE	nSelChar;

	BYTE	bTimeEnable;
	BYTE	nTimeMode;

	int		nTimeStart;
	int		nTimeStop;

	int		nHuntTime;

	BYTE	bEmpty[100];
}SCHEDULE_SETTING;

// -------------- ScheduleHunt --------------//

typedef struct _ITEM_RETURN_
{
	BYTE		bEnable;
	WCHAR		szName[MAX_NAME];
	int			nCount;
}ITEM_RETURN;

typedef struct _HUNT_SETTING_
{
	BYTE		nMoveMode;

	BYTE		nWorldIndex;
	BYTE		nFieldIndex;
	float		fHuntPosX;
	float		fHuntPosY;
	float		fHuntPosZ;

	BYTE		nDungeonIndex;

	BYTE		nTargetRange;

	BYTE		bMonTeleport;
	int			nMonTeleport;

	BYTE		bMannerMode;

	BYTE		bGatherEnable;
	BYTE		bGatherStone;
	BYTE		bGatherWood;
	BYTE		bGatherGrass;

	BYTE		bPartyEnable;
	BYTE		nPartyMode;

	BYTE		bHpReturnEnable;
	BYTE		nHpReturnValue;
	int			nHpReturnTime;

	BYTE		bWeightReturnEnable;
	BYTE		nWeightReturnValue;
	int			nWeightReturnTime;

	BYTE		bDeadStop;
	int			nDeadTime;
	int			nDeadCount;

	BYTE		bReconnectStop;
	int			nReconnectTime;
	int			nReconnectCount;

	BYTE		bDungeonPos;
	float		fDungeonPosX;
	float		fDungeonPosY;
	float		fDungeonPosZ;

	BYTE		bContinueMainQuest;
	BYTE		bPartyMove;					// 파장에게 이동
	BYTE		bPartyMember;				// 파장 / 파원
	WCHAR		szPartyMaster[MAX_NAME];	// 파장 이름

	BYTE		bQuestLevel;				// 퀘스트 (레벨)
	int			nQuestLevel;				//
	BYTE		bQuestWorld;				// 퀘스트 (월드)
	WORD		nQuestWorld;

	BYTE		bDeadStopResume;
	BYTE		nDeadStopResume;

	BYTE		bEnablePickGrade;
	BYTE		nItemPickGrade;

	BYTE		bEmpty[100];
}HUNT_SETTING;

// -------------- ScheduleBuy --------------//

typedef struct _ITEM_BUY_
{
	BYTE	bEnable;
	WCHAR	szName[MAX_NAME];
	int		nCurCount;
	int		nMaxCount;
}ITEM_BUY;

typedef struct _BUY_SETTING_
{
	int		nSummonGold;
	BYTE	bSummonAvatar[3];
	BYTE	bSummonRiding[3];
	BYTE	bSummonRune[2];

	int		nPaperGold;
	BYTE	bPaperBuy[4];
	int		nPaperCount[4];

	BYTE	bSkillGold;
	int		nSkillGold;

	int		nExpendGold;

	BYTE	bBuyHighSkill;

	BYTE	bCashItemBuy[3];
	BYTE	nCashItemBuy[3];

	BYTE	bWeaponType[3];

	BYTE	bMimirPotion[5];

	BYTE	bBlessingStone[2];

	BYTE	bEmpty[100];
}BUY_SETTING;

// -------------- ScheduleItem --------------//

typedef struct _DETAIL_ITEM
{
	BYTE	bEnable;
	WCHAR	szName[MAX_NAME];
	BYTE	nMode;

	int		nMarketCount;
	BYTE	nMarketMode;
	int		nMarketIndex;
	int		nMarketPrice;

	BYTE	bItemEnchant;
	int		nItemEnchant;

	BYTE	bEmpty[20];
}DETAIL_ITEM;

// -------------- ScheduleOther --------------//

typedef struct _OTHER_SETTING_
{
	BYTE	bVillageRequest;			// 마을 의뢰 퀘스트
	BYTE	bValhallaFight;				// 발할라 대전
	BYTE	bRecoverFree;				// 무료 복구 (경험치)
	BYTE	bRecoverGold;				// 골드 복구 (경험치)
	BYTE	bAchieveReward;				// 업적 보상
	BYTE	bAutoEquip;					// 자동 장착
	BYTE	bEventReward;				// 이벤트 보상
	BYTE	bGuildCheck;				// 길드 출석
	BYTE	bGuildDonate;				// 길드 기부
	int		nGuildDonate;				// 얼마이상일때
	BYTE	bCharacMail;				// 캐릭 우편
	BYTE	bAccountMail;				// 계정 우편
	BYTE	bStoreEquips;				// 스케줄 완료시 장비 창고에 보관
	BYTE	bGetStoreEquips;			// 스케줄 시작시 장비 창고에서 찾기
	BYTE	nVillageRegion;				// 마을 의뢰 퀘스트 지역
	BYTE	bGuildJoin;					// 길드 가입
	BYTE	bUseVillageQuest;			// 마을 의뢰서 사용
	BYTE	bMoveChaoEnable;			// 이동 카오 체크
	WORD	nMoveChaoTime;
	WORD	nMoveChaoCount;
	BYTE	bQuestChaoEnable;
	WORD	nQuestChaoTime;

	BYTE	bCollectItem;				// 아이템 컬렉션
	BYTE	bCollectGrade[4];			// 컬렉션 등급
	BYTE	bCollectTab[4];				// 컬렉션 탭
	BYTE	bCollectEnchant;			// 컬렉션 강화 장비
	BYTE	nCollectMin;
	BYTE	nCollectMax;
	BYTE	bCollectFilter;				// 컬렉션 필터
	BYTE	bCollectType[6];			// 컬렉션 종류

	BYTE	bDissolveItem;				// 아이템 분해
	BYTE	bDissolveGrade[4];			// 분해 등급
	BYTE	bDissolveEnchant;			// 강화된 장비 분해
	BYTE	bDissolveManufacture;		// 세공된 장비 분해
	BYTE	bDissolveBelong;			// 귀속 장비 분해
	BYTE	bDissolveNotBelong;			// 비귀속 장비 분해

	BYTE	bWorldBoss;					// 가름 월드 보스
	BYTE	bTreasureBox;				// 보물 상자

	BYTE	bPartyDungeon;				// 파티 던전
	BYTE	bDungeonType;
	BYTE	nDungeonType;
	BYTE	bDungeonDiff;
	BYTE	nDungeonDiff;

	BYTE	bEmptyByte;
	BYTE	bSkillInteraction;
	BYTE	bMimirPotion;
	BYTE	bUseTicket;

	WORD	nDungeonLevel;				// 파티 던전 입장레벨
	BYTE	bMemberCount;				// 파티 던전 인원수
	BYTE	nMemberCount;
	BYTE	bAverageLevel;				// 평균 레벨 체크
	WORD	nAverageLevel;
	BYTE	bBusLevel;					// 캐리받을 레벨
	WORD	nBusLevel;

	BYTE	bEnchantStone[3];			// 거래 가능 강화석 사용

	BYTE	bBuyBigPotion;				// 큰 물약 구매
	BYTE	bEnableSubQuest;			// 서브 퀘스트

	// 쓰지 않는 옵션들 //
	BYTE	bMoveHack;
	int		nMoveHack;
	BYTE	bAttackHack;
	int		nAttackHack;
	BYTE	bSkillHack;
	int		nSkillHack;
	BYTE	bCoolHack;
	int		nCoolHack;
	BYTE	bHitHack;
	int		nHitHack;
	// --------------- //

	BYTE	bWeaponTreasure;			// 무기 형상 보물 상자

	BYTE	bTradeDissolve;				// 거래 가격에 따른ㄴ 장비 분해
	int		nTradeDissolve;

	BYTE	bCombineAvatar;				// 합성
	BYTE	bCombineRide;
	BYTE	bCombineWeapon;

	BYTE	bFrameEnable;
	int		nFrameValue;

	BYTE	bEventBuff;					// 석상 버프
	
	BYTE	bEmpty[100];
}OTHER_SETTING;

typedef struct _stExtraRegInfo
{
	DWORD bUnprintSameCaller;
	DWORD bUnprintSameRegister;
	DWORD dwUnprintSameRegIdxWhenHooked;

	DWORD bReadValueWhenHooked;
	DWORD dwReadRegIdxWhenHooked;
	DWORD dwSignWhenHooked;
	DWORD dwOffsetValueToReadWhenHooked;
	DWORD dwLengthToReadWhenHooked;

	DWORD bWriteValueWhenHooked;
	DWORD dwWriteUnitWhenHooked;
	DWORD64 qwHexValueToWriteWhenHooked;
	DWORD bWriteToOffset;

	_stExtraRegInfo()
	{
		bUnprintSameCaller = 0;
		bUnprintSameRegister = 0;
		dwUnprintSameRegIdxWhenHooked = 0;
		bReadValueWhenHooked = 0;
		dwReadRegIdxWhenHooked = 0;
		dwSignWhenHooked = 0;
		dwOffsetValueToReadWhenHooked = 0;
		bWriteValueWhenHooked = 0;
		dwWriteUnitWhenHooked = 0;
		qwHexValueToWriteWhenHooked = 0;
		bWriteToOffset = 0;
	}

}STExtraRegInfo, * PSTExtraRegInfo;


enum E_REGISTER_TYPE
{
	e_Reg_RAX = 0,
	e_Reg_RBX,
	e_Reg_RCX,
	e_Reg_RDX,
	e_Reg_RSI,
	e_Reg_RDI,
	e_Reg_RIP,
	e_Reg_RSP,
	e_Reg_RBP,
	e_Reg_RFL,
	e_Reg_R8,
	e_Reg_R9,
	e_Reg_R10,
	e_Reg_R11,
	e_Reg_R12,
	e_Reg_R13,
	e_Reg_R14,
	e_Reg_R15,
	e_Reg_Arg5,
	e_Reg_Arg6,
	e_Reg_Count,
};

enum E_DATA_VALUE_TYPE
{
	e_DVT_BIT = 0,
	e_DVT_BYTE,
	e_DVT_WORD,
	e_DVT_DWORD,
	e_DVT_DWORD64,
	e_DVT_Count,
};

enum E_SIGN_TYPE
{
	e_Sign_Plus = 0,
	e_Sign_Minus,
	e_Sign_Count,
};


enum E_IO_MEMORY_TYPE
{
	e_IO_Memory_BYTE,
	e_IO_Memory_DWORD64,
	e_IO_Memory_DWORD,
	e_IO_Memory_WORD,
	e_IO_Memory_WCHAR,
	e_IO_Memory_CHAR,
	e_IO_Memory_Type_Num,
};

// -------------- GameMapping --------------//

typedef struct _GAME_MAPPING_
{
	WCHAR	szAppPath[256];

	WCHAR	szSchedule[MAX_NAME];

	HWND	hGameWnd;
	DWORD	dwClientPID;
	
	DWORD64	qwServerTick;
	DWORD64 qwTimerTick;

	BYTE	bGameInfo;				// 게임 정보
	int		nServer;
	WCHAR	szCharName[MAX_NAME];
	WCHAR	szServerName[MAX_NAME];
	WCHAR	szRegion[MAX_NAME];
	float	fPosX;
	float	fPosY;
	float	fPosZ;
	int		nCurHp;
	int		nMaxHp;
	int		nCurMp;
	int		nMaxMp;
	int		nWeight;
	int		nLevel;
	int		nGold;
	int		nDia;

	BYTE	bDateInit;				// 날자 바껴서 스케줄 정보 초기화 되엇다
	BYTE	bLogType;				// 0 - 무시, 1 - 스케줄 변경, 2 - 스케줄 완료

	int				nLogType;				// 로그 타입
	unsigned int	nStringCode;			// 로그 상태 번호
	WCHAR			szLog[MAX_NAME];		// 
	int				nLogValue1;
	int				nLogValue2;

	BYTE	bAutoRun;				// 오토 상태
	BYTE	bSettingChanged;		// 설정 변경 기발




	/// <summary>
	/// Develop Mode
	/// </summary>
	BYTE	bReadMemoryFlag;
	BYTE	bWriteMemoryFlag;
	BYTE	bHookMemoryFlag;
	BYTE	bUnHookMemoryFlag;
	BYTE	bUnHookAllMemoryFlag;
	BYTE	bHookInitUSCListFlag; // UnprintSameCaller List
	BYTE	bHookInitUSPListFlag; // UnprintSameParam List
	BYTE	bRunCommandFlag;
	/*Read*/
	DWORD	dwReadType;
	DWORD64	qwReadAddress;
	DWORD64	qwReadLength;
	BYTE	bReadIsRVA;
	/*Write*/
	DWORD	dwWriteType;
	DWORD64	qwWriteAddress;
	DWORD64	qwWriteValue;
	DWORD64	qwWriteLength;
	BYTE	aryWriteBytes[MAX_WRITE_LEN];
	BYTE	bWriteIsRVA;
	/*Hook*/
	DWORD64	qwHookAddress;
	BYTE	bHookIsRVA;
	DWORD	nNextHookDelta;
	STExtraRegInfo	stExtraRegisterInfo;
	/*UnHook*/
	DWORD64	qwUnHookAddress;
	BYTE	bUnHookIsRVA;
	/*Run*/
	DWORD64	qwCommandNo;
	DWORD64	qwParam1;
	DWORD64	qwParam2;
	DWORD64	qwParam3;
	DWORD64	qwParam4;
	DWORD64	qwParam5;
	DWORD64	qwParam6;
	DWORD64	qwParam7;
	DWORD64	qwParam8;
	DWORD64	qwParam9;
	DWORD64	qwParam10;
	WCHAR	wszStringParam[MAX_STRING_LEN];


}GAME_MAPPING;

typedef struct _GAME_INFO_
{
	BYTE	bType;					// 0 - 없음, 1 - 인벤, 2 - 플레이어
	int		nCount;
	WCHAR	szName[300][MAX_NAME];
}GAME_INFO;

typedef struct _AVATAR_RES_
{
	WCHAR	szName[MAX_NAME];
	DWORD	dwID;
	BYTE	nType;
	BYTE	nGrade;
}AVATAR_RES;

typedef struct _VEHICLE_RES_
{
	WCHAR	szName[MAX_NAME];
	DWORD	dwID;
	BYTE	bIsFly;
	BYTE	nGrade;
}VEHICLE_RES;

typedef struct _WEAPON_RES_
{
	WCHAR	szName[MAX_NAME];
	DWORD	dwID;
	BYTE	nType;
	BYTE	nGrade;
}WEAPON_RES;

typedef struct _MAINQUEST_
{
	BYTE	nChapter;
	BYTE	nScene;
	DWORD	dwQuestID;
	WCHAR	szName[MAX_NAME];
}MAINQUEST;

typedef struct _PARTYMEMBER_
{
	BYTE	bEnable;
	WCHAR	szName[MAX_NAME];
}PARTYMEMBER;

typedef struct _EXCHANGEITEM_
{
	WCHAR	szName[MAX_NAME];
	int		nCurCount;
	int		nLimitCount;
	int		nPrice;
	int		nGoodsType;
}EXCHANGEITEM;

extern WCHAR		g_szServerName[MAX_SERVER][MAX_NAME];
extern WCHAR		g_szWorldName[MAX_WORLD][MAX_NAME];
extern WCHAR		g_szFieldName[MAX_WORLD][MAX_FIELD][MAX_NAME];
extern WCHAR		g_szVillageName[MAX_WORLD][MAX_NAME];
extern WCHAR		g_szDungeonName[MAX_DUNGEON][MAX_NAME];
extern WCHAR		g_szItemMode[MAX_MODE][MAX_NAME];
extern WCHAR		g_szItemGrade[MAX_GRADE][MAX_NAME];
extern WCHAR		g_szItemType[MAX_TYPE][MAX_NAME];
extern WCHAR		g_szPartyDungeonName[MAX_PARTYDUNGEON][MAX_NAME];

extern WCHAR		g_szAppPath[MAX_PATH];

extern AVATAR_RES	g_pAvatarRes[MAX_AVATARRES];
extern VEHICLE_RES	g_pVehicleRes[MAX_VEHICLERES];
extern WEAPON_RES	g_pWeaponRes[MAX_WEAPONRES];
extern MAINQUEST	g_pMainQuest[MAX_MAINQUEST];

extern WCHAR		g_szExpendItemList[MAX_EXPAND][MAX_NAME];
extern WCHAR		g_szExchangeItemList[MAX_EXCHANGE][MAX_NAME];

extern WCHAR		g_aryRegisterList[e_Reg_Count][MAX_NAME_LEN];
extern WCHAR		g_aryDataValueTypeList[e_DVT_Count][MAX_NAME_LEN];
extern WCHAR		g_arySignList[e_Sign_Count][MAX_NAME_LEN];

BOOL	IsFileExist(WCHAR *szPath);
PVOID	MyGetProcAddress(DWORD64 qwBase, unsigned short wFunc);
PVOID	MyGetFileAddress(BYTE* pbImage, unsigned short wFunc);
void	MakeRandData(BYTE* pbBuffer, int nLen);

#define SET_CHECK(nID, nCheck)								((CButton*)GetDlgItem(nID))->SetCheck(nCheck? 1:0)
#define GET_CHECK(nID)										(BOOL)((CButton*)GetDlgItem(nID))->GetCheck()
#define SET_WND_INT(nID, nValue)							SetDlgItemInt(nID, nValue)
#define GET_WND_INT(nID)									GetDlgItemInt(nID)
#define GET_COMBO_SEL(nID)									((CComboBox*)GetDlgItem(nID))->GetCurSel()
#define ENABLE_WINDOW(nID, nEnable)							GetDlgItem(nID)->EnableWindow(nEnable)
#define GET_ENABLE_WINDOW(nID)								GetDlgItem(nID)->IsWindowEnabled()
#define SET_WND_STRING(nID, lpStr)							SetDlgItemText(nID, lpStr)
#define GET_WND_STRING(nID, lpStr)							GetDlgItemText(nID, lpStr, sizeof(lpStr) / sizeof(TCHAR))
#define GET_CUR_SEL(nID)									((CComboBox*)GetDlgItem(nID))->GetCurSel()
#define SET_CUR_SEL(nID, nValue)							((CComboBox*)GetDlgItem(nID))->SetCurSel(nValue)
#define SHOW_WND(nID, bShow)								GetDlgItem(nID)->ShowWindow(bShow == TRUE? SW_SHOW : SW_HIDE)