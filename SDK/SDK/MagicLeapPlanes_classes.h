#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0040 (0x0230 - 0x01F0)
class UMagicLeapPlanes_MagicLeapPlanesComponent : public UEngine_SceneComponent
{
public:
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> QueryFlags;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UEngine_BoxComponent*                        SearchVolume;                                             // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHolePerimeter;                                         // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaneArea;                                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlanesQueryResult;                                      // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		return ptr;
	}


	bool RequestPlanesAsync();
};


// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		return ptr;
	}


	void STATIC_ReorderPlaneFlags(TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	void STATIC_RemoveFlagsNotInQuery(TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags);
	bool STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanes_MagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_IsTrackerValid();
	struct FTransform STATIC_GetContentScale(class AEngine_Actor* ContentActor, const struct FMagicLeapPlanes_MagicLeapPlaneResult& PlaneResult);
	bool STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
