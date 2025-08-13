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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosSolverEngine_ChaosDebugDrawComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosSolverEngine_ChaosEventListenerComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (0x0270 - 0x00B8)
class UChaosSolverEngine_ChaosGameplayEventDispatcher : public UChaosSolverEngine_ChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00B8(0x0110) MISSED OFFSET
	TMap<class UEngine_PrimitiveComponent*, struct FChaosSolverEngine_ChaosHandlerSet> CollisionEventRegistrations;                              // 0x01C8(0x0050) (ZeroConstructor)
	TMap<class UEngine_PrimitiveComponent*, struct FChaosSolverEngine_BreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0218(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngine_ChaosNotifyHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngine_ChaosSolverEngineBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		return ptr;
	}


	struct FEngine_HitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosSolverEngine_ChaosPhysicsCollisionInfo& PhysicsCollision);
};


// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngine_ChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x0088 (0x02A0 - 0x0218)
class AChaosSolverEngine_ChaosSolverActor : public AEngine_Actor
{
public:
	float                                              TimeStepMultiplier;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FChaosSolverEngine_ChaosSolverEngine_EClusterConnectionTypeEnum ClusterUnionConnectionType;                               // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoGenerateCollisionData;                                  // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x022E(0x0002) MISSED OFFSET
	struct FChaosSolvers_SolverCollisionFilterSettings CollisionFilterSettings;                                  // 0x0230(0x0010) (Edit)
	bool                                               DoGenerateBreakingData;                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	struct FChaosSolvers_SolverBreakingFilterSettings  BreakingFilterSettings;                                   // 0x0244(0x0010) (Edit)
	bool                                               DoGenerateTrailingData;                                   // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FChaosSolvers_SolverTrailingFilterSettings  TrailingFilterSettings;                                   // 0x0258(0x0010) (Edit)
	bool                                               bHasFloor;                                                // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FChaosSolverEngine_ChaosDebugSubstepControl ChaosDebugSubstepControl;                                 // 0x0274(0x0003) (Edit)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0277(0x0001) MISSED OFFSET
	class UEngine_BillboardComponent*                  SpriteComponent;                                          // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0280(0x0018) MISSED OFFSET
	class UChaosSolverEngine_ChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;                         // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}


	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};


// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (0x0058 - 0x0038)
class UChaosSolverEngine_ChaosSolverSettings : public UEngine_DeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
