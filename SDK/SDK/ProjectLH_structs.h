#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ProjectLH.EAvatarRandomBoxShotType
enum class FProjectLH_ProjectLH_EAvatarRandomBoxShotType : uint8_t
{
	EAvatarRandomBoxShotType__None = 0,
	EAvatarRandomBoxShotType__A_Low = 1,
	EAvatarRandomBoxShotType__A_Low01 = 2,
	EAvatarRandomBoxShotType__A_High = 3,
	EAvatarRandomBoxShotType__A_High01 = 4,
	EAvatarRandomBoxShotType__A_Low02 = 5,
	EAvatarRandomBoxShotType__A_Low_Skip = 6,
	EAvatarRandomBoxShotType__A_High02 = 7,
	EAvatarRandomBoxShotType__A_High_Skip = 8,
	EAvatarRandomBoxShotType__All_Result = 9,
	EAvatarRandomBoxShotType__Touch = 10,
	EAvatarRandomBoxShotType__Drag_Ready = 11,
	EAvatarRandomBoxShotType__Drag_Start = 12,
	EAvatarRandomBoxShotType__Drag_Success = 13,
	EAvatarRandomBoxShotType__Drag_Failed = 14,
	EAvatarRandomBoxShotType__Unit_Result = 15,
	EAvatarRandomBoxShotType__Unit_Result01 = 16,
	EAvatarRandomBoxShotType__Unit_Result02 = 17,
	EAvatarRandomBoxShotType__Compose_Result = 18,
	EAvatarRandomBoxShotType__Compose_Result01 = 19,
	EAvatarRandomBoxShotType__Compose_Result02 = 20,
	EAvatarRandomBoxShotType__Compose_Result03 = 21,
	EAvatarRandomBoxShotType__HeroGrade_Start = 22,
	EAvatarRandomBoxShotType__Legend_Start = 23,
	EAvatarRandomBoxShotType__Ancient_Start = 24,
	EAvatarRandomBoxShotType__Hero_Warrior = 25,
	EAvatarRandomBoxShotType__Hero_Sorceress = 26,
	EAvatarRandomBoxShotType__Hero_Rogue = 27,
	EAvatarRandomBoxShotType__Hero_Priest = 28,
	EAvatarRandomBoxShotType__Hero_ShieldMaiden = 29,
	EAvatarRandomBoxShotType__Legend_Defender = 30,
	EAvatarRandomBoxShotType__Legend_Gladiator = 31,
	EAvatarRandomBoxShotType__Legend_ThunderBringer = 32,
	EAvatarRandomBoxShotType__Legend_ElementalMaster = 33,
	EAvatarRandomBoxShotType__Legend_DarkMagician = 34,
	EAvatarRandomBoxShotType__Legend_Enchantress = 35,
	EAvatarRandomBoxShotType__Legend_Sniper = 36,
	EAvatarRandomBoxShotType__Legend_Assassin = 37,
	EAvatarRandomBoxShotType__Legend_Huntress = 38,
	EAvatarRandomBoxShotType__Legend_Saint = 39,
	EAvatarRandomBoxShotType__Legend_Paladin = 40,
	EAvatarRandomBoxShotType__Legend_Bard = 41,
	EAvatarRandomBoxShotType__Legend_Sacrifice = 42,
	EAvatarRandomBoxShotType__Legend_Valkyrie = 43,
	EAvatarRandomBoxShotType__Legend_Axler = 44,
	EAvatarRandomBoxShotType__Legend_Destroyer = 45,
	EAvatarRandomBoxShotType__Myth_Warrior = 46,
	EAvatarRandomBoxShotType__Myth_Sorceress = 47,
	EAvatarRandomBoxShotType__Myth_Rogue = 48,
	EAvatarRandomBoxShotType__Myth_Priest = 49,
	EAvatarRandomBoxShotType__Myth_ShieldMaiden = 50,
	EAvatarRandomBoxShotType__Myth_Enchantress = 51,
	EAvatarRandomBoxShotType__Myth_Destroyer = 52,
	EAvatarRandomBoxShotType__Ancient_Warrior = 53,
	EAvatarRandomBoxShotType__Ancient_Sorceress = 54,
	EAvatarRandomBoxShotType__Ancient_Rogue = 55,
	EAvatarRandomBoxShotType__Ancient_Priest = 56,
	EAvatarRandomBoxShotType__Ancient_ShieldMaiden = 57,
	EAvatarRandomBoxShotType__Ancient_Enchantress = 58,
	EAvatarRandomBoxShotType__Ancient_Destroyer = 59,
	EAvatarRandomBoxShotType__Max  = 60
};


// Enum ProjectLH.EContentsTutorialDescLocation
enum class FProjectLH_ProjectLH_EContentsTutorialDescLocation : uint8_t
{
	EContentsTutorialDescLocation__Up = 0,
	EContentsTutorialDescLocation__Down = 1,
	EContentsTutorialDescLocation__Left = 2,
	EContentsTutorialDescLocation__Right = 3,
	EContentsTutorialDescLocation__EContentsTutorialDescLocation_MAX = 4
};


// Enum ProjectLH.ELHTouchMaskShape
enum class FProjectLH_ProjectLH_ELHTouchMaskShape : uint8_t
{
	ELHTouchMaskShape__Circle      = 0,
	ELHTouchMaskShape__Rect        = 1,
	ELHTouchMaskShape__ELHTouchMaskShape_MAX = 2
};


// Enum ProjectLH.ETouchMaskSearchType
enum class FProjectLH_ProjectLH_ETouchMaskSearchType : uint8_t
{
	ETouchMaskSearchType__None     = 0,
	ETouchMaskSearchType__SlotIndex = 1,
	ETouchMaskSearchType__ItemIndex = 2,
	ETouchMaskSearchType__ItemMakeCategoryIndex = 3,
	ETouchMaskSearchType__ItemMakeGroupIndex = 4,
	ETouchMaskSearchType__CollectionIndex = 5,
	ETouchMaskSearchType__NpcIndex = 6,
	ETouchMaskSearchType__NpcShopItemIndex = 7,
	ETouchMaskSearchType__SkillIndex = 8,
	ETouchMaskSearchType__ClassBranch = 9,
	ETouchMaskSearchType__ClassBranch_ItemIndex = 10,
	ETouchMaskSearchType__ClassBranch_SkillIndex = 11,
	ETouchMaskSearchType__ETouchMaskSearchType_MAX = 12
};


// Enum ProjectLH.EMaskType
enum class FProjectLH_ProjectLH_EMaskType : uint8_t
{
	EMaskType__ContentsTutorial    = 0,
	EMaskType__TouchMask           = 1,
	EMaskType__EMaskType_MAX       = 2
};


// Enum ProjectLH.ELHArrowLocateDirection
enum class FProjectLH_ProjectLH_ELHArrowLocateDirection : uint8_t
{
	ELHArrowLocateDirection__Up    = 0,
	ELHArrowLocateDirection__Down  = 1,
	ELHArrowLocateDirection__Left  = 2,
	ELHArrowLocateDirection__Right = 3,
	ELHArrowLocateDirection__ELHArrowLocateDirection_MAX = 4
};


// Enum ProjectLH.EInvisibleLockContentType
enum class FProjectLH_ProjectLH_EInvisibleLockContentType : uint8_t
{
	EInvisibleLockContentType__Quest = 0,
	EInvisibleLockContentType__TouchMask = 1,
	EInvisibleLockContentType__EInvisibleLockContentType_MAX = 2
};


// Enum ProjectLH.EStringState
enum class FProjectLH_ProjectLH_EStringState : uint8_t
{
	EStringState__None             = 0,
	EStringState__Active           = 1,
	EStringState__Dimmed           = 2,
	EStringState__EStringState_MAX = 3
};


// Enum ProjectLH.EClassChangeMainCategory
enum class FProjectLH_ProjectLH_EClassChangeMainCategory : uint8_t
{
	EClassChangeMainCategory__Main = 0,
	EClassChangeMainCategory__OtherClass = 1,
	EClassChangeMainCategory__Avatar = 2,
	EClassChangeMainCategory__WeaponShape = 3,
	EClassChangeMainCategory__EquipItem = 4,
	EClassChangeMainCategory__Skill = 5,
	EClassChangeMainCategory__Costume = 6,
	EClassChangeMainCategory__Class = 7,
	EClassChangeMainCategory__EClassChangeMainCategory_MAX = 8
};


// Enum ProjectLH.EGradeIconType
enum class FProjectLH_ProjectLH_EGradeIconType : uint8_t
{
	EGradeIconType__Normal         = 0,
	EGradeIconType__Circle         = 1,
	EGradeIconType__Rect           = 2,
	EGradeIconType__EGradeIconType_MAX = 3
};


// Enum ProjectLH.EDamageContainerState
enum class FProjectLH_ProjectLH_EDamageContainerState : uint8_t
{
	EDamageContainerState__None    = 0,
	EDamageContainerState__PlayEndAni = 1,
	EDamageContainerState__Remove  = 2,
	EDamageContainerState__EDamageContainerState_MAX = 3
};


// Enum ProjectLH.EItemDropState
enum class FProjectLH_ProjectLH_EItemDropState : uint8_t
{
	EItemDropState__None           = 0,
	EItemDropState__PlayEndAni     = 1,
	EItemDropState__EndEnterAni    = 2,
	EItemDropState__EndPlayUpAni   = 3,
	EItemDropState__Remove         = 4,
	EItemDropState__EItemDropState_MAX = 5
};


// Enum ProjectLH.EStatusColorType
enum class FProjectLH_ProjectLH_EStatusColorType : uint8_t
{
	EStatusColorType__None         = 0,
	EStatusColorType__Default      = 1,
	EStatusColorType__MaxOver      = 2,
	EStatusColorType__Max          = 3,
	EStatusColorType__Dimmed       = 4
};


// Enum ProjectLH.EToolTipPos
enum class FProjectLH_ProjectLH_EToolTipPos : uint8_t
{
	EToolTipPos__NoToolTip         = 0,
	EToolTipPos__EquippedItem      = 1,
	EToolTipPos__InventoryItem     = 2,
	EToolTipPos__InventoryQuickSlot = 3,
	EToolTipPos__Shop              = 4,
	EToolTipPos__WarehouseLeft     = 5,
	EToolTipPos__WarehouseRight    = 6,
	EToolTipPos__Exchange          = 7,
	EToolTipPos__MiniToolTip       = 8,
	EToolTipPos__CommonLeft        = 9,
	EToolTipPos__CommonRight       = 10,
	EToolTipPos__ItemCollection    = 11,
	EToolTipPos__QuestRewardItem   = 12,
	EToolTipPos__ResourceMoney     = 13,
	EToolTipPos__ResourceMimirWell = 14,
	EToolTipPos__GuildContribution = 15,
	EToolTipPos__AddMultipleEnchant = 16,
	EToolTipPos__MinusMultipleEnchant = 17,
	EToolTipPos__OnlyInfos         = 18,
	EToolTipPos__InventoryItemNoDiff = 19,
	EToolTipPos__KakaoLetter       = 20,
	EToolTipPos__EToolTipPos_MAX   = 21
};


// Enum ProjectLH.EAlchemyOptionGroupType
enum class FProjectLH_ProjectLH_EAlchemyOptionGroupType : uint8_t
{
	EAlchemyOptionGroupType__None  = 0,
	EAlchemyOptionGroupType__OptionCount = 1,
	EAlchemyOptionGroupType__Attack = 2,
	EAlchemyOptionGroupType__Deffense = 3,
	EAlchemyOptionGroupType__Wisdom = 4,
	EAlchemyOptionGroupType__Resistance = 5,
	EAlchemyOptionGroupType__Max   = 6
};


// Enum ProjectLH.ESkillEnchantMaintainFailedReason
enum class FProjectLH_ProjectLH_ESkillEnchantMaintainFailedReason : uint8_t
{
	ESkillEnchantMaintainFailedReason__None = 0,
	ESkillEnchantMaintainFailedReason__NotEnoughTranscendLevel = 1,
	ESkillEnchantMaintainFailedReason__NotEnoughEnchantLevel = 2,
	ESkillEnchantMaintainFailedReason__ESkillEnchantMaintainFailedReason_MAX = 3
};


// Enum ProjectLH.ESkillEnchantMaintainType
enum class FProjectLH_ProjectLH_ESkillEnchantMaintainType : uint8_t
{
	ESkillEnchantMaintainType__None = 0,
	ESkillEnchantMaintainType__NoMaintain = 1,
	ESkillEnchantMaintainType__AllMaintainFree = 2,
	ESkillEnchantMaintainType__AllMaintainPaid = 3,
	ESkillEnchantMaintainType__EnchantMaintain = 4,
	ESkillEnchantMaintainType__EnchantMaintainFree = 5,
	ESkillEnchantMaintainType__TranscendenceMaintain = 6,
	ESkillEnchantMaintainType__TranscendenceFreeEnchantPaid = 7,
	ESkillEnchantMaintainType__ESkillEnchantMaintainType_MAX = 8
};


// Enum ProjectLH.EDyeingParts
enum class FProjectLH_ProjectLH_EDyeingParts : uint8_t
{
	EDyeingParts__HelmetA          = 0,
	EDyeingParts__HelmetB          = 1,
	EDyeingParts__BodyA            = 2,
	EDyeingParts__BodyB            = 3,
	EDyeingParts__HelmetAll        = 4,
	EDyeingParts__BodyAll          = 5,
	EDyeingParts__All              = 6,
	EDyeingParts__Max              = 7
};


// Enum ProjectLH.EIndicatorItemType
enum class FProjectLH_ProjectLH_EIndicatorItemType : uint8_t
{
	EIndicatorItemType__None       = 0,
	EIndicatorItemType__Equipment  = 1,
	EIndicatorItemType__SkillItem  = 2,
	EIndicatorItemType__Rune       = 3,
	EIndicatorItemType__ETC        = 4,
	EIndicatorItemType__Relic      = 5,
	EIndicatorItemType__EIndicatorItemType_MAX = 6
};


// Enum ProjectLH.EChangeIndicatorType
enum class FProjectLH_ProjectLH_EChangeIndicatorType : uint8_t
{
	EChangeIndicatorType__None     = 0,
	EChangeIndicatorType__Add      = 1,
	EChangeIndicatorType__Sub      = 2,
	EChangeIndicatorType__EChangeIndicatorType_MAX = 3
};


// Enum ProjectLH.ELHCrowdSpreadType
enum class FProjectLH_ProjectLH_ELHCrowdSpreadType : uint8_t
{
	ELHCrowdSpreadType__Area       = 0,
	ELHCrowdSpreadType__Spline     = 1,
	ELHCrowdSpreadType__ELHCrowdSpreadType_MAX = 2
};


// Enum ProjectLH.EAppearanceType
enum class FProjectLH_ProjectLH_EAppearanceType : uint8_t
{
	EAppearanceType__None          = 0,
	EAppearanceType__SkeletalMesh  = 1,
	EAppearanceType__Decal         = 2,
	EAppearanceType__Particle      = 3,
	EAppearanceType__EAppearanceType_MAX = 4
};


// Enum ProjectLH.EQuestParticleAppearType
enum class FProjectLH_ProjectLH_EQuestParticleAppearType : uint8_t
{
	EQuestParticleAppearType__None = 0,
	EQuestParticleAppearType__Always = 1,
	EQuestParticleAppearType__BeforeQuest = 2,
	EQuestParticleAppearType__DoingQuest = 3,
	EQuestParticleAppearType__AfterQuest = 4,
	EQuestParticleAppearType__EQuestParticleAppearType_MAX = 5
};


// Enum ProjectLH.ENoticeSoundType
enum class FProjectLH_ProjectLH_ENoticeSoundType : uint8_t
{
	ENoticeSoundType__None         = 0,
	ENoticeSoundType__Beep         = 1,
	ENoticeSoundType__Male         = 2,
	ENoticeSoundType__Female       = 3,
	ENoticeSoundType__ENoticeSoundType_MAX = 4
};


// Enum ProjectLH.EAnimStateMachine
enum class FProjectLH_ProjectLH_EAnimStateMachine : uint8_t
{
	EAnimStateMachine__Base        = 0,
	EAnimStateMachine__Ride        = 1,
	EAnimStateMachine__EAnimStateMachine_MAX = 2
};


// Enum ProjectLH.EMountAniPos
enum class FProjectLH_ProjectLH_EMountAniPos : uint8_t
{
	EMountAniPos__Ground           = 0,
	EMountAniPos__Fly              = 1,
	EMountAniPos__Interaction      = 2,
	EMountAniPos__EMountAniPos_MAX = 3
};


// Enum ProjectLH.ESpawnMeshType
enum class FProjectLH_ProjectLH_ESpawnMeshType : uint8_t
{
	ESpawnMeshType__CastellanFlag  = 0,
	ESpawnMeshType__ESpawnMeshType_MAX = 1
};


// Enum ProjectLH.ETextureType
enum class FProjectLH_ProjectLH_ETextureType : uint8_t
{
	ETextureType__None             = 0,
	ETextureType__Common           = 1,
	ETextureType__NomalIcon        = 2,
	ETextureType__ItemIcon         = 3,
	ETextureType__GemIcon          = 4,
	ETextureType__RuneIcon         = 5,
	ETextureType__EquipIcon        = 6,
	ETextureType__BuffIcon         = 7,
	ETextureType__RankingIcon      = 8,
	ETextureType__GuildMarkIcon    = 9,
	ETextureType__VehicleIcon      = 10,
	ETextureType__CharacterPortraitIcon = 11,
	ETextureType__Emoticon         = 12,
	ETextureType__SocialEmotion    = 13,
	ETextureType__Inventory        = 14,
	ETextureType__Achievement      = 15,
	ETextureType__AchievementIcon  = 16,
	ETextureType__FullDisplay      = 17,
	ETextureType__SkillIconTotal   = 18,
	ETextureType__SkillIconClassA  = 19,
	ETextureType__SkillIconClassB  = 20,
	ETextureType__SkillIconClassC  = 21,
	ETextureType__SkillIconClassD  = 22,
	ETextureType__SkillIconClassE  = 23,
	ETextureType__Monster          = 24,
	ETextureType__CustomizingIcon  = 25,
	ETextureType__CustomizingCommonIcon = 26,
	ETextureType__AvatarIcon       = 27,
	ETextureType__BossIcon         = 28,
	ETextureType__WorldBoss        = 29,
	ETextureType__Dungeon          = 30,
	ETextureType__LimitedEvent     = 31,
	ETextureType__Imprint          = 32,
	ETextureType__BlessingSymbol   = 33,
	ETextureType__BlessingStone    = 34,
	ETextureType__JobMark          = 35,
	ETextureType__Tier             = 36,
	ETextureType__BattleVehicleSkill = 37,
	ETextureType__GuildDefenseBless = 38,
	ETextureType__SiegeImageGuide  = 39,
	ETextureType__Card             = 40,
	ETextureType__InfinityDungeon  = 41,
	ETextureType__SkillTranscend   = 42,
	ETextureType__LinkEmblem       = 43,
	ETextureType__Max              = 44
};


// Enum ProjectLH.EAutoPlayMode
enum class FProjectLH_ProjectLH_EAutoPlayMode : uint8_t
{
	EAutoPlayMode__None            = 0,
	EAutoPlayMode__Battle          = 1,
	EAutoPlayMode__Quest           = 2,
	EAutoPlayMode__Task            = 3,
	EAutoPlayMode__Follow          = 4,
	EAutoPlayMode__PartyDungeon    = 5,
	EAutoPlayMode__InfinityDungeon = 6,
	EAutoPlayMode__Max             = 7
};


// Enum ProjectLH.ELHViewTargetBlendFunction
enum class FProjectLH_ProjectLH_ELHViewTargetBlendFunction : uint8_t
{
	ELHViewTargetBlendFunction__VTBlend_Linear = 0,
	ELHViewTargetBlendFunction__VTBlend_Cubic = 1,
	ELHViewTargetBlendFunction__VTBlend_EaseIn = 2,
	ELHViewTargetBlendFunction__VTBlend_EaseOut = 3,
	ELHViewTargetBlendFunction__VTBlend_EaseInOut = 4,
	ELHViewTargetBlendFunction__VTBlend_MAX = 5
};


// Enum ProjectLH.EBuffParticleCondition
enum class FProjectLH_ProjectLH_EBuffParticleCondition : uint8_t
{
	EBuffParticleCondition__None   = 0,
	EBuffParticleCondition__HPMax  = 1,
	EBuffParticleCondition__EBuffParticleCondition_MAX = 2
};


// Enum ProjectLH.EInvisibleType
enum class FProjectLH_ProjectLH_EInvisibleType : uint8_t
{
	EInvisibleType__Hidden         = 0,
	EInvisibleType__Collapsed      = 1,
	EInvisibleType__EInvisibleType_MAX = 2
};


// Enum ProjectLH.ELHInGame_CameraMode
enum class FProjectLH_ProjectLH_ELHInGame_CameraMode : uint8_t
{
	ELHInGame_CameraMode__Normal   = 0,
	ELHInGame_CameraMode__Quarter  = 1,
	ELHInGame_CameraMode__Dynamic  = 2,
	ELHInGame_CameraMode__Free     = 3,
	ELHInGame_CameraMode__StatusEffect = 4,
	ELHInGame_CameraMode__Interaction = 5,
	ELHInGame_CameraMode__Cannon   = 6,
	ELHInGame_CameraMode__Mode     = 7,
	ELHInGame_CameraMode__Target   = 8,
	ELHInGame_CameraMode__MAX      = 9
};


// Enum ProjectLH.EMarkTypeGroup
enum class FProjectLH_ProjectLH_EMarkTypeGroup : uint8_t
{
	EMarkTypeGroup__DailyMission   = 0,
	EMarkTypeGroup__GameEvent      = 1,
	EMarkTypeGroup__CashShop       = 2,
	EMarkTypeGroup__Inventory      = 3,
	EMarkTypeGroup__Alarm          = 4,
	EMarkTypeGroup__Avatar         = 5,
	EMarkTypeGroup__Skill          = 6,
	EMarkTypeGroup__Quest          = 7,
	EMarkTypeGroup__Vehicle        = 8,
	EMarkTypeGroup__Exchange       = 9,
	EMarkTypeGroup__Production     = 10,
	EMarkTypeGroup__Collection     = 11,
	EMarkTypeGroup__Achievement    = 12,
	EMarkTypeGroup__SealedStone    = 13,
	EMarkTypeGroup__Rune           = 14,
	EMarkTypeGroup__Dungeon        = 15,
	EMarkTypeGroup__Realmwar       = 16,
	EMarkTypeGroup__PK             = 17,
	EMarkTypeGroup__Friend         = 18,
	EMarkTypeGroup__Guild          = 19,
	EMarkTypeGroup__Mail           = 20,
	EMarkTypeGroup__SavePoint      = 21,
	EMarkTypeGroup__Imprint        = 22,
	EMarkTypeGroup__Relic          = 23,
	EMarkTypeGroup__WorldMap       = 24,
	EMarkTypeGroup__SpecialPackage = 25,
	EMarkTypeGroup__Ranking        = 26,
	EMarkTypeGroup__WorldDungeon   = 27,
	EMarkTypeGroup__Costume        = 28,
	EMarkTypeGroup__Blessing       = 29,
	EMarkTypeGroup__WeaponShape    = 30,
	EMarkTypeGroup__CastleWar      = 31,
	EMarkTypeGroup__Link           = 32,
	EMarkTypeGroup__Alchemy        = 33,
	EMarkTypeGroup__Pet            = 34,
	EMarkTypeGroup__ChainPass      = 35,
	EMarkTypeGroup__InvasionQuest  = 36,
	EMarkTypeGroup__Common         = 37,
	EMarkTypeGroup__Max            = 38
};


// Enum ProjectLH.ECastleWarGuildType
enum class FProjectLH_ProjectLH_ECastleWarGuildType : uint8_t
{
	ECastleWarGuildType__Win       = 0,
	ECastleWarGuildType__Enter     = 1,
	ECastleWarGuildType__MAX       = 2
};


// Enum ProjectLH.ECastleWarBarrierIndex
enum class FProjectLH_ProjectLH_ECastleWarBarrierIndex : uint8_t
{
	ECastleWarBarrierIndex__Castle_2_CastlePoint1 = 0,
	ECastleWarBarrierIndex__Castle_2_CastlePoint2 = 1,
	ECastleWarBarrierIndex__Castle_2_BridgePoint3 = 2,
	ECastleWarBarrierIndex__Castle_2_BridgePoint2 = 3,
	ECastleWarBarrierIndex__Castle_2_BridgePoint1 = 4,
	ECastleWarBarrierIndex__Castle_1_CastlePoint1 = 5,
	ECastleWarBarrierIndex__Castle_1_CastlePoint2 = 6,
	ECastleWarBarrierIndex__Castle_1_BridgePoint3 = 7,
	ECastleWarBarrierIndex__Castle_1_BridgePoint2 = 8,
	ECastleWarBarrierIndex__Castle_1_BridgePoint1 = 9,
	ECastleWarBarrierIndex__Castle_3_CastlePoint1 = 10,
	ECastleWarBarrierIndex__Castle_3_CastlePoint2 = 11,
	ECastleWarBarrierIndex__Castle_3_BridgePoint3 = 12,
	ECastleWarBarrierIndex__Castle_3_BridgePoint2 = 13,
	ECastleWarBarrierIndex__Castle_3_BridgePoint1 = 14,
	ECastleWarBarrierIndex__MAX    = 15
};


// Enum ProjectLH.ECharacterCulling
enum class FProjectLH_ProjectLH_ECharacterCulling : uint8_t
{
	ECharacterCulling__Culling     = 0,
	ECharacterCulling__Never       = 1,
	ECharacterCulling__ECharacterCulling_MAX = 2
};


// Enum ProjectLH.EParamCategory
enum class FProjectLH_ProjectLH_EParamCategory : uint8_t
{
	EParamCategory__None           = 0,
	EParamCategory__Attack         = 1,
	EParamCategory__Defence        = 2,
	EParamCategory__ETC            = 3,
	EParamCategory__Abnormal       = 4,
	EParamCategory__Max            = 5
};


// Enum ProjectLH.ECharacterMapFXType
enum class FProjectLH_ProjectLH_ECharacterMapFXType : uint8_t
{
	ECharacterMapFXType__WaterField = 0,
	ECharacterMapFXType__Max       = 1
};


// Enum ProjectLH.ECharacterFXType
enum class FProjectLH_ProjectLH_ECharacterFXType : uint8_t
{
	ECharacterFXType__ECharacterFXType_WeaponEnchant = 0,
	ECharacterFXType__ECharacterFXType_BossDecorate = 1,
	ECharacterFXType__ECharacterFXType_Skill = 2,
	ECharacterFXType__ECharacterFXType_Ranking = 3,
	ECharacterFXType__ECharacterFXType_WeaponShape = 4,
	ECharacterFXType__ECharacterFXType_InteractStrongholdFlag = 5,
	ECharacterFXType__ECharacterFXType_MapFX = 6,
	ECharacterFXType__Weapons      = 7,
	ECharacterFXType__ECharacterFXType_MAX = 8
};


// Enum ProjectLH.ESync_Move
enum class FProjectLH_ProjectLH_ESync_Move : uint8_t
{
	ESync_Move__None               = 0,
	ESync_Move__Wait               = 1,
	ESync_Move__Stop               = 2,
	ESync_Move__Walk               = 3,
	ESync_Move__Moving             = 4,
	ESync_Move__Warp               = 5,
	ESync_Move__Rewind             = 6,
	ESync_Move__Turn               = 7,
	ESync_Move__Angle              = 8,
	ESync_Move__Max                = 9
};


// Enum ProjectLH.ECharacterInvisibleFlag
enum class FProjectLH_ProjectLH_ECharacterInvisibleFlag : uint8_t
{
	ECharacterInvisibleFlag__ActorDisappear = 0,
	ECharacterInvisibleFlag__Culling = 1,
	ECharacterInvisibleFlag__Buff_Hiding = 2,
	ECharacterInvisibleFlag__Buff_Polymorph = 3,
	ECharacterInvisibleFlag__ECharacterInvisibleFlag_MAX = 4
};


// Enum ProjectLH.ERagDollImpulseType
enum class FProjectLH_ProjectLH_ERagDollImpulseType : uint8_t
{
	ERagDollImpulseType__Default   = 0,
	ERagDollImpulseType__Radial    = 1,
	ERagDollImpulseType__AllBodiesRandom = 2,
	ERagDollImpulseType__ERagDollImpulseType_MAX = 3
};


// Enum ProjectLH.ESync
enum class FProjectLH_ProjectLH_ESync : uint8_t
{
	ESync__None                    = 0,
	ESync__Jump                    = 1,
	ESync__Fly                     = 2,
	ESync__Casting                 = 3,
	ESync__Skill                   = 4,
	ESync__Die                     = 5,
	ESync__Max                     = 6
};


// Enum ProjectLH.EFailedSelectClassReason
enum class FProjectLH_ProjectLH_EFailedSelectClassReason : uint8_t
{
	EFailedSelectClassReason__None = 0,
	EFailedSelectClassReason__History = 1,
	EFailedSelectClassReason__CantSelect = 2,
	EFailedSelectClassReason__SameClass = 3,
	EFailedSelectClassReason__EFailedSelectClassReason_MAX = 4
};


// Enum ProjectLH.EDuelMemberListReqType
enum class FProjectLH_ProjectLH_EDuelMemberListReqType : uint8_t
{
	EDuelMemberListReqType__Join   = 0,
	EDuelMemberListReqType__ChangeTeam = 1,
	EDuelMemberListReqType__AllMember = 2,
	EDuelMemberListReqType__EDuelMemberListReqType_MAX = 3
};


// Enum ProjectLH.EEditorBranchesEnum
enum class FProjectLH_ProjectLH_EEditorBranchesEnum : uint8_t
{
	EEditorBranchesEnum__OnSuccess = 0,
	EEditorBranchesEnum__OnFail    = 1,
	EEditorBranchesEnum__EEditorBranchesEnum_MAX = 2
};


// Enum ProjectLH.EGlobalResouceTypeColor
enum class FProjectLH_ProjectLH_EGlobalResouceTypeColor : uint8_t
{
	EGlobalResouceTypeColor__None  = 0,
	EGlobalResouceTypeColor__Gold  = 1,
	EGlobalResouceTypeColor__Cash  = 2,
	EGlobalResouceTypeColor__Badge = 3,
	EGlobalResouceTypeColor__GuildCoin = 4,
	EGlobalResouceTypeColor__RealmwarCoin = 5,
	EGlobalResouceTypeColor__Mileage = 6,
	EGlobalResouceTypeColor__Villagequest = 7,
	EGlobalResouceTypeColor__SubQueset = 8,
	EGlobalResouceTypeColor__ShadowDungeonBadge = 9,
	EGlobalResouceTypeColor__Exp   = 10,
	EGlobalResouceTypeColor__Time  = 11,
	EGlobalResouceTypeColor__MAX   = 12
};


// Enum ProjectLH.EAddPassiveDescType
enum class FProjectLH_ProjectLH_EAddPassiveDescType : uint8_t
{
	EAddPassiveDescType__None      = 0,
	EAddPassiveDescType__AddPassiveSkill_Active = 1,
	EAddPassiveDescType__AddPassiveSkill_Passive = 2,
	EAddPassiveDescType__MAX       = 3
};


// Enum ProjectLH.EExtraSkillResource
enum class FProjectLH_ProjectLH_EExtraSkillResource : uint8_t
{
	EExtraSkillResource__Seal      = 0,
	EExtraSkillResource__Melody    = 1,
	EExtraSkillResource__SunMoon   = 2,
	EExtraSkillResource__HuntressState = 3,
	EExtraSkillResource__Valknut   = 4,
	EExtraSkillResource__SacrificeBook = 5,
	EExtraSkillResource__MAX       = 6
};


// Enum ProjectLH.EDestinationParticle
enum class FProjectLH_ProjectLH_EDestinationParticle : uint8_t
{
	EDestinationParticle__NormalMove = 0,
	EDestinationParticle__MainQuest = 1,
	EDestinationParticle__SubQuest = 2,
	EDestinationParticle__RepeatQuest = 3,
	EDestinationParticle__EventQuest = 4,
	EDestinationParticle__MAX      = 5
};


// Enum ProjectLH.EInputKeyState
enum class FProjectLH_ProjectLH_EInputKeyState : uint8_t
{
	EInputKeyState__Move           = 0,
	EInputKeyState__NextTarget     = 1,
	EInputKeyState__Action         = 2,
	EInputKeyState__Skill          = 3,
	EInputKeyState__Max            = 4
};


// Enum ProjectLH.ELocalizationType
enum class FProjectLH_ProjectLH_ELocalizationType : uint8_t
{
	ELocalizationType__None        = 0,
	ELocalizationType__Culture     = 1,
	ELocalizationType__Group_Sound = 2,
	ELocalizationType__ALL         = 3,
	ELocalizationType__Max         = 4
};


// Enum ProjectLH.ESkillTranscendStepState
enum class FProjectLH_ProjectLH_ESkillTranscendStepState : uint8_t
{
	ESkillTranscendStepState__None = 0,
	ESkillTranscendStepState__Blank = 1,
	ESkillTranscendStepState__Success = 2,
	ESkillTranscendStepState__GreatSuccess = 3,
	ESkillTranscendStepState__Failed = 4,
	ESkillTranscendStepState__ESkillTranscendStepState_MAX = 5
};


// Enum ProjectLH.EGlobalButtonContentsType
enum class FProjectLH_ProjectLH_EGlobalButtonContentsType : uint8_t
{
	EGlobalButtonContentsType__None = 0,
	EGlobalButtonContentsType__BaseEnhance = 1,
	EGlobalButtonContentsType__TranscendenceEnhance = 2,
	EGlobalButtonContentsType__EGlobalButtonContentsType_MAX = 3
};


// Enum ProjectLH.EPatchType
enum class FProjectLH_ProjectLH_EPatchType : uint8_t
{
	EPatchType__None               = 0,
	EPatchType__DLC                = 1,
	EPatchType__TBL                = 2,
	EPatchType__Culture            = 3,
	EPatchType__Group_Sound        = 4,
	EPatchType__Max                = 5
};


// Enum ProjectLH.EButtonBrushStyle
enum class FProjectLH_ProjectLH_EButtonBrushStyle : uint8_t
{
	EButtonBrushStyle__None        = 0,
	EButtonBrushStyle__Normal      = 1,
	EButtonBrushStyle__Hovered     = 2,
	EButtonBrushStyle__Pressed     = 3,
	EButtonBrushStyle__Disabled    = 4,
	EButtonBrushStyle__EButtonBrushStyle_MAX = 5
};


// Enum ProjectLH.EVehicleAttachSocket
enum class FProjectLH_ProjectLH_EVehicleAttachSocket : uint8_t
{
	EVehicleAttachSocket__Custom   = 0,
	EVehicleAttachSocket__FX_Center = 1,
	EVehicleAttachSocket__FX_Floor = 2,
	EVehicleAttachSocket__EVehicleAttachSocket_MAX = 3
};


// Enum ProjectLH.ECollectionItemState
enum class FProjectLH_ProjectLH_ECollectionItemState : uint8_t
{
	ECollectionItemState__NotHaveItem = 0,
	ECollectionItemState__HaveItem_ExcessEnchantStep = 1,
	ECollectionItemState__HaveItem_Lock = 2,
	ECollectionItemState__HaveItem_Equipped = 3,
	ECollectionItemState__HaveItem_NotEnoughEnchantStep = 4,
	ECollectionItemState__HaveItem_NotEnoughAmount = 5,
	ECollectionItemState__HaveItem_AlreadyRegisterItem_OtherPlayer = 6,
	ECollectionItemState__HaveItem = 7,
	ECollectionItemState__AlreadyRegisterItem = 8,
	ECollectionItemState__AlreadyRegisterItem_OtherPlayer = 9,
	ECollectionItemState__ECollectionItemState_MAX = 10
};


// Enum ProjectLH.EPIPModeType
enum class FProjectLH_ProjectLH_EPIPModeType : uint8_t
{
	EPIPModeType__None             = 0,
	EPIPModeType__InGame           = 1,
	EPIPModeType__SleepMode        = 2,
	EPIPModeType__AutoSleepMode    = 3,
	EPIPModeType__EPIPModeType_MAX = 4
};


// Enum ProjectLH.EMPGaugeType
enum class FProjectLH_ProjectLH_EMPGaugeType : uint8_t
{
	EMPGaugeType__CharacterMP      = 0,
	EMPGaugeType__MPShield         = 1,
	EMPGaugeType__Max              = 2
};


// Enum ProjectLH.EHealthGaugeType
enum class FProjectLH_ProjectLH_EHealthGaugeType : uint8_t
{
	EHealthGaugeType__CharacterHP  = 0,
	EHealthGaugeType__VehicleHP    = 1,
	EHealthGaugeType__Shield       = 2,
	EHealthGaugeType__Void         = 3,
	EHealthGaugeType__Max          = 4
};


// Enum ProjectLH.EGuideTextReason
enum class FProjectLH_ProjectLH_EGuideTextReason : uint8_t
{
	EGuideTextReason__None         = 0,
	EGuideTextReason__Monster      = 1,
	EGuideTextReason__VoidDungeon  = 2,
	EGuideTextReason__GuildStronghold = 3,
	EGuideTextReason__GuildDefense = 4,
	EGuideTextReason__RealmWar     = 5,
	EGuideTextReason__GuildBattlefield = 6,
	EGuideTextReason__Max          = 7
};


// Enum ProjectLH.EExpireTime
enum class FProjectLH_ProjectLH_EExpireTime : uint8_t
{
	EExpireTime__None              = 0,
	EExpireTime__RemainTime        = 1,
	EExpireTime__DateTime          = 2,
	EExpireTime__EExpireTime_MAX   = 3
};


// Enum ProjectLH.EPVPContents
enum class FProjectLH_ProjectLH_EPVPContents : uint8_t
{
	EPVPContents__DuelDungeon      = 0,
	EPVPContents__Realmwar         = 1,
	EPVPContents__EPVPContents_MAX = 2
};


// Enum ProjectLH.EDifficultyType
enum class FProjectLH_ProjectLH_EDifficultyType : uint8_t
{
	EDifficultyType__Normal        = 0,
	EDifficultyType__Hard          = 1,
	EDifficultyType__VeryHard      = 2,
	EDifficultyType__EDifficultyType_MAX = 3
};


// Enum ProjectLH.EGachaOddsUrl
enum class FProjectLH_ProjectLH_EGachaOddsUrl : uint8_t
{
	EGachaOddsUrl__None            = 0,
	EGachaOddsUrl__CashShop        = 1,
	EGachaOddsUrl__Production      = 2,
	EGachaOddsUrl__Workmanship     = 3,
	EGachaOddsUrl__RandomBox       = 4,
	EGachaOddsUrl__RuneCompose     = 5,
	EGachaOddsUrl__RuneUpgarde     = 6,
	EGachaOddsUrl__SealedStoneEnchant = 7,
	EGachaOddsUrl__ItemEnchant     = 8,
	EGachaOddsUrl__SkillEnchant    = 9,
	EGachaOddsUrl__AvatarConfirm   = 10,
	EGachaOddsUrl__AvatarCompose   = 11,
	EGachaOddsUrl__VehicleConfirm  = 12,
	EGachaOddsUrl__VehicleCompose  = 13,
	EGachaOddsUrl__Lucky           = 14,
	EGachaOddsUrl__Package         = 15,
	EGachaOddsUrl__Imprint         = 16,
	EGachaOddsUrl__Relic           = 17,
	EGachaOddsUrl__BlessingCompose = 18,
	EGachaOddsUrl__BlessingChanging = 19,
	EGachaOddsUrl__WeaponShapeConfirm = 20,
	EGachaOddsUrl__WeaponShapeCompose = 21,
	EGachaOddsUrl__RuneExchange    = 22,
	EGachaOddsUrl__BlessingSymbolChange = 23,
	EGachaOddsUrl__InfinityDungeon = 24,
	EGachaOddsUrl__PetOptionChange = 25,
	EGachaOddsUrl__SkillTranscend  = 26,
	EGachaOddsUrl__RuneSetEnchant  = 27,
	EGachaOddsUrl__Link            = 28,
	EGachaOddsUrl__CostumeDyeing   = 29,
	EGachaOddsUrl__Dismantle       = 30,
	EGachaOddsUrl__BlessingEnchant = 31,
	EGachaOddsUrl__BlessingExchange = 32,
	EGachaOddsUrl__Alchemy         = 33,
	EGachaOddsUrl__PetConfirm      = 34,
	EGachaOddsUrl__PetCompose      = 35,
	EGachaOddsUrl__PetSoulProtection = 36,
	EGachaOddsUrl__MAX             = 37
};


// Enum ProjectLH.EContentsGuideType
enum class FProjectLH_ProjectLH_EContentsGuideType : uint8_t
{
	EContentsGuideType__None       = 0,
	EContentsGuideType__Config     = 1,
	EContentsGuideType__CharacterInfo = 2,
	EContentsGuideType__SkillBook  = 3,
	EContentsGuideType__Avatar     = 4,
	EContentsGuideType__Vehicle    = 5,
	EContentsGuideType__Inventory  = 6,
	EContentsGuideType__ItemEnchant = 7,
	EContentsGuideType__ItemWorkmanship = 8,
	EContentsGuideType__ItemMake   = 9,
	EContentsGuideType__ItemCollection = 10,
	EContentsGuideType__SealedStone = 11,
	EContentsGuideType__Rune       = 12,
	EContentsGuideType__Warehouse  = 13,
	EContentsGuideType__ExchangeEventNpc = 14,
	EContentsGuideType__ShopNpc    = 15,
	EContentsGuideType__SkillInstructor = 16,
	EContentsGuideType__CashShop   = 17,
	EContentsGuideType__Quest      = 18,
	EContentsGuideType__VillageRequest = 19,
	EContentsGuideType__Achievement = 20,
	EContentsGuideType__Guild      = 21,
	EContentsGuideType__PartyDungeon = 22,
	EContentsGuideType__Realmwar   = 23,
	EContentsGuideType__PK         = 24,
	EContentsGuideType__Ranking    = 25,
	EContentsGuideType__Social     = 26,
	EContentsGuideType__Exchange   = 27,
	EContentsGuideType__LetterBox  = 28,
	EContentsGuideType__World      = 29,
	EContentsGuideType__WorldMap   = 30,
	EContentsGuideType__SavePoint  = 31,
	EContentsGuideType__EliteDungeon = 32,
	EContentsGuideType__GuildRaid  = 33,
	EContentsGuideType__Imprint    = 34,
	EContentsGuideType__Relic      = 35,
	EContentsGuideType__PVP        = 36,
	EContentsGuideType__DuelDungeon = 37,
	EContentsGuideType__WorldDungeon = 38,
	EContentsGuideType__Blessing   = 39,
	EContentsGuideType__GuildStronghold = 40,
	EContentsGuideType__WeaponSystem = 41,
	EContentsGuideType__ServerMigration = 42,
	EContentsGuideType__OfficialCafeEvent = 43,
	EContentsGuideType__ClassChange = 44,
	EContentsGuideType__GuildDefense = 45,
	EContentsGuideType__CastleWar  = 46,
	EContentsGuideType__JP_Law     = 47,
	EContentsGuideType__InfinityDungeon = 48,
	EContentsGuideType__PetOptionChange = 49,
	EContentsGuideType__ShadowDungeon = 50,
	EContentsGuideType__SkillTranscend = 51,
	EContentsGuideType__Link       = 52,
	EContentsGuideType__GuildBattlefield = 53,
	EContentsGuideType__CostumeDyeing = 54,
	EContentsGuideType__Scheduler  = 55,
	EContentsGuideType__OdinPass   = 56,
	EContentsGuideType__Alchemy    = 57,
	EContentsGuideType__Pet        = 58,
	EContentsGuideType__ServerInvasion = 59,
	EContentsGuideType__Max        = 60
};


// Enum ProjectLH.EReservedSkillReason
enum class FProjectLH_ProjectLH_EReservedSkillReason : uint8_t
{
	EReservedSkillReason__None     = 0,
	EReservedSkillReason__ProcessingNextSkill_AutoSkill = 1,
	EReservedSkillReason__ProcessingAutoSkill_AutoSkill = 2,
	EReservedSkillReason__GetAutoActiveSkill_Reset = 3,
	EReservedSkillReason__TryReserveSkill = 4,
	EReservedSkillReason__BeginSkill_Reset = 5,
	EReservedSkillReason__EndSkill_NoAutoNoTarget = 6,
	EReservedSkillReason__ReceiveSkillCmd_ReadyNextSkill = 7,
	EReservedSkillReason__UseItemSkill = 8,
	EReservedSkillReason__ResetReservedSkill_InputMove = 9,
	EReservedSkillReason__ResetReservedSkill_AutoBattleOff = 10,
	EReservedSkillReason__ResetReservedSkill_SetInteractionTarget = 11,
	EReservedSkillReason__ResetReservedSkill_CastingCancel = 12,
	EReservedSkillReason__ResetReservedSkill_NotValidSkill = 13,
	EReservedSkillReason__ResetReservedSkill_NotValidTarget = 14,
	EReservedSkillReason__ResetReservedSkill_ResetAutoMove = 15,
	EReservedSkillReason__ResetReservedSkill_InvalidLocationRelation = 16,
	EReservedSkillReason__ResetReservedSkill_DisappearLockOnTarget = 17,
	EReservedSkillReason__ResetReservedSkill_TouchGround = 18,
	EReservedSkillReason__ResetReservedSkill_TimeoutCombo = 19,
	EReservedSkillReason__EReservedSkillReason_MAX = 20
};


// Enum ProjectLH.ESealedStoneState
enum class FProjectLH_ProjectLH_ESealedStoneState : uint8_t
{
	ESealedStoneState__Stop        = 0,
	ESealedStoneState__Idle        = 1,
	ESealedStoneState__EnchantStart = 2,
	ESealedStoneState__EnchantSucc = 3,
	ESealedStoneState__EnchantFail = 4,
	ESealedStoneState__Activate    = 5,
	ESealedStoneState__ESealedStoneState_MAX = 6
};


// Enum ProjectLH.ESectorIconType
enum class FProjectLH_ProjectLH_ESectorIconType : uint8_t
{
	ESectorIconType__None          = 0,
	ESectorIconType__Village       = 1,
	ESectorIconType__Entrance      = 2,
	ESectorIconType__Field         = 3,
	ESectorIconType__FieldBoss     = 4,
	ESectorIconType__WorldBoss     = 5,
	ESectorIconType__MidBoss       = 6,
	ESectorIconType__VoidSummoner  = 7,
	ESectorIconType__Portal        = 8,
	ESectorIconType__ServerInvasionCamp = 9,
	ESectorIconType__ESectorIconType_MAX = 10
};


// Enum ProjectLH.EButtonLockType
enum class FProjectLH_ProjectLH_EButtonLockType : uint8_t
{
	EButtonLockType__Dimmed        = 0,
	EButtonLockType__Invisible     = 1,
	EButtonLockType__EButtonLockType_MAX = 2
};


// Enum ProjectLH.EChatBroadcastType
enum class FProjectLH_ProjectLH_EChatBroadcastType : uint8_t
{
	EChatBroadcastType__None       = 0,
	EChatBroadcastType__CashShop   = 1,
	EChatBroadcastType__DropItem   = 2,
	EChatBroadcastType__AddItem    = 3,
	EChatBroadcastType__System     = 4,
	EChatBroadcastType__BossAppear = 5,
	EChatBroadcastType__ItemEnchant = 6,
	EChatBroadcastType__FriendPlayerLogin = 7,
	EChatBroadcastType__GuildPlayerLogin = 8,
	EChatBroadcastType__WhatchPlayerLogin = 9,
	EChatBroadcastType__PartyJoin  = 10,
	EChatBroadcastType__GuildJoin  = 11,
	EChatBroadcastType__GetAvatar  = 12,
	EChatBroadcastType__GetVehicle = 13,
	EChatBroadcastType__GetWeaponShape = 14,
	EChatBroadcastType__GetRune    = 15,
	EChatBroadcastType__GuildAuction = 16,
	EChatBroadcastType__BanMsg     = 17,
	EChatBroadcastType__GuildWithdraw = 18,
	EChatBroadcastType__GuildExpel = 19,
	EChatBroadcastType__ChangeGuildName = 20,
	EChatBroadcastType__GuildMemberDead = 21,
	EChatBroadcastType__GuildMemberKill = 22,
	EChatBroadcastType__GuildStrongholdBattle = 23,
	EChatBroadcastType__GetBlessingStone = 24,
	EChatBroadcastType__InfinityDungeonClear = 25,
	EChatBroadcastType__CastlewarTaxDistributionStart = 26,
	EChatBroadcastType__CastlewarTaxDistributionCancel = 27,
	EChatBroadcastType__GuildBattlefieldReward = 28,
	EChatBroadcastType__GetPet     = 29,
	EChatBroadcastType__Max        = 30
};


// Enum ProjectLH.EManagedFxType
enum class FProjectLH_ProjectLH_EManagedFxType : uint8_t
{
	EManagedFxType__None           = 0,
	EManagedFxType__SocialEmotion  = 1,
	EManagedFxType__Monster_Notify = 2,
	EManagedFxType__Target_Particle = 3,
	EManagedFxType__EManagedFxType_MAX = 4
};


// Enum ProjectLH.EInGameSubMenu
enum class FProjectLH_ProjectLH_EInGameSubMenu : uint8_t
{
	EInGameSubMenu__QuestTab       = 0,
	EInGameSubMenu__GuildDungeonTab = 1,
	EInGameSubMenu__PartyTab       = 2,
	EInGameSubMenu__RealmWarTab    = 3,
	EInGameSubMenu__SenseTab       = 4,
	EInGameSubMenu__DamageMeter    = 5,
	EInGameSubMenu__WorldDungeonTab = 6,
	EInGameSubMenu__DuelDungeonTab = 7,
	EInGameSubMenu__QuestContainer = 8,
	EInGameSubMenu__GuildDefenseTab = 9,
	EInGameSubMenu__CastleWar1Tab  = 10,
	EInGameSubMenu__CastleWar2Tab  = 11,
	EInGameSubMenu__CastleWar3Tab  = 12,
	EInGameSubMenu__InfinityDungeon = 13,
	EInGameSubMenu__CastleWarTeam  = 14,
	EInGameSubMenu__GuildBattlefieldRankingTab = 15,
	EInGameSubMenu__GuildBattlefieldRewardTab = 16,
	EInGameSubMenu__ServerInvasionQuestTab = 17,
	EInGameSubMenu__EInGameSubMenuMAX = 18,
	EInGameSubMenu__EInGameSubMenu_MAX = 19
};


// Enum ProjectLH.ECheckPointConfirmState
enum class FProjectLH_ProjectLH_ECheckPointConfirmState : uint8_t
{
	ECheckPointConfirmState__None  = 0,
	ECheckPointConfirmState__RequestServer = 1,
	ECheckPointConfirmState__ResponseServer = 2,
	ECheckPointConfirmState__Max   = 3
};


// Enum ProjectLH.EItemSourceType
enum class FProjectLH_ProjectLH_EItemSourceType : uint8_t
{
	EItemSourceType__None          = 0,
	EItemSourceType__KillMonster   = 1,
	EItemSourceType__MakeItem      = 2,
	EItemSourceType__Gather        = 3,
	EItemSourceType__NPC           = 4,
	EItemSourceType__CashShop      = 5,
	EItemSourceType__Event         = 6,
	EItemSourceType__Dismantle     = 7,
	EItemSourceType__RepeatQuest   = 8,
	EItemSourceType__MainQuest     = 9,
	EItemSourceType__Dungeon       = 10,
	EItemSourceType__WorldBoss     = 11,
	EItemSourceType__VoidSummoner  = 12,
	EItemSourceType__Realmwar      = 13,
	EItemSourceType__Relic         = 14,
	EItemSourceType__ProductItem   = 15,
	EItemSourceType__VehicleExpired = 16,
	EItemSourceType__VoidSummonsMonster = 17,
	EItemSourceType__ShadowDungeonShop = 18,
	EItemSourceType__GuildItemMake = 19,
	EItemSourceType__GuildDonate   = 20,
	EItemSourceType__Castlewar     = 21,
	EItemSourceType__InfinityDungeon = 22,
	EItemSourceType__GuildBattlefield = 23,
	EItemSourceType__CastlewarShop = 24,
	EItemSourceType__WorldShadowDungeonShop = 25,
	EItemSourceType__ServerInvasionShop = 26,
	EItemSourceType__EItemSourceType_MAX = 27
};


// Enum ProjectLH.EWeaponAddLocation
enum class FProjectLH_ProjectLH_EWeaponAddLocation : uint8_t
{
	EWeaponAddLocation__Weapon_L   = 0,
	EWeaponAddLocation__Weapon_R   = 1,
	EWeaponAddLocation__Weapon_Bow = 2,
	EWeaponAddLocation__Weapon_Sub = 3,
	EWeaponAddLocation__Weapon_Extra = 4,
	EWeaponAddLocation__Max        = 5
};


// Enum ProjectLH.ECollectionTypeFilter
enum class FProjectLH_ProjectLH_ECollectionTypeFilter : uint8_t
{
	ECollectionTypeFilter__All     = 0,
	ECollectionTypeFilter__EquipItem = 1,
	ECollectionTypeFilter__RelicGamble = 2,
	ECollectionTypeFilter__Max     = 3
};


// Enum ProjectLH.ECollectionProgressFilterType
enum class FProjectLH_ProjectLH_ECollectionProgressFilterType : uint8_t
{
	ECollectionProgressFilterType__All = 0,
	ECollectionProgressFilterType__Completed = 1,
	ECollectionProgressFilterType__Progress = 2,
	ECollectionProgressFilterType__Max = 3
};


// Enum ProjectLH.EItemMakeCategory
enum class FProjectLH_ProjectLH_EItemMakeCategory : uint8_t
{
	EItemMakeCategory__None        = 0,
	EItemMakeCategory__Weapon_Warrior = 1,
	EItemMakeCategory__Weapon_Sorceress = 2,
	EItemMakeCategory__Weapon_Rogue = 3,
	EItemMakeCategory__Weapon_Priest = 4,
	EItemMakeCategory__Armor_Helmet = 5,
	EItemMakeCategory__Armor_Armor = 6,
	EItemMakeCategory__Armor_Gloves = 7,
	EItemMakeCategory__Armor_Boots = 8,
	EItemMakeCategory__Accessories_Necklace = 9,
	EItemMakeCategory__Accessories_Earring = 10,
	EItemMakeCategory__Accessories_Bracelet = 11,
	EItemMakeCategory__Accessories_Ring = 12,
	EItemMakeCategory__Accessories_Belt = 13,
	EItemMakeCategory__Material_Growth = 14,
	EItemMakeCategory__Material_Make = 15,
	EItemMakeCategory__Material_SkillBookPiece = 16,
	EItemMakeCategory__Consume_Potion = 17,
	EItemMakeCategory__Consume_Spell = 18,
	EItemMakeCategory__Consume_SkillBook = 19,
	EItemMakeCategory__EItemMakeCategory_MAX = 20
};


// Enum ProjectLH.ERealmWarDesc
enum class FProjectLH_ProjectLH_ERealmWarDesc : uint8_t
{
	ERealmWarDesc__None            = 0,
	ERealmWarDesc__PointRank       = 1,
	ERealmWarDesc__RewardInfo      = 2,
	ERealmWarDesc__Max             = 3
};


// Enum ProjectLH.EAvatarSlotMode
enum class FProjectLH_ProjectLH_EAvatarSlotMode : uint8_t
{
	EAvatarSlotMode__Inven         = 0,
	EAvatarSlotMode__LevelUp       = 1,
	EAvatarSlotMode__Breakthrough  = 2,
	EAvatarSlotMode__OptionChange  = 3,
	EAvatarSlotMode__Max           = 4
};


// Enum ProjectLH.ECollectionWidgetType
enum class FProjectLH_ProjectLH_ECollectionWidgetType : uint8_t
{
	ECollectionWidgetType__Collection_Avatar = 0,
	ECollectionWidgetType__Collection_EquipItem = 1,
	ECollectionWidgetType__Collection_Vehicle = 2,
	ECollectionWidgetType__Collection_Monster = 3,
	ECollectionWidgetType__Collection_MAX = 4
};


// Enum ProjectLH.EChatClientType
enum class FProjectLH_ProjectLH_EChatClientType : uint8_t
{
	EChatClientType__Normal        = 0,
	EChatClientType__Party         = 1,
	EChatClientType__Guild         = 2,
	EChatClientType__Server        = 3,
	EChatClientType__Whisper       = 4,
	EChatClientType__System        = 5,
	EChatClientType__World         = 6,
	EChatClientType__WorldElite    = 7,
	EChatClientType__GuildUnion    = 8,
	EChatClientType__Mercenary     = 9,
	EChatClientType__Total         = 10,
	EChatClientType__WorldShadow   = 11,
	EChatClientType__ServerInvasionAttack = 12,
	EChatClientType__ServerInvasionDefence = 13,
	EChatClientType__Max           = 14
};


// Enum ProjectLH.EScreenWidgets
enum class FProjectLH_ProjectLH_EScreenWidgets : uint8_t
{
	EScreenWidgets__None           = 0,
	EScreenWidgets__Diss           = 1,
	EScreenWidgets__EScreenWidgets_MAX = 2
};


// Enum ProjectLH.ESkillDescIcon
enum class FProjectLH_ProjectLH_ESkillDescIcon : uint8_t
{
	ESkillDescIcon__None           = 0,
	ESkillDescIcon__NeedResource_HP = 1,
	ESkillDescIcon__NeedResource_MP = 2,
	ESkillDescIcon__NeedResource_Seal = 3,
	ESkillDescIcon__CoolTime       = 4,
	ESkillDescIcon__CastTime       = 5,
	ESkillDescIcon__TargetRange    = 6,
	ESkillDescIcon__HitRange       = 7,
	ESkillDescIcon__HitTargetCount = 8,
	ESkillDescIcon__Condition      = 9,
	ESkillDescIcon__Duration       = 10,
	ESkillDescIcon__ApplyType_End  = 11,
	ESkillDescIcon__Revival        = 12,
	ESkillDescIcon__Damage         = 13,
	ESkillDescIcon__DotDamage      = 14,
	ESkillDescIcon__LifeSteel      = 15,
	ESkillDescIcon__MpSteel        = 16,
	ESkillDescIcon__Knockback      = 17,
	ESkillDescIcon__ImmediatelyHeal = 18,
	ESkillDescIcon__DamageReflection = 19,
	ESkillDescIcon__RemoveBuff     = 20,
	ESkillDescIcon__RemoveAbnormalStatus = 21,
	ESkillDescIcon__Aggro          = 22,
	ESkillDescIcon__Shield         = 23,
	ESkillDescIcon__CoolTimeReduction = 24,
	ESkillDescIcon__Absorb         = 25,
	ESkillDescIcon__Blindness      = 26,
	ESkillDescIcon__MPPlus         = 27,
	ESkillDescIcon__MPMinus        = 28,
	ESkillDescIcon__Sufferance     = 29,
	ESkillDescIcon__SummonDuration = 30,
	ESkillDescIcon__HitAccuracy    = 31,
	ESkillDescIcon__RandomBuff     = 32,
	ESkillDescIcon__FieldBuffRange = 33,
	ESkillDescIcon__MelodyPoint    = 34,
	ESkillDescIcon__AddSunPoint    = 35,
	ESkillDescIcon__AddMoonPoint   = 36,
	ESkillDescIcon__LegendaryFighter = 37,
	ESkillDescIcon__SwapHpMp       = 38,
	ESkillDescIcon__SacrificePoint = 39,
	ESkillDescIcon__ESkillDescIcon_MAX = 40
};


// Enum ProjectLH.EDecalTargetType
enum class FProjectLH_ProjectLH_EDecalTargetType : uint8_t
{
	EDecalTargetType__Enemy        = 0,
	EDecalTargetType__Player       = 1,
	EDecalTargetType__NPC          = 2,
	EDecalTargetType__Interaction  = 3,
	EDecalTargetType__Max          = 4
};


// Enum ProjectLH.ELHCustomDepthStencil
enum class FProjectLH_ProjectLH_ELHCustomDepthStencil : uint8_t
{
	ELHCustomDepthStencil__None    = 0,
	ELHCustomDepthStencil__Outline_Player = 1,
	ELHCustomDepthStencil__Outline_Enemy = 2,
	ELHCustomDepthStencil__Outline_NPC = 3,
	ELHCustomDepthStencil__Outline_Ally = 4,
	ELHCustomDepthStencil__Outline_Aesir = 5,
	ELHCustomDepthStencil__Outline_Vanir = 6,
	ELHCustomDepthStencil__Outline_Temp = 7,
	ELHCustomDepthStencil__Max     = 8
};


// Enum ProjectLH.EPostProcess
enum class FProjectLH_ProjectLH_EPostProcess : uint8_t
{
	EPostProcess__CharacterOutLine = 0,
	EPostProcess__DarkGrow         = 1,
	EPostProcess__Max              = 2
};


// Enum ProjectLH.ERidingActionType
enum class FProjectLH_ProjectLH_ERidingActionType : uint8_t
{
	ERidingActionType__None        = 0,
	ERidingActionType__RideOnGround = 1,
	ERidingActionType__RideOnFly   = 2,
	ERidingActionType__FlyToGround = 3,
	ERidingActionType__RidingJumpSkill = 4,
	ERidingActionType__RidingDescent = 5,
	ERidingActionType__Max         = 6
};


// Enum ProjectLH.EViewerMode
enum class FProjectLH_ProjectLH_EViewerMode : uint8_t
{
	EViewerMode__Default           = 0,
	EViewerMode__Inven             = 1,
	EViewerMode__Vehicle           = 2,
	EViewerMode__Collection_Char   = 3,
	EViewerMode__Collection_Monster = 4,
	EViewerMode__Avatar            = 5,
	EViewerMode__WeaponShape       = 6,
	EViewerMode__NPCShop           = 7,
	EViewerMode__DungeonBoss       = 8,
	EViewerMode__Pet               = 9,
	EViewerMode__Max               = 10
};


// Enum ProjectLH.EChatEmotionType
enum class FProjectLH_ProjectLH_EChatEmotionType : uint8_t
{
	EChatEmotionType__None         = 0,
	EChatEmotionType__Smile        = 1,
	EChatEmotionType__Angry        = 2,
	EChatEmotionType__Surprise     = 3,
	EChatEmotionType__Cry          = 4,
	EChatEmotionType__Love         = 5,
	EChatEmotionType__EChatEmotionType_MAX = 6
};


// Enum ProjectLH.ESubTalkType
enum class FProjectLH_ProjectLH_ESubTalkType : uint8_t
{
	ESubTalkType__None             = 0,
	ESubTalkType__UserName         = 1,
	ESubTalkType__ESubTalkType_MAX = 2
};


// Enum ProjectLH.EMainTalkType
enum class FProjectLH_ProjectLH_EMainTalkType : uint8_t
{
	EMainTalkType__None            = 0,
	EMainTalkType__BattleStart     = 1,
	EMainTalkType__QuestDoing      = 2,
	EMainTalkType__QuestComplete   = 3,
	EMainTalkType__EMainTalkType_MAX = 4
};


// Enum ProjectLH.ESkillEffetType
enum class FProjectLH_ProjectLH_ESkillEffetType : uint8_t
{
	ESkillEffetType__None          = 0,
	ESkillEffetType__DrakGrow      = 1,
	ESkillEffetType__Spectrum      = 2,
	ESkillEffetType__SkillLight    = 3,
	ESkillEffetType__Fresnel       = 4,
	ESkillEffetType__ESkillEffetType_MAX = 5
};


// Enum ProjectLH.ESequenceState
enum class FProjectLH_ProjectLH_ESequenceState : uint8_t
{
	ESequenceState__None           = 0,
	ESequenceState__FadeIn         = 1,
	ESequenceState__Duration       = 2,
	ESequenceState__FadeOut        = 3,
	ESequenceState__ESequenceState_MAX = 4
};


// Enum ProjectLH.ECharacterStateHUDType
enum class FProjectLH_ProjectLH_ECharacterStateHUDType : uint8_t
{
	ECharacterStateHUDType__Normal = 0,
	ECharacterStateHUDType__Swim   = 1,
	ECharacterStateHUDType__Climb  = 2,
	ECharacterStateHUDType__Jump   = 3,
	ECharacterStateHUDType__Fall   = 4,
	ECharacterStateHUDType__Emotion = 5,
	ECharacterStateHUDType__Riding = 6,
	ECharacterStateHUDType__Flying = 7,
	ECharacterStateHUDType__Descent = 8,
	ECharacterStateHUDType__PK     = 9,
	ECharacterStateHUDType__MAX    = 10
};


// Enum ProjectLH.EVehicleOwnerType
enum class FProjectLH_ProjectLH_EVehicleOwnerType : uint8_t
{
	EVehicleOwnerType__None        = 0,
	EVehicleOwnerType__Remote      = 1,
	EVehicleOwnerType__Playable    = 2,
	EVehicleOwnerType__Max         = 3
};


// Enum ProjectLH.EChatObjectType
enum class FProjectLH_ProjectLH_EChatObjectType : uint8_t
{
	EChatObjectType__Chat          = 0,
	EChatObjectType__BroadCast     = 1,
	EChatObjectType__EChatObjectType_MAX = 2
};


// Enum ProjectLH.ECharacterSocketNames
enum class FProjectLH_ProjectLH_ECharacterSocketNames : uint8_t
{
	ECharacterSocketNames__Custom  = 0,
	ECharacterSocketNames__FX_Head = 1,
	ECharacterSocketNames__FX_Center = 2,
	ECharacterSocketNames__FX_Floor = 3,
	ECharacterSocketNames__FX_Weapon_L = 4,
	ECharacterSocketNames__FX_Weapon_R = 5,
	ECharacterSocketNames__ECharacterSocketNames_MAX = 6
};


// Enum ProjectLH.EFoliageCutShape
enum class FProjectLH_ProjectLH_EFoliageCutShape : uint8_t
{
	EFoliageCutShape__None         = 0,
	EFoliageCutShape__Fan          = 1,
	EFoliageCutShape__Box          = 2,
	EFoliageCutShape__Sphere       = 3,
	EFoliageCutShape__EFoliageCutShape_MAX = 4
};


// Enum ProjectLH.EDebugShowState
enum class FProjectLH_ProjectLH_EDebugShowState : uint8_t
{
	EDebugShowState__None          = 0,
	EDebugShowState__CharacterState = 1,
	EDebugShowState__Serial        = 2,
	EDebugShowState__HpMp          = 3,
	EDebugShowState__Location      = 4,
	EDebugShowState__Buff          = 5,
	EDebugShowState__Faction       = 6,
	EDebugShowState__NameComponentFlag = 7,
	EDebugShowState__AnimationName = 8,
	EDebugShowState__AreaClass     = 9,
	EDebugShowState__Destination   = 10,
	EDebugShowState__IndexLevelHP  = 11,
	EDebugShowState__EDebugShowState_MAX = 12
};


// Enum ProjectLH.EGoalFindStyle
enum class FProjectLH_ProjectLH_EGoalFindStyle : uint8_t
{
	EGoalFindStyle__Patrol         = 0,
	EGoalFindStyle__RunAwayFromPlayer = 1,
	EGoalFindStyle__EGoalFindStyle_MAX = 2
};


// Enum ProjectLH.ENpcAnimalState
enum class FProjectLH_ProjectLH_ENpcAnimalState : uint8_t
{
	ENpcAnimalState__Patrol        = 0,
	ENpcAnimalState__RunAwayFromPlayer = 1,
	ENpcAnimalState__FollowPlayer  = 2,
	ENpcAnimalState__ENpcAnimalState_MAX = 3
};


// Enum ProjectLH.EInvenSubTabType
enum class FProjectLH_ProjectLH_EInvenSubTabType : uint8_t
{
	EInvenSubTabType__All          = 0,
	EInvenSubTabType__WeaponAndArmour = 1,
	EInvenSubTabType__Accessary    = 2,
	EInvenSubTabType__Consume      = 3,
	EInvenSubTabType__MAX          = 4
};


// Enum ProjectLH.EOptionChangeSubTabType
enum class FProjectLH_ProjectLH_EOptionChangeSubTabType : uint8_t
{
	EOptionChangeSubTabType__All   = 0,
	EOptionChangeSubTabType__Weapon = 1,
	EOptionChangeSubTabType__Armor = 2,
	EOptionChangeSubTabType__Accessory = 3,
	EOptionChangeSubTabType__MAX   = 4
};


// Enum ProjectLH.EEnchantSubTabType
enum class FProjectLH_ProjectLH_EEnchantSubTabType : uint8_t
{
	EEnchantSubTabType__All        = 0,
	EEnchantSubTabType__Weapon     = 1,
	EEnchantSubTabType__Armor      = 2,
	EEnchantSubTabType__Accessory  = 3,
	EEnchantSubTabType__MAX        = 4
};


// Enum ProjectLH.EGameModeFlag
enum class FProjectLH_ProjectLH_EGameModeFlag : uint8_t
{
	EGameModeFlag__None            = 0,
	EGameModeFlag__Launcher        = 1,
	EGameModeFlag__Patch           = 2,
	EGameModeFlag__Login           = 3,
	EGameModeFlag__InGame          = 4,
	EGameModeFlag__EGameModeFlag_MAX = 5
};


// Enum ProjectLH.EGameModeType
enum class FProjectLH_ProjectLH_EGameModeType : uint8_t
{
	EGameModeType__None            = 0,
	EGameModeType__Login           = 1,
	EGameModeType__CharacterSelect = 2,
	EGameModeType__CharacterCreate = 3,
	EGameModeType__InGame          = 4,
	EGameModeType__EGameModeType_MAX = 5
};


// Enum ProjectLH.ESocketHolderType
enum class FProjectLH_ProjectLH_ESocketHolderType : uint8_t
{
	ESocketHolderType__Login       = 0,
	ESocketHolderType__Gate        = 1,
	ESocketHolderType__Chat        = 2,
	ESocketHolderType__Max         = 3
};


// Enum ProjectLH.EAutoMoveState
enum class FProjectLH_ProjectLH_EAutoMoveState : uint8_t
{
	EAutoMoveState__None           = 0,
	EAutoMoveState__ReturnReservation = 1,
	EAutoMoveState__Return         = 2,
	EAutoMoveState__EAutoMoveState_MAX = 3
};


// Enum ProjectLH.EVehicleWarpType
enum class FProjectLH_ProjectLH_EVehicleWarpType : uint8_t
{
	EVehicleWarpType__Normal       = 0,
	EVehicleWarpType__Dragon       = 1,
	EVehicleWarpType__High         = 2,
	EVehicleWarpType__MAX          = 3
};


// Enum ProjectLH.EObjectAction
enum class FProjectLH_ProjectLH_EObjectAction : uint8_t
{
	EObjectAction__None            = 0,
	EObjectAction__Climb           = 1,
	EObjectAction__Swim            = 2,
	EObjectAction__EObjectAction_MAX = 3
};


// Enum ProjectLH.EMoveSpeedType
enum class FProjectLH_ProjectLH_EMoveSpeedType : uint8_t
{
	EMoveSpeedType__None           = 0,
	EMoveSpeedType__Walk           = 1,
	EMoveSpeedType__Run            = 2,
	EMoveSpeedType__Climb          = 3,
	EMoveSpeedType__Swim           = 4,
	EMoveSpeedType__RidingFly      = 5,
	EMoveSpeedType__Rewind         = 6,
	EMoveSpeedType__Skill          = 7,
	EMoveSpeedType__EMoveSpeedType_MAX = 8
};


// Enum ProjectLH.EParticleRotateType
enum class FProjectLH_ProjectLH_EParticleRotateType : uint8_t
{
	EParticleRotateType__Default   = 0,
	EParticleRotateType__ForwardSkillOwner = 1,
	EParticleRotateType__EParticleRotateType_MAX = 2
};


// Enum ProjectLH.EAutoMove
enum class FProjectLH_ProjectLH_EAutoMove : uint8_t
{
	EAutoMove__None                = 0,
	EAutoMove__TargetMove_Actor    = 1,
	EAutoMove__TargetMove_Location = 2,
	EAutoMove__TargetMove_Point    = 3,
	EAutoMove__TargetMove_Follow   = 4,
	EAutoMove__TargetMove_PortalActor = 5,
	EAutoMove__TargetMove_KeepFollow = 6,
	EAutoMove__QuestMove_Actor     = 7,
	EAutoMove__QuestMove_Location  = 8,
	EAutoMove__QuestMove_BattleActor = 9,
	EAutoMove__QuestMove_BattleLocation = 10,
	EAutoMove__QuestMove_InteractionLocation = 11,
	EAutoMove__QuestMove_PortalActor = 12,
	EAutoMove__InteractionMove_Actor = 13,
	EAutoMove__SkillMove_Actor     = 14,
	EAutoMove__SkillMove_Location  = 15,
	EAutoMove__AutoBattleReturn    = 16,
	EAutoMove__SearchNpc_Location  = 17,
	EAutoMove__AutoPlay            = 18,
	EAutoMove__EAutoMove_MAX       = 19
};


// Enum ProjectLH.EHitReactionType
enum class FProjectLH_ProjectLH_EHitReactionType : uint8_t
{
	EHitReactionType__None         = 0,
	EHitReactionType__Small        = 1,
	EHitReactionType__Big          = 2,
	EHitReactionType__EHitReactionType_MAX = 3
};


// Enum ProjectLH.ERevivalSectionNames
enum class FProjectLH_ProjectLH_ERevivalSectionNames : uint8_t
{
	ERevivalSectionNames__Start    = 0,
	ERevivalSectionNames__Loop     = 1,
	ERevivalSectionNames__Recv_SkillSuccess = 2,
	ERevivalSectionNames__Recv_CashSuccess = 3,
	ERevivalSectionNames__Success  = 4,
	ERevivalSectionNames__Fail     = 5,
	ERevivalSectionNames__FailLoop = 6,
	ERevivalSectionNames__ERevivalSectionNames_MAX = 7
};


// Enum ProjectLH.ETeam
enum class FProjectLH_ProjectLH_ETeam : uint8_t
{
	ETeam__None                    = 0,
	ETeam__Enemy                   = 1,
	ETeam__Player                  = 2,
	ETeam__Other                   = 3,
	ETeam__Party                   = 4,
	ETeam__Npc                     = 5,
	ETeam__Team5                   = 6,
	ETeam__Team6                   = 7,
	ETeam__Team7                   = 8,
	ETeam__All                     = 9,
	ETeam__ETeam_MAX               = 10
};


// Enum ProjectLH.EMovementSubState
enum class FProjectLH_ProjectLH_EMovementSubState : uint8_t
{
	EMovementSubState__None        = 0,
	EMovementSubState__Pull        = 1,
	EMovementSubState__EMovementSubState_MAX = 2
};


// Enum ProjectLH.EDurationMeans
enum class FProjectLH_ProjectLH_EDurationMeans : uint8_t
{
	EDurationMeans__Duration       = 0,
	EDurationMeans__InTime         = 1,
	EDurationMeans__EDurationMeans_MAX = 2
};


// Enum ProjectLH.ECrowdControlState
enum class FProjectLH_ProjectLH_ECrowdControlState : uint8_t
{
	ECrowdControlState__None       = 0,
	ECrowdControlState__NoAction   = 1,
	ECrowdControlState__NoMove     = 2,
	ECrowdControlState__NoSkill    = 3,
	ECrowdControlState__ECrowdControlState_MAX = 4
};


// Enum ProjectLH.EItemEquipQuickSlotFailReason
enum class FProjectLH_ProjectLH_EItemEquipQuickSlotFailReason : uint8_t
{
	EItemEquipQuickSlotFailReason__None = 0,
	EItemEquipQuickSlotFailReason__InValidIndex = 1,
	EItemEquipQuickSlotFailReason__NotItemType = 2,
	EItemEquipQuickSlotFailReason__Lock = 3,
	EItemEquipQuickSlotFailReason__EItemEquipQuickSlotFailReason_MAX = 4
};


// Enum ProjectLH.ESkillEquipFailReason
enum class FProjectLH_ProjectLH_ESkillEquipFailReason : uint8_t
{
	ESkillEquipFailReason__None    = 0,
	ESkillEquipFailReason__InValidSkillIndex = 1,
	ESkillEquipFailReason__NotEquipPassiveSkill = 2,
	ESkillEquipFailReason__NotEquipComboSkill = 3,
	ESkillEquipFailReason__NotEquipClassType = 4,
	ESkillEquipFailReason__NotEquipConditionSkill = 5,
	ESkillEquipFailReason__NotLearnSkill = 6,
	ESkillEquipFailReason__NeedPlayerLevel = 7,
	ESkillEquipFailReason__NotMakeSkill = 8,
	ESkillEquipFailReason__ConditionalSkill = 9,
	ESkillEquipFailReason__NotEquipSwapSkill = 10,
	ESkillEquipFailReason__ESkillEquipFailReason_MAX = 11
};


// Enum ProjectLH.ERotationType
enum class FProjectLH_ProjectLH_ERotationType : uint8_t
{
	ERotationType__ImmediatelyRotation = 0,
	ERotationType__DesiredRotation = 1,
	ERotationType__ERotationType_MAX = 2
};


// Enum ProjectLH.ETargetFailReason
enum class FProjectLH_ProjectLH_ETargetFailReason : uint8_t
{
	ETargetFailReason__None        = 0,
	ETargetFailReason__ErrorData   = 1,
	ETargetFailReason__NotValidTarget = 2,
	ETargetFailReason__TargetIsDead = 3,
	ETargetFailReason__NotRevivalState = 4,
	ETargetFailReason__IAmDead     = 5,
	ETargetFailReason__CanNotSee   = 6,
	ETargetFailReason__TooFar      = 7,
	ETargetFailReason__TooFarZ     = 8,
	ETargetFailReason__TooFarNavPath = 9,
	ETargetFailReason__NotTargetable = 10,
	ETargetFailReason__InvalidLocationRelation = 11,
	ETargetFailReason__ETargetFailReason_MAX = 12
};


// Enum ProjectLH.EInstantMsgType
enum class FProjectLH_ProjectLH_EInstantMsgType : uint8_t
{
	EInstantMsgType__None          = 0,
	EInstantMsgType__TargetFail    = 1,
	EInstantMsgType__SkillFail     = 2,
	EInstantMsgType__EInstantMsgType_MAX = 3
};


// Enum ProjectLH.EInstantMsgPlayType
enum class FProjectLH_ProjectLH_EInstantMsgPlayType : uint8_t
{
	EInstantMsgPlayType__Once      = 0,
	EInstantMsgPlayType__Repeat    = 1,
	EInstantMsgPlayType__EInstantMsgPlayType_MAX = 2
};


// Enum ProjectLH.ESkillFailReason
enum class FProjectLH_ProjectLH_ESkillFailReason : uint8_t
{
	ESkillFailReason__None         = 0,
	ESkillFailReason__ErrorCharacter = 1,
	ESkillFailReason__ErrorSealCharacter = 2,
	ESkillFailReason__ErrorSkill   = 3,
	ESkillFailReason__ErrorNotActiveSkill = 4,
	ESkillFailReason__NotPlayer    = 5,
	ESkillFailReason__NotAttackable = 6,
	ESkillFailReason__NotSkillable = 7,
	ESkillFailReason__CharacterBeyondSkill = 8,
	ESkillFailReason__NeedMoreMP   = 9,
	ESkillFailReason__NeedMoreHP   = 10,
	ESkillFailReason__AlreadyActive = 11,
	ESkillFailReason__NotReadySkillCool = 12,
	ESkillFailReason__NotReadyHitCondition = 13,
	ESkillFailReason__NotReadyHitCondition_AlreadyBuff = 14,
	ESkillFailReason__NotFoundTarget = 15,
	ESkillFailReason__CanNotTargeted = 16,
	ESkillFailReason__InVillage    = 17,
	ESkillFailReason__InVillageBaseAttack = 18,
	ESkillFailReason__TargetInVillage = 19,
	ESkillFailReason__NotEnemy     = 20,
	ESkillFailReason__InSafeZone   = 21,
	ESkillFailReason__TargetDie    = 22,
	ESkillFailReason__NeedMoreSeal = 23,
	ESkillFailReason__NoWeapon     = 24,
	ESkillFailReason__NotMatchWeapon = 25,
	ESkillFailReason__NotUseWeapon = 26,
	ESkillFailReason__CanNotSwimmingTarget = 27,
	ESkillFailReason__CanNotClimingTarget = 28,
	ESkillFailReason__NotAvailableLocation = 29,
	ESkillFailReason__NotAvailableDashLocation = 30,
	ESkillFailReason__RideFlying   = 31,
	ESkillFailReason__CanNotReachTarget = 32,
	ESkillFailReason__NotFriends   = 33,
	ESkillFailReason__QualifierNotWarTime = 34,
	ESkillFailReason__NeedMoreMelody = 35,
	ESkillFailReason__NotReadyExtraDelayTime_ClientOnly = 36,
	ESkillFailReason__ESkillFailReason_MAX = 37
};


// Enum ProjectLH.ESkillTargetStyle
enum class FProjectLH_ProjectLH_ESkillTargetStyle : uint8_t
{
	ESkillTargetStyle__Default     = 0,
	ESkillTargetStyle__Revival     = 1,
	ESkillTargetStyle__RemoveDebuff = 2,
	ESkillTargetStyle__FriendHeal  = 3,
	ESkillTargetStyle__FriendMove  = 4,
	ESkillTargetStyle__MeOrTarget  = 5,
	ESkillTargetStyle__Friend      = 6,
	ESkillTargetStyle__FriendHealTarget = 7,
	ESkillTargetStyle__ESkillTargetStyle_MAX = 8
};


// Enum ProjectLH.ESkillSubState
enum class FProjectLH_ProjectLH_ESkillSubState : uint8_t
{
	ESkillSubState__None           = 0,
	ESkillSubState__Casting        = 1,
	ESkillSubState__Active         = 2,
	ESkillSubState__Channeling     = 3,
	ESkillSubState__ESkillSubState_MAX = 4
};


// Enum ProjectLH.EInteractMotionType
enum class FProjectLH_ProjectLH_EInteractMotionType : uint8_t
{
	EInteractMotionType__None      = 0,
	EInteractMotionType__Sit_Gathering = 1,
	EInteractMotionType__Water_Gathering = 2,
	EInteractMotionType__WoodCutting = 3,
	EInteractMotionType__Mining    = 4,
	EInteractMotionType__Standing_Gathering = 5,
	EInteractMotionType__ViewPoint = 6,
	EInteractMotionType__Absorption = 7,
	EInteractMotionType__RealmwarAbsorption = 8,
	EInteractMotionType__RealmwarExhaust = 9,
	EInteractMotionType__Pray      = 10,
	EInteractMotionType__EInteractMotionType_MAX = 11
};


// Enum ProjectLH.EPlayerSubAction
enum class FProjectLH_ProjectLH_EPlayerSubAction : uint8_t
{
	EPlayerSubAction__None         = 0,
	EPlayerSubAction__Interaction  = 1,
	EPlayerSubAction__Npc          = 2,
	EPlayerSubAction__BuffObject   = 3,
	EPlayerSubAction__EPlayerSubAction_MAX = 4
};


// Enum ProjectLH.EPlayerActionMode
enum class FProjectLH_ProjectLH_EPlayerActionMode : uint8_t
{
	EPlayerActionMode__Normal      = 0,
	EPlayerActionMode__Battle      = 1,
	EPlayerActionMode__Battle_Skill = 2,
	EPlayerActionMode__WarMode     = 3,
	EPlayerActionMode__MAX         = 4
};


// Enum ProjectLH.EPetState
enum class FProjectLH_ProjectLH_EPetState : uint8_t
{
	EPetState__Idle                = 0,
	EPetState__Move                = 1,
	EPetState__StartInteraction    = 2,
	EPetState__Work                = 3,
	EPetState__EndInteraction      = 4,
	EPetState__Disappear           = 5,
	EPetState__ActiveSkill         = 6,
	EPetState__EPetState_MAX       = 7
};


// Enum ProjectLH.EGameState
enum class FProjectLH_ProjectLH_EGameState : uint8_t
{
	EGameState__None               = 0,
	EGameState__BeginChapter       = 1,
	EGameState__StartWorks         = 2,
	EGameState__GameDefualt        = 3,
	EGameState__CharViewer         = 4,
	EGameState__WorldMap           = 5,
	EGameState__PlayerDie          = 6,
	EGameState__Checkpoint         = 7,
	EGameState__ObserverMode       = 8,
	EGameState__SealedStoneViewer  = 9,
	EGameState__SkillViewer        = 10,
	EGameState__ProductionViewer   = 11,
	EGameState__Warp               = 12,
	EGameState__RandomBoxAvatar    = 13,
	EGameState__ImprintOption      = 14,
	EGameState__RandomBoxVehicle   = 15,
	EGameState__RandomBoxWeapon    = 16,
	EGameState__NPCShopViewer      = 17,
	EGameState__AlchemyViewer      = 18,
	EGameState__RandomBoxPet       = 19,
	EGameState__EGameState_MAX     = 20
};


// Enum ProjectLH.ECharacterState
enum class FProjectLH_ProjectLH_ECharacterState : uint8_t
{
	ECharacterState__None          = 0,
	ECharacterState__Moveable      = 1,
	ECharacterState__Jump          = 2,
	ECharacterState__Jump_End_Big  = 3,
	ECharacterState__Skill         = 4,
	ECharacterState__Hit_Reaction  = 5,
	ECharacterState__Climb_Begin   = 6,
	ECharacterState__Climb         = 7,
	ECharacterState__Climb_End     = 8,
	ECharacterState__Climb_Jump    = 9,
	ECharacterState__Climb_Action  = 10,
	ECharacterState__Swim          = 11,
	ECharacterState__Swim_Action   = 12,
	ECharacterState__Swim_Interaction = 13,
	ECharacterState__Die           = 14,
	ECharacterState__Die_End       = 15,
	ECharacterState__Action        = 16,
	ECharacterState__Interaction   = 17,
	ECharacterState__Interaction_End = 18,
	ECharacterState__Stun          = 19,
	ECharacterState__KnockDown     = 20,
	ECharacterState__Revival       = 21,
	ECharacterState__Rewind        = 22,
	ECharacterState__Vehicle       = 23,
	ECharacterState__BattleVehicle = 24,
	ECharacterState__BattleVehicle_Skill = 25,
	ECharacterState__BattleVehicle_Jump = 26,
	ECharacterState__CinematicWalk = 27,
	ECharacterState__TalkReaction  = 28,
	ECharacterState__Warp          = 29,
	ECharacterState__WarpEnd       = 30,
	ECharacterState__WarpClient    = 31,
	ECharacterState__WarpFly       = 32,
	ECharacterState__WarpFlyEnd    = 33,
	ECharacterState__Max_CharacterState = 34,
	ECharacterState__Jump_Falling  = 35,
	ECharacterState__Jump_Falling_Climb = 36,
	ECharacterState__Climb_Start   = 37,
	ECharacterState__ECharacterState_MAX = 38
};


// Enum ProjectLH.EAttendanceRewardType
enum class FProjectLH_ProjectLH_EAttendanceRewardType : uint8_t
{
	EAttendanceRewardType__Normal  = 0,
	EAttendanceRewardType__LastDay = 1,
	EAttendanceRewardType__NormalRecive = 2,
	EAttendanceRewardType__LastDayRecive = 3,
	EAttendanceRewardType__Immediately = 4,
	EAttendanceRewardType__EAttendanceRewardType_MAX = 5
};


// Enum ProjectLH.ERangeAndGradeBuffGradeType
enum class FProjectLH_ProjectLH_ERangeAndGradeBuffGradeType : uint8_t
{
	ERangeAndGradeBuffGradeType__Normal = 0,
	ERangeAndGradeBuffGradeType__Hero = 1,
	ERangeAndGradeBuffGradeType__Legend = 2,
	ERangeAndGradeBuffGradeType__Max = 3
};


// Enum ProjectLH.EExchangeItemContainer_ItemDescType
enum class FProjectLH_ProjectLH_EExchangeItemContainer_ItemDescType : uint8_t
{
	EExchangeItemContainer_ItemDescType__None = 0,
	EExchangeItemContainer_ItemDescType__ItemStatus = 1,
	EExchangeItemContainer_ItemDescType__SellCount = 2,
	EExchangeItemContainer_ItemDescType__EExchangeItemContainer_MAX = 3
};


// Enum ProjectLH.EExchangeItemContainer_WaitingSaleUIType
enum class FProjectLH_ProjectLH_EExchangeItemContainer_WaitingSaleUIType : uint8_t
{
	EExchangeItemContainer_WaitingSaleUIType__None = 0,
	EExchangeItemContainer_WaitingSaleUIType__WaitingRegist = 1,
	EExchangeItemContainer_WaitingSaleUIType__RemainTime = 2,
	EExchangeItemContainer_WaitingSaleUIType__Max = 3
};


// Enum ProjectLH.EExchangeUI_Category_Right
enum class FProjectLH_ProjectLH_EExchangeUI_Category_Right : uint8_t
{
	EExchangeUI_Category_Right__None = 0,
	EExchangeUI_Category_Right__TotalPrice = 1,
	EExchangeUI_Category_Right__SalesList = 2,
	EExchangeUI_Category_Right__Waiting = 3,
	EExchangeUI_Category_Right__Expiration = 4,
	EExchangeUI_Category_Right__SellComplete = 5,
	EExchangeUI_Category_Right__Max = 6
};


// Enum ProjectLH.EExchangeUI_Category
enum class FProjectLH_ProjectLH_EExchangeUI_Category : uint8_t
{
	EExchangeUI_Category__ItemInfo = 0,
	EExchangeUI_Category__PricePerUnit = 1,
	EExchangeUI_Category__MinPrice = 2,
	EExchangeUI_Category__TotalPrice = 3,
	EExchangeUI_Category__SalesList = 4,
	EExchangeUI_Category__Sell     = 5,
	EExchangeUI_Category__Max      = 6
};


// Enum ProjectLH.EExchangeUI_Category_Mid
enum class FProjectLH_ProjectLH_EExchangeUI_Category_Mid : uint8_t
{
	EExchangeUI_Category_Mid__None = 0,
	EExchangeUI_Category_Mid__PricePerUnit = 1,
	EExchangeUI_Category_Mid__MinPrice = 2,
	EExchangeUI_Category_Mid__Option = 3,
	EExchangeUI_Category_Mid__Max  = 4
};


// Enum ProjectLH.EExchangeItemContainer_PriceType
enum class FProjectLH_ProjectLH_EExchangeItemContainer_PriceType : uint8_t
{
	EExchangeItemContainer_PriceType__Price = 0,
	EExchangeItemContainer_PriceType__PricePerUnit = 1,
	EExchangeItemContainer_PriceType__MinPrice = 2,
	EExchangeItemContainer_PriceType__CalcPrice = 3,
	EExchangeItemContainer_PriceType__TotalCalcPrice = 4,
	EExchangeItemContainer_PriceType__TotalPrice = 5,
	EExchangeItemContainer_PriceType__EExchangeItemContainer_MAX = 6
};


// Enum ProjectLH.EExchangeUI_Main_State
enum class FProjectLH_ProjectLH_EExchangeUI_Main_State : uint8_t
{
	EExchangeUI_Main_State__Buy    = 0,
	EExchangeUI_Main_State__Sell   = 1,
	EExchangeUI_Main_State__Histroy = 2,
	EExchangeUI_Main_State__EExchangeUI_Main_MAX = 3
};


// Enum ProjectLH.ELHGameModeLoadState
enum class FProjectLH_ProjectLH_ELHGameModeLoadState : uint8_t
{
	ELHGameModeLoadState__Traveling = 0,
	ELHGameModeLoadState__CollectingPackage = 1,
	ELHGameModeLoadState__AsyncLoading = 2,
	ELHGameModeLoadState__Loaded   = 3,
	ELHGameModeLoadState__ELHGameModeLoadState_MAX = 4
};


// Enum ProjectLH.ELHAsyncLoadType
enum class FProjectLH_ProjectLH_ELHAsyncLoadType : uint8_t
{
	ELHAsyncLoadType__Asset        = 0,
	ELHAsyncLoadType__Package      = 1,
	ELHAsyncLoadType__ELHAsyncLoadType_MAX = 2
};


// Enum ProjectLH.EGuildBattlefieldAvailableParticipationRegister
enum class FProjectLH_ProjectLH_EGuildBattlefieldAvailableParticipationRegister : uint8_t
{
	EGuildBattlefieldAvailableParticipationRegister__Available = 0,
	EGuildBattlefieldAvailableParticipationRegister__NotAvailable_Table = 1,
	EGuildBattlefieldAvailableParticipationRegister__NotAvailable_State = 2,
	EGuildBattlefieldAvailableParticipationRegister__NotAvailable_GuildMemberCount = 3,
	EGuildBattlefieldAvailableParticipationRegister__NotAvailable_AlreadyOccupyPlayer = 4,
	EGuildBattlefieldAvailableParticipationRegister__NotAvailable_GuildJoinTime = 5,
	EGuildBattlefieldAvailableParticipationRegister__EGuildBattlefieldAvailableParticipationRegister_MAX = 6
};


// Enum ProjectLH.EGuildBattlefieldBattleStatus
enum class FProjectLH_ProjectLH_EGuildBattlefieldBattleStatus : uint8_t
{
	EGuildBattlefieldBattleStatus__None = 0,
	EGuildBattlefieldBattleStatus__Init = 1,
	EGuildBattlefieldBattleStatus__MapEntry = 2,
	EGuildBattlefieldBattleStatus__BattleReady = 3,
	EGuildBattlefieldBattleStatus__BattleStart = 4,
	EGuildBattlefieldBattleStatus__BattleEnd = 5,
	EGuildBattlefieldBattleStatus__CreateObject = 6,
	EGuildBattlefieldBattleStatus__InteractionObject = 7,
	EGuildBattlefieldBattleStatus__Max = 8
};


// Enum ProjectLH.EGuildDungeonState
enum class FProjectLH_ProjectLH_EGuildDungeonState : uint8_t
{
	EGuildDungeonState__Available  = 0,
	EGuildDungeonState__LimitGuildLevel = 1,
	EGuildDungeonState__AllClear   = 2,
	EGuildDungeonState__AllClear_NotTable = 3,
	EGuildDungeonState__DungeonFailed = 4,
	EGuildDungeonState__ReadyForNextPhase = 5,
	EGuildDungeonState__NotOpenTime = 6,
	EGuildDungeonState__EGuildDungeonState_MAX = 7
};


// Enum ProjectLH.EFreeForAllWaitingProclaimwarState
enum class FProjectLH_ProjectLH_EFreeForAllWaitingProclaimwarState : uint8_t
{
	EFreeForAllWaitingProclaimwarState__None = 0,
	EFreeForAllWaitingProclaimwarState__MaxCount = 1,
	EFreeForAllWaitingProclaimwarState__Alliance = 2,
	EFreeForAllWaitingProclaimwarState__EFreeForAllWaitingProclaimwarState_MAX = 3
};


// Enum ProjectLH.EGuildStrongholdProclaimwarAvailableState
enum class FProjectLH_ProjectLH_EGuildStrongholdProclaimwarAvailableState : uint8_t
{
	EGuildStrongholdProclaimwarAvailableState__Success = 0,
	EGuildStrongholdProclaimwarAvailableState__UnKownError = 1,
	EGuildStrongholdProclaimwarAvailableState__NotAvailableState_BeginBattle = 2,
	EGuildStrongholdProclaimwarAvailableState__NotAvailableState_Protecting = 3,
	EGuildStrongholdProclaimwarAvailableState__HasStronghold = 4,
	EGuildStrongholdProclaimwarAvailableState__AllianceStronghold = 5,
	EGuildStrongholdProclaimwarAvailableState__LimitGuildLevel = 6,
	EGuildStrongholdProclaimwarAvailableState__AvailableProclaimwarCount = 7,
	EGuildStrongholdProclaimwarAvailableState__DisAvailableProclaimwar = 8,
	EGuildStrongholdProclaimwarAvailableState__MyGuildStronghold = 9,
	EGuildStrongholdProclaimwarAvailableState__AttackerGuild = 10,
	EGuildStrongholdProclaimwarAvailableState__EmptyStrongholdHasStronghold = 11,
	EGuildStrongholdProclaimwarAvailableState__NotAvailableState_MyStrongholdProtecting = 12,
	EGuildStrongholdProclaimwarAvailableState__FreeForAllMaxAttackerGuildCount = 13,
	EGuildStrongholdProclaimwarAvailableState__AttackerGuildAlliance = 14,
	EGuildStrongholdProclaimwarAvailableState__EGuildStrongholdProclaimwarAvailableState_MAX = 15
};


// Enum ProjectLH.EGuildStrongholdBattleState
enum class FProjectLH_ProjectLH_EGuildStrongholdBattleState : uint8_t
{
	EGuildStrongholdBattleState__None = 0,
	EGuildStrongholdBattleState__ProclaimWar = 1,
	EGuildStrongholdBattleState__BattleStart = 2,
	EGuildStrongholdBattleState__FlagDestroy = 3,
	EGuildStrongholdBattleState__GuardKill = 4,
	EGuildStrongholdBattleState__FlagInteract = 5,
	EGuildStrongholdBattleState__BattleEnd = 6,
	EGuildStrongholdBattleState__EGuildStrongholdBattleState_MAX = 7
};


// Enum ProjectLH.ELHWidgetDataRequestState
enum class FProjectLH_ProjectLH_ELHWidgetDataRequestState : uint8_t
{
	ELHWidgetDataRequestState__None = 0,
	ELHWidgetDataRequestState__Requested = 1,
	ELHWidgetDataRequestState__Completed = 2,
	ELHWidgetDataRequestState__ELHWidgetDataRequestState_MAX = 3
};


// Enum ProjectLH.EUILayer
enum class FProjectLH_ProjectLH_EUILayer : uint8_t
{
	EUILayer__None                 = 0,
	EUILayer__World                = 1,
	EUILayer__Scene                = 2,
	EUILayer__Popup                = 3,
	EUILayer__Event                = 4,
	EUILayer__ContentsMsgBox       = 5,
	EUILayer__TutorialPopup        = 6,
	EUILayer__Event_Tutorial       = 7,
	EUILayer__TimeMessageBox       = 8,
	EUILayer__ChatNotice           = 9,
	EUILayer__WaitingWidget        = 10,
	EUILayer__MessageBox           = 11,
	EUILayer__ToolTip              = 12,
	EUILayer__Notice               = 13,
	EUILayer__Webview              = 14,
	EUILayer__Top                  = 15,
	EUILayer__OvertopMsgBox        = 16,
	EUILayer__Dev                  = 17,
	EUILayer__Loading              = 18,
	EUILayer__SystemAlerat         = 19,
	EUILayer__Max                  = 20
};


// Enum ProjectLH.EUIState
enum class FProjectLH_ProjectLH_EUIState : uint8_t
{
	EUIState__None                 = 0,
	EUIState__Opened               = 1,
	EUIState__Closed               = 2,
	EUIState__Max                  = 3
};


// Enum ProjectLH.EUIHideState
enum class FProjectLH_ProjectLH_EUIHideState : uint8_t
{
	EUIHideState__AllHide          = 0,
	EUIHideState__AllWidgetHide    = 1,
	EUIHideState__LeftTopHide      = 2,
	EUIHideState__LeftDownHide     = 3,
	EUIHideState__RightTopHide     = 4,
	EUIHideState__RightDownHide    = 5,
	EUIHideState__EUIHideState_MAX = 6
};


// Enum ProjectLH.EUIValueStyle
enum class FProjectLH_ProjectLH_EUIValueStyle : uint8_t
{
	EUIValueStyle__None            = 0,
	EUIValueStyle__Percent         = 1,
	EUIValueStyle__Second          = 2,
	EUIValueStyle__Range           = 3,
	EUIValueStyle__Decimal         = 4,
	EUIValueStyle__MaxPercent      = 5,
	EUIValueStyle__EUIValueStyle_MAX = 6
};


// Enum ProjectLH.EFuncState
enum class FProjectLH_ProjectLH_EFuncState : uint8_t
{
	EFuncState__Begin              = 0,
	EFuncState__State              = 1,
	EFuncState__End                = 2,
	EFuncState__EFuncState_MAX     = 3
};


// Enum ProjectLH.EUIMsgBoxType
enum class FProjectLH_ProjectLH_EUIMsgBoxType : uint8_t
{
	EUIMsgBoxType__None            = 0,
	EUIMsgBoxType__Basic           = 1,
	EUIMsgBoxType__MoveTo          = 2,
	EUIMsgBoxType__Buy             = 3,
	EUIMsgBoxType__MultiBuy        = 4,
	EUIMsgBoxType__Resource        = 5,
	EUIMsgBoxType__Rewards         = 6,
	EUIMsgBoxType__Buy_ShowItem    = 7,
	EUIMsgBoxType__QuestMission    = 8,
	EUIMsgBoxType__Refresh         = 9,
	EUIMsgBoxType__AlertDisable    = 10,
	EUIMsgBoxType__DungeonSystem   = 11,
	EUIMsgBoxType__ContentsBasic   = 12,
	EUIMsgBoxType__OvertopBasic    = 13,
	EUIMsgBoxType__Patch           = 14,
	EUIMsgBoxType__Escape          = 15,
	EUIMsgBoxType__BasicWorldDungeon = 16,
	EUIMsgBoxType__SystemAlerat    = 17,
	EUIMsgBoxType__CheckAutoCompose = 18,
	EUIMsgBoxType__ShowBuffConfirm = 19,
	EUIMsgBoxType__ResourceChange  = 20,
	EUIMsgBoxType__Charge          = 21,
	EUIMsgBoxType__AgeLimit        = 22,
	EUIMsgBoxType__EUIMsgBoxType_MAX = 23
};


// Enum ProjectLH.EInformGuideCollisionType
enum class FProjectLH_ProjectLH_EInformGuideCollisionType : uint8_t
{
	EInformGuideCollisionType__BOX = 0,
	EInformGuideCollisionType__SPHERE = 1,
	EInformGuideCollisionType__EInformGuideCollisionType_MAX = 2
};


// Enum ProjectLH.EInGamePlayerState
enum class FProjectLH_ProjectLH_EInGamePlayerState : uint8_t
{
	EInGamePlayerState__PlayerDead = 0,
	EInGamePlayerState__NotEnoughHP = 1,
	EInGamePlayerState__NotEnoughPotion = 2,
	EInGamePlayerState__NotEnoughInventory = 3,
	EInGamePlayerState__PlayerAttacked = 4,
	EInGamePlayerState__MAX        = 5
};


// Enum ProjectLH.EInGameEventMarker
enum class FProjectLH_ProjectLH_EInGameEventMarker : uint8_t
{
	EInGameEventMarker__HotTimeEvent = 0,
	EInGameEventMarker__WorldBoss  = 1,
	EInGameEventMarker__Realmwar   = 2,
	EInGameEventMarker__VoidSummoner = 3,
	EInGameEventMarker__WorldDungeonFinalBoss = 4,
	EInGameEventMarker__WorldDungeonOpen = 5,
	EInGameEventMarker__WorldDungeonResult = 6,
	EInGameEventMarker__GuildStrongholdBattle = 7,
	EInGameEventMarker__VoidSummonerPortal = 8,
	EInGameEventMarker__CastleWar  = 9,
	EInGameEventMarker__ShadowDungeon = 10,
	EInGameEventMarker__ChampionsDungeonOpen = 11,
	EInGameEventMarker__GuildBattlefield = 12,
	EInGameEventMarker__WorldShadowDungeon = 13,
	EInGameEventMarker__ServerInvasion = 14,
	EInGameEventMarker__ServerInvasionBanned = 15,
	EInGameEventMarker__MAX        = 16
};


// Enum ProjectLH.EBlockInputFlag
enum class FProjectLH_ProjectLH_EBlockInputFlag : uint8_t
{
	EBlockInputFlag__UICovered     = 0,
	EBlockInputFlag__MsgBoxOpend   = 1,
	EBlockInputFlag__TouchMask     = 2,
	EBlockInputFlag__Warp          = 3,
	EBlockInputFlag__MapMove       = 4,
	EBlockInputFlag__AutoTask      = 5,
	EBlockInputFlag__BeginChapter  = 6,
	EBlockInputFlag__RealmwarEnd   = 7,
	EBlockInputFlag__Cinematic     = 8,
	EBlockInputFlag__LevelSequence = 9,
	EBlockInputFlag__InputSetting  = 10,
	EBlockInputFlag__WorldMap      = 11,
	EBlockInputFlag__Disconnected  = 12,
	EBlockInputFlag__PIPMode       = 13,
	EBlockInputFlag__Popup         = 14,
	EBlockInputFlag__WarpRequest   = 15,
	EBlockInputFlag__EBlockInputFlag_MAX = 16
};


// Enum ProjectLH.EUIMsgBoxBtnType
enum class FProjectLH_ProjectLH_EUIMsgBoxBtnType : uint8_t
{
	EUIMsgBoxBtnType__OkOrCancel   = 0,
	EUIMsgBoxBtnType__Confirm      = 1,
	EUIMsgBoxBtnType__LeftOrRight  = 2,
	EUIMsgBoxBtnType__ScreenButton = 3,
	EUIMsgBoxBtnType__ThreeButton  = 4,
	EUIMsgBoxBtnType__None         = 5,
	EUIMsgBoxBtnType__OnlyClose    = 6,
	EUIMsgBoxBtnType__EUIMsgBoxBtnType_MAX = 7
};


// Enum ProjectLH.EInteractionFunctionType
enum class FProjectLH_ProjectLH_EInteractionFunctionType : uint8_t
{
	EInteractionFunctionType__None = 0,
	EInteractionFunctionType__Wait = 1,
	EInteractionFunctionType__Start = 2,
	EInteractionFunctionType__Finish = 3,
	EInteractionFunctionType__Animnotify_InteractAction = 4,
	EInteractionFunctionType__EInteractionFunctionType_MAX = 5
};


// Enum ProjectLH.EItemEnchantStoneType
enum class FProjectLH_ProjectLH_EItemEnchantStoneType : uint8_t
{
	EItemEnchantStoneType__Normal  = 0,
	EItemEnchantStoneType__Bless   = 1,
	EItemEnchantStoneType__Curse   = 2,
	EItemEnchantStoneType__Odin    = 3,
	EItemEnchantStoneType__Thor    = 4,
	EItemEnchantStoneType__Max     = 5
};


// Enum ProjectLH.EKakao_BreakAway_Log_Type
enum class FProjectLH_ProjectLH_EKakao_BreakAway_Log_Type : uint8_t
{
	EKakao_BreakAway_Log_Type__Splash = 0,
	EKakao_BreakAway_Log_Type__Main_Touch = 1,
	EKakao_BreakAway_Log_Type__Main_Login = 2,
	EKakao_BreakAway_Log_Type__Main_CheckDownloadDlc = 3,
	EKakao_BreakAway_Log_Type__Main_StartDownloadDlc = 4,
	EKakao_BreakAway_Log_Type__Main_CompleteDownloadDlc = 5,
	EKakao_BreakAway_Log_Type__CreateCharacter_SelectClass = 6,
	EKakao_BreakAway_Log_Type__CreateCharacter_Customize = 7,
	EKakao_BreakAway_Log_Type__CreateCharacter_CharacterName = 8,
	EKakao_BreakAway_Log_Type__Loading_EnterTutorial = 9,
	EKakao_BreakAway_Log_Type__Tutorial_StartCutScene = 10,
	EKakao_BreakAway_Log_Type__Tutorial_NormalAttack = 11,
	EKakao_BreakAway_Log_Type__Tutorial_SkillIcon = 12,
	EKakao_BreakAway_Log_Type__Tutorial_DragSkillSlot = 13,
	EKakao_BreakAway_Log_Type__Tutorial_ManualTarget = 14,
	EKakao_BreakAway_Log_Type__Tutorial_EndCutScene = 15,
	EKakao_BreakAway_Log_Type__Loading_EnterMidgard = 16,
	EKakao_BreakAway_Log_Type__EKakao_BreakAway_Log_MAX = 17
};


// Enum ProjectLH.EKakaoLogAttribute
enum class FProjectLH_ProjectLH_EKakaoLogAttribute : uint8_t
{
	EKakaoLogAttribute__None       = 0,
	EKakaoLogAttribute__ItemType   = 1,
	EKakaoLogAttribute__EKakaoLogAttribute_MAX = 2
};


// Enum ProjectLH.EUIName
enum class FProjectLH_ProjectLH_EUIName
{
	EUIName__None                  = 0,
	EUIName__LHWidget_Splash       = 1,
	EUIName__LHWidget_Black        = 2,
	EUIName__LHWidget_BlackInOut   = 3,
	EUIName__LHWidget_GameOption   = 4,
	EUIName__LHWidget_PCKey        = 5,
	EUIName__LHWidget_PCKeyAllList = 6,
	EUIName__LHWidget_PCKeySetting = 7,
	EUIName__LHWidget_TouchMask    = 8,
	EUIName__LHWidget_TouchMask_KeyGuide = 9,
	EUIName__LHWidget_ContentsTutorial = 10,
	EUIName__LHWidget_Fade         = 11,
	EUIName__LHWidget_SinematigText = 12,
	EUIName__LHWidget_ClickEffect  = 13,
	EUIName__LHWidget_LetterBox    = 14,
	EUIName__LHWidget_ServerList   = 15,
	EUIName__LHWidget_CheatCommand = 16,
	EUIName__LHWidget_Notice       = 17,
	EUIName__LHWidget_GameRating   = 18,
	EUIName__LHWidget_CultureSelect = 19,
	EUIName__LHWidget_AGW          = 20,
	EUIName__CheckPermissionPopup  = 21,
	EUIName__LHWidget_Patch        = 22,
	EUIName__LHWidget_MiniGame     = 23,
	EUIName__LHWidget_LogIn        = 24,
	EUIName__LHWidget_Loading      = 25,
	EUIName__Terms                 = 26,
	EUIName__TermsAgreePopup       = 27,
	EUIName__EventPopup            = 28,
	EUIName__UserNameCreatePopup   = 29,
	EUIName__LHWidget_LoginServiceSelect = 30,
	EUIName__LHWidget_SecuritySettings_Popup = 31,
	EUIName__LHWidget_KakaoCertification_Popup = 32,
	EUIName__LHWidget_SecondPassward_Popup = 33,
	EUIName__LHWidget_SecondPassward_FailPopup = 34,
	EUIName__LHWidget_PersonalInformation_Popup = 35,
	EUIName__LHWidget_SecondPassward_EmailPopup = 36,
	EUIName__LHWidget_CharacterCreate = 37,
	EUIName__LHWidget_CharacterClassSelect = 38,
	EUIName__LHWidget_CharacterClassSelect_Left = 39,
	EUIName__LHWidget_CharacterClassInfo = 40,
	EUIName__LHWidget_CharacterCustomizing = 41,
	EUIName__LHWidget_CharacterCreatePopup = 42,
	EUIName__LHWidget_CharacterDeletePopup = 43,
	EUIName__LHWidget_ServerSelect = 44,
	EUIName__LHWidget_LoginWatingPopup = 45,
	EUIName__LHWidget_MsgBoxLogin_BlockPlayer = 46,
	EUIName__LHWidget_ReservationNoticePopup = 47,
	EUIName__LHWidget_ServerIntegrated_Popup = 48,
	EUIName__LHWidget_ServerIntegrated_NoticePopup = 49,
	EUIName__MainLobby             = 50,
	EUIName__LHWidget_InGame       = 51,
	EUIName__LHWidget_InGame_Target = 52,
	EUIName__LHWidget_ItemDrop_List = 53,
	EUIName__LHWidget_ItemDrop_Reward = 54,
	EUIName__LHWidget_Damage_List  = 55,
	EUIName__LHWidget_LevelUp      = 56,
	EUIName__LHWidget_Revival      = 57,
	EUIName__LHWidget_MapMove      = 58,
	EUIName__LHWidget_UnlockMessage = 59,
	EUIName__LHWidget_PointSave    = 60,
	EUIName__LHWidget_PointSaveMemo = 61,
	EUIName__LHWidget_Waiting      = 62,
	EUIName__LHWidget_Skip         = 63,
	EUIName__LHWidget_MoviePlayer  = 64,
	EUIName__LHWidget_MoneyTooltip = 65,
	EUIName__LHWidget_SecessionPopup = 66,
	EUIName__LHWidget_BuffTooltip  = 67,
	EUIName__LHWidget_BuffEnd_Popup = 68,
	EUIName__LHWidget_ExcludeClass_Popup = 69,
	EUIName__LHWidget_MessageBoxBasic = 70,
	EUIName__LHWidget_MessageBoxUserName = 71,
	EUIName__LHWidget_MessageBoxBuy = 72,
	EUIName__LHWidget_MsgBoxMultiBuy = 73,
	EUIName__LHWidget_InstantMessage = 74,
	EUIName__LHWidget_AlertInstantMessage = 75,
	EUIName__LHWidget_GuideText    = 76,
	EUIName__LHWidget_MessageBoxBuy_ShowItem = 77,
	EUIName__LHWidget_QuestMission = 78,
	EUIName__LHWidget_MsgBoxRfresh = 79,
	EUIName__LHWidget_DungeonSystem = 80,
	EUIName__LHWidget_ContentsMessageBox = 81,
	EUIName__LHWidget_OvertopMessageBox = 82,
	EUIName__LHWidget_MessageBox_Patch = 83,
	EUIName__LHWidget_MessageBox_Escape = 84,
	EUIName__LHWidget_MessageBoxWorldDungeon = 85,
	EUIName__LHWidget_SystemAleartMessageBox = 86,
	EUIName__LHWidget_MessageBox_CheckAutoCompose = 87,
	EUIName__LHWidget_MessageBox_ShowBuffConfirm = 88,
	EUIName__LHWidget_MessageBox_Resource = 89,
	EUIName__LHWidget_MessageBox_ResourceChange = 90,
	EUIName__LHWidget_MessageBoxCharge = 91,
	EUIName__LHWidget_MsgBox_AgeLimit = 92,
	EUIName__LHWidget_QuestNPCTalk = 93,
	EUIName__LHWidget_QuestStart   = 94,
	EUIName__LHWidget_QuestStartAni = 95,
	EUIName__LHWidget_Sub_QuestStartAni = 96,
	EUIName__LHWidget_Repeat_QuestStartAni = 97,
	EUIName__LHWidget_Event_QuestStartAni = 98,
	EUIName__LHWidget_ServerInvasion_QuestStartAni = 99,
	EUIName__LHWidget_ServerDefense_QuestStartAni = 100,
	EUIName__LHWidget_QuestListWindow = 101,
	EUIName__LHWidget_QuestFail    = 102,
	EUIName__LHWidget_Scene_RepeatQuest = 103,
	EUIName__LHWidget_RepeatQuestPaper = 104,
	EUIName__LHWidget_Caption      = 105,
	EUIName__LHWidget_QuestAvatarSelectReward = 106,
	EUIName__LHWidget_QuestAvatarSelectInfo = 107,
	EUIName__LHWidget_RedScreen    = 108,
	EUIName__LHWidget_Inventory    = 109,
	EUIName__LHWidget_InventorySlotExPand = 110,
	EUIName__LHWidget_ItemToolTip  = 111,
	EUIName__LHWidget_MiniToolTip  = 112,
	EUIName__LHWidget_InventoryDeleteItem = 113,
	EUIName__LHWidget_EquipEnchant = 114,
	EUIName__LHWidget_EquipEnchant_Result = 115,
	EUIName__LHWidget_MultipleEnchantResult = 116,
	EUIName__LHWidget_EquipInfo    = 117,
	EUIName__LHWidget_GemEquip     = 118,
	EUIName__LHWidget_GemExtract   = 119,
	EUIName__LHWidget_ComposeGemPopup = 120,
	EUIName__LHWidget_Warehouse    = 121,
	EUIName__LHWidget_DecompositionItem = 122,
	EUIName__LHWidget_InventoryMultipleUseItem = 123,
	EUIName__LHWidget_CharacterNameChange = 124,
	EUIName__LHWidget_GuildNameChange = 125,
	EUIName__LHWidget_EnchantParamChange = 126,
	EUIName__LHWidget_Scene_RuneSystem = 127,
	EUIName__LHWidget_RuneMsgBox   = 128,
	EUIName__LHWidget_RuneCompose_RewardPopup = 129,
	EUIName__LHWidget_RuneCompose_RewardPopup_Multi = 130,
	EUIName__LHWidget_Rune_SetEffectPopup = 131,
	EUIName__LHWidget_Rune_SetEnhancePopup = 132,
	EUIName__LHWidget_Rune_FilterOptionPopup = 133,
	EUIName__LHWidget_Rune_ExchangeResult = 134,
	EUIName__LHWidget_RuneSetEnhanceResult = 135,
	EUIName__LHWidget_RuneEnhanceAutoSetPopup = 136,
	EUIName__LHWidget_AvatarSystem = 137,
	EUIName__LHWidget_Avatar_RewardPopup = 138,
	EUIName__LHWidget_Avatar_RewardPopup_Multi = 139,
	EUIName__LHWidget_RandomBox_Avatar = 140,
	EUIName__LHWidget_AvatarChange_Popup = 141,
	EUIName__LHWidget_Avatar_Collection_Filter_Popup = 142,
	EUIName__LHWidget_Avatar_Collection_Reward_Popup = 143,
	EUIName__LHWidget_FilterOptionPopup = 144,
	EUIName__LHWidget_Avatar_NameEffect = 145,
	EUIName__LHWidget_Avatar_ConfirmSelect = 146,
	EUIName__LHWidget_WeaponSystem = 147,
	EUIName__LHWidget_WeaponShape_RewardPopup = 148,
	EUIName__LHWidget_WeaponShape_RewardPopup_Multi = 149,
	EUIName__LHWidget_WeaponShapeChange_Popup = 150,
	EUIName__LHWidget_Weapon_Collection_Reward_Popup = 151,
	EUIName__LHWidget_WeaponShape_ConfirmSelect = 152,
	EUIName__LHWidget_RandomBox_Weapon = 153,
	EUIName__LHWidget_Skill        = 154,
	EUIName__LHWidget_SkillEnchant = 155,
	EUIName__LHWidget_SkillLearn   = 156,
	EUIName__LHWidget_SkillUnlockMessage = 157,
	EUIName__LHWidget_SkillEnchant_Result = 158,
	EUIName__LHWidget_SkillEnchantFilter = 159,
	EUIName__LHWidget_SkillEnchantAutoPopup = 160,
	EUIName__LHWidget_PartyInvitation = 161,
	EUIName__LHWidget_PartyOption  = 162,
	EUIName__LHWidget_ChatOption   = 163,
	EUIName__LHWidget_NoticePopup  = 164,
	EUIName__LHWidget_Chat_Report  = 165,
	EUIName__LHWidget_PKBloderAlarm = 166,
	EUIName__LHWidget_UnionChatName_Popup = 167,
	EUIName__LHWidget_UnionChatList_Popup = 168,
	EUIName__LHWidget_UnionChatInvitation = 169,
	EUIName__LHWidget_ChangeClass  = 170,
	EUIName__LHWidget_InstDungeon  = 171,
	EUIName__LHWidget_InstDungeonRegister = 172,
	EUIName__LHWidget_DungeonReward = 173,
	EUIName__LHWidget_DungeonRewardPopup = 174,
	EUIName__LHWidget_DungeonFail  = 175,
	EUIName__LHWidget_EliteDungeonRegister = 176,
	EUIName__LHWidget_DungeonRewardListPopup = 177,
	EUIName__LHWidget_DungeonClear = 178,
	EUIName__LHWidget_Dungeon_TimeChargingPopup = 179,
	EUIName__LHWidget_EliteDungeon_BossOpen = 180,
	EUIName__LHWidget_WorldDungeonRegister = 181,
	EUIName__LHWidget_WorldDungeonChampionsRegister = 182,
	EUIName__LHWidget_WorldDungeonRankingPopup = 183,
	EUIName__LHWidget_WorldDungeonHallOfFamePopup = 184,
	EUIName__LHWidget_DungeonChargeTimePopup = 185,
	EUIName__LHWidget_ShadowDungeonRegister = 186,
	EUIName__LHWidget_ShadowDungeonTierPopup = 187,
	EUIName__LHWidget_ShadowDungeonRankingPopup = 188,
	EUIName__LHWidget_ShadowDungeonShopPopup = 189,
	EUIName__LHWidget_ShadowDungeonRankingInfoPopup = 190,
	EUIName__LHWidget_ShadowDungeon_EntranceNoticePopup = 191,
	EUIName__LHWidget_ShadowDungeon_AppearanceChange = 192,
	EUIName__LHWidget_InfinityDungeonRegister = 193,
	EUIName__LHWidget_WorldDungeon_JoinPossibleGuild = 194,
	EUIName__LHWidget_WorldDungeon_JoinPossibleGuild_Step = 195,
	EUIName__LHWidget_WorldGuildSelectPopup = 196,
	EUIName__LHWidget_WorldDungeonOpenPopup = 197,
	EUIName__LHWidget_VehicleWindow = 198,
	EUIName__LHWidget_Vehicle_RewardPopup = 199,
	EUIName__LHWidget_Vehicle_RewardPopup_Multi = 200,
	EUIName__LHWidget_VehicleTooltip = 201,
	EUIName__LHWidget_Vehicle_Collection_Filter_Popup = 202,
	EUIName__LHWidget_Vehicle_Collection_Reward_Popup = 203,
	EUIName__LHWidget_VehicleChange_Popup = 204,
	EUIName__LHWidget_Vehicle_ConfirmSelect = 205,
	EUIName__LHWidget_GuildMain    = 206,
	EUIName__LHWidget_GuildJoin    = 207,
	EUIName__LHWidget_GuildJoinApplyPopup = 208,
	EUIName__LHWidget_GuildCreate  = 209,
	EUIName__LHWidget_GuildPermission_Alert = 210,
	EUIName__LHWidget_GuildComplete_Alert = 211,
	EUIName__LHWidget_GuildInvitation = 212,
	EUIName__LHWidget_GuildMarkCreate = 213,
	EUIName__LHWidget_GuildTendency = 214,
	EUIName__LHWidget_Take_GuildContribution = 215,
	EUIName__LHWidget_GuildBenefit_Popup = 216,
	EUIName__LHWidget_GuildAlliance_Popup = 217,
	EUIName__LHWidget_GuildAlliance_RevocationPopup = 218,
	EUIName__LHWidget_GuildEXPExtraction_Popup = 219,
	EUIName__LHWidget_GuildDungeonWindow = 220,
	EUIName__LHWidget_GuildDungeon_InfoList = 221,
	EUIName__LHWidget_GuildDungeon_RankPopup = 222,
	EUIName__LHWidget_GuildDungeon_Reward = 223,
	EUIName__LHWidget_GuildDungeon_RewardListPopup = 224,
	EUIName__LHWidget_GuildDungeon_BuffPopup = 225,
	EUIName__LHWidget_GuildDungeon_ClearBuffSelect = 226,
	EUIName__LHWidget_GuildDungeon_Reward_Season2 = 227,
	EUIName__LHWidget_GuildDungeonWindow_Season2 = 228,
	EUIName__LHWidget_GuildDefenseWindow = 229,
	EUIName__LHWidget_GuildDefense_BlessSummon_Popup = 230,
	EUIName__LHWidget_GuildBattlefieldWindow = 231,
	EUIName__LHWidget_GuildBattlefield_RewardPopup = 232,
	EUIName__LHWidget_GuildBattlefield_EntrancePopup = 233,
	EUIName__LHWidget_GuildBattlefield_ResultPopup = 234,
	EUIName__LHWidget_GuildBattlefield_OpenMessagePopup = 235,
	EUIName__LHWidget_GuildBattlefieldTitleAni = 236,
	EUIName__LHWidget_GuildBattlefield_Notification = 237,
	EUIName__LHWidget_GuildBattlefield_InGame = 238,
	EUIName__LHWidget_GuildBattlefield_ResultList = 239,
	EUIName__LHWidget_GuildWar_Enter = 240,
	EUIName__LHWidget_GuildWar_Result = 241,
	EUIName__LHWidget_GuildWar_Notice = 242,
	EUIName__LHWidget_GuildWar_MasterSpeaker = 243,
	EUIName__LHWidget_GuildAuction_Target_Popup = 244,
	EUIName__LHWidget_GuildAuction_Distribute_Popup = 245,
	EUIName__LHWidget_GuildAuction_Bids_Popup = 246,
	EUIName__LHWidget_GuildAuction_AllStartPopup = 247,
	EUIName__LHWidget_GuildAuction_TargetUserPopup = 248,
	EUIName__LHWidget_GuildAuction_Popup = 249,
	EUIName__LHWidget_GuildStrongholdBuff_Popup = 250,
	EUIName__LHWidget_GuildStronghold_DeclarationOfWar = 251,
	EUIName__LHWidget_GuildStronghold_OccupyMessage = 252,
	EUIName__LHWidget_GuildStronghold_Result_Success_Popup = 253,
	EUIName__LHWidget_GuildStronghold_Result_Fail_Popup = 254,
	EUIName__LHWidget_GuildStronghold_Result_Success_Solo_Popup = 255,
	EUIName__LHWidget_GuildStronghold_Result_Fail_Solo_Popup = 256,
	EUIName__LHWidget_GuildStronghold_PointRankPopup = 257,
	EUIName__LHWidget_GuildStronghold_DeclarationPopup = 258,
	EUIName__LHWidget_GuildStronghold_Result_FirstReward_Popup = 259,
	EUIName__LHWidget_GuildProductionSystem_HistoryPopup = 260,
	EUIName__LHWidget_GuildProductionSystem_RegistPopup = 261,
	EUIName__LHWidget_GuildProductionSystem_InputPopup = 262,
	EUIName__LHWidget_GuildProductionSystem_InputSelectPopup = 263,
	EUIName__LHWidget_GuildProductionSystem_DistributionPopup = 264,
	EUIName__LHWidget_QuickCompletion = 265,
	EUIName__LHWidget_GuildProductionSystem_CompletePopup = 266,
	EUIName__LHWidget_GuildProductionSystem_InputHistoryPopup = 267,
	EUIName__LHWidget_GuildProductionSystem_DivisionPopup = 268,
	EUIName__LHWidget_GuildProductionSystem_BuffTooltip = 269,
	EUIName__LHWidget_GuildMailPopup = 270,
	EUIName__LHWidget_NPCShop      = 271,
	EUIName__LHWidget_Purchase     = 272,
	EUIName__LHWidget_NPCShop_BulkPurchasePopup = 273,
	EUIName__LHWidget_PKMain       = 274,
	EUIName__LHWidget_SettingDiss  = 275,
	EUIName__LHWidget_PKChase      = 276,
	EUIName__LHWidget_PKInfoPopup  = 277,
	EUIName__LHWidget_HitWarning   = 278,
	EUIName__LHWidget_PKBloderPopup = 279,
	EUIName__LHWidget_MailMain     = 280,
	EUIName__LHWidget_LetterWrite  = 281,
	EUIName__LHWidget_LetterRead   = 282,
	EUIName__LHWidget_LetterBlacklist = 283,
	EUIName__LHWidget_FriendWindow = 284,
	EUIName__LHWidget_MsgBox_AlertDisable = 285,
	EUIName__LHWidget_GMMenu       = 286,
	EUIName__LHWidget_WorldMapWindow = 287,
	EUIName__LHWidget_PVP          = 288,
	EUIName__LHWidget_RealmWar     = 289,
	EUIName__LHWidget_RealmWar_RankingPopup = 290,
	EUIName__LHWidget_RealmWar_VSResult = 291,
	EUIName__LHWidget_RealmWar_VSResultReward = 292,
	EUIName__LHWidget_RealmWar_VSResultReward2 = 293,
	EUIName__LHWidget_RealmWar_SeasonReward = 294,
	EUIName__LHWidget_RealmWar_SeasonOpen = 295,
	EUIName__LHWidget_RealmWar_VSInfo = 296,
	EUIName__LHWidget_RealmWar_Notification = 297,
	EUIName__LHWidget_RealmWar_SurturActivate_Aesir = 298,
	EUIName__LHWidget_RealmWar_SurturActivate_Vanir = 299,
	EUIName__LHWidget_RealmWar_Relic = 300,
	EUIName__LHWidget_RealmWar_Warning = 301,
	EUIName__LHWidget_Duel_VSInfo  = 302,
	EUIName__LHWidget_DuelDungeon  = 303,
	EUIName__LHWidget_DuelDungeon_TeamPopup = 304,
	EUIName__LHWidget_DuelDungeon_PasswordPopup = 305,
	EUIName__LHWidget_DuelDungeon_EndMsg = 306,
	EUIName__LHWidget_DuelDungeon_Result = 307,
	EUIName__LHWidget_DuelSettingPopup = 308,
	EUIName__LHWidget_DuelPlayerListPopup = 309,
	EUIName__LHWidget_Achievement_Main = 310,
	EUIName__LHWidget_Achievement_RewordPopup = 311,
	EUIName__LHWidget_Achievement_ListPopup = 312,
	EUIName__LHWidget_TitleList_Popup = 313,
	EUIName__LHWidget_Msg_GetTitle = 314,
	EUIName__LHWidget_ItemCollection_Window = 315,
	EUIName__LHWidget_Item_Collection_Reward_Popup = 316,
	EUIName__LHWidget_EventCollectionEnd_Popup = 317,
	EUIName__LHWidget_Collection_KeySelect_Popup = 318,
	EUIName__LHWidget_Production_Main = 319,
	EUIName__LHWidget_Production_Result = 320,
	EUIName__LHWidget_Production_FailPopup = 321,
	EUIName__LHWidget_Production_ReplacementCountPopup = 322,
	EUIName__LHWidget_Blessing     = 323,
	EUIName__LHWidget_BlessingStone_SlotPopup = 324,
	EUIName__LHWidget_BlessingMsgBox = 325,
	EUIName__LHWidget_Blessing_FilterOptionPopup = 326,
	EUIName__LHWidget_Blessing_CompleteEffectPopup = 327,
	EUIName__LHWidget_Blessing_RewardPopup = 328,
	EUIName__LHWidget_BlessingCompose_RewardPopup_Multi = 329,
	EUIName__LHWidget_Blessing_ChangingResult = 330,
	EUIName__LHWidget_Blessing_ExchangeResult = 331,
	EUIName__LHWidget_Blessing_FilterEquipPopup = 332,
	EUIName__LHWidget_Blessing_FilterSymbolAutoChangePopup = 333,
	EUIName__LHWidget_Blessing_ClearAllPopup = 334,
	EUIName__LHWidget_BlessingEnchant_SlotInfo_Popup = 335,
	EUIName__LHWidget_InventoryUseItem = 336,
	EUIName__LHWidget_TakeItem     = 337,
	EUIName__LHWidget_ItemChoice_Popup = 338,
	EUIName__LHWidget_AvatarVehicleChoice_Popup = 339,
	EUIName__LHWidget_Event_Popup  = 340,
	EUIName__LHWidget_Event_Purchase = 341,
	EUIName__LHWidget_Event_RewordPopup = 342,
	EUIName__LHWidget_Event_HotTime_Popup = 343,
	EUIName__LHWidget_Event_BingoMission_Popup = 344,
	EUIName__LHWidget_EventDungeon_Popup = 345,
	EUIName__LHWidget_Event_RoskvaDice_RewardPopup = 346,
	EUIName__LHWidget_EquipOptionChange = 347,
	EUIName__LHWidget_EquipOptionFilterOptionPopup = 348,
	EUIName__LHWidget_EquipOptionAutoPopup = 349,
	EUIName__LHWidget_PetOptionChange = 350,
	EUIName__LHWidget_PlologueLogo = 351,
	EUIName__LHWidget_Exchange_Main = 352,
	EUIName__LHWidget_Exchange_SearchOption_Popup = 353,
	EUIName__LHWidget_Exchange_CheckRegister = 354,
	EUIName__LHWidget_Exchange_CheckCancel = 355,
	EUIName__LHWidget_Exchange_ItemSearchPopup = 356,
	EUIName__LHWidget_Exchange_MultiBuyPopup = 357,
	EUIName__LHWidget_ExpRecovery_Popup = 358,
	EUIName__LHWidget_Scene_CashShop = 359,
	EUIName__LHWidget_CashShop_BuyPopup = 360,
	EUIName__LHWidget_CashShop_DetailPopup = 361,
	EUIName__LHWidget_CashShop_GetItemListPopup = 362,
	EUIName__LHWidget_CashShop_GetAllPopup = 363,
	EUIName__LHWidget_CashShop_TakePackagePopup = 364,
	EUIName__LHWidget_CashShop_DiaBuyPopup = 365,
	EUIName__LHWidget_CashShop_BulkPurchasePopup = 366,
	EUIName__LHWidget_CashShop_CabinetPopup = 367,
	EUIName__LHWidget_CashShop_PickupPopup = 368,
	EUIName__LHWidget_AgeVerificationPopup = 369,
	EUIName__LHWidget_CashShopMileageChangePopup = 370,
	EUIName__LHWidget_RankingSystem_Main = 371,
	EUIName__LHWidget_WorldBoss_Result = 372,
	EUIName__LHWidget_FieldBoss_Result = 373,
	EUIName__LHWidget_Ingame_BossOpen = 374,
	EUIName__LHWidget_WorldBoss_RankingList = 375,
	EUIName__LHWidget_ItemSource_Popup = 376,
	EUIName__LHWidget_InGame_PIP   = 377,
	EUIName__LHWidget_Preference   = 378,
	EUIName__LHWidget_TeleportPopup = 379,
	EUIName__LHWidget_DungeonMiniMap = 380,
	EUIName__LHWidget_SiegeMiniMap = 381,
	EUIName__LHWidget_SimpleMiniMap = 382,
	EUIName__LHWidget_SenseOption  = 383,
	EUIName__LHWidget_Scene_SealedStoneSystem = 384,
	EUIName__LHWidget_SealedEssence = 385,
	EUIName__LHWidget_EvilWaterResult = 386,
	EUIName__LHWidget_SealedStoneTranscendencePopup = 387,
	EUIName__LHWidget_SealedStone_AutoEnhancePopup = 388,
	EUIName__LHWidget_SealedStone_AutoEnhanceConfirmPopup = 389,
	EUIName__LHWidget_SealedStone_AutoMaterialPopup = 390,
	EUIName__LHWidget_OfflineHunting_Check = 391,
	EUIName__LHWidget_OfflineHunting_Start = 392,
	EUIName__LHWidget_OfflineHunting_Warning = 393,
	EUIName__LHWidget_OfflineHunting_Result = 394,
	EUIName__LHWidget_Exit_Popup   = 395,
	EUIName__LHWidget_Scene_SleepMode = 396,
	EUIName__LHWidget_Scene_Launcher = 397,
	EUIName__LHWidget_UrgentNotice_Popup = 398,
	EUIName__LHWidget_BM_PackagePopup = 399,
	EUIName__LHWidget_MsgPackageBuy = 400,
	EUIName__LHWidget_BM_LimitedPopup = 401,
	EUIName__LHWidget_BM_OdinPassMissionPopup = 402,
	EUIName__LHWidget_BM_ChainPass_Popup = 403,
	EUIName__LHWidget_WebPopup     = 404,
	EUIName__LHWidget_PCPaymentPopup = 405,
	EUIName__LHWidget_PCPaymentSuccessPopup = 406,
	EUIName__LHWidget_PCPaymentErrorPopup = 407,
	EUIName__LHWidget_PCPaymentScene = 408,
	EUIName__LHWidget_CheckPopup   = 409,
	EUIName__LHWidget_ReapprovalPopup_PC = 410,
	EUIName__LHWidget_ReapprovalPopup_Mobile = 411,
	EUIName__LHWidget_Credits      = 412,
	EUIName__LHWidget_MarketReview = 413,
	EUIName__LHWidget_Scene_RelicGamble = 414,
	EUIName__LHWidget_RelicGamble_FilterOptionPopup = 415,
	EUIName__LHWidget_RelicGamble_MultiAutoPopup = 416,
	EUIName__LHWidget_Imprint_OptionPopup = 417,
	EUIName__LHWidget_ImprintSpecial_OptionPopup = 418,
	EUIName__LHWidget_ImprintSystem = 419,
	EUIName__LHWidget_Imprint_Complete = 420,
	EUIName__LHWidget_Imprint_AutoFilterPopup = 421,
	EUIName__LHWidget_ImprintSpecial_AutoFilterPopup = 422,
	EUIName__LHWidget_Schedule_Popup = 423,
	EUIName__LHWidget_VoidBossSummons = 424,
	EUIName__LHWidget_WorldDungeon_BossResult01 = 425,
	EUIName__LHWidget_WorldDungeon_BossResult02 = 426,
	EUIName__LHWidget_WorldDungeon_BossResult03 = 427,
	EUIName__LHWidget_WorldDungeon_BossSummons01 = 428,
	EUIName__LHWidget_WorldDungeon_BossSummons02 = 429,
	EUIName__LHWidget_WorldEnter   = 430,
	EUIName__LHWidget_WorldDungeon_Loading = 431,
	EUIName__LHWidget_WorldDungeon_JoinPossibleGuild_Search = 432,
	EUIName__LHWidget_NameChange_Info = 433,
	EUIName__LHWidget_LHCoupon     = 434,
	EUIName__LHWidget_Exchange_Coupon = 435,
	EUIName__LHWidget_Dungeon_DropItem_Popup = 436,
	EUIName__LHWidget_OBWorldDungeon_Menu = 437,
	EUIName__LHWidget_Scene_SiegeSystem = 438,
	EUIName__LHWidget_SiegeBidRanking_Popup = 439,
	EUIName__LHWidget_SiegeSystem_Result01 = 440,
	EUIName__LHWidget_SiegeSystem_Result02 = 441,
	EUIName__LHWidget_SiegeMercenaryResult_Popup = 442,
	EUIName__LHWidget_SiegeSystem_RankingList = 443,
	EUIName__LHWidget_CastleWarEnter_Popup = 444,
	EUIName__LHWidget_SiegeSystem_BidPopup = 445,
	EUIName__LHWidget_SiegePreviousResult_Popup = 446,
	EUIName__LHWidget_SiegeTaxSetting_Popup = 447,
	EUIName__LHWidget_SiegeInfo_JoinGuildList = 448,
	EUIName__LHWidget_SiegeSystem_QualifierResult = 449,
	EUIName__LHWidget_SiegeSystem_DefenceFailResult = 450,
	EUIName__LHWidget_SiegeSystem_BidInfo_Popup = 451,
	EUIName__LHWidget_SiegeSystem_Reward = 452,
	EUIName__LHWidget_SiegeSystem_MercenaryResult_Popup = 453,
	EUIName__LHWidget_SiegeSystem_TaxDivision_Popup = 454,
	EUIName__LHWidget_SiegeSystem_MercenaryTaxDivision_Popup = 455,
	EUIName__LHWidget_SiegeSystem_Mercenary_NumPadPopup = 456,
	EUIName__LHWidget_SiegeSystem_TaxDivision_NumPadPopup = 457,
	EUIName__LHWidget_SiegeSystem_Contribution_Popup = 458,
	EUIName__LHWidget_SiegeSystem_TaxDivisionSetting_Popup = 459,
	EUIName__LHWidget_InduceToMobilePopup_TW = 460,
	EUIName__LHWidget_ServerMigrationSelect = 461,
	EUIName__LHWidget_ServerMigrationDecide = 462,
	EUIName__LHWidget_GooglePCBilling_Popup = 463,
	EUIName__LHWidget_GooglePCBillingAuth_Popup = 464,
	EUIName__LHWidget_QualifierList_Popup = 465,
	EUIName__LHWidget_SiegeAttendList_Popup = 466,
	EUIName__LHWidget_SiegeQualifierAttendList_Popup = 467,
	EUIName__LHWidget_SiegeTitleAni = 468,
	EUIName__LHWidget_SiegeSystem_ShopPopup = 469,
	EUIName__LHWidget_SiegeSystem_VSInfo = 470,
	EUIName__LHWidget_SiegeAttackWorldSelect_Popup = 471,
	EUIName__LHWidget_ClassChangeSystem_Scene = 472,
	EUIName__LHWidget_ClassChangeSystem_Guide_Popup = 473,
	EUIName__LHWidget_ClassChangeSystem_AvatarSelect_Popup = 474,
	EUIName__LHWidget_ClassChangeSystem_CostumeSelect_Popup = 475,
	EUIName__LHWidget_ClassChangeSystem_WeaponShapeSelect_Popup = 476,
	EUIName__LHWidget_ClassChangeSystem_AvatarCheckPopup = 477,
	EUIName__LHWidget_ClassChangeSystem_CostumeCheckPopup = 478,
	EUIName__LHWidget_ClassChangeSystem_WeaponShapeCheckPopup = 479,
	EUIName__LHWidget_ClassChangeSystem_AvatarChangeInfoPopup = 480,
	EUIName__LHWidget_ClassChangeSystem_CostumeChangeInfoPopup = 481,
	EUIName__LHWidget_ClassChangeSystem_WeaponShapeChangeInfoPopup = 482,
	EUIName__LHWidget_ClassChangeSystem_EquipItemSelect_Popup = 483,
	EUIName__LHWidget_ClassChangeSystem_EquipItemChangeInfoPopup = 484,
	EUIName__LHWidget_ClassChangeSystem_EquipItemCheckPopup = 485,
	EUIName__LHWidget_ClassChangeSystem_SkillCheckPopup = 486,
	EUIName__LHWidget_ClassChangeSystem_CheckReset_Popup = 487,
	EUIName__LHWidget_ClassChangeSystem_ChangeInfo_Popup = 488,
	EUIName__LHWidget_ClassChangeSystem_SelectOtherClass_Popup = 489,
	EUIName__LHWidget_ClassChangeSystem_SkillChangeInfo_Popup = 490,
	EUIName__LHWidget_ClassChangeSystem_WeaponShape_SkillTooltip = 491,
	EUIName__LHWidget_TriggerMessage_DestroyedObject = 492,
	EUIName__LHWidget_TriggerMessage_AddBuff = 493,
	EUIName__LHWidget_TriggerMessage_RelicInteraction = 494,
	EUIName__LHWidget_CommisionInfo_Popup = 495,
	EUIName__LHWidget_SiegeSystem_OpenMessage = 496,
	EUIName__LHWidget_SiegeSyetem_OccupationMessage = 497,
	EUIName__LHWidget_SiegeSyetem_GameStart = 498,
	EUIName__LHWidget_SiegeSystem_ThroneResult = 499,
	EUIName__LHWidget_InfinityDungeon_NoticePopup = 500,
	EUIName__LHWidget_InfinityDungeon_ClearBuffSelect = 501,
	EUIName__LHWidget_InfinityDungeon_SeasonRewardPopup = 502,
	EUIName__LHWidget_InfinityDungeon_RankListPopup = 503,
	EUIName__LHWidget_InfinityDungeon_ProgressPopup = 504,
	EUIName__LHWidget_InfinityDungeon_RewardPopup = 505,
	EUIName__LHWidget_InfinityDungeon_NotifyArea = 506,
	EUIName__LHWidget_InfinityDungeon_BossTitle = 507,
	EUIName__LHWidget_InfinityDungeon_ExterminateTitle = 508,
	EUIName__LHWidget_InfinityDungeon_SurvivalTitle = 509,
	EUIName__LHWidget_InfinityDungeon_PassRewardItem = 510,
	EUIName__LHWidget_InfinityDungeon_PassRewardPopup = 511,
	EUIName__LHWidget_SimpleTooltip = 512,
	EUIName__LHWidget_SkillTranscend = 513,
	EUIName__LHWidget_SkillTranscend_Result = 514,
	EUIName__LHWidget_SkillTranscend_ResetResult = 515,
	EUIName__LHWidget_Scene_Link   = 516,
	EUIName__LHWidget_Link_CompleteEffectPopup = 517,
	EUIName__LHWidget_Link_AutoFilterPopup = 518,
	EUIName__LHWidget_InfoToolTip  = 519,
	EUIName__LHWidget_PlannerSetting_Popup = 520,
	EUIName__LHWidget_PlannerResult_Popup = 521,
	EUIName__LHWidget_PlannerDetail_Popup = 522,
	EUIName__LHWidget_QuickSlot_InfoPopup = 523,
	EUIName__LHWidget_Preset_Popup = 524,
	EUIName__LHWidget_Preset_Avatar_Popup = 525,
	EUIName__LHWidget_Preset_Vehicle_Popup = 526,
	EUIName__LHWidget_Preset_Weapon_Popup = 527,
	EUIName__LHWidget_CastleWar_SelectTarget_Popup = 528,
	EUIName__LHWidget_CastleWar_GuildOption = 529,
	EUIName__LHWidget_WorldShadowDungeon_Msg_Popup = 530,
	EUIName__LHWidget_Scene_AlchemySystem = 531,
	EUIName__LHWidget_Alchemy_AutoFilterPopup = 532,
	EUIName__LHWidget_Alchemy_AutoCheckPopup = 533,
	EUIName__LHWidget_Alchemy_ResourcePopup = 534,
	EUIName__LHWidget_Scene_PetSystem = 535,
	EUIName__LHWidget_Pet_RewardPopup = 536,
	EUIName__LHWidget_Pet_RewardPopup_Multi = 537,
	EUIName__LHWidget_PetChange_Popup = 538,
	EUIName__LHWidget_Pet_Collection_Complete = 539,
	EUIName__LHWidget_Pet_ConfirmSelect = 540,
	EUIName__LHWidget_PetSkillTraining_Popup = 541,
	EUIName__LHWidget_Pet_AutoFilterPopup = 542,
	EUIName__LHWidget_Pet_SkillActivate_Popup = 543,
	EUIName__LHWidget_Pet_Skill_ToolTip = 544,
	EUIName__LHWidget_ChooseRegion = 545,
	EUIName__LHWidget_RevivalCheck_Popup = 546,
	EUIName__LHWidget_ServerInvasionWindow = 547,
	EUIName__LHWidget_ServerInvasion_RankingPopup = 548,
	EUIName__LHWidget_ServerInvasion_InvasionObjectNotice = 549,
	EUIName__LHWidget_ServerInvasion_ServerListPopup = 550,
	EUIName__LHWidget_ServerInvasion_ServerSelectPopup = 551,
	EUIName__Max                   = 552
};


// Enum ProjectLH.ESequenceVisibleControlTag
enum class FProjectLH_ProjectLH_ESequenceVisibleControlTag : uint8_t
{
	ESequenceVisibleControlTag__MainDirectionLight = 0,
	ESequenceVisibleControlTag__MainSkyLight = 1,
	ESequenceVisibleControlTag__Water_Plan = 2,
	ESequenceVisibleControlTag__MainFog = 3,
	ESequenceVisibleControlTag__MainPostProcessVolume = 4,
	ESequenceVisibleControlTag__HideProp01 = 5,
	ESequenceVisibleControlTag__Max = 6
};


// Enum ProjectLH.EMailType
enum class FProjectLH_ProjectLH_EMailType : uint8_t
{
	EMailType__Normal              = 0,
	EMailType__CommonMail          = 1,
	EMailType__Letter              = 2,
	EMailType__MAX                 = 3
};


// Enum ProjectLH.EMarqueeDirection
enum class FProjectLH_ProjectLH_EMarqueeDirection : uint8_t
{
	EMarqueeDirection__EMarqueeDirection_ToLeft = 0,
	EMarqueeDirection__EMarqueeDirection_ToRIght = 1,
	EMarqueeDirection__EMarqueeDirection_ToTop = 2,
	EMarqueeDirection__EMarqueeDirection_ToBottom = 3,
	EMarqueeDirection__EMarqueeDirection_MAX = 4
};


// Enum ProjectLH.ENavigationType
enum class FProjectLH_ProjectLH_ENavigationType : uint8_t
{
	ENavigationType__Main          = 0,
	ENavigationType__Sub           = 1,
	ENavigationType__Default       = 2,
	ENavigationType__ENavigationType_MAX = 3
};


// Enum ProjectLH.LinkDirectionType
enum class FProjectLH_ProjectLH_ELinkDirectionType : uint8_t
{
	LinkDirectionType__Both        = 0,
	LinkDirectionType__StartToEnd  = 1,
	LinkDirectionType__EndToStart  = 2,
	LinkDirectionType__LinkDirectionType_MAX = 3
};


// Enum ProjectLH.ENpcMoveState
enum class FProjectLH_ProjectLH_ENpcMoveState : uint8_t
{
	ENpcMoveState__None            = 0,
	ENpcMoveState__Move            = 1,
	ENpcMoveState__MoveGoal        = 2,
	ENpcMoveState__MAX             = 3
};


// Enum ProjectLH.EKakaoLogSubReasonType
enum class FProjectLH_ProjectLH_EKakaoLogSubReasonType : uint8_t
{
	EKakaoLogSubReasonType__None   = 0,
	EKakaoLogSubReasonType__ItemIndex = 1,
	EKakaoLogSubReasonType__ShopIndex = 2,
	EKakaoLogSubReasonType__PackageIndex = 3,
	EKakaoLogSubReasonType__RandomBoxCount = 4,
	EKakaoLogSubReasonType__QuestIndex = 5,
	EKakaoLogSubReasonType__AchievementIndex = 6,
	EKakaoLogSubReasonType__RuneIndex = 7,
	EKakaoLogSubReasonType__SkillIndex = 8,
	EKakaoLogSubReasonType__DungeonIndex = 9,
	EKakaoLogSubReasonType__LetterType = 10,
	EKakaoLogSubReasonType__StorageType = 11,
	EKakaoLogSubReasonType__EKakaoLogSubReasonType_MAX = 12
};


// Enum ProjectLH.EPdBBSType
enum class FProjectLH_ProjectLH_EPdBBSType : uint8_t
{
	EPdBBSType__TopicPage          = 0,
	EPdBBSType__WikiPage           = 1,
	EPdBBSType__EPdBBSType_MAX     = 2
};


// Enum ProjectLH.EPdDoPayState
enum class FProjectLH_ProjectLH_EPdDoPayState : uint8_t
{
	EPdDoPayState__Success         = 0,
	EPdDoPayState__Failed          = 1,
	EPdDoPayState__Cancel          = 2,
	EPdDoPayState__EPdDoPayState_MAX = 3
};


// Enum ProjectLH.EPdGoodsType
enum class FProjectLH_ProjectLH_EPdGoodsType : uint8_t
{
	EPdGoodsType__OrdinaryGoods    = 0,
	EPdGoodsType__SubscriptionGoods = 1,
	EPdGoodsType__PurchasedGoodsOutsideTheApp = 2,
	EPdGoodsType__EPdGoodsType_MAX = 3
};


// Enum ProjectLH.EMovementInputState
enum class FProjectLH_ProjectLH_EMovementInputState : uint8_t
{
	EMovementInputState__Off       = 0,
	EMovementInputState__Pressed   = 1,
	EMovementInputState__On        = 2,
	EMovementInputState__Released  = 3,
	EMovementInputState__EMovementInputState_MAX = 4
};


// Enum ProjectLH.ELHInputMode
enum class FProjectLH_ProjectLH_ELHInputMode : uint8_t
{
	ELHInputMode__InputModeGameAndUI = 0,
	ELHInputMode__InputModeUIOnly  = 1,
	ELHInputMode__ELHInputMode_MAX = 2
};


// Enum ProjectLH.EQuestCondition
enum class FProjectLH_ProjectLH_EQuestCondition : uint8_t
{
	EQuestCondition__QuestSelect   = 0,
	EQuestCondition__QuestTalk     = 1,
	EQuestCondition__QuestStart    = 2,
	EQuestCondition__QuestDoing    = 3,
	EQuestCondition__QuestClear    = 4,
	EQuestCondition__QuestFinish   = 5,
	EQuestCondition__QuestReward   = 6,
	EQuestCondition__EQuestCondition_MAX = 7
};


// Enum ProjectLH.EQuestIndicatorState
enum class FProjectLH_ProjectLH_EQuestIndicatorState : uint8_t
{
	EQuestIndicatorState__Off      = 0,
	EQuestIndicatorState__Walk     = 1,
	EQuestIndicatorState__Climb    = 2,
	EQuestIndicatorState__Swim     = 3,
	EQuestIndicatorState__Riding   = 4,
	EQuestIndicatorState__EQuestIndicatorState_MAX = 5
};


// Enum ProjectLH.ETalkType
enum class FProjectLH_ProjectLH_ETalkType : uint8_t
{
	ETalkType__StartTalk           = 0,
	ETalkType__InformTalk          = 1,
	ETalkType__EndTalk             = 2,
	ETalkType__ETalkType_MAX       = 3
};


// Enum ProjectLH.EPartyAutoBattleType
enum class FProjectLH_ProjectLH_EPartyAutoBattleType : uint8_t
{
	EPartyAutoBattleType__MasterTarget = 0,
	EPartyAutoBattleType__MasterFollow = 1,
	EPartyAutoBattleType__Normal   = 2,
	EPartyAutoBattleType__MAX      = 3
};


// Enum ProjectLH.ERandomBoxWeaponState
enum class FProjectLH_ProjectLH_ERandomBoxWeaponState : uint8_t
{
	ERandomBoxWeaponState__None    = 0,
	ERandomBoxWeaponState__Wrapping = 1,
	ERandomBoxWeaponState__Unpack  = 2,
	ERandomBoxWeaponState__ERandomBoxWeaponState_MAX = 3
};


// Enum ProjectLH.EExchangeUI_ListType
enum class FProjectLH_ProjectLH_EExchangeUI_ListType : uint8_t
{
	EExchangeUI_ListType__None     = 0,
	EExchangeUI_ListType__Favorite = 1,
	EExchangeUI_ListType__BuyEquipmentDepth0 = 2,
	EExchangeUI_ListType__BuyEquipmentDepth1 = 3,
	EExchangeUI_ListType__BuyConsumables = 4,
	EExchangeUI_ListType__Sell_WaitingRegist = 5,
	EExchangeUI_ListType__Sell_RemainTime = 6,
	EExchangeUI_ListType__Sell_RemainTimeConsume = 7,
	EExchangeUI_ListType__Sell_Expiration = 8,
	EExchangeUI_ListType__Sell_SellComplete = 9,
	EExchangeUI_ListType__Max      = 10
};


// Enum ProjectLH.ETalkNpc
enum class FProjectLH_ProjectLH_ETalkNpc : uint8_t
{
	ETalkNpc__None                 = 0,
	ETalkNpc__Galar                = 1,
	ETalkNpc__Shorman              = 2,
	ETalkNpc__Gunnlod              = 3,
	ETalkNpc__Nidhoggr             = 4,
	ETalkNpc__Doombo               = 5,
	ETalkNpc__Regin                = 6,
	ETalkNpc__Loki                 = 7,
	ETalkNpc__Rjufandr             = 8,
	ETalkNpc__Rgel                 = 9,
	ETalkNpc__Rimsli               = 10,
	ETalkNpc__Bruck                = 11,
	ETalkNpc__Wieland              = 12,
	ETalkNpc__Suttungr             = 13,
	ETalkNpc__Synir                = 14,
	ETalkNpc__Srymr                = 15,
	ETalkNpc__Svadil               = 16,
	ETalkNpc__Askeladd             = 17,
	ETalkNpc__Aur                  = 18,
	ETalkNpc__Icol                 = 19,
	ETalkNpc__Andvari              = 20,
	ETalkNpc__Egir                 = 21,
	ETalkNpc__Odin                 = 22,
	ETalkNpc__Thor                 = 23,
	ETalkNpc__Laerad               = 24,
	ETalkNpc__Pike                 = 25,
	ETalkNpc__Freyr                = 26,
	ETalkNpc__Flromkie             = 27,
	ETalkNpc__Fjalar               = 28,
	ETalkNpc__Hreid                = 29,
	ETalkNpc__Thielvar             = 30,
	ETalkNpc__Piskel               = 31,
	ETalkNpc__Gersemi              = 32,
	ETalkNpc__Groa                 = 33,
	ETalkNpc__Ran                  = 34,
	ETalkNpc__Roskva               = 35,
	ETalkNpc__Risar                = 36,
	ETalkNpc__Lif                  = 37,
	ETalkNpc__Matriarch            = 38,
	ETalkNpc__Beyla                = 39,
	ETalkNpc__Byggvir              = 40,
	ETalkNpc__Sandra               = 41,
	ETalkNpc__Sinmara              = 42,
	ETalkNpc__Alvis                = 43,
	ETalkNpc__Atri                 = 44,
	ETalkNpc__Idun                 = 45,
	ETalkNpc__Freya                = 46,
	ETalkNpc__Hnoss                = 47,
	ETalkNpc__Frigg                = 48,
	ETalkNpc__Sif                  = 49,
	ETalkNpc__Forseti              = 50,
	ETalkNpc__Bragi                = 51,
	ETalkNpc__Angrboda             = 52,
	ETalkNpc__Yareunbida           = 53,
	ETalkNpc__Signy                = 54,
	ETalkNpc__Hagbard              = 55,
	ETalkNpc__Hod                  = 56,
	ETalkNpc__ETalkNpc_MAX         = 57
};


// Enum ProjectLH.ERandomBoxDragState
enum class FProjectLH_ProjectLH_ERandomBoxDragState : uint8_t
{
	ERandomBoxDragState__Idle      = 0,
	ERandomBoxDragState__Success   = 1,
	ERandomBoxDragState__Fail      = 2,
	ERandomBoxDragState__ERandomBoxDragState_MAX = 3
};


// Enum ProjectLH.ERandomBoxWeaponDirectionType
enum class FProjectLH_ProjectLH_ERandomBoxWeaponDirectionType : uint8_t
{
	ERandomBoxWeaponDirectionType__None = 0,
	ERandomBoxWeaponDirectionType__RandomBox = 1,
	ERandomBoxWeaponDirectionType__Compose = 2,
	ERandomBoxWeaponDirectionType__ERandomBoxWeaponDirectionType_MAX = 3
};


// Enum ProjectLH.ERandomBoxWeaponSequenceType
enum class FProjectLH_ProjectLH_ERandomBoxWeaponSequenceType : uint8_t
{
	ERandomBoxWeaponSequenceType__None = 0,
	ERandomBoxWeaponSequenceType__Blacksmith_Normal = 1,
	ERandomBoxWeaponSequenceType__Blacksmith_High = 2,
	ERandomBoxWeaponSequenceType__Start_Result_Normal = 3,
	ERandomBoxWeaponSequenceType__Start_Result_High = 4,
	ERandomBoxWeaponSequenceType__Touch = 5,
	ERandomBoxWeaponSequenceType__Drag_Ready = 6,
	ERandomBoxWeaponSequenceType__Drag_Loop = 7,
	ERandomBoxWeaponSequenceType__Drag_Start = 8,
	ERandomBoxWeaponSequenceType__Drag_Success = 9,
	ERandomBoxWeaponSequenceType__Eye_Open = 10,
	ERandomBoxWeaponSequenceType__Eye_Close = 11,
	ERandomBoxWeaponSequenceType__Eye_Open_Ancient = 12,
	ERandomBoxWeaponSequenceType__HeroGrade = 13,
	ERandomBoxWeaponSequenceType__LegendGrade = 14,
	ERandomBoxWeaponSequenceType__MythGrade = 15,
	ERandomBoxWeaponSequenceType__AncientGrade = 16,
	ERandomBoxWeaponSequenceType__Compose_Result = 17,
	ERandomBoxWeaponSequenceType__Single_Result = 18,
	ERandomBoxWeaponSequenceType__All_Result = 19,
	ERandomBoxWeaponSequenceType__ERandomBoxWeaponSequenceType_MAX = 20
};


// Enum ProjectLH.ERandomBoxType
enum class FProjectLH_ProjectLH_ERandomBoxType : uint8_t
{
	ERandomBoxType__None           = 0,
	ERandomBoxType__Drop           = 1,
	ERandomBoxType__RepeatQuest    = 2,
	ERandomBoxType__Quest          = 3,
	ERandomBoxType__Avatar         = 4,
	ERandomBoxType__Vehicle        = 5,
	ERandomBoxType__Item           = 6,
	ERandomBoxType__Rune           = 7,
	ERandomBoxType__Goods          = 8,
	ERandomBoxType__Weapon         = 9,
	ERandomBoxType__BlessingStone  = 10,
	ERandomBoxType__Costume        = 11,
	ERandomBoxType__InfinityDungeon = 12,
	ERandomBoxType__GuildBattlefield = 13,
	ERandomBoxType__Pet            = 14,
	ERandomBoxType__ERandomBoxType_MAX = 15
};


// Enum ProjectLH.ERealmwarObserverStartViewMode
enum class FProjectLH_ProjectLH_ERealmwarObserverStartViewMode : uint8_t
{
	ERealmwarObserverStartViewMode__Default = 0,
	ERealmwarObserverStartViewMode__NormalView = 1,
	ERealmwarObserverStartViewMode__QuarterView = 2,
	ERealmwarObserverStartViewMode__ShoulderView = 3,
	ERealmwarObserverStartViewMode__MAX = 4
};


// Enum ProjectLH.ERealmWarJoin
enum class FProjectLH_ProjectLH_ERealmWarJoin : uint8_t
{
	ERealmWarJoin__None            = 0,
	ERealmWarJoin__Open            = 1,
	ERealmWarJoin__Ready           = 2,
	ERealmWarJoin__Close           = 3,
	ERealmWarJoin__ERealmWarJoin_MAX = 4
};


// Enum ProjectLH.EClassTypeOfPriest
enum class FProjectLH_ProjectLH_EClassTypeOfPriest : uint8_t
{
	EClassTypeOfPriest__Priest     = 0,
	EClassTypeOfPriest__Saint      = 1,
	EClassTypeOfPriest__Paladin    = 2,
	EClassTypeOfPriest__Max        = 3
};


// Enum ProjectLH.EClassTypeOfRogue
enum class FProjectLH_ProjectLH_EClassTypeOfRogue : uint8_t
{
	EClassTypeOfRogue__Rogue       = 0,
	EClassTypeOfRogue__Sniper      = 1,
	EClassTypeOfRogue__Assassin    = 2,
	EClassTypeOfRogue__Max         = 3
};


// Enum ProjectLH.EClassTypeOfSorceress
enum class FProjectLH_ProjectLH_EClassTypeOfSorceress : uint8_t
{
	EClassTypeOfSorceress__Sorceress = 0,
	EClassTypeOfSorceress__ElementalMaster = 1,
	EClassTypeOfSorceress__DarkMagician = 2,
	EClassTypeOfSorceress__Max     = 3
};


// Enum ProjectLH.ERandomBoxWeaponAnimState
enum class FProjectLH_ProjectLH_ERandomBoxWeaponAnimState : uint8_t
{
	ERandomBoxWeaponAnimState__None = 0,
	ERandomBoxWeaponAnimState__Wrapped_Appear = 1,
	ERandomBoxWeaponAnimState__Wrapped_Idle = 2,
	ERandomBoxWeaponAnimState__Unpacked = 3,
	ERandomBoxWeaponAnimState__ERandomBoxWeaponAnimState_MAX = 4
};


// Enum ProjectLH.EPKDescType
enum class FProjectLH_ProjectLH_EPKDescType : uint8_t
{
	EPKDescType__None              = 0,
	EPKDescType__GainPoint         = 1,
	EPKDescType__Brutal            = 2,
	EPKDescType__BrutalPanelty     = 3,
	EPKDescType__BlodState         = 4,
	EPKDescType__BlodPanelty       = 5,
	EPKDescType__BlodGraceState    = 6,
	EPKDescType__EPKDescType_MAX   = 7
};


// Enum ProjectLH.EClassTypeOfWarrior
enum class FProjectLH_ProjectLH_EClassTypeOfWarrior : uint8_t
{
	EClassTypeOfWarrior__Warrior   = 0,
	EClassTypeOfWarrior__Gladiator = 1,
	EClassTypeOfWarrior__Defender  = 2,
	EClassTypeOfWarrior__Max       = 3
};


// Enum ProjectLH.ERandomBoxPetSceneType
enum class FProjectLH_ProjectLH_ERandomBoxPetSceneType : uint8_t
{
	ERandomBoxPetSceneType__None   = 0,
	ERandomBoxPetSceneType__Start_Normal = 1,
	ERandomBoxPetSceneType__Start_High = 2,
	ERandomBoxPetSceneType__Open_Hero = 3,
	ERandomBoxPetSceneType__Open_Legend = 4,
	ERandomBoxPetSceneType__Open_Myth = 5,
	ERandomBoxPetSceneType__Open_Ancient = 6,
	ERandomBoxPetSceneType__Direction_Hero = 7,
	ERandomBoxPetSceneType__Direction_Legend = 8,
	ERandomBoxPetSceneType__Direction_Myth = 9,
	ERandomBoxPetSceneType__ERandomBoxPetSceneType_MAX = 10
};


// Enum ProjectLH.ERandomBoxVehicleSceneType
enum class FProjectLH_ProjectLH_ERandomBoxVehicleSceneType : uint8_t
{
	ERandomBoxVehicleSceneType__None = 0,
	ERandomBoxVehicleSceneType__Start_Normal = 1,
	ERandomBoxVehicleSceneType__Start_High = 2,
	ERandomBoxVehicleSceneType__Open_Hero = 3,
	ERandomBoxVehicleSceneType__Open_Legend = 4,
	ERandomBoxVehicleSceneType__Open_Myth = 5,
	ERandomBoxVehicleSceneType__Open_Ancient = 6,
	ERandomBoxVehicleSceneType__Direction_Hero_Ground = 7,
	ERandomBoxVehicleSceneType__Direction_Hero_Air = 8,
	ERandomBoxVehicleSceneType__Direction_Legend = 9,
	ERandomBoxVehicleSceneType__Direction_Myth = 10,
	ERandomBoxVehicleSceneType__ERandomBoxVehicleSceneType_MAX = 11
};


// Enum ProjectLH.EResourceTextColor
enum class FProjectLH_ProjectLH_EResourceTextColor : uint8_t
{
	EResourceTextColor__None       = 0,
	EResourceTextColor__Diamond    = 1,
	EResourceTextColor__Gold       = 2,
	EResourceTextColor__GuildStronghold = 3,
	EResourceTextColor__Max        = 4
};


// Enum ProjectLH.EStrongholdOtherSide
enum class FProjectLH_ProjectLH_EStrongholdOtherSide : uint8_t
{
	EStrongholdOtherSide__TeamA    = 0,
	EStrongholdOtherSide__TeamB    = 1,
	EStrongholdOtherSide__TeamC    = 2,
	EStrongholdOtherSide__Max      = 3
};


// Enum ProjectLH.EViewrPose
enum class FProjectLH_ProjectLH_EViewrPose : uint8_t
{
	EViewrPose__StartAnim          = 0,
	EViewrPose__LoopAnim           = 1,
	EViewrPose__EndAnim            = 2,
	EViewrPose__Max                = 3
};


// Enum ProjectLH.ECharacterClass
enum class FProjectLH_ProjectLH_ECharacterClass : uint8_t
{
	ECharacterClass__None          = 0,
	ECharacterClass__Warrior       = 1,
	ECharacterClass__Berserker     = 2,
	ECharacterClass__Defender      = 3,
	ECharacterClass__Sorceress     = 4,
	ECharacterClass__ArchMage      = 5,
	ECharacterClass__DarkMagician  = 6,
	ECharacterClass__Rogue         = 7,
	ECharacterClass__Sniper        = 8,
	ECharacterClass__Assassin      = 9,
	ECharacterClass__Priest        = 10,
	ECharacterClass__Saint         = 11,
	ECharacterClass__Paladin       = 12,
	ECharacterClass__ShieldMaiden  = 13,
	ECharacterClass__Valkyrie      = 14,
	ECharacterClass__Axler         = 15,
	ECharacterClass__Bard          = 16,
	ECharacterClass__ThunderBringer = 17,
	ECharacterClass__Enchantress   = 18,
	ECharacterClass__Huntress      = 19,
	ECharacterClass__Destroyer     = 20,
	ECharacterClass__Sacrifice     = 21,
	ECharacterClass__Max           = 22
};


// Enum ProjectLH.ECharacterBaseClass
enum class FProjectLH_ProjectLH_ECharacterBaseClass : uint8_t
{
	ECharacterBaseClass__None      = 0,
	ECharacterBaseClass__Warrior   = 1,
	ECharacterBaseClass__Sorceress = 2,
	ECharacterBaseClass__Rogue     = 3,
	ECharacterBaseClass__Priest    = 4,
	ECharacterBaseClass__ShieldMaiden = 5,
	ECharacterBaseClass__Max       = 6
};


// Enum ProjectLH.ECinematicName
enum class FProjectLH_ProjectLH_ECinematicName : uint8_t
{
	ECinematicName__None           = 0,
	ECinematicName__RealmWar       = 1,
	ECinematicName__ECinematicName_MAX = 2
};


// Enum ProjectLH.EPdsdkState
enum class FProjectLH_ProjectLH_EPdsdkState : uint8_t
{
	EPdsdkState__None              = 0,
	EPdsdkState__Inited            = 1,
	EPdsdkState__Logined           = 2,
	EPdsdkState__GameStarted       = 3,
	EPdsdkState__EPdsdkState_MAX   = 4
};


// Enum ProjectLH.EParticleDropState
enum class FProjectLH_ProjectLH_EParticleDropState : uint8_t
{
	EParticleDropState__DROP       = 0,
	EParticleDropState__BOUNCE     = 1,
	EParticleDropState__MOVE       = 2,
	EParticleDropState__EParticleDropState_MAX = 3
};


// Enum ProjectLH.EReturnReason
enum class FProjectLH_ProjectLH_EReturnReason : uint8_t
{
	EReturnReason__PlayerNull      = 0,
	EReturnReason__AutoBattleLoc_ExtandCheck_X1 = 1,
	EReturnReason__AutoBattleLoc_ExtandCheck_X2 = 2,
	EReturnReason__DeadLastLocCheck = 3,
	EReturnReason__DeadLastLocCheck_ExtandCheck_X1 = 4,
	EReturnReason__NaviVolumeAreaCheck = 5,
	EReturnReason__NaviVolumeAreaCheck_ExtandCheck_X1 = 6,
	EReturnReason__AutoBattleLoc_ExtandCheck_X4 = 7,
	EReturnReason__AutoBattleLoc_ExtandCheck_X8 = 8,
	EReturnReason__AutoBattleLoc_ExtandCheck_X16 = 9,
	EReturnReason__AutoBattleLoc_ExtandCheck_X32 = 10,
	EReturnReason__Max             = 11
};


// Enum ProjectLH.EMeshPart
enum class FProjectLH_ProjectLH_EMeshPart : uint8_t
{
	EMeshPart__Face                = 0,
	EMeshPart__Hair                = 1,
	EMeshPart__AvatarHead          = 2,
	EMeshPart__Weapon              = 3,
	EMeshPart__Wing                = 4,
	EMeshPart__DummyHair           = 5,
	EMeshPart__TransformWeapon     = 6,
	EMeshPart__TransformSubWeapon  = 7,
	EMeshPart__CostumeAddMesh      = 8,
	EMeshPart__SubSocketWeapon     = 9,
	EMeshPart__TempSocketWeapon    = 10,
	EMeshPart__TempSubSocketWeapon = 11,
	EMeshPart__Max                 = 12
};


// Enum ProjectLH.ESkillTargetCondition
enum class FProjectLH_ProjectLH_ESkillTargetCondition : uint8_t
{
	ESkillTargetCondition__None    = 0,
	ESkillTargetCondition__Nearest = 1,
	ESkillTargetCondition__LeastHpRate = 2,
	ESkillTargetCondition__ESkillTargetCondition_MAX = 3
};


// Enum ProjectLH.ESkillTargetFilter
enum class FProjectLH_ProjectLH_ESkillTargetFilter : uint8_t
{
	ESkillTargetFilter__None       = 0,
	ESkillTargetFilter__HasNoBuffIndex = 1,
	ESkillTargetFilter__HasNoBuffType = 2,
	ESkillTargetFilter__HasDebuff  = 3,
	ESkillTargetFilter__Dead       = 4,
	ESkillTargetFilter__ESkillTargetFilter_MAX = 5
};


// Enum ProjectLH.ESkillStyleAction
enum class FProjectLH_ProjectLH_ESkillStyleAction : uint8_t
{
	ESkillStyleAction__None        = 0,
	ESkillStyleAction__Left        = 1,
	ESkillStyleAction__Right       = 2,
	ESkillStyleAction__ESkillStyleAction_MAX = 3
};


// Enum ProjectLH.ESkillTimeTypes
enum class FProjectLH_ProjectLH_ESkillTimeTypes : uint8_t
{
	ESkillTimeTypes__None          = 0,
	ESkillTimeTypes__CoolTime      = 1,
	ESkillTimeTypes__CastTime      = 2,
	ESkillTimeTypes__ChannelingTime = 3,
	ESkillTimeTypes__ExtraDelayTime_ClientOnly = 4,
	ESkillTimeTypes__ESkillTimeTypes_MAX = 5
};


// Enum ProjectLH.EDashStyle
enum class FProjectLH_ProjectLH_EDashStyle : uint8_t
{
	EDashStyle__Dash               = 0,
	EDashStyle__Shunpo             = 1,
	EDashStyle__BackDash           = 2,
	EDashStyle__OneTime            = 3,
	EDashStyle__Dive               = 4,
	EDashStyle__EDashStyle_MAX     = 5
};


// Enum ProjectLH.ESocketResult
enum class FProjectLH_ProjectLH_ESocketResult : uint8_t
{
	ESocketResult__Success         = 0,
	ESocketResult__Failed          = 1,
	ESocketResult__Error           = 2,
	ESocketResult__ESocketResult_MAX = 3
};


// Enum ProjectLH.EBgmLayer
enum class FProjectLH_ProjectLH_EBgmLayer : uint8_t
{
	EBgmLayer__None                = 0,
	EBgmLayer__Field               = 1,
	EBgmLayer__Volume              = 2,
	EBgmLayer__Monster             = 3,
	EBgmLayer__Interacion          = 4,
	EBgmLayer__Sequence            = 5,
	EBgmLayer__Scene               = 6,
	EBgmLayer__Widget              = 7,
	EBgmLayer__Max                 = 8
};


// Enum ProjectLH.EManualTargetType
enum class FProjectLH_ProjectLH_EManualTargetType : uint8_t
{
	EManualTargetType__NotFriendly = 0,
	EManualTargetType__Friendly    = 1,
	EManualTargetType__Max         = 2
};


// Enum ProjectLH.EAvatarAchieveProgressLineType
enum class FProjectLH_ProjectLH_EAvatarAchieveProgressLineType : uint8_t
{
	EAvatarAchieveProgressLineType__Middle = 0,
	EAvatarAchieveProgressLineType__Top = 1,
	EAvatarAchieveProgressLineType__Bottom = 2,
	EAvatarAchieveProgressLineType__NoLine = 3,
	EAvatarAchieveProgressLineType__EAvatarAchieveProgressLineType_MAX = 4
};


// Enum ProjectLH.EStoneButtonState
enum class FProjectLH_ProjectLH_EStoneButtonState : uint8_t
{
	EStoneButtonState__AllClear    = 0,
	EStoneButtonState__TargetEquip = 1,
	EStoneButtonState__EStoneButtonState_MAX = 2
};


// Enum ProjectLH.EBlessingSlotActionType
enum class FProjectLH_ProjectLH_EBlessingSlotActionType : uint8_t
{
	EBlessingSlotActionType__SlotOpen = 0,
	EBlessingSlotActionType__SymbolChange = 1,
	EBlessingSlotActionType__SymbolInitialize = 2,
	EBlessingSlotActionType__SymbolAutoChange = 3,
	EBlessingSlotActionType__AutoSlotEnchant = 4,
	EBlessingSlotActionType__EBlessingSlotActionType_MAX = 5
};


// Enum ProjectLH.EBuyStateCp
enum class FProjectLH_ProjectLH_EBuyStateCp : uint8_t
{
	EBuyStateCp__EnableBuy         = 0,
	EBuyStateCp__Complete          = 1,
	EBuyStateCp__CannotBuy         = 2,
	EBuyStateCp__EBuyStateCp_MAX   = 3
};


// Enum ProjectLH.ELimitCheckItemType
enum class FProjectLH_ProjectLH_ELimitCheckItemType : uint8_t
{
	ELimitCheckItemType__None      = 0,
	ELimitCheckItemType__ServerMigration = 1,
	ELimitCheckItemType__Costume   = 2,
	ELimitCheckItemType__ELimitCheckItemType_MAX = 3
};


// Enum ProjectLH.EEffectState
enum class FProjectLH_ProjectLH_EEffectState : uint8_t
{
	EEffectState__None             = 0,
	EEffectState__Ready            = 1,
	EEffectState__StartDelay       = 2,
	EEffectState__Active           = 3,
	EEffectState__EndDelay         = 4,
	EEffectState__End              = 5,
	EEffectState__EEffectState_MAX = 6
};


// Enum ProjectLH.EFailedBuyReason
enum class FProjectLH_ProjectLH_EFailedBuyReason : uint8_t
{
	EFailedBuyReason__None         = 0,
	EFailedBuyReason__NotEnoughResource = 1,
	EFailedBuyReason__FullSlot     = 2,
	EFailedBuyReason__FullInventory = 3,
	EFailedBuyReason__NotEnoughStep = 4,
	EFailedBuyReason__AlreadyHaveItem = 5,
	EFailedBuyReason__AlreadyHaveCostume = 6,
	EFailedBuyReason__EFailedBuyReason_MAX = 7
};


// Enum ProjectLH.ECheatCostumeType
enum class FProjectLH_ProjectLH_ECheatCostumeType : uint8_t
{
	ECheatCostumeType__Costume     = 0,
	ECheatCostumeType__ECheatCostumeType_MAX = 1
};


// Enum ProjectLH.ECheatWeaponShapeType
enum class FProjectLH_ProjectLH_ECheatWeaponShapeType : uint8_t
{
	ECheatWeaponShapeType__WeaponShape = 0,
	ECheatWeaponShapeType__ECheatWeaponShapeType_MAX = 1
};


// Enum ProjectLH.ECheatBuffType
enum class FProjectLH_ProjectLH_ECheatBuffType : uint8_t
{
	ECheatBuffType__AddBuff        = 0,
	ECheatBuffType__ECheatBuffType_MAX = 1
};


// Enum ProjectLH.ECheatTitleType
enum class FProjectLH_ProjectLH_ECheatTitleType : uint8_t
{
	ECheatTitleType__GetTitle      = 0,
	ECheatTitleType__ECheatTitleType_MAX = 1
};


// Enum ProjectLH.ECheatAchievementCardType
enum class FProjectLH_ProjectLH_ECheatAchievementCardType : uint8_t
{
	ECheatAchievementCardType__GetAchievementCard = 0,
	ECheatAchievementCardType__ResetAchievementCard = 1,
	ECheatAchievementCardType__ECheatAchievementCardType_MAX = 2
};


// Enum ProjectLH.ECheatAchievementType
enum class FProjectLH_ProjectLH_ECheatAchievementType : uint8_t
{
	ECheatAchievementType__AchievementClear = 0,
	ECheatAchievementType__AchievementClearCount = 1,
	ECheatAchievementType__ECheatAchievementType_MAX = 2
};


// Enum ProjectLH.ECheatQuestType
enum class FProjectLH_ProjectLH_ECheatQuestType : uint8_t
{
	ECheatQuestType__QuestClear    = 0,
	ECheatQuestType__TimeOutQuestClear = 1,
	ECheatQuestType__ECheatQuestType_MAX = 2
};


// Enum ProjectLH.EPreset_Part
enum class FProjectLH_ProjectLH_EPreset_Part : uint8_t
{
	EPreset_Part__HAIR             = 0,
	EPreset_Part__FACE             = 1,
	EPreset_Part__UPPER_BODY       = 2,
	EPreset_Part__LOWER_BODY       = 3,
	EPreset_Part__MAX_PARTS        = 4,
	EPreset_Part__EPreset_MAX      = 5
};


// Enum ProjectLH.ETutorialInventoryType
enum class FProjectLH_ProjectLH_ETutorialInventoryType : uint8_t
{
	ETutorialInventoryType__None   = 0,
	ETutorialInventoryType__Enchant = 1,
	ETutorialInventoryType__Dismantle = 2,
	ETutorialInventoryType__Production = 3,
	ETutorialInventoryType__ETutorialInventoryType_MAX = 4
};


// Enum ProjectLH.ECheatVehicleType
enum class FProjectLH_ProjectLH_ECheatVehicleType : uint8_t
{
	ECheatVehicleType__GetVehicle  = 0,
	ECheatVehicleType__ECheatVehicleType_MAX = 1
};


// Enum ProjectLH.ECheatMapType
enum class FProjectLH_ProjectLH_ECheatMapType : uint8_t
{
	ECheatMapType__MoveMap         = 0,
	ECheatMapType__ECheatMapType_MAX = 1
};


// Enum ProjectLH.ECheatMonsterType
enum class FProjectLH_ProjectLH_ECheatMonsterType : uint8_t
{
	ECheatMonsterType__CreateMonster = 0,
	ECheatMonsterType__ECheatMonsterType_MAX = 1
};


// Enum ProjectLH.ECheatItemType
enum class FProjectLH_ProjectLH_ECheatItemType : uint8_t
{
	ECheatItemType__GetItem        = 0,
	ECheatItemType__ECheatItemType_MAX = 1
};


// Enum ProjectLH.ELHCommisionInfoType
enum class FProjectLH_ProjectLH_ELHCommisionInfoType : uint8_t
{
	ELHCommisionInfoType__None     = 0,
	ELHCommisionInfoType__Exchange_TopMenu = 1,
	ELHCommisionInfoType__Exchange_RegisterItem = 2,
	ELHCommisionInfoType__GuildAuction_TopMenu = 3,
	ELHCommisionInfoType__GuildAuction_Distribute = 4,
	ELHCommisionInfoType__TaxDistribute = 5,
	ELHCommisionInfoType__MercenaryReward = 6,
	ELHCommisionInfoType__ELHCommisionInfoType_MAX = 7
};


// Enum ProjectLH.ETabStyle
enum class FProjectLH_ProjectLH_ETabStyle : uint8_t
{
	ETabStyle__None                = 0,
	ETabStyle__Exchange            = 1,
	ETabStyle__Production          = 2,
	ETabStyle__GuildAuctionTarget  = 3,
	ETabStyle__Recovery            = 4,
	ETabStyle__Blessing            = 5,
	ETabStyle__GuildProduction     = 6,
	ETabStyle__ETabStyle_MAX       = 7
};


// Enum ProjectLH.ECheatAvatarType
enum class FProjectLH_ProjectLH_ECheatAvatarType : uint8_t
{
	ECheatAvatarType__GetAvatar    = 0,
	ECheatAvatarType__ECheatAvatarType_MAX = 1
};


// Enum ProjectLH.ECheatFilterType
enum class FProjectLH_ProjectLH_ECheatFilterType : uint8_t
{
	ECheatFilterType__None         = 0,
	ECheatFilterType__Recent       = 1,
	ECheatFilterType__Client       = 2,
	ECheatFilterType__Server       = 3,
	ECheatFilterType__Custom       = 4,
	ECheatFilterType__ECheatFilterType_MAX = 5
};


// Enum ProjectLH.ELHDebugInfoType
enum class FProjectLH_ProjectLH_ELHDebugInfoType : uint8_t
{
	ELHDebugInfoType__TargetInfo   = 0,
	ELHDebugInfoType__MoveInfo     = 1,
	ELHDebugInfoType__QuickSlot_Skill = 2,
	ELHDebugInfoType__EquipPreset  = 3,
	ELHDebugInfoType__TestInfo     = 4,
	ELHDebugInfoType__ReserveSkillInfo = 5,
	ELHDebugInfoType__AutoImprint  = 6,
	ELHDebugInfoType__AutoScheduler = 7,
	ELHDebugInfoType__ELHDebugInfoType_MAX = 8
};


// Enum ProjectLH.EResourceDataType
enum class FProjectLH_ProjectLH_EResourceDataType : uint8_t
{
	EResourceDataType__Character   = 0,
	EResourceDataType__CharacterMesh = 1,
	EResourceDataType__UI          = 2,
	EResourceDataType__CharacterViewer = 3,
	EResourceDataType__Player      = 4,
	EResourceDataType__InGame      = 5,
	EResourceDataType__Quest       = 6,
	EResourceDataType__Customizing = 7,
	EResourceDataType__Cinematic   = 8,
	EResourceDataType__WorldMap    = 9,
	EResourceDataType__CharacterSelect = 10,
	EResourceDataType__Realmwar    = 11,
	EResourceDataType__Tutorial    = 12,
	EResourceDataType__Buff        = 13,
	EResourceDataType__Sound       = 14,
	EResourceDataType__RandomBoxAvatar = 15,
	EResourceDataType__RandomBoxVehicle = 16,
	EResourceDataType__RandomBoxWeapon = 17,
	EResourceDataType__GuildStronghold = 18,
	EResourceDataType__GuildDefense = 19,
	EResourceDataType__Vehicle     = 20,
	EResourceDataType__GuildBattlefield = 21,
	EResourceDataType__RandomBoxPet = 22,
	EResourceDataType__PK          = 23,
	EResourceDataType__EResourceDataType_MAX = 24
};


// Enum ProjectLH.ESunMoonWidgetState
enum class FProjectLH_ProjectLH_ESunMoonWidgetState : uint8_t
{
	ESunMoonWidgetState__None      = 0,
	ESunMoonWidgetState__FullCharged = 1,
	ESunMoonWidgetState__Hold      = 2,
	ESunMoonWidgetState__Max       = 3
};


// Enum ProjectLH.ECheckAutoPlayState
enum class FProjectLH_ProjectLH_ECheckAutoPlayState : uint8_t
{
	ECheckAutoPlayState__Check_None = 0,
	ECheckAutoPlayState__Check_MapMove = 1,
	ECheckAutoPlayState__Check_AutoMove = 2,
	ECheckAutoPlayState__Check_ConsumeRandomTeleport = 3,
	ECheckAutoPlayState__Check_ItemBuy = 4,
	ECheckAutoPlayState__Check_EXPRepair = 5,
	ECheckAutoPlayState__Check_AutoInteract = 6,
	ECheckAutoPlayState__Check_WayPointMove = 7,
	ECheckAutoPlayState__Check_Dismantle = 8,
	ECheckAutoPlayState__Check_PartyCreate = 9,
	ECheckAutoPlayState__Check_ProgressDungeon = 10,
	ECheckAutoPlayState__Check_MAX = 11
};


// Enum ProjectLH.EConfirmContentType
enum class FProjectLH_ProjectLH_EConfirmContentType : uint8_t
{
	EConfirmContentType__None      = 0,
	EConfirmContentType__Avatar    = 1,
	EConfirmContentType__Vehicle   = 2,
	EConfirmContentType__WeaponShape = 3,
	EConfirmContentType__Pet       = 4,
	EConfirmContentType__EConfirmContentType_MAX = 5
};


// Enum ProjectLH.ELionRouletteRewardReasonType
enum class FProjectLH_ProjectLH_ELionRouletteRewardReasonType : uint8_t
{
	ELionRouletteRewardReasonType__None = 0,
	ELionRouletteRewardReasonType__Success = 1,
	ELionRouletteRewardReasonType__Fail = 2,
	ELionRouletteRewardReasonType__Stop = 3,
	ELionRouletteRewardReasonType__MAX = 4
};


// Enum ProjectLH.EGameEventPointType
enum class FProjectLH_ProjectLH_EGameEventPointType : uint8_t
{
	EGameEventPointType__None      = 0,
	EGameEventPointType__Resource  = 1,
	EGameEventPointType__Reward    = 2,
	EGameEventPointType__MAX       = 3
};


// Enum ProjectLH.ERoskvaEventButtonType
enum class FProjectLH_ProjectLH_ERoskvaEventButtonType : uint8_t
{
	ERoskvaEventButtonType__NormalThrow = 0,
	ERoskvaEventButtonType__Opportunity = 1,
	ERoskvaEventButtonType__ERoskvaEventButtonType_MAX = 2
};


// Enum ProjectLH.EEnchantMiniGameState
enum class FProjectLH_ProjectLH_EEnchantMiniGameState : uint8_t
{
	EEnchantMiniGameState__None    = 0,
	EEnchantMiniGameState__Start   = 1,
	EEnchantMiniGameState__Doing   = 2,
	EEnchantMiniGameState__MAX     = 3
};


// Enum ProjectLH.EDiceType
enum class FProjectLH_ProjectLH_EDiceType : uint8_t
{
	EDiceType__None                = 0,
	EDiceType__OddNumber_1_3       = 1,
	EDiceType__EvenNumber_2_4      = 2,
	EDiceType__EDiceType_MAX       = 3
};


// Enum ProjectLH.ERpsState
enum class FProjectLH_ProjectLH_ERpsState : uint8_t
{
	ERpsState__None                = 0,
	ERpsState__Rock                = 1,
	ERpsState__Paper               = 2,
	ERpsState__Scissors            = 3,
	ERpsState__MAX                 = 4
};


// Enum ProjectLH.ESDCharacterState
enum class FProjectLH_ProjectLH_ESDCharacterState : uint8_t
{
	ESDCharacterState__Idle        = 0,
	ESDCharacterState__MoveStart   = 1,
	ESDCharacterState__MoveJump    = 2,
	ESDCharacterState__MoveFall    = 3,
	ESDCharacterState__MoveEnd     = 4,
	ESDCharacterState__Bonus       = 5,
	ESDCharacterState__Max         = 6
};


// Enum ProjectLH.EItemSearchPopupPos
enum class FProjectLH_ProjectLH_EItemSearchPopupPos : uint8_t
{
	EItemSearchPopupPos__Exchange  = 0,
	EItemSearchPopupPos__ItemCollection = 1,
	EItemSearchPopupPos__EItemSearchPopupPos_MAX = 2
};


// Enum ProjectLH.EFriendInviteTabType
enum class FProjectLH_ProjectLH_EFriendInviteTabType : uint8_t
{
	EFriendInviteTabType__Search   = 0,
	EFriendInviteTabType__Guild    = 1,
	EFriendInviteTabType__EFriendInviteTabType_MAX = 2
};


// Enum ProjectLH.EGoogleBillingPopupType
enum class FProjectLH_ProjectLH_EGoogleBillingPopupType : uint8_t
{
	EGoogleBillingPopupType__CheckGoogleAuth = 0,
	EGoogleBillingPopupType__CheckPurchase = 1,
	EGoogleBillingPopupType__CheckGoogleAuth_Restore = 2,
	EGoogleBillingPopupType__CheckZilongPurchase = 3,
	EGoogleBillingPopupType__EGoogleBillingPopupType_MAX = 4
};


// Enum ProjectLH.EGuildBattlefieldRankType
enum class FProjectLH_ProjectLH_EGuildBattlefieldRankType : uint8_t
{
	EGuildBattlefieldRankType__ReturnPoint = 0,
	EGuildBattlefieldRankType__KillPoint = 1,
	EGuildBattlefieldRankType__Damaged = 2,
	EGuildBattlefieldRankType__Damage = 3,
	EGuildBattlefieldRankType__Heal = 4,
	EGuildBattlefieldRankType__Max = 5
};


// Enum ProjectLH.ESelectPhaseDungeon
enum class FProjectLH_ProjectLH_ESelectPhaseDungeon : uint8_t
{
	ESelectPhaseDungeon__DungeonA  = 0,
	ESelectPhaseDungeon__DungeonB  = 1,
	ESelectPhaseDungeon__ESelectPhaseDungeon_MAX = 2
};


// Enum ProjectLH.ESelectPhase
enum class FProjectLH_ProjectLH_ESelectPhase : uint8_t
{
	ESelectPhase__PrevPhase        = 0,
	ESelectPhase__CurPhase         = 1,
	ESelectPhase__ESelectPhase_MAX = 2
};


// Enum ProjectLH.EIconMultiTextShowFlags
enum class FProjectLH_ProjectLH_EIconMultiTextShowFlags : uint8_t
{
	EIconMultiTextShowFlags__None  = 0,
	EIconMultiTextShowFlags__ShowIcon = 1,
	EIconMultiTextShowFlags__ShowTitle = 2,
	EIconMultiTextShowFlags__ShowExplain = 3,
	EIconMultiTextShowFlags__ShowAll = 4,
	EIconMultiTextShowFlags__EIconMultiTextShowFlags_MAX = 5
};


// Enum ProjectLH.ELHInfoBtnState
enum class FProjectLH_ProjectLH_ELHInfoBtnState : uint8_t
{
	ELHInfoBtnState__None          = 0,
	ELHInfoBtnState__On            = 1,
	ELHInfoBtnState__Emphasis      = 2,
	ELHInfoBtnState__ELHInfoBtnState_MAX = 3
};


// Enum ProjectLH.EDuelTeamPopupState
enum class FProjectLH_ProjectLH_EDuelTeamPopupState : uint8_t
{
	EDuelTeamPopupState__None      = 0,
	EDuelTeamPopupState__MakeRoom  = 1,
	EDuelTeamPopupState__JoinRoom  = 2,
	EDuelTeamPopupState__ChangeTeam = 3,
	EDuelTeamPopupState__EDuelTeamPopupState_MAX = 4
};


// Enum ProjectLH.ECastleWarTapState
enum class FProjectLH_ProjectLH_ECastleWarTapState : uint8_t
{
	ECastleWarTapState__GuildMember = 0,
	ECastleWarTapState__Mercenary  = 1,
	ECastleWarTapState__MAX        = 2
};


// Enum ProjectLH.EMemberListType
enum class FProjectLH_ProjectLH_EMemberListType : uint8_t
{
	EMemberListType__Type_Default  = 0,
	EMemberListType__Type_CastleWar = 1,
	EMemberListType__MAX           = 2
};


// Enum ProjectLH.EVehicleGradeIconType
enum class FProjectLH_ProjectLH_EVehicleGradeIconType : uint8_t
{
	EVehicleGradeIconType__Normal  = 0,
	EVehicleGradeIconType__Rect    = 1,
	EVehicleGradeIconType__EVehicleGradeIconType_MAX = 2
};


// Enum ProjectLH.ELimitedBMHideReason
enum class FProjectLH_ProjectLH_ELimitedBMHideReason : uint8_t
{
	ELimitedBMHideReason__None     = 0,
	ELimitedBMHideReason__ShowCenterChatting = 1,
	ELimitedBMHideReason__ShowTargetingInfo = 2,
	ELimitedBMHideReason__ELimitedBMHideReason_MAX = 3
};


// Enum ProjectLH.EGameMenuType
enum class FProjectLH_ProjectLH_EGameMenuType : uint8_t
{
	EGameMenuType__SkillBook       = 0,
	EGameMenuType__Quest           = 1,
	EGameMenuType__Dungeon         = 2,
	EGameMenuType__Vehicle         = 3,
	EGameMenuType__Raid            = 4,
	EGameMenuType__Collection      = 5,
	EGameMenuType__Achievement     = 6,
	EGameMenuType__PVP             = 7,
	EGameMenuType__Arena           = 8,
	EGameMenuType__Ranking         = 9,
	EGameMenuType__PK              = 10,
	EGameMenuType__Guild           = 11,
	EGameMenuType__Friend          = 12,
	EGameMenuType__ReturnLobby     = 13,
	EGameMenuType__Option          = 14,
	EGameMenuType__Production      = 15,
	EGameMenuType__Exchange        = 16,
	EGameMenuType__SealedStone     = 17,
	EGameMenuType__Rune            = 18,
	EGameMenuType__Cafe            = 19,
	EGameMenuType__PCKey           = 20,
	EGameMenuType__MAX             = 21,
	EGameMenuType__MyInfo          = 22,
	EGameMenuType__Avatar          = 23,
	EGameMenuType__Mail            = 24,
	EGameMenuType__DailyMission    = 25,
	EGameMenuType__Event           = 26,
	EGameMenuType__CashShop        = 27,
	EGameMenuType__Inven           = 28,
	EGameMenuType__Alarm           = 29,
	EGameMenuType__Menu            = 30,
	EGameMenuType__SpecialPackage  = 31,
	EGameMenuType__Gamble          = 32,
	EGameMenuType__Imprint         = 33,
	EGameMenuType__Blessing        = 34,
	EGameMenuType__WeaponShape     = 35,
	EGameMenuType__CastleWar       = 36,
	EGameMenuType__Link            = 37,
	EGameMenuType__Alchemy         = 38,
	EGameMenuType__Pet             = 39,
	EGameMenuType__COUNT           = 40
};


// Enum ProjectLH.EOdinCouponUiMainType
enum class FProjectLH_ProjectLH_EOdinCouponUiMainType : uint8_t
{
	EOdinCouponUiMainType__EpuipInfo = 0,
	EOdinCouponUiMainType__GachaInfo = 1,
	EOdinCouponUiMainType__Max     = 2
};


// Enum ProjectLH.EChInfoCategory
enum class FProjectLH_ProjectLH_EChInfoCategory : uint8_t
{
	EChInfoCategory__None          = 0,
	EChInfoCategory__Attack        = 1,
	EChInfoCategory__Defence       = 2,
	EChInfoCategory__ETC           = 3,
	EChInfoCategory__Abnormal      = 4,
	EChInfoCategory__EChInfoCategory_MAX = 5
};


// Enum ProjectLH.ELinkAutoSummonOption
enum class FProjectLH_ProjectLH_ELinkAutoSummonOption : uint8_t
{
	ELinkAutoSummonOption__None    = 0,
	ELinkAutoSummonOption__AutoReset_FirstSlot = 1,
	ELinkAutoSummonOption__AutoReset_LackSummonCount = 2,
	ELinkAutoSummonOption__AutoReset_NotComplete = 3,
	ELinkAutoSummonOption__AutoStop_MaxGrade = 4,
	ELinkAutoSummonOption__MAX     = 5
};


// Enum ProjectLH.EMiniMapSwitcherIndex
enum class FProjectLH_ProjectLH_EMiniMapSwitcherIndex : uint8_t
{
	EMiniMapSwitcherIndex__MiniMapPanel = 0,
	EMiniMapSwitcherIndex__HidePanel = 1,
	EMiniMapSwitcherIndex__EMiniMapSwitcherIndex_MAX = 2
};


// Enum ProjectLH.EMiniMapButtons
enum class FProjectLH_ProjectLH_EMiniMapButtons : uint8_t
{
	EMiniMapButtons__MiniMapShow   = 0,
	EMiniMapButtons__SavePoint     = 1,
	EMiniMapButtons__CameraMode    = 2,
	EMiniMapButtons__Chatting      = 3,
	EMiniMapButtons__ReturnExit    = 4,
	EMiniMapButtons__SleepMode     = 5,
	EMiniMapButtons__WorldMap      = 6,
	EMiniMapButtons__WorldBoss     = 7,
	EMiniMapButtons__RealmWarJoin  = 8,
	EMiniMapButtons__Schedule      = 9,
	EMiniMapButtons__Sense         = 10,
	EMiniMapButtons__EMiniMapButtons_MAX = 11
};


// Enum ProjectLH.EMsgEventButtonType
enum class FProjectLH_ProjectLH_EMsgEventButtonType : uint8_t
{
	EMsgEventButtonType__Left      = 0,
	EMsgEventButtonType__Right     = 1,
	EMsgEventButtonType__Cancle    = 2,
	EMsgEventButtonType__Close     = 3,
	EMsgEventButtonType__Screen    = 4,
	EMsgEventButtonType__EMsgEventButtonType_MAX = 5
};


// Enum ProjectLH.ENpcShopType
enum class FProjectLH_ProjectLH_ENpcShopType : uint8_t
{
	ENpcShopType__None             = 0,
	ENpcShopType__NpcShop          = 1,
	ENpcShopType__ExchangeNpcShop  = 2,
	ENpcShopType__ShadowDungeonShop = 3,
	ENpcShopType__SKillBookShop    = 4,
	ENpcShopType__CastleWarShop    = 5,
	ENpcShopType__WorldShadowDungeonShop = 6,
	ENpcShopType__ServerInvasionShop = 7,
	ENpcShopType__ENpcShopType_MAX = 8
};


// Enum ProjectLH.EBulkPurchaseCategory
enum class FProjectLH_ProjectLH_EBulkPurchaseCategory : uint8_t
{
	EBulkPurchaseCategory__None    = 0,
	EBulkPurchaseCategory__Default = 1,
	EBulkPurchaseCategory__Limited = 2,
	EBulkPurchaseCategory__EBulkPurchaseCategory_MAX = 3
};


// Enum ProjectLH.ELockOnType
enum class FProjectLH_ProjectLH_ELockOnType : uint8_t
{
	ELockOnType__Character         = 0,
	ELockOnType__Interaction       = 1,
	ELockOnType__Max               = 2
};


// Enum ProjectLH.EOptionAccountSystemButton
enum class FProjectLH_ProjectLH_EOptionAccountSystemButton : uint8_t
{
	EOptionAccountSystemButton__CS = 0,
	EOptionAccountSystemButton__ShowNotice = 1,
	EOptionAccountSystemButton__BuyRestore = 2,
	EOptionAccountSystemButton__Unregister = 3,
	EOptionAccountSystemButton__Credits = 4,
	EOptionAccountSystemButton__Escape = 5,
	EOptionAccountSystemButton__Max = 6
};


// Enum ProjectLH.EPetAchieveProgressLineType
enum class FProjectLH_ProjectLH_EPetAchieveProgressLineType : uint8_t
{
	EPetAchieveProgressLineType__Middle = 0,
	EPetAchieveProgressLineType__Top = 1,
	EPetAchieveProgressLineType__Bottom = 2,
	EPetAchieveProgressLineType__EPetAchieveProgressLineType_MAX = 3
};


// Enum ProjectLH.ESavePointButtonState
enum class FProjectLH_ProjectLH_ESavePointButtonState : uint8_t
{
	ESavePointButtonState__None    = 0,
	ESavePointButtonState__NotEnoughSlot = 1,
	ESavePointButtonState__NormalVehicle = 2,
	ESavePointButtonState__NoEquipVehicle = 3,
	ESavePointButtonState__ESavePointButtonState_MAX = 4
};


// Enum ProjectLH.ELHProductionSequence
enum class FProjectLH_ProjectLH_ELHProductionSequence : uint8_t
{
	ELHProductionSequence__None    = 0,
	ELHProductionSequence__Idle    = 1,
	ELHProductionSequence__Single  = 2,
	ELHProductionSequence__Multi   = 3,
	ELHProductionSequence__ELHProductionSequence_MAX = 4
};


// Enum ProjectLH.ERandomboxParticleType
enum class FProjectLH_ProjectLH_ERandomboxParticleType : uint8_t
{
	ERandomboxParticleType__None   = 0,
	ERandomboxParticleType__AppearLowGrade = 1,
	ERandomboxParticleType__AppearHighGrade = 2,
	ERandomboxParticleType__OffRobeRare = 3,
	ERandomboxParticleType__OffRobeHero = 4,
	ERandomboxParticleType__OffRobeLegend = 5,
	ERandomboxParticleType__ERandomboxParticleType_MAX = 6
};


// Enum ProjectLH.ERealmWarTabs
enum class FProjectLH_ProjectLH_ERealmWarTabs : uint8_t
{
	ERealmWarTabs__Info            = 0,
	ERealmWarTabs__Result          = 1,
	ERealmWarTabs__Max             = 2
};


// Enum ProjectLH.ESummonProgressState
enum class FProjectLH_ProjectLH_ESummonProgressState : uint8_t
{
	ESummonProgressState__None     = 0,
	ESummonProgressState__MoveUp_BackProgress = 1,
	ESummonProgressState__MoveUp_FrontProgress = 2,
	ESummonProgressState__MoveDown_FrontProgress = 3,
	ESummonProgressState__MoveDown_BackProgress = 4,
	ESummonProgressState__ESummonProgressState_MAX = 5
};


// Enum ProjectLH.EServerMigrationCheckList
enum class FProjectLH_ProjectLH_EServerMigrationCheckList : uint8_t
{
	EServerMigrationCheckList__ServerSelect = 0,
	EServerMigrationCheckList__Guild = 1,
	EServerMigrationCheckList__GuildJoinApply = 2,
	EServerMigrationCheckList__Letter = 3,
	EServerMigrationCheckList__ExchangeItem = 4,
	EServerMigrationCheckList__ExchangeCash = 5,
	EServerMigrationCheckList__CashShop = 6,
	EServerMigrationCheckList__DeathPenalty = 7,
	EServerMigrationCheckList__Town = 8,
	EServerMigrationCheckList__PresetSecond = 9,
	EServerMigrationCheckList__PresetThird = 10,
	EServerMigrationCheckList__History = 11,
	EServerMigrationCheckList__GuildMercenaryApply = 12,
	EServerMigrationCheckList__GuildMercenaryJoin = 13,
	EServerMigrationCheckList__Max = 14
};


// Enum ProjectLH.EAttendanceSwitcherState
enum class FProjectLH_ProjectLH_EAttendanceSwitcherState : uint8_t
{
	EAttendanceSwitcherState__BidRank = 0,
	EAttendanceSwitcherState__QualifierJoin = 1,
	EAttendanceSwitcherState__CastleWarEnter = 2,
	EAttendanceSwitcherState__MAX  = 3
};


// Enum ProjectLH.EMainTabState
enum class FProjectLH_ProjectLH_EMainTabState : uint8_t
{
	EMainTabState__GuildMember     = 0,
	EMainTabState__Mercenary       = 1,
	EMainTabState__MAX             = 2
};


// Enum ProjectLH.EExtraBuffDescType
enum class FProjectLH_ProjectLH_EExtraBuffDescType : uint8_t
{
	EExtraBuffDescType__None       = 0,
	EExtraBuffDescType__HuntInstinct = 1,
	EExtraBuffDescType__DuelInstinct = 2,
	EExtraBuffDescType__NeedHpPercentSkill = 3,
	EExtraBuffDescType__MAX        = 4
};


// Enum ProjectLH.ESkillDescInfo
enum class FProjectLH_ProjectLH_ESkillDescInfo : uint8_t
{
	ESkillDescInfo__None           = 0,
	ESkillDescInfo__SkillInfo      = 1,
	ESkillDescInfo__SkillInfo_NeedResourceHpMp = 2,
	ESkillDescInfo__SkillInfo_NeedResourceSeal = 3,
	ESkillDescInfo__SkillInfo_CoolTime = 4,
	ESkillDescInfo__OptionInfo     = 5,
	ESkillDescInfo__BuffInfo       = 6,
	ESkillDescInfo__SkillSubInfo   = 7,
	ESkillDescInfo__SkillInfo_NeedResourceMelody = 8,
	ESkillDescInfo__SkillInfo_AddSunMoonPoint = 9,
	ESkillDescInfo__SkillInfo_SacrificePoint = 10,
	ESkillDescInfo__ESkillDescInfo_MAX = 11
};


// Enum ProjectLH.EVehicleAchieveProgressLineType
enum class FProjectLH_ProjectLH_EVehicleAchieveProgressLineType : uint8_t
{
	EVehicleAchieveProgressLineType__Middle = 0,
	EVehicleAchieveProgressLineType__Top = 1,
	EVehicleAchieveProgressLineType__Bottom = 2,
	EVehicleAchieveProgressLineType__NoLine = 3,
	EVehicleAchieveProgressLineType__EVehicleAchieveProgressLineType_MAX = 4
};


// Enum ProjectLH.EVehicleRewardPopupUIState
enum class FProjectLH_ProjectLH_EVehicleRewardPopupUIState : uint8_t
{
	EVehicleRewardPopupUIState__None = 0,
	EVehicleRewardPopupUIState__Dark = 1,
	EVehicleRewardPopupUIState__NoRender = 2,
	EVehicleRewardPopupUIState__OpenCard = 3,
	EVehicleRewardPopupUIState__OpenAll = 4,
	EVehicleRewardPopupUIState__OpenCardResult = 5,
	EVehicleRewardPopupUIState__EndRandomBox_Ready = 6,
	EVehicleRewardPopupUIState__EndRandomBox = 7,
	EVehicleRewardPopupUIState__EVehicleRewardPopupUIState_MAX = 8
};


// Enum ProjectLH.EWeaponAchieveProgressLineType
enum class FProjectLH_ProjectLH_EWeaponAchieveProgressLineType : uint8_t
{
	EWeaponAchieveProgressLineType__Middle = 0,
	EWeaponAchieveProgressLineType__Top = 1,
	EWeaponAchieveProgressLineType__Bottom = 2,
	EWeaponAchieveProgressLineType__NoLine = 3,
	EWeaponAchieveProgressLineType__EWeaponAchieveProgressLineType_MAX = 4
};


// Enum ProjectLH.EWorldMapViewDistance
enum class FProjectLH_ProjectLH_EWorldMapViewDistance : uint8_t
{
	EWorldMapViewDistance__None    = 0,
	EWorldMapViewDistance__Far     = 1,
	EWorldMapViewDistance__Normal  = 2,
	EWorldMapViewDistance__Near    = 3,
	EWorldMapViewDistance__EWorldMapViewDistance_MAX = 4
};


// Enum ProjectLH.EWidgetActionState
enum class FProjectLH_ProjectLH_EWidgetActionState : uint8_t
{
	EWidgetActionState__None       = 0,
	EWidgetActionState__ExecuteAction = 1,
	EWidgetActionState__ReleaseAction = 2,
	EWidgetActionState__EWidgetActionState_MAX = 3
};


// Enum ProjectLH.EPetRewardPopupUIState
enum class FProjectLH_ProjectLH_EPetRewardPopupUIState : uint8_t
{
	EPetRewardPopupUIState__None   = 0,
	EPetRewardPopupUIState__Dark   = 1,
	EPetRewardPopupUIState__NoRender = 2,
	EPetRewardPopupUIState__OpenCard = 3,
	EPetRewardPopupUIState__OpenAll = 4,
	EPetRewardPopupUIState__OpenCardResult = 5,
	EPetRewardPopupUIState__EndRandomBox_Ready = 6,
	EPetRewardPopupUIState__EndRandomBox = 7,
	EPetRewardPopupUIState__EPetRewardPopupUIState_MAX = 8
};


// Enum ProjectLH.EWidgetInvisibleFlag
enum class FProjectLH_ProjectLH_EWidgetInvisibleFlag : uint8_t
{
	EWidgetInvisibleFlag__ActorDisappear = 0,
	EWidgetInvisibleFlag__Culling  = 1,
	EWidgetInvisibleFlag__NotATarget = 2,
	EWidgetInvisibleFlag__StartupCamera = 3,
	EWidgetInvisibleFlag__NpcTalk  = 4,
	EWidgetInvisibleFlag__Buff     = 5,
	EWidgetInvisibleFlag__ViewerMode = 6,
	EWidgetInvisibleFlag__WorldMap = 7,
	EWidgetInvisibleFlag__Quest    = 8,
	EWidgetInvisibleFlag__EWidgetInvisibleFlag_MAX = 9
};


// Enum ProjectLH.EWidgetActionMoveEaseType
enum class FProjectLH_ProjectLH_EWidgetActionMoveEaseType : uint8_t
{
	EWidgetActionMoveEaseType__UseRate = 0,
	EWidgetActionMoveEaseType__BackOut = 1,
	EWidgetActionMoveEaseType__BackIn = 2,
	EWidgetActionMoveEaseType__EWidgetActionMoveEaseType_MAX = 3
};


// Enum ProjectLH.ELHButtonLockOption
enum class FProjectLH_ProjectLH_ELHButtonLockOption : uint8_t
{
	ELHButtonLockOption__Dimmed    = 0,
	ELHButtonLockOption__Invisible = 1,
	ELHButtonLockOption__ELHButtonLockOption_MAX = 2
};


// Enum ProjectLH.EDungeonRewardFilter
enum class FProjectLH_ProjectLH_EDungeonRewardFilter : uint8_t
{
	EDungeonRewardFilter__All      = 0,
	EDungeonRewardFilter__BossOnly = 1,
	EDungeonRewardFilter__BossWithout = 2,
	EDungeonRewardFilter__LastBossOnly = 3,
	EDungeonRewardFilter__MAX      = 4
};


// Enum ProjectLH.EClassEnableState
enum class FProjectLH_ProjectLH_EClassEnableState : uint8_t
{
	EClassEnableState__Enabled     = 0,
	EClassEnableState__SomeDisable = 1,
	EClassEnableState__AllDisable  = 2,
	EClassEnableState__EClassEnableState_MAX = 3
};


// Enum ProjectLH.EWidgetActionScaleEaseType
enum class FProjectLH_ProjectLH_EWidgetActionScaleEaseType : uint8_t
{
	EWidgetActionScaleEaseType__UseRate = 0,
	EWidgetActionScaleEaseType__BackOut = 1,
	EWidgetActionScaleEaseType__BackIn = 2,
	EWidgetActionScaleEaseType__EWidgetActionScaleEaseType_MAX = 3
};


// Enum ProjectLH.EWorldDungeonMenuType
enum class FProjectLH_ProjectLH_EWorldDungeonMenuType : uint8_t
{
	GuildList                      = 0,
	Area01                         = 1,
	Area02                         = 2,
	Area03                         = 3,
	Area04                         = 4,
	Area05                         = 5,
	WarpChanel01                   = 6,
	WarpChanel02                   = 7,
	WarpChanel03                   = 8,
	WorldDungeonLevel2             = 9,
	WorldDungeonLevel3             = 10,
	EWorldDungeonMenuType_MAX      = 11
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProjectLH.CanChangeGradeInfo
// 0x0050
struct FProjectLH_CanChangeGradeInfo
{
	TMap<FCommonSource_CommonSource_EGrade, class UCommonSource_ChangeGradeRecord*> dataMap;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.CanChangeItemGradeInfo
// 0x0050
struct FProjectLH_CanChangeItemGradeInfo
{
	TMap<FCommonSource_CommonSource_EItemGrade, class UCommonSource_ChangeItemGradeRecord*> dataMap;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.CanChangeItemTypeInfo
// 0x0050
struct FProjectLH_CanChangeItemTypeInfo
{
	TMap<FCommonSource_CommonSource_EItemType, class UCommonSource_ItemChangePartsRecord*> dataMap;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.NameCodeByEnum
// 0x0050
struct FProjectLH_NameCodeByEnum
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ProjectLH.CategoryInfoOfGroup0
// 0x0058
struct FProjectLH_CategoryInfoOfGroup0
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResourceIndicator
// 0x0050
struct FProjectLH_LHResourceIndicator
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHItemIndicator
// 0x0050
struct FProjectLH_LHItemIndicator
{
	TMap<FCommonSource_CommonSource_ERewardReason, struct FString> Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.HitFreeze
// 0x0008
struct FProjectLH_HitFreeze
{
	bool                                               HitFreeze;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HitFreeze_I;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HitFreeze_You;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              HitFreeze_Duration;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.BuffObjectMaterialParamVector
// 0x0018
struct FProjectLH_BuffObjectMaterialParamVector
{
	struct FLinearColor                                MaterialParamValueVector;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialParamName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.BuffObjectMaterialParamScalar
// 0x000C
struct FProjectLH_BuffObjectMaterialParamScalar
{
	float                                              MaterialParamValueScalar;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialParamName;                                        // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHSkillCameraShake
// 0x0020
struct FProjectLH_LHSkillCameraShake
{
	bool                                               Player_Only;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GlobalShake;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              GlobalShake_Distance;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Shake;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientShakeTowardsEpicenter;                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.TouchPressInfo
// 0x0020
struct FProjectLH_TouchPressInfo
{
	bool                                               bPress;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Position2D;                                               // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BeginPosition2D;                                          // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position3D;                                               // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.SocketWeaponPoseAnimData
// 0x0018
struct FProjectLH_SocketWeaponPoseAnimData
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_AnimSequence*                        MainSocketAnim;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_AnimSequence*                        SubSocketAnim;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.SkeletalMeshSet
// 0x0028
struct FProjectLH_SkeletalMeshSet
{
	class UEngine_SkeletalMeshComponent*               Main;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               Face;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               Hair;                                                     // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               Weapon;                                                   // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               Head;                                                     // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_SoundCue
// 0x0018
struct FProjectLH_LHResource_SoundCue
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.BlendAlhpa
// 0x0014
struct FProjectLH_BlendAlhpa
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlendCameraZoom
// 0x0038
struct FProjectLH_BlendCameraZoom
{
	struct FProjectLH_BlendAlhpa                       BlendAlpha;                                               // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
	class UEngine_CurveFloat*                          CurveValue;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.BlendCameraParam
// 0x002C
struct FProjectLH_BlendCameraParam
{
	struct FProjectLH_BlendAlhpa                       BlendAlpha;                                               // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0014(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.CameraMinMax
// 0x0008
struct FProjectLH_CameraMinMax
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHCameraParam
// 0x0054
struct FProjectLH_LHCameraParam
{
	float                                              CameraZoomSpeed;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraZoomLagSpeed;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraInterpSpeed;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTargetArmLength;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FProjectLH_CameraMinMax                     ZoomMinMax;                                               // 0x0010(0x0008) (Edit)
	struct FProjectLH_CameraMinMax                     RidingZoomMinMax;                                         // 0x0018(0x0008) (Edit)
	float                                              ZoomApplyRatioPitch;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomApplyPitch;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UsePitchMinMax;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ViewPitchMin;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseYawTouchRotation;                                      // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FVector                                     SocketOffset;                                             // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseDOF;                                                   // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.ViewerPose_AnimSequence
// 0x0010
struct FProjectLH_ViewerPose_AnimSequence
{
	TArray<class UEngine_AnimSequence*>                Anim;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.AnimMontageMotionData
// 0x0010
struct FProjectLH_AnimMontageMotionData
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_AnimMontage*                         MontageMotion;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.AnimMotionData
// 0x0010
struct FProjectLH_AnimMotionData
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_AnimSequence*                        Motion;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.AnimMotionArrayData
// 0x0010
struct FProjectLH_AnimMotionArrayData
{
	TArray<struct FProjectLH_AnimMotionData>           MotionArray;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.FoliageImpulse
// 0x0024
struct FProjectLH_FoliageImpulse
{
	struct FVector                                     ImpulsePoint;                                             // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaterialEffect;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaterialEffect_Strength;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TransformEffect;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              TransformEffect_Strength;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransformEffect_BendingDuration;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.NotifyDamageEvent
// 0x0088
struct FProjectLH_NotifyDamageEvent
{
	bool                                               bNotUseEffect;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAllDamagedTarget;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FProjectLH_HitFreeze                        HitFreezeParam;                                           // 0x0004(0x0008) (Edit)
	bool                                               IsDirectionHitEffect;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     HitEffectDirection;                                       // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UEngine_ParticleSystem*                      HitEffect;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HitEffectNotScale;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseFoliageImpulse;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FProjectLH_FoliageImpulse                   FoliageImpulse;                                           // 0x002C(0x0024) (Edit, BlueprintVisible)
	bool                                               HitAttachArrow;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UEngine_StaticMesh*                          HitAttachArrowMesh;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeaponEffectUse;                                        // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAvoidHitEffect;                                     // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AProjectLH_LHCharacter>       NotifyOwner;                                              // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x006C(0x001C) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSoundInfo
// 0x0048
struct FProjectLH_LHSoundInfo
{
	class UEngine_SoundBase*                           Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       AttachName;                                               // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStopWhenAttachedToDestroyed : 1;                         // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UEngine_SceneComponent*                      AttachedComponent;                                        // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHAnimNotify_ForceScaleNearZeroHidden
// 0x0008
struct FProjectLH_LHAnimNotify_ForceScaleNearZeroHidden
{
	bool                                               bNoSpawnEffectWhenBoneScaleNearZero;                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TargetScale;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.ApplySkillEffectBase
// 0x0028
struct FProjectLH_ApplySkillEffectBase
{
	FProjectLH_ProjectLH_ESkillEffetType               SkillEffetType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FadeInTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.ApplySkillDarkGrow
// 0x0000 (0x0028 - 0x0028)
struct FProjectLH_ApplySkillDarkGrow : public FProjectLH_ApplySkillEffectBase
{

};

// ScriptStruct ProjectLH.ApplySkillFresnel
// 0x0020 (0x0048 - 0x0028)
struct FProjectLH_ApplySkillFresnel : public FProjectLH_ApplySkillEffectBase
{
	bool                                               Apply_FresnelColor;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                Fresnel_Color;                                            // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fresnel_Intensity;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fresnel_Power;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.ApplySkillLight
// 0x0018 (0x0040 - 0x0028)
struct FProjectLH_ApplySkillLight : public FProjectLH_ApplySkillEffectBase
{
	bool                                               Apply_LightColor;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                Light_Color;                                              // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.ApplySkillSpectrum
// 0x0000 (0x0028 - 0x0028)
struct FProjectLH_ApplySkillSpectrum : public FProjectLH_ApplySkillEffectBase
{

};

// ScriptStruct ProjectLH.BeamTarget
// 0x0014
struct FProjectLH_BeamTarget
{
	TWeakObjectPtr<class AEngine_Actor>                TargetActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0008(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlinkEmissive
// 0x0038
struct FProjectLH_BlinkEmissive
{
	struct FLinearColor                                EmissiveColor;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePower;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveInterval;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveFadeInTime;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveFadeOutTime;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.ActorVisibleInfo
// 0x0001
struct FProjectLH_ActorVisibleInfo
{
	unsigned char                                      bVisible : 1;                                             // 0x0000(0x0001) (Edit)
};

// ScriptStruct ProjectLH.AutoMove
// 0x0018
struct FProjectLH_AutoMove
{
	FProjectLH_ProjectLH_EAutoMove                     AutoMode;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     AutoMoveLocation;                                         // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AEngine_Actor>                AutoMoveTarget;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHAutoPlayCacheData
// 0x0010
struct FProjectLH_LHAutoPlayCacheData
{
	FProjectLH_ProjectLH_EAutoPlayMode                 AutoPlayMode;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoPlaySubType;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	int64_t                                            AutoPlayValue;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.AvatarRotationValue
// 0x0018
struct FProjectLH_AvatarRotationValue
{
	float                                              RotationSensitivity;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapBaseValue;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapMinVelocity;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapSensitivity;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationResistance;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRange;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHRandomAvatarCardInfo
// 0x0008
struct FProjectLH_LHRandomAvatarCardInfo
{
	int                                                AvatarRecordIndex;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AvatarSerial;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsNoti;                                                  // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlessingBoardInfoClient
// 0x0040
struct FProjectLH_BlessingBoardInfoClient
{
	int                                                BoardIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        CollectionInfoArray;                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        ActiveSymbolCountArray;                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        UniqueOptionSymbolCountArray;                             // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bNeedUpdateCollectionInfo;                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                EquippedBossGroup;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHExtendBuffParticle
// 0x0048
struct FProjectLH_LHExtendBuffParticle
{
	int                                                SkillIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ECharacterSocketNames         AttachSocketName;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteScale;                                           // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteRotate;                                          // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FName                                       CustomSocketName;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             Path;                                                     // 0x0010(0x0018) (Edit, ZeroConstructor)
	struct FVector                                     FixedScale;                                               // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LocalRotateOffset;                                        // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleSystemComponent*             ExtendFXComponet;                                         // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHExtendBuffCondition
// 0x0018
struct FProjectLH_LHExtendBuffCondition
{
	FProjectLH_ProjectLH_EBuffParticleCondition        Condition;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<uint16_t>                                   BuffTypeArray;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHExtendBuffDecal
// 0x0038
struct FProjectLH_LHExtendBuffDecal
{
	int                                                SkillIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             Path;                                                     // 0x0008(0x0018) (Edit, ZeroConstructor)
	struct FVector                                     DecalOffset;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DecalRotation;                                            // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.BuffParam
// 0x00B8
struct FProjectLH_BuffParam
{
	struct FCommonSource_BuffInfo                      Info;                                                     // 0x0000(0x0080)
	int                                                ServerSerial;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SerialOwnerObjectSerial;                                  // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayBuff;                                             // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	double                                             fTimeRefreshed;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             fPauseTime;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    BuffChildren;                                             // 0x00A0(0x0010) (ZeroConstructor)
	int                                                ParentSerial;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AbsorbShield;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.TextInfo
// 0x0010
struct FProjectLH_TextInfo
{
	class UProjectLH_LHTextBlock*                      TargetText;                                               // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.GlobalButtonSetting
// 0x0288
struct FProjectLH_GlobalButtonSetting
{
	struct FSlateCore_ButtonStyle                      WidgetStyle;                                              // 0x0000(0x0278) (Edit)
	TArray<struct FProjectLH_TextInfo>                 TextInfoArray;                                            // 0x0278(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHLockOptionSettings
// 0x000C
struct FProjectLH_LHLockOptionSettings
{
	FProjectLH_ProjectLH_ELHButtonLockOption           ButtonLockOption;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                UnlockQuestIndex;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHTouchMaskSettings
// 0x0020
struct FProjectLH_LHTouchMaskSettings
{
	FProjectLH_ProjectLH_ELHTouchMaskShape             Shape;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   MaskScale;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ELHArrowLocateDirection       ArrowLocateDirection;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ArrowOffset;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TextOffset;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsToggleType;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.DeadDecalInfo
// 0x0010
struct FProjectLH_DeadDecalInfo
{
	class UClass*                                      BloodDecalActorClass;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloodDecalActorScale;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHBaseAttack
// 0x0020
struct FProjectLH_LHBaseAttack
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             Path;                                                     // 0x0008(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.CharacterFX
// 0x0010
struct FProjectLH_CharacterFX
{
	TArray<class UEngine_ParticleSystemComponent*>     FXList;                                                   // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct ProjectLH.CheckPoint
// 0x0060
struct FProjectLH_CheckPoint
{
	FProjectLH_ProjectLH_ESync                         Sync;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ESync_Move                    Sync_Move;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     CheckPoint;                                               // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestPoint;                                                // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ECharacterState               ChangeCharacterState;                                     // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                NextSkillServerSerial;                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	double                                             ReceiveTime;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SkillIndex;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaitTime;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AddAttackSpeed;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AEngine_Actor>                ChangeTargetActor;                                        // 0x0054(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.UnionChatContaner
// 0x0018
struct FProjectLH_UnionChatContaner
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UProjectLH_LHBaseChatting*>           channelChatArray;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.ReasonCharParam
// 0x0018
struct FProjectLH_ReasonCharParam
{
	FCommonSource_CommonSource_EParamReason            ParamReason;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<double>                                     CharParam;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHSelectAvatarInfoByGrade
// 0x0058
struct FProjectLH_LHSelectAvatarInfoByGrade
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectCostumeInfo
// 0x0058
struct FProjectLH_LHSelectCostumeInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectEquipItemByItemType
// 0x00A8
struct FProjectLH_LHSelectEquipItemByItemType
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectSkillByType
// 0x0058
struct FProjectLH_LHSelectSkillByType
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.WeaponShapeParticle
// 0x0060
struct FProjectLH_WeaponShapeParticle
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FXLocation;                                               // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FXRotation;                                               // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FXScale;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x002C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.WeaponShapeParticle.WeaponShapeParticle
	bool                                               bUseSocketWeaponName;                                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.WeaponShapeParticleInfo
// 0x0018
struct FProjectLH_WeaponShapeParticleInfo
{
	int                                                WeaponShapeIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EGrade                  WeaponShapeGrade;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FProjectLH_WeaponShapeParticle>      Particles;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.WeaponShapeFX
// 0x0018
struct FProjectLH_WeaponShapeFX
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FProjectLH_WeaponShapeParticleInfo>  FXData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem_AttachSocket
// 0x0048
struct FProjectLH_LHResource_ParticleSystem_AttachSocket
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSocketWeaponName;                                     // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachPlayer_Particle_TransformOnOrOff;                   // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_AnimSequence
// 0x0018
struct FProjectLH_LHResource_AnimSequence
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_SkeletalMesh_AttachSocketWithAnim
// 0x0068
struct FProjectLH_LHResource_SkeletalMesh_AttachSocketWithAnim
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
	struct FProjectLH_LHResource_AnimSequence          IdleAnim;                                                 // 0x0018(0x0018) (Edit)
	float                                              AnimRate;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSocketWeaponName;                                     // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.TransformWeaponShapeParticleInfo
// 0x0048
struct FProjectLH_TransformWeaponShapeParticleInfo
{
	int                                                WeaponShapeIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EGrade                  WeaponShapeGrade;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FProjectLH_WeaponShapeParticle>      TransformOnParticles;                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FProjectLH_WeaponShapeParticle>      TransformOffParticles;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FProjectLH_LHResource_ParticleSystem_AttachSocket> TransformOnActiveParticles;                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FProjectLH_LHResource_SkeletalMesh_AttachSocketWithAnim> EffectMeshes;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.TransformWeaponShapeFX
// 0x0018
struct FProjectLH_TransformWeaponShapeFX
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FProjectLH_TransformWeaponShapeParticleInfo> FXData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_TransformScalarParameter
// 0x000C
struct FProjectLH_LHResource_TransformScalarParameter
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue_TransformOn;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_TransformVectorParameter
// 0x0018
struct FProjectLH_LHResource_TransformVectorParameter
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParameterValue_TransformOn;                               // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_TransformMaterialParameter
// 0x0020
struct FProjectLH_LHResource_TransformMaterialParameter
{
	TArray<struct FProjectLH_LHResource_TransformScalarParameter> MeterialScalarParameters;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FProjectLH_LHResource_TransformVectorParameter> MeterialVectorParameters;                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHTrasnformWeaponParameterInfo
// 0x0028
struct FProjectLH_LHTrasnformWeaponParameterInfo
{
	int                                                WeaponIndex;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EGrade                  WeaponGrade;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FProjectLH_LHResource_TransformMaterialParameter TransformWeaponParameter;                                 // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.LHTransformWeaponParameter
// 0x0018
struct FProjectLH_LHTransformWeaponParameter
{
	FCommonSource_CommonSource_EClassType              ParameterClass;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FProjectLH_LHTrasnformWeaponParameterInfo> ParameterInfos;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.SocketWeaponShapeBone
// 0x0028
struct FProjectLH_SocketWeaponShapeBone
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MainSocketWeaponShapeBoneName;                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SubSocketWeaponShapeBoneName;                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.WeaponShapeAnimation
// 0x0030
struct FProjectLH_WeaponShapeAnimation
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PoseGroupID;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.WeaponShapeAnimation.WeaponShapeAniAsset
};

// ScriptStruct ProjectLH.SocketTransformWeaponShapeAnimation
// 0x0058
struct FProjectLH_SocketTransformWeaponShapeAnimation
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.SocketTransformWeaponShapeAnimation.MainSocketTransformWeaponShapeAniAsset
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.SocketTransformWeaponShapeAnimation.SubSocketTransformWeaponShapeAniAsset
};

// ScriptStruct ProjectLH.TransformWeaponShapeBoneInfo
// 0x0020
struct FProjectLH_TransformWeaponShapeBoneInfo
{
	struct FString                                     MainTransformWeaponShapeBoneName;                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SubTransformWeaponShapeBoneName;                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.TransformWeaponShapeBone
// 0x0028
struct FProjectLH_TransformWeaponShapeBone
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FProjectLH_TransformWeaponShapeBoneInfo     TransformWeaponShapeBoneInfo;                             // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.SocketWeaponShapeAnimation
// 0x0058
struct FProjectLH_SocketWeaponShapeAnimation
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.SocketWeaponShapeAnimation.WeaponShapeAniAsset_Right
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ProjectLH.SocketWeaponShapeAnimation.WeaponShapeAniAsset_Left
};

// ScriptStruct ProjectLH.WeaponShapeDisplayPosition
// 0x0020
struct FProjectLH_WeaponShapeDisplayPosition
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     DisplayLocation;                                          // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotLocation;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeshScale;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHDeviceProfile
// 0x0030
struct FProjectLH_LHDeviceProfile
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ModelName;                                                // 0x0010(0x0010) (ZeroConstructor)
	bool                                               MatchRegex;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              MobileContentScaleFactor;                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseUIScale;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.EquipPresetInfo
// 0x0010
struct FProjectLH_EquipPresetInfo
{
	TArray<struct FCommonSource_QuickSlotInfo>         ItemList;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.CheatTransientData
// 0x00E8
struct FProjectLH_CheatTransientData
{
	bool                                               bShowDebugUI;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowAutoBattleInfo;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowBotName;                                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowPatrolLine;                                          // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowSchedulerInfo;                                       // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoImprint;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                AutoImprintCurStep;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoImprintTotalCount;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoImprintNewCount;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoImprintSuccess;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EImprintOptionGrade     AutoImprintGrade;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoImprintAllSameGroup;                                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                AutoImprintLoopCount;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoImprintMin;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoImprintMax;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AutoImprintParams;                                        // 0x0028(0x0010) (ZeroConstructor)
	bool                                               SkillSlomo;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                ShowAttackerDir;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, uint64_t>                     PacketStringHashMap;                                      // 0x0040(0x0050) (ZeroConstructor)
	TMap<uint64_t, bool>                               PacketLogMap;                                             // 0x0090(0x0050) (ZeroConstructor)
	bool                                               bShowArea;                                                // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseGlobalResource;                                       // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultResource;                                      // 0x00E2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET
};

// ScriptStruct ProjectLH.MapChannelInfo
// 0x0010
struct FProjectLH_MapChannelInfo
{
	int                                                MapRecKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapChannelIndex;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapMaxChannelCount;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapPlayerCount;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.DirectionalLightCacheInfo
// 0x0020
struct FProjectLH_DirectionalLightCacheInfo
{
	class AEngine_DirectionalLight*                    DirectionLight;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.PostProcessVolumeCacheInfo
// 0x0010
struct FProjectLH_PostProcessVolumeCacheInfo
{
	class AEngine_PostProcessVolume*                   PostProcessVolume;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHAsyncLoadPackage
// 0x0038
struct FProjectLH_LHAsyncLoadPackage
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ProjectLH.NearCameraEffectInfo
// 0x001C
struct FProjectLH_NearCameraEffectInfo
{
	float                                              StandardArmLength;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StandardArmLengthForDOF;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DynamicShadowDistanceMovableLightNear;                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensityNear;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.EnvironmentParam
// 0x0128
struct FProjectLH_EnvironmentParam
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkyLight;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FLinearColor                                SkyLight_Color;                                           // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLight_Intensity;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DirectionLight;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FLinearColor                                DirectionLight_Color;                                     // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLight_Intensity;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DirectionLight_ModulatedShadowColor;                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Fog;                                                      // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              Fog_Density;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fog_HeightFalloff;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_ExponentialHeightFogData            SecondFogData;                                            // 0x0048(0x000C) (Edit, BlueprintVisible)
	struct FLinearColor                                Fog_Color;                                                // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fog_MaxOpacity;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumeticFog_Albedo;                                      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumetricFog_Emissive;                                   // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeticFog_ExtinctionScale;                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkySphereParam;                                           // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FName                                       SkySphereParamName;                                       // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FLinearColor                                SkySphereParamValue;                                      // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerLight;                                              // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FLinearColor                                PlayerSpotLight_Color;                                    // 0x00C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpotLight_Intensity;                                // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UIEnvironment;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FLinearColor                                UIEnvironment_Color;                                      // 0x00DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UEngine_ParticleSystem*                      WeatherParticleSystem;                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeatherAddLocation;                                       // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VolumetricClouds;                                         // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FName                                       VolumetricCloudsParamName;                                // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudsDensity;                                  // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumetricCloudsDensityVector;                            // 0x0114(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastleWarDoingInfo_Client
// 0x000C
struct FProjectLH_CastleWarDoingInfo_Client
{
	FCommonSource_CommonSource_ECastlewarState         CastlewarState;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RemainTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ProgressTime;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.GuildStrongholdMapInfo_Extend
// 0x0008 (0x0080 - 0x0078)
struct FProjectLH_GuildStrongholdMapInfo_Extend : public FCommonSource_GuildStrongholdMapInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdGuildInfo_Extend
// 0x0008 (0x0058 - 0x0050)
struct FProjectLH_GuildStrongholdGuildInfo_Extend : public FCommonSource_GuildStrongholdGuildInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHUIPool
// 0x0060
struct FProjectLH_LHUIPool
{
	TArray<class UProjectLH_LHWidget*>                 DeactiveUIs;                                              // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UProjectLH_LHWidget*>                 ActiveUIs;                                                // 0x0010(0x0010) (ExportObject, ZeroConstructor)
	class UClass*                                      WidgetBPClass;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty ProjectLH.LHUIPool.WidgetBPSoftClass
	class UUMG_PanelWidget*                            ContainerPanel;                                           // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_LevelSequence
// 0x0018
struct FProjectLH_LHResource_LevelSequence
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.AvatarDecideInfo_Client
// 0x0018
struct FProjectLH_AvatarDecideInfo_Client
{
	struct FCommonSource_AvatarDecideInfo              DecideInfo;                                               // 0x0000(0x0010)
	int64_t                                            RemainTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.WeaponShapeDecideInfo_Client
// 0x0018
struct FProjectLH_WeaponShapeDecideInfo_Client
{
	struct FCommonSource_WeaponShapeDecideInfo         DecideInfo;                                               // 0x0000(0x0010)
	int64_t                                            RemainTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.GameItemInfo_Extend
// 0x0008 (0x0098 - 0x0090)
struct FProjectLH_GameItemInfo_Extend : public FCommonSource_GameItemInfo
{
	FCommonSource_CommonSource_ERewardReason           RewardReason;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ERewardSubReason        RewardSubReason;                                          // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	int                                                RewardReasonIdx;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.ItemTypeCoolTimeInfo
// 0x0008
struct FProjectLH_ItemTypeCoolTimeInfo
{
	bool                                               bCheckStart;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              fRemainCoolTime;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LightIllusionInfo
// 0x0010
struct FProjectLH_LightIllusionInfo
{
	bool                                               IsAppear;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WaitRemove;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleSystemComponent*             BaseParticle;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.LinkSlotInfoMap
// 0x0050
struct FProjectLH_LinkSlotInfoMap
{
	TMap<unsigned char, struct FCommonSource_LinkSlotInfo> LinkSlotInfoMap;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.LinkBindInfoArray
// 0x0010
struct FProjectLH_LinkBindInfoArray
{
	TArray<struct FCommonSource_LinkBindInfo>          LinkBindInfoArray;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.LinkSlotBindInfoArray
// 0x0010
struct FProjectLH_LinkSlotBindInfoArray
{
	TArray<struct FCommonSource_LinkSlotBindInfo>      LinkSlotBindInfoArray;                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.MIEffectParam
// 0x0020
struct FProjectLH_MIEffectParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Start;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          CurveFloat;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.BaseMIArray
// 0x0010
struct FProjectLH_BaseMIArray
{
	TArray<class UEngine_MaterialInstanceDynamic*>     MIArray;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.LHMinimapFactor
// 0x0010
struct FProjectLH_LHMinimapFactor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.MIParam
// 0x0020
struct FProjectLH_MIParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              scalarValue;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VectorValue;                                              // 0x000C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsVector;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.PartyMemberInfoClient
// 0x0090
struct FProjectLH_PartyMemberInfoClient
{
	struct FCommonSource_PartyMemberInfo               Info;                                                     // 0x0000(0x0088)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.PartyInfoClient
// 0x0078
struct FProjectLH_PartyInfoClient
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct ProjectLH.PdPaymentStruct
// 0x0078
struct FProjectLH_PdPaymentStruct
{
	struct FString                                     GoodsId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GoodsName;                                                // 0x0010(0x0010) (ZeroConstructor)
	double                                             GoodsPrice;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                GoodsNumber;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     GoodsDescribe;                                            // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     GoodsIcon;                                                // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     GoodsRegisterId;                                          // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     VoucherId;                                                // 0x0060(0x0010) (ZeroConstructor)
	FProjectLH_ProjectLH_EPdGoodsType                  GoodsType;                                                // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.PatchUrlData
// 0x0030
struct FProjectLH_PatchUrlData
{
	struct FString                                     ResVersion;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TextVersion;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             CDNURL;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.ServerEnvironmentData
// 0x00B0
struct FProjectLH_ServerEnvironmentData
{
	struct FString                                     pre_standby;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     pre_standby_title;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     pre_standby_msg;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     maintenance;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     maintenance_title;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     maintenance_msg;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FProjectLH_PatchUrlData                     patch_url;                                                // 0x0060(0x0030) (Edit, BlueprintVisible)
	TArray<struct FString>                             privilegeUserList;                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     loginServer;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.ServerConfigRoot
// 0x0170
struct FProjectLH_ServerConfigRoot
{
	struct FProjectLH_ServerEnvironmentData            formal;                                                   // 0x0000(0x00B0) (Edit, BlueprintVisible)
	struct FProjectLH_ServerEnvironmentData            review;                                                   // 0x00B0(0x00B0) (Edit, BlueprintVisible)
	struct FString                                     Version;                                                  // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.PetTrainingInfo_Client
// 0x0010
struct FProjectLH_PetTrainingInfo_Client
{
	int                                                PetIdx;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            RemainTime;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.PetDecideInfo_Client
// 0x0018
struct FProjectLH_PetDecideInfo_Client
{
	struct FCommonSource_PetDecideInfo                 DecideInfo;                                               // 0x0000(0x0010)
	int64_t                                            RemainTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.PetEquipData_Client
// 0x0008
struct FProjectLH_PetEquipData_Client
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHPresetMesh
// 0x0038
struct FProjectLH_LHPresetMesh
{
	class UEngine_SkeletalMesh*                        Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_A;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_B;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_C;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.NpcTalkData
// 0x0018
struct FProjectLH_NpcTalkData
{
	int                                                EndQuestIndex;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        TalkIndexArray;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.NotiSyncEvent
// 0x01A8
struct FProjectLH_NotiSyncEvent
{
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0000(0x01A8) MISSED OFFSET
};

// ScriptStruct ProjectLH.Projectile
// 0x0328
struct FProjectLH_Projectile
{
	class UEngine_ParticleSystemComponent*             ParticleSystemComponent;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UEngine_CurveVector>          ProjectileCurve;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AProjectLH_LHCharacter>       TargetCharacter;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0018(0x00D0) MISSED OFFSET
	struct FProjectLH_LHSoundInfo                      MySelfSound;                                              // 0x00E8(0x0048)
	struct FProjectLH_LHSoundInfo                      BasicSound;                                               // 0x0130(0x0048)
	struct FProjectLH_NotiSyncEvent                    cachedSyncEvent;                                          // 0x0178(0x01A8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.NpcPresetProperty
// 0x0038
struct FProjectLH_NpcPresetProperty
{
	class UEngine_SkeletalMesh*                        Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorA;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHProtocolExchangeFuncNameSet
// 0x0020
struct FProjectLH_LHProtocolExchangeFuncNameSet
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHProtocolExchange
// 0x0060
struct FProjectLH_LHProtocolExchange
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TMap<class UObject*, struct FProjectLH_LHProtocolExchangeFuncNameSet> Events;                                                   // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.SubtitleMaintainInfo_TimeFixList
// 0x0010
struct FProjectLH_SubtitleMaintainInfo_TimeFixList
{
	TArray<int>                                        TimeFixValues;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.SubtitleMaintainInfoList
// 0x0010
struct FProjectLH_SubtitleMaintainInfoList
{
	TArray<struct FProjectLH_SubtitleMaintainInfo_TimeFixList> ByAudio;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem_Buff
// 0x0028
struct FProjectLH_LHResource_ParticleSystem_Buff
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
	int64_t                                            BuffIndex;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyBuffOwner;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_Skeleton
// 0x0018
struct FProjectLH_LHResource_Skeleton
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_SkeletalMesh
// 0x0018
struct FProjectLH_LHResource_SkeletalMesh
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.DefaultSocketWeaponMesh
// 0x0030
struct FProjectLH_DefaultSocketWeaponMesh
{
	struct FProjectLH_LHResource_SkeletalMesh          SocketWeaponMesh_R;                                       // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FProjectLH_LHResource_SkeletalMesh          SocketWeaponMesh_L;                                       // 0x0018(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.BoneAddLocation
// 0x003C
struct FProjectLH_BoneAddLocation
{
	struct FVector                                     AddLocation_L;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddLocation_R;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddLocation_Bow;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddLocation_Sub;                                          // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddLocation_Extra;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_AnimInstanceClass
// 0x0018
struct FProjectLH_LHResource_AnimInstanceClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_StaticMesh
// 0x0018
struct FProjectLH_LHResource_StaticMesh
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.ResourceHideWeaponShapeGrade
// 0x0140
struct FProjectLH_ResourceHideWeaponShapeGrade
{
	struct FProjectLH_LHResource_StaticMesh            MeshArray[0xB];                                           // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SkeletalMesh          TempSkeletalMesh;                                         // 0x0108(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          TempAnimation;                                            // 0x0120(0x0018) (Edit)
	struct FName                                       AttachName;                                               // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_HairInfo
// 0x0050
struct FProjectLH_LHResource_HairInfo
{
	struct FProjectLH_LHResource_SkeletalMesh          Normal_HairMesh;                                          // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SkeletalMesh          Kawaii_HairMesh;                                          // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimInstanceClass     Kawaii_HairAnimInstance;                                  // 0x0030(0x0018) (Edit)
	class UEngine_MaterialInterface*                   Kawaii_HairMaterial_High;                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_Texture
// 0x0018
struct FProjectLH_LHResource_Texture
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.Customizing_ColorParamName
// 0x0020
struct FProjectLH_Customizing_ColorParamName
{
	TArray<struct FName>                               VectorParam;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ScalarParam;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.ViewerPose
// 0x0048
struct FProjectLH_ViewerPose
{
	struct FProjectLH_LHResource_AnimSequence          StartAnim;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FProjectLH_LHResource_AnimSequence          LoopAnim;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FProjectLH_LHResource_AnimSequence          EndAnim;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem
// 0x0018
struct FProjectLH_LHResource_ParticleSystem
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ActorClass
// 0x0018
struct FProjectLH_LHResource_ActorClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystemSocket
// 0x0030
struct FProjectLH_LHResource_ParticleSystemSocket
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RideAddLocation;                                          // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_MaterialInstance
// 0x0018
struct FProjectLH_LHResource_MaterialInstance
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem_ClassType
// 0x0020
struct FProjectLH_LHResource_ParticleSystem_ClassType
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_LHMonsterClass
// 0x0018
struct FProjectLH_LHResource_LHMonsterClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHClassTypeArray
// 0x0010
struct FProjectLH_LHClassTypeArray
{
	TArray<FCommonSource_CommonSource_EClassType>      ClassTypes;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHAvatarGradeParticle
// 0x0020
struct FProjectLH_LHAvatarGradeParticle
{
	TArray<struct FProjectLH_LHClassTypeArray>         ParticleClass;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FProjectLH_LHResource_ParticleSystemSocket> ParticleSystemSockets;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHTrasnformAvatarEffectMeshInfo
// 0x0048
struct FProjectLH_LHTrasnformAvatarEffectMeshInfo
{
	int                                                avatarIndex;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EGrade                  AvatarGrade;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FProjectLH_LHResource_SkeletalMesh_AttachSocketWithAnim> EffectMesh;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FProjectLH_LHResource_TransformMaterialParameter TransformEffectMeshParameter;                             // 0x0018(0x0020) (Edit, BlueprintVisible)
	TArray<struct FProjectLH_LHResource_ParticleSystem_AttachSocket> HeadEffectParticle;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHTransformAvatarEffectMesh
// 0x0018
struct FProjectLH_LHTransformAvatarEffectMesh
{
	FCommonSource_CommonSource_EClassType              EffectMeshClass;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FProjectLH_LHTrasnformAvatarEffectMeshInfo> EffectMeshInfos;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHTrasnformAvatarParameterInfo
// 0x0028
struct FProjectLH_LHTrasnformAvatarParameterInfo
{
	int                                                avatarIndex;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EGrade                  AvatarGrade;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FProjectLH_LHResource_TransformMaterialParameter TransformAvatarParameter;                                 // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.LHTransformAvatarParameter
// 0x0018
struct FProjectLH_LHTransformAvatarParameter
{
	FCommonSource_CommonSource_EClassType              ParameterClass;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FProjectLH_LHTrasnformAvatarParameterInfo> ParameterInfos;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem_AttachSocketByIndex
// 0x0098
struct FProjectLH_LHResource_ParticleSystem_AttachSocketByIndex
{
	struct FProjectLH_LHResource_ParticleSystem_AttachSocket Effect;                                                   // 0x0000(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty ProjectLH.LHResource_ParticleSystem_AttachSocketByIndex.avatarIndex
};

// ScriptStruct ProjectLH.LHAvatarGradeParticleAdditional
// 0x0080
struct FProjectLH_LHAvatarGradeParticleAdditional
{
	struct FProjectLH_LHResource_ParticleSystemSocket  ParticleSystemSocket;                                     // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty ProjectLH.LHAvatarGradeParticleAdditional.AvatarIndexSet
};

// ScriptStruct ProjectLH.LHResource_PaperSprite
// 0x0018
struct FProjectLH_LHResource_PaperSprite
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.DecalSize
// 0x0008
struct FProjectLH_DecalSize
{
	float                                              Width;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_GuidePillar
// 0x0030
struct FProjectLH_LHResource_GuidePillar
{
	struct FProjectLH_LHResource_ParticleSystem        GuidePillarParticle;                                      // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_MaterialInstance      GuidePillarDecal;                                         // 0x0018(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_PathDecalActorClass
// 0x0018
struct FProjectLH_LHResource_PathDecalActorClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_PathParticleActorClass
// 0x0018
struct FProjectLH_LHResource_PathParticleActorClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHUROParameter
// 0x0018
struct FProjectLH_LHUROParameter
{
	TArray<float>                                      VisibleDistanceFactorThesholds;                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              MaxEvalRateForInterpolation;                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_LHVoidSummonerPortalClass
// 0x0018
struct FProjectLH_LHResource_LHVoidSummonerPortalClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_GraphicFilterInfo
// 0x0540
struct FProjectLH_LHResource_GraphicFilterInfo
{
	class UEngine_Texture2D*                           IconTexture;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NameStringKey;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FEngine_PostProcessSettings                 GraphicFilterSetting;                                     // 0x0010(0x0530) (Edit)
};

// ScriptStruct ProjectLH.LHResource_ForceFeedbackEffect
// 0x0018
struct FProjectLH_LHResource_ForceFeedbackEffect
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_LHWorldDungeonBossEnviromentClass
// 0x0018
struct FProjectLH_LHResource_LHWorldDungeonBossEnviromentClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_GroupMapLoadingInfo
// 0x0020
struct FProjectLH_LHResource_GroupMapLoadingInfo
{
	int                                                LoadingMsgIndex;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FProjectLH_LHResource_ActorClass            LoadingEffectViewer;                                      // 0x0008(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHPKDescStrData
// 0x0018
struct FProjectLH_LHPKDescStrData
{
	FProjectLH_ProjectLH_EPKDescType                   PKDescType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TitleStrIndex;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DescStrIndexList;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_DecalActorClass
// 0x0018
struct FProjectLH_LHResource_DecalActorClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_WeaponEnchantFX
// 0x0010
struct FProjectLH_LHResource_WeaponEnchantFX
{
	TArray<struct FProjectLH_LHResource_ParticleSystem> WeaponGrade;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LFResource_WeaponEnchantBone
// 0x0020
struct FProjectLH_LFResource_WeaponEnchantBone
{
	TArray<struct FName>                               BoneNameArray;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               WarModeBoneNameArray;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LFResource_RankingFX
// 0x0020
struct FProjectLH_LFResource_RankingFX
{
	int                                                Ranking;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FProjectLH_LHResource_ParticleSystem        RankingParticle;                                          // 0x0008(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LFResource_AddCostumeWeaponMesh
// 0x0028
struct FProjectLH_LFResource_AddCostumeWeaponMesh
{
	int                                                CostumeIndex;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AddBoneName;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             AddMesh;                                                  // 0x0010(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHAppearAnim
// 0x0048
struct FProjectLH_LHAppearAnim
{
	struct FProjectLH_LHResource_AnimSequence          FirstSpawnAnim;                                           // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          StartAnim;                                                // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          LoopAnim;                                                 // 0x0030(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHAppearAnimByGrade
// 0x0050
struct FProjectLH_LHAppearAnimByGrade
{
	TMap<FCommonSource_CommonSource_EItemGrade, struct FProjectLH_LHAppearAnim> ByGradeMap;                                               // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHRandomBoxAvatar_EffectByGrade
// 0x0030
struct FProjectLH_LHRandomBoxAvatar_EffectByGrade
{
	struct FProjectLH_LHResource_ParticleSystem        AppearFX;                                                 // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_ParticleSystem        LoopFX;                                                   // 0x0018(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHMatchingBoneInfo
// 0x0028
struct FProjectLH_LHMatchingBoneInfo
{
	struct FProjectLH_LHResource_StaticMesh            StaticMesh;                                               // 0x0000(0x0018) (Edit)
	struct FString                                     AttachBoneName;                                           // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHMatchingBoneInfo_Extend
// 0x00F8
struct FProjectLH_LHMatchingBoneInfo_Extend
{
	struct FProjectLH_LHResource_SkeletalMesh          BaseSkeletalMesh;                                         // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimInstanceClass     BaseAnimInstanceClass;                                    // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimInstanceClass     WeaponShapeAnimInstanceClass;                             // 0x0030(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimInstanceClass     SubWeaponShapeAnimInstanceClass;                          // 0x0048(0x0018) (Edit)
	TArray<struct FProjectLH_LHMatchingBoneInfo>       NormalGradeInfo;                                          // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FProjectLH_LHMatchingBoneInfo>       HighGradeInfo;                                            // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FProjectLH_LHResource_AnimSequence          NormalAppearAnim;                                         // 0x0080(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          NormalIdleAnim;                                           // 0x0098(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          HighAppearAnim;                                           // 0x00B0(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          HighIdleAnim;                                             // 0x00C8(0x0018) (Edit)
	struct FProjectLH_LHResource_AnimSequence          UnpackedIdleAnim;                                         // 0x00E0(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_ParticleSystem_AttachSocketByClass
// 0x00A0
struct FProjectLH_LHResource_ParticleSystem_AttachSocketByClass
{
	TMap<FCommonSource_CommonSource_EGrade, struct FProjectLH_LHResource_ParticleSystem> AttachParticle;                                           // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<FCommonSource_CommonSource_EClassType, struct FName> AttachSocketNameMap;                                      // 0x0050(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_WrappedWeaponParticle
// 0x0068
struct FProjectLH_LHResource_WrappedWeaponParticle
{
	struct FProjectLH_LHResource_ParticleSystem        AttachParticle;                                           // 0x0000(0x0018) (Edit)
	TMap<FCommonSource_CommonSource_EClassType, struct FName> AttachSocketNameMap;                                      // 0x0018(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.CustomStatueSize
// 0x0008
struct FProjectLH_CustomStatueSize
{
	FCommonSource_CommonSource_EClassType              ClassType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SizeValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_ServerInvasionSound
// 0x0060
struct FProjectLH_LHResource_ServerInvasionSound
{
	struct FProjectLH_LHResource_SoundCue              InvasionStartMusic;                                       // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              AnchorSpawnMusic;                                         // 0x0018(0x0018) (Edit)
	float                                              SpawnMusicFadeIn;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMusicFadeOut;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FieldMusicFadeOut;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FProjectLH_LHResource_SoundCue              AnchorDestroyedMusic;                                     // 0x0040(0x0018) (Edit)
	float                                              DestroyedMusicFadeIn;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FieldMusicFadeIn;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_MapBGM
// 0x0020
struct FProjectLH_LHResource_MapBGM
{
	FProjectLH_ProjectLH_EGameModeType                 GameModeType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FProjectLH_LHResource_SoundCue              BaseBGM;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_IngameMapBGM
// 0x0050
struct FProjectLH_LHResource_IngameMapBGM
{
	int                                                MapId;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FProjectLH_LHResource_SoundCue              BaseBGM;                                                  // 0x0008(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              VillageBGM;                                               // 0x0020(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              BattleBGM;                                                // 0x0038(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_InfinityDungeonBGM
// 0x0060
struct FProjectLH_LHResource_InfinityDungeonBGM
{
	struct FProjectLH_LHResource_SoundCue              Normal_Wait;                                              // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Normal_Battle;                                            // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Boss_Wait;                                                // 0x0030(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Boss_Battle;                                              // 0x0048(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_AncientAvatarSound
// 0x0050
struct FProjectLH_LHResource_AncientAvatarSound
{
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOn;                                        // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOff;                                       // 0x0018(0x0018) (Edit)
	bool                                               bTransformMySelf;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FProjectLH_LHResource_SoundCue              Sound_FootStep;                                           // 0x0038(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_AncientWeaponSound
// 0x0038
struct FProjectLH_LHResource_AncientWeaponSound
{
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOn;                                        // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOff;                                       // 0x0018(0x0018) (Edit)
	bool                                               bTransformMySelf;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_AncientVehicleSound
// 0x0048
struct FProjectLH_LHResource_AncientVehicleSound
{
	struct FProjectLH_LHResource_SoundCue              Sound_Mounting_Vehicle;                                   // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOn;                                        // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_TransformOff;                                       // 0x0030(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_AvatarDyeingSound
// 0x0048
struct FProjectLH_LHResource_AvatarDyeingSound
{
	struct FProjectLH_LHResource_SoundCue              Sound_Helmet;                                             // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_Body;                                               // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_Initialize;                                         // 0x0030(0x0018) (Edit)
};

// ScriptStruct ProjectLH.LHResource_AlchemySystemSound
// 0x0068
struct FProjectLH_LHResource_AlchemySystemSound
{
	struct FProjectLH_LHResource_SoundCue              Sound_MakingStart;                                        // 0x0000(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_HeatingSuccess;                                     // 0x0018(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_HeatingFail;                                        // 0x0030(0x0018) (Edit)
	struct FProjectLH_LHResource_SoundCue              Sound_ActiveBuffLoop;                                     // 0x0048(0x0018) (Edit)
	float                                              ActiveBuffFadeInValue;                                    // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActiveBuffFadeOutValue;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHResource_FileMediaSource
// 0x0018
struct FProjectLH_LHResource_FileMediaSource
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_LevelSequenceActorClass
// 0x0018
struct FProjectLH_LHResource_LevelSequenceActorClass
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.TutorialItemData
// 0x0008
struct FProjectLH_TutorialItemData
{
	int                                                ItemIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                itemCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.TutorialInventory
// 0x0020
struct FProjectLH_TutorialInventory
{
	int                                                QuestIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TouchMaskStartIndex;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Gold;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FProjectLH_TutorialItemData>         ItemDataList;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_VehicleParticle
// 0x0028
struct FProjectLH_LHResource_VehicleParticle
{
	struct FProjectLH_LHResource_ParticleSystem        AttachParticle;                                           // 0x0000(0x0018) (Edit)
	FProjectLH_ProjectLH_EVehicleAttachSocket          AttachSocket;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       CustomSocketName;                                         // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_VehicleParticleByType
// 0x0050
struct FProjectLH_LHResource_VehicleParticleByType
{
	TMap<FCommonSource_CommonSource_EVehicleType, struct FProjectLH_LHResource_VehicleParticle> VehicleParticle;                                          // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_TransformActiveVehicleBP
// 0x0018
struct FProjectLH_LHResource_TransformActiveVehicleBP
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_LHWorldMapTotalViewBallActorV2Class
// 0x0018
struct FProjectLH_LHResource_LHWorldMapTotalViewBallActorV2Class
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.EquipedRuneInfo
// 0x0050
struct FProjectLH_EquipedRuneInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ProjectLH.SlotAttributeList
// 0x0050
struct FProjectLH_SlotAttributeList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHGameCameraWorks
// 0x0014
struct FProjectLH_LHGameCameraWorks
{
	unsigned char                                      CameraMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    CameraRotator;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CameraZoom;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHQualityLevels
// 0x0020
struct FProjectLH_LHQualityLevels
{
	unsigned char                                      ResolutionType;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TextureQuality;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseAntiAliasing;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MotionBlurType;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FPSType;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EffectType;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                EffectsQuality;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.GameOptionSaveData
// 0x10E8
struct FProjectLH_GameOptionSaveData
{
	TMap<int64_t, bool>                                ShowMyGauge;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 ShowPlayerInfo;                                           // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                DamagePosition;                                           // 0x00A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                CameraShake;                                              // 0x00F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 PowerSaving;                                              // 0x0140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                PowerSavingBreak;                                         // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                GroundTouchMove;                                          // 0x01E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                InGameCameraAutoMove;                                     // 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                FixMinimap;                                               // 0x0280(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                DynamicCamera;                                            // 0x02D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Darkgrow;                                                 // 0x0320(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                ShowAutoBattleRange;                                      // 0x0370(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                ViewOutLineWall;                                          // 0x03C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoCounter;                                              // 0x0410(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoSkill;                                                // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                KeepAttackMoving;                                         // 0x04B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                RepeatQuestKeepAuto;                                      // 0x0500(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                NeedConfirmRevival;                                       // 0x0550(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoTarget_2;                                             // 0x05A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoTarget_1_2;                                           // 0x05F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoTarget_3;                                             // 0x0640(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoTarget_4;                                             // 0x0690(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                AutoSkillScroll;                                          // 0x06E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                UseSkillPreset;                                           // 0x0730(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                IsTouchableName;                                          // 0x0780(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                CanChannelingSkillCancel;                                 // 0x07D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               VirtualPad;                                               // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HomePIP;                                                  // 0x0821(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HUDKey;                                                   // 0x0822(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDSchedule;                                          // 0x0823(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDSleepMode;                                         // 0x0824(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDLeave;                                             // 0x0825(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDMannerMode;                                        // 0x0826(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDHostileGuildRangeDamage;                           // 0x0827(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHUDCameraViewpoint;                                   // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0829(0x0003) MISSED OFFSET
	int                                                QualityType;                                              // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProjectLH_LHQualityLevels                  QualityLevels;                                            // 0x0830(0x0020) (Edit, BlueprintVisible)
	struct FString                                     GraphicFilter;                                            // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ScreenShotHideUI;                                         // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PcFrameSetted;                                            // 0x0861(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WaterFieldFilter;                                         // 0x0862(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0863(0x0001) MISSED OFFSET
	int                                                UIScaleType;                                              // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFullSkillSlotView;                                       // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSenseHudSeparation;                                     // 0x0869(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsChattingHudReduction;                                   // 0x086A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ELanguage               ClientCulture;                                            // 0x086B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ELanguage               ClientCultureGroup_Sound;                                 // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTranslation;                                        // 0x086D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x086E(0x0002) MISSED OFFSET
	float                                              MasterValue;                                              // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MasterMute;                                               // 0x0874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	float                                              BgmValue;                                                 // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BgmMute;                                                  // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	float                                              SfxValue;                                                 // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SfxMute;                                                  // 0x0884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0885(0x0003) MISSED OFFSET
	float                                              AlarmValue;                                               // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlarmMute;                                                // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	float                                              VoiceValue;                                               // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VoiceMute;                                                // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EventPush;                                                // 0x0895(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NightEventPush;                                           // 0x0896(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0897(0x0001) MISSED OFFSET
	float                                              PotionNoticeValue;                                        // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ENoticeSoundType              PotionNoticeSound;                                        // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PotionNoticeVibe;                                         // 0x089D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x089E(0x0002) MISSED OFFSET
	float                                              LowHpNoticeValue;                                         // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ENoticeSoundType              LowHpNoticeSound;                                         // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LowHpNoticeVibe;                                          // 0x08A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x08A6(0x0002) MISSED OFFSET
	float                                              InvenSlotNoticeValue;                                     // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ENoticeSoundType              InvenSlotNoticeSound;                                     // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InvenSlotNoticeVibe;                                      // 0x08AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ENoticeSoundType              AttackedNoticeSound;                                      // 0x08AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttackedNoticeVibe;                                       // 0x08AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GuildMemberNoticeSound;                                   // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GuildMemberNoticeVibe;                                    // 0x08B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendNoticeSound;                                        // 0x08B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendNoticeVibe;                                         // 0x08B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WatchNoticeSound;                                         // 0x08B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WatchNoticeVibe;                                          // 0x08B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x08B6(0x0002) MISSED OFFSET
	int                                                HudChatLine;                                              // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	TMap<int64_t, int>                                 Sense_AutoSense_Num;                                      // 0x08C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_AutoSense_Active;                                   // 0x0910(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Category_Boss;                                      // 0x0960(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Boss_Boss;                                          // 0x09B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Boss_MiddleBoss;                                    // 0x0A00(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Category_User;                                      // 0x0A50(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_Battle;                                        // 0x0AA0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_PKWatch;                                       // 0x0AF0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_HostileGuild;                                  // 0x0B40(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_Brutal;                                        // 0x0B90(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_Common;                                        // 0x0BE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_AllianceGuild;                                 // 0x0C30(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_User_ServerInvasion;                                // 0x0C80(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Category_Monster;                                   // 0x0CD0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Monster_Battle;                                     // 0x0D20(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Monster_Common;                                     // 0x0D70(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                Sense_Monster_Quest;                                      // 0x0DC0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsSenseSeparationSubTabOpen;                              // 0x0E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0E11(0x0007) MISSED OFFSET
	TMap<int64_t, int>                                 SchedulerResurrectionCount;                               // 0x0E18(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                SchedulerResurrectionRestoreEXP;                          // 0x0E68(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerEliteDungeonIndex1;                              // 0x0EB8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerEliteDungeonIndex2;                              // 0x0F08(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerEliteDungeonIndex3;                              // 0x0F58(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerRunawayHP;                                       // 0x0FA8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerRunawayDestMapIndex;                             // 0x0FF8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, int>                                 SchedulerRunawayDestVoulumeAreaIndex;                     // 0x1048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int64_t, bool>                                SchedulerMainQuestWarpMove;                               // 0x1098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.PlayedTouchMaskInfo
// 0x0040
struct FProjectLH_PlayedTouchMaskInfo
{
	int64_t                                            dbKey;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WidgetName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WidgetSubIndex;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TabIndex;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TabName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.EventCollectionInfo
// 0x0018
struct FProjectLH_EventCollectionInfo
{
	int                                                EventCollectionIndex;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            EndTime;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsConfirm;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.EventCollectionMarkInfo
// 0x0018
struct FProjectLH_EventCollectionMarkInfo
{
	int64_t                                            CharKey;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FProjectLH_EventCollectionInfo>      EventCollectionInfoList;                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.InputInfoSaveData
// 0x0058
struct FProjectLH_InputInfoSaveData
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NameCode;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     ActionName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Scale;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     KeyName;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShift;                                                   // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCtrl;                                                    // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlt;                                                     // 0x0052(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bModify;                                                  // 0x0053(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ContentsType;                                             // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClassType;                                                // 0x0055(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.NPCShopBulkPurchaseItemInfo
// 0x0010
struct FProjectLH_NPCShopBulkPurchaseItemInfo
{
	int64_t                                            ItemIndex;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int64_t                                            itemCount;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.NPCShopBulkPurchaseTargetInfo
// 0x0018
struct FProjectLH_NPCShopBulkPurchaseTargetInfo
{
	int64_t                                            CharKey;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FProjectLH_NPCShopBulkPurchaseItemInfo> BulkPurchaseItemInfoList;                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.ViewedCashShopInfo
// 0x0058
struct FProjectLH_ViewedCashShopInfo
{
	int64_t                                            CharKey;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty ProjectLH.ViewedCashShopInfo.ViewedCashShopIndexSet
};

// ScriptStruct ProjectLH.ViewedLimitPackageNew
// 0x0058
struct FProjectLH_ViewedLimitPackageNew
{
	int64_t                                            CharKey;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FDateTime>                        ViewedLimitPackageNew;                                    // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ProjectLH.SubTabStateInfo
// 0x0008
struct FProjectLH_SubTabStateInfo
{
	int                                                TabIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpened;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.HudTabStateInfo
// 0x0018
struct FProjectLH_HudTabStateInfo
{
	struct FProjectLH_SubTabStateInfo                  LastLeftTopTabOpenState;                                  // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FProjectLH_SubTabStateInfo                  LastRightTopTabOpenState;                                 // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FProjectLH_SubTabStateInfo                  LastPrev_RightTopTabOpenState;                            // 0x0010(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct ProjectLH.LHRotationValue
// 0x0018
struct FProjectLH_LHRotationValue
{
	float                                              RotationSensitivity;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapBaseValue;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapMinVelocity;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapSensitivity;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationResistance;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRange;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.SkillCondition
// 0x0002
struct FProjectLH_SkillCondition
{
	FProjectLH_ProjectLH_ESkillTargetFilter            Filter;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ESkillTargetCondition         Target;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.QuickSlotSkillInfo
// 0x0020
struct FProjectLH_QuickSlotSkillInfo
{
	struct FCommonSource_QuickSlotInfo                 Info;                                                     // 0x0000(0x0018)
	TWeakObjectPtr<class UProjectLH_LHSkill_Active>    Skill;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHWaitProtocol
// 0x0038
struct FProjectLH_LHWaitProtocol
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              Buffer;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	uint64_t                                           HashCode;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWriteDetailLog : 1;                                      // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0029(0x000F) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_SoundAttenuation
// 0x0018
struct FProjectLH_LHResource_SoundAttenuation
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_SoundConcurrency
// 0x0018
struct FProjectLH_LHResource_SoundConcurrency
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.TabContent
// 0x0050
struct FProjectLH_TabContent
{
	int                                                StringIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TabNameString;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TabSubNameString;                                         // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                TextColor;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubTextColor;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.BoxLayout
// 0x001C
struct FProjectLH_BoxLayout
{
	struct FSlateCore_Margin                           Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FUMG_SlateChildSize                         Size;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetLine
// 0x0014
struct FProjectLH_TargetLine
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.TreasureBoxInfoList
// 0x0010
struct FProjectLH_TreasureBoxInfoList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.EffectEmitter
// 0x0030
struct FProjectLH_EffectEmitter
{
	class AProjectLH_LHParticle_Emitter*               ParticleEmitter;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Once;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              StartDelayTime;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntervalTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndDelayTime;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHUIOpenReserveInSceneOpenInfo
// 0x0020
struct FProjectLH_LHUIOpenReserveInSceneOpenInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.VehicleDecideInfo_Client
// 0x0018
struct FProjectLH_VehicleDecideInfo_Client
{
	struct FCommonSource_VehicleDecideInfo             DecideInfo;                                               // 0x0000(0x0010)
	int64_t                                            RemainTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.InvisibleLockWidgetPair
// 0x0014
struct FProjectLH_InvisibleLockWidgetPair
{
	FProjectLH_ProjectLH_EInvisibleLockContentType     ContentType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                QuestIndex;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_ESlateVisibility                          LockVisibility;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.TouchMaskWidgetPair
// 0x0034
struct FProjectLH_TouchMaskWidgetPair
{
	FProjectLH_ProjectLH_ETouchMaskSearchType          TouchMaskSearchType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetName;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TouchMaskName;                                            // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FProjectLH_LHTouchMaskSettings              TouchMaskSettings;                                        // 0x0014(0x0020) (Edit)
};

// ScriptStruct ProjectLH.TouchMaskClassBranch
// 0x0014
struct FProjectLH_TouchMaskClassBranch
{
	int                                                WarriorIndex;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SorceressIndex;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RogueIndex;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriestIndex;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShieldMaidenIndex;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.ContentsTutorialInfo
// 0x0050
struct FProjectLH_ContentsTutorialInfo
{
	FProjectLH_ProjectLH_EMaskType                     MaskType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               WidgetPath;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	FProjectLH_ProjectLH_ETouchMaskSearchType          SearchType;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                SearchIndex;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SearchWidgetPath;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)
	FProjectLH_ProjectLH_ELHTouchMaskShape             MaskShape;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector2D                                   MaskScale;                                                // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_EContentsTutorialDescLocation DescLocation;                                             // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector2D                                   TextOffset;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DescStringIndex;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.ContentsTutorialTabInfo
// 0x0028
struct FProjectLH_ContentsTutorialTabInfo
{
	struct FString                                     TabWidgetName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                TabIndex;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FProjectLH_ContentsTutorialInfo>     ContentsTutorialInfo;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.AlchemyGroupInfo_Client
// 0x0040
struct FProjectLH_AlchemyGroupInfo_Client
{
	int                                                AlchemyGroup;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ColorName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UPaper2D_PaperSprite*                        SlotIconSprite;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_MaterialInstance*>            SlotIconMatArray;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SlotColorAnimationName;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ProgressMaxCount;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.CharParamList
// 0x0010
struct FProjectLH_CharParamList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.ChainPassStepInfo
// 0x00C8
struct FProjectLH_ChainPassStepInfo
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct ProjectLH.BulkPurchaseCashShopGoodsInfo
// 0x00C8
struct FProjectLH_BulkPurchaseCashShopGoodsInfo
{
	struct FCommonSource_CashShopGoodsInfo             CashShopGoodsInfo;                                        // 0x0000(0x00C0) (Edit, BlueprintVisible)
	int                                                BuyCount;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStepByStepGoods;                                         // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.AvatarArray
// 0x0010
struct FProjectLH_AvatarArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.WeaponShapeArray
// 0x0010
struct FProjectLH_WeaponShapeArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.VehicleArray
// 0x0010
struct FProjectLH_VehicleArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.UnionChatRoomTabUIContainer
// 0x0018
struct FProjectLH_UnionChatRoomTabUIContainer
{
	class UUMG_WidgetSwitcher*                         C_SW_UnionChatRoom;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WidgetSwitcher*                         C_SW_UnionChatRoomTab;                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectLH_LHTextBlock*                      C_TB_ChatRoomName;                                        // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.CheatInfo
// 0x0008
struct FProjectLH_CheatInfo
{
	int                                                CheatIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CheatType;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSubTabWidgetList
// 0x0010
struct FProjectLH_LHSubTabWidgetList
{
	TArray<class UProjectLH_LHWidget_CommonLeft_TabSub*> WidgetList;                                               // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct ProjectLH.CultureInfo
// 0x0002
struct FProjectLH_CultureInfo
{
	FCommonSource_CommonSource_ELanguage               Culture;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_ELocalizationType             TabType;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.AttackResultTextInfo
// 0x0058
struct FProjectLH_AttackResultTextInfo
{
	struct FSlateCore_SlateColor                       leftTextColor;                                            // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       rightTextColor;                                           // 0x0028(0x0028) (Edit, BlueprintVisible)
	int                                                textStrIndex;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.DamageMeterInfo_Client
// 0x0028
struct FProjectLH_DamageMeterInfo_Client
{
	struct FCommonSource_DamageMeterInfo               DamageInfo;                                               // 0x0000(0x0020)
	int                                                Rank;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.DungeonContainerInfo
// 0x0068
struct FProjectLH_DungeonContainerInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct ProjectLH.GameEventPointInfo
// 0x0038
struct FProjectLH_GameEventPointInfo
{
	FProjectLH_ProjectLH_EGameEventPointType           pointType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	int64_t                                            pointValue;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPaper2D_PaperSprite*                        pointIconSprite;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pointNameStr;                                             // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     pointDescStr;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.RoskvaDiceCompleteRewardForWidgetInfo
// 0x0020
struct FProjectLH_RoskvaDiceCompleteRewardForWidgetInfo
{
	struct FCommonSource_EventRoskvaDiceCompleteRewardInfo RewardInfo;                                               // 0x0000(0x0010)
	int                                                CurCompleteCnt;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurTargetCompleteIdx;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WidgetIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsThisFinalRepeatReward;                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.ExchangeItemTotalInfo
// 0x00C0
struct FProjectLH_ExchangeItemTotalInfo
{
	int64_t                                            ExchangeDBIdx;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RegistAccountDBKey;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             MinRegisterPrice;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SellingCount;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SoldItemCount;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SalesCash;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AlertPrice;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FCommonSource_ExchangeItemInfo              ItemInfo;                                                 // 0x0028(0x0058)
	struct FCommonSource_ExchangePriceInfo             PriceInfo;                                                // 0x0080(0x0030)
	FCommonSource_CommonSource_EExchangeSaleState      SaleState;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              RemainTime;                                               // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsMySale;                                                 // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.AuctionCategoryElement
// 0x0008
struct FProjectLH_AuctionCategoryElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlessSummonTooltipInfo
// 0x0020
struct FProjectLH_BlessSummonTooltipInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHWidget_IconRichTextInfo
// 0x0018
struct FProjectLH_LHWidget_IconRichTextInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildRaidContributionRankInfo
// 0x0060
struct FProjectLH_GuildRaidContributionRankInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildRaidDungeonInfo
// 0x0030
struct FProjectLH_GuildRaidDungeonInfo
{
	TArray<struct FProjectLH_GuildRaidContributionRankInfo> RaidRankInfoArray;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCommonSource_GuildDungeonPlayerInfo> EnterGuildMemberArray;                                    // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildPrevRaidRankInfo
// 0x0018
struct FProjectLH_GuildPrevRaidRankInfo
{
	TArray<struct FProjectLH_GuildRaidContributionRankInfo> PrevRaidRankInfoArray;                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHWidget_ImprintRichTextInfo
// 0x0018
struct FProjectLH_LHWidget_ImprintRichTextInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.PartyInviteRequester
// 0x0048
struct FProjectLH_PartyInviteRequester
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct ProjectLH.ScreenWidgetData
// 0x0034
struct FProjectLH_ScreenWidgetData
{
	TWeakObjectPtr<class AEngine_Actor>                Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UProjectLH_LHWidget>          Widget;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UUMG_CanvasPanelSlot>         PanelSlot;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseWorldLocation;                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     InitWorldLocation;                                        // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.CollectionFilterOptionValue
// 0x0060
struct FProjectLH_CollectionFilterOptionValue
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastlewarAllianceRequester
// 0x0040
struct FProjectLH_CastlewarAllianceRequester
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ProjectLH.ItemSourceInfo
// 0x0010
struct FProjectLH_ItemSourceInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.EnchantData
// 0x0010 (0x0018 - 0x0008)
struct FProjectLH_EnchantData : public FEngine_TableRowBase
{
	float                                              MoveSpeed;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccRange;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NpcTalkNum;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.MovieSubtitleInfo
// 0x0028
struct FProjectLH_MovieSubtitleInfo
{
	class UProjectLH_LHCinematicVoice*                 CinematicVoice;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Subtitle;                                                 // 0x0008(0x0010) (ZeroConstructor)
	float                                              StartTime;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayState;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.NpcShopContentsTutorialInfo
// 0x0018
struct FProjectLH_NpcShopContentsTutorialInfo
{
	int                                                NpcShopIndex;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FProjectLH_ContentsTutorialInfo>     ContentsTutorialInfo;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.PetWidgetPack
// 0x0018
struct FProjectLH_PetWidgetPack
{
	class UUMG_Image*                                  PetIcon;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectLH_LHTextBlock*                      PetName;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectLH_LHButton*                         PetButton;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.PlannerDetailContainer
// 0x0010
struct FProjectLH_PlannerDetailContainer
{
	TArray<class UClass*>                              ContainerBPArray;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.ProductMaterialData
// 0x001C
struct FProjectLH_ProductMaterialData
{
	int                                                ItemIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Enchant;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReplaceGroup;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedReplaceItemIndex;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialArrayIndex;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseReplaceItemCount;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.ProductHistory
// 0x000C
struct FProjectLH_ProductHistory
{
	int                                                mainGroup;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                subGroup;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecordIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.TendencyTagContainer
// 0x0010
struct FProjectLH_TendencyTagContainer
{
	TArray<class UProjectLH_LHWidget_TendencyTag*>     C_Widget_TendencyTags;                                    // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct ProjectLH.SpawnObjectInfo
// 0x0020
struct FProjectLH_SpawnObjectInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHRandomBoxIndexInfo
// 0x000C
struct FProjectLH_LHRandomBoxIndexInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildDefenseDoingInfo_Extend
// 0x0020 (0x0098 - 0x0078)
struct FProjectLH_GuildDefenseDoingInfo_Extend : public FCommonSource_GuildDefenseDoingInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.CharParamContainer
// 0x0010
struct FProjectLH_CharParamContainer
{
	TArray<class UProjectLH_LHWidget_Collection_CharParam_Container*> charParamContainers;                                      // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct ProjectLH.SenseInfo
// 0x0048
struct FProjectLH_SenseInfo
{
	int                                                Number;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCommonSource_ScanInfo                      ScanInfo;                                                 // 0x0008(0x0030)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.TopmenuCurrencyInfo
// 0x0050
struct FProjectLH_TopmenuCurrencyInfo
{
	class UUMG_CanvasPanel*                            Panel_Currency;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_TextBlock*                              Text_Currency;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_TextBlock*                              Text_TimeLimit;                                           // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_Image*                                  Img_Currency;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectLH_LHButton*                         Btn_Currency;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct ProjectLH.SkillPresetWidget
// 0x0018
struct FProjectLH_SkillPresetWidget
{
	class UUMG_WidgetSwitcher*                         SettingSwitcher;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_HorizontalBox*                          HavePresetBox;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_TextBlock*                              SkillPresetNameText;                                      // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.WorldMapDetail
// 0x0030
struct FProjectLH_WorldMapDetail
{
	class AProjectLH_LHCameraActor_WorldMap*           CameraActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_Volume*                              AreaVolum;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_DirectionalLight*                    AreaDirectionalLight;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_SkyLight*                            AreaSkyLight;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_PostProcessVolume*                   AreaPostProcessVolume;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_ExponentialHeightFog*                AreaExponentialHeightFog;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.WorldDungeonBossEnviromentInfo
// 0x0008
struct FProjectLH_WorldDungeonBossEnviromentInfo
{
	class AProjectLH_LHWorldDungeonBossEnviroment*     SpawnedBossEnviromentSphere;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.WorldMapBallPositionInfo
// 0x0010
struct FProjectLH_WorldMapBallPositionInfo
{
	int                                                MapIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BallWorldPosition;                                        // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.RandomOptionList
// 0x0018
struct FProjectLH_RandomOptionList
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.PlayerSkillInfo
// 0x0018
struct FProjectLH_PlayerSkillInfo
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UCommonSource_PlayerSkillRecord*>     Table;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.SkillEffectInfo
// 0x0018
struct FProjectLH_SkillEffectInfo
{
	int                                                SkillIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UCommonSource_EffectInfoRecord*>      Table;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.SkillBuffInfo
// 0x0018
struct FProjectLH_SkillBuffInfo
{
	int                                                SkillIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UCommonSource_BuffInfoRecord*>        Table;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.ComboSkillInfo
// 0x0018
struct FProjectLH_ComboSkillInfo
{
	int                                                StartSkillIndex;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PrevSkillIndex;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        NextSkillArray;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.SwapSkillInfo
// 0x0050
struct FProjectLH_SwapSkillInfo
{
	TMap<int, int>                                     SwapSkillMap;                                             // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.RewardList
// 0x0010
struct FProjectLH_RewardList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.MakeItemCategoryInfo
// 0x00A8
struct FProjectLH_MakeItemCategoryInfo
{
	int                                                mainGroup;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainGroupNameCode;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0008(0x00A0) MISSED OFFSET
};

// ScriptStruct ProjectLH.MakeItemInfo
// 0x0058
struct FProjectLH_MakeItemInfo
{
	int                                                mainGroup;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0004(0x0054) MISSED OFFSET
};

// ScriptStruct ProjectLH.SetItemInfo
// 0x0018
struct FProjectLH_SetItemInfo
{
	int                                                SetGroupID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        SetItemRecordKeyList;                                     // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.AlarmMarkTriggerInfo
// 0x0058
struct FProjectLH_AlarmMarkTriggerInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.AlarmMarkInfo
// 0x0001
struct FProjectLH_AlarmMarkInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProjectLH.AlarmNoticeDataInfo
// 0x0010
struct FProjectLH_AlarmNoticeDataInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.AttachArrow
// 0x0010
struct FProjectLH_AttachArrow
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.PlayerCameraData
// 0x0020
struct FProjectLH_PlayerCameraData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlendActionModeReset
// 0x0044
struct FProjectLH_BlendActionModeReset
{
	struct FProjectLH_BlendAlhpa                       BlendAlpha;                                               // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0014(0x0030) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlendRotation
// 0x002C
struct FProjectLH_BlendRotation
{
	struct FProjectLH_BlendAlhpa                       BlendAlpha;                                               // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0014(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHRandomGuaranteeInfo
// 0x0004 (0x000C - 0x0008)
struct FProjectLH_LHRandomGuaranteeInfo : public FCommonSource_RandomGuaranteeInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.SalesTimeInfo
// 0x0028
struct FProjectLH_SalesTimeInfo
{
	TArray<struct FCommonSource_CashShopSalesTimeInfo> ArraySalesTime;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ArrayDayOfWeek;                                           // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.RemainTimeInfo
// 0x0010
struct FProjectLH_RemainTimeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastlewarEnterGuildInfo_Client
// 0x0060
struct FProjectLH_CastlewarEnterGuildInfo_Client
{
	struct FCommonSource_CastlewarEnterGuildInfo       EnterGuildInfo;                                           // 0x0000(0x0058)
	int                                                CastleIndex;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsDefence;                                                // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastleWarResultInfo_Client
// 0x0170
struct FProjectLH_CastleWarResultInfo_Client
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastlewarQualifierGuildInfo_Client
// 0x0018
struct FProjectLH_CastlewarQualifierGuildInfo_Client
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.QualifierRankerInfo_Client
// 0x0030
struct FProjectLH_QualifierRankerInfo_Client
{
	int                                                Rank;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCommonSource_QualifierRankerInfo           Info;                                                     // 0x0008(0x0028)
};

// ScriptStruct ProjectLH.CastleWarBidRankInfo_Client
// 0x0048
struct FProjectLH_CastleWarBidRankInfo_Client
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct ProjectLH.SacrificePointInfo
// 0x0018
struct FProjectLH_SacrificePointInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.ValknutCountInfo
// 0x0010
struct FProjectLH_ValknutCountInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.InstinctInfo
// 0x0010
struct FProjectLH_InstinctInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.CastleOccupationInfo_Client
// 0x0060
struct FProjectLH_CastleOccupationInfo_Client
{
	struct FCommonSource_CastleOccupationInfo          CastleOccupationInfo;                                     // 0x0000(0x0058)
	double                                             RemainTime;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.DeadCountInfo
// 0x000C
struct FProjectLH_DeadCountInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHLevelUP_Factor
// 0x0008
struct FProjectLH_LHLevelUP_Factor
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.SunMoonPointInfo
// 0x0014
struct FProjectLH_SunMoonPointInfo
{
	int                                                SunPoint;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MoonPoint;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SunRemainCoolTime;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MoonRemainCoolTime;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               OnSunCoolTime;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               OnMoonCoolTime;                                           // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.CinematicPlayerSyncInfo
// 0x0028
struct FProjectLH_CinematicPlayerSyncInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AProjectLH_LHActor_CinematicSyncModel*       CinematicSyncModel;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AProjectLH_LHPlayer*                         TargetPlayer;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectEquipItem
// 0x0018
struct FProjectLH_LHSelectEquipItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectCostumeIndexArray
// 0x0028
struct FProjectLH_LHSelectCostumeIndexArray
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectAvatarIndexArray
// 0x00A8
struct FProjectLH_LHSelectAvatarIndexArray
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHSelectSkillInfo
// 0x001C
struct FProjectLH_LHSelectSkillInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ProjectLH.CollectionCachingInfo
// 0x0020
struct FProjectLH_CollectionCachingInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.SyncEventBase
// 0x0018
struct FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetResurrection
// 0x0010 (0x0028 - 0x0018)
struct FProjectLH_TargetResurrection : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetMove
// 0x0020 (0x0038 - 0x0018)
struct FProjectLH_TargetMove : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetBuff
// 0x0098 (0x00B0 - 0x0018)
struct FProjectLH_TargetBuff : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0018(0x0098) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetHPMP
// 0x0020 (0x0038 - 0x0018)
struct FProjectLH_TargetHPMP : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetDead
// 0x0088 (0x00A0 - 0x0018)
struct FProjectLH_TargetDead : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0018(0x0088) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetSync
// 0x0008 (0x0020 - 0x0018)
struct FProjectLH_TargetSync : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHClassChangeParam
// 0x00E0
struct FProjectLH_LHClassChangeParam
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct ProjectLH.TargetDamage
// 0x0030 (0x0048 - 0x0018)
struct FProjectLH_TargetDamage : public FProjectLH_SyncEventBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct ProjectLH.DiedByKillerInfo
// 0x0088
struct FProjectLH_DiedByKillerInfo
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct ProjectLH.CinematicLightParam
// 0x0010
struct FProjectLH_CinematicLightParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.WeaponShapeDisplayBoneControl
// 0x0020
struct FProjectLH_WeaponShapeDisplayBoneControl
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneLocation;                                             // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BoneRotation;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.DuelRankerInfo_Client
// 0x0030
struct FProjectLH_DuelRankerInfo_Client
{
	int                                                Rank;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCommonSource_DuelRankerInfo                Info;                                                     // 0x0008(0x0028)
};

// ScriptStruct ProjectLH.RewardInfoBundle
// 0x0040
struct FProjectLH_RewardInfoBundle
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ProjectLH.GameEventInfoClient
// 0x00A0
struct FProjectLH_GameEventInfoClient
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct ProjectLH.AttendanceWeekInfoClient
// 0x0010
struct FProjectLH_AttendanceWeekInfoClient
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.AttendanceRewardInfoClient
// 0x0048
struct FProjectLH_AttendanceRewardInfoClient
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct ProjectLH.AttendanceInfoClient
// 0x0078
struct FProjectLH_AttendanceInfoClient
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct ProjectLH.FieldBossSpawnInfo_Client
// 0x0038
struct FProjectLH_FieldBossSpawnInfo_Client
{
	struct FCommonSource_FieldBossSpawnInfo            FieldBossSpawnInfo;                                       // 0x0000(0x0010)
	struct FCommonSource_FieldBossSpawnInfo            BlessedFieldBossSpawnInfo;                                // 0x0010(0x0010)
	int64_t                                            RemainTime;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            DisappearTime;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MapType;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ProjectLH.ExchangeListUI_CategoryWidget
// 0x0010
struct FProjectLH_ExchangeListUI_CategoryWidget
{
	class UUMG_Widget*                                 CategoryWidget;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_Button*                                 SortButton;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.FavoriteFriendPositionInfo
// 0x00B0
struct FProjectLH_FavoriteFriendPositionInfo
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct ProjectLH.ExchangeRequestBuyInfo
// 0x0038
struct FProjectLH_ExchangeRequestBuyInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildDefenseBlessSummonInfo_Extend
// 0x0008 (0x0058 - 0x0050)
struct FProjectLH_GuildDefenseBlessSummonInfo_Extend : public FCommonSource_GuildDefenseBlessSummonInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHGuildRequestInfo
// 0x0070
struct FProjectLH_LHGuildRequestInfo
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct ProjectLH.DefenserGuildInfo
// 0x0018
struct FProjectLH_DefenserGuildInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdFirstRewardInfo
// 0x0010
struct FProjectLH_GuildStrongholdFirstRewardInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdSeasonInfo
// 0x0020
struct FProjectLH_GuildStrongholdSeasonInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdBattleInfo
// 0x0028
struct FProjectLH_GuildStrongholdBattleInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdSectorInfo
// 0x0048
struct FProjectLH_GuildStrongholdSectorInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildStrongholdAreaInfo
// 0x0008
struct FProjectLH_GuildStrongholdAreaInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHWidgetData
// 0x0048
struct FProjectLH_LHWidgetData
{
	FProjectLH_ProjectLH_EUILayer                      Layer;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsStayInViewport;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     WidgetFullPath;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     WidgetFullPath_Global;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     WidgetFullPath_Global_ChangeName;                         // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	TWeakObjectPtr<class UProjectLH_LHWidget>          WidgetPtr;                                                // 0x003C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.InstantMsgInfo
// 0x0018
struct FProjectLH_InstantMsgInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.MsgBoxInfo
// 0x0068
struct FProjectLH_MsgBoxInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct ProjectLH.InfinityDungeonSeasonRewardInfo
// 0x0018
struct FProjectLH_InfinityDungeonSeasonRewardInfo
{
	bool                                               m_ReserveShowResult;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCommonSource_RewardInfo>            m_SeasonRewardItems;                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.InfinityDungeonAreaPassInfo
// 0x0028
struct FProjectLH_InfinityDungeonAreaPassInfo
{
	bool                                               m_ReserveShowResult;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               m_ShowNotice;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               m_ShowRewardText;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               m_IsCanDoing;                                             // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                m_AreaPassStartFloor;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_PrevClearFloor;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_BuffSelectFloor;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_BuffOptionGroup;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_ResetCount;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FCommonSource_InfinityDungeonBuffInfo> m_arrayBuffs;                                             // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.InfinityDungeonInGameInfo
// 0x0028
struct FProjectLH_InfinityDungeonInGameInfo
{
	bool                                               DungeonStart;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FloorIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FloorSettingIndex;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        BossMonsterIndexs;                                        // 0x0010(0x0010) (ZeroConstructor)
	float                                              RemainTime;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainSurvivalTime;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHEventMarker
// 0x0001
struct FProjectLH_LHEventMarker
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProjectLH.StatueBlessValueInfo
// 0x0020
struct FProjectLH_StatueBlessValueInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.PreferenceRankingInfo
// 0x0010
struct FProjectLH_PreferenceRankingInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.GoogleAuthTokenInfo
// 0x0030
struct FProjectLH_GoogleAuthTokenInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ProjectLH.KakaoDeepLink
// 0x000C
struct FProjectLH_KakaoDeepLink
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.LinkBindOptionParamInfo
// 0x0028
struct FProjectLH_LinkBindOptionParamInfo
{
	int                                                BoardIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BindCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BonusCount;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapCount;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ELinkEmblemType         LinkEmblemType;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ELinkEmblemGrade        BindGrade;                                                // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<struct FCommonSource_OptionParamInfo>       BindOptionParamArray;                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.AutoMovePortalInfo
// 0x0010
struct FProjectLH_AutoMovePortalInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.SavedAutoMoveData
// 0x0018
struct FProjectLH_SavedAutoMoveData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.PkInfo_Client
// 0x0060
struct FProjectLH_PkInfo_Client
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ProjectLH.MinimapInfo
// 0x0028
struct FProjectLH_MinimapInfo
{
	int                                                Order;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MinimapSrpiteName;                                        // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHPathData
// 0x0028
struct FProjectLH_LHPathData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	float                                              TotalLength;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.PetGuardianBoardInfo_Client
// 0x0048
struct FProjectLH_PetGuardianBoardInfo_Client
{
	struct FCommonSource_PetGuardianBoardInfo          BoardInfo;                                                // 0x0000(0x0040)
	int64_t                                            RemainTime;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.TouchState
// 0x0024
struct FProjectLH_TouchState
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlessingStoneRepurchase
// 0x0010
struct FProjectLH_BlessingStoneRepurchase
{
	bool                                               IsRepurchase;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepurchaseInfoshopIdx;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EResourceType           RepurchaseInfoResourceType;                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                RepurchaseInfoPrice;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.RuneRepurchase
// 0x0010
struct FProjectLH_RuneRepurchase
{
	bool                                               IsRepurchase;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepurchaseInfoshopIdx;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EResourceType           RepurchaseInfoResourceType;                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                RepurchaseInfoPrice;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.UseRandomBoxEffect
// 0x0018
struct FProjectLH_UseRandomBoxEffect
{
	int64_t                                            itemSerial;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_EBindType               bindType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                itemCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHResource_AnimInstance
// 0x0018
struct FProjectLH_LHResource_AnimInstance
{
	struct FSoftClassPath                              Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_MediaPlayer
// 0x0018
struct FProjectLH_LHResource_MediaPlayer
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_Texture2D
// 0x0018
struct FProjectLH_LHResource_Texture2D
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.LHResource_MaterialInterface
// 0x0018
struct FProjectLH_LHResource_MaterialInterface
{
	struct FSoftObjectPath                             Path;                                                     // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct ProjectLH.ScheduleSettingInfo
// 0x0038
struct FProjectLH_ScheduleSettingInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ProjectLH.SenseSortElement
// 0x0010
struct FProjectLH_SenseSortElement
{
	float                                              Dist;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.ServerInvasionObjectInfo
// 0x0020
struct FProjectLH_ServerInvasionObjectInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.ServerInvasionPKPoint
// 0x0018
struct FProjectLH_ServerInvasionPKPoint
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.DebugReservedSkill
// 0x000C
struct FProjectLH_DebugReservedSkill
{
	int                                                SkillIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_EReservedSkillReason          ReserveReason;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSendSkill;                                               // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	FProjectLH_ProjectLH_EReservedSkillReason          ResetReason;                                              // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	int                                                MainTargetSerial;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.PlayingBgmInfo
// 0x0010
struct FProjectLH_PlayingBgmInfo
{
	class UEngine_SoundBase*                           BgmSound;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.StateParam_Revival
// 0x0018
struct FProjectLH_StateParam_Revival
{
	FProjectLH_ProjectLH_ERevivalSectionNames          State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<int>                                        RevivalCasterObjectSerialArray;                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.ItemSoulDiffInfo
// 0x000C
struct FProjectLH_ItemSoulDiffInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.AppearanceInfo
// 0x0068
struct FProjectLH_AppearanceInfo
{
	int                                                avatarIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AvatarLook;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                WeaponIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     WeaponModelName;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FCommonSource_CostumeResourceInfo           CostumeInfo;                                              // 0x0020(0x0040)
	int                                                WeaponShapeIndex;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WeaponShapeLook;                                          // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.RangeAndGradeBuffOptionInfo_Client
// 0x0018
struct FProjectLH_RangeAndGradeBuffOptionInfo_Client
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.BuffDescInfo
// 0x0070
struct FProjectLH_BuffDescInfo
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct ProjectLH.RandomOptionInfo
// 0x000C
struct FProjectLH_RandomOptionInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.SpecializeChangeOptionInfo
// 0x001C
struct FProjectLH_SpecializeChangeOptionInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ProjectLH.AlchemyChangeOptionInfo
// 0x0014
struct FProjectLH_AlchemyChangeOptionInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.ChangeOptionInfo
// 0x0014
struct FProjectLH_ChangeOptionInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.ObjectSpawnRecKeyList
// 0x0010
struct FProjectLH_ObjectSpawnRecKeyList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.MonsterRecordKeyList
// 0x0010
struct FProjectLH_MonsterRecordKeyList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.MonsterCollectionInfo
// 0x0018
struct FProjectLH_MonsterCollectionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ProjectLH.SkillDamageUIDetail
// 0x0048
struct FProjectLH_SkillDamageUIDetail
{
	TArray<struct FCommonSource_Double>                EffectValue;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ValueLvUp;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                count;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteelMaxEffectValue;                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteelMaxValueLvUp;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MPSteelMaxEffectValue;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MPSteelMaxValueLvUp;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeLvUp;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DotTime;                                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DotTimeLvUp;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanLvUpLifeTime;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanLvUpDotTime;                                          // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
};

// ScriptStruct ProjectLH.TreasureBoxInfoEx
// 0x000C (0x0020 - 0x0014)
struct FProjectLH_TreasureBoxInfoEx : public FCommonSource_TreasureBoxInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.BlendVCViewer
// 0x002C
struct FProjectLH_BlendVCViewer
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ProjectLH.SocketWeaponInfo
// 0x0004
struct FProjectLH_SocketWeaponInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.VehicleInfoClient
// 0x002C
struct FProjectLH_VehicleInfoClient
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ProjectLH.SpawnedVoidSummonerInfo
// 0x0008
struct FProjectLH_SpawnedVoidSummonerInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ProjectLH.CostumeSlotInfo
// 0x0010
struct FProjectLH_CostumeSlotInfo
{
	FCommonSource_CommonSource_ECostumeResourceType    ResourceType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TableIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExpireTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFixedTerm;                                              // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.ClassChangePriceInfo
// 0x0020
struct FProjectLH_ClassChangePriceInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.PlayerStatusProgress
// 0x000C
struct FProjectLH_PlayerStatusProgress
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.CashShopGetItemInfo
// 0x0060
struct FProjectLH_CashShopGetItemInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ProjectLH.CheatCommandStruct
// 0x00C0 (0x00C8 - 0x0008)
struct FProjectLH_CheatCommandStruct : public FEngine_TableRowBase
{
	struct FText                                       Command;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Param1;                                                   // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Param2;                                                   // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Param3;                                                   // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Param4;                                                   // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Param5;                                                   // 0x0080(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Explain;                                                  // 0x0098(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Example;                                                  // 0x00B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ProjectLH.SkillChangeInfoPopupData
// 0x000C
struct FProjectLH_SkillChangeInfoPopupData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.DropdownData
// 0x0028
struct FProjectLH_DropdownData
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0008(0x0010) (ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LHWidgetCommonLeftData
// 0x0068
struct FProjectLH_LHWidgetCommonLeftData
{
	int                                                MainNameCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MainNameColor;                                            // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bExistSubCategory;                                        // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x53];                                      // 0x0015(0x0053) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHTabWidgetCommonData
// 0x0058
struct FProjectLH_LHTabWidgetCommonData
{
	int                                                MainNameCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WidgetClassIndex;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x53];                                      // 0x0005(0x0053) MISSED OFFSET
};

// ScriptStruct ProjectLH.EventMissionBonusSlot
// 0x0020
struct FProjectLH_EventMissionBonusSlot
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UUMG_Widget*                                 ItemSlotWidget;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectLH_LHWidget_Event_RewardItem*        RewardWidget;                                             // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_ProgressBar*                            PercentUI;                                                // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ProjectLH.GuildRaidBuffVoteDetailInfo
// 0x0020
struct FProjectLH_GuildRaidBuffVoteDetailInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.GuildDungeonRewardList
// 0x0018
struct FProjectLH_GuildDungeonRewardList
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FCommonSource_RewardInfo>            RewardInfo;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.InfinityDungeonPassRewardList
// 0x0018
struct FProjectLH_InfinityDungeonPassRewardList
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FCommonSource_RewardInfo>            RewardInfo;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.InfinityDungeonSeasonReward
// 0x0020
struct FProjectLH_InfinityDungeonSeasonReward
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.InGameInstantMessageData
// 0x0010
struct FProjectLH_InGameInstantMessageData
{
	double                                             MsgStartTime;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MsgIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ProjectLH.NPCTalkLineLInfo
// 0x000C
struct FProjectLH_NPCTalkLineLInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ProjectLH.PendingRepeatMessage
// 0x0010
struct FProjectLH_PendingRepeatMessage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.DungeonGroupInfo
// 0x0060
struct FProjectLH_DungeonGroupInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ProjectLH.BulkPurchaseInfo
// 0x0010
struct FProjectLH_BulkPurchaseInfo
{
	int64_t                                            ItemIndex;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemVolume;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.CultureFilterInfo
// 0x0018
struct FProjectLH_CultureFilterInfo
{
	unsigned char                                      Culture;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ContentsType;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     LanguageName;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.AvatarCostumePartsInfo
// 0x0008
struct FProjectLH_AvatarCostumePartsInfo
{
	int                                                TableIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPureCostume;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveHelmetModel;                                        // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveBodyModel;                                          // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct ProjectLH.LHItemProductResult
// 0x0014
struct FProjectLH_LHItemProductResult
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ProjectLH.RealmwarHistoryLogInfo
// 0x0010
struct FProjectLH_RealmwarHistoryLogInfo
{
	FCommonSource_CommonSource_ERealmwarSide           MySide;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ERealmwarSide           WinSide;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	int64_t                                            StartTime;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.LinkAutoSummonFilterInfo
// 0x0038
struct FProjectLH_LinkAutoSummonFilterInfo
{
	bool                                               bAutoSummonNext;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ELinkEmblemGrade        AutoSummonEmblemGrade;                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<FProjectLH_ProjectLH_ELinkAutoSummonOption> AutoSummonOptionArray;                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<FProjectLH_ProjectLH_ELinkAutoSummonOption> DimmedAutoSummonOptionArray;                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<FCommonSource_CommonSource_ELinkEmblemType> AutoSummonEmblemTypeArray;                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ProjectLH.WeaponCostumeInfo
// 0x0010
struct FProjectLH_WeaponCostumeInfo
{
	FCommonSource_CommonSource_ECostumeResourceType    ResourceType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TableIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExpireTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               FixedTerm;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ProjectLH.SleepModeRewardInfo
// 0x0038
struct FProjectLH_SleepModeRewardInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ProjectLH.TouchMaskSearchSettings
// 0x000C
struct FProjectLH_TouchMaskSearchSettings
{
	FProjectLH_ProjectLH_ETouchMaskSearchType          TouchMaskSearchType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TouchMaskSearchMainValue;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TouchMaskSearchSubValue;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProjectLH.PacketErrorRecordMapValue
// 0x0050
struct FProjectLH_PacketErrorRecordMapValue
{
	TMap<unsigned char, class UCommonSource_PacketErrorRecord*> Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ProjectLH.DropPackageRecordList
// 0x0010
struct FProjectLH_DropPackageRecordList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.ItemPackageRecordList
// 0x0010
struct FProjectLH_ItemPackageRecordList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.SkillTranscendOptionInfo
// 0x0014
struct FProjectLH_SkillTranscendOptionInfo
{
	FCommonSource_CommonSource_ESkillTranscendType     TranscendOptionType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ParentSkillIndex;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                slotIndex;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlusValue;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FCommonSource_CommonSource_ECharParam              SpecialCharParam;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecialOption;                                          // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ContentsOff;                                              // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
};

// ScriptStruct ProjectLH.DropGroupUniqueInfo
// 0x0010
struct FProjectLH_DropGroupUniqueInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProjectLH.WeaponFxName
// 0x0020
struct FProjectLH_WeaponFxName
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ProjectLH.QuestVoiceSound
// 0x0058
struct FProjectLH_QuestVoiceSound
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ProjectLH.WorldDungeonOpenInfo
// 0x0002
struct FProjectLH_WorldDungeonOpenInfo
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
