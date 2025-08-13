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

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetFixationComfort(struct FMagicLeapEyeTracker_MagicLeapFixationComfort* FixationComfort);
	bool STATIC_GetEyeBlinkState(struct FMagicLeapEyeTracker_MagicLeapEyeBlinkState* BlinkState);
	FMagicLeapEyeTracker_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus STATIC_GetCalibrationStatus();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
