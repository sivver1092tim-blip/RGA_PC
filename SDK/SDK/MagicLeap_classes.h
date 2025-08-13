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

// Class MagicLeap.InAppPurchaseComponent
// 0x0078 (0x0128 - 0x00B0)
class UMagicLeap_InAppPurchaseComponent : public UEngine_ActorComponent
{
public:
	struct FScriptMulticastDelegate                    InAppPurchaseLogMessage;                                  // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GetItemsDetailsSuccess;                                   // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GetItemsDetailsFailure;                                   // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PurchaseConfirmationSuccess;                              // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PurchaseConfirmationFailure;                              // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GetPurchaseHistorySuccess;                                // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GetPurchaseHistoryFailure;                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.InAppPurchaseComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.InAppPurchaseComponent");
		return ptr;
	}


	bool TryPurchaseItemAsync(const struct FMagicLeap_PurchaseItemDetails& ItemDetails);
	bool TryGetPurchaseHistoryAsync(int InNumPages);
	bool TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs);
	void PurchaseConfirmationSuccess__DelegateSignature(const struct FMagicLeap_PurchaseConfirmation& PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FMagicLeap_PurchaseConfirmation> PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FMagicLeap_PurchaseItemDetails> ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};


// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0030 (0x0170 - 0x0140)
class UMagicLeap_LuminApplicationLifecycleComponent : public UEngine_ApplicationLifecycleComponent
{
public:
	struct FScriptMulticastDelegate                    DeviceHasReactivatedDelegate;                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DeviceWillEnterRealityModeDelegate;                       // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DeviceWillGoInStandbyDelegate;                            // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.LuminApplicationLifecycleComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.LuminApplicationLifecycleComponent");
		return ptr;
	}

};


// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0090 (0x01D0 - 0x0140)
class UMagicLeap_MagicLeapHeadTrackingNotificationsComponent : public UHeadMountedDisplay_VRNotificationsComponent
{
public:
	struct FScriptMulticastDelegate                    OnHeadTrackingLost;                                       // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecovered;                                  // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecoveryFailed;                             // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeadTrackingNewSessionStarted;                          // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0180(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
		return ptr;
	}

};


// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeap_MagicLeapHMDFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapHMDFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapHMDFunctionLibrary");
		return ptr;
	}


	void STATIC_SetStabilizationDepthActor(class AEngine_Actor* InStabilizationDepthActor, bool bSetFocusActor);
	void STATIC_SetFocusActor(class AEngine_Actor* InFocusActor, bool bSetStabilizationActor);
	void STATIC_SetBaseRotation(const struct FRotator& InBaseRotation);
	void STATIC_SetBasePosition(const struct FVector& InBasePosition);
	void STATIC_SetBaseOrientation(const struct FQuat& InBaseOrientation);
	bool STATIC_SetAppReady();
	bool STATIC_IsRunningOnMagicLeapHMD();
	int STATIC_GetMLSDKVersionRevision();
	int STATIC_GetMLSDKVersionMinor();
	int STATIC_GetMLSDKVersionMajor();
	struct FString STATIC_GetMLSDKVersion();
	bool STATIC_GetHeadTrackingState(struct FMagicLeap_MagicLeapHeadTrackingState* State);
	bool STATIC_GetHeadTrackingMapEvents();
};


// Class MagicLeap.MagicLeapSettings
// 0x0008 (0x0030 - 0x0028)
class UMagicLeap_MagicLeapSettings : public UObject
{
public:
	bool                                               bEnableZI;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseVulkanForZI;                                          // 0x0029(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseMLAudioForZI;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapSettings");
		return ptr;
	}

};


// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000 (0x0028 - 0x0028)
class UMagicLeap_MagicLeapMeshBlockSelectorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapMeshBlockSelectorInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapMeshBlockSelectorInterface");
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeap_MagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeap_MagicLeapMeshBlockRequest>* RequestedMesh);
};


// Class MagicLeap.MeshTrackerComponent
// 0x0090 (0x0280 - 0x01F0)
class UMagicLeap_MeshTrackerComponent : public UEngine_SceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                     // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               ScanWorld;                                                // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FMagicLeap_MagicLeap_EMagicLeapMeshType            MeshType;                                                 // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	class UEngine_BoxComponent*                        BoundingVolume;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FMagicLeap_MagicLeap_EMagicLeapMeshLOD             LevelOfDetail;                                            // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              PerimeterOfGapsToFill;                                    // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Planarize;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              DisconnectedSectionArea;                                  // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FMagicLeap_MagicLeap_EMagicLeapMeshVertexColorMode VertexColorMode;                                          // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x022B(0x0005) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveOverlappingTriangles;                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UMRMesh_MRMeshComponent*                     MRMesh;                                                   // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                BricksPerFrame;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MeshTrackerComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MeshTrackerComponent");
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeap_MagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeap_MagicLeapMeshBlockRequest>* RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	int GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(const TScriptInterface<class UMagicLeap_MagicLeapMeshBlockSelectorInterface>& Selector);
};


// Class MagicLeap.MagicLeapRaycastComponent
// 0x0068 (0x0118 - 0x00B0)
class UMagicLeap_MagicLeapRaycastComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastComponent");
		return ptr;
	}


	bool RequestRaycast(const struct FMagicLeap_MagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeap_MagicLeapRaycastHitResult& HitResult);
};


// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeap_MagicLeapRaycastFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastFunctionLibrary");
		return ptr;
	}


	struct FMagicLeap_MagicLeapRaycastQueryParams STATIC_MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
