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

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_TwoBoneIK_Params
{
	struct FVector                                     RootPos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointPos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Effector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutJointPos;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutEndPos;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStretching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartStretchRatio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_StartProfilingTimer_Params
{
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_LookAt_Params
{
	struct FTransform                                  CurrentTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     targetPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LookAtVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUpVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampConeInDegree;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_EndProfilingTimer_Params
{
	bool                                               bLog;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LogPrefix;                                                // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
	class UEngine_SkeletalMeshComponent*               Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameA;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpaceA;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameB;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpaceB;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
	class UEngine_SkeletalMeshComponent*               Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameFrom;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameTo;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReferenceSocketOrBone;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetInBoneSpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimGraphRuntime_PositionHistory           History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EEasingFuncType EasingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_RuntimeFloatCurve                   CustomCurve;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UAnimGraphRuntime_KismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimGraphRuntime_PositionHistory           History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UAnimGraphRuntime_PlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_BranchingPointNotifyPayload         BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UAnimGraphRuntime_PlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_BranchingPointNotifyPayload         BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UAnimGraphRuntime_PlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UEngine_AnimMontage*                         Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UAnimGraphRuntime_PlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UEngine_AnimMontage*                         Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UAnimGraphRuntime_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class UEngine_SkeletalMeshComponent*               InSkeletalMeshComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_AnimMontage*                         MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimGraphRuntime_PlayMontageCallbackProxy*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
