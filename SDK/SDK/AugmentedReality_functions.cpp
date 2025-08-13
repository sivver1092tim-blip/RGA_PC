
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

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARSessionConfig::ShouldResetTrackedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UAugmentedReality_ARSessionConfig_ShouldResetTrackedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARSessionConfig::ShouldResetCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UAugmentedReality_ARSessionConfig_ShouldResetCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARSessionConfig::ShouldRenderCameraOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UAugmentedReality_ARSessionConfig_ShouldRenderCameraOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARSessionConfig::ShouldEnableCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UAugmentedReality_ARSessionConfig_ShouldEnableCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARSessionConfig::ShouldEnableAutoFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UAugmentedReality_ARSessionConfig_ShouldEnableAutoFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          WorldMapData                   (Parm, ZeroConstructor)

void UAugmentedReality_ARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UAugmentedReality_ARSessionConfig_SetWorldMapData_Params params;
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature       (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetSessionTrackingFeatureToEnable(FAugmentedReality_AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	UAugmentedReality_ARSessionConfig_SetSessionTrackingFeatureToEnable_Params params;
	params.InSessionTrackingFeature = InSessionTrackingFeature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UAugmentedReality_ARSessionConfig_SetResetTrackedObjects_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UAugmentedReality_ARSessionConfig_SetResetCameraTracking_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate InUpdate                       (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetFaceTrackingUpdate(FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate InUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UAugmentedReality_ARSessionConfig_SetFaceTrackingUpdate_Params params;
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFaceTrackingDirection InDirection                    (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetFaceTrackingDirection(FAugmentedReality_AugmentedReality_EARFaceTrackingDirection InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UAugmentedReality_ARSessionConfig_SetFaceTrackingDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UAugmentedReality_ARSessionConfig_SetEnableAutoFocus_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAugmentedReality_ARVideoFormat NewFormat                      (Parm)

void UAugmentedReality_ARSessionConfig::SetDesiredVideoFormat(const struct FAugmentedReality_ARVideoFormat& NewFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UAugmentedReality_ARSessionConfig_SetDesiredVideoFormat_Params params;
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARCandidateObject*> InCandidateObjects             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAugmentedReality_ARSessionConfig::SetCandidateObjectList(TArray<class UAugmentedReality_ARCandidateObject*> InCandidateObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UAugmentedReality_ARSessionConfig_SetCandidateObjectList_Params params;
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UAugmentedReality_ARSessionConfig::GetWorldMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UAugmentedReality_ARSessionConfig_GetWorldMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARWorldAlignment ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARWorldAlignment UAugmentedReality_ARSessionConfig::GetWorldAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UAugmentedReality_ARSessionConfig_GetWorldAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARSessionType UAugmentedReality_ARSessionConfig::GetSessionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UAugmentedReality_ARSessionConfig_GetSessionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARPlaneDetectionMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARPlaneDetectionMode UAugmentedReality_ARSessionConfig::GetPlaneDetectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UAugmentedReality_ARSessionConfig_GetPlaneDetectionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAugmentedReality_ARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UAugmentedReality_ARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARLightEstimationMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARLightEstimationMode UAugmentedReality_ARSessionConfig::GetLightEstimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UAugmentedReality_ARSessionConfig_GetLightEstimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFrameSyncMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARFrameSyncMode UAugmentedReality_ARSessionConfig::GetFrameSyncMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UAugmentedReality_ARSessionConfig_GetFrameSyncMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate UAugmentedReality_ARSessionConfig::GetFaceTrackingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UAugmentedReality_ARSessionConfig_GetFaceTrackingUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFaceTrackingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARFaceTrackingDirection UAugmentedReality_ARSessionConfig::GetFaceTrackingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UAugmentedReality_ARSessionConfig_GetFaceTrackingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EAREnvironmentCaptureProbeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EAREnvironmentCaptureProbeType UAugmentedReality_ARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UAugmentedReality_ARSessionConfig_GetEnvironmentCaptureProbeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionTrackingFeature ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARSessionTrackingFeature UAugmentedReality_ARSessionConfig::GetEnabledSessionTrackingFeature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	UAugmentedReality_ARSessionConfig_GetEnabledSessionTrackingFeature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAugmentedReality_ARVideoFormat ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAugmentedReality_ARVideoFormat UAugmentedReality_ARSessionConfig::GetDesiredVideoFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UAugmentedReality_ARSessionConfig_GetDesiredVideoFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAugmentedReality_ARCandidateObject*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UAugmentedReality_ARCandidateObject*> UAugmentedReality_ARSessionConfig::GetCandidateObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UAugmentedReality_ARSessionConfig_GetCandidateObjectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAugmentedReality_ARCandidateImage*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UAugmentedReality_ARCandidateImage*> UAugmentedReality_ARSessionConfig::GetCandidateImageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UAugmentedReality_ARSessionConfig_GetCandidateImageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARCandidateObject* CandidateObject                (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::AddCandidateObject(class UAugmentedReality_ARCandidateObject* CandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UAugmentedReality_ARSessionConfig_AddCandidateObject_Params params;
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARCandidateImage* NewCandidateImage              (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARSessionConfig::AddCandidateImage(class UAugmentedReality_ARCandidateImage* NewCandidateImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UAugmentedReality_ARSessionConfig_AddCandidateImage_Params params;
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UAugmentedReality_ARTrackedGeometry* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTrackedGeometry* UAugmentedReality_ARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FAugmentedReality_ARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	UAugmentedReality_ARTraceResultLibrary_GetTrackedGeometry_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// FAugmentedReality_AugmentedReality_EARLineTraceChannels ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARLineTraceChannels UAugmentedReality_ARTraceResultLibrary::STATIC_GetTraceChannel(const struct FAugmentedReality_ARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	UAugmentedReality_ARTraceResultLibrary_GetTraceChannel_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FAugmentedReality_ARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	UAugmentedReality_ARTraceResultLibrary_GetLocalToWorldTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FAugmentedReality_ARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	UAugmentedReality_ARTraceResultLibrary_GetLocalToTrackingTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FAugmentedReality_ARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	UAugmentedReality_ARTraceResultLibrary_GetDistanceFromCamera_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy* UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy* UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UAugmentedReality_ARBasicLightEstimate_GetAmbientIntensityLumens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UAugmentedReality_ARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UAugmentedReality_ARBasicLightEstimate::GetAmbientColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UAugmentedReality_ARBasicLightEstimate_GetAmbientColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARTrackingState UAugmentedReality_ARPin::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UAugmentedReality_ARPin_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentedReality_ARTrackedGeometry* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTrackedGeometry* UAugmentedReality_ARPin::GetTrackedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UAugmentedReality_ARPin_GetTrackedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_SceneComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEngine_SceneComponent* UAugmentedReality_ARPin::GetPinnedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UAugmentedReality_ARPin_GetPinnedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARPin::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UAugmentedReality_ARPin_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARPin::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UAugmentedReality_ARPin_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAugmentedReality_ARPin::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UAugmentedReality_ARPin_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// class UEngine_World*           World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARPin::DebugDraw(class UEngine_World* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UAugmentedReality_ARPin_DebugDraw_Params params;
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ImageData                      (Parm, ZeroConstructor)

void AAugmentedReality_ARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AAugmentedReality_ARSharedWorldGameMode_SetPreviewImageData_Params params;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AAugmentedReality_ARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AAugmentedReality_ARSharedWorldGameMode_SetARWorldSharingIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ARWorldData                    (Parm, ZeroConstructor)

void AAugmentedReality_ARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AAugmentedReality_ARSharedWorldGameMode_SetARSharedWorldData_Params params;
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AAugmentedReality_ARSharedWorldGameState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAugmentedReality_ARSharedWorldGameState* AAugmentedReality_ARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AAugmentedReality_ARSharedWorldGameMode_GetARSharedWorldGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)

void AAugmentedReality_ARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AAugmentedReality_ARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AAugmentedReality_ARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	AAugmentedReality_ARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AAugmentedReality_ARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	AAugmentedReality_ARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AAugmentedReality_ARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	AAugmentedReality_ARSharedWorldPlayerController_ClientUpdateARWorldData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            PreviewImageSize               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ARWorldDataSize                (Parm, ZeroConstructor, IsPlainOldData)

void AAugmentedReality_ARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	AAugmentedReality_ARSharedWorldPlayerController_ClientInitSharedWorld_Params params;
	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_AREnvironmentCaptureProbe* InCaptureProbe                 (Parm, ZeroConstructor, IsPlainOldData)

void AAugmentedReality_ARSkyLight::SetEnvironmentCaptureProbe(class UAugmentedReality_AREnvironmentCaptureProbe* InCaptureProbe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AAugmentedReality_ARSkyLight_SetEnvironmentCaptureProbe_Params params;
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARTrackedGeometry::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UAugmentedReality_ARTrackedGeometry_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMesh_MRMeshComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMRMesh_MRMeshComponent* UAugmentedReality_ARTrackedGeometry::GetUnderlyingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UAugmentedReality_ARTrackedGeometry_GetUnderlyingMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARTrackingState UAugmentedReality_ARTrackedGeometry::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UAugmentedReality_ARTrackedGeometry_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARObjectClassification ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARObjectClassification UAugmentedReality_ARTrackedGeometry::GetObjectClassification()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UAugmentedReality_ARTrackedGeometry_GetObjectClassification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARTrackedGeometry::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UAugmentedReality_ARTrackedGeometry_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARTrackedGeometry::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UAugmentedReality_ARTrackedGeometry_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARTrackedGeometry::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UAugmentedReality_ARTrackedGeometry_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAugmentedReality_ARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UAugmentedReality_ARTrackedGeometry_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAugmentedReality_ARTrackedGeometry::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UAugmentedReality_ARTrackedGeometry_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentedReality_ARPlaneGeometry* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARPlaneGeometry* UAugmentedReality_ARPlaneGeometry::GetSubsumedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UAugmentedReality_ARPlaneGeometry_GetSubsumedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARPlaneOrientation ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARPlaneOrientation UAugmentedReality_ARPlaneGeometry::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	UAugmentedReality_ARPlaneGeometry_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAugmentedReality_ARPlaneGeometry::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UAugmentedReality_ARPlaneGeometry_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAugmentedReality_ARPlaneGeometry::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UAugmentedReality_ARPlaneGeometry_GetCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UAugmentedReality_ARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UAugmentedReality_ARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UAugmentedReality_ARTrackedImage::GetEstimateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UAugmentedReality_ARTrackedImage_GetEstimateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentedReality_ARCandidateImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARCandidateImage* UAugmentedReality_ARTrackedImage::GetDetectedImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UAugmentedReality_ARTrackedImage_GetDetectedImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EAREye Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARFaceGeometry::GetWorldSpaceEyeTransform(FAugmentedReality_AugmentedReality_EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UAugmentedReality_ARFaceGeometry_GetWorldSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EAREye Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UAugmentedReality_ARFaceGeometry::GetLocalSpaceEyeTransform(FAugmentedReality_AugmentedReality_EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UAugmentedReality_ARFaceGeometry_GetLocalSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARFaceBlendShape BlendShape                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARFaceGeometry::GetBlendShapeValue(FAugmentedReality_AugmentedReality_EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UAugmentedReality_ARFaceGeometry_GetBlendShapeValue_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<FAugmentedReality_AugmentedReality_EARFaceBlendShape, float> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<FAugmentedReality_AugmentedReality_EARFaceBlendShape, float> UAugmentedReality_ARFaceGeometry::GetBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UAugmentedReality_ARFaceGeometry_GetBlendShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAugmentedReality_AREnvironmentCaptureProbe::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAugmentedReality_AREnvironmentCaptureProbe_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAugmentedReality_AREnvironmentCaptureProbeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_AREnvironmentCaptureProbeTexture* UAugmentedReality_AREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAugmentedReality_AREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentedReality_ARCandidateObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARCandidateObject* UAugmentedReality_ARTrackedObject::GetDetectedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UAugmentedReality_ARTrackedObject_GetDetectedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAugmentedReality_ARPose3D ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAugmentedReality_ARPose3D UAugmentedReality_ARTrackedPose::GetTrackedPoseData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");

	UAugmentedReality_ARTrackedPose_GetTrackedPoseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARCandidateImage::GetPhysicalWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UAugmentedReality_ARCandidateImage_GetPhysicalWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugmentedReality_ARCandidateImage::GetPhysicalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UAugmentedReality_ARCandidateImage_GetPhysicalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FAugmentedReality_AugmentedReality_EARCandidateImageOrientation ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARCandidateImageOrientation UAugmentedReality_ARCandidateImage::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UAugmentedReality_ARCandidateImage_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAugmentedReality_ARCandidateImage::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UAugmentedReality_ARCandidateImage_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_Texture2D*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_Texture2D* UAugmentedReality_ARCandidateImage::GetCandidateTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UAugmentedReality_ARCandidateImage_GetCandidateTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void UAugmentedReality_ARCandidateObject::SetFriendlyName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	UAugmentedReality_ARCandidateObject_SetFriendlyName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          InCandidateObject              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAugmentedReality_ARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UAugmentedReality_ARCandidateObject_SetCandidateObjectData_Params params;
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    InBoundingBox                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAugmentedReality_ARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UAugmentedReality_ARCandidateObject_SetBoundingBox_Params params;
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAugmentedReality_ARCandidateObject::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UAugmentedReality_ARCandidateObject_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UAugmentedReality_ARCandidateObject::GetCandidateObjectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UAugmentedReality_ARCandidateObject_GetCandidateObjectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FBox UAugmentedReality_ARCandidateObject::GetBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UAugmentedReality_ARCandidateObject_GetBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_SceneComponent*  ComponentToUnpin               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_UnpinComponent(class UEngine_SceneComponent* ComponentToUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	UAugmentedReality_ARBlueprintLibrary_UnpinComponent_Params params;
	params.ComponentToUnpin = ComponentToUnpin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (Final, Native, Static, Public, BlueprintCallable)

void UAugmentedReality_ARBlueprintLibrary::STATIC_StopARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	UAugmentedReality_ARBlueprintLibrary_StopARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARSessionConfig* SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_StartARSession(class UAugmentedReality_ARSessionConfig* SessionConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	UAugmentedReality_ARBlueprintLibrary_StartARSession_Params params;
	params.SessionConfig = SessionConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InAlignmentTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	UAugmentedReality_ARBlueprintLibrary_SetAlignmentTransform_Params params;
	params.InAlignmentTransform = InAlignmentTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARPin* PinToRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_RemovePin(class UAugmentedReality_ARPin* PinToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	UAugmentedReality_ARBlueprintLibrary_RemovePin_Params params;
	params.PinToRemove = PinToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UEngine_SceneComponent*  ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAugmentedReality_ARTraceResult TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAugmentedReality_ARPin* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARPin* UAugmentedReality_ARBlueprintLibrary::STATIC_PinComponentToTraceResult(class UEngine_SceneComponent* ComponentToPin, const struct FAugmentedReality_ARTraceResult& TraceResult, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	UAugmentedReality_ARBlueprintLibrary_PinComponentToTraceResult_Params params;
	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UEngine_SceneComponent*  ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              PinToWorldTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAugmentedReality_ARTrackedGeometry* TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAugmentedReality_ARPin* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARPin* UAugmentedReality_ARBlueprintLibrary::STATIC_PinComponent(class UEngine_SceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UAugmentedReality_ARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	UAugmentedReality_ARBlueprintLibrary_PinComponent_Params params;
	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (Final, Native, Static, Public, BlueprintCallable)

void UAugmentedReality_ARBlueprintLibrary::STATIC_PauseARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	UAugmentedReality_ARBlueprintLibrary_PauseARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAugmentedReality_ARTraceResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAugmentedReality_ARTraceResult> UAugmentedReality_ARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	UAugmentedReality_ARBlueprintLibrary_LineTraceTrackedObjects3D_Params params;
	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ScreenCoord                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAugmentedReality_ARTraceResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAugmentedReality_ARTraceResult> UAugmentedReality_ARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	UAugmentedReality_ARBlueprintLibrary_LineTraceTrackedObjects_Params params;
	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARBlueprintLibrary::STATIC_IsSessionTypeSupported(FAugmentedReality_AugmentedReality_EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	UAugmentedReality_ARBlueprintLibrary_IsSessionTypeSupported_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData)
// FAugmentedReality_AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARBlueprintLibrary::STATIC_IsSessionTrackingFeatureSupported(FAugmentedReality_AugmentedReality_EARSessionType SessionType, FAugmentedReality_AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");

	UAugmentedReality_ARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params;
	params.SessionType = SessionType;
	params.SessionTrackingFeature = SessionTrackingFeature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARBlueprintLibrary::STATIC_IsARSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	UAugmentedReality_ARBlueprintLibrary_IsARSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FAugmentedReality_AugmentedReality_EARWorldMappingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARWorldMappingState UAugmentedReality_ARBlueprintLibrary::STATIC_GetWorldMappingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	UAugmentedReality_ARBlueprintLibrary_GetWorldMappingStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FAugmentedReality_AugmentedReality_EARTrackingQualityReason ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARTrackingQualityReason UAugmentedReality_ARBlueprintLibrary::STATIC_GetTrackingQualityReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	UAugmentedReality_ARBlueprintLibrary_GetTrackingQualityReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FAugmentedReality_AugmentedReality_EARTrackingQuality ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FAugmentedReality_AugmentedReality_EARTrackingQuality UAugmentedReality_ARBlueprintLibrary::STATIC_GetTrackingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	UAugmentedReality_ARBlueprintLibrary_GetTrackingQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FAugmentedReality_AugmentedReality_EARSessionType SessionType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAugmentedReality_ARVideoFormat> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAugmentedReality_ARVideoFormat> UAugmentedReality_ARBlueprintLibrary::STATIC_GetSupportedVideoFormats(FAugmentedReality_AugmentedReality_EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	UAugmentedReality_ARBlueprintLibrary_GetSupportedVideoFormats_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAugmentedReality_ARSessionConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARSessionConfig* UAugmentedReality_ARBlueprintLibrary::STATIC_GetSessionConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	UAugmentedReality_ARBlueprintLibrary_GetSessionConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UAugmentedReality_ARBlueprintLibrary::STATIC_GetPointCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	UAugmentedReality_ARBlueprintLibrary_GetPointCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARTextureCameraImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTextureCameraImage* UAugmentedReality_ARBlueprintLibrary::STATIC_GetPersonSegmentationImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");

	UAugmentedReality_ARBlueprintLibrary_GetPersonSegmentationImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARTextureCameraImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTextureCameraImage* UAugmentedReality_ARBlueprintLibrary::STATIC_GetPersonSegmentationDepthImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");

	UAugmentedReality_ARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAugmentedReality_ARLightEstimate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARLightEstimate* UAugmentedReality_ARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	UAugmentedReality_ARBlueprintLibrary_GetCurrentLightEstimate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARTextureCameraImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTextureCameraImage* UAugmentedReality_ARBlueprintLibrary::STATIC_GetCameraImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	UAugmentedReality_ARBlueprintLibrary_GetCameraImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARTextureCameraDepth* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARTextureCameraDepth* UAugmentedReality_ARBlueprintLibrary::STATIC_GetCameraDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	UAugmentedReality_ARBlueprintLibrary_GetCameraDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAugmentedReality_ARSessionStatus ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAugmentedReality_ARSessionStatus UAugmentedReality_ARBlueprintLibrary::STATIC_GetARSessionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	UAugmentedReality_ARBlueprintLibrary_GetARSessionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARTrackedPose*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARTrackedPose*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTrackedPoses()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");

	UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPoses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARTrackedPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARTrackedPoint*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTrackedPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARPlaneGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARPlaneGeometry*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPlanes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARTrackedImage*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARTrackedImage*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTrackedImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	UAugmentedReality_ARBlueprintLibrary_GetAllTrackedImages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_AREnvironmentCaptureProbe*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_AREnvironmentCaptureProbe*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	UAugmentedReality_ARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FAugmentedReality_ARPose2D> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAugmentedReality_ARPose2D> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllTracked2DPoses()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");

	UAugmentedReality_ARBlueprintLibrary_GetAllTracked2DPoses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARPin*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARPin*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	UAugmentedReality_ARBlueprintLibrary_GetAllPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAugmentedReality_ARTrackedGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAugmentedReality_ARTrackedGeometry*> UAugmentedReality_ARBlueprintLibrary::STATIC_GetAllGeometries()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	UAugmentedReality_ARBlueprintLibrary_GetAllGeometries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARTrackedGeometry* TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UAugmentedReality_ARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	UAugmentedReality_ARBlueprintLibrary_DebugDrawTrackedGeometry_Params params;
	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARPin* ARPin                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UAugmentedReality_ARBlueprintLibrary::STATIC_DebugDrawPin(class UAugmentedReality_ARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	UAugmentedReality_ARBlueprintLibrary_DebugDrawPin_Params params;
	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAugmentedReality_ARSessionConfig* SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_Texture2D*       CandidateTexture               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FriendlyName                   (Parm, ZeroConstructor)
// float                          PhysicalWidth                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAugmentedReality_ARCandidateImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugmentedReality_ARCandidateImage* UAugmentedReality_ARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UAugmentedReality_ARSessionConfig* SessionConfig, class UEngine_Texture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	UAugmentedReality_ARBlueprintLibrary_AddRuntimeCandidateImage_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentedReality_ARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	UAugmentedReality_ARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params;
	params.Location = Location;
	params.Extent = Extent;

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
