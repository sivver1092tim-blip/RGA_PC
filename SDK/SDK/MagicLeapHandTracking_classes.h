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

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandTracking_LiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkInterface_LiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		return ptr;
	}

};


// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		return ptr;
	}


	void STATIC_SetStaticGestureConfidenceThreshold(FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence);
	bool STATIC_SetConfiguration(TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	float STATIC_GetStaticGestureConfidenceThreshold(FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture);
	bool STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle);
	bool STATIC_GetHandThumbTip(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
	bool STATIC_GetHandIndexFingerTip(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
	bool STATIC_GetHandCenterNormalized(FInputCore_InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized);
	bool STATIC_GetHandCenter(FInputCore_InputCore_EControllerHand Hand, struct FTransform* HandCenter);
	bool STATIC_GetGestureKeypointTransform(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
	bool STATIC_GetGestureKeypoints(FInputCore_InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints);
	bool STATIC_GetCurrentGestureConfidence(FInputCore_InputCore_EControllerHand Hand, float* Confidence);
	bool STATIC_GetCurrentGesture(FInputCore_InputCore_EControllerHand Hand, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture);
	bool STATIC_GetConfiguration(TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
