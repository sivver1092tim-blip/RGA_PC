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

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTracker_EyeTrackerFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	void STATIC_SetEyeTrackedPlayer(class AEngine_PlayerController* PlayerController);
	bool STATIC_IsStereoGazeDataAvailable();
	bool STATIC_IsEyeTrackerConnected();
	bool STATIC_GetStereoGazeData(struct FEyeTracker_EyeTrackerStereoGazeData* OutGazeData);
	bool STATIC_GetGazeData(struct FEyeTracker_EyeTrackerGazeData* OutGazeData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
