
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CommonSource.AchievementInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementInfoRecord* UCommonSource_AchievementInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementInfoSheet.GetRecord");

	UCommonSource_AchievementInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AchievementMissionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementMissionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementMissionRecord* UCommonSource_AchievementMissionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementMissionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementMissionSheet.GetRecord");

	UCommonSource_AchievementMissionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AchievementLevelSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementLevelRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementLevelRecord* UCommonSource_AchievementLevelSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementLevelSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementLevelSheet.GetRecord");

	UCommonSource_AchievementLevelSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AchievementPeriodSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementPeriodRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementPeriodRecord* UCommonSource_AchievementPeriodSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementPeriodSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementPeriodSheet.GetRecord");

	UCommonSource_AchievementPeriodSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AchievementDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementDefineRecord* UCommonSource_AchievementDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementDefineSheet.GetRecord");

	UCommonSource_AchievementDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AchievementCompareGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AchievementCompareGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AchievementCompareGroupRecord* UCommonSource_AchievementCompareGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementCompareGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AchievementCompareGroupSheet.GetRecord");

	UCommonSource_AchievementCompareGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIParamSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIParamRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIParamRecord* UCommonSource_AIParamSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIParamSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIParamSheet.GetRecord");

	UCommonSource_AIParamSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AISkillSelectorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AISkillSelectorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AISkillSelectorRecord* UCommonSource_AISkillSelectorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AISkillSelectorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AISkillSelectorSheet.GetRecord");

	UCommonSource_AISkillSelectorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIPatternSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIPatternRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIPatternRecord* UCommonSource_AIPatternSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIPatternSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIPatternSheet.GetRecord");

	UCommonSource_AIPatternSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AITreeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AITreeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AITreeRecord* UCommonSource_AITreeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AITreeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AITreeSheet.GetRecord");

	UCommonSource_AITreeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AlchemyBoardInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AlchemyBoardInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AlchemyBoardInfoRecord* UCommonSource_AlchemyBoardInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyBoardInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyBoardInfoSheet.GetRecord");

	UCommonSource_AlchemyBoardInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AlchemyInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AlchemyInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AlchemyInfoRecord* UCommonSource_AlchemyInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyInfoSheet.GetRecord");

	UCommonSource_AlchemyInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AlchemyOptionCountSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AlchemyOptionCountRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AlchemyOptionCountRecord* UCommonSource_AlchemyOptionCountSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyOptionCountSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyOptionCountSheet.GetRecord");

	UCommonSource_AlchemyOptionCountSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AlchemyDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AlchemyDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AlchemyDefineRecord* UCommonSource_AlchemyDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyDefineSheet.GetRecord");

	UCommonSource_AlchemyDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AlchemyOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AlchemyOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AlchemyOptionRecord* UCommonSource_AlchemyOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AlchemyOptionSheet.GetRecord");

	UCommonSource_AlchemyOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AreaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AreaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AreaInfoRecord* UCommonSource_AreaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AreaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AreaInfoSheet.GetRecord");

	UCommonSource_AreaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AutoBotSettingInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AutoBotSettingInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AutoBotSettingInfoRecord* UCommonSource_AutoBotSettingInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AutoBotSettingInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AutoBotSettingInfoSheet.GetRecord");

	UCommonSource_AutoBotSettingInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarInfoRecord* UCommonSource_AvatarInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarInfoSheet.GetRecord");

	UCommonSource_AvatarInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarPoseSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarPoseRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarPoseRecord* UCommonSource_AvatarPoseSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarPoseSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarPoseSheet.GetRecord");

	UCommonSource_AvatarPoseSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarPoseDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarPoseDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarPoseDefineRecord* UCommonSource_AvatarPoseDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarPoseDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarPoseDefineSheet.GetRecord");

	UCommonSource_AvatarPoseDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarDialogueSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarDialogueRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarDialogueRecord* UCommonSource_AvatarDialogueSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarDialogueSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarDialogueSheet.GetRecord");

	UCommonSource_AvatarDialogueSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarDefineRecord* UCommonSource_AvatarDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarDefineSheet.GetRecord");

	UCommonSource_AvatarDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarGradeRecord* UCommonSource_AvatarGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarGradeSheet.GetRecord");

	UCommonSource_AvatarGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarGaugeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarGaugeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarGaugeRecord* UCommonSource_AvatarGaugeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarGaugeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarGaugeSheet.GetRecord");

	UCommonSource_AvatarGaugeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarStatuePoseSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarStatuePoseRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarStatuePoseRecord* UCommonSource_AvatarStatuePoseSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarStatuePoseSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarStatuePoseSheet.GetRecord");

	UCommonSource_AvatarStatuePoseSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapDataChangeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapDataChangeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapDataChangeRecord* UCommonSource_MapDataChangeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapDataChangeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapDataChangeSheet.GetRecord");

	UCommonSource_MapDataChangeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomPackageChangeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomPackageChangeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomPackageChangeRecord* UCommonSource_RandomPackageChangeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomPackageChangeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomPackageChangeSheet.GetRecord");

	UCommonSource_RandomPackageChangeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapDisplayCheckChangeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapDisplayCheckChangeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapDisplayCheckChangeRecord* UCommonSource_MapDisplayCheckChangeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapDisplayCheckChangeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapDisplayCheckChangeSheet.GetRecord");

	UCommonSource_MapDisplayCheckChangeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropExpGoldChangeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropExpGoldChangeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropExpGoldChangeRecord* UCommonSource_DropExpGoldChangeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropExpGoldChangeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropExpGoldChangeSheet.GetRecord");

	UCommonSource_DropExpGoldChangeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AniInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AniInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AniInfoRecord* UCommonSource_AniInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AniInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AniInfoSheet.GetRecord");

	UCommonSource_AniInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingBoardInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingBoardInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingBoardInfoRecord* UCommonSource_BlessingBoardInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingBoardInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingBoardInfoSheet.GetRecord");

	UCommonSource_BlessingBoardInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CompleteParamInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CompleteParamInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CompleteParamInfoRecord* UCommonSource_CompleteParamInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CompleteParamInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CompleteParamInfoSheet.GetRecord");

	UCommonSource_CompleteParamInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingSlotInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingSlotInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingSlotInfoRecord* UCommonSource_BlessingSlotInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotInfoSheet.GetRecord");

	UCommonSource_BlessingSlotInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingStoneGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingStoneGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingStoneGradeRecord* UCommonSource_BlessingStoneGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneGradeSheet.GetRecord");

	UCommonSource_BlessingStoneGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingStoneOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingStoneOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingStoneOptionRecord* UCommonSource_BlessingStoneOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneOptionSheet.GetRecord");

	UCommonSource_BlessingStoneOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SymbolProbSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SymbolProbRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SymbolProbRecord* UCommonSource_SymbolProbSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SymbolProbSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SymbolProbSheet.GetRecord");

	UCommonSource_SymbolProbSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingSymbolCollectionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingSymbolCollectionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingSymbolCollectionRecord* UCommonSource_BlessingSymbolCollectionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSymbolCollectionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSymbolCollectionSheet.GetRecord");

	UCommonSource_BlessingSymbolCollectionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingStoneInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingStoneInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingStoneInfoRecord* UCommonSource_BlessingStoneInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingStoneInfoSheet.GetRecord");

	UCommonSource_BlessingStoneInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingSlotEnchantOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingSlotEnchantOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingSlotEnchantOptionRecord* UCommonSource_BlessingSlotEnchantOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotEnchantOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotEnchantOptionSheet.GetRecord");

	UCommonSource_BlessingSlotEnchantOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingBoardSampleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingBoardSampleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingBoardSampleRecord* UCommonSource_BlessingBoardSampleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingBoardSampleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingBoardSampleSheet.GetRecord");

	UCommonSource_BlessingBoardSampleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingSlotEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingSlotEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingSlotEnchantRecord* UCommonSource_BlessingSlotEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingSlotEnchantSheet.GetRecord");

	UCommonSource_BlessingSlotEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BlessingDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BlessingDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BlessingDefineRecord* UCommonSource_BlessingDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BlessingDefineSheet.GetRecord");

	UCommonSource_BlessingDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopInfoRecord* UCommonSource_CashShopInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopInfoSheet.GetRecord");

	UCommonSource_CashShopInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopLimitPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopLimitPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopLimitPackageRecord* UCommonSource_CashShopLimitPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopLimitPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopLimitPackageSheet.GetRecord");

	UCommonSource_CashShopLimitPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopDiscountInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopDiscountInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopDiscountInfoRecord* UCommonSource_CashShopDiscountInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopDiscountInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopDiscountInfoSheet.GetRecord");

	UCommonSource_CashShopDiscountInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopCategorySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopCategoryRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopCategoryRecord* UCommonSource_CashShopCategorySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopCategorySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopCategorySheet.GetRecord");

	UCommonSource_CashShopCategorySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopDefineRecord* UCommonSource_CashShopDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopDefineSheet.GetRecord");

	UCommonSource_CashShopDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopOdinPassPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopOdinPassPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopOdinPassPointRecord* UCommonSource_CashShopOdinPassPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopOdinPassPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopOdinPassPointSheet.GetRecord");

	UCommonSource_CashShopOdinPassPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashPurchaseMileageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashPurchaseMileageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashPurchaseMileageRecord* UCommonSource_CashPurchaseMileageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashPurchaseMileageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashPurchaseMileageSheet.GetRecord");

	UCommonSource_CashPurchaseMileageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopReplaceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopReplaceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopReplaceRecord* UCommonSource_CashShopReplaceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopReplaceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopReplaceSheet.GetRecord");

	UCommonSource_CashShopReplaceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AdvancementSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AdvancementRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AdvancementRecord* UCommonSource_AdvancementSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AdvancementSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AdvancementSheet.GetRecord");

	UCommonSource_AdvancementSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomGuaranteeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomGuaranteeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomGuaranteeRecord* UCommonSource_RandomGuaranteeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomGuaranteeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomGuaranteeSheet.GetRecord");

	UCommonSource_RandomGuaranteeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CashShopChainProductSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CashShopChainProductRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CashShopChainProductRecord* UCommonSource_CashShopChainProductSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopChainProductSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CashShopChainProductSheet.GetRecord");

	UCommonSource_CashShopChainProductSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastleInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastleInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastleInfoRecord* UCommonSource_CastleInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastleInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastleInfoSheet.GetRecord");

	UCommonSource_CastleInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarDefineRecord* UCommonSource_CastlewarDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDefineSheet.GetRecord");

	UCommonSource_CastlewarDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MercenaryDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MercenaryDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MercenaryDefineRecord* UCommonSource_MercenaryDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MercenaryDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MercenaryDefineSheet.GetRecord");

	UCommonSource_MercenaryDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QualifierDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QualifierDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QualifierDefineRecord* UCommonSource_QualifierDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QualifierDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QualifierDefineSheet.GetRecord");

	UCommonSource_QualifierDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarAreaBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarAreaBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarAreaBuffRecord* UCommonSource_CastlewarAreaBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarAreaBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarAreaBuffSheet.GetRecord");

	UCommonSource_CastlewarAreaBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarCostumeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarCostumeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarCostumeRecord* UCommonSource_CastlewarCostumeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarCostumeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarCostumeSheet.GetRecord");

	UCommonSource_CastlewarCostumeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarRewardRecord* UCommonSource_CastlewarRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarRewardSheet.GetRecord");

	UCommonSource_CastlewarRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarBuffRecord* UCommonSource_CastlewarBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarBuffSheet.GetRecord");

	UCommonSource_CastlewarBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarDistributionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarDistributionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarDistributionRecord* UCommonSource_CastlewarDistributionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDistributionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDistributionSheet.GetRecord");

	UCommonSource_CastlewarDistributionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarObjectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarObjectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarObjectRecord* UCommonSource_CastlewarObjectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarObjectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarObjectSheet.GetRecord");

	UCommonSource_CastlewarObjectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MercenaryRewardRateSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MercenaryRewardRateRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MercenaryRewardRateRecord* UCommonSource_MercenaryRewardRateSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MercenaryRewardRateSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MercenaryRewardRateSheet.GetRecord");

	UCommonSource_MercenaryRewardRateSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarDefenseBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarDefenseBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarDefenseBuffRecord* UCommonSource_CastlewarDefenseBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDefenseBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDefenseBuffSheet.GetRecord");

	UCommonSource_CastlewarDefenseBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarObjectModifySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarObjectModifyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarObjectModifyRecord* UCommonSource_CastlewarObjectModifySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarObjectModifySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarObjectModifySheet.GetRecord");

	UCommonSource_CastlewarObjectModifySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarGuildVehicleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarGuildVehicleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarGuildVehicleRecord* UCommonSource_CastlewarGuildVehicleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarGuildVehicleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarGuildVehicleSheet.GetRecord");

	UCommonSource_CastlewarGuildVehicleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarDBSaveBuffIndexSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarDBSaveBuffIndexRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarDBSaveBuffIndexRecord* UCommonSource_CastlewarDBSaveBuffIndexSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDBSaveBuffIndexSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarDBSaveBuffIndexSheet.GetRecord");

	UCommonSource_CastlewarDBSaveBuffIndexSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildChatImotionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildChatImotionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildChatImotionRecord* UCommonSource_GuildChatImotionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildChatImotionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildChatImotionSheet.GetRecord");

	UCommonSource_GuildChatImotionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ChatEmoticonSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ChatEmoticonRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ChatEmoticonRecord* UCommonSource_ChatEmoticonSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ChatEmoticonSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ChatEmoticonSheet.GetRecord");

	UCommonSource_ChatEmoticonSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ChatDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ChatDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ChatDefineRecord* UCommonSource_ChatDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ChatDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ChatDefineSheet.GetRecord");

	UCommonSource_ChatDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CheatClientSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CheatClientRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CheatClientRecord* UCommonSource_CheatClientSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CheatClientSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CheatClientSheet.GetRecord");

	UCommonSource_CheatClientSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CheatServerSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CheatServerRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CheatServerRecord* UCommonSource_CheatServerSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CheatServerSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CheatServerSheet.GetRecord");

	UCommonSource_CheatServerSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NameImgTextSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NameImgTextRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NameImgTextRecord* UCommonSource_NameImgTextSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NameImgTextSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NameImgTextSheet.GetRecord");

	UCommonSource_NameImgTextSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NameIconTextSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NameIconTextRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NameIconTextRecord* UCommonSource_NameIconTextSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NameIconTextSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NameIconTextSheet.GetRecord");

	UCommonSource_NameIconTextSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CinemaSubtitlesSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CinemaSubtitlesRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CinemaSubtitlesRecord* UCommonSource_CinemaSubtitlesSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CinemaSubtitlesSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CinemaSubtitlesSheet.GetRecord");

	UCommonSource_CinemaSubtitlesSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CinemaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CinemaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CinemaInfoRecord* UCommonSource_CinemaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CinemaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CinemaInfoSheet.GetRecord");

	UCommonSource_CinemaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ClassChangeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ClassChangeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ClassChangeInfoRecord* UCommonSource_ClassChangeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangeInfoSheet.GetRecord");

	UCommonSource_ClassChangeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillEnchantRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillEnchantRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillEnchantRewardRecord* UCommonSource_SkillEnchantRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantRewardSheet.GetRecord");

	UCommonSource_SkillEnchantRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ChangeGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ChangeGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ChangeGradeRecord* UCommonSource_ChangeGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ChangeGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ChangeGradeSheet.GetRecord");

	UCommonSource_ChangeGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ChangeItemGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ChangeItemGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ChangeItemGradeRecord* UCommonSource_ChangeItemGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ChangeItemGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ChangeItemGradeSheet.GetRecord");

	UCommonSource_ChangeItemGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemChangePartsSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemChangePartsRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemChangePartsRecord* UCommonSource_ItemChangePartsSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemChangePartsSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemChangePartsSheet.GetRecord");

	UCommonSource_ItemChangePartsSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ClassChangePossiblePacketSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ClassChangePossiblePacketRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ClassChangePossiblePacketRecord* UCommonSource_ClassChangePossiblePacketSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangePossiblePacketSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangePossiblePacketSheet.GetRecord");

	UCommonSource_ClassChangePossiblePacketSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ClassChangeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ClassChangeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ClassChangeDefineRecord* UCommonSource_ClassChangeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ClassChangeDefineSheet.GetRecord");

	UCommonSource_ClassChangeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillEnchantChangeGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillEnchantChangeGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillEnchantChangeGradeRecord* UCommonSource_SkillEnchantChangeGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantChangeGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantChangeGradeSheet.GetRecord");

	UCommonSource_SkillEnchantChangeGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CollectionRewardInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CollectionRewardInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CollectionRewardInfoRecord* UCommonSource_CollectionRewardInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionRewardInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionRewardInfoSheet.GetRecord");

	UCommonSource_CollectionRewardInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CollectionCountTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CollectionCountTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CollectionCountTypeRecord* UCommonSource_CollectionCountTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionCountTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionCountTypeSheet.GetRecord");

	UCommonSource_CollectionCountTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CollectionReplaceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CollectionReplaceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CollectionReplaceRecord* UCommonSource_CollectionReplaceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionReplaceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionReplaceSheet.GetRecord");

	UCommonSource_CollectionReplaceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CollectionDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CollectionDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CollectionDefineRecord* UCommonSource_CollectionDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionDefineSheet.GetRecord");

	UCommonSource_CollectionDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CostumeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CostumeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CostumeInfoRecord* UCommonSource_CostumeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeInfoSheet.GetRecord");

	UCommonSource_CostumeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CostumePoseSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CostumePoseRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CostumePoseRecord* UCommonSource_CostumePoseSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CostumePoseSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CostumePoseSheet.GetRecord");

	UCommonSource_CostumePoseSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GetItemListSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GetItemListRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GetItemListRecord* UCommonSource_GetItemListSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GetItemListSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GetItemListSheet.GetRecord");

	UCommonSource_GetItemListSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CostumeDyeingColorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CostumeDyeingColorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CostumeDyeingColorRecord* UCommonSource_CostumeDyeingColorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeDyeingColorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeDyeingColorSheet.GetRecord");

	UCommonSource_CostumeDyeingColorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingPresetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingPresetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingPresetRecord* UCommonSource_CustomizingPresetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingPresetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingPresetSheet.GetRecord");

	UCommonSource_CustomizingPresetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingTypeRecord* UCommonSource_CustomizingTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingTypeSheet.GetRecord");

	UCommonSource_CustomizingTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingColorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingColorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingColorRecord* UCommonSource_CustomizingColorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingColorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingColorSheet.GetRecord");

	UCommonSource_CustomizingColorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingGaugeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingGaugeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingGaugeRecord* UCommonSource_CustomizingGaugeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingGaugeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingGaugeSheet.GetRecord");

	UCommonSource_CustomizingGaugeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingPoseSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingPoseRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingPoseRecord* UCommonSource_CustomizingPoseSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingPoseSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingPoseSheet.GetRecord");

	UCommonSource_CustomizingPoseSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CustomizingCostumeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CustomizingCostumeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CustomizingCostumeRecord* UCommonSource_CustomizingCostumeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingCostumeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CustomizingCostumeSheet.GetRecord");

	UCommonSource_CustomizingCostumeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CostumeDyeingDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CostumeDyeingDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CostumeDyeingDefineRecord* UCommonSource_CostumeDyeingDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeDyeingDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CostumeDyeingDefineSheet.GetRecord");

	UCommonSource_CostumeDyeingDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QualitySettingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QualitySettingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QualitySettingRecord* UCommonSource_QualitySettingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QualitySettingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QualitySettingSheet.GetRecord");

	UCommonSource_QualitySettingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AndroidSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AndroidRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AndroidRecord* UCommonSource_AndroidSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AndroidSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AndroidSheet.GetRecord");

	UCommonSource_AndroidSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.IOSSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_IOSRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_IOSRecord* UCommonSource_IOSSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.IOSSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.IOSSheet.GetRecord");

	UCommonSource_IOSSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DialogueInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DialogueInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DialogueInfoRecord* UCommonSource_DialogueInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DialogueInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DialogueInfoSheet.GetRecord");

	UCommonSource_DialogueInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MainTalkTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MainTalkTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MainTalkTypeRecord* UCommonSource_MainTalkTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MainTalkTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MainTalkTypeSheet.GetRecord");

	UCommonSource_MainTalkTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SubTalkTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SubTalkTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SubTalkTypeRecord* UCommonSource_SubTalkTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SubTalkTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SubTalkTypeSheet.GetRecord");

	UCommonSource_SubTalkTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DialogueDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DialogueDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DialogueDefineRecord* UCommonSource_DialogueDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DialogueDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DialogueDefineSheet.GetRecord");

	UCommonSource_DialogueDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropExpSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropExpRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropExpRecord* UCommonSource_DropExpSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropExpSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropExpSheet.GetRecord");

	UCommonSource_DropExpSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NPCRandomTalkSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NPCRandomTalkRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NPCRandomTalkRecord* UCommonSource_NPCRandomTalkSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NPCRandomTalkSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NPCRandomTalkSheet.GetRecord");

	UCommonSource_NPCRandomTalkSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropLevelPenaltySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropLevelPenaltyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropLevelPenaltyRecord* UCommonSource_DropLevelPenaltySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropLevelPenaltySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropLevelPenaltySheet.GetRecord");

	UCommonSource_DropLevelPenaltySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropPartyPenaltySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropPartyPenaltyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropPartyPenaltyRecord* UCommonSource_DropPartyPenaltySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropPartyPenaltySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropPartyPenaltySheet.GetRecord");

	UCommonSource_DropPartyPenaltySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropPartyBonusSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropPartyBonusRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropPartyBonusRecord* UCommonSource_DropPartyBonusSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropPartyBonusSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropPartyBonusSheet.GetRecord");

	UCommonSource_DropPartyBonusSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EmotionInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EmotionInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EmotionInfoRecord* UCommonSource_EmotionInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EmotionInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EmotionInfoSheet.GetRecord");

	UCommonSource_EmotionInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EmotionDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EmotionDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EmotionDefineRecord* UCommonSource_EmotionDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EmotionDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EmotionDefineSheet.GetRecord");

	UCommonSource_EmotionDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EnumSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EnumRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EnumRecord* UCommonSource_EnumSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EnumSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EnumSheet.GetRecord");

	UCommonSource_EnumSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EnchantGameSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EnchantGameRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EnchantGameRecord* UCommonSource_EnchantGameSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EnchantGameSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EnchantGameSheet.GetRecord");

	UCommonSource_EnchantGameSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeSellingPriceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeSellingPriceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeSellingPriceRecord* UCommonSource_ExchangeSellingPriceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeSellingPriceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeSellingPriceSheet.GetRecord");

	UCommonSource_ExchangeSellingPriceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeSortSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeSortRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeSortRecord* UCommonSource_ExchangeSortSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeSortSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeSortSheet.GetRecord");

	UCommonSource_ExchangeSortSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeCategorySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeCategoryRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeCategoryRecord* UCommonSource_ExchangeCategorySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeCategorySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeCategorySheet.GetRecord");

	UCommonSource_ExchangeCategorySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeConditionCheckSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeConditionCheckRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeConditionCheckRecord* UCommonSource_ExchangeConditionCheckSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeConditionCheckSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeConditionCheckSheet.GetRecord");

	UCommonSource_ExchangeConditionCheckSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeEnchantAlertMultipleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeEnchantAlertMultipleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeEnchantAlertMultipleRecord* UCommonSource_ExchangeEnchantAlertMultipleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeEnchantAlertMultipleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeEnchantAlertMultipleSheet.GetRecord");

	UCommonSource_ExchangeEnchantAlertMultipleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CommonFilteringInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CommonFilteringInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CommonFilteringInfoRecord* UCommonSource_CommonFilteringInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CommonFilteringInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CommonFilteringInfoSheet.GetRecord");

	UCommonSource_CommonFilteringInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NameFilteringInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NameFilteringInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NameFilteringInfoRecord* UCommonSource_NameFilteringInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NameFilteringInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NameFilteringInfoSheet.GetRecord");

	UCommonSource_NameFilteringInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExceptionFilteringInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExceptionFilteringInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExceptionFilteringInfoRecord* UCommonSource_ExceptionFilteringInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExceptionFilteringInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExceptionFilteringInfoSheet.GetRecord");

	UCommonSource_ExceptionFilteringInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.FormulaItemTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_FormulaItemTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_FormulaItemTypeRecord* UCommonSource_FormulaItemTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.FormulaItemTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.FormulaItemTypeSheet.GetRecord");

	UCommonSource_FormulaItemTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.FriendDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_FriendDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_FriendDefineRecord* UCommonSource_FriendDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.FriendDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.FriendDefineSheet.GetRecord");

	UCommonSource_FriendDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.FormulaItemEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_FormulaItemEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_FormulaItemEnchantRecord* UCommonSource_FormulaItemEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.FormulaItemEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.FormulaItemEnchantSheet.GetRecord");

	UCommonSource_FormulaItemEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerCheatRecord* UCommonSource_PlayerCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerCheatSheet.GetRecord");

	UCommonSource_PlayerCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemCheatRecord* UCommonSource_ItemCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemCheatSheet.GetRecord");

	UCommonSource_ItemCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExchangeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExchangeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExchangeDefineRecord* UCommonSource_ExchangeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExchangeDefineSheet.GetRecord");

	UCommonSource_ExchangeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleCheatRecord* UCommonSource_VehicleCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleCheatSheet.GetRecord");

	UCommonSource_VehicleCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AvatarCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AvatarCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AvatarCheatRecord* UCommonSource_AvatarCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AvatarCheatSheet.GetRecord");

	UCommonSource_AvatarCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CollectionCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CollectionCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CollectionCheatRecord* UCommonSource_CollectionCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CollectionCheatSheet.GetRecord");

	UCommonSource_CollectionCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarGuildBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarGuildBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarGuildBuffRecord* UCommonSource_CastlewarGuildBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarGuildBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarGuildBuffSheet.GetRecord");

	UCommonSource_CastlewarGuildBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeaponShapeCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeaponShapeCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeaponShapeCheatRecord* UCommonSource_WeaponShapeCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeCheatSheet.GetRecord");

	UCommonSource_WeaponShapeCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ImprintCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ImprintCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ImprintCheatRecord* UCommonSource_ImprintCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintCheatSheet.GetRecord");

	UCommonSource_ImprintCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SealedStoneCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SealedStoneCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SealedStoneCheatRecord* UCommonSource_SealedStoneCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneCheatSheet.GetRecord");

	UCommonSource_SealedStoneCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetCheatRecord* UCommonSource_PetCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetCheatSheet.GetRecord");

	UCommonSource_PetCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkCheatRecord* UCommonSource_LinkCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkCheatSheet.GetRecord");

	UCommonSource_LinkCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SetParamCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SetParamCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SetParamCheatRecord* UCommonSource_SetParamCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SetParamCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SetParamCheatSheet.GetRecord");

	UCommonSource_SetParamCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StringSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StringRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StringRecord* UCommonSource_StringSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StringSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StringSheet.GetRecord");

	UCommonSource_StringSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ColorDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ColorDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ColorDefineRecord* UCommonSource_ColorDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ColorDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ColorDefineSheet.GetRecord");

	UCommonSource_ColorDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefineRecord* UCommonSource_DefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefineSheet.GetRecord");

	UCommonSource_DefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResetTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResetTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResetTimeRecord* UCommonSource_ResetTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResetTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResetTimeSheet.GetRecord");

	UCommonSource_ResetTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillCheatSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillCheatRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillCheatRecord* UCommonSource_SkillCheatSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillCheatSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillCheatSheet.GetRecord");

	UCommonSource_SkillCheatSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CoolTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CoolTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CoolTimeRecord* UCommonSource_CoolTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CoolTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CoolTimeSheet.GetRecord");

	UCommonSource_CoolTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuideSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuideRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuideRecord* UCommonSource_GuideSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuideSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuideSheet.GetRecord");

	UCommonSource_GuideSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GachaOddsUrlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GachaOddsUrlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GachaOddsUrlRecord* UCommonSource_GachaOddsUrlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GachaOddsUrlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GachaOddsUrlSheet.GetRecord");

	UCommonSource_GachaOddsUrlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldSpawnGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldSpawnGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldSpawnGroupRecord* UCommonSource_GuildBattlefieldSpawnGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldSpawnGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldSpawnGroupSheet.GetRecord");

	UCommonSource_GuildBattlefieldSpawnGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldObjectDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldObjectDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldObjectDefineRecord* UCommonSource_GuildBattlefieldObjectDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldObjectDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldObjectDefineSheet.GetRecord");

	UCommonSource_GuildBattlefieldObjectDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeekIntervalSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeekIntervalRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeekIntervalRecord* UCommonSource_WeekIntervalSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeekIntervalSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeekIntervalSheet.GetRecord");

	UCommonSource_WeekIntervalSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldMonsterGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldMonsterGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldMonsterGroupRecord* UCommonSource_GuildBattlefieldMonsterGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMonsterGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMonsterGroupSheet.GetRecord");

	UCommonSource_GuildBattlefieldMonsterGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldDoubleMonsterSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldDoubleMonsterRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldDoubleMonsterRecord* UCommonSource_GuildBattlefieldDoubleMonsterSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldDoubleMonsterSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldDoubleMonsterSheet.GetRecord");

	UCommonSource_GuildBattlefieldDoubleMonsterSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldMatchingGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldMatchingGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldMatchingGroupRecord* UCommonSource_GuildBattlefieldMatchingGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMatchingGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMatchingGroupSheet.GetRecord");

	UCommonSource_GuildBattlefieldMatchingGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldTimeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldTimeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldTimeDefineRecord* UCommonSource_GuildBattlefieldTimeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldTimeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldTimeDefineSheet.GetRecord");

	UCommonSource_GuildBattlefieldTimeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MessageCoolTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MessageCoolTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MessageCoolTimeRecord* UCommonSource_MessageCoolTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MessageCoolTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MessageCoolTimeSheet.GetRecord");

	UCommonSource_MessageCoolTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldBattleTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldBattleTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldBattleTimeRecord* UCommonSource_GuildBattlefieldBattleTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldBattleTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldBattleTimeSheet.GetRecord");

	UCommonSource_GuildBattlefieldBattleTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefenseWaveInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefenseWaveInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefenseWaveInfoRecord* UCommonSource_DefenseWaveInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseWaveInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseWaveInfoSheet.GetRecord");

	UCommonSource_DefenseWaveInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StatueInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StatueInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StatueInfoRecord* UCommonSource_StatueInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StatueInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StatueInfoSheet.GetRecord");

	UCommonSource_StatueInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleSummonPointInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleSummonPointInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleSummonPointInfoRecord* UCommonSource_VehicleSummonPointInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleSummonPointInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleSummonPointInfoSheet.GetRecord");

	UCommonSource_VehicleSummonPointInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefenseSummonMonsterSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefenseSummonMonsterRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefenseSummonMonsterRecord* UCommonSource_DefenseSummonMonsterSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonMonsterSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonMonsterSheet.GetRecord");

	UCommonSource_DefenseSummonMonsterSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefenseSummonMonsterAreaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefenseSummonMonsterAreaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefenseSummonMonsterAreaInfoRecord* UCommonSource_DefenseSummonMonsterAreaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonMonsterAreaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonMonsterAreaInfoSheet.GetRecord");

	UCommonSource_DefenseSummonMonsterAreaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ChaseWayPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ChaseWayPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ChaseWayPointRecord* UCommonSource_ChaseWayPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ChaseWayPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ChaseWayPointSheet.GetRecord");

	UCommonSource_ChaseWayPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldDefineRecord* UCommonSource_GuildBattlefieldDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldDefineSheet.GetRecord");

	UCommonSource_GuildBattlefieldDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefenseSummonVehicleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefenseSummonVehicleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefenseSummonVehicleRecord* UCommonSource_DefenseSummonVehicleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonVehicleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseSummonVehicleSheet.GetRecord");

	UCommonSource_DefenseSummonVehicleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StatueBlessInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StatueBlessInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StatueBlessInfoRecord* UCommonSource_StatueBlessInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StatueBlessInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StatueBlessInfoSheet.GetRecord");

	UCommonSource_StatueBlessInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropGuardianCoinSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropGuardianCoinRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropGuardianCoinRecord* UCommonSource_DropGuardianCoinSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropGuardianCoinSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropGuardianCoinSheet.GetRecord");

	UCommonSource_DropGuardianCoinSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DefenseGuideInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DefenseGuideInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DefenseGuideInfoRecord* UCommonSource_DefenseGuideInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseGuideInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DefenseGuideInfoSheet.GetRecord");

	UCommonSource_DefenseGuideInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildDefenseDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildDefenseDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildDefenseDefineRecord* UCommonSource_GuildDefenseDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDefenseDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDefenseDefineSheet.GetRecord");

	UCommonSource_GuildDefenseDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeDefineRecord* UCommonSource_GuildItemMakeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeDefineSheet.GetRecord");

	UCommonSource_GuildItemMakeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeSlotSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeSlotRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeSlotRecord* UCommonSource_GuildItemMakeSlotSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeSlotSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeSlotSheet.GetRecord");

	UCommonSource_GuildItemMakeSlotSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeInfoRecord* UCommonSource_GuildItemMakeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeInfoSheet.GetRecord");

	UCommonSource_GuildItemMakeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeCategorySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeCategoryRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeCategoryRecord* UCommonSource_GuildItemMakeCategorySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeCategorySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeCategorySheet.GetRecord");

	UCommonSource_GuildItemMakeCategorySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SupplementGuardianCoinSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SupplementGuardianCoinRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SupplementGuardianCoinRecord* UCommonSource_SupplementGuardianCoinSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SupplementGuardianCoinSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SupplementGuardianCoinSheet.GetRecord");

	UCommonSource_SupplementGuardianCoinSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeMaterialRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeMaterialRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeMaterialRewardRecord* UCommonSource_GuildItemMakeMaterialRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeMaterialRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeMaterialRewardSheet.GetRecord");

	UCommonSource_GuildItemMakeMaterialRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildItemMakeRedDotSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildItemMakeRedDotRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildItemMakeRedDotRecord* UCommonSource_GuildItemMakeRedDotSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeRedDotSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildItemMakeRedDotSheet.GetRecord");

	UCommonSource_GuildItemMakeRedDotSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RaidInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RaidInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RaidInfoRecord* UCommonSource_RaidInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RaidInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RaidInfoSheet.GetRecord");

	UCommonSource_RaidInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RaidSkillPrioritySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RaidSkillPriorityRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RaidSkillPriorityRecord* UCommonSource_RaidSkillPrioritySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RaidSkillPrioritySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RaidSkillPrioritySheet.GetRecord");

	UCommonSource_RaidSkillPrioritySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildRaidDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildRaidDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildRaidDefineRecord* UCommonSource_GuildRaidDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildRaidDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildRaidDefineSheet.GetRecord");

	UCommonSource_GuildRaidDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RaidBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RaidBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RaidBuffRecord* UCommonSource_RaidBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RaidBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RaidBuffSheet.GetRecord");

	UCommonSource_RaidBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdDefineRecord* UCommonSource_StrongholdDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdDefineSheet.GetRecord");

	UCommonSource_StrongholdDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdInfoRecord* UCommonSource_StrongholdInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdInfoSheet.GetRecord");

	UCommonSource_StrongholdInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdBuffRecord* UCommonSource_StrongholdBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffSheet.GetRecord");

	UCommonSource_StrongholdBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdBuffGroupSetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdBuffGroupSetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdBuffGroupSetRecord* UCommonSource_StrongholdBuffGroupSetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSetSheet.GetRecord");

	UCommonSource_StrongholdBuffGroupSetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdNotiSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdNotiRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdNotiRecord* UCommonSource_StrongholdNotiSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdNotiSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdNotiSheet.GetRecord");

	UCommonSource_StrongholdNotiSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdRankingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdRankingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdRankingRecord* UCommonSource_StrongholdRankingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdRankingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdRankingSheet.GetRecord");

	UCommonSource_StrongholdRankingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdBuffGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdBuffGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdBuffGroupRecord* UCommonSource_StrongholdBuffGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSheet.GetRecord");

	UCommonSource_StrongholdBuffGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildJobSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildJobRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildJobRecord* UCommonSource_GuildJobSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildJobSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildJobSheet.GetRecord");

	UCommonSource_GuildJobSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StrongholdBuffGroupSetPoolSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StrongholdBuffGroupSetPoolRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StrongholdBuffGroupSetPoolRecord* UCommonSource_StrongholdBuffGroupSetPoolSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSetPoolSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StrongholdBuffGroupSetPoolSheet.GetRecord");

	UCommonSource_StrongholdBuffGroupSetPoolSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildTendencySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildTendencyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildTendencyRecord* UCommonSource_GuildTendencySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildTendencySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildTendencySheet.GetRecord");

	UCommonSource_GuildTendencySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildMarkSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildMarkRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildMarkRecord* UCommonSource_GuildMarkSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkSheet.GetRecord");

	UCommonSource_GuildMarkSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildMarkFrameColorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildMarkFrameColorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildMarkFrameColorRecord* UCommonSource_GuildMarkFrameColorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkFrameColorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkFrameColorSheet.GetRecord");

	UCommonSource_GuildMarkFrameColorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildMarkBackgroundColorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildMarkBackgroundColorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildMarkBackgroundColorRecord* UCommonSource_GuildMarkBackgroundColorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkBackgroundColorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkBackgroundColorSheet.GetRecord");

	UCommonSource_GuildMarkBackgroundColorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildLevelSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildLevelRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildLevelRecord* UCommonSource_GuildLevelSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildLevelSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildLevelSheet.GetRecord");

	UCommonSource_GuildLevelSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildMarkEffectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildMarkEffectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildMarkEffectRecord* UCommonSource_GuildMarkEffectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkEffectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildMarkEffectSheet.GetRecord");

	UCommonSource_GuildMarkEffectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildDonateSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildDonateRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildDonateRecord* UCommonSource_GuildDonateSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDonateSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDonateSheet.GetRecord");

	UCommonSource_GuildDonateSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildAuctionDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildAuctionDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildAuctionDefineRecord* UCommonSource_GuildAuctionDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAuctionDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAuctionDefineSheet.GetRecord");

	UCommonSource_GuildAuctionDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildDefineRecord* UCommonSource_GuildDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildDefineSheet.GetRecord");

	UCommonSource_GuildDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildAllianceDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildAllianceDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildAllianceDefineRecord* UCommonSource_GuildAllianceDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAllianceDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAllianceDefineSheet.GetRecord");

	UCommonSource_GuildAllianceDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildAuctionMonsterSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildAuctionMonsterRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildAuctionMonsterRecord* UCommonSource_GuildAuctionMonsterSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAuctionMonsterSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildAuctionMonsterSheet.GetRecord");

	UCommonSource_GuildAuctionMonsterSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildOpenChattingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildOpenChattingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildOpenChattingRecord* UCommonSource_GuildOpenChattingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildOpenChattingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildOpenChattingSheet.GetRecord");

	UCommonSource_GuildOpenChattingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ImprintStepSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ImprintStepRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ImprintStepRecord* UCommonSource_ImprintStepSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintStepSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintStepSheet.GetRecord");

	UCommonSource_ImprintStepSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ImprintOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ImprintOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ImprintOptionRecord* UCommonSource_ImprintOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintOptionSheet.GetRecord");

	UCommonSource_ImprintOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ImprintDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ImprintDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ImprintDefineRecord* UCommonSource_ImprintDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintDefineSheet.GetRecord");

	UCommonSource_ImprintDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ImprintIconSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ImprintIconRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ImprintIconRecord* UCommonSource_ImprintIconSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintIconSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ImprintIconSheet.GetRecord");

	UCommonSource_ImprintIconSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SpecializeStepSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SpecializeStepRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SpecializeStepRecord* UCommonSource_SpecializeStepSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeStepSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeStepSheet.GetRecord");

	UCommonSource_SpecializeStepSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SpecializeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SpecializeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SpecializeDefineRecord* UCommonSource_SpecializeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeDefineSheet.GetRecord");

	UCommonSource_SpecializeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SpecializeIconSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SpecializeIconRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SpecializeIconRecord* UCommonSource_SpecializeIconSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeIconSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeIconSheet.GetRecord");

	UCommonSource_SpecializeIconSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonAreaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonAreaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonAreaInfoRecord* UCommonSource_InfinityDungeonAreaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonAreaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonAreaInfoSheet.GetRecord");

	UCommonSource_InfinityDungeonAreaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonFloorInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonFloorInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonFloorInfoRecord* UCommonSource_InfinityDungeonFloorInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonFloorInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonFloorInfoSheet.GetRecord");

	UCommonSource_InfinityDungeonFloorInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SpecializeOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SpecializeOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SpecializeOptionRecord* UCommonSource_SpecializeOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SpecializeOptionSheet.GetRecord");

	UCommonSource_SpecializeOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonSeasonRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonSeasonRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonSeasonRewardRecord* UCommonSource_InfinityDungeonSeasonRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSeasonRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSeasonRewardSheet.GetRecord");

	UCommonSource_InfinityDungeonSeasonRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonBuffRecord* UCommonSource_InfinityDungeonBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBuffSheet.GetRecord");

	UCommonSource_InfinityDungeonBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonSkillPrioritySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonSkillPriorityRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonSkillPriorityRecord* UCommonSource_InfinityDungeonSkillPrioritySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSkillPrioritySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSkillPrioritySheet.GetRecord");

	UCommonSource_InfinityDungeonSkillPrioritySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonSettingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonSettingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonSettingRecord* UCommonSource_InfinityDungeonSettingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSettingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSettingSheet.GetRecord");

	UCommonSource_InfinityDungeonSettingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonMultiBossSettingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonMultiBossSettingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonMultiBossSettingRecord* UCommonSource_InfinityDungeonMultiBossSettingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonMultiBossSettingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonMultiBossSettingSheet.GetRecord");

	UCommonSource_InfinityDungeonMultiBossSettingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonSummonSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonSummonRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonSummonRecord* UCommonSource_InfinityDungeonSummonSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSummonSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonSummonSheet.GetRecord");

	UCommonSource_InfinityDungeonSummonSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonBalanceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonBalanceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonBalanceRecord* UCommonSource_InfinityDungeonBalanceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBalanceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBalanceSheet.GetRecord");

	UCommonSource_InfinityDungeonBalanceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonDefineRecord* UCommonSource_InfinityDungeonDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonDefineSheet.GetRecord");

	UCommonSource_InfinityDungeonDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonWeakenDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonWeakenDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonWeakenDefineRecord* UCommonSource_InfinityDungeonWeakenDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonWeakenDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonWeakenDefineSheet.GetRecord");

	UCommonSource_InfinityDungeonWeakenDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InputLimitDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InputLimitDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InputLimitDefineRecord* UCommonSource_InputLimitDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InputLimitDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InputLimitDefineSheet.GetRecord");

	UCommonSource_InputLimitDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InputInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InputInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InputInfoRecord* UCommonSource_InputInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InputInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InputInfoSheet.GetRecord");

	UCommonSource_InputInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InputDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InputDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InputDefineRecord* UCommonSource_InputDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InputDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InputDefineSheet.GetRecord");

	UCommonSource_InputDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonBattleTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonBattleTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonBattleTypeRecord* UCommonSource_InfinityDungeonBattleTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBattleTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonBattleTypeSheet.GetRecord");

	UCommonSource_InfinityDungeonBattleTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InteractSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InteractRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InteractRecord* UCommonSource_InteractSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InteractSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InteractSheet.GetRecord");

	UCommonSource_InteractSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InteractTypeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InteractTypeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InteractTypeInfoRecord* UCommonSource_InteractTypeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InteractTypeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InteractTypeInfoSheet.GetRecord");

	UCommonSource_InteractTypeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InteractValidationDistanceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InteractValidationDistanceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InteractValidationDistanceRecord* UCommonSource_InteractValidationDistanceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InteractValidationDistanceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InteractValidationDistanceSheet.GetRecord");

	UCommonSource_InteractValidationDistanceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AutoGatherInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AutoGatherInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AutoGatherInfoRecord* UCommonSource_AutoGatherInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AutoGatherInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AutoGatherInfoSheet.GetRecord");

	UCommonSource_AutoGatherInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CultureDLCBlockSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CultureDLCBlockRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CultureDLCBlockRecord* UCommonSource_CultureDLCBlockSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CultureDLCBlockSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CultureDLCBlockSheet.GetRecord");

	UCommonSource_CultureDLCBlockSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CultureOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CultureOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CultureOptionRecord* UCommonSource_CultureOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CultureOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CultureOptionSheet.GetRecord");

	UCommonSource_CultureOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RegionOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RegionOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RegionOptionRecord* UCommonSource_RegionOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RegionOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RegionOptionSheet.GetRecord");

	UCommonSource_RegionOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StringTagInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StringTagInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StringTagInfoRecord* UCommonSource_StringTagInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StringTagInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StringTagInfoSheet.GetRecord");

	UCommonSource_StringTagInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemInfoRecord* UCommonSource_ItemInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemInfoSheet.GetRecord");

	UCommonSource_ItemInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemEnchantRecord* UCommonSource_ItemEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEnchantSheet.GetRecord");

	UCommonSource_ItemEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InformGuideSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InformGuideRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InformGuideRecord* UCommonSource_InformGuideSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InformGuideSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InformGuideSheet.GetRecord");

	UCommonSource_InformGuideSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemEnchantMaterialSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemEnchantMaterialRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemEnchantMaterialRecord* UCommonSource_ItemEnchantMaterialSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEnchantMaterialSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEnchantMaterialSheet.GetRecord");

	UCommonSource_ItemEnchantMaterialSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemWorkmanshipCostSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemWorkmanshipCostRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemWorkmanshipCostRecord* UCommonSource_ItemWorkmanshipCostSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemWorkmanshipCostSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemWorkmanshipCostSheet.GetRecord");

	UCommonSource_ItemWorkmanshipCostSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemWorkmanshipSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemWorkmanshipRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemWorkmanshipRecord* UCommonSource_ItemWorkmanshipSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemWorkmanshipSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemWorkmanshipSheet.GetRecord");

	UCommonSource_ItemWorkmanshipSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemRandomOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemRandomOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemRandomOptionRecord* UCommonSource_ItemRandomOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemRandomOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemRandomOptionSheet.GetRecord");

	UCommonSource_ItemRandomOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemSoulEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemSoulEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemSoulEnchantRecord* UCommonSource_ItemSoulEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSoulEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSoulEnchantSheet.GetRecord");

	UCommonSource_ItemSoulEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemSoulEffectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemSoulEffectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemSoulEffectRecord* UCommonSource_ItemSoulEffectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSoulEffectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSoulEffectSheet.GetRecord");

	UCommonSource_ItemSoulEffectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemBindSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemBindRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemBindRecord* UCommonSource_ItemBindSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemBindSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemBindSheet.GetRecord");

	UCommonSource_ItemBindSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemGradeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemGradeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemGradeInfoRecord* UCommonSource_ItemGradeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemGradeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemGradeInfoSheet.GetRecord");

	UCommonSource_ItemGradeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemDefineRecord* UCommonSource_ItemDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDefineSheet.GetRecord");

	UCommonSource_ItemDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetRandomOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetRandomOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetRandomOptionRecord* UCommonSource_PetRandomOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetRandomOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetRandomOptionSheet.GetRecord");

	UCommonSource_PetRandomOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetInfoRecord* UCommonSource_PetInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetInfoSheet.GetRecord");

	UCommonSource_PetInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetRandomOptionInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetRandomOptionInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetRandomOptionInfoRecord* UCommonSource_PetRandomOptionInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetRandomOptionInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetRandomOptionInfoSheet.GetRecord");

	UCommonSource_PetRandomOptionInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemMakeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemMakeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemMakeRecord* UCommonSource_ItemMakeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeSheet.GetRecord");

	UCommonSource_ItemMakeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemMakeCategorySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemMakeCategoryRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemMakeCategoryRecord* UCommonSource_ItemMakeCategorySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeCategorySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeCategorySheet.GetRecord");

	UCommonSource_ItemMakeCategorySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemSlotSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemSlotRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemSlotRecord* UCommonSource_ItemSlotSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSlotSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSlotSheet.GetRecord");

	UCommonSource_ItemSlotSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemRecoveryCategorySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemRecoveryCategoryRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemRecoveryCategoryRecord* UCommonSource_ItemRecoveryCategorySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemRecoveryCategorySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemRecoveryCategorySheet.GetRecord");

	UCommonSource_ItemRecoveryCategorySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemMakeReplaceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemMakeReplaceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemMakeReplaceRecord* UCommonSource_ItemMakeReplaceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeReplaceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemMakeReplaceSheet.GetRecord");

	UCommonSource_ItemMakeReplaceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemDismantleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemDismantleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemDismantleRecord* UCommonSource_ItemDismantleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDismantleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDismantleSheet.GetRecord");

	UCommonSource_ItemDismantleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemSetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemSetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemSetRecord* UCommonSource_ItemSetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSetSheet.GetRecord");

	UCommonSource_ItemSetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemConsumeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemConsumeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemConsumeRecord* UCommonSource_ItemConsumeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemConsumeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemConsumeSheet.GetRecord");

	UCommonSource_ItemConsumeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemEquipSlotSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemEquipSlotRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemEquipSlotRecord* UCommonSource_ItemEquipSlotSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEquipSlotSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemEquipSlotSheet.GetRecord");

	UCommonSource_ItemEquipSlotSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemUseLimitSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemUseLimitRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemUseLimitRecord* UCommonSource_ItemUseLimitSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemUseLimitSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemUseLimitSheet.GetRecord");

	UCommonSource_ItemUseLimitSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemDropControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemDropControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemDropControlRecord* UCommonSource_ItemDropControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDropControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemDropControlSheet.GetRecord");

	UCommonSource_ItemDropControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropControlGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropControlGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropControlGroupRecord* UCommonSource_DropControlGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropControlGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropControlGroupSheet.GetRecord");

	UCommonSource_DropControlGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropControlServerGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropControlServerGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropControlServerGroupRecord* UCommonSource_DropControlServerGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropControlServerGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropControlServerGroupSheet.GetRecord");

	UCommonSource_DropControlServerGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemSourceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemSourceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemSourceRecord* UCommonSource_ItemSourceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSourceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemSourceSheet.GetRecord");

	UCommonSource_ItemSourceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResourceIndicatorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResourceIndicatorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResourceIndicatorRecord* UCommonSource_ResourceIndicatorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceIndicatorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceIndicatorSheet.GetRecord");

	UCommonSource_ResourceIndicatorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResourceTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResourceTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResourceTypeRecord* UCommonSource_ResourceTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceTypeSheet.GetRecord");

	UCommonSource_ResourceTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemReplacementSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemReplacementRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemReplacementRecord* UCommonSource_ItemReplacementSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemReplacementSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemReplacementSheet.GetRecord");

	UCommonSource_ItemReplacementSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LetterBoxInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LetterBoxInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LetterBoxInfoRecord* UCommonSource_LetterBoxInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LetterBoxInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LetterBoxInfoSheet.GetRecord");

	UCommonSource_LetterBoxInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LetterDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LetterDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LetterDefineRecord* UCommonSource_LetterDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LetterDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LetterDefineSheet.GetRecord");

	UCommonSource_LetterDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.IndicatorItemTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_IndicatorItemTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_IndicatorItemTypeRecord* UCommonSource_IndicatorItemTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.IndicatorItemTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.IndicatorItemTypeSheet.GetRecord");

	UCommonSource_IndicatorItemTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkBoardInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkBoardInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkBoardInfoRecord* UCommonSource_LinkBoardInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkBoardInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkBoardInfoSheet.GetRecord");

	UCommonSource_LinkBoardInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemIndicatorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemIndicatorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemIndicatorRecord* UCommonSource_ItemIndicatorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemIndicatorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemIndicatorSheet.GetRecord");

	UCommonSource_ItemIndicatorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkEmblemInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkEmblemInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkEmblemInfoRecord* UCommonSource_LinkEmblemInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemInfoSheet.GetRecord");

	UCommonSource_LinkEmblemInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkEmblemOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkEmblemOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkEmblemOptionRecord* UCommonSource_LinkEmblemOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemOptionSheet.GetRecord");

	UCommonSource_LinkEmblemOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkSlotInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkSlotInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkSlotInfoRecord* UCommonSource_LinkSlotInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkSlotInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkSlotInfoSheet.GetRecord");

	UCommonSource_LinkSlotInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkEmblemCountOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkEmblemCountOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkEmblemCountOptionRecord* UCommonSource_LinkEmblemCountOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemCountOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkEmblemCountOptionSheet.GetRecord");

	UCommonSource_LinkEmblemCountOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CompleteLinkOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CompleteLinkOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CompleteLinkOptionRecord* UCommonSource_CompleteLinkOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CompleteLinkOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CompleteLinkOptionSheet.GetRecord");

	UCommonSource_CompleteLinkOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkDefineRecord* UCommonSource_LinkDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkDefineSheet.GetRecord");

	UCommonSource_LinkDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkResetPriceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkResetPriceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkResetPriceRecord* UCommonSource_LinkResetPriceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkResetPriceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkResetPriceSheet.GetRecord");

	UCommonSource_LinkResetPriceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LinkBonusCountSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LinkBonusCountRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LinkBonusCountRecord* UCommonSource_LinkBonusCountSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LinkBonusCountSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LinkBonusCountSheet.GetRecord");

	UCommonSource_LinkBonusCountSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LoadingInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LoadingInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LoadingInfoRecord* UCommonSource_LoadingInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LoadingInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LoadingInfoSheet.GetRecord");

	UCommonSource_LoadingInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ModelInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ModelInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ModelInfoRecord* UCommonSource_ModelInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ModelInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ModelInfoSheet.GetRecord");

	UCommonSource_ModelInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.TipInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_TipInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_TipInfoRecord* UCommonSource_TipInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.TipInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.TipInfoSheet.GetRecord");

	UCommonSource_TipInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.LoadingDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_LoadingDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_LoadingDefineRecord* UCommonSource_LoadingDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.LoadingDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.LoadingDefineSheet.GetRecord");

	UCommonSource_LoadingDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapInfoRecord* UCommonSource_MapInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapInfoSheet.GetRecord");

	UCommonSource_MapInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapTypeRecord* UCommonSource_MapTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapTypeSheet.GetRecord");

	UCommonSource_MapTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PartyDungeonSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PartyDungeonRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PartyDungeonRecord* UCommonSource_PartyDungeonSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PartyDungeonSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PartyDungeonSheet.GetRecord");

	UCommonSource_PartyDungeonSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PortalSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PortalRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PortalRecord* UCommonSource_PortalSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PortalSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PortalSheet.GetRecord");

	UCommonSource_PortalSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapDefineRecord* UCommonSource_MapDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapDefineSheet.GetRecord");

	UCommonSource_MapDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RankScoreSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RankScoreRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RankScoreRecord* UCommonSource_RankScoreSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RankScoreSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RankScoreSheet.GetRecord");

	UCommonSource_RankScoreSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ClearRankSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ClearRankRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ClearRankRecord* UCommonSource_ClearRankSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ClearRankSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ClearRankSheet.GetRecord");

	UCommonSource_ClearRankSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldAreaSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldAreaRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldAreaRecord* UCommonSource_WorldAreaSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldAreaSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldAreaSheet.GetRecord");

	UCommonSource_WorldAreaSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.TownInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_TownInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_TownInfoRecord* UCommonSource_TownInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.TownInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.TownInfoSheet.GetRecord");

	UCommonSource_TownInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AreaTypeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AreaTypeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AreaTypeInfoRecord* UCommonSource_AreaTypeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AreaTypeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AreaTypeInfoSheet.GetRecord");

	UCommonSource_AreaTypeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DungeonInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DungeonInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DungeonInfoRecord* UCommonSource_DungeonInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DungeonInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DungeonInfoSheet.GetRecord");

	UCommonSource_DungeonInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapBossInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapBossInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapBossInfoRecord* UCommonSource_MapBossInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapBossInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapBossInfoSheet.GetRecord");

	UCommonSource_MapBossInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapDisplayCkeckSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapDisplayCkeckRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapDisplayCkeckRecord* UCommonSource_MapDisplayCkeckSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapDisplayCkeckSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapDisplayCkeckSheet.GetRecord");

	UCommonSource_MapDisplayCkeckSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapGroupDisplayCheckSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapGroupDisplayCheckRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapGroupDisplayCheckRecord* UCommonSource_MapGroupDisplayCheckSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapGroupDisplayCheckSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapGroupDisplayCheckSheet.GetRecord");

	UCommonSource_MapGroupDisplayCheckSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapAISelectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapAISelectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapAISelectRecord* UCommonSource_MapAISelectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapAISelectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapAISelectSheet.GetRecord");

	UCommonSource_MapAISelectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapEnterChargeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapEnterChargeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapEnterChargeRecord* UCommonSource_MapEnterChargeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapEnterChargeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapEnterChargeSheet.GetRecord");

	UCommonSource_MapEnterChargeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DuelDungeonSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DuelDungeonRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DuelDungeonRecord* UCommonSource_DuelDungeonSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DuelDungeonSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DuelDungeonSheet.GetRecord");

	UCommonSource_DuelDungeonSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DungeonTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DungeonTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DungeonTimeRecord* UCommonSource_DungeonTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DungeonTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DungeonTimeSheet.GetRecord");

	UCommonSource_DungeonTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DuelDungeonMapSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DuelDungeonMapRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DuelDungeonMapRecord* UCommonSource_DuelDungeonMapSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DuelDungeonMapSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DuelDungeonMapSheet.GetRecord");

	UCommonSource_DuelDungeonMapSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CastlewarQualifierMapSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CastlewarQualifierMapRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CastlewarQualifierMapRecord* UCommonSource_CastlewarQualifierMapSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarQualifierMapSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CastlewarQualifierMapSheet.GetRecord");

	UCommonSource_CastlewarQualifierMapSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapTriggerSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapTriggerRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapTriggerRecord* UCommonSource_MapTriggerSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapTriggerSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapTriggerSheet.GetRecord");

	UCommonSource_MapTriggerSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InstanceServerMapTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InstanceServerMapTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InstanceServerMapTypeRecord* UCommonSource_InstanceServerMapTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InstanceServerMapTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InstanceServerMapTypeSheet.GetRecord");

	UCommonSource_InstanceServerMapTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AreaBuffApplyObjectTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AreaBuffApplyObjectTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AreaBuffApplyObjectTypeRecord* UCommonSource_AreaBuffApplyObjectTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AreaBuffApplyObjectTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AreaBuffApplyObjectTypeSheet.GetRecord");

	UCommonSource_AreaBuffApplyObjectTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AreaBuffApplyClassTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AreaBuffApplyClassTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AreaBuffApplyClassTypeRecord* UCommonSource_AreaBuffApplyClassTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AreaBuffApplyClassTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AreaBuffApplyClassTypeSheet.GetRecord");

	UCommonSource_AreaBuffApplyClassTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MultiMiniMapSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MultiMiniMapRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MultiMiniMapRecord* UCommonSource_MultiMiniMapSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MultiMiniMapSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MultiMiniMapSheet.GetRecord");

	UCommonSource_MultiMiniMapSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapColliderInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapColliderInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapColliderInfoRecord* UCommonSource_MapColliderInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapColliderInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapColliderInfoSheet.GetRecord");

	UCommonSource_MapColliderInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldMapSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldMapRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldMapRecord* UCommonSource_GuildBattlefieldMapSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMapSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldMapSheet.GetRecord");

	UCommonSource_GuildBattlefieldMapSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MessageInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MessageInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MessageInfoRecord* UCommonSource_MessageInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MessageInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MessageInfoSheet.GetRecord");

	UCommonSource_MessageInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerMessageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerMessageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerMessageRecord* UCommonSource_ServerMessageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMessageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMessageSheet.GetRecord");

	UCommonSource_ServerMessageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BossInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BossInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BossInfoRecord* UCommonSource_BossInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BossInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BossInfoSheet.GetRecord");

	UCommonSource_BossInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MonsterGroupIDSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MonsterGroupIDRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MonsterGroupIDRecord* UCommonSource_MonsterGroupIDSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterGroupIDSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterGroupIDSheet.GetRecord");

	UCommonSource_MonsterGroupIDSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MonsterDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MonsterDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MonsterDefineRecord* UCommonSource_MonsterDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterDefineSheet.GetRecord");

	UCommonSource_MonsterDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MonsterNotInAreaSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MonsterNotInAreaRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MonsterNotInAreaRecord* UCommonSource_MonsterNotInAreaSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterNotInAreaSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterNotInAreaSheet.GetRecord");

	UCommonSource_MonsterNotInAreaSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MonsterGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MonsterGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MonsterGradeRecord* UCommonSource_MonsterGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterGradeSheet.GetRecord");

	UCommonSource_MonsterGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NoticeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NoticeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NoticeInfoRecord* UCommonSource_NoticeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NoticeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NoticeInfoSheet.GetRecord");

	UCommonSource_NoticeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ContentsControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ContentsControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ContentsControlRecord* UCommonSource_ContentsControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsControlSheet.GetRecord");

	UCommonSource_ContentsControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ContentSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ContentRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ContentRecord* UCommonSource_ContentSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ContentSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ContentSheet.GetRecord");

	UCommonSource_ContentSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ButtonLockSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ButtonLockRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ButtonLockRecord* UCommonSource_ButtonLockSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ButtonLockSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ButtonLockSheet.GetRecord");

	UCommonSource_ButtonLockSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NoticeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NoticeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NoticeDefineRecord* UCommonSource_NoticeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NoticeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NoticeDefineSheet.GetRecord");

	UCommonSource_NoticeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MarketReviewSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MarketReviewRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MarketReviewRecord* UCommonSource_MarketReviewSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MarketReviewSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MarketReviewSheet.GetRecord");

	UCommonSource_MarketReviewSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ContentLockSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ContentLockRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ContentLockRecord* UCommonSource_ContentLockSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ContentLockSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ContentLockSheet.GetRecord");

	UCommonSource_ContentLockSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemControlRecord* UCommonSource_ItemControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemControlSheet.GetRecord");

	UCommonSource_ItemControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MonsterSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MonsterRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MonsterRecord* UCommonSource_MonsterSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MonsterSheet.GetRecord");

	UCommonSource_MonsterSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExpirationInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExpirationInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExpirationInfoRecord* UCommonSource_ExpirationInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExpirationInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExpirationInfoSheet.GetRecord");

	UCommonSource_ExpirationInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ContentsWorldControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ContentsWorldControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ContentsWorldControlRecord* UCommonSource_ContentsWorldControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsWorldControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsWorldControlSheet.GetRecord");

	UCommonSource_ContentsWorldControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResourceControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResourceControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResourceControlRecord* UCommonSource_ResourceControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceControlSheet.GetRecord");

	UCommonSource_ResourceControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NpcSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NpcRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NpcRecord* UCommonSource_NpcSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NpcSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NpcSheet.GetRecord");

	UCommonSource_NpcSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BaseObjectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BaseObjectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BaseObjectRecord* UCommonSource_BaseObjectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BaseObjectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BaseObjectSheet.GetRecord");

	UCommonSource_BaseObjectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ObjectDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ObjectDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ObjectDefineRecord* UCommonSource_ObjectDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectDefineSheet.GetRecord");

	UCommonSource_ObjectDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ObjectTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ObjectTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ObjectTypeRecord* UCommonSource_ObjectTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectTypeSheet.GetRecord");

	UCommonSource_ObjectTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NpcFuncTypeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NpcFuncTypeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NpcFuncTypeInfoRecord* UCommonSource_NpcFuncTypeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NpcFuncTypeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NpcFuncTypeInfoSheet.GetRecord");

	UCommonSource_NpcFuncTypeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ObjectHitEffectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ObjectHitEffectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ObjectHitEffectRecord* UCommonSource_ObjectHitEffectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectHitEffectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectHitEffectSheet.GetRecord");

	UCommonSource_ObjectHitEffectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ColliderInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ColliderInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ColliderInfoRecord* UCommonSource_ColliderInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ColliderInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ColliderInfoSheet.GetRecord");

	UCommonSource_ColliderInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PacketErrorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PacketErrorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PacketErrorRecord* UCommonSource_PacketErrorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PacketErrorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PacketErrorSheet.GetRecord");

	UCommonSource_PacketErrorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CharParamSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CharParamRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CharParamRecord* UCommonSource_CharParamSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CharParamSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CharParamSheet.GetRecord");

	UCommonSource_CharParamSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillParamSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillParamRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillParamRecord* UCommonSource_SkillParamSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillParamSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillParamSheet.GetRecord");

	UCommonSource_SkillParamSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.UnappliedCharParamSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_UnappliedCharParamRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_UnappliedCharParamRecord* UCommonSource_UnappliedCharParamSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.UnappliedCharParamSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.UnappliedCharParamSheet.GetRecord");

	UCommonSource_UnappliedCharParamSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BattlePowerParamSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BattlePowerParamRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BattlePowerParamRecord* UCommonSource_BattlePowerParamSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BattlePowerParamSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BattlePowerParamSheet.GetRecord");

	UCommonSource_BattlePowerParamSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ParamDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ParamDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ParamDefineRecord* UCommonSource_ParamDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ParamDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ParamDefineSheet.GetRecord");

	UCommonSource_ParamDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PartyDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PartyDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PartyDefineRecord* UCommonSource_PartyDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PartyDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PartyDefineSheet.GetRecord");

	UCommonSource_PartyDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BattlePowerVariableSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BattlePowerVariableRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BattlePowerVariableRecord* UCommonSource_BattlePowerVariableSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BattlePowerVariableSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BattlePowerVariableSheet.GetRecord");

	UCommonSource_BattlePowerVariableSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SoulPetInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SoulPetInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SoulPetInfoRecord* UCommonSource_SoulPetInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SoulPetInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SoulPetInfoSheet.GetRecord");

	UCommonSource_SoulPetInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PartyRoleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PartyRoleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PartyRoleRecord* UCommonSource_PartyRoleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PartyRoleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PartyRoleSheet.GetRecord");

	UCommonSource_PartyRoleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetGradeRecord* UCommonSource_PetGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetGradeSheet.GetRecord");

	UCommonSource_PetGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PatrolFlagInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PatrolFlagInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PatrolFlagInfoRecord* UCommonSource_PatrolFlagInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PatrolFlagInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PatrolFlagInfoSheet.GetRecord");

	UCommonSource_PatrolFlagInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetGuardianInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetGuardianInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetGuardianInfoRecord* UCommonSource_PetGuardianInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianInfoSheet.GetRecord");

	UCommonSource_PetGuardianInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetGuardianConditionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetGuardianConditionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetGuardianConditionRecord* UCommonSource_PetGuardianConditionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianConditionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianConditionSheet.GetRecord");

	UCommonSource_PetGuardianConditionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetGuardianOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetGuardianOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetGuardianOptionRecord* UCommonSource_PetGuardianOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianOptionSheet.GetRecord");

	UCommonSource_PetGuardianOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetGuardianDifficultyInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetGuardianDifficultyInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetGuardianDifficultyInfoRecord* UCommonSource_PetGuardianDifficultyInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianDifficultyInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetGuardianDifficultyInfoSheet.GetRecord");

	UCommonSource_PetGuardianDifficultyInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkBrutalStateSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkBrutalStateRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkBrutalStateRecord* UCommonSource_PkBrutalStateSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkBrutalStateSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkBrutalStateSheet.GetRecord");

	UCommonSource_PkBrutalStateSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkSlayerScoreSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkSlayerScoreRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkSlayerScoreRecord* UCommonSource_PkSlayerScoreSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkSlayerScoreSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkSlayerScoreSheet.GetRecord");

	UCommonSource_PkSlayerScoreSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkMonsterKillCountSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkMonsterKillCountRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkMonsterKillCountRecord* UCommonSource_PkMonsterKillCountSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkMonsterKillCountSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkMonsterKillCountSheet.GetRecord");

	UCommonSource_PkMonsterKillCountSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkAbnormalResistSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkAbnormalResistRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkAbnormalResistRecord* UCommonSource_PkAbnormalResistSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkAbnormalResistSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkAbnormalResistSheet.GetRecord");

	UCommonSource_PkAbnormalResistSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkSlayerPenaltySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkSlayerPenaltyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkSlayerPenaltyRecord* UCommonSource_PkSlayerPenaltySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkSlayerPenaltySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkSlayerPenaltySheet.GetRecord");

	UCommonSource_PkSlayerPenaltySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkDefineRecord* UCommonSource_PkDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkDefineSheet.GetRecord");

	UCommonSource_PkDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PkAssistDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PkAssistDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PkAssistDefineRecord* UCommonSource_PkAssistDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PkAssistDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PkAssistDefineSheet.GetRecord");

	UCommonSource_PkAssistDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PetDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PetDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PetDefineRecord* UCommonSource_PetDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PetDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PetDefineSheet.GetRecord");

	UCommonSource_PetDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerRecord* UCommonSource_PlayerSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSheet.GetRecord");

	UCommonSource_PlayerSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerLevelSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerLevelRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerLevelRecord* UCommonSource_PlayerLevelSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerLevelSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerLevelSheet.GetRecord");

	UCommonSource_PlayerLevelSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerStartStatusSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerStartStatusRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerStartStatusRecord* UCommonSource_PlayerStartStatusSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerStartStatusSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerStartStatusSheet.GetRecord");

	UCommonSource_PlayerStartStatusSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerTendencySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerTendencyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerTendencyRecord* UCommonSource_PlayerTendencySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerTendencySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerTendencySheet.GetRecord");

	UCommonSource_PlayerTendencySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIPlayerNameSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIPlayerNameRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIPlayerNameRecord* UCommonSource_AIPlayerNameSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerNameSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerNameSheet.GetRecord");

	UCommonSource_AIPlayerNameSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerDefineRecord* UCommonSource_PlayerDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerDefineSheet.GetRecord");

	UCommonSource_PlayerDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIStatusSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIStatusRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIStatusRecord* UCommonSource_AIStatusSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIStatusSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIStatusSheet.GetRecord");

	UCommonSource_AIStatusSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIPlayerAvatarSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIPlayerAvatarRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIPlayerAvatarRecord* UCommonSource_AIPlayerAvatarSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerAvatarSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerAvatarSheet.GetRecord");

	UCommonSource_AIPlayerAvatarSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResurrectionCostSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResurrectionCostRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResurrectionCostRecord* UCommonSource_ResurrectionCostSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResurrectionCostSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResurrectionCostSheet.GetRecord");

	UCommonSource_ResurrectionCostSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerDeletePenaltySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerDeletePenaltyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerDeletePenaltyRecord* UCommonSource_PlayerDeletePenaltySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerDeletePenaltySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerDeletePenaltySheet.GetRecord");

	UCommonSource_PlayerDeletePenaltySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AIPlayerItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AIPlayerItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AIPlayerItemRecord* UCommonSource_AIPlayerItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AIPlayerItemSheet.GetRecord");

	UCommonSource_AIPlayerItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerClassOnOffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerClassOnOffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerClassOnOffRecord* UCommonSource_PlayerClassOnOffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerClassOnOffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerClassOnOffSheet.GetRecord");

	UCommonSource_PlayerClassOnOffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerSkillQuickSlotPosSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerSkillQuickSlotPosRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerSkillQuickSlotPosRecord* UCommonSource_PlayerSkillQuickSlotPosSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSkillQuickSlotPosSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSkillQuickSlotPosSheet.GetRecord");

	UCommonSource_PlayerSkillQuickSlotPosSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.IntegratedPresetControlSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_IntegratedPresetControlRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_IntegratedPresetControlRecord* UCommonSource_IntegratedPresetControlSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.IntegratedPresetControlSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.IntegratedPresetControlSheet.GetRecord");

	UCommonSource_IntegratedPresetControlSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestInfoRecord* UCommonSource_QuestInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestInfoSheet.GetRecord");

	UCommonSource_QuestInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestRecord* UCommonSource_RepeatQuestSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestSheet.GetRecord");

	UCommonSource_RepeatQuestSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestRewardBundleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestRewardBundleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestRewardBundleRecord* UCommonSource_RepeatQuestRewardBundleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestRewardBundleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestRewardBundleSheet.GetRecord");

	UCommonSource_RepeatQuestRewardBundleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestVoiceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestVoiceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestVoiceRecord* UCommonSource_QuestVoiceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestVoiceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestVoiceSheet.GetRecord");

	UCommonSource_QuestVoiceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestMissionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestMissionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestMissionRecord* UCommonSource_QuestMissionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestMissionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestMissionSheet.GetRecord");

	UCommonSource_QuestMissionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestItemInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestItemInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestItemInfoRecord* UCommonSource_QuestItemInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestItemInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestItemInfoSheet.GetRecord");

	UCommonSource_QuestItemInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestChoiceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestChoiceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestChoiceRecord* UCommonSource_QuestChoiceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestChoiceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestChoiceSheet.GetRecord");

	UCommonSource_QuestChoiceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PKRandomTauntMessageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PKRandomTauntMessageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PKRandomTauntMessageRecord* UCommonSource_PKRandomTauntMessageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PKRandomTauntMessageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PKRandomTauntMessageSheet.GetRecord");

	UCommonSource_PKRandomTauntMessageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestActionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestActionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestActionRecord* UCommonSource_QuestActionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestActionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestActionSheet.GetRecord");

	UCommonSource_QuestActionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResurrectionWaitTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResurrectionWaitTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResurrectionWaitTimeRecord* UCommonSource_ResurrectionWaitTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResurrectionWaitTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResurrectionWaitTimeSheet.GetRecord");

	UCommonSource_ResurrectionWaitTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestDefineRecord* UCommonSource_QuestDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestDefineSheet.GetRecord");

	UCommonSource_QuestDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestTouchMaskSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestTouchMaskRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestTouchMaskRecord* UCommonSource_QuestTouchMaskSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestTouchMaskSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestTouchMaskSheet.GetRecord");

	UCommonSource_QuestTouchMaskSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestGradeRateSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestGradeRateRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestGradeRateRecord* UCommonSource_RepeatQuestGradeRateSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestGradeRateSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestGradeRateSheet.GetRecord");

	UCommonSource_RepeatQuestGradeRateSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestMaxNumberSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestMaxNumberRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestMaxNumberRecord* UCommonSource_RepeatQuestMaxNumberSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestMaxNumberSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestMaxNumberSheet.GetRecord");

	UCommonSource_RepeatQuestMaxNumberSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestRefreshPriceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestRefreshPriceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestRefreshPriceRecord* UCommonSource_RepeatQuestRefreshPriceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestRefreshPriceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestRefreshPriceSheet.GetRecord");

	UCommonSource_RepeatQuestRefreshPriceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestGroupRecord* UCommonSource_QuestGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestGroupSheet.GetRecord");

	UCommonSource_QuestGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestBGSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestBGRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestBGRecord* UCommonSource_QuestBGSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestBGSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestBGSheet.GetRecord");

	UCommonSource_QuestBGSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionQuestRefreshPriceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionQuestRefreshPriceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionQuestRefreshPriceRecord* UCommonSource_InvasionQuestRefreshPriceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionQuestRefreshPriceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionQuestRefreshPriceSheet.GetRecord");

	UCommonSource_InvasionQuestRefreshPriceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionQuestSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionQuestRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionQuestRecord* UCommonSource_InvasionQuestSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionQuestSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionQuestSheet.GetRecord");

	UCommonSource_InvasionQuestSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxRepeatQuestSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxRepeatQuestRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxRepeatQuestRecord* UCommonSource_RandomBoxRepeatQuestSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRepeatQuestSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRepeatQuestSheet.GetRecord");

	UCommonSource_RandomBoxRepeatQuestSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EventQuestInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EventQuestInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EventQuestInfoRecord* UCommonSource_EventQuestInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EventQuestInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EventQuestInfoSheet.GetRecord");

	UCommonSource_EventQuestInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxQuestSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxQuestRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxQuestRecord* UCommonSource_RandomBoxQuestSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxQuestSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxQuestSheet.GetRecord");

	UCommonSource_RandomBoxQuestSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxAvatarSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxAvatarRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxAvatarRecord* UCommonSource_RandomBoxAvatarSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxAvatarSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxAvatarSheet.GetRecord");

	UCommonSource_RandomBoxAvatarSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxDropSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxDropRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxDropRecord* UCommonSource_RandomBoxDropSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxDropSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxDropSheet.GetRecord");

	UCommonSource_RandomBoxDropSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxWeaponShapeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxWeaponShapeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxWeaponShapeRecord* UCommonSource_RandomBoxWeaponShapeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxWeaponShapeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxWeaponShapeSheet.GetRecord");

	UCommonSource_RandomBoxWeaponShapeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxVehicleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxVehicleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxVehicleRecord* UCommonSource_RandomBoxVehicleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxVehicleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxVehicleSheet.GetRecord");

	UCommonSource_RandomBoxVehicleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxItemRecord* UCommonSource_RandomBoxItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxItemSheet.GetRecord");

	UCommonSource_RandomBoxItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxCostumeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxCostumeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxCostumeRecord* UCommonSource_RandomBoxCostumeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxCostumeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxCostumeSheet.GetRecord");

	UCommonSource_RandomBoxCostumeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxRuneSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxRuneRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxRuneRecord* UCommonSource_RandomBoxRuneSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRuneSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRuneSheet.GetRecord");

	UCommonSource_RandomBoxRuneSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxGoodsSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxGoodsRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxGoodsRecord* UCommonSource_RandomBoxGoodsSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxGoodsSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxGoodsSheet.GetRecord");

	UCommonSource_RandomBoxGoodsSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxBlessingStoneSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxBlessingStoneRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxBlessingStoneRecord* UCommonSource_RandomBoxBlessingStoneSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxBlessingStoneSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxBlessingStoneSheet.GetRecord");

	UCommonSource_RandomBoxBlessingStoneSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SelectBoxItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SelectBoxItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SelectBoxItemRecord* UCommonSource_SelectBoxItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SelectBoxItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SelectBoxItemSheet.GetRecord");

	UCommonSource_SelectBoxItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxRelicGambleRewardItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxRelicGambleRewardItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxRelicGambleRewardItemRecord* UCommonSource_RandomBoxRelicGambleRewardItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRelicGambleRewardItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxRelicGambleRewardItemSheet.GetRecord");

	UCommonSource_RandomBoxRelicGambleRewardItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxInfinityDungeonSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxInfinityDungeonRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxInfinityDungeonRecord* UCommonSource_RandomBoxInfinityDungeonSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxInfinityDungeonSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxInfinityDungeonSheet.GetRecord");

	UCommonSource_RandomBoxInfinityDungeonSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxGuildBattlefieldSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxGuildBattlefieldRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxGuildBattlefieldRecord* UCommonSource_RandomBoxGuildBattlefieldSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxGuildBattlefieldSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxGuildBattlefieldSheet.GetRecord");

	UCommonSource_RandomBoxGuildBattlefieldSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ExceptCheckGroupIDSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ExceptCheckGroupIDRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ExceptCheckGroupIDRecord* UCommonSource_ExceptCheckGroupIDSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ExceptCheckGroupIDSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ExceptCheckGroupIDSheet.GetRecord");

	UCommonSource_ExceptCheckGroupIDSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomBoxPetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomBoxPetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomBoxPetRecord* UCommonSource_RandomBoxPetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxPetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomBoxPetSheet.GetRecord");

	UCommonSource_RandomBoxPetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomChoiceGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomChoiceGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomChoiceGradeRecord* UCommonSource_RandomChoiceGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceGradeSheet.GetRecord");

	UCommonSource_RandomChoiceGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomChoiceAvatarSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomChoiceAvatarRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomChoiceAvatarRecord* UCommonSource_RandomChoiceAvatarSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceAvatarSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceAvatarSheet.GetRecord");

	UCommonSource_RandomChoiceAvatarSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomChoiceVehicleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomChoiceVehicleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomChoiceVehicleRecord* UCommonSource_RandomChoiceVehicleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceVehicleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceVehicleSheet.GetRecord");

	UCommonSource_RandomChoiceVehicleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomChoicePetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomChoicePetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomChoicePetRecord* UCommonSource_RandomChoicePetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoicePetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoicePetSheet.GetRecord");

	UCommonSource_RandomChoicePetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomChoiceWeaponShapeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomChoiceWeaponShapeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomChoiceWeaponShapeRecord* UCommonSource_RandomChoiceWeaponShapeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceWeaponShapeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomChoiceWeaponShapeSheet.GetRecord");

	UCommonSource_RandomChoiceWeaponShapeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RandomOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RandomOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RandomOptionRecord* UCommonSource_RandomOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RandomOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RandomOptionSheet.GetRecord");

	UCommonSource_RandomOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestSequenceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestSequenceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestSequenceRecord* UCommonSource_QuestSequenceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestSequenceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestSequenceSheet.GetRecord");

	UCommonSource_QuestSequenceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.DropPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_DropPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_DropPackageRecord* UCommonSource_DropPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.DropPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.DropPackageSheet.GetRecord");

	UCommonSource_DropPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RepeatQuestPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RepeatQuestPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RepeatQuestPackageRecord* UCommonSource_RepeatQuestPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RepeatQuestPackageSheet.GetRecord");

	UCommonSource_RepeatQuestPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestPackageRecord* UCommonSource_QuestPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestPackageSheet.GetRecord");

	UCommonSource_QuestPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ItemPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ItemPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ItemPackageRecord* UCommonSource_ItemPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ItemPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ItemPackageSheet.GetRecord");

	UCommonSource_ItemPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MapPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MapPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MapPackageRecord* UCommonSource_MapPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MapPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MapPackageSheet.GetRecord");

	UCommonSource_MapPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGamblePackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGamblePackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGamblePackageRecord* UCommonSource_RelicGamblePackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGamblePackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGamblePackageSheet.GetRecord");

	UCommonSource_RelicGamblePackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.TreasurePackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_TreasurePackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_TreasurePackageRecord* UCommonSource_TreasurePackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.TreasurePackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.TreasurePackageSheet.GetRecord");

	UCommonSource_TreasurePackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InfinityDungeonPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InfinityDungeonPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InfinityDungeonPackageRecord* UCommonSource_InfinityDungeonPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InfinityDungeonPackageSheet.GetRecord");

	UCommonSource_InfinityDungeonPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.GuildBattlefieldPackageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_GuildBattlefieldPackageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_GuildBattlefieldPackageRecord* UCommonSource_GuildBattlefieldPackageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldPackageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.GuildBattlefieldPackageSheet.GetRecord");

	UCommonSource_GuildBattlefieldPackageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RankingBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RankingBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RankingBuffRecord* UCommonSource_RankingBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RankingBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RankingBuffSheet.GetRecord");

	UCommonSource_RankingBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RankingDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RankingDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RankingDefineRecord* UCommonSource_RankingDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RankingDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RankingDefineSheet.GetRecord");

	UCommonSource_RankingDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarRankRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarRankRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarRankRewardRecord* UCommonSource_RealmwarRankRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarRankRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarRankRewardSheet.GetRecord");

	UCommonSource_RealmwarRankRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarSeasonRankSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarSeasonRankRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarSeasonRankRecord* UCommonSource_RealmwarSeasonRankSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarSeasonRankSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarSeasonRankSheet.GetRecord");

	UCommonSource_RealmwarSeasonRankSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarDefineRecord* UCommonSource_RealmwarDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarDefineSheet.GetRecord");

	UCommonSource_RealmwarDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarKillCountMsgSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarKillCountMsgRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarKillCountMsgRecord* UCommonSource_RealmwarKillCountMsgSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarKillCountMsgSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarKillCountMsgSheet.GetRecord");

	UCommonSource_RealmwarKillCountMsgSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarInteractRandomBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarInteractRandomBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarInteractRandomBuffRecord* UCommonSource_RealmwarInteractRandomBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractRandomBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractRandomBuffSheet.GetRecord");

	UCommonSource_RealmwarInteractRandomBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarInteractRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarInteractRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarInteractRewardRecord* UCommonSource_RealmwarInteractRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractRewardSheet.GetRecord");

	UCommonSource_RealmwarInteractRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGambleInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGambleInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGambleInfoRecord* UCommonSource_RelicGambleInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleInfoSheet.GetRecord");

	UCommonSource_RelicGambleInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGambleRewardBundleSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGambleRewardBundleRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGambleRewardBundleRecord* UCommonSource_RelicGambleRewardBundleSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRewardBundleSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRewardBundleSheet.GetRecord");

	UCommonSource_RelicGambleRewardBundleSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RealmwarInteractFactionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RealmwarInteractFactionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RealmwarInteractFactionRecord* UCommonSource_RealmwarInteractFactionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractFactionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RealmwarInteractFactionSheet.GetRecord");

	UCommonSource_RealmwarInteractFactionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGambleCostSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGambleCostRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGambleCostRecord* UCommonSource_RelicGambleCostSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleCostSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleCostSheet.GetRecord");

	UCommonSource_RelicGambleCostSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGambleRefreshPriceSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGambleRefreshPriceRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGambleRefreshPriceRecord* UCommonSource_RelicGambleRefreshPriceSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRefreshPriceSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRefreshPriceSheet.GetRecord");

	UCommonSource_RelicGambleRefreshPriceSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResourceIconSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResourceIconRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResourceIconRecord* UCommonSource_ResourceIconSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceIconSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceIconSheet.GetRecord");

	UCommonSource_ResourceIconSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ResourceInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ResourceInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ResourceInfoRecord* UCommonSource_ResourceInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ResourceInfoSheet.GetRecord");

	UCommonSource_ResourceInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RelicGambleRewardEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RelicGambleRewardEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RelicGambleRewardEnchantRecord* UCommonSource_RelicGambleRewardEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRewardEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RelicGambleRewardEnchantSheet.GetRecord");

	UCommonSource_RelicGambleRewardEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldMapTotalViewSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldMapTotalViewRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldMapTotalViewRecord* UCommonSource_WorldMapTotalViewSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldMapTotalViewSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldMapTotalViewSheet.GetRecord");

	UCommonSource_WorldMapTotalViewSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerIconSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerIconRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerIconRecord* UCommonSource_PlayerIconSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerIconSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerIconSheet.GetRecord");

	UCommonSource_PlayerIconSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneDefineRecord* UCommonSource_RuneDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneDefineSheet.GetRecord");

	UCommonSource_RuneDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ContentsIconSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ContentsIconRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ContentsIconRecord* UCommonSource_ContentsIconSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsIconSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ContentsIconSheet.GetRecord");

	UCommonSource_ContentsIconSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneInfoRecord* UCommonSource_RuneInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneInfoSheet.GetRecord");

	UCommonSource_RuneInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneOpenLevelSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneOpenLevelRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneOpenLevelRecord* UCommonSource_RuneOpenLevelSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneOpenLevelSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneOpenLevelSheet.GetRecord");

	UCommonSource_RuneOpenLevelSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneGradeRecord* UCommonSource_RuneGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneGradeSheet.GetRecord");

	UCommonSource_RuneGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneSetEnchantDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneSetEnchantDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneSetEnchantDefineRecord* UCommonSource_RuneSetEnchantDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetEnchantDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetEnchantDefineSheet.GetRecord");

	UCommonSource_RuneSetEnchantDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneSetEnchantValueSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneSetEnchantValueRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneSetEnchantValueRecord* UCommonSource_RuneSetEnchantValueSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetEnchantValueSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetEnchantValueSheet.GetRecord");

	UCommonSource_RuneSetEnchantValueSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneSetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneSetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneSetRecord* UCommonSource_RuneSetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneSetSheet.GetRecord");

	UCommonSource_RuneSetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneAttributeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneAttributeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneAttributeDefineRecord* UCommonSource_RuneAttributeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeDefineSheet.GetRecord");

	UCommonSource_RuneAttributeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneAttributeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneAttributeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneAttributeRecord* UCommonSource_RuneAttributeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeSheet.GetRecord");

	UCommonSource_RuneAttributeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.RuneAttributeOptionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_RuneAttributeOptionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_RuneAttributeOptionRecord* UCommonSource_RuneAttributeOptionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeOptionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.RuneAttributeOptionSheet.GetRecord");

	UCommonSource_RuneAttributeOptionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SchedulerInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SchedulerInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SchedulerInfoRecord* UCommonSource_SchedulerInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerInfoSheet.GetRecord");

	UCommonSource_SchedulerInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SchedulerDungeonInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SchedulerDungeonInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SchedulerDungeonInfoRecord* UCommonSource_SchedulerDungeonInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDungeonInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDungeonInfoSheet.GetRecord");

	UCommonSource_SchedulerDungeonInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SchedulerBlockInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SchedulerBlockInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SchedulerBlockInfoRecord* UCommonSource_SchedulerBlockInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerBlockInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerBlockInfoSheet.GetRecord");

	UCommonSource_SchedulerBlockInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SchedulerDismantleItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SchedulerDismantleItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SchedulerDismantleItemRecord* UCommonSource_SchedulerDismantleItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDismantleItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDismantleItemSheet.GetRecord");

	UCommonSource_SchedulerDismantleItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SchedulerDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SchedulerDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SchedulerDefineRecord* UCommonSource_SchedulerDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SchedulerDefineSheet.GetRecord");

	UCommonSource_SchedulerDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SealedStoneInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SealedStoneInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SealedStoneInfoRecord* UCommonSource_SealedStoneInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneInfoSheet.GetRecord");

	UCommonSource_SealedStoneInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SealedStoneEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SealedStoneEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SealedStoneEnchantRecord* UCommonSource_SealedStoneEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneEnchantSheet.GetRecord");

	UCommonSource_SealedStoneEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SealedStoneDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SealedStoneDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SealedStoneDefineRecord* UCommonSource_SealedStoneDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneDefineSheet.GetRecord");

	UCommonSource_SealedStoneDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SealedStoneSetOpenSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SealedStoneSetOpenRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SealedStoneSetOpenRecord* UCommonSource_SealedStoneSetOpenSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneSetOpenSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SealedStoneSetOpenSheet.GetRecord");

	UCommonSource_SealedStoneSetOpenSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionBuffRecord* UCommonSource_ServerInvasionBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionBuffSheet.GetRecord");

	UCommonSource_ServerInvasionBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MovableMapsSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MovableMapsRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MovableMapsRecord* UCommonSource_MovableMapsSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MovableMapsSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MovableMapsSheet.GetRecord");

	UCommonSource_MovableMapsSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionTimeRecord* UCommonSource_ServerInvasionTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionTimeSheet.GetRecord");

	UCommonSource_ServerInvasionTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionBlockInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionBlockInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionBlockInfoRecord* UCommonSource_ServerInvasionBlockInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionBlockInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionBlockInfoSheet.GetRecord");

	UCommonSource_ServerInvasionBlockInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionPkPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionPkPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionPkPointRecord* UCommonSource_InvasionPkPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionPkPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionPkPointSheet.GetRecord");

	UCommonSource_InvasionPkPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionObjectInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionObjectInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionObjectInfoRecord* UCommonSource_InvasionObjectInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionObjectInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionObjectInfoSheet.GetRecord");

	UCommonSource_InvasionObjectInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionObjectPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionObjectPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionObjectPointRecord* UCommonSource_InvasionObjectPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionObjectPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionObjectPointSheet.GetRecord");

	UCommonSource_InvasionObjectPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionCostumeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionCostumeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionCostumeRecord* UCommonSource_ServerInvasionCostumeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionCostumeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionCostumeSheet.GetRecord");

	UCommonSource_ServerInvasionCostumeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionEnterOrderColorSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionEnterOrderColorRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionEnterOrderColorRecord* UCommonSource_ServerInvasionEnterOrderColorSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionEnterOrderColorSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionEnterOrderColorSheet.GetRecord");

	UCommonSource_ServerInvasionEnterOrderColorSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.InvasionPKRandomTauntMessageSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_InvasionPKRandomTauntMessageRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_InvasionPKRandomTauntMessageRecord* UCommonSource_InvasionPKRandomTauntMessageSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionPKRandomTauntMessageSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.InvasionPKRandomTauntMessageSheet.GetRecord");

	UCommonSource_InvasionPKRandomTauntMessageSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerMigrationStateSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerMigrationStateRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerMigrationStateRecord* UCommonSource_ServerMigrationStateSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMigrationStateSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMigrationStateSheet.GetRecord");

	UCommonSource_ServerMigrationStateSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerInvasionDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerInvasionDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerInvasionDefineRecord* UCommonSource_ServerInvasionDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerInvasionDefineSheet.GetRecord");

	UCommonSource_ServerInvasionDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ServerMigrationDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ServerMigrationDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ServerMigrationDefineRecord* UCommonSource_ServerMigrationDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMigrationDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ServerMigrationDefineSheet.GetRecord");

	UCommonSource_ServerMigrationDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowTierSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowTierRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowTierRecord* UCommonSource_ShadowTierSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowTierSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowTierSheet.GetRecord");

	UCommonSource_ShadowTierSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowActiveTimeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowActiveTimeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowActiveTimeRecord* UCommonSource_ShadowActiveTimeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowActiveTimeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowActiveTimeSheet.GetRecord");

	UCommonSource_ShadowActiveTimeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowDungeonMapSettingSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowDungeonMapSettingRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowDungeonMapSettingRecord* UCommonSource_ShadowDungeonMapSettingSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonMapSettingSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonMapSettingSheet.GetRecord");

	UCommonSource_ShadowDungeonMapSettingSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowDungeonTeleportItemSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowDungeonTeleportItemRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowDungeonTeleportItemRecord* UCommonSource_ShadowDungeonTeleportItemSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonTeleportItemSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonTeleportItemSheet.GetRecord");

	UCommonSource_ShadowDungeonTeleportItemSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowDungeonDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowDungeonDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowDungeonDefineRecord* UCommonSource_ShadowDungeonDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowDungeonDefineSheet.GetRecord");

	UCommonSource_ShadowDungeonDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowMonsterPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowMonsterPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowMonsterPointRecord* UCommonSource_ShadowMonsterPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowMonsterPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowMonsterPointSheet.GetRecord");

	UCommonSource_ShadowMonsterPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowPkPointSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowPkPointRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowPkPointRecord* UCommonSource_ShadowPkPointSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPointSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPointSheet.GetRecord");

	UCommonSource_ShadowPkPointSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowPkPenaltySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowPkPenaltyRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowPkPenaltyRecord* UCommonSource_ShadowPkPenaltySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPenaltySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPenaltySheet.GetRecord");

	UCommonSource_ShadowPkPenaltySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShadowPkPointInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShadowPkPointInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShadowPkPointInfoRecord* UCommonSource_ShadowPkPointInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPointInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShadowPkPointInfoSheet.GetRecord");

	UCommonSource_ShadowPkPointInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AbyssFloorBossSpawnSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AbyssFloorBossSpawnRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AbyssFloorBossSpawnRecord* UCommonSource_AbyssFloorBossSpawnSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorBossSpawnSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorBossSpawnSheet.GetRecord");

	UCommonSource_AbyssFloorBossSpawnSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AbyssFloorEliteSpawnInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AbyssFloorEliteSpawnInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AbyssFloorEliteSpawnInfoRecord* UCommonSource_AbyssFloorEliteSpawnInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorEliteSpawnInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorEliteSpawnInfoSheet.GetRecord");

	UCommonSource_AbyssFloorEliteSpawnInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.AbyssFloorEliteSpawnSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_AbyssFloorEliteSpawnRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_AbyssFloorEliteSpawnRecord* UCommonSource_AbyssFloorEliteSpawnSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorEliteSpawnSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.AbyssFloorEliteSpawnSheet.GetRecord");

	UCommonSource_AbyssFloorEliteSpawnSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShopItemInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShopItemInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShopItemInfoRecord* UCommonSource_ShopItemInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShopItemInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShopItemInfoSheet.GetRecord");

	UCommonSource_ShopItemInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShopInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShopInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShopInfoRecord* UCommonSource_ShopInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShopInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShopInfoSheet.GetRecord");

	UCommonSource_ShopInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShopTabInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShopTabInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShopTabInfoRecord* UCommonSource_ShopTabInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShopTabInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShopTabInfoSheet.GetRecord");

	UCommonSource_ShopTabInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ShopItemBuyGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ShopItemBuyGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ShopItemBuyGradeRecord* UCommonSource_ShopItemBuyGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ShopItemBuyGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ShopItemBuyGradeSheet.GetRecord");

	UCommonSource_ShopItemBuyGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillInfoRecord* UCommonSource_SkillInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillInfoSheet.GetRecord");

	UCommonSource_SkillInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PassiveInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PassiveInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PassiveInfoRecord* UCommonSource_PassiveInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PassiveInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PassiveInfoSheet.GetRecord");

	UCommonSource_PassiveInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.EffectInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_EffectInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_EffectInfoRecord* UCommonSource_EffectInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.EffectInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.EffectInfoSheet.GetRecord");

	UCommonSource_EffectInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BuffTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BuffTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BuffTypeRecord* UCommonSource_BuffTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BuffTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BuffTypeSheet.GetRecord");

	UCommonSource_BuffTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BuffInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BuffInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BuffInfoRecord* UCommonSource_BuffInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BuffInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BuffInfoSheet.GetRecord");

	UCommonSource_BuffInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.PlayerSkillSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_PlayerSkillRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_PlayerSkillRecord* UCommonSource_PlayerSkillSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSkillSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.PlayerSkillSheet.GetRecord");

	UCommonSource_PlayerSkillSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillEnchantSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillEnchantRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillEnchantRecord* UCommonSource_SkillEnchantSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillEnchantSheet.GetRecord");

	UCommonSource_SkillEnchantSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.HitAreaAdjustSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_HitAreaAdjustRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_HitAreaAdjustRecord* UCommonSource_HitAreaAdjustSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.HitAreaAdjustSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.HitAreaAdjustSheet.GetRecord");

	UCommonSource_HitAreaAdjustSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillDefineRecord* UCommonSource_SkillDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillDefineSheet.GetRecord");

	UCommonSource_SkillDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.CommonPlayerSkillSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_CommonPlayerSkillRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_CommonPlayerSkillRecord* UCommonSource_CommonPlayerSkillSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.CommonPlayerSkillSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.CommonPlayerSkillSheet.GetRecord");

	UCommonSource_CommonPlayerSkillSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendDefineRecord* UCommonSource_SkillTranscendDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendDefineSheet.GetRecord");

	UCommonSource_SkillTranscendDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendOptionTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendOptionTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendOptionTypeRecord* UCommonSource_SkillTranscendOptionTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendOptionTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendOptionTypeSheet.GetRecord");

	UCommonSource_SkillTranscendOptionTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendInfoRecord* UCommonSource_SkillTranscendInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendInfoSheet.GetRecord");

	UCommonSource_SkillTranscendInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NoneNpcShopInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NoneNpcShopInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NoneNpcShopInfoRecord* UCommonSource_NoneNpcShopInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NoneNpcShopInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NoneNpcShopInfoSheet.GetRecord");

	UCommonSource_NoneNpcShopInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendBuffSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendBuffRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendBuffRecord* UCommonSource_SkillTranscendBuffSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendBuffSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendBuffSheet.GetRecord");

	UCommonSource_SkillTranscendBuffSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendNeedGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendNeedGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendNeedGroupRecord* UCommonSource_SkillTranscendNeedGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendNeedGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendNeedGroupSheet.GetRecord");

	UCommonSource_SkillTranscendNeedGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendSuccessGroupSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendSuccessGroupRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendSuccessGroupRecord* UCommonSource_SkillTranscendSuccessGroupSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendSuccessGroupSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendSuccessGroupSheet.GetRecord");

	UCommonSource_SkillTranscendSuccessGroupSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendResetSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendResetRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendResetRecord* UCommonSource_SkillTranscendResetSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendResetSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendResetSheet.GetRecord");

	UCommonSource_SkillTranscendResetSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendRestoreSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendRestoreRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendRestoreRecord* UCommonSource_SkillTranscendRestoreSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendRestoreSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendRestoreSheet.GetRecord");

	UCommonSource_SkillTranscendRestoreSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.QuestVoiceSoundSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_QuestVoiceSoundRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_QuestVoiceSoundRecord* UCommonSource_QuestVoiceSoundSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.QuestVoiceSoundSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.QuestVoiceSoundSheet.GetRecord");

	UCommonSource_QuestVoiceSoundSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SoundDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SoundDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SoundDefineRecord* UCommonSource_SoundDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SoundDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SoundDefineSheet.GetRecord");

	UCommonSource_SoundDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SoundWaveLengthSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SoundWaveLengthRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SoundWaveLengthRecord* UCommonSource_SoundWaveLengthSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SoundWaveLengthSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SoundWaveLengthSheet.GetRecord");

	UCommonSource_SoundWaveLengthSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SkillTranscendChangeStringDescSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SkillTranscendChangeStringDescRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SkillTranscendChangeStringDescRecord* UCommonSource_SkillTranscendChangeStringDescSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendChangeStringDescSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SkillTranscendChangeStringDescSheet.GetRecord");

	UCommonSource_SkillTranscendChangeStringDescSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.SpawnInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_SpawnInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_SpawnInfoRecord* UCommonSource_SpawnInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.SpawnInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.SpawnInfoSheet.GetRecord");

	UCommonSource_SpawnInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.ObjectDisposeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_ObjectDisposeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_ObjectDisposeRecord* UCommonSource_ObjectDisposeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectDisposeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.ObjectDisposeSheet.GetRecord");

	UCommonSource_ObjectDisposeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.FastSpawnSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_FastSpawnRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_FastSpawnRecord* UCommonSource_FastSpawnSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.FastSpawnSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.FastSpawnSheet.GetRecord");

	UCommonSource_FastSpawnSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.MaxSpawnDelaySheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_MaxSpawnDelayRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_MaxSpawnDelayRecord* UCommonSource_MaxSpawnDelaySheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.MaxSpawnDelaySheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.MaxSpawnDelaySheet.GetRecord");

	UCommonSource_MaxSpawnDelaySheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StartUpStringSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StartUpStringRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StartUpStringRecord* UCommonSource_StartUpStringSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StartUpStringSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StartUpStringSheet.GetRecord");

	UCommonSource_StartUpStringSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.URLSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_URLRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_URLRecord* UCommonSource_URLSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.URLSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.URLSheet.GetRecord");

	UCommonSource_URLSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.TriggerInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_TriggerInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_TriggerInfoRecord* UCommonSource_TriggerInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.TriggerInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.TriggerInfoSheet.GetRecord");

	UCommonSource_TriggerInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.TriggerActionSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_TriggerActionRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_TriggerActionRecord* UCommonSource_TriggerActionSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.TriggerActionSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.TriggerActionSheet.GetRecord");

	UCommonSource_TriggerActionSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.StartConfigSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_StartConfigRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_StartConfigRecord* UCommonSource_StartConfigSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.StartConfigSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.StartConfigSheet.GetRecord");

	UCommonSource_StartConfigSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VipLevelInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VipLevelInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VipLevelInfoRecord* UCommonSource_VipLevelInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VipLevelInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VipLevelInfoSheet.GetRecord");

	UCommonSource_VipLevelInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VipEffectSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VipEffectRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VipEffectRecord* UCommonSource_VipEffectSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VipEffectSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VipEffectSheet.GetRecord");

	UCommonSource_VipEffectSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleInfoRecord* UCommonSource_VehicleInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleInfoSheet.GetRecord");

	UCommonSource_VehicleInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleGradeRecord* UCommonSource_VehicleGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleGradeSheet.GetRecord");

	UCommonSource_VehicleGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.FlySpotSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_FlySpotRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_FlySpotRecord* UCommonSource_FlySpotSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.FlySpotSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.FlySpotSheet.GetRecord");

	UCommonSource_FlySpotSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BattleVehicleInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BattleVehicleInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BattleVehicleInfoRecord* UCommonSource_BattleVehicleInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BattleVehicleInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BattleVehicleInfoSheet.GetRecord");

	UCommonSource_BattleVehicleInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.BattleVehicleTypeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_BattleVehicleTypeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_BattleVehicleTypeRecord* UCommonSource_BattleVehicleTypeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.BattleVehicleTypeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.BattleVehicleTypeSheet.GetRecord");

	UCommonSource_BattleVehicleTypeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleRandomBoxSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleRandomBoxRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleRandomBoxRecord* UCommonSource_VehicleRandomBoxSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleRandomBoxSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleRandomBoxSheet.GetRecord");

	UCommonSource_VehicleRandomBoxSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleDefineRecord* UCommonSource_VehicleDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleDefineSheet.GetRecord");

	UCommonSource_VehicleDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleUpgradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleUpgradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleUpgradeRecord* UCommonSource_VehicleUpgradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleUpgradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleUpgradeSheet.GetRecord");

	UCommonSource_VehicleUpgradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VehicleGaugeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VehicleGaugeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VehicleGaugeRecord* UCommonSource_VehicleGaugeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleGaugeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VehicleGaugeSheet.GetRecord");

	UCommonSource_VehicleGaugeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VoidSummonerInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VoidSummonerInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VoidSummonerInfoRecord* UCommonSource_VoidSummonerInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonerInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonerInfoSheet.GetRecord");

	UCommonSource_VoidSummonerInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VoidSummonsMonsterSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VoidSummonsMonsterRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VoidSummonsMonsterRecord* UCommonSource_VoidSummonsMonsterSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonsMonsterSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonsMonsterSheet.GetRecord");

	UCommonSource_VoidSummonsMonsterSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VoidSummonsMonsterDamagePercentSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VoidSummonsMonsterDamagePercentRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VoidSummonsMonsterDamagePercentRecord* UCommonSource_VoidSummonsMonsterDamagePercentSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonsMonsterDamagePercentSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonsMonsterDamagePercentSheet.GetRecord");

	UCommonSource_VoidSummonsMonsterDamagePercentSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VoidSummonerDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VoidSummonerDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VoidSummonerDefineRecord* UCommonSource_VoidSummonerDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonerDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VoidSummonerDefineSheet.GetRecord");

	UCommonSource_VoidSummonerDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.VolumeAreaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_VolumeAreaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_VolumeAreaInfoRecord* UCommonSource_VolumeAreaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.VolumeAreaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.VolumeAreaInfoSheet.GetRecord");

	UCommonSource_VolumeAreaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NaviVolumeAreaInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NaviVolumeAreaInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NaviVolumeAreaInfoRecord* UCommonSource_NaviVolumeAreaInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NaviVolumeAreaInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NaviVolumeAreaInfoSheet.GetRecord");

	UCommonSource_NaviVolumeAreaInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.NaviVolumeAreaVerticesInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_NaviVolumeAreaVerticesInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_NaviVolumeAreaVerticesInfoRecord* UCommonSource_NaviVolumeAreaVerticesInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.NaviVolumeAreaVerticesInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.NaviVolumeAreaVerticesInfoSheet.GetRecord");

	UCommonSource_NaviVolumeAreaVerticesInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeaponShapeInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeaponShapeInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeaponShapeInfoRecord* UCommonSource_WeaponShapeInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeInfoSheet.GetRecord");

	UCommonSource_WeaponShapeInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeaponShapeGradeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeaponShapeGradeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeaponShapeGradeRecord* UCommonSource_WeaponShapeGradeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeGradeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeGradeSheet.GetRecord");

	UCommonSource_WeaponShapeGradeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeaponShapeEffectChangeSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeaponShapeEffectChangeRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeaponShapeEffectChangeRecord* UCommonSource_WeaponShapeEffectChangeSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeEffectChangeSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeEffectChangeSheet.GetRecord");

	UCommonSource_WeaponShapeEffectChangeSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WeaponShapeDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WeaponShapeDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WeaponShapeDefineRecord* UCommonSource_WeaponShapeDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WeaponShapeDefineSheet.GetRecord");

	UCommonSource_WeaponShapeDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldBossInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldBossInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldBossInfoRecord* UCommonSource_WorldBossInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossInfoSheet.GetRecord");

	UCommonSource_WorldBossInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldBossDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldBossDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldBossDefineRecord* UCommonSource_WorldBossDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossDefineSheet.GetRecord");

	UCommonSource_WorldBossDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldBossRewardSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldBossRewardRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldBossRewardRecord* UCommonSource_WorldBossRewardSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossRewardSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldBossRewardSheet.GetRecord");

	UCommonSource_WorldBossRewardSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldDungeonInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldDungeonInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldDungeonInfoRecord* UCommonSource_WorldDungeonInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonInfoSheet.GetRecord");

	UCommonSource_WorldDungeonInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldDungeonDefineSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldDungeonDefineRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldDungeonDefineRecord* UCommonSource_WorldDungeonDefineSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonDefineSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonDefineSheet.GetRecord");

	UCommonSource_WorldDungeonDefineSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldDungeonMapSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldDungeonMapRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldDungeonMapRecord* UCommonSource_WorldDungeonMapSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonMapSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonMapSheet.GetRecord");

	UCommonSource_WorldDungeonMapSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonSource.WorldDungeonBuffInfoSheet.GetRecord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonSource_WorldDungeonBuffInfoRecord* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonSource_WorldDungeonBuffInfoRecord* UCommonSource_WorldDungeonBuffInfoSheet::GetRecord(int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonBuffInfoSheet.GetRecord");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CommonSource.WorldDungeonBuffInfoSheet.GetRecord");

	UCommonSource_WorldDungeonBuffInfoSheet_GetRecord_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
