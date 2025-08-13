
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

// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BlackboardData* BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_BlackboardComponent* BlackboardComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAIModule_AIController::UseBlackboard(class UAIModule_BlackboardData* BlackboardAsset, class UAIModule_BlackboardComponent** BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	AAIModule_AIController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;

	return params.ReturnValue;
}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	AAIModule_AIController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_PathFollowingComponent* NewPFComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAIModule_AIController::SetPathFollowingComponent(class UAIModule_PathFollowingComponent* NewPFComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	AAIModule_AIController_SetPathFollowingComponent_Params params;
	params.NewPFComponent = NewPFComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::SetMoveBlockDetection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	AAIModule_AIController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_BehaviorTree*  BTAsset                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAIModule_AIController::RunBehaviorTree(class UAIModule_BehaviorTree* BTAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	AAIModule_AIController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIModule_BlackboardComponent* BlackboardComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAIModule_BlackboardData* BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::OnUsingBlackBoard(class UAIModule_BlackboardComponent* BlackboardComp, class UAIModule_BlackboardData* BlackboardAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	AAIModule_AIController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayTasks_GameplayResourceSet NewlyClaimed                   (Parm)
// struct FGameplayTasks_GameplayResourceSet FreshlyReleased                (Parm)

void AAIModule_AIController::OnGameplayTaskResourcesClaimed(const struct FGameplayTasks_GameplayResourceSet& NewlyClaimed, const struct FGameplayTasks_GameplayResourceSet& FreshlyReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	AAIModule_AIController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 dest                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> AAIModule_AIController::MoveToLocation(const struct FVector& dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	AAIModule_AIController_MoveToLocation_Params params;
	params.dest = dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Goal                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> AAIModule_AIController::MoveToActor(class AEngine_Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	AAIModule_AIController_MoveToActor_Params params;
	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::K2_SetFocus(class AEngine_Actor* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	AAIModule_AIController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FP                             (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	AAIModule_AIController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)

void AAIModule_AIController::K2_ClearFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	AAIModule_AIController_K2_ClearFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAIModule_AIController::HasPartialPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	AAIModule_AIController_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIModule_PathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIModule_PathFollowingComponent* AAIModule_AIController::GetPathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	AAIModule_AIController_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FAIModule_AIModule_EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPathFollowingStatus> AAIModule_AIController::GetMoveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	AAIModule_AIController_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAIModule_AIController::GetImmediateMoveDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	AAIModule_AIController_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_Actor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Actor* AAIModule_AIController::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	AAIModule_AIController_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_Actor*           Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAIModule_AIController::GetFocalPointOnActor(class AEngine_Actor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	AAIModule_AIController_GetFocalPointOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAIModule_AIController::GetFocalPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	AAIModule_AIController_GetFocalPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_AIPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIModule_AIPerceptionComponent* AAIModule_AIController::GetAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	AAIModule_AIController_GetAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_AIController::ClaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	AAIModule_AIController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_NavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	AAIModule_NavLinkProxy_SetSmartLinkEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Agent                          (Parm, ZeroConstructor, IsPlainOldData)

void AAIModule_NavLinkProxy::ResumePathFollowing(class AEngine_Actor* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	AAIModule_NavLinkProxy_ResumePathFollowing_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           Agent                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAIModule_NavLinkProxy::ReceiveSmartLinkReached(class AEngine_Actor* Agent, const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	AAIModule_NavLinkProxy_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAIModule_NavLinkProxy::IsSmartLinkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	AAIModule_NavLinkProxy_IsSmartLinkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAIModule_NavLinkProxy::HasMovingAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	AAIModule_NavLinkProxy_HasMovingAgents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PathFollowingComponent::OnNavDataRegistered(class ANavigationSystem_NavigationData* NavData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	UAIModule_PathFollowingComponent_OnNavDataRegistered_Params params;
	params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AEngine_Actor*           SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_HitResult       Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAIModule_PathFollowingComponent::OnActorBump(class AEngine_Actor* SelfActor, class AEngine_Actor* OtherActor, const struct FVector& NormalImpulse, const struct FEngine_HitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	UAIModule_PathFollowingComponent_OnActorBump_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAIModule_PathFollowingComponent::GetPathDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	UAIModule_PathFollowingComponent_GetPathDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FAIModule_AIModule_EPathFollowingAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPathFollowingAction> UAIModule_PathFollowingComponent::GetPathActionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	UAIModule_PathFollowingComponent_GetPathActionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIModule_AIRequestID   RequestID                      (Parm)
// TEnumAsByte<FAIModule_AIModule_EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIModule_AIRequestID& RequestID, TEnumAsByte<FAIModule_AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	UAIModule_AIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionComponent::SetSenseEnabled(class UClass* SenseClass, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	UAIModule_AIPerceptionComponent_SetSenseEnabled_Params params;
	params.SenseClass = SenseClass;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)

void UAIModule_AIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	UAIModule_AIPerceptionComponent_RequestStimuliListenerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionComponent::OnOwnerEndPlay(class AEngine_Actor* Actor, TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	UAIModule_AIPerceptionComponent_OnOwnerEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AEngine_Actor*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UAIModule_AIPerceptionComponent::GetPerceivedHostileActors(TArray<class AEngine_Actor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	UAIModule_AIPerceptionComponent_GetPerceivedHostileActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AEngine_Actor*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UAIModule_AIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	UAIModule_AIPerceptionComponent_GetPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AEngine_Actor*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UAIModule_AIPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	UAIModule_AIPerceptionComponent_GetKnownPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AEngine_Actor*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UAIModule_AIPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	UAIModule_AIPerceptionComponent_GetCurrentlyPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_ActorPerceptionBlueprintInfo Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_AIPerceptionComponent::GetActorsPerception(class AEngine_Actor* Actor, struct FAIModule_ActorPerceptionBlueprintInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	UAIModule_AIPerceptionComponent_GetActorsPerception_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	UAIModule_AIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)

void UAIModule_AIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	UAIModule_AIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)

void UAIModule_AIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	UAIModule_AIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	UAIModule_AIPerceptionStimuliSourceComponent_RegisterForSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_AnimInstance*    AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UEngine_AnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	UAIModule_AIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_BehaviorTree*  BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Pawn* UAIModule_AIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UAIModule_BehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	UAIModule_AIBlueprintHelperLibrary_SpawnAIFromClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bNoCollisionFail = bNoCollisionFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Controller*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAIModule_AIBlueprintHelperLibrary::STATIC_SimpleMoveToLocation(class AEngine_Controller* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	UAIModule_AIBlueprintHelperLibrary_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Controller*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIBlueprintHelperLibrary::STATIC_SimpleMoveToActor(class AEngine_Controller* Controller, class AEngine_Actor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	UAIModule_AIBlueprintHelperLibrary_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Pawn*            Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Message                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 MessageSource                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIBlueprintHelperLibrary::STATIC_SendAIMessage(class AEngine_Pawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	UAIModule_AIBlueprintHelperLibrary_SendAIMessage_Params params;
	params.Target = Target;
	params.Message = Message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_AnimInstance*    AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UEngine_AnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	UAIModule_AIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_AIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	UAIModule_AIBlueprintHelperLibrary_IsValidAIRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_AIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	UAIModule_AIBlueprintHelperLibrary_IsValidAILocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DirectionVector                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_AIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct FVector& DirectionVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	UAIModule_AIBlueprintHelperLibrary_IsValidAIDirection_Params params;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEngine_Controller*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystem_NavigationPath* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationSystem_NavigationPath* UAIModule_AIBlueprintHelperLibrary::STATIC_GetCurrentPath(class AEngine_Controller* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	UAIModule_AIBlueprintHelperLibrary_GetCurrentPath_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_BlackboardComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIModule_BlackboardComponent* UAIModule_AIBlueprintHelperLibrary::STATIC_GetBlackboard(class AEngine_Actor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	UAIModule_AIBlueprintHelperLibrary_GetBlackboard_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEngine_Actor*           ControlledActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AAIModule_AIController*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAIModule_AIController* UAIModule_AIBlueprintHelperLibrary::STATIC_GetAIController(class AEngine_Actor* ControlledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	UAIModule_AIBlueprintHelperLibrary_GetAIController_Params params;
	params.ControlledActor = ControlledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIModule_AIAsyncTaskBlueprintProxy* UAIModule_AIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class AEngine_Pawn* Pawn, const struct FVector& Destination, class AEngine_Actor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	UAIModule_AIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AISenseEvent*  PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAIModule_AISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	UAIModule_AIPerceptionSystem_ReportPerceptionEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_AISenseEvent*  PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionSystem::ReportEvent(class UAIModule_AISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	UAIModule_AIPerceptionSystem_ReportEvent_Params params;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_AIPerceptionSystem::STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AEngine_Actor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	UAIModule_AIPerceptionSystem_RegisterPerceptionStimuliSource_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sense = Sense;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AEngine_Actor* Actor, TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	UAIModule_AIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_AIStimulus    Stimulus                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAIModule_AIPerceptionSystem::STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIModule_AIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	UAIModule_AIPerceptionSystem_GetSenseClassForStimulus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UAIModule_AISenseEvent*> EventsToProcess                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_AISense_Blueprint::OnUpdate(TArray<class UAIModule_AISenseEvent*> EventsToProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	UAIModule_AISense_Blueprint_OnUpdate_Params params;
	params.EventsToProcess = EventsToProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AIPerceptionComponent* PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIModule_AISense_Blueprint::OnListenerUpdated(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	UAIModule_AISense_Blueprint_OnListenerUpdated_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AIPerceptionComponent* PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIModule_AISense_Blueprint::OnListenerUnregistered(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	UAIModule_AISense_Blueprint_OnListenerUnregistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AIPerceptionComponent* PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAIModule_AISense_Blueprint::OnListenerRegistered(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	UAIModule_AISense_Blueprint_OnListenerRegistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AISense_Blueprint::K2_OnNewPawn(class AEngine_Pawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	UAIModule_AISense_Blueprint_K2_OnNewPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIModule_AIPerceptionComponent*> ListenerComponents             (Parm, OutParm, ZeroConstructor)

void UAIModule_AISense_Blueprint::GetAllListenerComponents(TArray<class UAIModule_AIPerceptionComponent*>* ListenerComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	UAIModule_AISense_Blueprint_GetAllListenerComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;
}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AEngine_Actor*>   ListenerActors                 (Parm, OutParm, ZeroConstructor)

void UAIModule_AISense_Blueprint::GetAllListenerActors(TArray<class AEngine_Actor*>* ListenerActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	UAIModule_AISense_Blueprint_GetAllListenerActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;
}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EventLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AISense_Damage::STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AEngine_Actor* DamagedActor, class AEngine_Actor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	UAIModule_AISense_Damage_ReportDamageEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DamagedActor = DamagedActor;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AISense_Hearing::STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AEngine_Actor* Instigator, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	UAIModule_AISense_Hearing_ReportNoiseEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.Instigator = Instigator;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Pawn*            Requestor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AISense_Prediction::STATIC_RequestPawnPredictionEvent(class AEngine_Pawn* Requestor, class AEngine_Actor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	UAIModule_AISense_Prediction_RequestPawnPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIModule_AIController*  Requestor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_AISense_Prediction::STATIC_RequestControllerPredictionEvent(class AAIModule_AIController* Requestor, class AEngine_Actor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	UAIModule_AISense_Prediction_RequestControllerPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)

void UAIModule_AISystem::AILoggingVerbose()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	UAIModule_AISystem_AILoggingVerbose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)

void UAIModule_AISystem::AIIgnorePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	UAIModule_AISystem_AIIgnorePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIModule_AIController*  Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GoalLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           GoalActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> StopOnOverlap                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseContinuosGoalTracking      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> ProjectGoalOnNavigation        (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AITask_MoveTo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIModule_AITask_MoveTo* UAIModule_AITask_MoveTo::STATIC_AIMoveTo(class AAIModule_AIController* Controller, const struct FVector& GoalLocation, class AEngine_Actor* GoalActor, float AcceptanceRadius, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> ProjectGoalOnNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	UAIModule_AITask_MoveTo_AIMoveTo_Params params;
	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;
	params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
	params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIModule_AIController*  Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_EnvQuery*      QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_AITask_RunEQS* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIModule_AITask_RunEQS* UAIModule_AITask_RunEQS::STATIC_RunEQS(class AAIModule_AIController* Controller, class UAIModule_EnvQuery* QueryTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	UAIModule_AITask_RunEQS_RunEQS_Params params;
	params.Controller = Controller;
	params.QueryTemplate = QueryTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 reason                         (Parm, ZeroConstructor)

void UAIModule_BrainComponent::StopLogic(const struct FString& reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	UAIModule_BrainComponent_StopLogic_Params params;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)

void UAIModule_BrainComponent::RestartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	UAIModule_BrainComponent_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BrainComponent::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	UAIModule_BrainComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BrainComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	UAIModule_BrainComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTags_GameplayTag InjectTag                      (Parm)
// class UAIModule_BehaviorTree*  BehaviorAsset                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTags_GameplayTag& InjectTag, class UAIModule_BehaviorTree* BehaviorAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	UAIModule_BehaviorTreeComponent_SetDynamicSubtree_Params params;
	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTags_GameplayTag CooldownTag                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_BehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTags_GameplayTag& CooldownTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	UAIModule_BehaviorTreeComponent_GetTagCooldownEndTime_Params params;
	params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTags_GameplayTag CooldownTag                    (Parm)
// float                          CooldownDuration               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToExistingDuration         (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTags_GameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	UAIModule_BehaviorTreeComponent_AddCooldownTagDuration_Params params;
	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	UAIModule_BlackboardComponent_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UAIModule_BlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	UAIModule_BlackboardComponent_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	UAIModule_BlackboardComponent_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	UAIModule_BlackboardComponent_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	UAIModule_BlackboardComponent_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	UAIModule_BlackboardComponent_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	UAIModule_BlackboardComponent_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  enumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char enumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	UAIModule_BlackboardComponent_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.enumValue = enumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	UAIModule_BlackboardComponent_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	UAIModule_BlackboardComponent_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	UAIModule_BlackboardComponent_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAIModule_BlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	UAIModule_BlackboardComponent_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAIModule_BlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	UAIModule_BlackboardComponent_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UAIModule_BlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	UAIModule_BlackboardComponent_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAIModule_BlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	UAIModule_BlackboardComponent_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAIModule_BlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	UAIModule_BlackboardComponent_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_BlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	UAIModule_BlackboardComponent_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_BlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	UAIModule_BlackboardComponent_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UAIModule_BlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	UAIModule_BlackboardComponent_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAIModule_BlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	UAIModule_BlackboardComponent_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	UAIModule_BlackboardComponent_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ResultRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	UAIModule_BlackboardComponent_GetRotationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ResultLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	UAIModule_BlackboardComponent_GetLocationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAIModule_BlackboardComponent::ClearValue(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	UAIModule_BlackboardComponent_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	UAIModule_BTDecorator_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	UAIModule_BTDecorator_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	UAIModule_BTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	UAIModule_BTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	UAIModule_BTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveObserverActivated(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	UAIModule_BTDecorator_BlueprintBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveExecutionStart(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTDecorator_BlueprintBase::ReceiveExecutionFinish(class AEngine_Actor* OwnerActor, TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	UAIModule_BTDecorator_BlueprintBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTDecorator_BlueprintBase::PerformConditionCheck(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	UAIModule_BTDecorator_BlueprintBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	UAIModule_BTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	UAIModule_BTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_StopUsingExternalEvent(class UAIModule_BTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	UAIModule_BTFunctionLibrary_StopUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_StartUsingExternalEvent(class UAIModule_BTNode* NodeOwner, class AEngine_Actor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	UAIModule_BTFunctionLibrary_StartUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, class UClass* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	UAIModule_BTFunctionLibrary_SetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_BlackboardComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIModule_BlackboardComponent* UAIModule_BTFunctionLibrary::STATIC_GetOwnersBlackboard(class UAIModule_BTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	UAIModule_BTFunctionLibrary_GetOwnersBlackboard_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_BehaviorTreeComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIModule_BehaviorTreeComponent* UAIModule_BTFunctionLibrary::STATIC_GetOwnerComponent(class UAIModule_BTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	UAIModule_BTFunctionLibrary_GetOwnerComponent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsRotator(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AEngine_Actor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Actor* UAIModule_BTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	UAIModule_BTFunctionLibrary_GetBlackboardValueAsActor_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UAIModule_BTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	UAIModule_BTFunctionLibrary_ClearBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIModule_BTNode*        NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIModule_BlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UAIModule_BTFunctionLibrary::STATIC_ClearBlackboardValue(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	UAIModule_BTFunctionLibrary_ClearBlackboardValue_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	UAIModule_BTService_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	UAIModule_BTService_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveSearchStartAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	UAIModule_BTService_BlueprintBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveSearchStart(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	UAIModule_BTService_BlueprintBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveDeactivationAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	UAIModule_BTService_BlueprintBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveDeactivation(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	UAIModule_BTService_BlueprintBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveActivationAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	UAIModule_BTService_BlueprintBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTService_BlueprintBase::ReceiveActivation(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	UAIModule_BTService_BlueprintBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTService_BlueprintBase::IsServiceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	UAIModule_BTService_BlueprintBase_IsServiceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	UAIModule_BTTask_BlueprintBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	UAIModule_BTTask_BlueprintBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	UAIModule_BTTask_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	UAIModule_BTTask_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveExecuteAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	UAIModule_BTTask_BlueprintBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveExecute(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	UAIModule_BTTask_BlueprintBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIModule_AIController*  OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveAbortAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	UAIModule_BTTask_BlueprintBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEngine_Actor*           OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::ReceiveAbort(class AEngine_Actor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	UAIModule_BTTask_BlueprintBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTTask_BlueprintBase::IsTaskExecuting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	UAIModule_BTTask_BlueprintBase_IsTaskExecuting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_BTTask_BlueprintBase::IsTaskAborting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	UAIModule_BTTask_BlueprintBase_IsTaskAborting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_BTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	UAIModule_BTTask_BlueprintBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)

void UAIModule_BTTask_BlueprintBase::FinishAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	UAIModule_BTTask_BlueprintBase_FinishAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_CrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	UAIModule_CrowdFollowingComponent_SuspendCrowdSteering_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	UAIModule_EnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, class AEngine_Actor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	UAIModule_EnvQueryContext_BlueprintBase_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor)

void UAIModule_EnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	UAIModule_EnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AEngine_Actor*>   ResultingActorsSet             (Parm, OutParm, ZeroConstructor)

void UAIModule_EnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, TArray<class AEngine_Actor*>* ResultingActorsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	UAIModule_EnvQueryContext_BlueprintBase_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAIModule_EnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	UAIModule_EnvQueryGenerator_BlueprintBase_GetQuerier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAIModule_EnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	UAIModule_EnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params;
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 GeneratedVector                (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	UAIModule_EnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params;
	params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AEngine_Actor*           GeneratedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AEngine_Actor* GeneratedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	UAIModule_EnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params;
	params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryInstanceBlueprintWrapper::SetNamedParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	UAIModule_EnvQueryInstanceBlueprintWrapper_SetNamedParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UAIModule_EnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	UAIModule_EnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AEngine_Actor*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AEngine_Actor*> UAIModule_EnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	UAIModule_EnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FVector>         ResultLocations                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_EnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	UAIModule_EnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocations != nullptr)
		*ResultLocations = params.ResultLocations;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<class AEngine_Actor*>   ResultActors                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_EnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class AEngine_Actor*>* ResultActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	UAIModule_EnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultActors != nullptr)
		*ResultActors = params.ResultActors;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_EnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	UAIModule_EnvQueryInstanceBlueprintWrapper_GetItemScore_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UAIModule_EnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EEnvQueryStatus> QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_EnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UAIModule_EnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<FAIModule_AIModule_EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	UAIModule_EnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_EnvQuery*      QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode> RunMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WrapperClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_EnvQueryInstanceBlueprintWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIModule_EnvQueryInstanceBlueprintWrapper* UAIModule_EnvQueryManager::STATIC_RunEQSQuery(class UObject* WorldContextObject, class UAIModule_EnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	UAIModule_EnvQueryManager_RunEQSQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_NavLocalGridManager::STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	UAIModule_NavLocalGridManager_SetLocalNavigationGridDensity_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CellSize = CellSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            GridId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_NavLocalGridManager::STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	UAIModule_NavLocalGridManager_RemoveLocalNavigationGrid_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>         PathPoints                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_NavLocalGridManager::STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	UAIModule_NavLocalGridManager_FindLocalNavigationGridPath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_NavLocalGridManager::STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	UAIModule_NavLocalGridManager_AddLocalNavigationGridForPoints_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_NavLocalGridManager::STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	UAIModule_NavLocalGridManager_AddLocalNavigationGridForPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_NavLocalGridManager::STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	UAIModule_NavLocalGridManager_AddLocalNavigationGridForCapsule_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAIModule_NavLocalGridManager::STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	UAIModule_NavLocalGridManager_AddLocalNavigationGridForBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> UAIModule_PawnAction::GetActionPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	UAIModule_PawnAction_GetActionPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction::Finish(TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	UAIModule_PawnAction_Finish_Params params;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_PawnAction*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIModule_PawnAction* UAIModule_PawnAction::STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	UAIModule_PawnAction_CreateActionInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction_BlueprintBase::ActionTick(class AEngine_Pawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	UAIModule_PawnAction_BlueprintBase_ActionTick_Params params;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction_BlueprintBase::ActionStart(class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	UAIModule_PawnAction_BlueprintBase_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction_BlueprintBase::ActionResume(class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	UAIModule_PawnAction_BlueprintBase_ActionResume_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction_BlueprintBase::ActionPause(class AEngine_Pawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	UAIModule_PawnAction_BlueprintBase_ActionPause_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngine_Pawn*            ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnAction_BlueprintBase::ActionFinished(class AEngine_Pawn* ControlledPawn, TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	UAIModule_PawnAction_BlueprintBase_ActionFinished_Params params;
	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_PawnAction*    NewAction                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_PawnActionsComponent::K2_PushAction(class UAIModule_PawnAction* NewAction, TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority, class UObject* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	UAIModule_PawnActionsComponent_K2_PushAction_Params params;
	params.NewAction = NewAction;
	params.Priority = Priority;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Pawn*            Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAIModule_PawnAction*    Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIModule_PawnActionsComponent::STATIC_K2_PerformAction(class AEngine_Pawn* Pawn, class UAIModule_PawnAction* Action, TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	UAIModule_PawnActionsComponent_K2_PerformAction_Params params;
	params.Pawn = Pawn;
	params.Action = Action;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_PawnAction*    ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> UAIModule_PawnActionsComponent::K2_ForceAbortAction(class UAIModule_PawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	UAIModule_PawnActionsComponent_K2_ForceAbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIModule_PawnAction*    ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> UAIModule_PawnActionsComponent::K2_AbortAction(class UAIModule_PawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	UAIModule_PawnActionsComponent_K2_AbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	UAIModule_PawnSensingComponent_SetSensingUpdatesEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSensingInterval             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	UAIModule_PawnSensingComponent_SetSensingInterval_Params params;
	params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPeripheralVisionAngle       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	UAIModule_PawnSensingComponent_SetPeripheralVisionAngle_Params params;
	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AEngine_Pawn*            Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnSensingComponent::SeePawnDelegate__DelegateSignature(class AEngine_Pawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	UAIModule_PawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class AEngine_Pawn*            Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIModule_PawnSensingComponent::HearNoiseDelegate__DelegateSignature(class AEngine_Pawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	UAIModule_PawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_PawnSensingComponent::GetPeripheralVisionCosine()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	UAIModule_PawnSensingComponent_GetPeripheralVisionCosine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIModule_PawnSensingComponent::GetPeripheralVisionAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	UAIModule_PawnSensingComponent_GetPeripheralVisionAngle_Params params;

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
