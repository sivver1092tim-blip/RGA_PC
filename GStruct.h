#pragma once
#include <winnt.h>
#include <wtypes.h>
#include "global.h"
#include "GEnum.h"

struct FVector
{
	float X;
	float Y;
	float Z;

	void set(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	void set(FVector v)
	{
		X = v.X;
		Y = v.Y;
		Z = v.Z;
	}
};

typedef struct tagCharInfo
{
	DWORD64			qwAddr;

	DWORD64			qwAttackTarget;
	DWORD64			qwSelectTarget;

	WCHAR			szName[MAX_NAME];
	WCHAR			szServer[MAX_NAME];

	DWORD64			qwGuildUID;
	WCHAR			szGuild[MAX_NAME];

	DWORD			dwMapID;
	WCHAR			szRegion[MAX_NAME];
	int				nMapType;			// MT_FIELD
	BOOL			bIsInVillage;

	int				nCurHp;
	int				nMaxHp;
	int				nCurMp;
	int				nMaxMp;
	int				nLevel;

	BYTE			nClassType;			// Class_Type

	DWORD64			qwExp;

	int				nBonusStat;
	int				nCurStat[5];		// ��, ü��, ��ø, ����, ����

	int				nHpPotionLimit;

	int				nPower;
	int				nCostumeColor;
	int				nPetColor;

	int				nAutoState;			// 0: AT_NONE, 1: AT_QUEST, 2:AT_BATTLE
	BOOL			bIsBattleMode;

	BOOL			bIsSafePlace;
	BOOL			bIsMoving;

	FVector			vPos;
	FVector			vTargetPos;

	DWORD			dwCostumeID;
	DWORD			dwPetID;

	int				nGold;
	int				nDia;
	int				nCrystal;
	int				nHonorCoin;
	int				nGuildCoin;
}CharInfo;

typedef struct tagObjectInfo
{
	DWORD64			qwAddr;
	DWORD64			qwID;

	BYTE			nKind;

	WCHAR			szName[MAX_NAME];
	WCHAR			szGuild[MAX_NAME];

	FVector			vPos;

	BYTE			bIsChaotic;

	int				nGrade;
} ObjectInfo;

typedef struct _PARTYINFO_
{
	DWORD64		qwSlotAddr;
	WCHAR		szName[MAX_NAME];
	BYTE		bMaster;
	WORD		nLevel;
	BYTE		bReady;
	BYTE		bDead;
	DWORD		dwObjectSerial;
}PARTYINFO;

typedef struct _WORLDMAP_INFO_
{
	WCHAR	szName[MAX_NAME];
	DWORD	dwId;
}WORLDMAP_INFO;


typedef struct tagServerRes
{
	WCHAR		szKRName[MAX_NAME];
	WCHAR		szTWName[MAX_NAME];
} ServerRes;


typedef struct tagDungeonRes
{
	WCHAR		szKRName[MAX_NAME];
	WCHAR		szCHName[MAX_NAME];
	WCHAR		szTWName[MAX_NAME];

	BYTE		nMainTab;
	BYTE		nFloorTab;

	int			nOrder;

	int			nNeedLevel;
	int			nNeedGold;
	int			nNeedItemID;
	int			nNeedItemCount;

	int			nMapID;
	DWORD		pMapID[5];
}DungeonRes;

typedef struct tagFieldRes
{
	WCHAR		szKRName[MAX_NAME];
	WCHAR		szTWName[MAX_NAME];

	int			nNeedGold;
	int			nNeedItemID;
	int			nNeedItemCount;

	DWORD		dwTerritoryID;
	DWORD		dwMapID;
} FieldRes;

typedef struct tagItemInfo
{
	DWORD64			qwAddr;
	DWORD64			qwItemUID;

	WCHAR			szOrgName[MAX_NAME];
	WCHAR			szName[MAX_NAME];

	DWORD			dwID;
	DWORD			dwGroupID;
	int				nType;			// Item_Category
	int				nSubType;		// GameDefine.Item.EItem_SubTypes
	int				nCount;			// ����
	int				nEquipSlot;		// Item_EquipSlot
	int				nEquipClass;	// 

	BYTE			nCurEnchant;	// ��ȭ ��ġ (����)
	BYTE			nSafeEnchant;	// ��ȭ ��ġ (����)
	BYTE			nMaxEnchant;	// ��ȭ ��ġ (�ִ�)
	BYTE			nBelong;		// 0 - �ŷ�����, 1 - �ͼ�, 2 - ����
	BYTE			nGrade;			// Item_Grade

	BYTE			bTrade;			// �ŷ� ����
	BYTE			bWarehouse;		// ���� ����
	BYTE			bSell;			// �Ǹ� ����
	BYTE			bDissolve;		// ���� ����
	BYTE			bDelete;		// ���� ����
	BYTE			bEnchant;		// ��ȭ ����
	BYTE			bIsEquip;		// 0 - ������, 1 - ����
	BYTE			bIsLock;		// 

	int				nMinLv;
	int				nMaxLv;

	int				nItemType;
} ItemInfo;

typedef struct tagCashItemInfo
{
	WCHAR		szKRName[MAX_NAME];
	WCHAR		szTWName[MAX_NAME];

	int			nCashItemID;

	int			nMainTab;
	int			nSubTab;
	int			nSubDetailTab;

	int			nCurCount;
	int			nMaxCount;

	int			nMinLevel;

	eCashType	nCashType;
	int			nPrice;

	BOOL		bOnSale;

	DWORD64		qwStoreUISlot;
} CashItemInfo;

typedef struct tagSkillInfo
{
	WCHAR			szName[MAX_NAME];
	DWORD			dwID;
	eSkillType		nType;
	BYTE			nLevel;
	eItemGrade		nGrade;
	int				nClassType;
	int				nSubClass;
	BYTE			bCanAuto;
	BYTE			bIsAuto;
} SkillInfo;


typedef struct tagSkillCycleInfo
{
	DWORD			dwSkillID;
	bool			bIsOn;
	float			fCoolTime;
} SkillCycleInfo;

typedef struct tagQuickSlotInfo
{
	WCHAR			szName[MAX_NAME];
	BYTE			nIndex;
	BYTE			nRegType;		// 1 - ������, 2 - ��ų
	DWORD			dwRegID;
	DWORD64			qwItemUID;
	BYTE			bCanAuto;
	BYTE			bIsAuto;
	DWORD64			qwSlotButton;
} QuickSlotInfo;

typedef struct tagQuestInfo
{
	WCHAR			szName[MAX_NAME];
	DWORD			dwID;
	eQuestType		nKind;
	eQuestState		nState;
	int				nCurCount;
	int				nMaxCount;
} QuestInfo;

typedef struct tagItemCollectionInfo
{
	int				nCollectionID;
	eAbilityCategory	nCategory;
	int				nSlotIdx;
	int				nItemGroupID;
	int				nItemEnchant;
	BOOL			bRegisterable;
} ItemCollectionInfo;

typedef struct tagCostumeInfo
{
	WCHAR			szName[MAX_NAME];
	DWORD			dwID;
	int				nCount;
	ePlayerClass	nClass;
	int				nOrder;
	int				nGrade;
} CostumeInfo;

typedef struct tagPetInfo
{
	WCHAR			szName[MAX_NAME];
	DWORD			dwID;
	int				nCount;
	int				nGrade;
	int				nOrder;
	int				nLevel;
} PetInfo;

typedef struct tagMapInfo
{
	WCHAR			szName[MAX_NAME];
	DWORD			dwTerritoryID;
	DWORD			dwMapID;
} MapInfo;

typedef struct tagNpcItemInfo
{
	DWORD64			qwShopSlot;
	BOOL			bIsSoldOut;
	int				nBuyUnitCount;
	int				nCashType;
	int				nPrice;
	int				nNeedLevel;
	int				nUseClass;
	int				nGuildLevel;
	BOOL			bIsHpPotion;
	ItemInfo		itemInfo;
} NpcItemInfo;

typedef struct tagMarketItemPrice
{
	int				nServer;
	WCHAR			szItemName[MAX_NAME];		//�̸�
	int				nEnchant;
	double			fPerPrice;					//���簡��
	DWORD64			qwTime;
	BOOL			bPlaced;
} MarketItemPrice;

typedef struct tagAuctionItemInfo
{
	WCHAR		szName[MAX_NAME];
	BYTE		bTradeStatus;				// 1 - �����, 2 - �Ǹ���, 6 - ȸ��
	DWORD		dwItemID;
	int			nCount;
	long		nPrice;
	int			nRemainSec;
	DWORD64		qwAuctionDBID;
	BYTE		nEnchant;
} AuctionItemInfo;