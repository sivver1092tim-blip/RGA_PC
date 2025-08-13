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

// Class VaTexAtlasPlugin.VtaPluginFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVaTexAtlasPlugin_VtaPluginFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaPluginFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaPluginFunctionLibrary");
		return ptr;
	}


	void STATIC_DrawSlateTexture9Slice(class AEngine_HUD* Target, class UVaTexAtlasPlugin_VtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, float MarginLeft, float MarginTop, float MarginRight, float MarginBottom, float OriginalWidth, float OriginalHeight, const struct FLinearColor& Tint, TEnumAsByte<FEngine_Engine_EBlendMode> BlendMode);
	void STATIC_DrawSlateTexture(class AEngine_HUD* Target, class UVaTexAtlasPlugin_VtaSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& Tint, TEnumAsByte<FEngine_Engine_EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot, bool bFlipX, bool bFlipY);
	struct FSlateCore_SlateBrush STATIC_CopyBrushWithSlateTexture(class UVaTexAtlasPlugin_VtaSlateTexture* Texture, const struct FSlateCore_SlateBrush& SourceBrush);
};


// Class VaTexAtlasPlugin.VtaSlateTexture
// 0x0020 (0x0048 - 0x0028)
class UVaTexAtlasPlugin_VtaSlateTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UEngine_Texture*                             AtlasTexture;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   StartUV;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   SizeUV;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaSlateTexture");
		if (!ptr)
			ptr = UObject::FindClass("Class VaTexAtlasPlugin.VtaSlateTexture");
		return ptr;
	}


	struct FVector2D GetDimensions();
	class UVaTexAtlasPlugin_VtaSlateTexture* CreateRegion(const struct FSlateCore_Margin& Margin);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
