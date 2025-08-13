
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

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToTIFF(class UEngine_Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Params params;
	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToPNG(class UEngine_Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Params params;
	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToJPEG(class UEngine_Texture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Params params;
	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToHEIF(class UEngine_Texture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, FAppleImageUtils_AppleImageUtils_ETextureRotationDirection Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	UAppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Params params;
	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
