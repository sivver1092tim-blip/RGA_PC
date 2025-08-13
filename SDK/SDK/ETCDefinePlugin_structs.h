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

// Enum ETCDefinePlugin.EKakaoLogParamValueType
enum class FETCDefinePlugin_ETCDefinePlugin_EKakaoLogParamValueType : uint8_t
{
	EKakaoLogParamValueType__None  = 0,
	EKakaoLogParamValueType__Number = 1,
	EKakaoLogParamValueType__String = 2,
	EKakaoLogParamValueType__EKakaoLogParamValueType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ETCDefinePlugin.SingularLinkParams
// 0x0050
struct FETCDefinePlugin_SingularLinkParams
{
	TMap<struct FString, struct FString>               SingularLinksParams;                                      // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ETCDefinePlugin.KakaoLogParameter
// 0x0030
struct FETCDefinePlugin_KakaoLogParameter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
