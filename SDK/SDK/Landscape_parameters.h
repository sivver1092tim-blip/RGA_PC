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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscape_LandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscape_LandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscape_LandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscape_LandscapeProxy_EditorSetLandscapeMaterial_Params
{
	class UEngine_MaterialInterface*                   NewLandscapeMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscape_LandscapeProxy_EditorApplySpline_Params
{
	class UEngine_SplineComponent*                     InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscape_LandscapeLayerInfoObject*         PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
struct ALandscape_LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
{
	bool                                               InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
struct ALandscape_LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
{
	float                                              InUseTessellationComponentScreenSizeFalloff;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
struct ALandscape_LandscapeProxy_ChangeTessellationComponentScreenSize_Params
{
	float                                              InTessellationComponentScreenSize;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscape_LandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscape_LandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
	float                                              InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ALandscape_LandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
};

// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ALandscape_LandscapeBlueprintBrushBase_Render_Params
{
	bool                                               InIsHeightmap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               InCombinedResult;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InWeightmapLayerName;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ALandscape_LandscapeBlueprintBrushBase_Initialize_Params
{
	struct FTransform                                  InLandscapeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntPoint                                   InLandscapeSize;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FIntPoint                                   InLandscapeRenderTargetSize;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct ALandscape_LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
{
	TArray<class UEngine_Texture2D*>                   OutStreamableAssets;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscape_LandscapeComponent_GetMaterialInstanceDynamic_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscape_LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       InPaintLayerName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscape_LandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ULandscape_LandscapeLayerInfoObject*         PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscape_LandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
	class ULandscape_LandscapeComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscape_LandscapeSplinesComponent_GetSplineMeshComponents_Params
{
	TArray<class UEngine_SplineMeshComponent*>         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
