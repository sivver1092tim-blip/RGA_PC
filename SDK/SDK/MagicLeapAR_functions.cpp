
#include "../SDK.h"
#include "stdafx.h"
// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_LatentActionInfo LatentInfo                     (Parm)
// class UMagicLeapAR_LuminARSessionConfig* Configuration                  (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapAR_LuminARSessionFunctionLibrary::STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, class UMagicLeapAR_LuminARSessionConfig* Configuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession");

	UMagicLeapAR_LuminARSessionFunctionLibrary_StartLuminARSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FAugmentedReality_ARTraceResult> OutHitResults                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapAR_LuminARFrameFunctionLibrary::STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FAugmentedReality_ARTraceResult>* OutHitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace");

	UMagicLeapAR_LuminARFrameFunctionLibrary_LuminARLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FMagicLeapAR_MagicLeapAR_ELuminARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapAR_MagicLeapAR_ELuminARTrackingState UMagicLeapAR_LuminARFrameFunctionLibrary::STATIC_GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState");

	UMagicLeapAR_LuminARFrameFunctionLibrary_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapAR_LuminARLightEstimate OutLightEstimate               (Parm, OutParm)

void UMagicLeapAR_LuminARFrameFunctionLibrary::STATIC_GetLightEstimation(struct FMagicLeapAR_LuminARLightEstimate* OutLightEstimate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation");

	UMagicLeapAR_LuminARFrameFunctionLibrary_GetLightEstimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLightEstimate != nullptr)
		*OutLightEstimate = params.OutLightEstimate;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
