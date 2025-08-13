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

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
struct UAnimationSharing_AnimSharingStateInstance_GetInstancedActors_Params
{
	TArray<class AEngine_Actor*>                       Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
struct UAnimationSharing_AnimationSharingManager_RegisterActorWithSkeletonBP_Params
{
	class AEngine_Actor*                               InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_Skeleton*                            SharingSkeleton;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
struct UAnimationSharing_AnimationSharingManager_GetAnimationSharingManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharing_AnimationSharingManager*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
struct UAnimationSharing_AnimationSharingManager_CreateAnimationSharingManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharing_AnimationSharingSetup*     Setup;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
struct UAnimationSharing_AnimationSharingManager_AnimationSharingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
struct UAnimationSharing_AnimationSharingStateProcessor_ProcessActorState_Params
{
	int                                                OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      currentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OnDemandState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldProcess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
struct UAnimationSharing_AnimationSharingStateProcessor_GetAnimationStateEnum_Params
{
	class UEnum*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
