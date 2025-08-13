
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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UEyeTracker_EyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	UEyeTracker_EyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEyeTracker_EyeTrackerFunctionLibrary::STATIC_IsStereoGazeDataAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	UEyeTracker_EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEyeTracker_EyeTrackerFunctionLibrary::STATIC_IsEyeTrackerConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	UEyeTracker_EyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTracker_EyeTrackerStereoGazeData OutGazeData                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEyeTracker_EyeTrackerFunctionLibrary::STATIC_GetStereoGazeData(struct FEyeTracker_EyeTrackerStereoGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	UEyeTracker_EyeTrackerFunctionLibrary_GetStereoGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTracker_EyeTrackerGazeData OutGazeData                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEyeTracker_EyeTrackerFunctionLibrary::STATIC_GetGazeData(struct FEyeTracker_EyeTrackerGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	UEyeTracker_EyeTrackerFunctionLibrary_GetGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
