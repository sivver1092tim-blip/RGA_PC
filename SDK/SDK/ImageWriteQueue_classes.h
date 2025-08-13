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

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageWriteQueue_ImageWriteBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}


	void STATIC_ExportToDisk(class UEngine_Texture* Texture, const struct FString& Filename, const struct FImageWriteQueue_ImageWriteOptions& Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
