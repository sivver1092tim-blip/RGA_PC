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

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
struct UMagicLeapAR_LuminARSessionFunctionLibrary_StartLuminARSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_LatentActionInfo                    LatentInfo;                                               // (Parm)
	class UMagicLeapAR_LuminARSessionConfig*           Configuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
struct UMagicLeapAR_LuminARFrameFunctionLibrary_LuminARLineTrace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FAugmentedReality_ARTraceResult>     OutHitResults;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
struct UMagicLeapAR_LuminARFrameFunctionLibrary_GetTrackingState_Params
{
	FMagicLeapAR_MagicLeapAR_ELuminARTrackingState     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation
struct UMagicLeapAR_LuminARFrameFunctionLibrary_GetLightEstimation_Params
{
	struct FMagicLeapAR_LuminARLightEstimate           OutLightEstimate;                                         // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
