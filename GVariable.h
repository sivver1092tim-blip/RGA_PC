#pragma once
#include "GStruct.h"

extern DWORD64				g_hModuleMain;
extern DWORD64				g_hModuleDLL;
extern int					g_nIndex;
extern HWND				g_hGameWnd;
extern LONG_PTR			g_dwOrgWndLong;

extern BYTE				g_pbKeyState[0x100];

extern DWORD				g_dwClientPID;

extern DWORD64				g_qwTickCount;
extern DWORD64				g_qwInterval;
extern DWORD64				g_qwAutoLogicTick;
extern DWORD64				g_qwLastTickCount;
extern DWORD64				g_qwWaitTime;
extern DWORD				g_dwGameServerTime;
extern DWORD64				g_qwGoldChangeTick;

extern DWORD64				g_dwStartTickCount;
extern DWORD64				g_qwNetworkTick;
extern DWORD64				g_qwWarningTick;
extern DWORD64				g_qwGameLoadingTick;
extern DWORD64				g_qwMapLoadingTick;
extern DWORD64				g_qwPartyDungeonTick;

extern BOOL				g_bPartyDungeonOut;

extern int					g_qwAddrMemCount;
extern DWORD				g_qwAddrMemGWorld[100];
extern DWORD64				g_qwMemGWorldTick;

extern DWORD				g_dwAddrLastTime;
extern int					g_nServerLogTick;

extern BYTE				g_bServerWait;
extern DWORD64				g_dwServerSelTick;
extern DWORD64				g_dwServerLoginTick;

extern DWORD64				g_dwCharSelectTick;
extern DWORD64				g_dwCharStartTick;

extern GAME_MAPPING* g_pGameMapping;
extern GAME_INFO* g_pGameInfo;
extern int					g_pCharacterInfo[MAX_CHARACTER];

extern HANDLE				g_hWaitEvent;
extern HANDLE				g_hAnswerEvent;

extern int					g_nSceneOffset;

extern int					g_nCrackStep;

extern WCHAR				g_szAutoID[MAX_NAME];
extern WCHAR				g_szGameID[MAX_NAME];

extern int					g_nCreateLen;
extern WCHAR				g_szCreateName[MAX_NAME];

extern int					g_nCurScene;
extern int					g_nPreScene;

extern int					g_nCurStatus;
extern int					g_nPreStatus;
extern int					g_nTarStatus;

extern int					g_nStepStatus;

extern BOOL				g_bAutoRun;
extern int					g_nTestType;
extern int					g_nCount;
extern BOOL				g_bTestLog;

extern int					g_nGameServer;
extern int					g_nGameChar;

extern CharInfo			g_pCharInfo;

extern ObjectInfo			g_pObjectInfo[MAX_OBJECT];
extern int					g_nObjectCount;


extern int					g_nInvenMaxCount;
extern int					g_nInvenCount;
extern ItemInfo			g_pInvenInfo[MAX_INVEN];
extern int					g_nInvenWeight;


extern ItemInfo			g_pWarehouseInfo[MAX_WAREHOUSE];
extern int					g_nWarehouseCount;
extern int					g_nWarehouseMaxCount;

extern SkillInfo			g_pSkillInfo[MAX_SKILL];
extern int					g_nSkillCount;

extern SkillCycleInfo		g_pSkillCycleInfo[MAX_SKILLCYCLE];
extern int					g_nSkillCycleCount;

extern QuickSlotInfo		g_pQuickSlotInfo[MAX_QUICKSLOT];

extern QuestInfo			g_pQuestInfo[MAX_QUEST];
extern int					g_nQuestCount;

extern ItemCollectionInfo	g_pItemCollectionInfo[MAX_ITEMCOLLECTION];
extern int					g_nItemCollectionCount;

extern CostumeInfo			g_pCostumeInfo[MAX_COSTUME];
extern int					g_nCostumeCount;

extern PetInfo				g_pPetInfo[MAX_PET];
extern int					g_nPetCount;

extern MapInfo				g_pMapInfo[MAX_MAP];
extern int					g_nMapCount;

extern NpcItemInfo			g_pNpcItemInfo[MAX_NPCITEM];
extern int					g_nNpcItemCount;

extern MarketItemPrice		g_pMarketMap[MAX_MARKETMAP];

extern AuctionItemInfo		g_pMySaleInfo[MAX_SALE];
extern int					g_nMySaleCount;

extern AuctionItemInfo		g_pAuctionSaleInfo[MAX_AUCTION];
extern int					g_nAuctionSaleCount;


extern int					g_nStoreListCount;
extern DWORD64				g_qwStoreList[MAX_INVEN * 2];

extern int					g_nReconnectCount;
extern DWORD64				g_qwReconnectTime[50];

extern DWORD64				g_qwLoadingTick;

extern DWORD64				g_qwUseItemUID;

extern BOOL				g_bDungeonTele;
extern int					g_nEnterDungeonIdx;
extern int					g_nEnterFieldIdx;

extern BOOL				g_bRefreshCostume;
extern BOOL				g_bRefreshPet;

extern BOOL				g_bCanGuildDonate;

extern BOOL				g_bRecoverDone;

extern BOOL				g_bReQuestDone;

extern BOOL				g_bRefreshMarket;
extern BOOL				g_bNeedSearchPrice;

extern int					g_nCaoQuestCount;
extern DWORD				g_pCaoQuestID[MAX_CAOQUEST];

extern BOOL				g_bSelectDungeon;

extern DWORD64			g_qwSubCategory1;
extern DWORD64			g_qwSubCategory2;
extern DWORD64			g_qwSubCategory3;
extern DWORD64			g_qwSubCategory4;

// ------------------ Auto Setting ------------------ //

extern BOOL			g_bScheduleAlert;
extern WCHAR			g_szScheduleName[MAX_NAME];

extern SCHEDULE_SETTING	g_ScheduleSetting;

extern MAKE_SETTING		g_MakeSetting;

extern int					g_nSkillInterval;
extern SKILL_INTERVAL		g_pSkillInterval[MAX_ITEM];

extern int				g_nReturnCount;
extern ITEM_RETURN* g_pReturnInfo;
extern HUNT_SETTING	g_HuntSetting;

extern int				g_nBuyExpendCount;
extern ITEM_BUY* g_pBuyExpendInfo;

extern int				g_nBuyExchangeCount;
extern ITEM_BUY* g_pBuyExchangeInfo;

extern BUY_SETTING		g_BuySetting;

extern BYTE			g_pItemDefault[MAX_GRADE][MAX_TYPE_1];

extern int				g_nItemDetailCount;
extern DETAIL_ITEM*		g_pItemDetailInfo;

extern OTHER_SETTING	g_OtherSetting;

extern ITEM_SETTING		g_ItemSetting;

// ------------------ Bug 2024/12/7------------------ //
extern BOOL			g_PackageShopVisited;

// ------------------ ------------------ //



extern int				g_nDeadCount;
extern DWORD64			g_qwDeadTime[50];

extern BOOL			g_bWaitDelay;

extern BYTE			g_bCreateCharActor;
extern BYTE			g_bCreateCharClass;
extern BYTE			g_bSnakeDungeon;
extern BOOL			g_bCountry;
extern int				g_nCountryID;
extern BOOL			g_b56002;
extern BOOL			g_bSkipDeviceReg;
extern int				g_nStat1;
extern int				g_nStat2;

extern Align_Info* g_pAlignInfo;

extern HANDLE			g_hClientProcess;

extern int				g_nPartyMember;
extern PARTYMEMBER* g_pPartyMember;

extern BYTE			g_nChaoStatusCount;
extern BYTE			g_pChaoStatusInfo[50];


extern DWORD64			g_qwKaKaoGameAddr;

extern unsigned int	g_nCurAddrTime;

extern BYTE			g_bTcpTable;

extern DWORD64			g_qwServerTick;
extern DWORD64			g_qwLastServerTick;

extern BYTE			g_bAddrLower;

extern HANDLE			g_hAddrEvent;
extern HANDLE			g_hAddrMapping;

extern BOOL			g_bFrameEnable;
extern int				g_nFrameValue;

extern BOOL			g_bRecordStep;
extern BOOL			g_bRecordStop;
extern int				g_nRecordCurStep;
extern int				g_nRecordMaxStep;
extern int				g_nRecordStopStep;

extern ServerRes g_pServerRes[MAX_SERVER];
extern DungeonRes g_pDungeonRes[MAX_DUNGEON];
extern FieldRes g_pFieldRes[MAX_FIELD];
extern CashItemInfo g_pCashItemInfo[MAX_CASHITEM];
extern MakeRes g_pMakeRes[MAX_MAKERES];
extern QuickSlotRes			g_pQuickSlotRes[];

int		GetFieldIndex(WCHAR* pszName);
