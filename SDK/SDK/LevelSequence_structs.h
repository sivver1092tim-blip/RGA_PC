#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// 0x0002
struct FLevelSequence_LevelSequenceCameraSettings
{
	bool                                               bOverrideAspectRatioAxisConstraint;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAspectRatioAxisConstraint> AspectRatioAxisConstraint;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequence_LevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequence_LevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	struct FSoftObjectPath                             ExternalObjectPath;                                       // 0x0010(0x0018) (ZeroConstructor)
	struct FString                                     ObjectPath;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequence_LevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequence_LevelSequenceBindingReference> References;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
struct FLevelSequence_LevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequence_LevelSequenceBindingReferenceArray> BindingIdToReferences;                                    // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty LevelSequence.LevelSequenceBindingReferences.AnimSequenceInstances
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequence_LevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C
struct FLevelSequence_LevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FFrameRate                                  FrameRate;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00B8
struct FLevelSequence_LevelSequencePlayerSnapshot
{
	struct FString                                     MasterName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         MasterTime;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         SourceTime;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     CurrentShotName;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         CurrentShotLocalTime;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         CurrentShotSourceTime;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     SourceTimecode;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LevelSequence.LevelSequencePlayerSnapshot.CameraComponent
	struct FLevelSequence_LevelSequenceSnapshotSettings Settings;                                                 // 0x0098(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class ULevelSequence_LevelSequence*                ActiveShot;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMovieScene_MovieSceneSequenceID            ShotID;                                                   // 0x00B0(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FLevelSequence_BoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequence_LevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
