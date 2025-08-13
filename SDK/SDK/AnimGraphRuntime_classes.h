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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimGraphRuntime_AnimCustomInstance : public UEngine_AnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimGraphRuntime_AnimNotify_PlayMontageNotifyWindow : public UEngine_AnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimGraphRuntime_AnimSequencerInstance : public UAnimGraphRuntime_AnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimGraphRuntime_KismetAnimationLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}


	void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos);
	void STATIC_K2_StartProfilingTimer();
	struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& targetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
	float STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix);
	float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class UEngine_SkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	struct FVector STATIC_K2_DirectionBetweenSockets(class UEngine_SkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo);
	float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class UEngine_SkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<FEngine_Engine_ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, int NumberOfSamples, float VelocityMin, float VelocityMax, FAnimGraphRuntime_AnimGraphRuntime_EEasingFuncType EasingType, const struct FEngine_RuntimeFloatCurve& CustomCurve, struct FAnimGraphRuntime_PositionHistory* History);
	float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, int NumberOfSamples, float VelocityMin, float VelocityMax, struct FAnimGraphRuntime_PositionHistory* History);
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UAnimGraphRuntime_PlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}


	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FEngine_BranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FEngine_BranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UEngine_AnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UEngine_AnimMontage* Montage, bool bInterrupted);
	class UAnimGraphRuntime_PlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class UEngine_SkeletalMeshComponent* InSkeletalMeshComponent, class UEngine_AnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimGraphRuntime_AnimNotify_PlayMontageNotify : public UEngine_AnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
