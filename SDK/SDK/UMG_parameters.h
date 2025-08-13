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

// Function UMG.Widget.SetVisibility
struct UUMG_Widget_SetVisibility_Params
{
	FUMG_UMG_ESlateVisibility                          InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetUserFocus
struct UUMG_Widget_SetUserFocus_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetToolTipText
struct UUMG_Widget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UUMG_Widget_SetToolTip_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTranslation
struct UUMG_Widget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UUMG_Widget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformAngle
struct UUMG_Widget_SetRenderTransformAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransform
struct UUMG_Widget_SetRenderTransform_Params
{
	struct FUMG_WidgetTransform                        InTransform;                                              // (Parm)
};

// Function UMG.Widget.SetRenderShear
struct UUMG_Widget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderScale
struct UUMG_Widget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderOpacity
struct UUMG_Widget_SetRenderOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRuleExplicit
struct UUMG_Widget_SetNavigationRuleExplicit_Params
{
	FSlateCore_SlateCore_EUINavigation                 Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRuleCustomBoundary
struct UUMG_Widget_SetNavigationRuleCustomBoundary_Params
{
	FSlateCore_SlateCore_EUINavigation                 Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InCustomDelegate;                                         // (Parm, ZeroConstructor)
};

// Function UMG.Widget.SetNavigationRuleCustom
struct UUMG_Widget_SetNavigationRuleCustom_Params
{
	FSlateCore_SlateCore_EUINavigation                 Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InCustomDelegate;                                         // (Parm, ZeroConstructor)
};

// Function UMG.Widget.SetNavigationRuleBase
struct UUMG_Widget_SetNavigationRuleBase_Params
{
	FSlateCore_SlateCore_EUINavigation                 Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EUINavigationRule             Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRule
struct UUMG_Widget_SetNavigationRule_Params
{
	FSlateCore_SlateCore_EUINavigation                 Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EUINavigationRule             Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetToFocus;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetKeyboardFocus
struct UUMG_Widget_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UUMG_Widget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetFocus
struct UUMG_Widget_SetFocus_Params
{
};

// Function UMG.Widget.SetCursor
struct UUMG_Widget_SetCursor_Params
{
	TEnumAsByte<FCoreUObject_EMouseCursor>             InCursor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetClipping
struct UUMG_Widget_SetClipping_Params
{
	FSlateCore_SlateCore_EWidgetClipping               InClipping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetAllNavigationRules
struct UUMG_Widget_SetAllNavigationRules_Params
{
	FSlateCore_SlateCore_EUINavigationRule             Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetToFocus;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.ResetCursor
struct UUMG_Widget_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UUMG_Widget_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UUMG_Widget_OnReply__DelegateSignature_Params
{
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UUMG_Widget_OnPointerEvent__DelegateSignature_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UUMG_Widget_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.IsHovered
struct UUMG_Widget_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UUMG_Widget_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UUMG_Widget_HasUserFocusedDescendants_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasUserFocus
struct UUMG_Widget_HasUserFocus_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasMouseCaptureByUser
struct UUMG_Widget_HasMouseCaptureByUser_Params
{
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasMouseCapture
struct UUMG_Widget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasKeyboardFocus
struct UUMG_Widget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasFocusedDescendants
struct UUMG_Widget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasAnyUserFocus
struct UUMG_Widget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UUMG_Widget_GetWidget__DelegateSignature_Params
{
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.GetVisibility
struct UUMG_Widget_GetVisibility_Params
{
	FUMG_UMG_ESlateVisibility                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetTickSpaceGeometry
struct UUMG_Widget_GetTickSpaceGeometry_Params
{
	struct FSlateCore_Geometry                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UUMG_Widget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UUMG_Widget_GetSlateVisibility__DelegateSignature_Params
{
	FUMG_UMG_ESlateVisibility                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UUMG_Widget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateCore_SlateColor                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UUMG_Widget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.GetRenderTransformAngle
struct UUMG_Widget_GetRenderTransformAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetRenderOpacity
struct UUMG_Widget_GetRenderOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetParent
struct UUMG_Widget_GetParent_Params
{
	class UUMG_PanelWidget*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.GetPaintSpaceGeometry
struct UUMG_Widget_GetPaintSpaceGeometry_Params
{
	struct FSlateCore_Geometry                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.Widget.GetOwningPlayer
struct UUMG_Widget_GetOwningPlayer_Params
{
	class AEngine_PlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetOwningLocalPlayer
struct UUMG_Widget_GetOwningLocalPlayer_Params
{
	class UEngine_LocalPlayer*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UUMG_Widget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<FCoreUObject_EMouseCursor>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UUMG_Widget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetIsEnabled
struct UUMG_Widget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UUMG_Widget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetGameInstance
struct UUMG_Widget_GetGameInstance_Params
{
	class UEngine_GameInstance*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UUMG_Widget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetDesiredSize
struct UUMG_Widget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetClipping
struct UUMG_Widget_GetClipping_Params
{
	FSlateCore_SlateCore_EWidgetClipping               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UUMG_Widget_GetCheckBoxState__DelegateSignature_Params
{
	FSlateCore_SlateCore_ECheckBoxState                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetCachedGeometry
struct UUMG_Widget_GetCachedGeometry_Params
{
	struct FSlateCore_Geometry                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UUMG_Widget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UUMG_Widget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UUMG_Widget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.ForceVolatile
struct UUMG_Widget_ForceVolatile_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UUMG_Widget_ForceLayoutPrepass_Params
{
};

// Function UMG.Image.SetOpacity
struct UUMG_Image_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetColorAndOpacity
struct UUMG_Image_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushTintColor
struct UUMG_Image_SetBrushTintColor_Params
{
	struct FSlateCore_SlateColor                       TintColor;                                                // (Parm)
};

// Function UMG.Image.SetBrushSize
struct UUMG_Image_SetBrushSize_Params
{
	struct FVector2D                                   DesiredSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushResourceObject
struct UUMG_Image_SetBrushResourceObject_Params
{
	class UObject*                                     ResourceObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTextureDynamic
struct UUMG_Image_SetBrushFromTextureDynamic_Params
{
	class UEngine_Texture2DDynamic*                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTexture
struct UUMG_Image_SetBrushFromTexture_Params
{
	class UEngine_Texture2D*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromSoftTexture
struct UUMG_Image_SetBrushFromSoftTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromSoftMaterial
struct UUMG_Image_SetBrushFromSoftMaterial_Params
{
};

// Function UMG.Image.SetBrushFromMaterial
struct UUMG_Image_SetBrushFromMaterial_Params
{
	class UEngine_MaterialInterface*                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromAtlasInterface
struct UUMG_Image_SetBrushFromAtlasInterface_Params
{
	TScriptInterface<class UEngine_SlateTextureAtlasInterface> AtlasRegion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromAsset
struct UUMG_Image_SetBrushFromAsset_Params
{
	class UEngine_SlateBrushAsset*                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrush
struct UUMG_Image_SetBrush_Params
{
	struct FSlateCore_SlateBrush                       InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Image.GetDynamicMaterial
struct UUMG_Image_GetDynamicMaterial_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UUMG_PanelWidget_RemoveChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UUMG_PanelWidget_RemoveChild_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UUMG_PanelWidget_HasChild_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UUMG_PanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UUMG_PanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UUMG_PanelWidget_GetChildIndex_Params
{
	class UUMG_Widget*                                 Content;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UUMG_PanelWidget_GetChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.PanelWidget.GetAllChildren
struct UUMG_PanelWidget_GetAllChildren_Params
{
	TArray<class UUMG_Widget*>                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.PanelWidget.ClearChildren
struct UUMG_PanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UUMG_PanelWidget_AddChild_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_PanelSlot*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.SetContent
struct UUMG_ContentWidget_SetContent_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_PanelSlot*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.GetContentSlot
struct UUMG_ContentWidget_GetContentSlot_Params
{
	class UUMG_PanelSlot*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.GetContent
struct UUMG_ContentWidget_GetContent_Params
{
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Button.SetTouchMethod
struct UUMG_Button_SetTouchMethod_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EButtonTouchMethod> InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetStyle
struct UUMG_Button_SetStyle_Params
{
	struct FSlateCore_ButtonStyle                      InStyle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Button.SetPressMethod
struct UUMG_Button_SetPressMethod_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EButtonPressMethod> InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetColorAndOpacity
struct UUMG_Button_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetClickMethod
struct UUMG_Button_SetClickMethod_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EButtonClickMethod> InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetBackgroundColor
struct UUMG_Button_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.IsPressed
struct UUMG_Button_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UUMG_CanvasPanel_AddChildToCanvas_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_CanvasPanelSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UUMG_HorizontalBox_AddChildToHorizontalBox_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_HorizontalBoxSlot*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ListViewBase.SetWheelScrollMultiplier
struct UUMG_ListViewBase_SetWheelScrollMultiplier_Params
{
	float                                              NewWheelScrollMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.SetScrollOffset
struct UUMG_ListViewBase_SetScrollOffset_Params
{
	float                                              InScrollOffset;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.SetScrollbarVisibility
struct UUMG_ListViewBase_SetScrollbarVisibility_Params
{
	FUMG_UMG_ESlateVisibility                          InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.ScrollToTop
struct UUMG_ListViewBase_ScrollToTop_Params
{
};

// Function UMG.ListViewBase.ScrollToBottom
struct UUMG_ListViewBase_ScrollToBottom_Params
{
};

// Function UMG.ListViewBase.RequestRefresh
struct UUMG_ListViewBase_RequestRefresh_Params
{
};

// Function UMG.ListViewBase.RegenerateAllEntries
struct UUMG_ListViewBase_RegenerateAllEntries_Params
{
};

// Function UMG.ListViewBase.GetDisplayedEntryWidgets
struct UUMG_ListViewBase_GetDisplayedEntryWidgets_Params
{
	TArray<class UUMG_UserWidget*>                     ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.TextLayoutWidget.SetJustification
struct UUMG_TextLayoutWidget_SetJustification_Params
{
	TEnumAsByte<FSlate_Slate_ETextJustify>             InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWindowVisibility
struct UUMG_WidgetComponent_SetWindowVisibility_Params
{
	FUMG_UMG_EWindowVisibility                         InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWindowFocusable
struct UUMG_WidgetComponent_SetWindowFocusable_Params
{
	bool                                               bInWindowFocusable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWidgetSpace
struct UUMG_WidgetComponent_SetWidgetSpace_Params
{
	FUMG_UMG_EWidgetSpace                              NewSpace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWidget
struct UUMG_WidgetComponent_SetWidget_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTwoSided
struct UUMG_WidgetComponent_SetTwoSided_Params
{
	bool                                               bWantTwoSided;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTintColorAndOpacity
struct UUMG_WidgetComponent_SetTintColorAndOpacity_Params
{
	struct FLinearColor                                NewTintColorAndOpacity;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTickWhenOffscreen
struct UUMG_WidgetComponent_SetTickWhenOffscreen_Params
{
	bool                                               bWantTickWhenOffscreen;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetRedrawTime
struct UUMG_WidgetComponent_SetRedrawTime_Params
{
	float                                              InRedrawTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetPivot
struct UUMG_WidgetComponent_SetPivot_Params
{
	struct FVector2D                                   InPivot;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetOwnerPlayer
struct UUMG_WidgetComponent_SetOwnerPlayer_Params
{
	class UEngine_LocalPlayer*                         LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetManuallyRedraw
struct UUMG_WidgetComponent_SetManuallyRedraw_Params
{
	bool                                               bUseManualRedraw;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetGeometryMode
struct UUMG_WidgetComponent_SetGeometryMode_Params
{
	FUMG_UMG_EWidgetGeometryMode                       InGeometryMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetDrawSize
struct UUMG_WidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetDrawAtDesiredSize
struct UUMG_WidgetComponent_SetDrawAtDesiredSize_Params
{
	bool                                               bInDrawAtDesiredSize;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetCylinderArcAngle
struct UUMG_WidgetComponent_SetCylinderArcAngle_Params
{
	float                                              InCylinderArcAngle;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetBackgroundColor
struct UUMG_WidgetComponent_SetBackgroundColor_Params
{
	struct FLinearColor                                NewBackgroundColor;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.RequestRedraw
struct UUMG_WidgetComponent_RequestRedraw_Params
{
};

// Function UMG.WidgetComponent.GetWindowVisiblility
struct UUMG_WidgetComponent_GetWindowVisiblility_Params
{
	FUMG_UMG_EWindowVisibility                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWindowFocusable
struct UUMG_WidgetComponent_GetWindowFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWidgetSpace
struct UUMG_WidgetComponent_GetWidgetSpace_Params
{
	FUMG_UMG_EWidgetSpace                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetUserWidgetObject
struct UUMG_WidgetComponent_GetUserWidgetObject_Params
{
	class UUMG_UserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetTwoSided
struct UUMG_WidgetComponent_GetTwoSided_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetTickWhenOffscreen
struct UUMG_WidgetComponent_GetTickWhenOffscreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetRenderTarget
struct UUMG_WidgetComponent_GetRenderTarget_Params
{
	class UEngine_TextureRenderTarget2D*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetRedrawTime
struct UUMG_WidgetComponent_GetRedrawTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetPivot
struct UUMG_WidgetComponent_GetPivot_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetOwnerPlayer
struct UUMG_WidgetComponent_GetOwnerPlayer_Params
{
	class UEngine_LocalPlayer*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetMaterialInstance
struct UUMG_WidgetComponent_GetMaterialInstance_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetManuallyRedraw
struct UUMG_WidgetComponent_GetManuallyRedraw_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetGeometryMode
struct UUMG_WidgetComponent_GetGeometryMode_Params
{
	FUMG_UMG_EWidgetGeometryMode                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetDrawSize
struct UUMG_WidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetDrawAtDesiredSize
struct UUMG_WidgetComponent_GetDrawAtDesiredSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetCylinderArcAngle
struct UUMG_WidgetComponent_GetCylinderArcAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetCurrentDrawSize
struct UUMG_WidgetComponent_GetCurrentDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Overlay.AddChildToOverlay
struct UUMG_Overlay_AddChildToOverlay_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_OverlaySlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetTextStyleSet
struct UUMG_RichTextBlock_SetTextStyleSet_Params
{
	class UEngine_DataTable*                           NewTextStyleSet;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetText
struct UUMG_RichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.RichTextBlock.SetMinDesiredWidth
struct UUMG_RichTextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultTextStyle
struct UUMG_RichTextBlock_SetDefaultTextStyle_Params
{
	struct FSlateCore_TextBlockStyle                   InDefaultTextStyle;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.RichTextBlock.SetDefaultStrikeBrush
struct UUMG_RichTextBlock_SetDefaultStrikeBrush_Params
{
	struct FSlateCore_SlateBrush                       InStrikeBrush;                                            // (Parm, OutParm)
};

// Function UMG.RichTextBlock.SetDefaultShadowOffset
struct UUMG_RichTextBlock_SetDefaultShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
struct UUMG_RichTextBlock_SetDefaultShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultFont
struct UUMG_RichTextBlock_SetDefaultFont_Params
{
	struct FSlateCore_SlateFontInfo                    InFontInfo;                                               // (Parm)
};

// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
struct UUMG_RichTextBlock_SetDefaultColorAndOpacity_Params
{
	struct FSlateCore_SlateColor                       InColorAndOpacity;                                        // (Parm)
};

// Function UMG.RichTextBlock.SetAutoWrapText
struct UUMG_RichTextBlock_SetAutoWrapText_Params
{
	bool                                               InAutoTextWrap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.GetText
struct UUMG_RichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.RichTextBlock.GetDecoratorByClass
struct UUMG_RichTextBlock_GetDecoratorByClass_Params
{
	class UClass*                                      DecoratorClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_RichTextBlockDecorator*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
struct UUMG_RichTextBlock_ClearAllDefaultStyleOverrides_Params
{
};

// Function UMG.ScrollBox.SetWheelScrollMultiplier
struct UUMG_ScrollBox_SetWheelScrollMultiplier_Params
{
	float                                              NewWheelScrollMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollOffset
struct UUMG_ScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarVisibility
struct UUMG_ScrollBox_SetScrollbarVisibility_Params
{
	FUMG_UMG_ESlateVisibility                          NewScrollBarVisibility;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarThickness
struct UUMG_ScrollBox_SetScrollbarThickness_Params
{
	struct FVector2D                                   NewScrollbarThickness;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarPadding
struct UUMG_ScrollBox_SetScrollbarPadding_Params
{
	struct FSlateCore_Margin                           NewScrollbarPadding;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.ScrollBox.SetOrientation
struct UUMG_ScrollBox_SetOrientation_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EOrientation>     NewOrientation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetConsumeMouseWheel
struct UUMG_ScrollBox_SetConsumeMouseWheel_Params
{
	FSlateCore_SlateCore_EConsumeMouseWheel            NewConsumeMouseWheel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAnimateWheelScrolling
struct UUMG_ScrollBox_SetAnimateWheelScrolling_Params
{
	bool                                               bShouldAnimateWheelScrolling;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAlwaysShowScrollbar
struct UUMG_ScrollBox_SetAlwaysShowScrollbar_Params
{
	bool                                               NewAlwaysShowScrollbar;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAllowOverscroll
struct UUMG_ScrollBox_SetAllowOverscroll_Params
{
	bool                                               NewAllowOverscroll;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UUMG_ScrollBox_ScrollWidgetIntoView_Params
{
	class UUMG_Widget*                                 WidgetToFind;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AnimateScroll;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FSlate_Slate_EDescendantScrollDestination          ScrollDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollToStart
struct UUMG_ScrollBox_ScrollToStart_Params
{
};

// Function UMG.ScrollBox.ScrollToEnd
struct UUMG_ScrollBox_ScrollToEnd_Params
{
};

// Function UMG.ScrollBox.GetViewOffsetFraction
struct UUMG_ScrollBox_GetViewOffsetFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.GetScrollOffsetOfEnd
struct UUMG_ScrollBox_GetScrollOffsetOfEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.GetScrollOffset
struct UUMG_ScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.EndInertialScrolling
struct UUMG_ScrollBox_EndInertialScrolling_Params
{
};

// Function UMG.TextBlock.SetText
struct UUMG_TextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.TextBlock.SetStrikeBrush
struct UUMG_TextBlock_SetStrikeBrush_Params
{
	struct FSlateCore_SlateBrush                       InStrikeBrush;                                            // (Parm)
};

// Function UMG.TextBlock.SetShadowOffset
struct UUMG_TextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UUMG_TextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetOpacity
struct UUMG_TextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetMinDesiredWidth
struct UUMG_TextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetFont
struct UUMG_TextBlock_SetFont_Params
{
	struct FSlateCore_SlateFontInfo                    InFontInfo;                                               // (Parm)
};

// Function UMG.TextBlock.SetColorAndOpacity
struct UUMG_TextBlock_SetColorAndOpacity_Params
{
	struct FSlateCore_SlateColor                       InColorAndOpacity;                                        // (Parm)
	FUMG_UMG_EUserSettingColor                         SettingColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetAutoWrapText
struct UUMG_TextBlock_SetAutoWrapText_Params
{
	bool                                               InAutoTextWrap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.GetText
struct UUMG_TextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.TextBlock.GetDynamicOutlineMaterial
struct UUMG_TextBlock_GetDynamicOutlineMaterial_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.TextBlock.GetDynamicFontMaterial
struct UUMG_TextBlock_GetDynamicFontMaterial_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UUMG_VerticalBox_AddChildToVerticalBox_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_VerticalBoxSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.UserWidget.UnregisterInputComponent
struct UUMG_UserWidget_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.UnbindFromAnimationStarted
struct UUMG_UserWidget_UnbindFromAnimationStarted_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindFromAnimationFinished
struct UUMG_UserWidget_UnbindFromAnimationFinished_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
struct UUMG_UserWidget_UnbindAllFromAnimationStarted_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
struct UUMG_UserWidget_UnbindAllFromAnimationFinished_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.Tick
struct UUMG_UserWidget_Tick_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUMG_UserWidget_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EInputEvent>            EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUMG_UserWidget_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimationsAndLatentActions
struct UUMG_UserWidget_StopAnimationsAndLatentActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUMG_UserWidget_StopAnimation_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct UUMG_UserWidget_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUMG_UserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct UUMG_UserWidget_SetPlaybackSpeed_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct UUMG_UserWidget_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningPlayer
struct UUMG_UserWidget_SetOwningPlayer_Params
{
	class AEngine_PlayerController*                    LocalPlayerController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUMG_UserWidget_SetNumLoopsToPlay_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUMG_UserWidget_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUMG_UserWidget_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUMG_UserWidget_SetForegroundColor_Params
{
	struct FSlateCore_SlateColor                       InForegroundColor;                                        // (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUMG_UserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUMG_UserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUMG_UserWidget_SetAnchorsInViewport_Params
{
	struct FSlate_Anchors                              Anchors;                                                  // (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUMG_UserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct UUMG_UserWidget_ReverseAnimation_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUMG_UserWidget_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct UUMG_UserWidget_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct UUMG_UserWidget_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct UUMG_UserWidget_PlaySound_Params
{
	class UEngine_SoundBase*                           SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTimeRange
struct UUMG_UserWidget_PlayAnimationTimeRange_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode>         PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UMGSequencePlayer*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationReverse
struct UUMG_UserWidget_PlayAnimationReverse_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UMGSequencePlayer*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationForward
struct UUMG_UserWidget_PlayAnimationForward_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UMGSequencePlayer*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct UUMG_UserWidget_PlayAnimation_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode>         PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UMGSequencePlayer*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct UUMG_UserWidget_PauseAnimation_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUMG_UserWidget_OnTouchStarted_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUMG_UserWidget_OnTouchMoved_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUMG_UserWidget_OnTouchGesture_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     GestureEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchForceChanged
struct UUMG_UserWidget_OnTouchForceChanged_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUMG_UserWidget_OnTouchEnded_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnRemovedFromFocusPath
struct UUMG_UserWidget_OnRemovedFromFocusPath_Params
{
	struct FSlateCore_FocusEvent                       InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUMG_UserWidget_OnPreviewMouseButtonDown_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUMG_UserWidget_OnPreviewKeyDown_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_KeyEvent                         InKeyEvent;                                               // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUMG_UserWidget_OnPaint_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUMG_UserWidget_OnMouseWheel_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUMG_UserWidget_OnMouseMove_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUMG_UserWidget_OnMouseLeave_Params
{
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUMG_UserWidget_OnMouseEnter_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseCaptureLost
struct UUMG_UserWidget_OnMouseCaptureLost_Params
{
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUMG_UserWidget_OnMouseButtonUp_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUMG_UserWidget_OnMouseButtonDown_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUMG_UserWidget_OnMouseButtonDoubleClick_Params
{
	struct FSlateCore_Geometry                         InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUMG_UserWidget_OnMotionDetected_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_MotionEvent                      InMotionEvent;                                            // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUMG_UserWidget_OnKeyUp_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_KeyEvent                         InKeyEvent;                                               // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUMG_UserWidget_OnKeyDown_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_KeyEvent                         InKeyEvent;                                               // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUMG_UserWidget_OnKeyChar_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_CharacterEvent                   InCharacterEvent;                                         // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnInitialized
struct UUMG_UserWidget_OnInitialized_Params
{
};

// Function UMG.UserWidget.OnFocusReceived
struct UUMG_UserWidget_OnFocusReceived_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_FocusEvent                       InFocusEvent;                                             // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUMG_UserWidget_OnFocusLost_Params
{
	struct FSlateCore_FocusEvent                       InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUMG_UserWidget_OnDrop_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (Parm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct UUMG_UserWidget_OnDragOver_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (Parm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct UUMG_UserWidget_OnDragLeave_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (Parm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct UUMG_UserWidget_OnDragEnter_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (Parm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct UUMG_UserWidget_OnDragDetected_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUMG_UserWidget_OnDragCancelled_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUMG_DragDropOperation*                      Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUMG_UserWidget_OnAnimationStarted_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUMG_UserWidget_OnAnimationFinished_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUMG_UserWidget_OnAnalogValueChanged_Params
{
	struct FSlateCore_Geometry                         MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FSlateCore_AnalogInputEvent                 InAnalogInputEvent;                                       // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAddedToFocusPath
struct UUMG_UserWidget_OnAddedToFocusPath_Params
{
	struct FSlateCore_FocusEvent                       InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUMG_UserWidget_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EInputEvent>            EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUMG_UserWidget_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUMG_UserWidget_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct UUMG_UserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct UUMG_UserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUMG_UserWidget_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUMG_UserWidget_IsAnimationPlayingForward_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUMG_UserWidget_IsAnimationPlaying_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUMG_UserWidget_GetOwningPlayerPawn_Params
{
	class AEngine_Pawn*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct UUMG_UserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUMG_UserWidget_GetAnimationCurrentTime_Params
{
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct UUMG_UserWidget_GetAnchorsInViewport_Params
{
	struct FSlate_Anchors                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct UUMG_UserWidget_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.Destruct
struct UUMG_UserWidget_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUMG_UserWidget_Construct_Params
{
};

// Function UMG.UserWidget.CancelLatentActions
struct UUMG_UserWidget_CancelLatentActions_Params
{
};

// Function UMG.UserWidget.BindToAnimationStarted
struct UUMG_UserWidget_BindToAnimationStarted_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationFinished
struct UUMG_UserWidget_BindToAnimationFinished_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationEvent
struct UUMG_UserWidget_BindToAnimationEvent_Params
{
	class UUMG_WidgetAnimation*                        Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	FUMG_UMG_EWidgetAnimationEvent                     AnimationEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToViewport
struct UUMG_UserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUMG_UserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsWrapBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WrapBoxSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
struct UUMG_WidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WidgetSwitcherSlot*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_VerticalBoxSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UUMG_WidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_UniformGridSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsSizeBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_SizeBoxSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsScrollBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_ScrollBoxSlot*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsScaleBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_ScaleBoxSlot*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsSafeBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_SafeZoneSlot*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UUMG_WidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_OverlaySlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UUMG_WidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_HorizontalBoxSlot*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UUMG_WidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_GridSlot*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UUMG_WidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_CanvasPanelSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UUMG_WidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_BorderSlot*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UUMG_WidgetLayoutLibrary_RemoveAllWidgets_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UUMG_WidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
struct UUMG_WidgetLayoutLibrary_GetViewportWidgetGeometry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Geometry                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UUMG_WidgetLayoutLibrary_GetViewportSize_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UUMG_WidgetLayoutLibrary_GetViewportScale_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
struct UUMG_WidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Geometry                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UUMG_WidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class AEngine_PlayerController*                    Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
struct UUMG_WidgetLayoutLibrary_GetMousePositionOnViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
struct UUMG_WidgetLayoutLibrary_GetMousePositionOnPlatform_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UUMG_AsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	class UUMG_AsyncTaskDownloadImage*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetVerticalAlignment
struct UUMG_BackgroundBlur_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetPadding
struct UUMG_BackgroundBlur_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct UUMG_BackgroundBlur_SetLowQualityFallbackBrush_Params
{
	struct FSlateCore_SlateBrush                       InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.BackgroundBlur.SetHorizontalAlignment
struct UUMG_BackgroundBlur_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurStrength
struct UUMG_BackgroundBlur_SetBlurStrength_Params
{
	float                                              InStrength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurRadius
struct UUMG_BackgroundBlur_SetBlurRadius_Params
{
	int                                                InBlurRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct UUMG_BackgroundBlur_SetApplyAlphaToBlur_Params
{
	bool                                               bInApplyAlphaToBlur;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
struct UUMG_BackgroundBlurSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetPadding
struct UUMG_BackgroundBlurSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
struct UUMG_BackgroundBlurSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BoolBinding.GetValue
struct UUMG_BoolBinding_GetValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Border.SetVerticalAlignment
struct UUMG_Border_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetPadding
struct UUMG_Border_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetHorizontalAlignment
struct UUMG_Border_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetDesiredSizeScale
struct UUMG_Border_SetDesiredSizeScale_Params
{
	struct FVector2D                                   InScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetContentColorAndOpacity
struct UUMG_Border_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromTexture
struct UUMG_Border_SetBrushFromTexture_Params
{
	class UEngine_Texture2D*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromMaterial
struct UUMG_Border_SetBrushFromMaterial_Params
{
	class UEngine_MaterialInterface*                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromAsset
struct UUMG_Border_SetBrushFromAsset_Params
{
	class UEngine_SlateBrushAsset*                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushColor
struct UUMG_Border_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrush
struct UUMG_Border_SetBrush_Params
{
	struct FSlateCore_SlateBrush                       InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Border.GetDynamicMaterial
struct UUMG_Border_GetDynamicMaterial_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.BorderSlot.SetVerticalAlignment
struct UUMG_BorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BorderSlot.SetPadding
struct UUMG_BorderSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BorderSlot.SetHorizontalAlignment
struct UUMG_BorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BrushBinding.GetValue
struct UUMG_BrushBinding_GetValue_Params
{
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.ButtonSlot.SetVerticalAlignment
struct UUMG_ButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ButtonSlot.SetPadding
struct UUMG_ButtonSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UUMG_ButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetZOrder
struct UUMG_CanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetSize
struct UUMG_CanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetPosition
struct UUMG_CanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetOffsets
struct UUMG_CanvasPanelSlot_SetOffsets_Params
{
	struct FSlateCore_Margin                           InOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetMinimum
struct UUMG_CanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetMaximum
struct UUMG_CanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetLayout
struct UUMG_CanvasPanelSlot_SetLayout_Params
{
	struct FUMG_AnchorData                             InLayoutData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.CanvasPanelSlot.SetAutoSize
struct UUMG_CanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetAnchors
struct UUMG_CanvasPanelSlot_SetAnchors_Params
{
	struct FSlate_Anchors                              InAnchors;                                                // (Parm)
};

// Function UMG.CanvasPanelSlot.SetAlignment
struct UUMG_CanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetZOrder
struct UUMG_CanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetSize
struct UUMG_CanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetPosition
struct UUMG_CanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetOffsets
struct UUMG_CanvasPanelSlot_GetOffsets_Params
{
	struct FSlateCore_Margin                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetLayout
struct UUMG_CanvasPanelSlot_GetLayout_Params
{
	struct FUMG_AnchorData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAutoSize
struct UUMG_CanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetAnchors
struct UUMG_CanvasPanelSlot_GetAnchors_Params
{
	struct FSlate_Anchors                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAlignment
struct UUMG_CanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.SetIsChecked
struct UUMG_CheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.SetCheckedState
struct UUMG_CheckBox_SetCheckedState_Params
{
	FSlateCore_SlateCore_ECheckBoxState                InCheckedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.IsPressed
struct UUMG_CheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.IsChecked
struct UUMG_CheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.GetCheckedState
struct UUMG_CheckBox_GetCheckedState_Params
{
	FSlateCore_SlateCore_ECheckBoxState                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckedStateBinding.GetValue
struct UUMG_CheckedStateBinding_GetValue_Params
{
	FSlateCore_SlateCore_ECheckBoxState                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetRadius
struct UUMG_CircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetPeriod
struct UUMG_CircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetNumberOfPieces
struct UUMG_CircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ColorBinding.GetSlateValue
struct UUMG_ColorBinding_GetSlateValue_Params
{
	struct FSlateCore_SlateColor                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.ColorBinding.GetLinearValue
struct UUMG_ColorBinding_GetLinearValue_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.SetSelectedOption
struct UUMG_ComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
};

// Function UMG.ComboBoxString.SetSelectedIndex
struct UUMG_ComboBoxString_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ComboBoxString.RemoveOption
struct UUMG_ComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.RefreshOptions
struct UUMG_ComboBoxString_RefreshOptions_Params
{
};

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UUMG_ComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<FSlateCore_SlateCore_ESelectInfo>      SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UUMG_ComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxString.IsOpen
struct UUMG_ComboBoxString_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetSelectedOption
struct UUMG_ComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.ComboBoxString.GetSelectedIndex
struct UUMG_ComboBoxString_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetOptionCount
struct UUMG_ComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetOptionAtIndex
struct UUMG_ComboBoxString_GetOptionAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.ComboBoxString.FindOptionIndex
struct UUMG_ComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.ClearSelection
struct UUMG_ComboBoxString_ClearSelection_Params
{
};

// Function UMG.ComboBoxString.ClearOptions
struct UUMG_ComboBoxString_ClearOptions_Params
{
};

// Function UMG.ComboBoxString.AddOption
struct UUMG_ComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
};

// Function UMG.DragDropOperation.Drop
struct UUMG_DragDropOperation_Drop_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.Dragged
struct UUMG_DragDropOperation_Dragged_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.DragCancelled
struct UUMG_DragDropOperation_DragCancelled_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
struct UUMG_DynamicEntryBoxBase_SetEntrySpacing_Params
{
	struct FVector2D                                   InEntrySpacing;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.DynamicEntryBoxBase.GetNumEntries
struct UUMG_DynamicEntryBoxBase_GetNumEntries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.DynamicEntryBoxBase.GetAllEntries
struct UUMG_DynamicEntryBoxBase_GetAllEntries_Params
{
	TArray<class UUMG_UserWidget*>                     ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.DynamicEntryBox.Reset
struct UUMG_DynamicEntryBox_Reset_Params
{
	bool                                               bDeleteWidgets;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.RemoveEntry
struct UUMG_DynamicEntryBox_RemoveEntry_Params
{
	class UUMG_UserWidget*                             EntryWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
struct UUMG_DynamicEntryBox_BP_CreateEntryOfClass_Params
{
	class UClass*                                      EntryClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.BP_CreateEntry
struct UUMG_DynamicEntryBox_BP_CreateEntry_Params
{
	class UUMG_UserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.EditableText.SetText
struct UUMG_EditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableText.SetJustification
struct UUMG_EditableText_SetJustification_Params
{
	TEnumAsByte<FSlate_Slate_ETextJustify>             InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetIsReadOnly
struct UUMG_EditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetIsPassword
struct UUMG_EditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetHintText
struct UUMG_EditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UUMG_EditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<FSlateCore_SlateCore_ETextCommit>      CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UUMG_EditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableText.GetText
struct UUMG_EditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.SetText
struct UUMG_EditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableTextBox.SetJustification
struct UUMG_EditableTextBox_SetJustification_Params
{
	TEnumAsByte<FSlate_Slate_ETextJustify>             InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetIsReadOnly
struct UUMG_EditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetIsPassword
struct UUMG_EditableTextBox_SetIsPassword_Params
{
	bool                                               bIsPassword;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetHintText
struct UUMG_EditableTextBox_SetHintText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableTextBox.SetError
struct UUMG_EditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (Parm)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUMG_EditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<FSlateCore_SlateCore_ETextCommit>      CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UUMG_EditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableTextBox.HasError
struct UUMG_EditableTextBox_HasError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.EditableTextBox.GetText
struct UUMG_EditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.ClearError
struct UUMG_EditableTextBox_ClearError_Params
{
};

// Function UMG.ExpandableArea.SetIsExpanded_Animated
struct UUMG_ExpandableArea_SetIsExpanded_Animated_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ExpandableArea.SetIsExpanded
struct UUMG_ExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ExpandableArea.GetIsExpanded
struct UUMG_ExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.FloatBinding.GetValue
struct UUMG_FloatBinding_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.GridPanel.SetRowFill
struct UUMG_GridPanel_SetRowFill_Params
{
	int                                                ColumnIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridPanel.SetColumnFill
struct UUMG_GridPanel_SetColumnFill_Params
{
	int                                                ColumnIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridPanel.AddChildToGrid
struct UUMG_GridPanel_AddChildToGrid_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_GridSlot*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.GridSlot.SetVerticalAlignment
struct UUMG_GridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetRowSpan
struct UUMG_GridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetRow
struct UUMG_GridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetPadding
struct UUMG_GridSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetNudge
struct UUMG_GridSlot_SetNudge_Params
{
	struct FVector2D                                   InNudge;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetLayer
struct UUMG_GridSlot_SetLayer_Params
{
	int                                                InLayer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetHorizontalAlignment
struct UUMG_GridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetColumnSpan
struct UUMG_GridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetColumn
struct UUMG_GridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UUMG_HorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetSize
struct UUMG_HorizontalBoxSlot_SetSize_Params
{
	struct FUMG_SlateChildSize                         InSize;                                                   // (Parm)
};

// Function UMG.HorizontalBoxSlot.SetPadding
struct UUMG_HorizontalBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UUMG_HorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetTextBlockVisibility
struct UUMG_InputKeySelector_SetTextBlockVisibility_Params
{
	FUMG_UMG_ESlateVisibility                          InVisibility;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetSelectedKey
struct UUMG_InputKeySelector_SetSelectedKey_Params
{
	struct FSlate_InputChord                           InSelectedKey;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.InputKeySelector.SetNoKeySpecifiedText
struct UUMG_InputKeySelector_SetNoKeySpecifiedText_Params
{
	struct FText                                       InNoKeySpecifiedText;                                     // (Parm)
};

// Function UMG.InputKeySelector.SetKeySelectionText
struct UUMG_InputKeySelector_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                       // (Parm)
};

// Function UMG.InputKeySelector.SetEscapeKeys
struct UUMG_InputKeySelector_SetEscapeKeys_Params
{
	TArray<struct FInputCore_Key>                      InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG.InputKeySelector.SetAllowModifierKeys
struct UUMG_InputKeySelector_SetAllowModifierKeys_Params
{
	bool                                               bInAllowModifierKeys;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetAllowGamepadKeys
struct UUMG_InputKeySelector_SetAllowGamepadKeys_Params
{
	bool                                               bInAllowGamepadKeys;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct UUMG_InputKeySelector_OnKeySelected__DelegateSignature_Params
{
	struct FSlate_InputChord                           SelectedKey;                                              // (Parm)
};

// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
struct UUMG_InputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function UMG.InputKeySelector.GetIsSelectingKey
struct UUMG_InputKeySelector_GetIsSelectingKey_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Int32Binding.GetValue
struct UUMG_Int32Binding_GetValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.InvalidationBox.SetCanCache
struct UUMG_InvalidationBox_SetCanCache_Params
{
	bool                                               CanCache;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InvalidationBox.InvalidateCache
struct UUMG_InvalidationBox_InvalidateCache_Params
{
};

// Function UMG.InvalidationBox.GetCanCache
struct UUMG_InvalidationBox_GetCanCache_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnItemSelectionChanged
struct UUMG_UserListEntry_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnItemExpansionChanged
struct UUMG_UserListEntry_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnEntryReleased
struct UUMG_UserListEntry_BP_OnEntryReleased_Params
{
};

// Function UMG.UserListEntryLibrary.IsListItemSelected
struct UUMG_UserListEntryLibrary_IsListItemSelected_Params
{
	TScriptInterface<class UUMG_UserListEntry>         UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntryLibrary.IsListItemExpanded
struct UUMG_UserListEntryLibrary_IsListItemExpanded_Params
{
	TScriptInterface<class UUMG_UserListEntry>         UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntryLibrary.GetOwningListView
struct UUMG_UserListEntryLibrary_GetOwningListView_Params
{
	TScriptInterface<class UUMG_UserListEntry>         UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_ListViewBase*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.UserObjectListEntry.OnListItemObjectSet
struct UUMG_UserObjectListEntry_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserObjectListEntryLibrary.GetListItemObject
struct UUMG_UserObjectListEntryLibrary_GetListItemObject_Params
{
	TScriptInterface<class UUMG_UserObjectListEntry>   UserObjectListEntry;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.SetSelectionMode
struct UUMG_ListView_SetSelectionMode_Params
{
	TEnumAsByte<FSlate_Slate_ESelectionMode>           SelectionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.SetSelectedIndex
struct UUMG_ListView_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.ScrollIndexIntoView
struct UUMG_ListView_ScrollIndexIntoView_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.RemoveItem
struct UUMG_ListView_RemoveItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.NavigateToIndex
struct UUMG_ListView_NavigateToIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.IsRefreshPending
struct UUMG_ListView_IsRefreshPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetNumItems
struct UUMG_ListView_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetListItems
struct UUMG_ListView_GetListItems_Params
{
	TArray<class UObject*>                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.ListView.GetItemAt
struct UUMG_ListView_GetItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetIndexForItem
struct UUMG_ListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.ClearListItems
struct UUMG_ListView_ClearListItems_Params
{
};

// Function UMG.ListView.BP_SetSelectedItem
struct UUMG_ListView_BP_SetSelectedItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_SetListItems
struct UUMG_ListView_BP_SetListItems_Params
{
	TArray<class UObject*>                             InListItems;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG.ListView.BP_SetItemSelection
struct UUMG_ListView_BP_SetItemSelection_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_ScrollItemIntoView
struct UUMG_ListView_BP_ScrollItemIntoView_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_NavigateToItem
struct UUMG_ListView_BP_NavigateToItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_IsItemVisible
struct UUMG_ListView_BP_IsItemVisible_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetSelectedItems
struct UUMG_ListView_BP_GetSelectedItems_Params
{
	TArray<class UObject*>                             Items;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetSelectedItem
struct UUMG_ListView_BP_GetSelectedItem_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetNumItemsSelected
struct UUMG_ListView_BP_GetNumItemsSelected_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_ClearSelection
struct UUMG_ListView_BP_ClearSelection_Params
{
};

// Function UMG.ListView.BP_CancelScrollIntoView
struct UUMG_ListView_BP_CancelScrollIntoView_Params
{
};

// Function UMG.ListView.AddItem
struct UUMG_ListView_AddItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.ToggleOpen
struct UUMG_MenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UUMG_MenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.SetPlacement
struct UUMG_MenuAnchor_SetPlacement_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EMenuPlacement>   InPlacement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.Open
struct UUMG_MenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.IsOpen
struct UUMG_MenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.HasOpenSubMenus
struct UUMG_MenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.GetMenuPosition
struct UUMG_MenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.FitInWindow
struct UUMG_MenuAnchor_FitInWindow_Params
{
	bool                                               bFit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.Close
struct UUMG_MenuAnchor_Close_Params
{
};

// Function UMG.MouseCursorBinding.GetValue
struct UUMG_MouseCursorBinding_GetValue_Params
{
	TEnumAsByte<FCoreUObject_EMouseCursor>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MultiLineEditableText.SetWidgetStyle
struct UUMG_MultiLineEditableText_SetWidgetStyle_Params
{
	struct FSlateCore_TextBlockStyle                   InWidgetStyle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableText.SetText
struct UUMG_MultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.MultiLineEditableText.SetIsReadOnly
struct UUMG_MultiLineEditableText_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MultiLineEditableText.SetHintText
struct UUMG_MultiLineEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UUMG_MultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<FSlateCore_SlateCore_ETextCommit>      CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UUMG_MultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableText.GetText
struct UUMG_MultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableText.GetHintText
struct UUMG_MultiLineEditableText_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.SetTextStyle
struct UUMG_MultiLineEditableTextBox_SetTextStyle_Params
{
	struct FSlateCore_TextBlockStyle                   InTextStyle;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.SetText
struct UUMG_MultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
struct UUMG_MultiLineEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MultiLineEditableTextBox.SetHintText
struct UUMG_MultiLineEditableTextBox_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// Function UMG.MultiLineEditableTextBox.SetError
struct UUMG_MultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (Parm)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UUMG_MultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<FSlateCore_SlateCore_ETextCommit>      CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UUMG_MultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.GetText
struct UUMG_MultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.GetHintText
struct UUMG_MultiLineEditableTextBox_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.OverlaySlot.SetVerticalAlignment
struct UUMG_OverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.OverlaySlot.SetPadding
struct UUMG_OverlaySlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UUMG_OverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ProgressBar.SetPercent
struct UUMG_ProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ProgressBar.SetIsMarquee
struct UUMG_ProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UUMG_ProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetTextureParameter
struct UUMG_RetainerBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetRenderingPhase
struct UUMG_RetainerBox_SetRenderingPhase_Params
{
	int                                                RenderPhase;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalPhases;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetEffectMaterial
struct UUMG_RetainerBox_SetEffectMaterial_Params
{
	class UEngine_MaterialInterface*                   EffectMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.RequestRender
struct UUMG_RetainerBox_RequestRender_Params
{
};

// Function UMG.RetainerBox.GetEffectMaterial
struct UUMG_RetainerBox_GetEffectMaterial_Params
{
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SafeZone.SetSidesToPad
struct UUMG_SafeZone_SetSidesToPad_Params
{
	bool                                               InPadLeft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadRight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadTop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadBottom;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetUserSpecifiedScale
struct UUMG_ScaleBox_SetUserSpecifiedScale_Params
{
	float                                              InUserSpecifiedScale;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretchDirection
struct UUMG_ScaleBox_SetStretchDirection_Params
{
	TEnumAsByte<FSlate_Slate_EStretchDirection>        InStretchDirection;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretch
struct UUMG_ScaleBox_SetStretch_Params
{
	TEnumAsByte<FSlate_Slate_EStretch>                 InStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetIgnoreInheritedScale
struct UUMG_ScaleBox_SetIgnoreInheritedScale_Params
{
	bool                                               bInIgnoreInheritedScale;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBar.SetState
struct UUMG_ScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThumbSizeFraction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetVerticalAlignment
struct UUMG_ScrollBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetPadding
struct UUMG_ScrollBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UUMG_ScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetWidthOverride
struct UUMG_SizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredWidth
struct UUMG_SizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredHeight
struct UUMG_SizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinAspectRatio
struct UUMG_SizeBox_SetMinAspectRatio_Params
{
	float                                              InMinAspectRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredWidth
struct UUMG_SizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredHeight
struct UUMG_SizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxAspectRatio
struct UUMG_SizeBox_SetMaxAspectRatio_Params
{
	float                                              InMaxAspectRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetHeightOverride
struct UUMG_SizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.ClearWidthOverride
struct UUMG_SizeBox_ClearWidthOverride_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredWidth
struct UUMG_SizeBox_ClearMinDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredHeight
struct UUMG_SizeBox_ClearMinDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMinAspectRatio
struct UUMG_SizeBox_ClearMinAspectRatio_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredWidth
struct UUMG_SizeBox_ClearMaxDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredHeight
struct UUMG_SizeBox_ClearMaxDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxAspectRatio
struct UUMG_SizeBox_ClearMaxAspectRatio_Params
{
};

// Function UMG.SizeBox.ClearHeightOverride
struct UUMG_SizeBox_ClearHeightOverride_Params
{
};

// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct UUMG_SizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetPadding
struct UUMG_SizeBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct UUMG_SizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
struct UUMG_SlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
struct UUMG_SlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteVector;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
struct UUMG_SlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LocalScalar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
struct UUMG_SlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              AbsoluteScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct UUMG_SlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct UUMG_SlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct UUMG_SlateBlueprintLibrary_ScreenToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct UUMG_SlateBlueprintLibrary_LocalToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PixelPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct UUMG_SlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct UUMG_SlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
struct UUMG_SlateBlueprintLibrary_GetLocalTopLeft_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct UUMG_SlateBlueprintLibrary_GetLocalSize_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
struct UUMG_SlateBlueprintLibrary_GetAbsoluteSize_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct UUMG_SlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
	struct FSlateCore_SlateBrush                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_SlateBrush                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct UUMG_SlateBlueprintLibrary_AbsoluteToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AbsoluteDesktopCoordinate;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PixelPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct UUMG_SlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FSlateCore_Geometry                         Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UUMG_ScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetPadding
struct UUMG_ScaleBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UUMG_ScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetValue
struct UUMG_Slider_SetValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetStepSize
struct UUMG_Slider_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetSliderHandleColor
struct UUMG_Slider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetSliderBarColor
struct UUMG_Slider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetMinValue
struct UUMG_Slider_SetMinValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetMaxValue
struct UUMG_Slider_SetMaxValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetLocked
struct UUMG_Slider_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetIndentHandle
struct UUMG_Slider_SetIndentHandle_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.GetValue
struct UUMG_Slider_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Slider.GetNormalizedValue
struct UUMG_Slider_GetNormalizedValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Spacer.SetSize
struct UUMG_Spacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetValue
struct UUMG_SpinBox_SetValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMinValue
struct UUMG_SpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMinSliderValue
struct UUMG_SpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxValue
struct UUMG_SpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxSliderValue
struct UUMG_SpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetForegroundColor
struct UUMG_SpinBox_SetForegroundColor_Params
{
	struct FSlateCore_SlateColor                       InForegroundColor;                                        // (Parm)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct UUMG_SpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_ETextCommit>      CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct UUMG_SpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct UUMG_SpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function UMG.SpinBox.GetValue
struct UUMG_SpinBox_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMinValue
struct UUMG_SpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMinSliderValue
struct UUMG_SpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxValue
struct UUMG_SpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxSliderValue
struct UUMG_SpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.ClearMinValue
struct UUMG_SpinBox_ClearMinValue_Params
{
};

// Function UMG.SpinBox.ClearMinSliderValue
struct UUMG_SpinBox_ClearMinSliderValue_Params
{
};

// Function UMG.SpinBox.ClearMaxValue
struct UUMG_SpinBox_ClearMaxValue_Params
{
};

// Function UMG.SpinBox.ClearMaxSliderValue
struct UUMG_SpinBox_ClearMaxSliderValue_Params
{
};

// Function UMG.TextBinding.GetTextValue
struct UUMG_TextBinding_GetTextValue_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.TextBinding.GetStringValue
struct UUMG_TextBinding_GetStringValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.Throbber.SetNumberOfPieces
struct UUMG_Throbber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateVertically
struct UUMG_Throbber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateOpacity
struct UUMG_Throbber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateHorizontally
struct UUMG_Throbber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TileView.SetEntryWidth
struct UUMG_TileView_SetEntryWidth_Params
{
	float                                              NewWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TileView.SetEntryHeight
struct UUMG_TileView_SetEntryHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TreeView.SetItemExpansion
struct UUMG_TreeView_SetItemExpansion_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExpandItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TreeView.ExpandAll
struct UUMG_TreeView_ExpandAll_Params
{
};

// Function UMG.TreeView.CollapseAll
struct UUMG_TreeView_CollapseAll_Params
{
};

// Function UMG.UniformGridPanel.SetSlotPadding
struct UUMG_UniformGridPanel_SetSlotPadding_Params
{
	struct FSlateCore_Margin                           InSlotPadding;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUMG_UniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUMG_UniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUMG_UniformGridPanel_AddChildToUniformGrid_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UniformGridSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUMG_UniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetRow
struct UUMG_UniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUMG_UniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetColumn
struct UUMG_UniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UUMG_VerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetSize
struct UUMG_VerticalBoxSlot_SetSize_Params
{
	struct FUMG_SlateChildSize                         InSize;                                                   // (Parm)
};

// Function UMG.VerticalBoxSlot.SetPadding
struct UUMG_VerticalBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UUMG_VerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.Spawn
struct UUMG_Viewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.SetViewRotation
struct UUMG_Viewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.SetViewLocation
struct UUMG_Viewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.GetViewRotation
struct UUMG_Viewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.GetViewportWorld
struct UUMG_Viewport_GetViewportWorld_Params
{
	class UEngine_World*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.GetViewLocation
struct UUMG_Viewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UMGSequencePlayer.SetUserTag
struct UUMG_UMGSequencePlayer_SetUserTag_Params
{
	struct FName                                       InUserTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UMGSequencePlayer.GetUserTag
struct UUMG_UMGSequencePlayer_GetUserTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
struct UUMG_WidgetAnimation_UnbindFromAnimationStarted_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
struct UUMG_WidgetAnimation_UnbindFromAnimationFinished_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
struct UUMG_WidgetAnimation_UnbindAllFromAnimationStarted_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
struct UUMG_WidgetAnimation_UnbindAllFromAnimationFinished_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetStartTime
struct UUMG_WidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetEndTime
struct UUMG_WidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.BindToAnimationStarted
struct UUMG_WidgetAnimation_BindToAnimationStarted_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.BindToAnimationFinished
struct UUMG_WidgetAnimation_BindToAnimationFinished_Params
{
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
struct UUMG_WidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params
{
	class UUMG_UMGSequencePlayer*                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode>         PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_WidgetAnimationPlayCallbackProxy*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
struct UUMG_WidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params
{
	class UUMG_UMGSequencePlayer*                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUMG_UserWidget*                             Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WidgetAnimation*                        InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode>         PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_WidgetAnimationPlayCallbackProxy*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBinding.GetValue
struct UUMG_WidgetBinding_GetValue_Params
{
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.VisibilityBinding.GetValue
struct UUMG_VisibilityBinding_GetValue_Params
{
	FUMG_UMG_ESlateVisibility                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UUMG_WidgetBlueprintLibrary_UnlockMouse_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UUMG_WidgetBlueprintLibrary_Unhandled_Params
{
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
struct UUMG_WidgetBlueprintLibrary_SetWindowTitleBarState_Params
{
	class UUMG_Widget*                                 TitleBarContent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FEngine_Engine_EWindowTitleBarMode                 Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTitleBarDragEnabled;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowButtonsVisible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTitleBarVisible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
struct UUMG_WidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
struct UUMG_WidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UUMG_WidgetBlueprintLibrary_SetUserFocus_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInAllUsers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UUMG_WidgetBlueprintLibrary_SetMousePosition_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   NewMousePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UUMG_WidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FEngine_Engine_EMouseLockMode                      InMouseLockMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UUMG_WidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
	class AEngine_PlayerController*                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLockMouseToViewport;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UUMG_WidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UUMG_WidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FEngine_Engine_EMouseLockMode                      InMouseLockMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCursorDuringCapture;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UUMG_WidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
	class AEngine_PlayerController*                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLockMouseToViewport;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCursorDuringCapture;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
struct UUMG_WidgetBlueprintLibrary_SetHardwareCursor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EMouseCursor>             CursorShape;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CursorName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UUMG_WidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
struct UUMG_WidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params
{
	FSlateCore_SlateCore_EColorVisionDeficiency        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CorrectDeficiency;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowCorrectionWithDeficiency;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UUMG_WidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UEngine_Texture2D*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UUMG_WidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UEngine_MaterialInterface*                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
struct UUMG_WidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UUMG_WidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UUMG_WidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               bInAllJoysticks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
struct UUMG_WidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params
{
};

// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UUMG_WidgetBlueprintLibrary_NoResourceBrush_Params
{
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UUMG_WidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UEngine_Texture2D*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UUMG_WidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UEngine_MaterialInterface*                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UUMG_WidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
	class UEngine_SlateBrushAsset*                     BrushAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UUMG_WidgetBlueprintLibrary_LockMouse_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UUMG_WidgetBlueprintLibrary_IsDragDropping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.Handled
struct UUMG_WidgetBlueprintLibrary_Handled_Params
{
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct UUMG_WidgetBlueprintLibrary_GetSafeZonePadding_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SafePadding;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SafePaddingScale;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SpillOverPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UUMG_WidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
	struct FSlateCore_AnalogInputEvent                 Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_KeyEvent                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UUMG_WidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
	struct FSlateCore_PointerEvent                     Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_InputEvent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UUMG_WidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
	struct FSlateCore_NavigationEvent                  Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_InputEvent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UUMG_WidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
	struct FSlateCore_KeyEvent                         Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_InputEvent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UUMG_WidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
	struct FSlateCore_CharacterEvent                   Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateCore_InputEvent                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UUMG_WidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UEngine_MaterialInstanceDynamic*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UUMG_WidgetBlueprintLibrary_GetDragDroppingContent_Params
{
	class UUMG_DragDropOperation*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UUMG_WidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEngine_Texture2D*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UUMG_WidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEngine_MaterialInterface*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UUMG_WidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UUMG_WidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_UserWidget*>                     FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UUMG_WidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_UserWidget*>                     FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UUMG_WidgetBlueprintLibrary_EndDragDrop_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UUMG_WidgetBlueprintLibrary_DrawTextFormatted_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_Font*                                Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontTypeFace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawText
struct UUMG_WidgetBlueprintLibrary_DrawText_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UUMG_WidgetBlueprintLibrary_DrawLines_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
	TArray<struct FVector2D>                           Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UUMG_WidgetBlueprintLibrary_DrawLine_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   PositionA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PositionB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UUMG_WidgetBlueprintLibrary_DrawBox_Params
{
	struct FUMG_PaintContext                           Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     Brush;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UUMG_WidgetBlueprintLibrary_DismissAllMenus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UUMG_WidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FSlateCore_PointerEvent                     PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 WidgetDetectingDrag;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInputCore_Key                              DragKey;                                                  // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UUMG_WidgetBlueprintLibrary_DetectDrag_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 WidgetDetectingDrag;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInputCore_Key                              DragKey;                                                  // (Parm)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UUMG_WidgetBlueprintLibrary_CreateDragDropOperation_Params
{
	class UClass*                                      OperationClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_DragDropOperation*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.Create
struct UUMG_WidgetBlueprintLibrary_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_UserWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UUMG_WidgetBlueprintLibrary_ClearUserFocus_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               bInAllUsers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UUMG_WidgetBlueprintLibrary_CaptureMouse_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UUMG_WidgetBlueprintLibrary_CaptureJoystick_Params
{
	struct FUMG_EventReply                             Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UUMG_Widget*                                 CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInAllJoysticks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUMG_EventReply                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UUMG_WidgetBlueprintLibrary_CancelDragDrop_Params
{
};

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UUMG_WidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.SetActiveWidget
struct UUMG_WidgetSwitcher_SetActiveWidget_Params
{
	class UUMG_Widget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UUMG_WidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetNumWidgets
struct UUMG_WidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UUMG_WidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetActiveWidget
struct UUMG_WidgetSwitcher_GetActiveWidget_Params
{
	class UUMG_Widget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UUMG_WidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetPadding
struct UUMG_WidgetSwitcherSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UUMG_WidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
struct UUMG_WindowTitleBarArea_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetPadding
struct UUMG_WindowTitleBarArea_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
struct UUMG_WindowTitleBarArea_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
struct UUMG_WindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetPadding
struct UUMG_WindowTitleBarAreaSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
struct UUMG_WindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBox.SetInnerSlotPadding
struct UUMG_WrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBox.AddChildToWrapBox
struct UUMG_WrapBox_AddChildToWrapBox_Params
{
	class UUMG_Widget*                                 Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_WrapBoxSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UUMG_WrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetPadding
struct UUMG_WrapBoxSlot_SetPadding_Params
{
	struct FSlateCore_Margin                           InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UUMG_WrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UUMG_WrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UUMG_WrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SetFocus
struct UUMG_WidgetInteractionComponent_SetFocus_Params
{
	class UUMG_Widget*                                 FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct UUMG_WidgetInteractionComponent_SetCustomHitResult_Params
{
	struct FEngine_HitResult                           HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SendKeyChar
struct UUMG_WidgetInteractionComponent_SendKeyChar_Params
{
	struct FString                                     Characters;                                               // (Parm, ZeroConstructor)
	bool                                               bRepeat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ScrollWheel
struct UUMG_WidgetInteractionComponent_ScrollWheel_Params
{
	float                                              ScrollDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct UUMG_WidgetInteractionComponent_ReleasePointerKey_Params
{
	struct FInputCore_Key                              Key;                                                      // (Parm)
};

// Function UMG.WidgetInteractionComponent.ReleaseKey
struct UUMG_WidgetInteractionComponent_ReleaseKey_Params
{
	struct FInputCore_Key                              Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressPointerKey
struct UUMG_WidgetInteractionComponent_PressPointerKey_Params
{
	struct FInputCore_Key                              Key;                                                      // (Parm)
};

// Function UMG.WidgetInteractionComponent.PressKey
struct UUMG_WidgetInteractionComponent_PressKey_Params
{
	struct FInputCore_Key                              Key;                                                      // (Parm)
	bool                                               bRepeat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct UUMG_WidgetInteractionComponent_PressAndReleaseKey_Params
{
	struct FInputCore_Key                              Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct UUMG_WidgetInteractionComponent_IsOverInteractableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct UUMG_WidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct UUMG_WidgetInteractionComponent_IsOverFocusableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetLastHitResult
struct UUMG_WidgetInteractionComponent_GetLastHitResult_Params
{
	struct FEngine_HitResult                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct UUMG_WidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
	class UUMG_WidgetComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct UUMG_WidgetInteractionComponent_Get2DHitLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
