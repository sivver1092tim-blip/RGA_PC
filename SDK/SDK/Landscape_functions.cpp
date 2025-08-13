
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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscape_LandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_Texture*         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UEngine_Texture* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscape_LandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscape_LandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInterface* NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::EditorSetLandscapeMaterial(class UEngine_MaterialInterface* NewLandscapeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscape_LandscapeProxy_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SplineComponent* InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscape_LandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::EditorApplySpline(class UEngine_SplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscape_LandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscape_LandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscape_LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscape_LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscape_LandscapeProxy_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscape_LandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape_LandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscape_LandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)

void ALandscape_LandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate");

	ALandscape_LandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeBlueprintBrushBase.Render
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           InIsHeightmap                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_TextureRenderTarget2D* InCombinedResult               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InWeightmapLayerName           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UEngine_TextureRenderTarget2D* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_TextureRenderTarget2D* ALandscape_LandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UEngine_TextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Render");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Render");

	ALandscape_LandscapeBlueprintBrushBase_Render_Params params;
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;
	params.InWeightmapLayerName = InWeightmapLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              InLandscapeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntPoint               InLandscapeSize                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FIntPoint               InLandscapeRenderTargetSize    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALandscape_LandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Initialize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Initialize");

	ALandscape_LandscapeBlueprintBrushBase_Initialize_Params params;
	params.InLandscapeTransform = InLandscapeTransform;
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UEngine_Texture2D*> OutStreamableAssets            (Parm, OutParm, ZeroConstructor)

void ALandscape_LandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UEngine_Texture2D*>* OutStreamableAssets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies");

	ALandscape_LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStreamableAssets != nullptr)
		*OutStreamableAssets = params.OutStreamableAssets;
}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* ULandscape_LandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscape_LandscapeComponent_GetMaterialInstanceDynamic_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   InPaintLayerName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscape_LandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	ULandscape_LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params;
	params.InLocation = InLocation;
	params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ULandscape_LandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscape_LandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscape_LandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	ULandscape_LandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params;
	params.InLocation = InLocation;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscape_LandscapeComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULandscape_LandscapeComponent* ULandscape_LandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	ULandscape_LandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UEngine_SplineMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UEngine_SplineMeshComponent*> ULandscape_LandscapeSplinesComponent::GetSplineMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscape_LandscapeSplinesComponent_GetSplineMeshComponents_Params params;

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
