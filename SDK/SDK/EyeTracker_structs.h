#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EyeTracker.EEyeTrackerStatus
enum class FEyeTracker_EyeTracker_EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040
struct FEyeTracker_EyeTrackerStereoGazeData
{
	struct FVector                                     LeftEyeOrigin;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEyeDirection;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeOrigin;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeDirection;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028
struct FEyeTracker_EyeTrackerGazeData
{
	struct FVector                                     GazeOrigin;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GazeDirection;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
