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

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAudio_MagicLeapAudioFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool STATIC_SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
