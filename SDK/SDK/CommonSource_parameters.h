#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CommonSource.AchievementInfoSheet.GetRecord
struct UCommonSource_AchievementInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AchievementMissionSheet.GetRecord
struct UCommonSource_AchievementMissionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementMissionRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AchievementLevelSheet.GetRecord
struct UCommonSource_AchievementLevelSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementLevelRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AchievementPeriodSheet.GetRecord
struct UCommonSource_AchievementPeriodSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementPeriodRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AchievementDefineSheet.GetRecord
struct UCommonSource_AchievementDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementDefineRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AchievementCompareGroupSheet.GetRecord
struct UCommonSource_AchievementCompareGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AchievementCompareGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIParamSheet.GetRecord
struct UCommonSource_AIParamSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIParamRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AISkillSelectorSheet.GetRecord
struct UCommonSource_AISkillSelectorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AISkillSelectorRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIPatternSheet.GetRecord
struct UCommonSource_AIPatternSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIPatternRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AITreeSheet.GetRecord
struct UCommonSource_AITreeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AITreeRecord*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AlchemyBoardInfoSheet.GetRecord
struct UCommonSource_AlchemyBoardInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AlchemyBoardInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AlchemyInfoSheet.GetRecord
struct UCommonSource_AlchemyInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AlchemyInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AlchemyOptionCountSheet.GetRecord
struct UCommonSource_AlchemyOptionCountSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AlchemyOptionCountRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AlchemyDefineSheet.GetRecord
struct UCommonSource_AlchemyDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AlchemyDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AlchemyOptionSheet.GetRecord
struct UCommonSource_AlchemyOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AlchemyOptionRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AreaInfoSheet.GetRecord
struct UCommonSource_AreaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AreaInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AutoBotSettingInfoSheet.GetRecord
struct UCommonSource_AutoBotSettingInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AutoBotSettingInfoRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarInfoSheet.GetRecord
struct UCommonSource_AvatarInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarPoseSheet.GetRecord
struct UCommonSource_AvatarPoseSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarPoseRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarPoseDefineSheet.GetRecord
struct UCommonSource_AvatarPoseDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarPoseDefineRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarDialogueSheet.GetRecord
struct UCommonSource_AvatarDialogueSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarDialogueRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarDefineSheet.GetRecord
struct UCommonSource_AvatarDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarGradeSheet.GetRecord
struct UCommonSource_AvatarGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarGradeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarGaugeSheet.GetRecord
struct UCommonSource_AvatarGaugeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarGaugeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarStatuePoseSheet.GetRecord
struct UCommonSource_AvatarStatuePoseSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarStatuePoseRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapDataChangeSheet.GetRecord
struct UCommonSource_MapDataChangeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapDataChangeRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomPackageChangeSheet.GetRecord
struct UCommonSource_RandomPackageChangeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomPackageChangeRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapDisplayCheckChangeSheet.GetRecord
struct UCommonSource_MapDisplayCheckChangeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapDisplayCheckChangeRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropExpGoldChangeSheet.GetRecord
struct UCommonSource_DropExpGoldChangeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropExpGoldChangeRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AniInfoSheet.GetRecord
struct UCommonSource_AniInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AniInfoRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingBoardInfoSheet.GetRecord
struct UCommonSource_BlessingBoardInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingBoardInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CompleteParamInfoSheet.GetRecord
struct UCommonSource_CompleteParamInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CompleteParamInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingSlotInfoSheet.GetRecord
struct UCommonSource_BlessingSlotInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingSlotInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingStoneGradeSheet.GetRecord
struct UCommonSource_BlessingStoneGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingStoneGradeRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingStoneOptionSheet.GetRecord
struct UCommonSource_BlessingStoneOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingStoneOptionRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SymbolProbSheet.GetRecord
struct UCommonSource_SymbolProbSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SymbolProbRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingSymbolCollectionSheet.GetRecord
struct UCommonSource_BlessingSymbolCollectionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingSymbolCollectionRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingStoneInfoSheet.GetRecord
struct UCommonSource_BlessingStoneInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingStoneInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingSlotEnchantOptionSheet.GetRecord
struct UCommonSource_BlessingSlotEnchantOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingSlotEnchantOptionRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingBoardSampleSheet.GetRecord
struct UCommonSource_BlessingBoardSampleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingBoardSampleRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingSlotEnchantSheet.GetRecord
struct UCommonSource_BlessingSlotEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingSlotEnchantRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BlessingDefineSheet.GetRecord
struct UCommonSource_BlessingDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BlessingDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopInfoSheet.GetRecord
struct UCommonSource_CashShopInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopLimitPackageSheet.GetRecord
struct UCommonSource_CashShopLimitPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopLimitPackageRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopDiscountInfoSheet.GetRecord
struct UCommonSource_CashShopDiscountInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopDiscountInfoRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopCategorySheet.GetRecord
struct UCommonSource_CashShopCategorySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopCategoryRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopDefineSheet.GetRecord
struct UCommonSource_CashShopDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopOdinPassPointSheet.GetRecord
struct UCommonSource_CashShopOdinPassPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopOdinPassPointRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashPurchaseMileageSheet.GetRecord
struct UCommonSource_CashPurchaseMileageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashPurchaseMileageRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopReplaceSheet.GetRecord
struct UCommonSource_CashShopReplaceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopReplaceRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AdvancementSheet.GetRecord
struct UCommonSource_AdvancementSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AdvancementRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomGuaranteeSheet.GetRecord
struct UCommonSource_RandomGuaranteeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomGuaranteeRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CashShopChainProductSheet.GetRecord
struct UCommonSource_CashShopChainProductSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CashShopChainProductRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastleInfoSheet.GetRecord
struct UCommonSource_CastleInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastleInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarDefineSheet.GetRecord
struct UCommonSource_CastlewarDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MercenaryDefineSheet.GetRecord
struct UCommonSource_MercenaryDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MercenaryDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QualifierDefineSheet.GetRecord
struct UCommonSource_QualifierDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QualifierDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarAreaBuffSheet.GetRecord
struct UCommonSource_CastlewarAreaBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarAreaBuffRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarCostumeSheet.GetRecord
struct UCommonSource_CastlewarCostumeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarCostumeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarRewardSheet.GetRecord
struct UCommonSource_CastlewarRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarRewardRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarBuffSheet.GetRecord
struct UCommonSource_CastlewarBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarBuffRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarDistributionSheet.GetRecord
struct UCommonSource_CastlewarDistributionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarDistributionRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarObjectSheet.GetRecord
struct UCommonSource_CastlewarObjectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarObjectRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MercenaryRewardRateSheet.GetRecord
struct UCommonSource_MercenaryRewardRateSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MercenaryRewardRateRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarDefenseBuffSheet.GetRecord
struct UCommonSource_CastlewarDefenseBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarDefenseBuffRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarObjectModifySheet.GetRecord
struct UCommonSource_CastlewarObjectModifySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarObjectModifyRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarGuildVehicleSheet.GetRecord
struct UCommonSource_CastlewarGuildVehicleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarGuildVehicleRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarDBSaveBuffIndexSheet.GetRecord
struct UCommonSource_CastlewarDBSaveBuffIndexSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarDBSaveBuffIndexRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildChatImotionSheet.GetRecord
struct UCommonSource_GuildChatImotionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildChatImotionRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ChatEmoticonSheet.GetRecord
struct UCommonSource_ChatEmoticonSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ChatEmoticonRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ChatDefineSheet.GetRecord
struct UCommonSource_ChatDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ChatDefineRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CheatClientSheet.GetRecord
struct UCommonSource_CheatClientSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CheatClientRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CheatServerSheet.GetRecord
struct UCommonSource_CheatServerSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CheatServerRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NameImgTextSheet.GetRecord
struct UCommonSource_NameImgTextSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NameImgTextRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NameIconTextSheet.GetRecord
struct UCommonSource_NameIconTextSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NameIconTextRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CinemaSubtitlesSheet.GetRecord
struct UCommonSource_CinemaSubtitlesSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CinemaSubtitlesRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CinemaInfoSheet.GetRecord
struct UCommonSource_CinemaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CinemaInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ClassChangeInfoSheet.GetRecord
struct UCommonSource_ClassChangeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ClassChangeInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillEnchantRewardSheet.GetRecord
struct UCommonSource_SkillEnchantRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillEnchantRewardRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ChangeGradeSheet.GetRecord
struct UCommonSource_ChangeGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ChangeGradeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ChangeItemGradeSheet.GetRecord
struct UCommonSource_ChangeItemGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ChangeItemGradeRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemChangePartsSheet.GetRecord
struct UCommonSource_ItemChangePartsSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemChangePartsRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ClassChangePossiblePacketSheet.GetRecord
struct UCommonSource_ClassChangePossiblePacketSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ClassChangePossiblePacketRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ClassChangeDefineSheet.GetRecord
struct UCommonSource_ClassChangeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ClassChangeDefineRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillEnchantChangeGradeSheet.GetRecord
struct UCommonSource_SkillEnchantChangeGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillEnchantChangeGradeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CollectionRewardInfoSheet.GetRecord
struct UCommonSource_CollectionRewardInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CollectionRewardInfoRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CollectionCountTypeSheet.GetRecord
struct UCommonSource_CollectionCountTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CollectionCountTypeRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CollectionReplaceSheet.GetRecord
struct UCommonSource_CollectionReplaceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CollectionReplaceRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CollectionDefineSheet.GetRecord
struct UCommonSource_CollectionDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CollectionDefineRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CostumeInfoSheet.GetRecord
struct UCommonSource_CostumeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CostumeInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CostumePoseSheet.GetRecord
struct UCommonSource_CostumePoseSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CostumePoseRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GetItemListSheet.GetRecord
struct UCommonSource_GetItemListSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GetItemListRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CostumeDyeingColorSheet.GetRecord
struct UCommonSource_CostumeDyeingColorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CostumeDyeingColorRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingPresetSheet.GetRecord
struct UCommonSource_CustomizingPresetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingPresetRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingTypeSheet.GetRecord
struct UCommonSource_CustomizingTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingTypeRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingColorSheet.GetRecord
struct UCommonSource_CustomizingColorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingColorRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingGaugeSheet.GetRecord
struct UCommonSource_CustomizingGaugeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingGaugeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingPoseSheet.GetRecord
struct UCommonSource_CustomizingPoseSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingPoseRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CustomizingCostumeSheet.GetRecord
struct UCommonSource_CustomizingCostumeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CustomizingCostumeRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CostumeDyeingDefineSheet.GetRecord
struct UCommonSource_CostumeDyeingDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CostumeDyeingDefineRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QualitySettingSheet.GetRecord
struct UCommonSource_QualitySettingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QualitySettingRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AndroidSheet.GetRecord
struct UCommonSource_AndroidSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AndroidRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.IOSSheet.GetRecord
struct UCommonSource_IOSSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_IOSRecord*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DialogueInfoSheet.GetRecord
struct UCommonSource_DialogueInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DialogueInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MainTalkTypeSheet.GetRecord
struct UCommonSource_MainTalkTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MainTalkTypeRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SubTalkTypeSheet.GetRecord
struct UCommonSource_SubTalkTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SubTalkTypeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DialogueDefineSheet.GetRecord
struct UCommonSource_DialogueDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DialogueDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropExpSheet.GetRecord
struct UCommonSource_DropExpSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropExpRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NPCRandomTalkSheet.GetRecord
struct UCommonSource_NPCRandomTalkSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NPCRandomTalkRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropLevelPenaltySheet.GetRecord
struct UCommonSource_DropLevelPenaltySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropLevelPenaltyRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropPartyPenaltySheet.GetRecord
struct UCommonSource_DropPartyPenaltySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropPartyPenaltyRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropPartyBonusSheet.GetRecord
struct UCommonSource_DropPartyBonusSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropPartyBonusRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EmotionInfoSheet.GetRecord
struct UCommonSource_EmotionInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EmotionInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EmotionDefineSheet.GetRecord
struct UCommonSource_EmotionDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EmotionDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EnumSheet.GetRecord
struct UCommonSource_EnumSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EnumRecord*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EnchantGameSheet.GetRecord
struct UCommonSource_EnchantGameSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EnchantGameRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeSellingPriceSheet.GetRecord
struct UCommonSource_ExchangeSellingPriceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeSellingPriceRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeSortSheet.GetRecord
struct UCommonSource_ExchangeSortSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeSortRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeCategorySheet.GetRecord
struct UCommonSource_ExchangeCategorySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeCategoryRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeConditionCheckSheet.GetRecord
struct UCommonSource_ExchangeConditionCheckSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeConditionCheckRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeEnchantAlertMultipleSheet.GetRecord
struct UCommonSource_ExchangeEnchantAlertMultipleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeEnchantAlertMultipleRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CommonFilteringInfoSheet.GetRecord
struct UCommonSource_CommonFilteringInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CommonFilteringInfoRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NameFilteringInfoSheet.GetRecord
struct UCommonSource_NameFilteringInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NameFilteringInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExceptionFilteringInfoSheet.GetRecord
struct UCommonSource_ExceptionFilteringInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExceptionFilteringInfoRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.FormulaItemTypeSheet.GetRecord
struct UCommonSource_FormulaItemTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_FormulaItemTypeRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.FriendDefineSheet.GetRecord
struct UCommonSource_FriendDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_FriendDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.FormulaItemEnchantSheet.GetRecord
struct UCommonSource_FormulaItemEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_FormulaItemEnchantRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerCheatSheet.GetRecord
struct UCommonSource_PlayerCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerCheatRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemCheatSheet.GetRecord
struct UCommonSource_ItemCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemCheatRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExchangeDefineSheet.GetRecord
struct UCommonSource_ExchangeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExchangeDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleCheatSheet.GetRecord
struct UCommonSource_VehicleCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleCheatRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AvatarCheatSheet.GetRecord
struct UCommonSource_AvatarCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AvatarCheatRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CollectionCheatSheet.GetRecord
struct UCommonSource_CollectionCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CollectionCheatRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarGuildBuffSheet.GetRecord
struct UCommonSource_CastlewarGuildBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarGuildBuffRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeaponShapeCheatSheet.GetRecord
struct UCommonSource_WeaponShapeCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeaponShapeCheatRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ImprintCheatSheet.GetRecord
struct UCommonSource_ImprintCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ImprintCheatRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SealedStoneCheatSheet.GetRecord
struct UCommonSource_SealedStoneCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SealedStoneCheatRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetCheatSheet.GetRecord
struct UCommonSource_PetCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetCheatRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkCheatSheet.GetRecord
struct UCommonSource_LinkCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkCheatRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SetParamCheatSheet.GetRecord
struct UCommonSource_SetParamCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SetParamCheatRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StringSheet.GetRecord
struct UCommonSource_StringSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StringRecord*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ColorDefineSheet.GetRecord
struct UCommonSource_ColorDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ColorDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefineSheet.GetRecord
struct UCommonSource_DefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefineRecord*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResetTimeSheet.GetRecord
struct UCommonSource_ResetTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResetTimeRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillCheatSheet.GetRecord
struct UCommonSource_SkillCheatSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillCheatRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CoolTimeSheet.GetRecord
struct UCommonSource_CoolTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CoolTimeRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuideSheet.GetRecord
struct UCommonSource_GuideSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuideRecord*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GachaOddsUrlSheet.GetRecord
struct UCommonSource_GachaOddsUrlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GachaOddsUrlRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldSpawnGroupSheet.GetRecord
struct UCommonSource_GuildBattlefieldSpawnGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldSpawnGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldObjectDefineSheet.GetRecord
struct UCommonSource_GuildBattlefieldObjectDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldObjectDefineRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeekIntervalSheet.GetRecord
struct UCommonSource_WeekIntervalSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeekIntervalRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldMonsterGroupSheet.GetRecord
struct UCommonSource_GuildBattlefieldMonsterGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldMonsterGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldDoubleMonsterSheet.GetRecord
struct UCommonSource_GuildBattlefieldDoubleMonsterSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldDoubleMonsterRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldMatchingGroupSheet.GetRecord
struct UCommonSource_GuildBattlefieldMatchingGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldMatchingGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldTimeDefineSheet.GetRecord
struct UCommonSource_GuildBattlefieldTimeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldTimeDefineRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MessageCoolTimeSheet.GetRecord
struct UCommonSource_MessageCoolTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MessageCoolTimeRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldBattleTimeSheet.GetRecord
struct UCommonSource_GuildBattlefieldBattleTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldBattleTimeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefenseWaveInfoSheet.GetRecord
struct UCommonSource_DefenseWaveInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefenseWaveInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StatueInfoSheet.GetRecord
struct UCommonSource_StatueInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StatueInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleSummonPointInfoSheet.GetRecord
struct UCommonSource_VehicleSummonPointInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleSummonPointInfoRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefenseSummonMonsterSheet.GetRecord
struct UCommonSource_DefenseSummonMonsterSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefenseSummonMonsterRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefenseSummonMonsterAreaInfoSheet.GetRecord
struct UCommonSource_DefenseSummonMonsterAreaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefenseSummonMonsterAreaInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ChaseWayPointSheet.GetRecord
struct UCommonSource_ChaseWayPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ChaseWayPointRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldDefineSheet.GetRecord
struct UCommonSource_GuildBattlefieldDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldDefineRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefenseSummonVehicleSheet.GetRecord
struct UCommonSource_DefenseSummonVehicleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefenseSummonVehicleRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StatueBlessInfoSheet.GetRecord
struct UCommonSource_StatueBlessInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StatueBlessInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropGuardianCoinSheet.GetRecord
struct UCommonSource_DropGuardianCoinSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropGuardianCoinRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DefenseGuideInfoSheet.GetRecord
struct UCommonSource_DefenseGuideInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DefenseGuideInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildDefenseDefineSheet.GetRecord
struct UCommonSource_GuildDefenseDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildDefenseDefineRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeDefineSheet.GetRecord
struct UCommonSource_GuildItemMakeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeDefineRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeSlotSheet.GetRecord
struct UCommonSource_GuildItemMakeSlotSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeSlotRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeInfoSheet.GetRecord
struct UCommonSource_GuildItemMakeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeCategorySheet.GetRecord
struct UCommonSource_GuildItemMakeCategorySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeCategoryRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SupplementGuardianCoinSheet.GetRecord
struct UCommonSource_SupplementGuardianCoinSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SupplementGuardianCoinRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeMaterialRewardSheet.GetRecord
struct UCommonSource_GuildItemMakeMaterialRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeMaterialRewardRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildItemMakeRedDotSheet.GetRecord
struct UCommonSource_GuildItemMakeRedDotSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildItemMakeRedDotRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RaidInfoSheet.GetRecord
struct UCommonSource_RaidInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RaidInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RaidSkillPrioritySheet.GetRecord
struct UCommonSource_RaidSkillPrioritySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RaidSkillPriorityRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildRaidDefineSheet.GetRecord
struct UCommonSource_GuildRaidDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildRaidDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RaidBuffSheet.GetRecord
struct UCommonSource_RaidBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RaidBuffRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdDefineSheet.GetRecord
struct UCommonSource_StrongholdDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdDefineRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdInfoSheet.GetRecord
struct UCommonSource_StrongholdInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdBuffSheet.GetRecord
struct UCommonSource_StrongholdBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdBuffRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdBuffGroupSetSheet.GetRecord
struct UCommonSource_StrongholdBuffGroupSetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdBuffGroupSetRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdNotiSheet.GetRecord
struct UCommonSource_StrongholdNotiSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdNotiRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdRankingSheet.GetRecord
struct UCommonSource_StrongholdRankingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdRankingRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdBuffGroupSheet.GetRecord
struct UCommonSource_StrongholdBuffGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdBuffGroupRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildJobSheet.GetRecord
struct UCommonSource_GuildJobSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildJobRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StrongholdBuffGroupSetPoolSheet.GetRecord
struct UCommonSource_StrongholdBuffGroupSetPoolSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StrongholdBuffGroupSetPoolRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildTendencySheet.GetRecord
struct UCommonSource_GuildTendencySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildTendencyRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildMarkSheet.GetRecord
struct UCommonSource_GuildMarkSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildMarkRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildMarkFrameColorSheet.GetRecord
struct UCommonSource_GuildMarkFrameColorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildMarkFrameColorRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildMarkBackgroundColorSheet.GetRecord
struct UCommonSource_GuildMarkBackgroundColorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildMarkBackgroundColorRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildLevelSheet.GetRecord
struct UCommonSource_GuildLevelSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildLevelRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildMarkEffectSheet.GetRecord
struct UCommonSource_GuildMarkEffectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildMarkEffectRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildDonateSheet.GetRecord
struct UCommonSource_GuildDonateSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildDonateRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildAuctionDefineSheet.GetRecord
struct UCommonSource_GuildAuctionDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildAuctionDefineRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildDefineSheet.GetRecord
struct UCommonSource_GuildDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildAllianceDefineSheet.GetRecord
struct UCommonSource_GuildAllianceDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildAllianceDefineRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildAuctionMonsterSheet.GetRecord
struct UCommonSource_GuildAuctionMonsterSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildAuctionMonsterRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildOpenChattingSheet.GetRecord
struct UCommonSource_GuildOpenChattingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildOpenChattingRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ImprintStepSheet.GetRecord
struct UCommonSource_ImprintStepSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ImprintStepRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ImprintOptionSheet.GetRecord
struct UCommonSource_ImprintOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ImprintOptionRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ImprintDefineSheet.GetRecord
struct UCommonSource_ImprintDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ImprintDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ImprintIconSheet.GetRecord
struct UCommonSource_ImprintIconSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ImprintIconRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SpecializeStepSheet.GetRecord
struct UCommonSource_SpecializeStepSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SpecializeStepRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SpecializeDefineSheet.GetRecord
struct UCommonSource_SpecializeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SpecializeDefineRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SpecializeIconSheet.GetRecord
struct UCommonSource_SpecializeIconSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SpecializeIconRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonAreaInfoSheet.GetRecord
struct UCommonSource_InfinityDungeonAreaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonAreaInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonFloorInfoSheet.GetRecord
struct UCommonSource_InfinityDungeonFloorInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonFloorInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SpecializeOptionSheet.GetRecord
struct UCommonSource_SpecializeOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SpecializeOptionRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonSeasonRewardSheet.GetRecord
struct UCommonSource_InfinityDungeonSeasonRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonSeasonRewardRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonBuffSheet.GetRecord
struct UCommonSource_InfinityDungeonBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonBuffRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonSkillPrioritySheet.GetRecord
struct UCommonSource_InfinityDungeonSkillPrioritySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonSkillPriorityRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonSettingSheet.GetRecord
struct UCommonSource_InfinityDungeonSettingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonSettingRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonMultiBossSettingSheet.GetRecord
struct UCommonSource_InfinityDungeonMultiBossSettingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonMultiBossSettingRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonSummonSheet.GetRecord
struct UCommonSource_InfinityDungeonSummonSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonSummonRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonBalanceSheet.GetRecord
struct UCommonSource_InfinityDungeonBalanceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonBalanceRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonDefineSheet.GetRecord
struct UCommonSource_InfinityDungeonDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonDefineRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonWeakenDefineSheet.GetRecord
struct UCommonSource_InfinityDungeonWeakenDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonWeakenDefineRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InputLimitDefineSheet.GetRecord
struct UCommonSource_InputLimitDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InputLimitDefineRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InputInfoSheet.GetRecord
struct UCommonSource_InputInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InputInfoRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InputDefineSheet.GetRecord
struct UCommonSource_InputDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InputDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonBattleTypeSheet.GetRecord
struct UCommonSource_InfinityDungeonBattleTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonBattleTypeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InteractSheet.GetRecord
struct UCommonSource_InteractSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InteractRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InteractTypeInfoSheet.GetRecord
struct UCommonSource_InteractTypeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InteractTypeInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InteractValidationDistanceSheet.GetRecord
struct UCommonSource_InteractValidationDistanceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InteractValidationDistanceRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AutoGatherInfoSheet.GetRecord
struct UCommonSource_AutoGatherInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AutoGatherInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CultureDLCBlockSheet.GetRecord
struct UCommonSource_CultureDLCBlockSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CultureDLCBlockRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CultureOptionSheet.GetRecord
struct UCommonSource_CultureOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CultureOptionRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RegionOptionSheet.GetRecord
struct UCommonSource_RegionOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RegionOptionRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StringTagInfoSheet.GetRecord
struct UCommonSource_StringTagInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StringTagInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemInfoSheet.GetRecord
struct UCommonSource_ItemInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemEnchantSheet.GetRecord
struct UCommonSource_ItemEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemEnchantRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InformGuideSheet.GetRecord
struct UCommonSource_InformGuideSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InformGuideRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemEnchantMaterialSheet.GetRecord
struct UCommonSource_ItemEnchantMaterialSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemEnchantMaterialRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemWorkmanshipCostSheet.GetRecord
struct UCommonSource_ItemWorkmanshipCostSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemWorkmanshipCostRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemWorkmanshipSheet.GetRecord
struct UCommonSource_ItemWorkmanshipSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemWorkmanshipRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemRandomOptionSheet.GetRecord
struct UCommonSource_ItemRandomOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemRandomOptionRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemSoulEnchantSheet.GetRecord
struct UCommonSource_ItemSoulEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemSoulEnchantRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemSoulEffectSheet.GetRecord
struct UCommonSource_ItemSoulEffectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemSoulEffectRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemBindSheet.GetRecord
struct UCommonSource_ItemBindSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemBindRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemGradeInfoSheet.GetRecord
struct UCommonSource_ItemGradeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemGradeInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemDefineSheet.GetRecord
struct UCommonSource_ItemDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemDefineRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetRandomOptionSheet.GetRecord
struct UCommonSource_PetRandomOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetRandomOptionRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetInfoSheet.GetRecord
struct UCommonSource_PetInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetInfoRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetRandomOptionInfoSheet.GetRecord
struct UCommonSource_PetRandomOptionInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetRandomOptionInfoRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemMakeSheet.GetRecord
struct UCommonSource_ItemMakeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemMakeRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemMakeCategorySheet.GetRecord
struct UCommonSource_ItemMakeCategorySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemMakeCategoryRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemSlotSheet.GetRecord
struct UCommonSource_ItemSlotSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemSlotRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemRecoveryCategorySheet.GetRecord
struct UCommonSource_ItemRecoveryCategorySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemRecoveryCategoryRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemMakeReplaceSheet.GetRecord
struct UCommonSource_ItemMakeReplaceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemMakeReplaceRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemDismantleSheet.GetRecord
struct UCommonSource_ItemDismantleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemDismantleRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemSetSheet.GetRecord
struct UCommonSource_ItemSetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemSetRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemConsumeSheet.GetRecord
struct UCommonSource_ItemConsumeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemConsumeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemEquipSlotSheet.GetRecord
struct UCommonSource_ItemEquipSlotSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemEquipSlotRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemUseLimitSheet.GetRecord
struct UCommonSource_ItemUseLimitSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemUseLimitRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemDropControlSheet.GetRecord
struct UCommonSource_ItemDropControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemDropControlRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropControlGroupSheet.GetRecord
struct UCommonSource_DropControlGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropControlGroupRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropControlServerGroupSheet.GetRecord
struct UCommonSource_DropControlServerGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropControlServerGroupRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemSourceSheet.GetRecord
struct UCommonSource_ItemSourceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemSourceRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResourceIndicatorSheet.GetRecord
struct UCommonSource_ResourceIndicatorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResourceIndicatorRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResourceTypeSheet.GetRecord
struct UCommonSource_ResourceTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResourceTypeRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemReplacementSheet.GetRecord
struct UCommonSource_ItemReplacementSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemReplacementRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LetterBoxInfoSheet.GetRecord
struct UCommonSource_LetterBoxInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LetterBoxInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LetterDefineSheet.GetRecord
struct UCommonSource_LetterDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LetterDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.IndicatorItemTypeSheet.GetRecord
struct UCommonSource_IndicatorItemTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_IndicatorItemTypeRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkBoardInfoSheet.GetRecord
struct UCommonSource_LinkBoardInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkBoardInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemIndicatorSheet.GetRecord
struct UCommonSource_ItemIndicatorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemIndicatorRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkEmblemInfoSheet.GetRecord
struct UCommonSource_LinkEmblemInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkEmblemInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkEmblemOptionSheet.GetRecord
struct UCommonSource_LinkEmblemOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkEmblemOptionRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkSlotInfoSheet.GetRecord
struct UCommonSource_LinkSlotInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkSlotInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkEmblemCountOptionSheet.GetRecord
struct UCommonSource_LinkEmblemCountOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkEmblemCountOptionRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CompleteLinkOptionSheet.GetRecord
struct UCommonSource_CompleteLinkOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CompleteLinkOptionRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkDefineSheet.GetRecord
struct UCommonSource_LinkDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkDefineRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkResetPriceSheet.GetRecord
struct UCommonSource_LinkResetPriceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkResetPriceRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LinkBonusCountSheet.GetRecord
struct UCommonSource_LinkBonusCountSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LinkBonusCountRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LoadingInfoSheet.GetRecord
struct UCommonSource_LoadingInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LoadingInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ModelInfoSheet.GetRecord
struct UCommonSource_ModelInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ModelInfoRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.TipInfoSheet.GetRecord
struct UCommonSource_TipInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_TipInfoRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.LoadingDefineSheet.GetRecord
struct UCommonSource_LoadingDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_LoadingDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapInfoSheet.GetRecord
struct UCommonSource_MapInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapInfoRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapTypeSheet.GetRecord
struct UCommonSource_MapTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapTypeRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PartyDungeonSheet.GetRecord
struct UCommonSource_PartyDungeonSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PartyDungeonRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PortalSheet.GetRecord
struct UCommonSource_PortalSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PortalRecord*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapDefineSheet.GetRecord
struct UCommonSource_MapDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapDefineRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RankScoreSheet.GetRecord
struct UCommonSource_RankScoreSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RankScoreRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ClearRankSheet.GetRecord
struct UCommonSource_ClearRankSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ClearRankRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldAreaSheet.GetRecord
struct UCommonSource_WorldAreaSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldAreaRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.TownInfoSheet.GetRecord
struct UCommonSource_TownInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_TownInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AreaTypeInfoSheet.GetRecord
struct UCommonSource_AreaTypeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AreaTypeInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DungeonInfoSheet.GetRecord
struct UCommonSource_DungeonInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DungeonInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapBossInfoSheet.GetRecord
struct UCommonSource_MapBossInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapBossInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapDisplayCkeckSheet.GetRecord
struct UCommonSource_MapDisplayCkeckSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapDisplayCkeckRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapGroupDisplayCheckSheet.GetRecord
struct UCommonSource_MapGroupDisplayCheckSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapGroupDisplayCheckRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapAISelectSheet.GetRecord
struct UCommonSource_MapAISelectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapAISelectRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapEnterChargeSheet.GetRecord
struct UCommonSource_MapEnterChargeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapEnterChargeRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DuelDungeonSheet.GetRecord
struct UCommonSource_DuelDungeonSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DuelDungeonRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DungeonTimeSheet.GetRecord
struct UCommonSource_DungeonTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DungeonTimeRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DuelDungeonMapSheet.GetRecord
struct UCommonSource_DuelDungeonMapSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DuelDungeonMapRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CastlewarQualifierMapSheet.GetRecord
struct UCommonSource_CastlewarQualifierMapSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CastlewarQualifierMapRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapTriggerSheet.GetRecord
struct UCommonSource_MapTriggerSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapTriggerRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InstanceServerMapTypeSheet.GetRecord
struct UCommonSource_InstanceServerMapTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InstanceServerMapTypeRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AreaBuffApplyObjectTypeSheet.GetRecord
struct UCommonSource_AreaBuffApplyObjectTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AreaBuffApplyObjectTypeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AreaBuffApplyClassTypeSheet.GetRecord
struct UCommonSource_AreaBuffApplyClassTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AreaBuffApplyClassTypeRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MultiMiniMapSheet.GetRecord
struct UCommonSource_MultiMiniMapSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MultiMiniMapRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapColliderInfoSheet.GetRecord
struct UCommonSource_MapColliderInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapColliderInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldMapSheet.GetRecord
struct UCommonSource_GuildBattlefieldMapSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldMapRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MessageInfoSheet.GetRecord
struct UCommonSource_MessageInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MessageInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerMessageSheet.GetRecord
struct UCommonSource_ServerMessageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerMessageRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BossInfoSheet.GetRecord
struct UCommonSource_BossInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BossInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MonsterGroupIDSheet.GetRecord
struct UCommonSource_MonsterGroupIDSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MonsterGroupIDRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MonsterDefineSheet.GetRecord
struct UCommonSource_MonsterDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MonsterDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MonsterNotInAreaSheet.GetRecord
struct UCommonSource_MonsterNotInAreaSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MonsterNotInAreaRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MonsterGradeSheet.GetRecord
struct UCommonSource_MonsterGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MonsterGradeRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NoticeInfoSheet.GetRecord
struct UCommonSource_NoticeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NoticeInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ContentsControlSheet.GetRecord
struct UCommonSource_ContentsControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ContentsControlRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ContentSheet.GetRecord
struct UCommonSource_ContentSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ContentRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ButtonLockSheet.GetRecord
struct UCommonSource_ButtonLockSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ButtonLockRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NoticeDefineSheet.GetRecord
struct UCommonSource_NoticeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NoticeDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MarketReviewSheet.GetRecord
struct UCommonSource_MarketReviewSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MarketReviewRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ContentLockSheet.GetRecord
struct UCommonSource_ContentLockSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ContentLockRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemControlSheet.GetRecord
struct UCommonSource_ItemControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemControlRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MonsterSheet.GetRecord
struct UCommonSource_MonsterSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MonsterRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExpirationInfoSheet.GetRecord
struct UCommonSource_ExpirationInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExpirationInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ContentsWorldControlSheet.GetRecord
struct UCommonSource_ContentsWorldControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ContentsWorldControlRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResourceControlSheet.GetRecord
struct UCommonSource_ResourceControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResourceControlRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NpcSheet.GetRecord
struct UCommonSource_NpcSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NpcRecord*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BaseObjectSheet.GetRecord
struct UCommonSource_BaseObjectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BaseObjectRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ObjectDefineSheet.GetRecord
struct UCommonSource_ObjectDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ObjectDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ObjectTypeSheet.GetRecord
struct UCommonSource_ObjectTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ObjectTypeRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NpcFuncTypeInfoSheet.GetRecord
struct UCommonSource_NpcFuncTypeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NpcFuncTypeInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ObjectHitEffectSheet.GetRecord
struct UCommonSource_ObjectHitEffectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ObjectHitEffectRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ColliderInfoSheet.GetRecord
struct UCommonSource_ColliderInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ColliderInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PacketErrorSheet.GetRecord
struct UCommonSource_PacketErrorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PacketErrorRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CharParamSheet.GetRecord
struct UCommonSource_CharParamSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CharParamRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillParamSheet.GetRecord
struct UCommonSource_SkillParamSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillParamRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.UnappliedCharParamSheet.GetRecord
struct UCommonSource_UnappliedCharParamSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_UnappliedCharParamRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BattlePowerParamSheet.GetRecord
struct UCommonSource_BattlePowerParamSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BattlePowerParamRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ParamDefineSheet.GetRecord
struct UCommonSource_ParamDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ParamDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PartyDefineSheet.GetRecord
struct UCommonSource_PartyDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PartyDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BattlePowerVariableSheet.GetRecord
struct UCommonSource_BattlePowerVariableSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BattlePowerVariableRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SoulPetInfoSheet.GetRecord
struct UCommonSource_SoulPetInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SoulPetInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PartyRoleSheet.GetRecord
struct UCommonSource_PartyRoleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PartyRoleRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetGradeSheet.GetRecord
struct UCommonSource_PetGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetGradeRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PatrolFlagInfoSheet.GetRecord
struct UCommonSource_PatrolFlagInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PatrolFlagInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetGuardianInfoSheet.GetRecord
struct UCommonSource_PetGuardianInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetGuardianInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetGuardianConditionSheet.GetRecord
struct UCommonSource_PetGuardianConditionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetGuardianConditionRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetGuardianOptionSheet.GetRecord
struct UCommonSource_PetGuardianOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetGuardianOptionRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetGuardianDifficultyInfoSheet.GetRecord
struct UCommonSource_PetGuardianDifficultyInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetGuardianDifficultyInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkBrutalStateSheet.GetRecord
struct UCommonSource_PkBrutalStateSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkBrutalStateRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkSlayerScoreSheet.GetRecord
struct UCommonSource_PkSlayerScoreSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkSlayerScoreRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkMonsterKillCountSheet.GetRecord
struct UCommonSource_PkMonsterKillCountSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkMonsterKillCountRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkAbnormalResistSheet.GetRecord
struct UCommonSource_PkAbnormalResistSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkAbnormalResistRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkSlayerPenaltySheet.GetRecord
struct UCommonSource_PkSlayerPenaltySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkSlayerPenaltyRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkDefineSheet.GetRecord
struct UCommonSource_PkDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkDefineRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PkAssistDefineSheet.GetRecord
struct UCommonSource_PkAssistDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PkAssistDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PetDefineSheet.GetRecord
struct UCommonSource_PetDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PetDefineRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerSheet.GetRecord
struct UCommonSource_PlayerSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerRecord*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerLevelSheet.GetRecord
struct UCommonSource_PlayerLevelSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerLevelRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerStartStatusSheet.GetRecord
struct UCommonSource_PlayerStartStatusSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerStartStatusRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerTendencySheet.GetRecord
struct UCommonSource_PlayerTendencySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerTendencyRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIPlayerNameSheet.GetRecord
struct UCommonSource_AIPlayerNameSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIPlayerNameRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerDefineSheet.GetRecord
struct UCommonSource_PlayerDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerDefineRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIStatusSheet.GetRecord
struct UCommonSource_AIStatusSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIStatusRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIPlayerAvatarSheet.GetRecord
struct UCommonSource_AIPlayerAvatarSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIPlayerAvatarRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResurrectionCostSheet.GetRecord
struct UCommonSource_ResurrectionCostSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResurrectionCostRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerDeletePenaltySheet.GetRecord
struct UCommonSource_PlayerDeletePenaltySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerDeletePenaltyRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AIPlayerItemSheet.GetRecord
struct UCommonSource_AIPlayerItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AIPlayerItemRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerClassOnOffSheet.GetRecord
struct UCommonSource_PlayerClassOnOffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerClassOnOffRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerSkillQuickSlotPosSheet.GetRecord
struct UCommonSource_PlayerSkillQuickSlotPosSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerSkillQuickSlotPosRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.IntegratedPresetControlSheet.GetRecord
struct UCommonSource_IntegratedPresetControlSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_IntegratedPresetControlRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestInfoSheet.GetRecord
struct UCommonSource_QuestInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestInfoRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestSheet.GetRecord
struct UCommonSource_RepeatQuestSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestRewardBundleSheet.GetRecord
struct UCommonSource_RepeatQuestRewardBundleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestRewardBundleRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestVoiceSheet.GetRecord
struct UCommonSource_QuestVoiceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestVoiceRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestMissionSheet.GetRecord
struct UCommonSource_QuestMissionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestMissionRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestItemInfoSheet.GetRecord
struct UCommonSource_QuestItemInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestItemInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestChoiceSheet.GetRecord
struct UCommonSource_QuestChoiceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestChoiceRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PKRandomTauntMessageSheet.GetRecord
struct UCommonSource_PKRandomTauntMessageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PKRandomTauntMessageRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestActionSheet.GetRecord
struct UCommonSource_QuestActionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestActionRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResurrectionWaitTimeSheet.GetRecord
struct UCommonSource_ResurrectionWaitTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResurrectionWaitTimeRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestDefineSheet.GetRecord
struct UCommonSource_QuestDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestTouchMaskSheet.GetRecord
struct UCommonSource_QuestTouchMaskSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestTouchMaskRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestGradeRateSheet.GetRecord
struct UCommonSource_RepeatQuestGradeRateSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestGradeRateRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestMaxNumberSheet.GetRecord
struct UCommonSource_RepeatQuestMaxNumberSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestMaxNumberRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestRefreshPriceSheet.GetRecord
struct UCommonSource_RepeatQuestRefreshPriceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestRefreshPriceRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestGroupSheet.GetRecord
struct UCommonSource_QuestGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestGroupRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestBGSheet.GetRecord
struct UCommonSource_QuestBGSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestBGRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionQuestRefreshPriceSheet.GetRecord
struct UCommonSource_InvasionQuestRefreshPriceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionQuestRefreshPriceRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionQuestSheet.GetRecord
struct UCommonSource_InvasionQuestSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionQuestRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxRepeatQuestSheet.GetRecord
struct UCommonSource_RandomBoxRepeatQuestSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxRepeatQuestRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EventQuestInfoSheet.GetRecord
struct UCommonSource_EventQuestInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EventQuestInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxQuestSheet.GetRecord
struct UCommonSource_RandomBoxQuestSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxQuestRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxAvatarSheet.GetRecord
struct UCommonSource_RandomBoxAvatarSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxAvatarRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxDropSheet.GetRecord
struct UCommonSource_RandomBoxDropSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxDropRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxWeaponShapeSheet.GetRecord
struct UCommonSource_RandomBoxWeaponShapeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxWeaponShapeRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxVehicleSheet.GetRecord
struct UCommonSource_RandomBoxVehicleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxVehicleRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxItemSheet.GetRecord
struct UCommonSource_RandomBoxItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxItemRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxCostumeSheet.GetRecord
struct UCommonSource_RandomBoxCostumeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxCostumeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxRuneSheet.GetRecord
struct UCommonSource_RandomBoxRuneSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxRuneRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxGoodsSheet.GetRecord
struct UCommonSource_RandomBoxGoodsSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxGoodsRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxBlessingStoneSheet.GetRecord
struct UCommonSource_RandomBoxBlessingStoneSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxBlessingStoneRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SelectBoxItemSheet.GetRecord
struct UCommonSource_SelectBoxItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SelectBoxItemRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxRelicGambleRewardItemSheet.GetRecord
struct UCommonSource_RandomBoxRelicGambleRewardItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxRelicGambleRewardItemRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxInfinityDungeonSheet.GetRecord
struct UCommonSource_RandomBoxInfinityDungeonSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxInfinityDungeonRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxGuildBattlefieldSheet.GetRecord
struct UCommonSource_RandomBoxGuildBattlefieldSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxGuildBattlefieldRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ExceptCheckGroupIDSheet.GetRecord
struct UCommonSource_ExceptCheckGroupIDSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ExceptCheckGroupIDRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomBoxPetSheet.GetRecord
struct UCommonSource_RandomBoxPetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomBoxPetRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomChoiceGradeSheet.GetRecord
struct UCommonSource_RandomChoiceGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomChoiceGradeRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomChoiceAvatarSheet.GetRecord
struct UCommonSource_RandomChoiceAvatarSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomChoiceAvatarRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomChoiceVehicleSheet.GetRecord
struct UCommonSource_RandomChoiceVehicleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomChoiceVehicleRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomChoicePetSheet.GetRecord
struct UCommonSource_RandomChoicePetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomChoicePetRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomChoiceWeaponShapeSheet.GetRecord
struct UCommonSource_RandomChoiceWeaponShapeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomChoiceWeaponShapeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RandomOptionSheet.GetRecord
struct UCommonSource_RandomOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RandomOptionRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestSequenceSheet.GetRecord
struct UCommonSource_QuestSequenceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestSequenceRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.DropPackageSheet.GetRecord
struct UCommonSource_DropPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_DropPackageRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RepeatQuestPackageSheet.GetRecord
struct UCommonSource_RepeatQuestPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RepeatQuestPackageRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestPackageSheet.GetRecord
struct UCommonSource_QuestPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestPackageRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ItemPackageSheet.GetRecord
struct UCommonSource_ItemPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ItemPackageRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MapPackageSheet.GetRecord
struct UCommonSource_MapPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MapPackageRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGamblePackageSheet.GetRecord
struct UCommonSource_RelicGamblePackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGamblePackageRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.TreasurePackageSheet.GetRecord
struct UCommonSource_TreasurePackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_TreasurePackageRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InfinityDungeonPackageSheet.GetRecord
struct UCommonSource_InfinityDungeonPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InfinityDungeonPackageRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.GuildBattlefieldPackageSheet.GetRecord
struct UCommonSource_GuildBattlefieldPackageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_GuildBattlefieldPackageRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RankingBuffSheet.GetRecord
struct UCommonSource_RankingBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RankingBuffRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RankingDefineSheet.GetRecord
struct UCommonSource_RankingDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RankingDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarRankRewardSheet.GetRecord
struct UCommonSource_RealmwarRankRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarRankRewardRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarSeasonRankSheet.GetRecord
struct UCommonSource_RealmwarSeasonRankSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarSeasonRankRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarDefineSheet.GetRecord
struct UCommonSource_RealmwarDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarDefineRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarKillCountMsgSheet.GetRecord
struct UCommonSource_RealmwarKillCountMsgSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarKillCountMsgRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarInteractRandomBuffSheet.GetRecord
struct UCommonSource_RealmwarInteractRandomBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarInteractRandomBuffRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarInteractRewardSheet.GetRecord
struct UCommonSource_RealmwarInteractRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarInteractRewardRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGambleInfoSheet.GetRecord
struct UCommonSource_RelicGambleInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGambleInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGambleRewardBundleSheet.GetRecord
struct UCommonSource_RelicGambleRewardBundleSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGambleRewardBundleRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RealmwarInteractFactionSheet.GetRecord
struct UCommonSource_RealmwarInteractFactionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RealmwarInteractFactionRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGambleCostSheet.GetRecord
struct UCommonSource_RelicGambleCostSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGambleCostRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGambleRefreshPriceSheet.GetRecord
struct UCommonSource_RelicGambleRefreshPriceSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGambleRefreshPriceRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResourceIconSheet.GetRecord
struct UCommonSource_ResourceIconSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResourceIconRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ResourceInfoSheet.GetRecord
struct UCommonSource_ResourceInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ResourceInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RelicGambleRewardEnchantSheet.GetRecord
struct UCommonSource_RelicGambleRewardEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RelicGambleRewardEnchantRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldMapTotalViewSheet.GetRecord
struct UCommonSource_WorldMapTotalViewSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldMapTotalViewRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerIconSheet.GetRecord
struct UCommonSource_PlayerIconSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerIconRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneDefineSheet.GetRecord
struct UCommonSource_RuneDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneDefineRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ContentsIconSheet.GetRecord
struct UCommonSource_ContentsIconSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ContentsIconRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneInfoSheet.GetRecord
struct UCommonSource_RuneInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneOpenLevelSheet.GetRecord
struct UCommonSource_RuneOpenLevelSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneOpenLevelRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneGradeSheet.GetRecord
struct UCommonSource_RuneGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneGradeRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneSetEnchantDefineSheet.GetRecord
struct UCommonSource_RuneSetEnchantDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneSetEnchantDefineRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneSetEnchantValueSheet.GetRecord
struct UCommonSource_RuneSetEnchantValueSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneSetEnchantValueRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneSetSheet.GetRecord
struct UCommonSource_RuneSetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneSetRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneAttributeDefineSheet.GetRecord
struct UCommonSource_RuneAttributeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneAttributeDefineRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneAttributeSheet.GetRecord
struct UCommonSource_RuneAttributeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneAttributeRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.RuneAttributeOptionSheet.GetRecord
struct UCommonSource_RuneAttributeOptionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_RuneAttributeOptionRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SchedulerInfoSheet.GetRecord
struct UCommonSource_SchedulerInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SchedulerInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SchedulerDungeonInfoSheet.GetRecord
struct UCommonSource_SchedulerDungeonInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SchedulerDungeonInfoRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SchedulerBlockInfoSheet.GetRecord
struct UCommonSource_SchedulerBlockInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SchedulerBlockInfoRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SchedulerDismantleItemSheet.GetRecord
struct UCommonSource_SchedulerDismantleItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SchedulerDismantleItemRecord*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SchedulerDefineSheet.GetRecord
struct UCommonSource_SchedulerDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SchedulerDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SealedStoneInfoSheet.GetRecord
struct UCommonSource_SealedStoneInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SealedStoneInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SealedStoneEnchantSheet.GetRecord
struct UCommonSource_SealedStoneEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SealedStoneEnchantRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SealedStoneDefineSheet.GetRecord
struct UCommonSource_SealedStoneDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SealedStoneDefineRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SealedStoneSetOpenSheet.GetRecord
struct UCommonSource_SealedStoneSetOpenSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SealedStoneSetOpenRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionBuffSheet.GetRecord
struct UCommonSource_ServerInvasionBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionBuffRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MovableMapsSheet.GetRecord
struct UCommonSource_MovableMapsSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MovableMapsRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionTimeSheet.GetRecord
struct UCommonSource_ServerInvasionTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionTimeRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionBlockInfoSheet.GetRecord
struct UCommonSource_ServerInvasionBlockInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionBlockInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionPkPointSheet.GetRecord
struct UCommonSource_InvasionPkPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionPkPointRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionObjectInfoSheet.GetRecord
struct UCommonSource_InvasionObjectInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionObjectInfoRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionObjectPointSheet.GetRecord
struct UCommonSource_InvasionObjectPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionObjectPointRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionCostumeSheet.GetRecord
struct UCommonSource_ServerInvasionCostumeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionCostumeRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionEnterOrderColorSheet.GetRecord
struct UCommonSource_ServerInvasionEnterOrderColorSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionEnterOrderColorRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.InvasionPKRandomTauntMessageSheet.GetRecord
struct UCommonSource_InvasionPKRandomTauntMessageSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_InvasionPKRandomTauntMessageRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerMigrationStateSheet.GetRecord
struct UCommonSource_ServerMigrationStateSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerMigrationStateRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerInvasionDefineSheet.GetRecord
struct UCommonSource_ServerInvasionDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerInvasionDefineRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ServerMigrationDefineSheet.GetRecord
struct UCommonSource_ServerMigrationDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ServerMigrationDefineRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowTierSheet.GetRecord
struct UCommonSource_ShadowTierSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowTierRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowActiveTimeSheet.GetRecord
struct UCommonSource_ShadowActiveTimeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowActiveTimeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowDungeonMapSettingSheet.GetRecord
struct UCommonSource_ShadowDungeonMapSettingSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowDungeonMapSettingRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowDungeonTeleportItemSheet.GetRecord
struct UCommonSource_ShadowDungeonTeleportItemSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowDungeonTeleportItemRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowDungeonDefineSheet.GetRecord
struct UCommonSource_ShadowDungeonDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowDungeonDefineRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowMonsterPointSheet.GetRecord
struct UCommonSource_ShadowMonsterPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowMonsterPointRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowPkPointSheet.GetRecord
struct UCommonSource_ShadowPkPointSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowPkPointRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowPkPenaltySheet.GetRecord
struct UCommonSource_ShadowPkPenaltySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowPkPenaltyRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShadowPkPointInfoSheet.GetRecord
struct UCommonSource_ShadowPkPointInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShadowPkPointInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AbyssFloorBossSpawnSheet.GetRecord
struct UCommonSource_AbyssFloorBossSpawnSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AbyssFloorBossSpawnRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AbyssFloorEliteSpawnInfoSheet.GetRecord
struct UCommonSource_AbyssFloorEliteSpawnInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AbyssFloorEliteSpawnInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.AbyssFloorEliteSpawnSheet.GetRecord
struct UCommonSource_AbyssFloorEliteSpawnSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_AbyssFloorEliteSpawnRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShopItemInfoSheet.GetRecord
struct UCommonSource_ShopItemInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShopItemInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShopInfoSheet.GetRecord
struct UCommonSource_ShopInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShopInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShopTabInfoSheet.GetRecord
struct UCommonSource_ShopTabInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShopTabInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ShopItemBuyGradeSheet.GetRecord
struct UCommonSource_ShopItemBuyGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ShopItemBuyGradeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillInfoSheet.GetRecord
struct UCommonSource_SkillInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillInfoRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PassiveInfoSheet.GetRecord
struct UCommonSource_PassiveInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PassiveInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.EffectInfoSheet.GetRecord
struct UCommonSource_EffectInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_EffectInfoRecord*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BuffTypeSheet.GetRecord
struct UCommonSource_BuffTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BuffTypeRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BuffInfoSheet.GetRecord
struct UCommonSource_BuffInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BuffInfoRecord*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.PlayerSkillSheet.GetRecord
struct UCommonSource_PlayerSkillSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_PlayerSkillRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillEnchantSheet.GetRecord
struct UCommonSource_SkillEnchantSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillEnchantRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.HitAreaAdjustSheet.GetRecord
struct UCommonSource_HitAreaAdjustSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_HitAreaAdjustRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillDefineSheet.GetRecord
struct UCommonSource_SkillDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.CommonPlayerSkillSheet.GetRecord
struct UCommonSource_CommonPlayerSkillSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_CommonPlayerSkillRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendDefineSheet.GetRecord
struct UCommonSource_SkillTranscendDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendDefineRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendOptionTypeSheet.GetRecord
struct UCommonSource_SkillTranscendOptionTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendOptionTypeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendInfoSheet.GetRecord
struct UCommonSource_SkillTranscendInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendInfoRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NoneNpcShopInfoSheet.GetRecord
struct UCommonSource_NoneNpcShopInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NoneNpcShopInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendBuffSheet.GetRecord
struct UCommonSource_SkillTranscendBuffSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendBuffRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendNeedGroupSheet.GetRecord
struct UCommonSource_SkillTranscendNeedGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendNeedGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendSuccessGroupSheet.GetRecord
struct UCommonSource_SkillTranscendSuccessGroupSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendSuccessGroupRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendResetSheet.GetRecord
struct UCommonSource_SkillTranscendResetSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendResetRecord*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendRestoreSheet.GetRecord
struct UCommonSource_SkillTranscendRestoreSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendRestoreRecord*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.QuestVoiceSoundSheet.GetRecord
struct UCommonSource_QuestVoiceSoundSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_QuestVoiceSoundRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SoundDefineSheet.GetRecord
struct UCommonSource_SoundDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SoundDefineRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SoundWaveLengthSheet.GetRecord
struct UCommonSource_SoundWaveLengthSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SoundWaveLengthRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SkillTranscendChangeStringDescSheet.GetRecord
struct UCommonSource_SkillTranscendChangeStringDescSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SkillTranscendChangeStringDescRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.SpawnInfoSheet.GetRecord
struct UCommonSource_SpawnInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_SpawnInfoRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.ObjectDisposeSheet.GetRecord
struct UCommonSource_ObjectDisposeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_ObjectDisposeRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.FastSpawnSheet.GetRecord
struct UCommonSource_FastSpawnSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_FastSpawnRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.MaxSpawnDelaySheet.GetRecord
struct UCommonSource_MaxSpawnDelaySheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_MaxSpawnDelayRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StartUpStringSheet.GetRecord
struct UCommonSource_StartUpStringSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StartUpStringRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.URLSheet.GetRecord
struct UCommonSource_URLSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_URLRecord*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.TriggerInfoSheet.GetRecord
struct UCommonSource_TriggerInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_TriggerInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.TriggerActionSheet.GetRecord
struct UCommonSource_TriggerActionSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_TriggerActionRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.StartConfigSheet.GetRecord
struct UCommonSource_StartConfigSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_StartConfigRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VipLevelInfoSheet.GetRecord
struct UCommonSource_VipLevelInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VipLevelInfoRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VipEffectSheet.GetRecord
struct UCommonSource_VipEffectSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VipEffectRecord*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleInfoSheet.GetRecord
struct UCommonSource_VehicleInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleInfoRecord*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleGradeSheet.GetRecord
struct UCommonSource_VehicleGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleGradeRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.FlySpotSheet.GetRecord
struct UCommonSource_FlySpotSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_FlySpotRecord*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BattleVehicleInfoSheet.GetRecord
struct UCommonSource_BattleVehicleInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BattleVehicleInfoRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.BattleVehicleTypeSheet.GetRecord
struct UCommonSource_BattleVehicleTypeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_BattleVehicleTypeRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleRandomBoxSheet.GetRecord
struct UCommonSource_VehicleRandomBoxSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleRandomBoxRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleDefineSheet.GetRecord
struct UCommonSource_VehicleDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleDefineRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleUpgradeSheet.GetRecord
struct UCommonSource_VehicleUpgradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleUpgradeRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VehicleGaugeSheet.GetRecord
struct UCommonSource_VehicleGaugeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VehicleGaugeRecord*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VoidSummonerInfoSheet.GetRecord
struct UCommonSource_VoidSummonerInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VoidSummonerInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VoidSummonsMonsterSheet.GetRecord
struct UCommonSource_VoidSummonsMonsterSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VoidSummonsMonsterRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VoidSummonsMonsterDamagePercentSheet.GetRecord
struct UCommonSource_VoidSummonsMonsterDamagePercentSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VoidSummonsMonsterDamagePercentRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VoidSummonerDefineSheet.GetRecord
struct UCommonSource_VoidSummonerDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VoidSummonerDefineRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.VolumeAreaInfoSheet.GetRecord
struct UCommonSource_VolumeAreaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_VolumeAreaInfoRecord*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NaviVolumeAreaInfoSheet.GetRecord
struct UCommonSource_NaviVolumeAreaInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NaviVolumeAreaInfoRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.NaviVolumeAreaVerticesInfoSheet.GetRecord
struct UCommonSource_NaviVolumeAreaVerticesInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_NaviVolumeAreaVerticesInfoRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeaponShapeInfoSheet.GetRecord
struct UCommonSource_WeaponShapeInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeaponShapeInfoRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeaponShapeGradeSheet.GetRecord
struct UCommonSource_WeaponShapeGradeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeaponShapeGradeRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeaponShapeEffectChangeSheet.GetRecord
struct UCommonSource_WeaponShapeEffectChangeSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeaponShapeEffectChangeRecord* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WeaponShapeDefineSheet.GetRecord
struct UCommonSource_WeaponShapeDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WeaponShapeDefineRecord*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldBossInfoSheet.GetRecord
struct UCommonSource_WorldBossInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldBossInfoRecord*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldBossDefineSheet.GetRecord
struct UCommonSource_WorldBossDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldBossDefineRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldBossRewardSheet.GetRecord
struct UCommonSource_WorldBossRewardSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldBossRewardRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldDungeonInfoSheet.GetRecord
struct UCommonSource_WorldDungeonInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldDungeonInfoRecord*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldDungeonDefineSheet.GetRecord
struct UCommonSource_WorldDungeonDefineSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldDungeonDefineRecord*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldDungeonMapSheet.GetRecord
struct UCommonSource_WorldDungeonMapSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldDungeonMapRecord*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonSource.WorldDungeonBuffInfoSheet.GetRecord
struct UCommonSource_WorldDungeonBuffInfoSheet_GetRecord_Params
{
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonSource_WorldDungeonBuffInfoRecord*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
