#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtils_AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
	struct FString                                     ScreenshotName;                                           // (ConstParm, Parm, ZeroConstructor)
	float                                              MaxGlobalError;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLocalError;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapNameOverride;                                          // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
