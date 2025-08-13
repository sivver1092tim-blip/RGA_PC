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

// Function GameplayTasks.GameplayTask.ReadyForActivation
struct UGameplayTasks_GameplayTask_ReadyForActivation_Params
{
};

// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
struct UGameplayTasks_GameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTask.EndTask
struct UGameplayTasks_GameplayTask_EndTask_Params
{
};

// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTasks_GameplayTask_SpawnActor_SpawnActor_Params
{
	TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnlyOnAuthority;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTasks_GameplayTask_SpawnActor*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTasks_GameplayTask_SpawnActor_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTasks_GameplayTask_SpawnActor_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTasks_GameplayTask_WaitDelay_TaskWaitDelay_Params
{
	TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTasks_GameplayTask_WaitDelay*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
struct UGameplayTasks_GameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct UGameplayTasks_GameplayTask_ClaimResource_ClaimResources_Params
{
	TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> InTaskOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ResourceClasses;                                          // (Parm, ZeroConstructor)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTasks_GameplayTask_ClaimResource*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct UGameplayTasks_GameplayTask_ClaimResource_ClaimResource_Params
{
	TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> InTaskOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ResourceClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTasks_GameplayTask_ClaimResource*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct UGameplayTasks_GameplayTasksComponent_OnRep_SimulatedTasks_Params
{
};

// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasks_GameplayTasksComponent_K2_RunGameplayTask_Params
{
	TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTasks_GameplayTask*                 Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AdditionalRequiredResources;                              // (Parm, ZeroConstructor)
	TArray<class UClass*>                              AdditionalClaimedResources;                               // (Parm, ZeroConstructor)
	FGameplayTasks_GameplayTasks_EGameplayTaskRunResult ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
