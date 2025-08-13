
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

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AEngine_Actor*>   Actors                         (Parm, OutParm, ZeroConstructor)

void UAnimationSharing_AnimSharingStateInstance::GetInstancedActors(TArray<class AEngine_Actor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	UAnimationSharing_AnimSharingStateInstance_GetInstancedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_Skeleton*        SharingSkeleton                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimationSharing_AnimationSharingManager::RegisterActorWithSkeletonBP(class AEngine_Actor* InActor, class UEngine_Skeleton* SharingSkeleton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	UAnimationSharing_AnimationSharingManager_RegisterActorWithSkeletonBP_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharing_AnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationSharing_AnimationSharingManager* UAnimationSharing_AnimationSharingManager::STATIC_GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	UAnimationSharing_AnimationSharingManager_GetAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharing_AnimationSharingSetup* Setup                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationSharing_AnimationSharingManager::STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharing_AnimationSharingSetup* Setup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	UAnimationSharing_AnimationSharingManager_CreateAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationSharing_AnimationSharingManager::STATIC_AnimationSharingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	UAnimationSharing_AnimationSharingManager_AnimationSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  currentState                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OnDemandState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimationSharing_AnimationSharingStateProcessor::ProcessActorState(class AEngine_Actor* InActor, unsigned char currentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	UAnimationSharing_AnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.currentState = currentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;
}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEnum* UAnimationSharing_AnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	UAnimationSharing_AnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

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
