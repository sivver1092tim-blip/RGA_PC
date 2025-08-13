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

// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLink_LiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLink_LiveLinkBasicFrameInterpolationProcessor : public ULiveLinkInterface_LiveLinkFrameInterpolationProcessor
{
public:
	bool                                               bInterpolatePropertyValues;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0029(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (0x0050 - 0x0040)
class ULiveLink_LiveLinkAnimationFrameInterpolationProcessor : public ULiveLink_LiveLinkBasicFrameInterpolationProcessor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (0x0040 - 0x0028)
class ULiveLink_LiveLinkAnimationRoleToTransform : public ULiveLinkInterface_LiveLinkFrameTranslator
{
public:
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (0x00E0 - 0x00D8)
class ULiveLink_LiveLinkAnimationVirtualSubject : public ULiveLinkInterface_LiveLinkVirtualSubject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLink_LiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkInterface_LiveLinkFramePreProcessor
{
public:
	FLiveLink_LiveLink_ELiveLinkAxis                   AxisX;                                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FLiveLink_LiveLink_ELiveLinkAxis                   AxisY;                                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FLiveLink_LiveLink_ELiveLinkAxis                   AxisZ;                                                    // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x002B(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (0x0040 - 0x0040)
class ULiveLink_LiveLinkAnimationAxisSwitchPreProcessor : public ULiveLink_LiveLinkTransformAxisSwitchPreProcessor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLink_LiveLinkBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}


	void STATIC_TransformNames(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	void STATIC_TransformName(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FName* Name);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey, bool bEnabled);
	bool STATIC_RemoveSource(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	void STATIC_ParentBoneSpaceTransform(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_NumberOfTransforms(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle);
	bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	bool STATIC_IsSourceStillValid(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName);
	bool STATIC_HasParent(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByName(const struct FName& TransformName, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByIndex(int TransformIndex, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform);
	class UClass* STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey);
	struct FText STATIC_GetSourceType(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceStatus(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceMachineName(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	void STATIC_GetRootTransform(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform);
	bool STATIC_GetPropertyValue(const struct FName& PropertyName, struct FLiveLinkInterface_LiveLinkBasicBlueprintData* BasicData, float* Value);
	void STATIC_GetParent(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FLiveLinkInterface_LiveLinkTransform* Parent);
	void STATIC_GetMetadata(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_SubjectMetadata* MetaData);
	TArray<struct FLiveLinkInterface_LiveLinkSubjectKey> STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal);
	class UClass* STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkInterface_LiveLinkSubjectName> STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	void STATIC_GetCurves(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	void STATIC_GetChildren(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkInterface_LiveLinkTransform>* Children);
	void STATIC_GetBasicData(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkBasicBlueprintData* BasicBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkInterface_LiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData);
	void STATIC_ComponentSpaceTransform(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_ChildCount(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform);
};


// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLink_LiveLinkComponent : public UEngine_ActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                        // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}


	void GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};


// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLink_LiveLinkDrivenComponent : public UEngine_ActorComponent
{
public:
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // 0x00B0(0x0008) (Edit)
	struct FName                                       ActorTransformBone;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyActorTransform;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRelativeLocation;                                     // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0270 - 0x0270)
class ULiveLink_LiveLinkInstance : public UEngine_AnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLink_LiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}


	void GetAvailableProviders(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, float Duration, TArray<struct FLiveLink_ProviderPollResult>* AvailableProviders);
	class ULiveLink_LiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
	void STATIC_ConnectToProvider(struct FLiveLink_ProviderPollResult* Provider, struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
};


// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLink_LiveLinkMessageBusSourceFactory : public ULiveLinkInterface_LiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		return ptr;
	}

};


// Class LiveLink.LiveLinkPreset
// 0x0020 (0x0048 - 0x0028)
class ULiveLink_LiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkInterface_LiveLinkSourcePreset> Sources;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkInterface_LiveLinkSubjectPreset> Subjects;                                                 // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		return ptr;
	}


	void BuildFromClient();
	bool ApplyToClient();
};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLink_LiveLinkRemapAsset : public ULiveLink_LiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(const struct FName& CurveName);
	struct FName GetRemappedBoneName(const struct FName& BoneName);
};


// Class LiveLink.LiveLinkSettings
// 0x0078 (0x00A0 - 0x0028)
class ULiveLink_LiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLink_LiveLinkRoleProjectSetting> DefaultRoleSettings;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class UClass*                                      FrameInterpolationProcessor;                              // 0x0038(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FEngine_DirectoryPath                       PresetSaveDir;                                            // 0x0040(0x0010) (Edit, Config)
	double                                             MessageBusPingRequestFrequency;                           // 0x0050(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatFrequency;                             // 0x0058(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatTimeout;                               // 0x0060(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusTimeBeforeRemovingInactiveSource;               // 0x0068(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                    // 0x0070(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                ValidColor;                                               // 0x0078(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                InvalidColor;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSource;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSubject;                                          // 0x0099(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x009A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (0x0080 - 0x0030)
class ULiveLink_LiveLinkTimeSynchronizationSource : public UTimeManagement_TimeSynchronizationSource
{
public:
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // 0x0030(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
