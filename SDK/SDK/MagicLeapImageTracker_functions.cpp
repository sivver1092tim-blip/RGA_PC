
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

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture2D*       ImageTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapImageTracker_MagicLeapImageTrackerComponent::SetTargetAsync(class UEngine_Texture2D* ImageTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	UMagicLeapImageTracker_MagicLeapImageTrackerComponent_SetTargetAsync_Params params;
	params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapImageTracker_MagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	UMagicLeapImageTracker_MagicLeapImageTrackerComponent_RemoveTargetAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxSimultaneousTargets         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary::STATIC_SetMaxSimultaneousTargets(int MaxSimultaneousTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");

	UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params params;
	params.MaxSimultaneousTargets = MaxSimultaneousTargets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary::STATIC_IsImageTrackingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");

	UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary::STATIC_GetMaxSimultaneousTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");

	UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary::STATIC_EnableImageTracking(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");

	UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
