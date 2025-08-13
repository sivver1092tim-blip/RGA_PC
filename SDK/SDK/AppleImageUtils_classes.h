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

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0060 (0x0088 - 0x0028)
class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	struct FAppleImageUtils_AppleImageUtilsImageConversionResult ConversionResult;                                         // 0x0060(0x0020) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		return ptr;
	}


	class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToTIFF(class UEngine_Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToPNG(class UEngine_Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToJPEG(class UEngine_Texture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToHEIF(class UEngine_Texture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate);
};


// Class AppleImageUtils.AppleImageInterface
// 0x0000 (0x0028 - 0x0028)
class UAppleImageUtils_AppleImageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class AppleImageUtils.AppleImageInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
