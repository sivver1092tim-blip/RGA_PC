#pragma once

#define MALLOC(x)	HeapAlloc(GetProcessHeap(), 0, (x))
#define FREE(x)		HeapFree(GetProcessHeap(), 0, (x))

#define M_PI       3.14159265358979323846f
#define GETDIST2D(vec1, vec2)			(float)sqrtf((vec1.X - vec2.X) * (vec1.X - vec2.X) + (vec1.Y - vec2.Y) * (vec1.Y - vec2.Y))
#define GETDIST3D(vec1, vec2)			(float)sqrtf((vec1.X - vec2.X) * (vec1.X - vec2.X) + (vec1.Y - vec2.Y) * (vec1.Y - vec2.Y) + (vec1.Z - vec2.Z) * (vec1.Z - vec2.Z))


#define INTERVALS				500	//ms
#define INTERVALF				100 //ms

#define Scene_None				0
#define Scene_Intro				1
#define Scene_Login				2
#define Scene_Lobby				3
#define Scene_World				4

#define Status_None				0
#define Status_Intro			1
#define Status_Login			2
#define Status_Lobby			3
#define Status_DoAuto			4
#define Status_ReturnVillage	5
#define Status_CharDead			6
#define Status_CharOut			7
#define Status_Stat				8
#define Status_Costume			9
#define Status_Pet				10
#define Status_EnterDungeon		11
#define Status_TeleportMap		12
#define Status_InvenProc		13
#define Status_DissolveItem		14
#define Status_EnchantItem		15
#define Status_BuyPotion		16
#define Status_BuySkill			17
#define Status_ExchangeItem		18
#define Status_StoreEquips		19
#define Status_GetEquips		20
#define Status_Market			21
#define Status_Mail				22
#define Status_Attendance		23
#define Status_Mission			24
#define Status_Achieve			25
#define Status_GuildAttendance	26
#define Status_Recover			27
#define Status_ReQuest			28
#define Status_ItemCollection	29
#define Status_CashShop			30
#define Status_Skill			31
#define Status_WorldBoss		32
#define Status_Make				33

#define STATUS_WAITDELAY		50

#define	WND_GAMENAME			L"ROM: Golden Age"
#define	WNDCLASS_GAMENAME		L"UnityWndClass"

#define ItemID_Potion1			105011011	// 일반 체력 회복제 (귀속)
#define ItemID_Potion2			105011021	// 상급 체력 회복제 (귀속)

#define ItemID_BufPotion		105031081	// 각성의 물약 (귀속)
#define ItemID_BufFood1			105031101	// 강인한 소고기 스테이크 (귀속)
#define ItemID_BufFood2			105031111	// 민첩한 양고기 스튜 (귀속)
#define ItemID_BufFood3			105031121	// 지혜로운 두부 볶음 (귀속)

#define ItemID_TelScroll		105041011	// 텔레포트 주문서 (귀속)
#define ItemID_RetScroll		105051011	// 거점 귀환 주문서 (귀속)

#define ItemID_WeaponScr1		106021010	// 무기 강화 주문서
#define ItemID_WeaponScr2		106021011	// 무기 강화 주문서 (귀속)
#define ItemID_WeaponScr3		106021012	// 무기 강화 주문서 (각인)

#define ItemID_ArmorScr1		106031010	// 방어구 강화 주문서
#define ItemID_ArmorScr2		106031011	// 방어구 강화 주문서 (귀속)
#define ItemID_ArmorScr3		106031012	// 방어구 강화 주문서 (각인)

#define ItemID_AcceScr1			106041010	// 장신구 강화 주문서
#define ItemID_AcceScr2			106041011	// 장신구 강화 주문서 (귀속)
#define ItemID_AcceScr3			106041012	// 장신구 강화 주문서 (각인)

#define ItemID_EventAcce1		103023091	// 100일 영광 훈장 (귀속)
#define ItemID_EventAcce2		103023101	// 100일 명예 훈장 (귀속)
#define ItemID_EventScr			106121012	// 이벤트 강화 주문서 (각인)

#define ItemID_ElvenScr			107031411	// 엘븐 스크롤 (귀속)


#define MapID_KingTomb			0x0000002B
#define MapID_HavenCastle		0x00000066

#define ObjectKind_Player		0
#define ObjectKind_Npc			1
#define ObjectKind_Monster		2

enum eELanguage
{
	eELanguage_None = 0,
	eELanguage_Korean = 1,
	eELanguage_ChineseT = 2,
	eELanguage_ChineseS = 3,
	eELanguage_English = 4,
	eELanguage_Japanese = 5,
	eELanguage_MAX = 6,
};

enum ePlayerClass
{
	ePlayerClass_PC_COMMON = 0,
	ePlayerClass_PC_KNIGHT = 1,
	ePlayerClass_PC_RANGER = 2,
	ePlayerClass_PC_MAGICIAN = 3,
};

enum ePlayerSubClass
{
	ePlayerSubClass_PSC_NONE = 0,
	ePlayerSubClass_PSC_DEFENDER = 11,
	ePlayerSubClass_PSC_BERSERKER = 12,
	ePlayerSubClass_PSC_HUNTER = 21,
	ePlayerSubClass_PSC_SCOUT = 22,
	ePlayerSubClass_PSC_WIZARD = 31,
	ePlayerSubClass_PSC_PRIEST = 32,
};

enum eOptionType
{
	eOptionType_EOT_NONE = 0,
	eOptionType_EOT_STR = 1,
	eOptionType_EOT_CON = 2,
	eOptionType_EOT_DEX = 3,
	eOptionType_EOT_INT = 4,
	eOptionType_EOT_WIZ = 5,
	eOptionType_EOT_HP_POTION_POSSESSION = 20,
};

enum eLobbyState
{
	eLobbyState_NONE = 0,
	eLobbyState_TO_LOBBY_SELECT = 1,
	eLobbyState_SELECT_CLASS = 2,
	eLobbyState_PREVIEW_WEAPON = 3,
	eLobbyState_CUSTOMIZING = 4,
	eLobbyState_CHARACTER_NAMING = 5,
};

enum eItemType
{
	eItemType_IT_NONE = 0,
	eItemType_IT_WEAPON = 1,
	eItemType_IT_ARMOR = 2,
	eItemType_IT_ACCESSARY = 3,
	eItemType_IT_ACCESSARY_C = 4,
	eItemType_IT_CONSUMPTION_USE = 5,
	eItemType_IT_CONSUMPTION_UI = 6,
	eItemType_IT_MATERIAL = 7,
	eItemType_IT_PETARMOR = 8,
	eItemType_IT_ERYNDOR = 9,
	eItemType_IT_SIEGE = 10,
	eItemType_IT_SUBWEAPON = 11,
	eItemType_IT_PET_ACCESSORY = 12,
	eItemType_MAX = 13,
};

enum eItemSubType
{
	eItemSubType_NONE = 0,
	eItemSubType_SWORD = 101,
	eItemSubType_BOW = 102,
	eItemSubType_STAFF = 103,
	eItemSubType_SPEAR = 104,
	eItemSubType_DAGGER = 105,
	eItemSubType_EVENTWEAPON = 199,
	eItemSubType_HEAD = 201,
	eItemSubType_INNER = 202,
	eItemSubType_SUIT = 203,
	eItemSubType_VAMBRACER = 204,
	eItemSubType_GLOVE = 205,
	eItemSubType_GAITER = 206,
	eItemSubType_FOOT = 207,
	eItemSubType_EVENTARMOR = 299,
	eItemSubType_NECKLACE = 301,
	eItemSubType_PENDANT = 302,
	eItemSubType_EARRING = 303,
	eItemSubType_BRACELET = 304,
	eItemSubType_RING = 305,
	eItemSubType_BELT = 306,
	eItemSubType_MANTRA = 398,
	eItemSubType_EVENTACCESSARY = 399,
	eItemSubType_CASH_EARRING = 401,
	eItemSubType_CASH_BRACELET = 402,
	eItemSubType_CASH_RING = 403,
	eItemSubType_CASH_AMULET = 404,
	eItemSubType_CASH_SYMBOL = 405,
	eItemSubType_CASH_MEDAL = 406,
	eItemSubType_CASH_RELIC = 407,
	eItemSubType_RECOVERY_HP = 501,
	eItemSubType_RECOVERY_MP = 502,
	eItemSubType_INFECT_BUFF = 503,
	eItemSubType_MOVE_TELEPORT = 504,
	eItemSubType_MOVE_RETURN = 505,
	eItemSubType_MOVE_SAFEHOUSE = 506,
	eItemSubType_MOVE_FORCE = 507,
	eItemSubType_TITLE = 508,
	eItemSubType_SUMMON_FORCE_PET = 509,
	eItemSubType_MONEY_BOX = 510,
	eItemSubType_PACKAGE_BOX_RANDOM = 511,
	eItemSubType_PACKAGE_BOX_FIXED = 512,
	eItemSubType_CARD_PET_RANDOM = 513,
	eItemSubType_CARD_PET_DECIDE = 514,
	eItemSubType_CARD_COSTUME_RANDOM = 515,
	eItemSubType_CARD_COSTUME_DECIDE = 516,
	eItemSubType_EXPAND_PLAYER_SLOT = 517,
	eItemSubType_SKILL_BOOK = 518,
	eItemSubType_QUEST_OPEN_DIRECT = 519,
	eItemSubType_CHARGE_DUNGEON_TIME = 520,
	eItemSubType_CARD_MONSTER_RANDOM = 521,
	eItemSubType_CARD_MONSTER_DECIDE = 522,
	eItemSubType_CHANGE_NICKNAME = 523,
	eItemSubType_STATS_BONUS = 524,
	eItemSubType_ADD_REQUEST = 601,
	eItemSubType_ENCHANT_NORMAL_WEAPON = 602,
	eItemSubType_ENCHANT_NORMAL_ARMOR = 603,
	eItemSubType_ENCHANT_NORMAL_ACCESSORY = 604,
	eItemSubType_ENCHANT_RANDOM_WEAPON = 605,
	eItemSubType_ENCHANT_RANDOM_ARMOR = 606,
	eItemSubType_ENCHANT_RANDOM_ACCESSORY = 607,
	eItemSubType_ENCHANT_DECREASE_WEAPON = 608,
	eItemSubType_ENCHANT_DECREASE_ARMOR = 609,
	eItemSubType_ENCHANT_DECREASE_ACCESSORY = 610,
	eItemSubType_ENCHANT_ANTIBREAKAGE = 611,
	eItemSubType_ENCHANT_LIMIT_ACCESSARY = 612,
	eItemSubType_ENCHANT_GRANT_SOUL = 613,
	eItemSubType_ENCHANT_FAILURE_RESTORE = 614,
	eItemSubType_COMPOSE_FAILURE_RECOMPOSE = 615,
	eItemSubType_PACKAGE_BOX_SELECT = 616,
	eItemSubType_ENCHANT_NORMAL_CASH_ACCESSORY = 617,
	eItemSubType_ENCHANT_ANTIBREAKAGE_ARMOR = 618,
	eItemSubType_ENCHANT_ANTIBREAKAGE_ACCESSORY = 619,
	eItemSubType_ENCHANT_LIMIT_WEAPON = 620,
	eItemSubType_ENCHANT_LIMIT_ARMOR = 621,
	eItemSubType_ENCHANT_NORMAL_ERYNDOR = 622,
	eItemSubType_ADVANTURE_TIME = 623,
	eItemSubType_AWAKENING_NORMAL = 624,
	eItemSubType_ENCHANT_MANTRA = 625,
	eItemSubType_SOUL_STONE_CASH = 631,
	eItemSubType_SOUL_STONE_ABYSS = 632,
	eItemSubType_SOUL_STONE_SOLARIS = 633,
	eItemSubType_SOUL_STONE_AERIAL = 634,
	eItemSubType_SOUL_STONE_TEMPEST = 635,
	eItemSubType_SOUL_STONE_ISHTAL = 636,
	eItemSubType_ROULETTE = 701,
	eItemSubType_COLLECTION = 702,
	eItemSubType_MAKE_MATERIAL = 703,
	eItemSubType_PARCEL_MATERIAL = 704,
	eItemSubType_PET_SKILL_BOOK = 705,
	eItemSubType_MAKE_GUILD = 706,
	eItemSubType_GROW_GUILD = 707,
	eItemSubType_LEVELUP_SKILL = 708,
	eItemSubType_Reset_GP = 709,
	eItemSubType_RESTORE_EQUIPMENT = 710,
	eItemSubType_RESTORE_WEAPON = 711,
	eItemSubType_RESTORE_ARMOR = 712,
	eItemSubType_RESTORE_ACCESSORY = 713,
	eItemSubType_RESTORE_ACCESSORY_CASH = 714,
	eItemSubType_RECOMPOSE_COSTUME = 716,
	eItemSubType_RECOMPOSE_PET = 717,
	eItemSubType_LIGHT_ARMOR = 801,
	eItemSubType_MEDIUM_ARMOR = 802,
	eItemSubType_CHEST_PLATE = 803,
	eItemSubType_BREAST_PLATE = 804,
	eItemSubType_BACK_ARMOR = 805,
	eItemSubType_Eryndor_RED = 901,
	eItemSubType_Eryndor_VIOLET = 902,
	eItemSubType_Eryndor_GREEN = 903,
	eItemSubType_Eryndor_YELLOW = 904,
	eItemSubType_Eryndor_BLUE = 905,
	eItemSubType_Eryndor_WHITE = 906,
	eItemSubType_SIEGE_WAR = 1001,
	eItemSubType_CONQUEST_DUNGEON = 1002,
	eItemSubType_Item_SubType_SHIELD = 1101,
	eItemSubType_Item_SubType_AXE = 1102,
	eItemSubType_Item_SubType_CROSSBOW = 1103,
	eItemSubType_Item_SubType_THROWINGKNIFE = 1104,
	eItemSubType_Item_SubType_ORB = 1105,
	eItemSubType_Item_SubType_BIBLE = 1106,
	eItemSubType_Item_SubType_PET_CHARM = 1201,
	eItemSubType_Item_SubType_PET_EMBLEM = 1202,
	eItemSubType_Item_SubType_PET_RELIC = 1203,
	eItemSubType_MAX = 1204,
};

enum eBelongType // TypeDefIndex: 281
{
	eBelongType_IOT_NONE = 0,
	eBelongType_IOT_BELONG = 1,
	eBelongType_IOT_BELONG_CHAR = 2,
};

enum eItemGrade
{
	eItemGrade_IG_NONE = 0,
	eItemGrade_IG_NORMAL = 1,
	eItemGrade_IG_MAGICAL = 2,
	eItemGrade_IG_RARE = 3,
	eItemGrade_IG_EPIC = 4,
	eItemGrade_IG_LEGENDARY = 5,
	eItemGrade_IG_MYTHICAL = 6,
	eItemGrade_IG_ULTIMATE = 7,
	eItemGrade_IG_RELIC = 8,
	eItemGrade_IG_TOTAL = 9,
};

enum eEquipSlot
{
	eEquipSlot_ES_NONE = 0,
	eEquipSlot_ES_WEAPON = 1,
	eEquipSlot_ES_HEAD = 2,
	eEquipSlot_ES_INNER = 3,
	eEquipSlot_ES_SUIT = 4,
	eEquipSlot_ES_VAMBRACER = 5,
	eEquipSlot_ES_GLOVE = 6,
	eEquipSlot_ES_GAITER = 7,
	eEquipSlot_ES_FOOT = 8,
	eEquipSlot_ES_CASH_SYMBOL = 9,
	eEquipSlot_ES_NECKLACE = 10,
	eEquipSlot_ES_EARRING = 11,
	eEquipSlot_ES_PENDANT = 12,
	eEquipSlot_ES_RING = 13,
	eEquipSlot_ES_CASH_RING = 14,
	eEquipSlot_ES_BRACELET = 15,
	eEquipSlot_ES_CASH_BRACELET = 16,
	eEquipSlot_ES_BELT = 17,
	eEquipSlot_ES_CASH_RELIC = 18,
	eEquipSlot_ES_CASH_AMULET = 19,
	eEquipSlot_ES_CASH_EARRING = 20,
	eEquipSlot_ES_CASH_MEDAL = 21,
};

enum eCashType
{
	eCashType_NONE = 0,
	eCashType_GOLD = 1,
	eCashType_DIA = 2,
	eCashType_EVENT_DIA = 3,
	eCashType_MILEAGE = 4,
	eCashType_CRYSTAL = 5,
	eCashType_DIS_DIA = 9,
	eCashType_ALIGNMENT = 10,
	eCashType_GUILD_CONTRIBUTE_POINT = 11,
	eCashType_HONOR_COIN = 12,
	eCashType_GUILD_COIN = 13,
	eCashType_SUBSKILL_POINT = 14,
	eCashType_STORE_COSTUME_POINT = 15,
	eCashType_STORE_PET_POINT = 16,
	eCashType_STORE_MONSTER_POINT = 17,
	eCashType_GUILD_GOLD = 30,
	eCashType_GUILD_DIA = 31,
	eCashType_GUILD_CRYSTAL = 32,
	eCashType_EXP = 50,
	eCashType_GUILD_EXP = 51,
	eCashType_PET_EXP = 52,
	eCashType_STORE_COIN = 98,
	eCashType_REAL_MONEY = 99,
	eCashType_GACHA_TICKET = 100,
	eCashType_ITEM_GROUP = 101,
	eCashType_MONSTER_GACHA_TICKET = 110,
	eCashType_MAX = 200,
};

enum eSkillType
{
	eSkillType_ST_NONE = 0,
	eSkillType_ST_Attack = 1,
	eSkillType_ST_Buff = 2,
	eSkillType_ST_Debuff = 3,
	eSkillType_ST_Passive = 4,
	eSkillType_ST_Summon = 5,
	eSkillType_ST_ALL = 99,
};

enum eQuestType
{
	eQuestType_QT_NONE = 0,
	eQuestType_QT_MAIN = 1,
	eQuestType_QT_SUB = 2,
	eQuestType_QT_EVENT = 3,
	eQuestType_QT_REQUEST = 4,
	eQuestType_QT_GUIDE = 5,
};

enum eQuestState
{
	eQuestState_QS_NONE = 0,
	eQuestState_QS_NEW = 1,
	eQuestState_QS_ING = 2,
	eQuestState_QS_COMPLETE = 3,
	eQuestState_QS_DONE = 4,
};

enum eMapType
{
	eMapType_MT_NONE = 0,
	eMapType_MT_METROPOLIS = 1,
	eMapType_MT_FIELD = 2,
	eMapType_MT_TIME_DUNGEON = 3,
	eMapType_MT_FIELD_DUNGEON = 4,
	eMapType_MT_DAILY_DUNGEON = 5,
	eMapType_MT_SPECIAL_DUNGEON = 6,
	eMapType_MT_GUILD_AZIT = 7,
	eMapType_MT_GUILD_DUNGEON = 8,
	eMapType_MT_GUILD_TIME_DUNGEON = 9,
	eMapType_MT_STRONGHOLD_WAR = 10,
	eMapType_MT_SIEGE_WAR = 11,
	eMapType_MT_TRIAL_TOWER = 12,
	eMapType_MT_TUTORIAL = 99,
};

enum eAutoType
{
	eAutoType_AT_NONE = 0,
	eAutoType_AT_QUEST = 1,
	eAutoType_AT_BATTLE = 2,
};

enum eMonsterType
{
	eMonsterType_MT_NONE = 0,
	eMonsterType_MT_BOSS = 1,
	eMonsterType_MT_WORLD_BOSS = 2,
};

enum eNpcBtnType
{
	eNpcBtnType_Btn_None = 0,
	eNpcBtnType_Btn_GeneralShop = 1,
	eNpcBtnType_Btn_EventChange = 2,
	eNpcBtnType_Btn_Storage = 3,
	eNpcBtnType_Btn_SkllShop = 4,
	eNpcBtnType_Btn_GuildShop = 5,
};

enum eRedDotType
{
	eRedDotType_None = 0,
	eRedDotType_Btn_Menu = 1,
	eRedDotType_Btn_Inven = 10,
	eRedDotType_Btn_CharacterInfo = 11,
	eRedDotType_Btn_Skill = 12,
	eRedDotType_Btn_Shop = 13,
	eRedDotType_Btn_Quest = 14,
	eRedDotType_Btn_Pet = 20,
	eRedDotType_Btn_Costume = 21,
	eRedDotType_Btn_ItemCollection = 22,
	eRedDotType_Btn_Dungeon = 23,
	eRedDotType_Btn_Guild = 24,
	eRedDotType_Btn_Making = 25,
	eRedDotType_Btn_PVP = 26,
	eRedDotType_Btn_Ranking = 27,
	eRedDotType_Btn_Auction = 28,
	eRedDotType_Btn_Mail = 29,
	eRedDotType_Btn_Attendance = 30,
	eRedDotType_Btn_Title = 31,
	eRedDotType_Btn_Friend = 32,
	eRedDotType_Btn_Option = 33,
	eRedDotType_Btn_Request = 34,
	eRedDotType_Btn_Consignment = 35,
	eRedDotType_Btn_BaseWar = 36,
	eRedDotType_Btn_Chatting = 37,
	eRedDotType_Btn_Achieve = 38,
	eRedDotType_Btn_SiegeWar = 39,
	eRedDotType_Btn_MonsterCollection = 40,
	eRedDotType_Btn_Dominion = 41,
	eRedDotType_Btn_Guard = 42,
	eRedDotType_Btn_Tower = 43,
	eRedDotType_RDT_SubType = 100,
	eRedDotType_Btn_CharacterInfo_StatPoint = 101,
	eRedDotType_Btn_Post_Character = 102,
	eRedDotType_Btn_Post_Account = 103,
	eRedDotType_Btn_Post_Post = 104,
	eRedDotType_Btn_Guild_List = 105,
	eRedDotType_Btn_Guild_Info = 106,
	eRedDotType_Btn_Guild_RequestJoin = 107,
	eRedDotType_Btn_Guild_MemberList = 108,
	eRedDotType_Btn_Guild_Create = 109,
	eRedDotType_Btn_Guild_Research = 110,
	eRedDotType_Btn_Guild_Ranking = 111,
	eRedDotType_Btn_Gulid_Management = 112,
	eRedDotType_Btn_Guild_ApplyJoinUs = 113,
	eRedDotType_Btn_Chatting_Whisper = 114,
	eRedDotType_Btn_Post_Post_Record = 115,
	eRedDotType_Btn_Guild_Relation = 116,
	eRedDotType_Btn_Guild_Alliance = 117,
	eRedDotType_Btn_Consignment_Calclate = 118,
	eRedDotType_Btn_Guild_Attendance = 119,
	eRedDotType_Btn_Guild_Attendance_Reward = 120,
	eRedDotType_Btn_Guild_Gift_Reward = 121,
	eRedDotType_Btn_Attendance_All_Day = 122,
	eRedDotType_Btn_Attendance_Dday = 123,
	eRedDotType_Btn_Attendance_Dday_New = 124,
	eRedDotType_Btn_Attendance_Dday_Pay = 125,
	eRedDotType_Btn_Guild_Union = 126,
	eRedDotType_Btn_Shop_Locker = 127,
	eRedDotType_Btn_Post_Guild = 128,
	eRedDotType_Btn_Collection_Ability_Atk = 129,
	eRedDotType_Btn_Collection_Ability_Def = 130,
	eRedDotType_Btn_Collection_Ability_HPMP = 131,
	eRedDotType_Btn_Collection_Ability_Resist = 132,
	eRedDotType_Btn_Collection_Ability_Etc = 133,
	eRedDotType_Btn_Collection_Event = 134,
	eRedDotType_Btn_Collection_ALL = 135,
	eRedDotType_Btn_Tower_Achievement = 136,
	eRedDotType_Btn_Pet_List = 150,
	eRedDotType_Btn_Pet_Collection = 151,
	eRedDotType_Btn_Pet_Synthesis = 152,
	eRedDotType_Btn_Pet_RePick = 153,
	eRedDotType_Btn_Costume_List = 160,
	eRedDotType_Btn_Costume_Collection = 161,
	eRedDotType_Btn_Costume_Synthesis = 162,
	eRedDotType_Btn_Costume_RePick = 163,
	eRedDotType_Btn_Relation_Frient = 170,
	eRedDotType_Btn_Relation_Request = 171,
	eRedDotType_Btn_MonsterCollection_Area = 180,
	eRedDotType_Btn_MonsterCollection_Boss = 181,
	eRedDotType_Btn_ItemCollectionAdditionBuff = 190,
	eRedDotType_Btn_EventMissionHud = 200,
	eRedDotType_TabSkillSword = 300,
	eRedDotType_TabSkillBow = 301,
	eRedDotType_TabSkillStaff = 302,
	eRedDotType_TabSkillSpear = 303,
	eRedDotType_TabSkillDagger = 304,
	eRedDotType_TabSkillCommon = 305,
};

enum eDungeonCategory
{
	eDungeonCategory_DC_None = 0,
	eDungeonCategory_DC_Normal = 1,
	eDungeonCategory_DC_Normal_Daily = 2,
	eDungeonCategory_DC_Daily = 3,
	eDungeonCategory_DC_Special = 4,
	eDungeonCategory_DC_Guild = 5,
	eDungeonCategory_DC_Battlefield = 6,
	eDungeonCategory_DC_Event = 10,
	eDungeonCategory_DC_Conquest = 11,
};

enum eDungeonResultPopupType
{
	eDungeonResultPopupType_EDRT_SPECIAL_DUNGEON_REWARD = 0,
	eDungeonResultPopupType_EDRT_DUNGEON_FAIL = 1,
	eDungeonResultPopupType_EDRT_TRIAL_TOWER = 2,
};

enum eAbilityCategory // TypeDefIndex: 234
{
	eAbilityCategory_EMC_NONE = 0,
	eAbilityCategory_EMC_TOTAL = 1,
	eAbilityCategory_EMC_STAT = 2,
	eAbilityCategory_EMC_ATTACK = 3,
	eAbilityCategory_EMC_DEFENCE = 4,
	eAbilityCategory_EMC_HPMP = 5,
	eAbilityCategory_EMC_ETC = 6,
	eAbilityCategory_EMC_RESIST = 7,
	eAbilityCategory_EMC_EVENT = 30,
};

enum UI_UID
{
	UI_UID_None = 0,
	UI_UID_LevelUp = 1,
	UI_UID_GetItems = 2,
	UI_UID_QuickSlotManager = 3,
	UI_UID_MiniBuff = 4,
	UI_UID_CollectionObtainPopup = 5,
	UI_UID_CollectionGradeAttainmentPopup = 6,
	UI_UID_MainHUD = 100,
	UI_UID_QuestDialogueCard = 101,
	UI_UID_MainMenu = 102,
	UI_UID_CharInfoWindow = 103,
	UI_UID_Inventory = 104,
	UI_UID_SkillListPopup = 105,
	UI_UID_RewardCommonPopup = 106,
	UI_UID_RewardSmallPopup = 107,
	UI_UID_RepairPopup = 108,
	UI_UID_EmoticonPopup = 109,
	UI_UID_DominionSituationPopup = 110,
	UI_UID_CompletePopup = 111,
	UI_UID_GuardPopup = 112,
	UI_UID_ItemSetBounsPopup = 113,
	UI_UID_ItemSetAwakeningPopup = 114,
	UI_UID_GoldenBellMessagePopup = 115,
	UI_UID_SiegeWarInPopups = 116,
	UI_UID_BossAuctionPopup = 117,
	UI_UID_CanNotMove = 118,
	UI_UID_GuideWindow = 119,
	UI_UID_ItemMakeChangePopup = 120,
	UI_UID_ItemMakeResultPopup = 121,
	UI_UID_SearchPopup = 122,
	UI_UID_ItemDissolveRewardPopup = 123,
	UI_UID_ItemTotalInfoPopup = 124,
	UI_UID_CalculatorPopup = 125,
	UI_UID_RelationPopup = 126,
	UI_UID_ChattingPopup = 127,
	UI_UID_ItemInfoWindow = 128,
	UI_UID_PetPartySet = 129,
	UI_UID_PetAdventureDebuffInfoPopup = 130,
	UI_UID_PetAdventureRewardInfoPopup = 131,
	UI_UID_DungenChargePopup = 132,
	UI_UID_SiegeWarResultPopup = 133,
	UI_UID_PopupUID = 1000,
	UI_UID_RevivalAskPopup = 1001,
	UI_UID_QuestDialogue = 1002,
	UI_UID_DeadPopup = 1003,
	UI_UID_SearcTargetOptionPopup = 1004,
	UI_UID_PartyOptionPopup = 1005,
	UI_UID_ItemSourcePopup = 1006,
	UI_UID_SelectBoxPopup = 1007,
	UI_UID_SynthesisHandPopup = 1008,
	UI_UID_SynthesisRatePopup = 1009,
	UI_UID_ExtractCalulatorPopup = 1010,
	UI_UID_GuildSimpleInfoPopup = 1011,
	UI_UID_GuildCommonCreatePopup = 1012,
	UI_UID_DeclarationPopup = 1013,
	UI_UID_DominionResultPopup = 1014,
	UI_UID_DominionGoodsSettingPopup = 1015,
	UI_UID_CollectionGradeAttainmentShotPopup = 1016,
	UI_UID_GuardSupportPopup = 1017,
	UI_UID_GuardGuildListPopup = 1018,
	UI_UID_DominionVictoryPopup = 1019,
	UI_UID_GuildHistoryPpopup = 1020,
	UI_UID_PetCostumeDetailInfoPopup = 1021,
	UI_UID_QuestCompletePopup = 1022,
	UI_UID_InvenExpandPopup = 1023,
	UI_UID_InvenDissolve = 1024,
	UI_UID_SkillCyclePopup = 1025,
	UI_UID_EventMissionPopup = 1026,
	UI_UID_GoogleStoreAuthPopup = 1027,
	UI_UID_PurchasVerifyPopup = 1028,
	UI_UID_GoldenBellBuffActivePopup = 1029,
	UI_UID_RestorePopup = 1030,
	UI_UID_RestoreResultPopup = 1031,
	UI_UID_MileageUsePopup = 1032,
	UI_UID_EventGamePopup = 1033,
	UI_UID_ChangeNamePopup = 1034,
	UI_UID_ColosseumPopup = 1035,
	UI_UID_ReSynthesisPopup = 1036,
	UI_UID_SiegeWarTeleportPopup = 1037,
	UI_UID_GuildWorldRelationPopup = 1038,
	UI_UID_DunConquest_Approval_Popup = 1039,
	UI_UID_DunConquest_Request_Popup = 1040,
	UI_UID_HotDealPopup = 1041,
	UI_UID_DungenConquestResultPopup = 1042,
	UI_UID_FullUID = 2000,
	UI_UID_PostWindow = 2001,
	UI_UID_GuildWindow = 2002,
	UI_UID_WorldMapWindow = 2003,
	UI_UID_StorageWindow = 2004,
	UI_UID_QuestWindow = 2005,
	UI_UID_CostumeWindow = 2006,
	UI_UID_PetWindow = 2007,
	UI_UID_ItemCraftWindow = 2008,
	UI_UID_NpcShopWindow = 2009,
	UI_UID_OptionWindow = 2010,
	UI_UID_DungeonWindow = 2011,
	UI_UID_EnchantWindow = 2012,
	UI_UID_ItemMakeWindow = 2013,
	UI_UID_ItemCollectionWindow = 2014,
	UI_UID_AttendanceWindow = 2015,
	UI_UID_NpcGuildHomeWindow = 2016,
	UI_UID_PKRecordWindow = 2017,
	UI_UID_RankingWindow = 2018,
	UI_UID_AuctionWindow = 2019,
	UI_UID_StoreWindow = 2020,
	UI_UID_DominionWindow = 2021,
	UI_UID_KeyboardShortCutWindow = 2022,
	UI_UID_MonsterCollectionWIindow = 2023,
	UI_UID_SetSleepModeWindow = 2024,
	UI_UID_SleepModeWindow = 2025,
	UI_UID_GuildShareShopWindow = 2026,
	UI_UID_SiegeWindow_2 = 2027,
	UI_UID_MonsterCollectionSynthesis = 2028,
	UI_UID_SkillEnhanceWindow = 2029,
	UI_UID_TowerWindow = 2030,
	UI_UID_DungeonResultPopup = 2031,
	UI_UID_EryndorWindow = 2032,
	UI_UID_SoulStoneWindow = 2033,
	UI_UID_SubClassWindow = 2034,
	UI_UID_ItemComposeWindow = 2035,
	UI_UID_NpcRandomBuffWindow = 2036,
	UI_UID_WemixWindow = 2037,
	UI_UID_UI_UID_MAX = 2038,
};