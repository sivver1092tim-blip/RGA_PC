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

// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTasks_GameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	FGameplayTasks_GameplayTasks_ETaskResourceOverlapPolicy ResourceOverlapPolicy;                                    // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x25];                                      // 0x003B(0x0025) MISSED OFFSET
	class UGameplayTasks_GameplayTask*                 ChildTask;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTasks_GameplayTask_SpawnActor : public UGameplayTasks_GameplayTask
{
public:
	struct FScriptMulticastDelegate                    success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}


	class UGameplayTasks_GameplayTask_SpawnActor* STATIC_SpawnActor(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AEngine_Actor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AEngine_Actor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0098 - 0x0068)
class UGameplayTasks_GameplayTask_TimeLimitedExecution : public UGameplayTasks_GameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTasks_GameplayTask_WaitDelay : public UGameplayTasks_GameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}


	class UGameplayTasks_GameplayTask_WaitDelay* STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTasks_GameplayTask_ClaimResource : public UGameplayTasks_GameplayTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	class UGameplayTasks_GameplayTask_ClaimResource* STATIC_ClaimResources(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	class UGameplayTasks_GameplayTask_ClaimResource* STATIC_ClaimResource(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTasks_GameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTasks_GameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (0x0120 - 0x00B0)
class UGameplayTasks_GameplayTasksComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B0(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x00BC(0x0001)
	unsigned char                                      bIsNetDirty : 1;                                          // 0x00BC(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<class UGameplayTasks_GameplayTask*>         SimulatedTasks;                                           // 0x00C0(0x0010) (Net, ZeroConstructor)
	TArray<class UGameplayTasks_GameplayTask*>         TaskPriorityQueue;                                        // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class UGameplayTasks_GameplayTask*>         TickingTasks;                                             // 0x00F0(0x0010) (ZeroConstructor)
	TArray<class UGameplayTasks_GameplayTask*>         KnownTasks;                                               // 0x0100(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 // 0x0110(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}


	void OnRep_SimulatedTasks();
	FGameplayTasks_GameplayTasks_EGameplayTaskRunResult STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTasks_GameplayTaskOwnerInterface>& TaskOwner, class UGameplayTasks_GameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
