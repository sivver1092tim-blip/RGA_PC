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

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture9Slice
struct UVaTexAtlasPlugin_VtaPluginFunctionLibrary_DrawSlateTexture9Slice_Params
{
	class AEngine_HUD*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaTexAtlasPlugin_VtaSlateTexture*           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureU;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureUWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureVHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginLeft;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginTop;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginRight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginBottom;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBlendMode>             BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.DrawSlateTexture
struct UVaTexAtlasPlugin_VtaPluginFunctionLibrary_DrawSlateTexture_Params
{
	class AEngine_HUD*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVaTexAtlasPlugin_VtaSlateTexture*           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureU;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureUWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureVHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBlendMode>             BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaPluginFunctionLibrary.CopyBrushWithSlateTexture
struct UVaTexAtlasPlugin_VtaPluginFunctionLibrary_CopyBrushWithSlateTexture_Params
{
	class UVaTexAtlasPlugin_VtaSlateTexture*           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       SourceBrush;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions
struct UVaTexAtlasPlugin_VtaSlateTexture_GetDimensions_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion
struct UVaTexAtlasPlugin_VtaSlateTexture_CreateRegion_Params
{
	struct FSlateCore_Margin                           Margin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UVaTexAtlasPlugin_VtaSlateTexture*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
