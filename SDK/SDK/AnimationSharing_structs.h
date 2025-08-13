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

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018
struct FAnimationSharing_AnimationSetup
{
	class UEngine_AnimSequence*                        AnimSequence;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBlueprint;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_PerPlatformInt                      NumRandomizedInstances;                                   // 0x0010(0x0004) (Edit)
	struct FEngine_PerPlatformBool                     Enabled;                                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
struct FAnimationSharing_AnimationStateEntry
{
	unsigned char                                      State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAnimationSharing_AnimationSetup>    AnimationSetups;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bOnDemand;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              BlendTime;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnToPreviousState;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNextState;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextState;                                                // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FEngine_PerPlatformInt                      MaximumNumberOfConcurrentInstances;                       // 0x0024(0x0004) (Edit)
	float                                              WiggleTimePercentage;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresCurves;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038
struct FAnimationSharing_PerSkeletonAnimationSharingSetup
{
	class UEngine_Skeleton*                            Skeleton;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_SkeletalMesh*                        SkeletalMesh;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BlendAnimBlueprint;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AdditiveAnimBlueprint;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateProcessorClass;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimationSharing_AnimationStateEntry> AnimationStates;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
struct FAnimationSharing_AnimationSharingScalability
{
	struct FEngine_PerPlatformBool                     UseBlendTransitions;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FEngine_PerPlatformFloat                    BlendSignificanceValue;                                   // 0x0004(0x0004) (Edit)
	struct FEngine_PerPlatformInt                      MaximumNumberConcurrentBlends;                            // 0x0008(0x0004) (Edit)
	struct FEngine_PerPlatformFloat                    TickSignificanceValue;                                    // 0x000C(0x0004) (Edit)
};

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0030 - 0x0028)
struct FAnimationSharing_TickAnimationSharingFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
