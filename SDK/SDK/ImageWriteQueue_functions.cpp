
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

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FImageWriteQueue_ImageWriteOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)

void UImageWriteQueue_ImageWriteBlueprintLibrary::STATIC_ExportToDisk(class UEngine_Texture* Texture, const struct FString& Filename, const struct FImageWriteQueue_ImageWriteOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	UImageWriteQueue_ImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.Texture = Texture;
	params.Filename = Filename;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
