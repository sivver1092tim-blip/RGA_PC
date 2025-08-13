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

// Class AugmentedReality.ARSessionConfig
// 0x0078 (0x00A8 - 0x0030)
class UAugmentedReality_ARSessionConfig : public UEngine_DataAsset
{
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisionForMeshData;                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateNavMeshForMeshData;                              // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMeshDataForOcclusion;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderMeshDataInWireframe;                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackSceneObjects;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePersonSegmentationForOcclusion;                       // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARWorldAlignment WorldAlignment;                                           // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARSessionType  SessionType;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARPlaneDetectionMode PlaneDetectionMode;                                       // 0x0039(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHorizontalPlaneDetection;                                // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalPlaneDetection;                                  // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoFocus;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARLightEstimationMode LightEstimationMode;                                      // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARFrameSyncMode FrameSyncMode;                                            // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCameraTracking;                                     // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTrackedObjects;                                     // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	TArray<class UAugmentedReality_ARCandidateImage*>  CandidateImages;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UAugmentedReality_ARCandidateObject*> CandidateObjects;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FAugmentedReality_ARVideoFormat             DesiredVideoFormat;                                       // 0x0080(0x000C) (Edit)
	FAugmentedReality_AugmentedReality_EARFaceTrackingDirection FaceTrackingDirection;                                    // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate FaceTrackingUpdate;                                       // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0090(0x0010) (ZeroConstructor)
	FAugmentedReality_AugmentedReality_EARSessionTrackingFeature EnabledSessionTrackingFeature;                            // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}


	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetSessionTrackingFeatureToEnable(FAugmentedReality_AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(FAugmentedReality_AugmentedReality_EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FAugmentedReality_ARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UAugmentedReality_ARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	FAugmentedReality_AugmentedReality_EARWorldAlignment GetWorldAlignment();
	FAugmentedReality_AugmentedReality_EARSessionType GetSessionType();
	FAugmentedReality_AugmentedReality_EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	FAugmentedReality_AugmentedReality_EARLightEstimationMode GetLightEstimationMode();
	FAugmentedReality_AugmentedReality_EARFrameSyncMode GetFrameSyncMode();
	FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate GetFaceTrackingUpdate();
	FAugmentedReality_AugmentedReality_EARFaceTrackingDirection GetFaceTrackingDirection();
	FAugmentedReality_AugmentedReality_EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	FAugmentedReality_AugmentedReality_EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FAugmentedReality_ARVideoFormat GetDesiredVideoFormat();
	TArray<class UAugmentedReality_ARCandidateObject*> GetCandidateObjectList();
	TArray<class UAugmentedReality_ARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UAugmentedReality_ARCandidateObject* CandidateObject);
	void AddCandidateImage(class UAugmentedReality_ARCandidateImage* NewCandidateImage);
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
class UAugmentedReality_ARTraceResultLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}


	class UAugmentedReality_ARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FAugmentedReality_ARTraceResult& TraceResult);
	FAugmentedReality_AugmentedReality_EARLineTraceChannels STATIC_GetTraceChannel(const struct FAugmentedReality_ARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToWorldTransform(const struct FAugmentedReality_ARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToTrackingTransform(const struct FAugmentedReality_ARTraceResult& TraceResult);
	float STATIC_GetDistanceFromCamera(const struct FAugmentedReality_ARTraceResult& TraceResult);
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (0x0050 - 0x0030)
class UAugmentedReality_ARBaseAsyncTaskBlueprintProxy : public UEngine_BlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (0x0080 - 0x0050)
class UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy : public UAugmentedReality_ARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}


	class UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (0x0098 - 0x0050)
class UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy : public UAugmentedReality_ARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}


	class UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
class UAugmentedReality_ARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0040 - 0x0028)
class UAugmentedReality_ARBasicLightEstimate : public UAugmentedReality_ARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};


// Class AugmentedReality.AROriginActor
// 0x0000 (0x0218 - 0x0218)
class AAugmentedReality_AROriginActor : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}

};


// Class AugmentedReality.ARPin
// 0x00C8 (0x00F0 - 0x0028)
class UAugmentedReality_ARPin : public UObject
{
public:
	class UAugmentedReality_ARTrackedGeometry*         TrackedGeometry;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_SceneComponent*                      PinnedComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARTrackingState TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                 // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}


	FAugmentedReality_AugmentedReality_EARTrackingState GetTrackingState();
	class UAugmentedReality_ARTrackedGeometry* GetTrackedGeometry();
	class UEngine_SceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UEngine_World* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (0x0368 - 0x0300)
class AAugmentedReality_ARSharedWorldGameMode : public AEngine_GameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x0304(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class AAugmentedReality_ARSharedWorldGameState* GetARSharedWorldGameState();
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (0x02B0 - 0x0278)
class AAugmentedReality_ARSharedWorldGameState : public AEngine_GameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ARWorldData;                                              // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviewImageBytesTotal;                                   // 0x0298(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesTotal;                                        // 0x029C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviewImageBytesDelivered;                               // 0x02A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesDelivered;                                    // 0x02A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (0x0570 - 0x0568)
class AAugmentedReality_ARSharedWorldPlayerController : public AEngine_PlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0568(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}


	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};


// Class AugmentedReality.ARSkyLight
// 0x0010 (0x0238 - 0x0228)
class AAugmentedReality_ARSkyLight : public AEngine_SkyLight
{
public:
	class UAugmentedReality_AREnvironmentCaptureProbe* CaptureProbe;                                             // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAugmentedReality_AREnvironmentCaptureProbe* InCaptureProbe);
};


// Class AugmentedReality.ARTexture
// 0x0020 (0x00F0 - 0x00D0)
class UAugmentedReality_ARTexture : public UEngine_Texture
{
public:
	FAugmentedReality_AugmentedReality_EARTextureType  TextureType;                                              // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x00F0 - 0x00F0)
class UAugmentedReality_ARTextureCameraImage : public UAugmentedReality_ARTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (0x00F8 - 0x00F0)
class UAugmentedReality_ARTextureCameraDepth : public UAugmentedReality_ARTexture
{
public:
	FAugmentedReality_AugmentedReality_EARDepthQuality DepthQuality;                                             // 0x00F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARDepthAccuracy DepthAccuracy;                                            // 0x00F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemporallySmoothed;                                    // 0x00F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00F3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (0x0148 - 0x0128)
class UAugmentedReality_AREnvironmentCaptureProbeTexture : public UEngine_TextureCube
{
public:
	FAugmentedReality_AugmentedReality_EARTextureType  TextureType;                                              // 0x0128(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
class UAugmentedReality_ARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x00C8 (0x00F0 - 0x0028)
class UAugmentedReality_ARTrackedGeometry : public UObject
{
public:
	struct FGuid                                       UniqueId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARTrackingState TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
	class UMRMesh_MRMeshComponent*                     UnderlyingMesh;                                           // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARObjectClassification ObjectClassification;                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET
	int                                                LastUpdateFrameNumber;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FName                                       DebugName;                                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}


	bool IsTracked();
	class UMRMesh_MRMeshComponent* GetUnderlyingMesh();
	FAugmentedReality_AugmentedReality_EARTrackingState GetTrackingState();
	FAugmentedReality_AugmentedReality_EARObjectClassification GetObjectClassification();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0030 (0x0120 - 0x00F0)
class UAugmentedReality_ARPlaneGeometry : public UAugmentedReality_ARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0104(0x0014) MISSED OFFSET
	class UAugmentedReality_ARPlaneGeometry*           SubsumedBy;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}


	class UAugmentedReality_ARPlaneGeometry* GetSubsumedBy();
	FAugmentedReality_AugmentedReality_EARPlaneOrientation GetOrientation();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x00F0 - 0x00F0)
class UAugmentedReality_ARTrackedPoint : public UAugmentedReality_ARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedImage
// 0x0010 (0x0100 - 0x00F0)
class UAugmentedReality_ARTrackedImage : public UAugmentedReality_ARTrackedGeometry
{
public:
	struct FVector2D                                   EstimatedSize;                                            // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}


	struct FVector2D GetEstimateSize();
	class UAugmentedReality_ARCandidateImage* GetDetectedImage();
};


// Class AugmentedReality.ARTrackedQRCode
// 0x0010 (0x0110 - 0x0100)
class UAugmentedReality_ARTrackedQRCode : public UAugmentedReality_ARTrackedImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	int                                                Version;                                                  // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		return ptr;
	}

};


// Class AugmentedReality.ARFaceGeometry
// 0x00F0 (0x01E0 - 0x00F0)
class UAugmentedReality_ARFaceGeometry : public UAugmentedReality_ARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	bool                                               bIsTracked;                                               // 0x00F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	TMap<FAugmentedReality_AugmentedReality_EARFaceBlendShape, float> BlendShapes;                                              // 0x00F8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0148(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(FAugmentedReality_AugmentedReality_EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(FAugmentedReality_AugmentedReality_EAREye Eye);
	float GetBlendShapeValue(FAugmentedReality_AugmentedReality_EARFaceBlendShape BlendShape);
	TMap<FAugmentedReality_AugmentedReality_EARFaceBlendShape, float> GetBlendShapes();
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0010 (0x0100 - 0x00F0)
class UAugmentedReality_AREnvironmentCaptureProbe : public UAugmentedReality_ARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UAugmentedReality_AREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}


	struct FVector GetExtent();
	class UAugmentedReality_AREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};


// Class AugmentedReality.ARTrackedObject
// 0x0000 (0x00F0 - 0x00F0)
class UAugmentedReality_ARTrackedObject : public UAugmentedReality_ARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}


	class UAugmentedReality_ARCandidateObject* GetDetectedObject();
};


// Class AugmentedReality.ARTrackedPose
// 0x0050 (0x0140 - 0x00F0)
class UAugmentedReality_ARTrackedPose : public UAugmentedReality_ARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}


	struct FAugmentedReality_ARPose3D GetTrackedPoseData();
};


// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0150 (0x0200 - 0x00B0)
class UAugmentedReality_ARTrackableNotifyComponent : public UEngine_ActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAddTrackedGeometry;                                     // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedGeometry;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedGeometry;                                  // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedPlane;                                        // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPlane;                                     // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPlane;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedPoint;                                        // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPoint;                                     // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPoint;                                     // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedImage;                                        // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedImage;                                     // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedImage;                                     // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedFace;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedFace;                                      // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedFace;                                      // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedEnvProbe;                                     // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedEnvProbe;                                  // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedEnvProbe;                                  // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedObject;                                       // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedObject;                                    // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedObject;                                    // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}

};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
class UAugmentedReality_ARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x0028 (0x0058 - 0x0030)
class UAugmentedReality_ARCandidateImage : public UEngine_DataAsset
{
public:
	class UEngine_Texture2D*                           CandidateTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARCandidateImageOrientation Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}


	float GetPhysicalWidth();
	float GetPhysicalHeight();
	FAugmentedReality_AugmentedReality_EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UEngine_Texture2D* GetCandidateTexture();
};


// Class AugmentedReality.ARCandidateObject
// 0x0040 (0x0070 - 0x0030)
class UAugmentedReality_ARCandidateObject : public UEngine_DataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}


	void SetFriendlyName(const struct FString& NewName);
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(const struct FBox& InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};


// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAugmentedReality_ARBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}


	void STATIC_UnpinComponent(class UEngine_SceneComponent* ComponentToUnpin);
	void STATIC_StopARSession();
	void STATIC_StartARSession(class UAugmentedReality_ARSessionConfig* SessionConfig);
	void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	void STATIC_RemovePin(class UAugmentedReality_ARPin* PinToRemove);
	class UAugmentedReality_ARPin* STATIC_PinComponentToTraceResult(class UEngine_SceneComponent* ComponentToPin, const struct FAugmentedReality_ARTraceResult& TraceResult, const struct FName& DebugName);
	class UAugmentedReality_ARPin* STATIC_PinComponent(class UEngine_SceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UAugmentedReality_ARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	void STATIC_PauseARSession();
	TArray<struct FAugmentedReality_ARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FAugmentedReality_ARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool STATIC_IsSessionTypeSupported(FAugmentedReality_AugmentedReality_EARSessionType SessionType);
	bool STATIC_IsSessionTrackingFeatureSupported(FAugmentedReality_AugmentedReality_EARSessionType SessionType, FAugmentedReality_AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature);
	bool STATIC_IsARSupported();
	FAugmentedReality_AugmentedReality_EARWorldMappingState STATIC_GetWorldMappingStatus();
	FAugmentedReality_AugmentedReality_EARTrackingQualityReason STATIC_GetTrackingQualityReason();
	FAugmentedReality_AugmentedReality_EARTrackingQuality STATIC_GetTrackingQuality();
	TArray<struct FAugmentedReality_ARVideoFormat> STATIC_GetSupportedVideoFormats(FAugmentedReality_AugmentedReality_EARSessionType SessionType);
	class UAugmentedReality_ARSessionConfig* STATIC_GetSessionConfig();
	TArray<struct FVector> STATIC_GetPointCloud();
	class UAugmentedReality_ARTextureCameraImage* STATIC_GetPersonSegmentationImage();
	class UAugmentedReality_ARTextureCameraImage* STATIC_GetPersonSegmentationDepthImage();
	class UAugmentedReality_ARLightEstimate* STATIC_GetCurrentLightEstimate();
	class UAugmentedReality_ARTextureCameraImage* STATIC_GetCameraImage();
	class UAugmentedReality_ARTextureCameraDepth* STATIC_GetCameraDepth();
	struct FAugmentedReality_ARSessionStatus STATIC_GetARSessionStatus();
	TArray<class UAugmentedReality_ARTrackedPose*> STATIC_GetAllTrackedPoses();
	TArray<class UAugmentedReality_ARTrackedPoint*> STATIC_GetAllTrackedPoints();
	TArray<class UAugmentedReality_ARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
	TArray<class UAugmentedReality_ARTrackedImage*> STATIC_GetAllTrackedImages();
	TArray<class UAugmentedReality_AREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
	TArray<struct FAugmentedReality_ARPose2D> STATIC_GetAllTracked2DPoses();
	TArray<class UAugmentedReality_ARPin*> STATIC_GetAllPins();
	TArray<class UAugmentedReality_ARTrackedGeometry*> STATIC_GetAllGeometries();
	void STATIC_DebugDrawTrackedGeometry(class UAugmentedReality_ARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	void STATIC_DebugDrawPin(class UAugmentedReality_ARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	class UAugmentedReality_ARCandidateImage* STATIC_AddRuntimeCandidateImage(class UAugmentedReality_ARSessionConfig* SessionConfig, class UEngine_Texture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);
	bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
