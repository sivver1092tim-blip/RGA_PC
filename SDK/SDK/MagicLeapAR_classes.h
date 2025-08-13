#pragma once
// Name: , Version: 1.0.0

#include "MagicLeapPlanes_structs.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapAR.LuminARUObjectManager
// 0x0100 (0x0128 - 0x0028)
class UMagicLeapAR_LuminARUObjectManager : public UObject
{
public:
	TArray<class UAugmentedReality_ARPin*>             AllAnchors;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0038(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		return ptr;
	}

};


// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAR_LuminARSessionFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}


	void STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, class UMagicLeapAR_LuminARSessionConfig* Configuration);
};


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAR_LuminARFrameFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}


	bool STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FAugmentedReality_ARTraceResult>* OutHitResults);
	FMagicLeapAR_MagicLeapAR_ELuminARTrackingState STATIC_GetTrackingState();
	void STATIC_GetLightEstimation(struct FMagicLeapAR_LuminARLightEstimate* OutLightEstimate);
};


// Class MagicLeapAR.LuminARSessionConfig
// 0x0030 (0x00D8 - 0x00A8)
class UMagicLeapAR_LuminARSessionConfig : public UAugmentedReality_ARSessionConfig
{
public:
	int                                                MaxPlaneQueryResults;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPlaneArea;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bArbitraryOrientationPlaneDetection;                      // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector                                     PlaneSearchExtents;                                       // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	bool                                               bDiscardZeroExtentPlanes;                                 // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
