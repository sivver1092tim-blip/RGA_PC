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

// Function AIModule.AIController.UseBlackboard
struct AAIModule_AIController_UseBlackboard_Params
{
	class UAIModule_BlackboardData*                    BlackboardAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_BlackboardComponent*               BlackboardComponent;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.UnclaimTaskResource
struct AAIModule_AIController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.SetPathFollowingComponent
struct AAIModule_AIController_SetPathFollowingComponent_Params
{
	class UAIModule_PathFollowingComponent*            NewPFComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AAIModule_AIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.RunBehaviorTree
struct AAIModule_AIController_RunBehaviorTree_Params
{
	class UAIModule_BehaviorTree*                      BTAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AAIModule_AIController_OnUsingBlackBoard_Params
{
	class UAIModule_BlackboardComponent*               BlackboardComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIModule_BlackboardData*                    BlackboardAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIModule_AIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayTasks_GameplayResourceSet          NewlyClaimed;                                             // (Parm)
	struct FGameplayTasks_GameplayResourceSet          FreshlyReleased;                                          // (Parm)
};

// Function AIModule.AIController.MoveToLocation
struct AAIModule_AIController_MoveToLocation_Params
{
	struct FVector                                     dest;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.MoveToActor
struct AAIModule_AIController_MoveToActor_Params
{
	class AEngine_Actor*                               Goal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocus
struct AAIModule_AIController_K2_SetFocus_Params
{
	class AEngine_Actor*                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AAIModule_AIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIController.K2_ClearFocus
struct AAIModule_AIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AAIModule_AIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AAIModule_AIController_GetPathFollowingComponent_Params
{
	class UAIModule_PathFollowingComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIController.GetMoveStatus
struct AAIModule_AIController_GetMoveStatus_Params
{
	TEnumAsByte<FAIModule_AIModule_EPathFollowingStatus> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIModule_AIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocusActor
struct AAIModule_AIController_GetFocusActor_Params
{
	class AEngine_Actor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AAIModule_AIController_GetFocalPointOnActor_Params
{
	class AEngine_Actor*                               Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPoint
struct AAIModule_AIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIModule_AIController_GetAIPerceptionComponent_Params
{
	class UAIModule_AIPerceptionComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIController.ClaimTaskResource
struct AAIModule_AIController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
struct AAIModule_NavLinkProxy_SetSmartLinkEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLinkProxy.ResumePathFollowing
struct AAIModule_NavLinkProxy_ResumePathFollowing_Params
{
	class AEngine_Actor*                               Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
struct AAIModule_NavLinkProxy_ReceiveSmartLinkReached_Params
{
	class AEngine_Actor*                               Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
struct AAIModule_NavLinkProxy_IsSmartLinkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLinkProxy.HasMovingAgents
struct AAIModule_NavLinkProxy_HasMovingAgents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct UAIModule_PathFollowingComponent_OnNavDataRegistered_Params
{
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.OnActorBump
struct UAIModule_PathFollowingComponent_OnActorBump_Params
{
	class AEngine_Actor*                               SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_HitResult                           Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UAIModule_PathFollowingComponent_GetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UAIModule_PathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<FAIModule_AIModule_EPathFollowingAction> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIModule_AIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIModule_AIRequestID                       RequestID;                                                // (Parm)
	TEnumAsByte<FAIModule_AIModule_EPathFollowingResult> MovementResult;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.SetSenseEnabled
struct UAIModule_AIPerceptionComponent_SetSenseEnabled_Params
{
	class UClass*                                      SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
struct UAIModule_AIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIModule_AIPerceptionComponent_OnOwnerEndPlay_Params
{
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EEndPlayReason>         EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIModule_AIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class AEngine_Actor*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIModule_AIPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
struct UAIModule_AIPerceptionComponent_GetKnownPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
struct UAIModule_AIPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIModule_AIPerceptionComponent_GetActorsPerception_Params
{
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_ActorPerceptionBlueprintInfo      Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIModule_AIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIModule_AIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIModule_AIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIModule_AIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIModule_AIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UEngine_AnimInstance*                        AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlockMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnlockAILogic;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIModule_AIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_BehaviorTree*                      BehaviorTree;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCollisionFail;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
struct UAIModule_AIBlueprintHelperLibrary_SimpleMoveToLocation_Params
{
	class AEngine_Controller*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Goal;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
struct UAIModule_AIBlueprintHelperLibrary_SimpleMoveToActor_Params
{
	class AEngine_Controller*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Goal;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIModule_AIBlueprintHelperLibrary_SendAIMessage_Params
{
	class AEngine_Pawn*                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     MessageSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIModule_AIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UEngine_AnimInstance*                        AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIModule_AIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIModule_AIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIModule_AIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	struct FVector                                     DirectionVector;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
struct UAIModule_AIBlueprintHelperLibrary_GetCurrentPath_Params
{
	class AEngine_Controller*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationSystem_NavigationPath*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIModule_AIBlueprintHelperLibrary_GetBlackboard_Params
{
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_BlackboardComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIModule_AIBlueprintHelperLibrary_GetAIController_Params
{
	class AEngine_Actor*                               ControlledActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIModule_AIController*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIModule_AIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AIAsyncTaskBlueprintProxy*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIModule_AIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AISenseEvent*                      PerceptionEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIModule_AIPerceptionSystem_ReportEvent_Params
{
	class UAIModule_AISenseEvent*                      PerceptionEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIModule_AIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIModule_AIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EEndPlayReason>         EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIModule_AIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_AIStimulus                        Stimulus;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAIModule_AISense_Blueprint_OnUpdate_Params
{
	TArray<class UAIModule_AISenseEvent*>              EventsToProcess;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAIModule_AISense_Blueprint_OnListenerUpdated_Params
{
	class AEngine_Actor*                               ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AIPerceptionComponent*             PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAIModule_AISense_Blueprint_OnListenerUnregistered_Params
{
	class AEngine_Actor*                               ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AIPerceptionComponent*             PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAIModule_AISense_Blueprint_OnListenerRegistered_Params
{
	class AEngine_Actor*                               ActorListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AIPerceptionComponent*             PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAIModule_AISense_Blueprint_K2_OnNewPawn_Params
{
	class AEngine_Pawn*                                NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAIModule_AISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAIModule_AIPerceptionComponent*>     ListenerComponents;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAIModule_AISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class AEngine_Actor*>                       ListenerActors;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAIModule_AISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EventLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAIModule_AISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAIModule_AISense_Prediction_RequestPawnPredictionEvent_Params
{
	class AEngine_Pawn*                                Requestor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               PredictedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAIModule_AISense_Prediction_RequestControllerPredictionEvent_Params
{
	class AAIModule_AIController*                      Requestor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               PredictedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAIModule_AISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAIModule_AISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAIModule_AITask_MoveTo_AIMoveTo_Params
{
	class AAIModule_AIController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EAIOptionFlag>      StopOnOverlap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EAIOptionFlag>      AcceptPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockAILogic;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseContinuosGoalTracking;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EAIOptionFlag>      ProjectGoalOnNavigation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AITask_MoveTo*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.AITask_RunEQS.RunEQS
struct UAIModule_AITask_RunEQS_RunEQS_Params
{
	class AAIModule_AIController*                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_EnvQuery*                          QueryTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_AITask_RunEQS*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BrainComponent.StopLogic
struct UAIModule_BrainComponent_StopLogic_Params
{
	struct FString                                     reason;                                                   // (Parm, ZeroConstructor)
};

// Function AIModule.BrainComponent.RestartLogic
struct UAIModule_BrainComponent_RestartLogic_Params
{
};

// Function AIModule.BrainComponent.IsRunning
struct UAIModule_BrainComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BrainComponent.IsPaused
struct UAIModule_BrainComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UAIModule_BehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FGameplayTags_GameplayTag                   InjectTag;                                                // (Parm)
	class UAIModule_BehaviorTree*                      BehaviorAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UAIModule_BehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FGameplayTags_GameplayTag                   CooldownTag;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UAIModule_BehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FGameplayTags_GameplayTag                   CooldownTag;                                              // (Parm)
	float                                              CooldownDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UAIModule_BlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UAIModule_BlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UAIModule_BlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    VectorValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UAIModule_BlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UAIModule_BlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UAIModule_BlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UAIModule_BlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UAIModule_BlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      enumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UAIModule_BlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UAIModule_BlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UAIModule_BlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UAIModule_BlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UAIModule_BlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UAIModule_BlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UAIModule_BlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UAIModule_BlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UAIModule_BlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UAIModule_BlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UAIModule_BlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UAIModule_BlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UAIModule_BlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UAIModule_BlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ResultRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UAIModule_BlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ResultLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BlackboardComponent.ClearValue
struct UAIModule_BlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UAIModule_BTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UAIModule_BTDecorator_BlueprintBase_ReceiveTick_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UAIModule_BTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UAIModule_BTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UAIModule_BTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UAIModule_BTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EBTNodeResult>      NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UAIModule_BTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EBTNodeResult>      NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UAIModule_BTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UAIModule_BTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UAIModule_BTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UAIModule_BTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UAIModule_BTFunctionLibrary_StopUsingExternalEvent_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UAIModule_BTFunctionLibrary_StartUsingExternalEvent_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsString_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsName_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UAIModule_BTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UAIModule_BTFunctionLibrary_GetOwnersBlackboard_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_BlackboardComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UAIModule_BTFunctionLibrary_GetOwnerComponent_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_BehaviorTreeComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsString_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsName_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UAIModule_BTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AEngine_Actor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UAIModule_BTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UAIModule_BTFunctionLibrary_ClearBlackboardValue_Params
{
	class UAIModule_BTNode*                            NodeOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIModule_BlackboardKeySelector             Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UAIModule_BTService_BlueprintBase_ReceiveTickAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UAIModule_BTService_BlueprintBase_ReceiveTick_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UAIModule_BTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UAIModule_BTService_BlueprintBase_ReceiveSearchStart_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UAIModule_BTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UAIModule_BTService_BlueprintBase_ReceiveDeactivation_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UAIModule_BTService_BlueprintBase_ReceiveActivationAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UAIModule_BTService_BlueprintBase_ReceiveActivation_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UAIModule_BTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UAIModule_BTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UAIModule_BTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UAIModule_BTTask_BlueprintBase_ReceiveTickAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UAIModule_BTTask_BlueprintBase_ReceiveTick_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UAIModule_BTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UAIModule_BTTask_BlueprintBase_ReceiveExecute_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UAIModule_BTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class AAIModule_AIController*                      OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UAIModule_BTTask_BlueprintBase_ReceiveAbort_Params
{
	class AEngine_Actor*                               OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UAIModule_BTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UAIModule_BTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UAIModule_BTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UAIModule_BTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UAIModule_CrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UAIModule_EnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UAIModule_EnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               ResultingActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UAIModule_EnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ResultingLocationSet;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UAIModule_EnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       ResultingActorsSet;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UAIModule_EnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UAIModule_EnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct FVector>                             ContextLocations;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UAIModule_EnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct FVector                                     GeneratedVector;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UAIModule_EnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class AEngine_Actor*                               GeneratedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct UAIModule_EnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UAIModule_EnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UAIModule_EnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class AEngine_Actor*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
struct UAIModule_EnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params
{
	TArray<struct FVector>                             ResultLocations;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
struct UAIModule_EnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params
{
	TArray<class AEngine_Actor*>                       ResultActors;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UAIModule_EnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UAIModule_EnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UAIModule_EnvQueryInstanceBlueprintWrapper*  QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvQueryStatus>    QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UAIModule_EnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_EnvQuery*                          QueryTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode>   RunMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_EnvQueryInstanceBlueprintWrapper*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct UAIModule_NavLocalGridManager_SetLocalNavigationGridDensity_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct UAIModule_NavLocalGridManager_RemoveLocalNavigationGrid_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GridId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildGrids;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct UAIModule_NavLocalGridManager_FindLocalNavigationGridPath_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>                             PathPoints;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
struct UAIModule_NavLocalGridManager_AddLocalNavigationGridForPoints_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Radius2D;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildGrids;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct UAIModule_NavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Radius2D;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildGrids;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct UAIModule_NavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CapsuleRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radius2D;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildGrids;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct UAIModule_NavLocalGridManager_AddLocalNavigationGridForBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radius2D;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildGrids;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnAction.GetActionPriority
struct UAIModule_PawnAction_GetActionPriority_Params
{
	TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnAction.Finish
struct UAIModule_PawnAction_Finish_Params
{
	TEnumAsByte<FAIModule_AIModule_EPawnActionResult>  WithResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UAIModule_PawnAction_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_PawnAction*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UAIModule_PawnAction_BlueprintBase_ActionTick_Params
{
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UAIModule_PawnAction_BlueprintBase_ActionStart_Params
{
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UAIModule_PawnAction_BlueprintBase_ActionResume_Params
{
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UAIModule_PawnAction_BlueprintBase_ActionPause_Params
{
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UAIModule_PawnAction_BlueprintBase_ActionFinished_Params
{
	class AEngine_Pawn*                                ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPawnActionResult>  WithResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UAIModule_PawnActionsComponent_K2_PushAction_Params
{
	class UAIModule_PawnAction*                        NewAction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UAIModule_PawnActionsComponent_K2_PerformAction_Params
{
	class AEngine_Pawn*                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIModule_PawnAction*                        Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UAIModule_PawnActionsComponent_K2_ForceAbortAction_Params
{
	class UAIModule_PawnAction*                        ActionToAbort;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UAIModule_PawnActionsComponent_K2_AbortAction_Params
{
	class UAIModule_PawnAction*                        ActionToAbort;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UAIModule_PawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UAIModule_PawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UAIModule_PawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UAIModule_PawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class AEngine_Pawn*                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UAIModule_PawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class AEngine_Pawn*                                Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UAIModule_PawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UAIModule_PawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
