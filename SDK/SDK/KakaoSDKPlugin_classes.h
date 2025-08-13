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

// Class KakaoSDKPlugin.KakaoSDK
// 0x0020 (0x0048 - 0x0028)
class UKakaoSDKPlugin_KakaoSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KakaoSDKPlugin.KakaoSDK");
		if (!ptr)
			ptr = UObject::FindClass("Class KakaoSDKPlugin.KakaoSDK");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
