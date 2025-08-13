
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

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetFixationComfort
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapEyeTracker_MagicLeapFixationComfort FixationComfort                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary::STATIC_GetFixationComfort(struct FMagicLeapEyeTracker_MagicLeapFixationComfort* FixationComfort)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetFixationComfort");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetFixationComfort");

	UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetFixationComfort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FixationComfort != nullptr)
		*FixationComfort = params.FixationComfort;

	return params.ReturnValue;
}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapEyeTracker_MagicLeapEyeBlinkState BlinkState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary::STATIC_GetEyeBlinkState(struct FMagicLeapEyeTracker_MagicLeapEyeBlinkState* BlinkState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState");

	UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlinkState != nullptr)
		*BlinkState = params.BlinkState;

	return params.ReturnValue;
}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FMagicLeapEyeTracker_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapEyeTracker_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary::STATIC_GetCalibrationStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus");

	UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Params params;

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
