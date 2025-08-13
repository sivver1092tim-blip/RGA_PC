
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameplayTasks.GameplayTask.ReadyForActivation
// (Final, Native, Public, BlueprintCallable)

void UGameplayTasks_GameplayTask::ReadyForActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	UGameplayTasks_GameplayTask_ReadyForActivation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTasks_GameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	UGameplayTasks_GameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayTasks.GameplayTask.EndTask
// (Final, Native, Public, BlueprintCallable)

void UGameplayTasks_GameplayTask::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	UGameplayTasks_GameplayTask_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnOnlyOnAuthority          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTasks_GameplayTask_SpawnActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTasks_GameplayTask_SpawnActor* UGameplayTasks_GameplayTask_SpawnActor::STATIC_SpawnActor(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	UGameplayTasks_GameplayTask_SpawnActor_SpawnActor_Params params;
	params.TaskOwner = TaskOwner;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTasks_GameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AEngine_Actor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	UGameplayTasks_GameplayTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTasks_GameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AEngine_Actor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	UGameplayTasks_GameplayTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTasks_GameplayTask_WaitDelay* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTasks_GameplayTask_WaitDelay* UGameplayTasks_GameplayTask_WaitDelay::STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	UGameplayTasks_GameplayTask_WaitDelay_TaskWaitDelay_Params params;
	params.TaskOwner = TaskOwner;
	params.Time = Time;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTasks_GameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	UGameplayTasks_GameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> InTaskOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ResourceClasses                (Parm, ZeroConstructor)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTasks_GameplayTask_ClaimResource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTasks_GameplayTask_ClaimResource* UGameplayTasks_GameplayTask_ClaimResource::STATIC_ClaimResources(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");

	UGameplayTasks_GameplayTask_ClaimResource_ClaimResources_Params params;
	params.InTaskOwner = InTaskOwner;
	params.ResourceClasses = ResourceClasses;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> InTaskOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Priority                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTasks_GameplayTask_ClaimResource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTasks_GameplayTask_ClaimResource* UGameplayTasks_GameplayTask_ClaimResource::STATIC_ClaimResource(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");

	UGameplayTasks_GameplayTask_ClaimResource_ClaimResource_Params params;
	params.InTaskOwner = InTaskOwner;
	params.ResourceClass = ResourceClass;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (Final, Native, Public)

void UGameplayTasks_GameplayTasksComponent::OnRep_SimulatedTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	UGameplayTasks_GameplayTasksComponent_OnRep_SimulatedTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTasks_GameplayTask* Task                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AdditionalRequiredResources    (Parm, ZeroConstructor)
// TArray<class UClass*>          AdditionalClaimedResources     (Parm, ZeroConstructor)
// FGameplayTasks_GameplayTasks_EGameplayTaskRunResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FGameplayTasks_GameplayTasks_EGameplayTaskRunResult UGameplayTasks_GameplayTasksComponent::STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, class UGameplayTasks_GameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	UGameplayTasks_GameplayTasksComponent_K2_RunGameplayTask_Params params;
	params.TaskOwner = TaskOwner;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
