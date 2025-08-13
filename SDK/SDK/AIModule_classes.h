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

// Class AIModule.AIController
// 0x0090 (0x0320 - 0x0290)
class AAIModule_AIController : public AEngine_Controller
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0290(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag : 1;                                             // 0x02C8(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x02C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UAIModule_PathFollowingComponent*            PathFollowingComponent;                                   // 0x02D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAIModule_BrainComponent*                    BrainComponent;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIModule_AIPerceptionComponent*             PerceptionComponent;                                      // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAIModule_PawnActionsComponent*              ActionsComp;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIModule_BlackboardComponent*               Blackboard;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasks_GameplayTasksComponent*       CachedGameplayTasksComponent;                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	bool UseBlackboard(class UAIModule_BlackboardData* BlackboardAsset, class UAIModule_BlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetPathFollowingComponent(class UAIModule_PathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UAIModule_BehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UAIModule_BlackboardComponent* BlackboardComp, class UAIModule_BlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayTasks_GameplayResourceSet& NewlyClaimed, const struct FGameplayTasks_GameplayResourceSet& FreshlyReleased);
	TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> MoveToLocation(const struct FVector& dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<FAIModule_AIModule_EPathFollowingRequestResult> MoveToActor(class AEngine_Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AEngine_Actor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UAIModule_PathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<FAIModule_AIModule_EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AEngine_Actor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AEngine_Actor* Actor);
	struct FVector GetFocalPoint();
	class UAIModule_AIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.NavLinkProxy
// 0x0050 (0x0268 - 0x0218)
class AAIModule_NavLinkProxy : public AEngine_Actor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	TArray<struct FEngine_NavigationLink>              PointLinks;                                               // 0x0228(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEngine_NavigationSegmentLink>       SegmentLinks;                                             // 0x0238(0x0010) (ZeroConstructor)
	class UNavigationSystem_NavLinkCustomComponent*    SmartLinkComp;                                            // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bSmartLinkIsRelevant;                                     // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSmartLinkReached;                                       // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AEngine_Actor* Agent);
	void ReceiveSmartLinkReached(class AEngine_Actor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};


// Class AIModule.PathFollowingComponent
// 0x01A8 (0x0258 - 0x00B0)
class UAIModule_PathFollowingComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	class UEngine_NavMovementComponent*                MovementComp;                                             // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class ANavigationSystem_NavigationData*            MyNavData;                                                // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x158];                                     // 0x0100(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnNavDataRegistered(class ANavigationSystem_NavigationData* NavData);
	void OnActorBump(class AEngine_Actor* SelfActor, class AEngine_Actor* OtherActor, const struct FVector& NormalImpulse, const struct FEngine_HitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<FAIModule_AIModule_EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0068 - 0x0028)
class UAIModule_AIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted(const struct FAIModule_AIRequestID& RequestID, TEnumAsByte<FAIModule_AIModule_EPathFollowingResult> MovementResult);
};


// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIModule_AIDataProvider_QueryParams : public UAIModule_AIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0050 - 0x0040)
class UAIModule_AIDataProvider_Random : public UAIModule_AIDataProvider_QueryParams
{
public:
	float                                              Min;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

};


// Class AIModule.AIPerceptionComponent
// 0x00D0 (0x0180 - 0x00B0)
class UAIModule_AIPerceptionComponent : public UEngine_ActorComponent
{
public:
	TArray<class UAIModule_AISenseConfig*>             SensesConfig;                                             // 0x00B0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class AAIModule_AIController*                      AIOwner;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AEngine_Actor* Actor, TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AEngine_Actor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AEngine_Actor*>* OutActors);
	bool GetActorsPerception(class AEngine_Actor* Actor, struct FAIModule_ActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x00C8 - 0x00B0)
class UAIModule_AIPerceptionStimuliSourceComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AIBlueprintHelperLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	void STATIC_UnlockAIResourcesWithAnimation(class UEngine_AnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class AEngine_Pawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UAIModule_BehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SimpleMoveToLocation(class AEngine_Controller* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AEngine_Controller* Controller, class AEngine_Actor* Goal);
	void STATIC_SendAIMessage(class AEngine_Pawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UEngine_AnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UNavigationSystem_NavigationPath* STATIC_GetCurrentPath(class AEngine_Controller* Controller);
	class UAIModule_BlackboardComponent* STATIC_GetBlackboard(class AEngine_Actor* Target);
	class AAIModule_AIController* STATIC_GetAIController(class AEngine_Actor* ControlledActor);
	class UAIModule_AIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class AEngine_Pawn* Pawn, const struct FVector& Destination, class AEngine_Actor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AISubsystem
// 0x0010 (0x0038 - 0x0028)
class UAIModule_AISubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIModule_AISystem*                          AISystem;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISubsystem");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISubsystem");
		return ptr;
	}

};


// Class AIModule.AIPerceptionSystem
// 0x0100 (0x0138 - 0x0038)
class UAIModule_AIPerceptionSystem : public UAIModule_AISubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	TArray<class UAIModule_AISense*>                   Senses;                                                   // 0x0088(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x009C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAIModule_AISenseEvent* PerceptionEvent);
	void ReportEvent(class UAIModule_AISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AEngine_Actor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AEngine_Actor* Actor, TEnumAsByte<FEngine_Engine_EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIModule_AIStimulus& Stimulus);
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIModule_AIResource_Movement : public UGameplayTasks_GameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0038 - 0x0038)
class UAIModule_AIResource_Logic : public UGameplayTasks_GameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

};


// Class AIModule.AISense
// 0x0058 (0x0080 - 0x0028)
class UAIModule_AISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	FAIModule_AIModule_EAISenseNotifyType              NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAIModule_AIPerceptionSystem*                PerceptionSystemInstance;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0028 (0x00A8 - 0x0080)
class UAIModule_AISense_Blueprint : public UAIModule_AISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIModule_AIPerceptionComponent*>     ListenerContainer;                                        // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAIModule_AISenseEvent*>              UnprocessedEvents;                                        // 0x0098(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	float OnUpdate(TArray<class UAIModule_AISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AEngine_Actor* ActorListener, class UAIModule_AIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class AEngine_Pawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIModule_AIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AEngine_Actor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0090 - 0x0080)
class UAIModule_AISense_Damage : public UAIModule_AISense
{
public:
	TArray<struct FAIModule_AIDamageEvent>             RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AEngine_Actor* DamagedActor, class AEngine_Actor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0068 (0x00E8 - 0x0080)
class UAIModule_AISense_Hearing : public UAIModule_AISense
{
public:
	TArray<struct FAIModule_AINoiseEvent>              NoiseEvents;                                              // 0x0080(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0094(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AEngine_Actor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0090 - 0x0080)
class UAIModule_AISense_Prediction : public UAIModule_AISense
{
public:
	TArray<struct FAIModule_AIPredictionEvent>         RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	void STATIC_RequestPawnPredictionEvent(class AEngine_Pawn* Requestor, class AEngine_Actor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIModule_AIController* Requestor, class AEngine_Actor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00D8 (0x0158 - 0x0080)
class UAIModule_AISense_Sight : public UAIModule_AISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0130(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x0134(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x0140(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0090 - 0x0080)
class UAIModule_AISense_Team : public UAIModule_AISense
{
public:
	TArray<struct FAIModule_AITeamStimulusEvent>       RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0090 - 0x0080)
class UAIModule_AISense_Touch : public UAIModule_AISense
{
public:
	TArray<struct FAIModule_AITouchEvent>              RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x00F0 - 0x00F0)
class UAIModule_AISenseBlueprintListener : public UEngine_UserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x0020 (0x0048 - 0x0028)
class UAIModule_AISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0050 - 0x0048)
class UAIModule_AISenseConfig_Blueprint : public UAIModule_AISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0050 - 0x0048)
class UAIModule_AISenseConfig_Damage : public UAIModule_AISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0060 - 0x0048)
class UAIModule_AISenseConfig_Hearing : public UAIModule_AISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAIModule_AISenseAffiliationFilter          DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0048 - 0x0048)
class UAIModule_AISenseConfig_Prediction : public UAIModule_AISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0068 - 0x0048)
class UAIModule_AISenseConfig_Sight : public UAIModule_AISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAIModule_AISenseAffiliationFilter          DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0048 - 0x0048)
class UAIModule_AISenseConfig_Team : public UAIModule_AISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UAIModule_AISenseConfig_Touch : public UAIModule_AISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAIModule_AISenseEvent_Damage : public UAIModule_AISenseEvent
{
public:
	struct FAIModule_AIDamageEvent                     Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAIModule_AISenseEvent_Hearing : public UAIModule_AISenseEvent
{
public:
	struct FAIModule_AINoiseEvent                      Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_AISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

};


// Class AIModule.AISystem
// 0x00D8 (0x0130 - 0x0058)
class UAIModule_AISystem : public UEngine_AISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0058(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0070(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0094(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0095(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0096(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0097(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0098(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0099(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      DefaultSightCollisionChannel;                             // 0x009A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x009B(0x0005) MISSED OFFSET
	class UAIModule_BehaviorTreeManager*               BehaviorTreeManager;                                      // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_EnvQueryManager*                   EnvironmentQueryManager;                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_AIPerceptionSystem*                PerceptionSystem;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIModule_AIAsyncTaskBlueprintProxy*> AllProxyObjects;                                          // 0x00B8(0x0010) (ZeroConstructor, Transient)
	class UAIModule_AIHotSpotManager*                  HotSpotManager;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_NavLocalGridManager*               NavLocalGrids;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0070 - 0x0068)
class UAIModule_AITask : public UGameplayTasks_GameplayTask
{
public:
	class AAIModule_AIController*                      OwnerController;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

};


// Class AIModule.AITask_LockLogic
// 0x0000 (0x0070 - 0x0070)
class UAIModule_AITask_LockLogic : public UAIModule_AITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}

};


// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0110 - 0x0070)
class UAIModule_AITask_MoveTo : public UAIModule_AITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIModule_AIMoveRequest                     MoveRequest;                                              // 0x0090(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	class UAIModule_AITask_MoveTo* STATIC_AIMoveTo(class AAIModule_AIController* Controller, const struct FVector& GoalLocation, class AEngine_Actor* GoalActor, float AcceptanceRadius, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<FAIModule_AIModule_EAIOptionFlag> ProjectGoalOnNavigation);
};


// Class AIModule.AITask_RunEQS
// 0x0078 (0x00E8 - 0x0070)
class UAIModule_AITask_RunEQS : public UAIModule_AITask
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}


	class UAIModule_AITask_RunEQS* STATIC_RunEQS(class AAIModule_AIController* Controller, class UAIModule_EnvQuery* QueryTemplate);
};


// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UAIModule_BehaviorTree : public UObject
{
public:
	class UAIModule_BTCompositeNode*                   RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIModule_BlackboardData*                    BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAIModule_BTDecorator*>               RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FAIModule_BTDecoratorLogic>          RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

};


// Class AIModule.BrainComponent
// 0x0060 (0x0110 - 0x00B0)
class UAIModule_BrainComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UAIModule_BlackboardComponent*               BlackboardComp;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIModule_AIController*                      AIOwner;                                                  // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic(const struct FString& reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0150 (0x0260 - 0x0110)
class UAIModule_BehaviorTreeComponent : public UAIModule_BrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET
	TArray<class UAIModule_BTNode*>                    NodeInstances;                                            // 0x0130(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0140(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree(const struct FGameplayTags_GameplayTag& InjectTag, class UAIModule_BehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTags_GameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTags_GameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UAIModule_BehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

};


// Class AIModule.BlackboardComponent
// 0x00F8 (0x01A8 - 0x00B0)
class UAIModule_BlackboardComponent : public UEngine_ActorComponent
{
public:
	class UAIModule_BrainComponent*                    BrainComp;                                                // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAIModule_BlackboardData*                    BlackboardAsset;                                          // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
	TArray<class UAIModule_BlackboardKeyType*>         KeyInstances;                                             // 0x00E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x00F0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char enumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.BlackboardData
// 0x0020 (0x0050 - 0x0030)
class UAIModule_BlackboardData : public UEngine_DataAsset
{
public:
	class UAIModule_BlackboardData*                    Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIModule_BlackboardEntry>           Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UAIModule_BlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Bool : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UAIModule_BlackboardKeyType_Class : public UAIModule_BlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UAIModule_BehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAIModule_BehaviorTreeTemplateInfo>  LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UAIModule_BehaviorTreeComponent*>     ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Float : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Int : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Name : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UAIModule_BlackboardKeyType_NativeEnum : public UAIModule_BlackboardKeyType
{
public:
	struct FString                                     enumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UAIModule_BlackboardKeyType_Object : public UAIModule_BlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Rotator : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UAIModule_BlackboardKeyType_String : public UAIModule_BlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UAIModule_BlackboardKeyType_Vector : public UAIModule_BlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

};


// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UAIModule_BTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UAIModule_BehaviorTree*                      TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIModule_BTCompositeNode*                   ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0060 - 0x0058)
class UAIModule_BTAuxiliaryNode : public UAIModule_BTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

};


// Class AIModule.BTCompositeNode
// 0x0038 (0x0090 - 0x0058)
class UAIModule_BTCompositeNode : public UAIModule_BTNode
{
public:
	TArray<struct FAIModule_BTCompositeChild>          Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UAIModule_BTService*>                 Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	unsigned char                                      bApplyDecoratorScope : 1;                                 // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0090 - 0x0090)
class UAIModule_BTComposite_Selector : public UAIModule_BTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x0090 - 0x0090)
class UAIModule_BTComposite_Sequence : public UAIModule_BTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (0x0098 - 0x0090)
class UAIModule_BTComposite_SimpleParallel : public UAIModule_BTCompositeNode
{
public:
	TEnumAsByte<FAIModule_AIModule_EBTParallelMode>    FinishMode;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UAIModule_BTDecorator : public UAIModule_BTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0060(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<FAIModule_AIModule_EBTFlowAbortMode>   FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UAIModule_BTDecorator_BlackboardBase : public UAIModule_BTDecorator
{
public:
	struct FAIModule_BlackboardKeySelector             BlackboardKey;                                            // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UAIModule_BTDecorator_Blackboard : public UAIModule_BTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EBTBlackboardRestart> NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UAIModule_BTDecorator_BlueprintBase : public UAIModule_BTDecorator
{
public:
	class AAIModule_AIController*                      AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AEngine_Actor*                               ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AEngine_Actor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveObserverActivated(class AEngine_Actor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveExecutionStart(class AEngine_Actor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AEngine_Actor* OwnerActor, TEnumAsByte<FAIModule_AIModule_EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	bool PerformConditionCheck(class AEngine_Actor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00C8 - 0x0068)
class UAIModule_BTDecorator_CheckGameplayTagsOnActor : public UAIModule_BTDecorator
{
public:
	struct FAIModule_BlackboardKeySelector             ActorToCheck;                                             // 0x0068(0x0028) (Edit)
	FGameplayTags_GameplayTags_EGameplayContainerMatchType TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGameplayTags_GameplayTagContainer          GameplayTags;                                             // 0x0098(0x0020) (Edit)
	struct FString                                     CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00C0 - 0x00C0)
class UAIModule_BTDecorator_ConditionalLoop : public UAIModule_BTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UAIModule_BTDecorator_ConeCheck : public UAIModule_BTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FAIModule_BlackboardKeySelector             ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FAIModule_BlackboardKeySelector             ConeDirection;                                            // 0x0098(0x0028) (Edit)
	struct FAIModule_BlackboardKeySelector             Observed;                                                 // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UAIModule_BTDecorator_Cooldown : public UAIModule_BTDecorator
{
public:
	float                                              CoolDownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UAIModule_BTDecorator_DoesPathExist : public UAIModule_BTDecorator
{
public:
	struct FAIModule_BlackboardKeySelector             BlackboardKeyA;                                           // 0x0068(0x0028) (Edit)
	struct FAIModule_BlackboardKeySelector             BlackboardKeyB;                                           // 0x0090(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<FAIModule_AIModule_EPathExistanceQueryType> PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0068 - 0x0068)
class UAIModule_BTDecorator_ForceSuccess : public UAIModule_BTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00D0 - 0x0090)
class UAIModule_BTDecorator_IsAtLocation : public UAIModule_BTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FAIModule_AIDataProviderFloatValue          ParametrizedAcceptableRadius;                             // 0x0098(0x0030) (Edit)
	FAIModule_AIModule_EFAIDistanceType                GeometricDistanceType;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00CC(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00CC(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UAIModule_BTDecorator_IsBBEntryOfClass : public UAIModule_BTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UAIModule_BlackboardKeyType_Enum : public UAIModule_BlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     enumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UAIModule_BTDecorator_CompareBBEntries : public UAIModule_BTDecorator
{
public:
	TEnumAsByte<FAIModule_AIModule_EBlackBoardEntryComparison> Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FAIModule_BlackboardKeySelector             BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	struct FAIModule_BlackboardKeySelector             BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0068 - 0x0068)
class UAIModule_BTDecorator_ReachedMoveGoal : public UAIModule_BTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0078 - 0x0068)
class UAIModule_BTDecorator_Loop : public UAIModule_BTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UAIModule_BTDecorator_TagCooldown : public UAIModule_BTDecorator
{
public:
	struct FGameplayTags_GameplayTag                   CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UAIModule_BTDecorator_TimeLimit : public UAIModule_BTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIModule_BTFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	void STATIC_StopUsingExternalEvent(class UAIModule_BTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UAIModule_BTNode* NodeOwner, class AEngine_Actor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key, bool Value);
	class UAIModule_BlackboardComponent* STATIC_GetOwnersBlackboard(class UAIModule_BTNode* NodeOwner);
	class UAIModule_BehaviorTreeComponent* STATIC_GetOwnerComponent(class UAIModule_BTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	class AEngine_Actor* STATIC_GetBlackboardValueAsActor(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UAIModule_BTNode* NodeOwner, const struct FAIModule_BlackboardKeySelector& Key);
};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UAIModule_BTService : public UAIModule_BTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0068(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UAIModule_BTService_BlackboardBase : public UAIModule_BTService
{
public:
	struct FAIModule_BlackboardKeySelector             BlackboardKey;                                            // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UAIModule_BTService_DefaultFocus : public UAIModule_BTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UAIModule_BTService_BlueprintBase : public UAIModule_BTService
{
public:
	class AAIModule_AIController*                      AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AEngine_Actor*                               ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveSearchStart(class AEngine_Actor* OwnerActor);
	void ReceiveDeactivationAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveDeactivation(class AEngine_Actor* OwnerActor);
	void ReceiveActivationAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveActivation(class AEngine_Actor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTTaskNode
// 0x0018 (0x0070 - 0x0058)
class UAIModule_BTTaskNode : public UAIModule_BTNode
{
public:
	TArray<class UAIModule_BTService*>                 Services;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UAIModule_BTTask_BlackboardBase : public UAIModule_BTTaskNode
{
public:
	struct FAIModule_BlackboardKeySelector             BlackboardKey;                                            // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0038 (0x00A8 - 0x0070)
class UAIModule_BTTask_BlueprintBase : public UAIModule_BTTaskNode
{
public:
	class AAIModule_AIController*                      AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AEngine_Actor*                               ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FAIModule_IntervalCountdown                 TickInterval;                                             // 0x0080(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00A0(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AEngine_Actor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveExecute(class AEngine_Actor* OwnerActor);
	void ReceiveAbortAI(class AAIModule_AIController* OwnerController, class AEngine_Pawn* ControlledPawn);
	void ReceiveAbort(class AEngine_Actor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTService_RunEQS
// 0x0058 (0x00F0 - 0x0098)
class UAIModule_BTService_RunEQS : public UAIModule_BTService_BlackboardBase
{
public:
	struct FAIModule_EQSParametrizedQueryExecutionRequest EQSRequest;                                               // 0x0098(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}

};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_GameplayTaskBase : public UAIModule_BTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                 // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}

};


// Class AIModule.BTTask_FinishWithResult
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_FinishWithResult : public UAIModule_BTTaskNode
{
public:
	TEnumAsByte<FAIModule_AIModule_EBTNodeResult>      Result;                                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00B0 - 0x0098)
class UAIModule_BTTask_MoveTo : public UAIModule_BTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00AC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00AC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00AC(0x0001) (Edit, DisableEditOnTemplate, EditConst)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            // 0x00AD(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x00B8 - 0x00B0)
class UAIModule_BTTask_MoveDirectlyToward : public UAIModule_BTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x00B0(0x0001)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x00B0(0x0001)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                         // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0070 - 0x0070)
class UAIModule_BTTask_PawnActionBase : public UAIModule_BTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0040 (0x00B0 - 0x0070)
class UAIModule_BTTask_PlayAnimation : public UAIModule_BTTaskNode
{
public:
	class UEngine_AnimationAsset*                      AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0078(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UAIModule_BehaviorTreeComponent*             MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SkeletalMeshComponent*               CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_PlaySound : public UAIModule_BTTaskNode
{
public:
	class UEngine_SoundCue*                            SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UAIModule_BTDecorator_KeepInCone : public UAIModule_BTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FAIModule_BlackboardKeySelector             ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FAIModule_BlackboardKeySelector             Observed;                                                 // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00C0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_MakeNoise : public UAIModule_BTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00A0 - 0x0098)
class UAIModule_BTTask_RotateToFaceBBEntry : public UAIModule_BTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_RunBehavior : public UAIModule_BTTaskNode
{
public:
	class UAIModule_BehaviorTree*                      BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0088 - 0x0070)
class UAIModule_BTTask_RunBehaviorDynamic : public UAIModule_BTTaskNode
{
public:
	struct FGameplayTags_GameplayTag                   InjectionTag;                                             // 0x0070(0x0008) (Edit)
	class UAIModule_BehaviorTree*                      DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIModule_BehaviorTree*                      BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x00B8 (0x0150 - 0x0098)
class UAIModule_BTTask_RunEQSQuery : public UAIModule_BTTask_BlackboardBase
{
public:
	class UAIModule_EnvQuery*                          QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FAIModule_EnvNamedValue>             QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIModule_AIDynamicParam>            QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode>   RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FAIModule_BlackboardKeySelector             EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FAIModule_EQSParametrizedQueryExecutionRequest EQSRequest;                                               // 0x00F8(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_PushPawnAction : public UAIModule_BTTask_PawnActionBase
{
public:
	class UAIModule_PawnAction*                        Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0078 - 0x0070)
class UAIModule_BTTask_Wait : public UAIModule_BTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
class UAIModule_BTTask_WaitBlackboardTime : public UAIModule_BTTask_Wait
{
public:
	struct FAIModule_BlackboardKeySelector             BlackboardKey;                                            // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_CrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

};


// Class AIModule.CrowdFollowingComponent
// 0x0040 (0x0298 - 0x0258)
class UAIModule_CrowdFollowingComponent : public UAIModule_PathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class UEngine_CharacterMovementComponent*          CharacterMovement;                                        // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x0268(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0274(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.CrowdManager
// 0x00C8 (0x00F0 - 0x0028)
class UAIModule_CrowdManager : public UNavigationSystem_CrowdManagerBase
{
public:
	class ANavigationSystem_NavigationData*            MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAIModule_CrowdAvoidanceConfig>      AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAIModule_CrowdAvoidanceSamplingPattern> SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOffsetRadiusMultiplier;                               // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 4;                                        // 0x0070(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x7F];                                      // 0x0071(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0320 - 0x0320)
class AAIModule_DetourCrowdAIController : public AAIModule_AIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
class UAIModule_EnvQuery : public UEngine_DataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAIModule_EnvQueryOption*>            Options;                                                  // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0080 - 0x0070)
class UAIModule_BTTask_SetTagCooldown : public UAIModule_BTTaskNode
{
public:
	struct FGameplayTags_GameplayTag                   CooldownTag;                                              // 0x0070(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EnvQueryContext_Querier : public UAIModule_EnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UAIModule_EnvQueryContext_BlueprintBase : public UAIModule_EnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, class AEngine_Actor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AEngine_Actor* QuerierActor, TArray<class AEngine_Actor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EnvQueryContext_Item : public UAIModule_EnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UAIModule_EnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UAIModule_EnvQueryGenerator : public UAIModule_EnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00C0 - 0x0050)
class UAIModule_EnvQueryGenerator_ActorsOfClass : public UAIModule_EnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIModule_AIDataProviderBoolValue           GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0080 - 0x0050)
class UAIModule_EnvQueryGenerator_BlueprintBase : public UAIModule_EnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0018) (Edit)
	class UClass*                                      Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AEngine_Actor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (0x0070 - 0x0050)
class UAIModule_EnvQueryGenerator_Composite : public UAIModule_EnvQueryGenerator
{
public:
	TArray<class UAIModule_EnvQueryGenerator*>         Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAllowDifferentItemTypes : 1;                             // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasMatchingItemType : 1;                                 // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      ForcedItemType;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0080 - 0x0050)
class UAIModule_EnvQueryGenerator_ProjectedPoints : public UAIModule_EnvQueryGenerator
{
public:
	struct FAIModule_EnvTraceData                      ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0150 - 0x0080)
class UAIModule_EnvQueryGenerator_Cone : public UAIModule_EnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIModule_AIDataProviderFloatValue          AlignedPointsDistance;                                    // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ConeDegrees;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          AngleStep;                                                // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          Range;                                                    // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0058 - 0x0050)
class UAIModule_EnvQueryGenerator_CurrentLocation : public UAIModule_EnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01E8 - 0x0080)
class UAIModule_EnvQueryGenerator_OnCircle : public UAIModule_EnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIModule_AIDataProviderFloatValue          CircleRadius;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderIntValue            NumberOfPoints;                                           // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	FAIModule_AIModule_EPointOnCircleSpacingMethod     PointOnCircleSpacingMethod;                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FAIModule_EnvDirection                      ArcDirection;                                             // 0x0118(0x0020) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ArcAngle;                                                 // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FAIModule_AIDataProviderFloatValue          CircleCenterZOffset;                                      // 0x0180(0x0030) (Edit)
	struct FAIModule_EnvTraceData                      TraceData;                                                // 0x01B0(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UAIModule_EnvQueryGenerator_SimpleGrid : public UAIModule_EnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIModule_AIDataProviderFloatValue          GridSize;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UAIModule_EnvQueryGenerator_PathingGrid : public UAIModule_EnvQueryGenerator_SimpleGrid
{
public:
	struct FAIModule_AIDataProviderBoolValue           PathToItem;                                               // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIModule_AIDataProviderFloatValue          ScanRangeMultiplier;                                      // 0x0120(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
class UAIModule_EnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AEngine_Actor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
	bool GetQueryResultsAsActors(TArray<class AEngine_Actor*>* ResultActors);
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UAIModule_EnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<FAIModule_AIModule_EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UAIModule_EnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UAIModule_EnvQueryItemType_VectorBase : public UAIModule_EnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UAIModule_EnvQueryItemType_ActorBase : public UAIModule_EnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UAIModule_EnvQueryItemType_Actor : public UAIModule_EnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UAIModule_EnvQueryItemType_Direction : public UAIModule_EnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UAIModule_EnvQueryItemType_Point : public UAIModule_EnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0x0108 (0x0140 - 0x0038)
class UAIModule_EnvQueryManager : public UAIModule_AISubsystem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET
	TArray<struct FAIModule_EnvQueryInstanceCache>     InstanceCache;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UAIModule_EnvQueryContext*>           LocalContexts;                                            // 0x00B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UAIModule_EnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;                                       // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D8(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0138(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	class UAIModule_EnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UAIModule_EnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UAIModule_EnvQueryOption : public UObject
{
public:
	class UAIModule_EnvQueryGenerator*                 Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAIModule_EnvQueryTest*>              Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x0190 (0x01C0 - 0x0030)
class UAIModule_EnvQueryTest : public UAIModule_EnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvTestPurpose>    TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<FAIModule_AIModule_EEnvTestFilterOperator> MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvTestScoreOperator> MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvTestFilterType> FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIModule_AIDataProviderBoolValue           BoolValue;                                                // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          FloatValueMin;                                            // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          FloatValueMax;                                            // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	TEnumAsByte<FAIModule_AIModule_EEnvTestScoreEquation> ScoringEquation;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvQueryTestClamping> ClampMinType;                                             // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EEnvQueryTestClamping> ClampMaxType;                                             // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FAIModule_AIModule_EEQSNormalizationType           NormalizationType;                                        // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FAIModule_AIDataProviderFloatValue          ScoreClampMin;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ScoreClampMax;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ScoringFactor;                                            // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ReferenceValue;                                           // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01A9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01B8(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x01D0 - 0x01C0)
class UAIModule_EnvQueryTest_Distance : public UAIModule_EnvQueryTest
{
public:
	TEnumAsByte<FAIModule_AIModule_EEnvTestDistance>   TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      DistanceTo;                                               // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0208 - 0x01C0)
class UAIModule_EnvQueryTest_Dot : public UAIModule_EnvQueryTest
{
public:
	struct FAIModule_EnvDirection                      LineA;                                                    // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
	struct FAIModule_EnvDirection                      LineB;                                                    // 0x01E0(0x0020) (Edit, DisableEditOnInstance)
	FAIModule_AIModule_EEnvTestDot                     TestMode;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0230 - 0x01C0)
class UAIModule_EnvQueryTest_GameplayTags : public UAIModule_EnvQueryTest
{
public:
	struct FGameplayTags_GameplayTagQuery              TagQueryToMatch;                                          // 0x01C0(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	FGameplayTags_GameplayTags_EGameplayContainerMatchType TagsToMatch;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FGameplayTags_GameplayTagContainer          GameplayTags;                                             // 0x0210(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (0x01E0 - 0x01C0)
class UAIModule_EnvQueryTest_Overlap : public UAIModule_EnvQueryTest
{
public:
	struct FAIModule_EnvOverlapData                    OverlapData;                                              // 0x01C0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (0x0238 - 0x01C0)
class UAIModule_EnvQueryTest_Pathfinding : public UAIModule_EnvQueryTest
{
public:
	TEnumAsByte<FAIModule_AIModule_EEnvTestPathfinding> TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIModule_AIDataProviderBoolValue           PathFromContext;                                          // 0x01D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderBoolValue           SkipUnreachable;                                          // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0268 - 0x0238)
class UAIModule_EnvQueryTest_PathfindingBatch : public UAIModule_EnvQueryTest_Pathfinding
{
public:
	struct FAIModule_AIDataProviderFloatValue          ScanRangeMultiplier;                                      // 0x0238(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x01F0 - 0x01C0)
class UAIModule_EnvQueryTest_Project : public UAIModule_EnvQueryTest
{
public:
	struct FAIModule_EnvTraceData                      ProjectionData;                                           // 0x01C0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01C0 - 0x01C0)
class UAIModule_EnvQueryTest_Random : public UAIModule_EnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0288 - 0x01C0)
class UAIModule_EnvQueryTest_Trace : public UAIModule_EnvQueryTest
{
public:
	struct FAIModule_EnvTraceData                      TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderBoolValue           TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Volume
// 0x0018 (0x01D8 - 0x01C0)
class UAIModule_EnvQueryTest_Volume : public UAIModule_EnvQueryTest
{
public:
	class UClass*                                      VolumeContext;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VolumeClass;                                              // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoComplexVolumeTest : 1;                                 // 0x01D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		return ptr;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0030 (0x0410 - 0x03E0)
class UAIModule_EQSRenderingComponent : public UEngine_PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0090 (0x06C0 - 0x0630)
class AAIModule_EQSTestingPawn : public AEngine_Character
{
public:
	class UAIModule_EnvQuery*                          QueryTemplate;                                            // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIModule_EnvNamedValue>             QueryParams;                                              // 0x0638(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIModule_AIDynamicParam>            QueryConfig;                                              // 0x0648(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAIModule_AIModule_EEnvQueryHightlightMode         HighlightMode;                                            // 0x0660(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x0664(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x0664(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x0664(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0664(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x0664(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	TEnumAsByte<FAIModule_AIModule_EEnvQueryRunMode>   QueryingMode;                                             // 0x0668(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FEngine_NavAgentProperties                  NavAgentProperties;                                       // 0x0670(0x0030) (Edit)
	unsigned char                                      UnknownData03[0x20];                                      // 0x06A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UAIModule_GenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

};


// Class AIModule.GridPathAIController
// 0x0000 (0x0320 - 0x0320)
class AAIModule_GridPathAIController : public AAIModule_AIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UAIModule_EnvQueryGenerator_Donut : public UAIModule_EnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIModule_AIDataProviderFloatValue          InnerRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          OuterRadius;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderIntValue            NumberOfRings;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderIntValue            PointsPerRing;                                            // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	struct FAIModule_EnvDirection                      ArcDirection;                                             // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FAIModule_AIDataProviderFloatValue          ArcAngle;                                                 // 0x0160(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0048 - 0x0048)
class UAIModule_NavFilter_AIControllerDefault : public UNavigationSystem_NavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x0288 - 0x0258)
class UAIModule_GridPathFollowingComponent : public UAIModule_PathFollowingComponent
{
public:
	class UAIModule_NavLocalGridManager*               GridManager;                                              // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}

};


// Class AIModule.NavLocalGridManager
// 0x0030 (0x0058 - 0x0028)
class UAIModule_NavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}


	bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.PathFollowingManager
// 0x0000 (0x0028 - 0x0028)
class UAIModule_PathFollowingManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		return ptr;
	}

};


// Class AIModule.PawnAction
// 0x0070 (0x0098 - 0x0028)
class UAIModule_PawnAction : public UObject
{
public:
	class UAIModule_PawnAction*                        ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_PawnAction*                        ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_PawnActionsComponent*              OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIModule_BrainComponent*                    BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0081(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult);
	class UAIModule_PawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x0098 - 0x0098)
class UAIModule_PawnAction_BlueprintBase : public UAIModule_PawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick(class AEngine_Pawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class AEngine_Pawn* ControlledPawn);
	void ActionResume(class AEngine_Pawn* ControlledPawn);
	void ActionPause(class AEngine_Pawn* ControlledPawn);
	void ActionFinished(class AEngine_Pawn* ControlledPawn, TEnumAsByte<FAIModule_AIModule_EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x00E8 - 0x0098)
class UAIModule_PawnAction_Move : public UAIModule_PawnAction
{
public:
	class AEngine_Actor*                               GoalActor;                                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00B8(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00B8(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00B8(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00B8(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00B8(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00B9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00B8 - 0x0098)
class UAIModule_PawnAction_Repeat : public UAIModule_PawnAction
{
public:
	class UAIModule_PawnAction*                        ActionToRepeat;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIModule_PawnAction*                        RecentActionCopy;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<FAIModule_AIModule_EPawnActionFailHandling> ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0028 (0x00C0 - 0x0098)
class UAIModule_PawnAction_Sequence : public UAIModule_PawnAction
{
public:
	TArray<class UAIModule_PawnAction*>                ActionSequence;                                           // 0x0098(0x0010) (ZeroConstructor)
	TEnumAsByte<FAIModule_AIModule_EPawnActionFailHandling> ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UAIModule_PawnAction*                        RecentActionCopy;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00A8 - 0x0098)
class UAIModule_PawnAction_Wait : public UAIModule_PawnAction
{
public:
	float                                              TimeToWait;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x009C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x00E8 - 0x00B0)
class UAIModule_PawnActionsComponent : public UEngine_ActorComponent
{
public:
	class AEngine_Pawn*                                ControlledPawn;                                           // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIModule_PawnActionStack>           ActionStacks;                                             // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FAIModule_PawnActionEvent>           ActionEvents;                                             // 0x00C8(0x0010) (ZeroConstructor)
	class UAIModule_PawnAction*                        CurrentAction;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	bool K2_PushAction(class UAIModule_PawnAction* NewAction, TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class AEngine_Pawn* Pawn, class UAIModule_PawnAction* Action, TEnumAsByte<FAIModule_AIModule_EAIRequestPriority> Priority);
	TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> K2_ForceAbortAction(class UAIModule_PawnAction* ActionToAbort);
	TEnumAsByte<FAIModule_AIModule_EPawnActionAbortState> K2_AbortAction(class UAIModule_PawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x00F8 - 0x00B0)
class UAIModule_PawnSensingComponent : public UEngine_ActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class AEngine_Pawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class AEngine_Pawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UAIModule_VisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UAIModule_BTDecorator_SetTagCooldown : public UAIModule_BTDecorator
{
public:
	struct FGameplayTags_GameplayTag                   CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UAIModule_EnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
