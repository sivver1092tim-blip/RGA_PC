
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

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Confidence                     (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_SetStaticGestureConfidenceThreshold(FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTrackingEnabled               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_SetConfiguration(TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params params;
	params.StaticGesturesToActivate = StaticGesturesToActivate;
	params.KeypointsFilterLevel = KeypointsFilterLevel;
	params.GestureFilterLevel = GestureFilterLevel;
	params.bTrackingEnabled = bTrackingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetStaticGestureConfidenceThreshold(FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Secondary                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetHandThumbTip(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Secondary != nullptr)
		*Secondary = params.Secondary;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Pointer                        (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetHandIndexFingerTip(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pointer != nullptr)
		*Pointer = params.Pointer;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HandCenterNormalized           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenterNormalized(FInputCore_InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = params.HandCenterNormalized;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              HandCenter                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenter(FInputCore_InputCore_EControllerHand Hand, struct FTransform* HandCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HandCenter != nullptr)
		*HandCenter = params.HandCenter;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                       (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypointTransform(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Keypoints                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypoints(FInputCore_InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keypoints != nullptr)
		*Keypoints = params.Keypoints;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Confidence                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGestureConfidence(FInputCore_InputCore_EControllerHand Hand, float* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGesture(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gesture != nullptr)
		*Gesture = params.Gesture;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures           (Parm, OutParm, ZeroConstructor)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bTrackingEnabled               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary::STATIC_GetConfiguration(TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration");

	UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = params.ActiveStaticGestures;
	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = params.KeypointsFilterLevel;
	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = params.GestureFilterLevel;
	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = params.bTrackingEnabled;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
