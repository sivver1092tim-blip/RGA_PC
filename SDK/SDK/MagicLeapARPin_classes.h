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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (0x0320 - 0x01F0)
class UMagicLeapARPin_MagicLeapARPinComponent : public UEngine_SceneComponent
{
public:
	struct FString                                     ObjectUID;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UserIndex;                                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapAutoPinType AutoPinType;                                              // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPinActor;                                          // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0206(0x0002) MISSED OFFSET
	class UClass*                                      PinDataClass;                                             // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinned;                                 // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinLost;                                // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGuid                                       PinnedCFUID;                                              // 0x0230(0x0010) (ZeroConstructor, IsPlainOldData)
	class UEngine_SceneComponent*                      PinnedSceneComponent;                                     // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMagicLeapARPin_MagicLeapARPinSaveGame*      PinData;                                                  // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0250(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}


	void UnPin();
	bool PinSceneComponent(class UEngine_SceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AEngine_Actor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinnedPinID(struct FGuid* PinID);
	class UMagicLeapARPin_MagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);
};


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPin_MagicLeapARPinFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsTrackerValid();
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int* count);
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID);
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins);
	bool STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError STATIC_DestroyTracker();
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError STATIC_CreateTracker();
};


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UMagicLeapARPin_MagicLeapARPinSaveGame : public UEngine_SaveGame
{
public:
	struct FGuid                                       PinnedID;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentWorldTransform;                                  // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData)
	struct FTransform                                  PinTransform;                                             // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
