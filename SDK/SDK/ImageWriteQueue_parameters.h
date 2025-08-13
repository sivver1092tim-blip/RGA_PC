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

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
struct UImageWriteQueue_ImageWriteBlueprintLibrary_ExportToDisk_Params
{
	class UEngine_Texture*                             Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FImageWriteQueue_ImageWriteOptions          Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
