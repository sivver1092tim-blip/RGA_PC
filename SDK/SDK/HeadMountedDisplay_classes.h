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

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0140 - 0x00B0)
class UHeadMountedDisplay_VRNotificationsComponent : public UEngine_ActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> Origin);
	void STATIC_SetSpectatorScreenTexture(class UEngine_Texture* InTexture);
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void STATIC_SetSpectatorScreenMode(FHeadMountedDisplay_HeadMountedDisplay_ESpectatorScreenMode Mode);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EOrientPositionSelector> Options);
	bool STATIC_IsSpectatorScreenModeControllable();
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_IsHeadMountedDisplayConnected();
	bool STATIC_IsDeviceTracking(const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId);
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float STATIC_GetPixelDensity();
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDWornState> STATIC_GetHMDWornState();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void STATIC_GetDevicePose(const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	TArray<struct FHeadMountedDisplay_XRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, FHeadMountedDisplay_HeadMountedDisplay_EXRTrackedDeviceType DeviceType);
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
	void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	bool STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	struct FName STATIC_GetActiveTrackingSystemName();
	TArray<struct FName> STATIC_EnumerateMotionSources();
	bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplay_XRAssetFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	class UEngine_PrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AEngine_Actor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FHeadMountedDisplay_XRDeviceId* XRDeviceId);
	class UEngine_PrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AEngine_Actor* Target, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent : public UEngine_BlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UEngine_PrimitiveComponent*                  SpawnedComponent;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}


	class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AEngine_Actor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FHeadMountedDisplay_XRDeviceId* XRDeviceId, class UEngine_PrimitiveComponent** NewComponent);
	class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AEngine_Actor* Target, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UEngine_PrimitiveComponent** NewComponent);
};


// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplay_XRLoadingScreenFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowLoadingScreen();
	void STATIC_SetLoadingScreen(class UEngine_Texture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void STATIC_HideLoadingScreen();
	void STATIC_ClearLoadingScreenSplashes();
	void STATIC_AddLoadingScreenSplash(class UEngine_Texture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00B0 (0x0490 - 0x03E0)
class UHeadMountedDisplay_MotionControllerComponent : public UEngine_PrimitiveComponent
{
public:
	struct FName                                       MotionSource;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x03E8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	FHeadMountedDisplay_HeadMountedDisplay_ETrackingStatus CurrentTrackingStatus;                                    // 0x03EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayDeviceModel;                                      // 0x03ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03EE(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_StaticMesh*                          CustomDisplayMesh;                                        // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_MaterialInterface*>           DisplayMeshMaterialOverrides;                             // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0410(0x0060) MISSED OFFSET
	class UEngine_PrimitiveComponent*                  DisplayComponent;                                         // 0x0470(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0478(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	void SetTrackingSource(FInputCore_InputCore_EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UEngine_StaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	FInputCore_InputCore_EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
	struct FVector GetHandJointPosition(int jointIndex, bool* bValueFound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
