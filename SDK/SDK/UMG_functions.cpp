
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

// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_ESlateVisibility      InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetVisibility(FUMG_UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	UUMG_Widget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetUserFocus(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	UUMG_Widget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_Widget::SetToolTipText(const struct FText& InToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	UUMG_Widget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Widget::SetToolTip(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	UUMG_Widget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	UUMG_Widget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Pivot                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	UUMG_Widget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderTransformAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	UUMG_Widget_SetRenderTransformAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUMG_WidgetTransform    InTransform                    (Parm)

void UUMG_Widget::SetRenderTransform(const struct FUMG_WidgetTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	UUMG_Widget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Shear                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderShear(const struct FVector2D& Shear)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	UUMG_Widget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderScale(const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	UUMG_Widget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetRenderOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	UUMG_Widget_SetRenderOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRuleExplicit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigation Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Widget::SetNavigationRuleExplicit(FSlateCore_SlateCore_EUINavigation Direction, class UUMG_Widget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	UUMG_Widget_SetNavigationRuleExplicit_Params params;
	params.Direction = Direction;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigation Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InCustomDelegate               (Parm, ZeroConstructor)

void UUMG_Widget::SetNavigationRuleCustomBoundary(FSlateCore_SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	UUMG_Widget_SetNavigationRuleCustomBoundary_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRuleCustom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigation Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InCustomDelegate               (Parm, ZeroConstructor)

void UUMG_Widget::SetNavigationRuleCustom(FSlateCore_SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	UUMG_Widget_SetNavigationRuleCustom_Params params;
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRuleBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigation Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// FSlateCore_SlateCore_EUINavigationRule Rule                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetNavigationRuleBase(FSlateCore_SlateCore_EUINavigation Direction, FSlateCore_SlateCore_EUINavigationRule Rule)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	UUMG_Widget_SetNavigationRuleBase_Params params;
	params.Direction = Direction;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigation Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// FSlateCore_SlateCore_EUINavigationRule Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetNavigationRule(FSlateCore_SlateCore_EUINavigation Direction, FSlateCore_SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	UUMG_Widget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)

void UUMG_Widget::SetKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	UUMG_Widget_SetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetIsEnabled(bool bInIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	UUMG_Widget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetFocus
// (Final, Native, Public, BlueprintCallable)

void UUMG_Widget::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	UUMG_Widget_SetFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FCoreUObject_EMouseCursor> InCursor                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetCursor(TEnumAsByte<FCoreUObject_EMouseCursor> InCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	UUMG_Widget_SetCursor_Params params;
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetClipping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EWidgetClipping InClipping                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetClipping(FSlateCore_SlateCore_EWidgetClipping InClipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	UUMG_Widget_SetClipping_Params params;
	params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EUINavigationRule Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::SetAllNavigationRules(FSlateCore_SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	UUMG_Widget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)

void UUMG_Widget::ResetCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	UUMG_Widget_ResetCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)

void UUMG_Widget::RemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	UUMG_Widget_RemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_Widget::OnReply__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	UUMG_Widget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_Widget::OnPointerEvent__DelegateSignature(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	UUMG_Widget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	UUMG_Widget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::IsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	UUMG_Widget_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)

void UUMG_Widget::InvalidateLayoutAndVolatility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	UUMG_Widget_InvalidateLayoutAndVolatility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasUserFocusedDescendants(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	UUMG_Widget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasUserFocus(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	UUMG_Widget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCaptureByUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointerIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasMouseCaptureByUser(int UserIndex, int PointerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	UUMG_Widget_HasMouseCaptureByUser_Params params;
	params.UserIndex = UserIndex;
	params.PointerIndex = PointerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasMouseCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	UUMG_Widget_HasMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	UUMG_Widget_HasKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasFocusedDescendants()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	UUMG_Widget_HasFocusedDescendants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::HasAnyUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	UUMG_Widget_HasAnyUserFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_Widget::GetWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	UUMG_Widget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FUMG_UMG_ESlateVisibility      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_ESlateVisibility UUMG_Widget::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	UUMG_Widget_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetTickSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateCore_Geometry     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FSlateCore_Geometry UUMG_Widget::GetTickSpaceGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	UUMG_Widget_GetTickSpaceGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_Widget::GetText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	UUMG_Widget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// FUMG_UMG_ESlateVisibility      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_ESlateVisibility UUMG_Widget::GetSlateVisibility__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	UUMG_Widget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateCore_SlateColor   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateColor UUMG_Widget::GetSlateColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	UUMG_Widget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_Widget::GetSlateBrush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	UUMG_Widget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_Widget::GetRenderTransformAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	UUMG_Widget_GetRenderTransformAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetRenderOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_Widget::GetRenderOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	UUMG_Widget_GetRenderOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_PanelWidget*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_PanelWidget* UUMG_Widget::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	UUMG_Widget_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetPaintSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateCore_Geometry     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FSlateCore_Geometry UUMG_Widget::GetPaintSpaceGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	UUMG_Widget_GetPaintSpaceGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_PlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_PlayerController* UUMG_Widget::GetOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	UUMG_Widget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningLocalPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_LocalPlayer*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_LocalPlayer* UUMG_Widget::GetOwningLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	UUMG_Widget_GetOwningLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// TEnumAsByte<FCoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FCoreUObject_EMouseCursor> UUMG_Widget::GetMouseCursor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	UUMG_Widget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUMG_Widget::GetLinearColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	UUMG_Widget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::GetIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	UUMG_Widget_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_Widget::GetInt32__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	UUMG_Widget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetGameInstance
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_GameInstance*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_GameInstance* UUMG_Widget::GetGameInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	UUMG_Widget_GetGameInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_Widget::GetFloat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	UUMG_Widget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_Widget::GetDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	UUMG_Widget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FSlateCore_SlateCore_EWidgetClipping ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FSlateCore_SlateCore_EWidgetClipping UUMG_Widget::GetClipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	UUMG_Widget_GetClipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// FSlateCore_SlateCore_ECheckBoxState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FSlateCore_SlateCore_ECheckBoxState UUMG_Widget::GetCheckBoxState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	UUMG_Widget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateCore_Geometry     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FSlateCore_Geometry UUMG_Widget::GetCachedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	UUMG_Widget_GetCachedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Widget::GetBool__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	UUMG_Widget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor)
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_Widget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	UUMG_Widget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_Widget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	UUMG_Widget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Widget::ForceVolatile(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	UUMG_Widget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)

void UUMG_Widget::ForceLayoutPrepass()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	UUMG_Widget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	UUMG_Image_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	UUMG_Image_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushTintColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateColor   TintColor                      (Parm)

void UUMG_Image::SetBrushTintColor(const struct FSlateCore_SlateColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	UUMG_Image_SetBrushTintColor_Params params;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               DesiredSize                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushSize(const struct FVector2D& DesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	UUMG_Image_SetBrushSize_Params params;
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushResourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ResourceObject                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushResourceObject(class UObject* ResourceObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	UUMG_Image_SetBrushResourceObject_Params params;
	params.ResourceObject = ResourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture2DDynamic* Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromTextureDynamic(class UEngine_Texture2DDynamic* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	UUMG_Image_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture2D*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromTexture(class UEngine_Texture2D* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	UUMG_Image_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromSoftTexture(bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	UUMG_Image_SetBrushFromSoftTexture_Params params;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromSoftMaterial
// (Native, Public, BlueprintCallable)

void UUMG_Image::SetBrushFromSoftMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	UUMG_Image_SetBrushFromSoftMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInterface* Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromMaterial(class UEngine_MaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	UUMG_Image_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromAtlasInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UEngine_SlateTextureAtlasInterface> AtlasRegion                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromAtlasInterface(const TScriptInterface<class UEngine_SlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	UUMG_Image_SetBrushFromAtlasInterface_Params params;
	params.AtlasRegion = AtlasRegion;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromAsset
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SlateBrushAsset* Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Image::SetBrushFromAsset(class UEngine_SlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	UUMG_Image_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrush
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_Image::SetBrush(const struct FSlateCore_SlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	UUMG_Image_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_Image::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	UUMG_Image_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_PanelWidget::RemoveChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	UUMG_PanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_PanelWidget::RemoveChild(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	UUMG_PanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_PanelWidget::HasChild(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	UUMG_PanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_PanelWidget::HasAnyChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	UUMG_PanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_PanelWidget::GetChildrenCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	UUMG_PanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_Widget*             Content                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_PanelWidget::GetChildIndex(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	UUMG_PanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_PanelWidget::GetChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	UUMG_PanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetAllChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUMG_Widget*>     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UUMG_Widget*> UUMG_PanelWidget::GetAllChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	UUMG_PanelWidget_GetAllChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// (Native, Public, BlueprintCallable)

void UUMG_PanelWidget::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	UUMG_PanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_PanelSlot*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_PanelSlot* UUMG_PanelWidget::AddChild(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	UUMG_PanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_PanelSlot*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_PanelSlot* UUMG_ContentWidget::SetContent(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");

	UUMG_ContentWidget_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_PanelSlot*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_PanelSlot* UUMG_ContentWidget::GetContentSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	UUMG_ContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_ContentWidget::GetContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");

	UUMG_ContentWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Button.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Button::SetTouchMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	UUMG_Button_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_ButtonStyle  InStyle                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_Button::SetStyle(const struct FSlateCore_ButtonStyle& InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	UUMG_Button_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Button::SetPressMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonPressMethod> InPressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	UUMG_Button_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Button::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	UUMG_Button_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Button::SetClickMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonClickMethod> InClickMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	UUMG_Button_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBackgroundColor              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Button::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	UUMG_Button_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_Button::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	UUMG_Button_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_CanvasPanelSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_CanvasPanelSlot* UUMG_CanvasPanel::AddChildToCanvas(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	UUMG_CanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_HorizontalBoxSlot*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_HorizontalBoxSlot* UUMG_HorizontalBox::AddChildToHorizontalBox(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	UUMG_HorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListViewBase.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewWheelScrollMultiplier       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	UUMG_ListViewBase_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InScrollOffset                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListViewBase::SetScrollOffset(float InScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	UUMG_ListViewBase_SetScrollOffset_Params params;
	params.InScrollOffset = InScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.SetScrollbarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_ESlateVisibility      InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListViewBase::SetScrollbarVisibility(FUMG_UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	UUMG_ListViewBase_SetScrollbarVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.ScrollToTop
// (Final, Native, Public, BlueprintCallable)

void UUMG_ListViewBase::ScrollToTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	UUMG_ListViewBase_ScrollToTop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.ScrollToBottom
// (Final, Native, Public, BlueprintCallable)

void UUMG_ListViewBase::ScrollToBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	UUMG_ListViewBase_ScrollToBottom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.RequestRefresh
// (Final, Native, Public, BlueprintCallable)

void UUMG_ListViewBase::RequestRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	UUMG_ListViewBase_RequestRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.RegenerateAllEntries
// (Final, Native, Public, BlueprintCallable)

void UUMG_ListViewBase::RegenerateAllEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	UUMG_ListViewBase_RegenerateAllEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUMG_UserWidget*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UUMG_UserWidget*> UUMG_ListViewBase::GetDisplayedEntryWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	UUMG_ListViewBase_GetDisplayedEntryWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextLayoutWidget.SetJustification
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextLayoutWidget::SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	UUMG_TextLayoutWidget_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetWindowVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_EWindowVisibility     InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetWindowVisibility(FUMG_UMG_EWindowVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	UUMG_WidgetComponent_SetWindowVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetWindowFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInWindowFocusable             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	UUMG_WidgetComponent_SetWindowFocusable_Params params;
	params.bInWindowFocusable = bInWindowFocusable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetWidgetSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_EWidgetSpace          NewSpace                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetWidgetSpace(FUMG_UMG_EWidgetSpace NewSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	UUMG_WidgetComponent_SetWidgetSpace_Params params;
	params.NewSpace = NewSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_WidgetComponent::SetWidget(class UUMG_UserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	UUMG_WidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetTwoSided
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWantTwoSided                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetTwoSided(bool bWantTwoSided)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	UUMG_WidgetComponent_SetTwoSided_Params params;
	params.bWantTwoSided = bWantTwoSided;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewTintColorAndOpacity         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	UUMG_WidgetComponent_SetTintColorAndOpacity_Params params;
	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWantTickWhenOffscreen         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	UUMG_WidgetComponent_SetTickWhenOffscreen_Params params;
	params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetRedrawTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRedrawTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	UUMG_WidgetComponent_SetRedrawTime_Params params;
	params.InRedrawTime = InRedrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetPivot
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPivot                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUMG_WidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	UUMG_WidgetComponent_SetPivot_Params params;
	params.InPivot = InPivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_LocalPlayer*     LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetOwnerPlayer(class UEngine_LocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	UUMG_WidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetManuallyRedraw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseManualRedraw               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	UUMG_WidgetComponent_SetManuallyRedraw_Params params;
	params.bUseManualRedraw = bUseManualRedraw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetGeometryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_EWidgetGeometryMode   InGeometryMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetGeometryMode(FUMG_UMG_EWidgetGeometryMode InGeometryMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	UUMG_WidgetComponent_SetGeometryMode_Params params;
	params.InGeometryMode = InGeometryMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	UUMG_WidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInDrawAtDesiredSize           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	UUMG_WidgetComponent_SetDrawAtDesiredSize_Params params;
	params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InCylinderArcAngle             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	UUMG_WidgetComponent_SetCylinderArcAngle_Params params;
	params.InCylinderArcAngle = InCylinderArcAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	UUMG_WidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)

void UUMG_WidgetComponent::RequestRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	UUMG_WidgetComponent_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.GetWindowVisiblility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FUMG_UMG_EWindowVisibility     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_EWindowVisibility UUMG_WidgetComponent::GetWindowVisiblility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	UUMG_WidgetComponent_GetWindowVisiblility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWindowFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetComponent::GetWindowFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	UUMG_WidgetComponent_GetWindowFocusable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetWidgetSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FUMG_UMG_EWidgetSpace          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_EWidgetSpace UUMG_WidgetComponent::GetWidgetSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	UUMG_WidgetComponent_GetWidgetSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_UserWidget*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UserWidget* UUMG_WidgetComponent::GetUserWidgetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	UUMG_WidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetTwoSided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetComponent::GetTwoSided()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	UUMG_WidgetComponent_GetTwoSided_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetComponent::GetTickWhenOffscreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	UUMG_WidgetComponent_GetTickWhenOffscreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_TextureRenderTarget2D* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_TextureRenderTarget2D* UUMG_WidgetComponent::GetRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	UUMG_WidgetComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRedrawTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_WidgetComponent::GetRedrawTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	UUMG_WidgetComponent_GetRedrawTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetComponent::GetPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	UUMG_WidgetComponent_GetPivot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_LocalPlayer*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_LocalPlayer* UUMG_WidgetComponent::GetOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	UUMG_WidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_WidgetComponent::GetMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	UUMG_WidgetComponent_GetMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetManuallyRedraw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetComponent::GetManuallyRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	UUMG_WidgetComponent_GetManuallyRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetGeometryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FUMG_UMG_EWidgetGeometryMode   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_EWidgetGeometryMode UUMG_WidgetComponent::GetGeometryMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	UUMG_WidgetComponent_GetGeometryMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetComponent::GetDrawSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	UUMG_WidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetComponent::GetDrawAtDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	UUMG_WidgetComponent_GetDrawAtDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_WidgetComponent::GetCylinderArcAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	UUMG_WidgetComponent_GetCylinderArcAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetComponent::GetCurrentDrawSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	UUMG_WidgetComponent_GetCurrentDrawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_OverlaySlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_OverlaySlot* UUMG_Overlay::AddChildToOverlay(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	UUMG_Overlay_AddChildToOverlay_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.RichTextBlock.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_DataTable*       NewTextStyleSet                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RichTextBlock::SetTextStyleSet(class UEngine_DataTable* NewTextStyleSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	UUMG_RichTextBlock_SetTextStyleSet_Params params;
	params.NewTextStyleSet = NewTextStyleSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetText
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_RichTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	UUMG_RichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	UUMG_RichTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetDefaultTextStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_TextBlockStyle InDefaultTextStyle             (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_RichTextBlock::SetDefaultTextStyle(const struct FSlateCore_TextBlockStyle& InDefaultTextStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	UUMG_RichTextBlock_SetDefaultTextStyle_Params params;
	params.InDefaultTextStyle = InDefaultTextStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   InStrikeBrush                  (Parm, OutParm)

void UUMG_RichTextBlock::SetDefaultStrikeBrush(struct FSlateCore_SlateBrush* InStrikeBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	UUMG_RichTextBlock_SetDefaultStrikeBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InStrikeBrush != nullptr)
		*InStrikeBrush = params.InStrikeBrush;
}


// Function UMG.RichTextBlock.SetDefaultShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	UUMG_RichTextBlock_SetDefaultShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	UUMG_RichTextBlock_SetDefaultShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateFontInfo InFontInfo                     (Parm)

void UUMG_RichTextBlock::SetDefaultFont(const struct FSlateCore_SlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	UUMG_RichTextBlock_SetDefaultFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateColor   InColorAndOpacity              (Parm)

void UUMG_RichTextBlock::SetDefaultColorAndOpacity(const struct FSlateCore_SlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	UUMG_RichTextBlock_SetDefaultColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InAutoTextWrap                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	UUMG_RichTextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_RichTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	UUMG_RichTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.RichTextBlock.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DecoratorClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_RichTextBlockDecorator* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_RichTextBlockDecorator* UUMG_RichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	UUMG_RichTextBlock_GetDecoratorByClass_Params params;
	params.DecoratorClass = DecoratorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// (Final, Native, Public)

void UUMG_RichTextBlock::ClearAllDefaultStyleOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	UUMG_RichTextBlock_ClearAllDefaultStyleOverrides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewWheelScrollMultiplier       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	UUMG_ScrollBox_SetWheelScrollMultiplier_Params params;
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	UUMG_ScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetScrollbarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_ESlateVisibility      NewScrollBarVisibility         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetScrollbarVisibility(FUMG_UMG_ESlateVisibility NewScrollBarVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	UUMG_ScrollBox_SetScrollbarVisibility_Params params;
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetScrollbarThickness
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               NewScrollbarThickness          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUMG_ScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	UUMG_ScrollBox_SetScrollbarThickness_Params params;
	params.NewScrollbarThickness = NewScrollbarThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetScrollbarPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       NewScrollbarPadding            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUMG_ScrollBox::SetScrollbarPadding(const struct FSlateCore_Margin& NewScrollbarPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	UUMG_ScrollBox_SetScrollbarPadding_Params params;
	params.NewScrollbarPadding = NewScrollbarPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EOrientation> NewOrientation                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetOrientation(TEnumAsByte<FSlateCore_SlateCore_EOrientation> NewOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	UUMG_ScrollBox_SetOrientation_Params params;
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetConsumeMouseWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EConsumeMouseWheel NewConsumeMouseWheel           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetConsumeMouseWheel(FSlateCore_SlateCore_EConsumeMouseWheel NewConsumeMouseWheel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	UUMG_ScrollBox_SetConsumeMouseWheel_Params params;
	params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetAnimateWheelScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldAnimateWheelScrolling   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	UUMG_ScrollBox_SetAnimateWheelScrolling_Params params;
	params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewAlwaysShowScrollbar         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	UUMG_ScrollBox_SetAlwaysShowScrollbar_Params params;
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewAllowOverscroll             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	UUMG_ScrollBox_SetAllowOverscroll_Params params;
	params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData)
// FSlate_Slate_EDescendantScrollDestination ScrollDestination              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBox::ScrollWidgetIntoView(class UUMG_Widget* WidgetToFind, bool AnimateScroll, FSlate_Slate_EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	UUMG_ScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)

void UUMG_ScrollBox::ScrollToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	UUMG_ScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)

void UUMG_ScrollBox::ScrollToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	UUMG_ScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.GetViewOffsetFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_ScrollBox::GetViewOffsetFraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	UUMG_ScrollBox_GetViewOffsetFraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_ScrollBox::GetScrollOffsetOfEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	UUMG_ScrollBox_GetScrollOffsetOfEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_ScrollBox::GetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	UUMG_ScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScrollBox.EndInertialScrolling
// (Final, Native, Public, BlueprintCallable)

void UUMG_ScrollBox::EndInertialScrolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	UUMG_ScrollBox_EndInertialScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_TextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	UUMG_TextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetStrikeBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   InStrikeBrush                  (Parm)

void UUMG_TextBlock::SetStrikeBrush(const struct FSlateCore_SlateBrush& InStrikeBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	UUMG_TextBlock_SetStrikeBrush_Params params;
	params.InStrikeBrush = InStrikeBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	UUMG_TextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	UUMG_TextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	UUMG_TextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	UUMG_TextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateFontInfo InFontInfo                     (Parm)

void UUMG_TextBlock::SetFont(const struct FSlateCore_SlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	UUMG_TextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateColor   InColorAndOpacity              (Parm)
// FUMG_UMG_EUserSettingColor     SettingColor                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetColorAndOpacity(const struct FSlateCore_SlateColor& InColorAndOpacity, FUMG_UMG_EUserSettingColor SettingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	UUMG_TextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
	params.SettingColor = SettingColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InAutoTextWrap                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	UUMG_TextBlock_SetAutoWrapText_Params params;
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_TextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	UUMG_TextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_TextBlock::GetDynamicOutlineMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	UUMG_TextBlock_GetDynamicOutlineMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_TextBlock::GetDynamicFontMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	UUMG_TextBlock_GetDynamicFontMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_VerticalBoxSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_VerticalBoxSlot* UUMG_VerticalBox::AddChildToVerticalBox(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	UUMG_VerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)

void UUMG_UserWidget::UnregisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	UUMG_UserWidget_UnregisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_UserWidget::UnbindFromAnimationStarted(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	UUMG_UserWidget_UnbindFromAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_UserWidget::UnbindFromAnimationFinished(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	UUMG_UserWidget_UnbindFromAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::UnbindAllFromAnimationStarted(class UUMG_WidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	UUMG_UserWidget_UnbindAllFromAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::UnbindAllFromAnimationFinished(class UUMG_WidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	UUMG_UserWidget_UnbindAllFromAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::Tick(const struct FSlateCore_Geometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	UUMG_UserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<FEngine_Engine_EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	UUMG_UserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)

void UUMG_UserWidget::StopListeningForAllInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	UUMG_UserWidget_StopListeningForAllInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// (Final, Native, Public, BlueprintCallable)

void UUMG_UserWidget::StopAnimationsAndLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	UUMG_UserWidget_StopAnimationsAndLatentActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::StopAnimation(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	UUMG_UserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)

void UUMG_UserWidget::StopAllAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	UUMG_UserWidget_StopAllAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	UUMG_UserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetPlaybackSpeed(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	UUMG_UserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	UUMG_UserWidget_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetOwningPlayer(class AEngine_PlayerController* LocalPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	UUMG_UserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetNumLoopsToPlay(class UUMG_WidgetAnimation* InAnimation, int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	UUMG_UserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetInputActionPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	UUMG_UserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	UUMG_UserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateColor   InForegroundColor              (Parm)

void UUMG_UserWidget::SetForegroundColor(const struct FSlateCore_SlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	UUMG_UserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	UUMG_UserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	UUMG_UserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlate_Anchors          Anchors                        (Parm)

void UUMG_UserWidget::SetAnchorsInViewport(const struct FSlate_Anchors& Anchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	UUMG_UserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Alignment                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	UUMG_UserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::ReverseAnimation(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	UUMG_UserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UUMG_UserWidget::RemoveFromViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	UUMG_UserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)

void UUMG_UserWidget::RegisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	UUMG_UserWidget_RegisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	UUMG_UserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SoundBase*       SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::PlaySound(class UEngine_SoundBase* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	UUMG_UserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PlayAnimationTimeRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UMGSequencePlayer*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_UMGSequencePlayer* UUMG_UserWidget::PlayAnimationTimeRange(class UUMG_WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	UUMG_UserWidget_PlayAnimationTimeRange_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimationReverse
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UMGSequencePlayer*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_UMGSequencePlayer* UUMG_UserWidget::PlayAnimationReverse(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	UUMG_UserWidget_PlayAnimationReverse_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimationForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UMGSequencePlayer*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_UMGSequencePlayer* UUMG_UserWidget::PlayAnimationForward(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	UUMG_UserWidget_PlayAnimationForward_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UMGSequencePlayer*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_UMGSequencePlayer* UUMG_UserWidget::PlayAnimation(class UUMG_WidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	UUMG_UserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_UserWidget::PauseAnimation(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	UUMG_UserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnTouchStarted(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	UUMG_UserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnTouchMoved(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	UUMG_UserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent GestureEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnTouchGesture(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	UUMG_UserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchForceChanged
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnTouchForceChanged(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	UUMG_UserWidget_OnTouchForceChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnTouchEnded(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	UUMG_UserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_FocusEvent   InFocusEvent                   (Parm)

void UUMG_UserWidget::OnRemovedFromFocusPath(const struct FSlateCore_FocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	UUMG_UserWidget_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnPreviewMouseButtonDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	UUMG_UserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_KeyEvent     InKeyEvent                     (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnPreviewKeyDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	UUMG_UserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)

void UUMG_UserWidget::OnPaint(struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	UUMG_UserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMouseWheel(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	UUMG_UserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMouseMove(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	UUMG_UserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_UserWidget::OnMouseLeave(const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	UUMG_UserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_UserWidget::OnMouseEnter(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	UUMG_UserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnMouseCaptureLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_UserWidget::OnMouseCaptureLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	UUMG_UserWidget_OnMouseCaptureLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMouseButtonUp(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	UUMG_UserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMouseButtonDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	UUMG_UserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     InMyGeometry                   (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMouseButtonDoubleClick(const struct FSlateCore_Geometry& InMyGeometry, const struct FSlateCore_PointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	UUMG_UserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_MotionEvent  InMotionEvent                  (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnMotionDetected(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_MotionEvent& InMotionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	UUMG_UserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_KeyEvent     InKeyEvent                     (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnKeyUp(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	UUMG_UserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_KeyEvent     InKeyEvent                     (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnKeyDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	UUMG_UserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_CharacterEvent InCharacterEvent               (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnKeyChar(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_CharacterEvent& InCharacterEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	UUMG_UserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_UserWidget::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	UUMG_UserWidget_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_FocusEvent   InFocusEvent                   (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnFocusReceived(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_FocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	UUMG_UserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_FocusEvent   InFocusEvent                   (Parm)

void UUMG_UserWidget::OnFocusLost(const struct FSlateCore_FocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	UUMG_UserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent PointerEvent                   (Parm)
// class UUMG_DragDropOperation*  Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::OnDrop(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	UUMG_UserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent PointerEvent                   (Parm)
// class UUMG_DragDropOperation*  Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::OnDragOver(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	UUMG_UserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (Parm)
// class UUMG_DragDropOperation*  Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnDragLeave(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	UUMG_UserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent PointerEvent                   (Parm)
// class UUMG_DragDropOperation*  Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnDragEnter(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	UUMG_UserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UUMG_DragDropOperation*  Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnDragDetected(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	UUMG_UserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UUMG_DragDropOperation*  Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnDragCancelled(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	UUMG_UserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnAnimationStarted(class UUMG_WidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	UUMG_UserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::OnAnimationFinished(class UUMG_WidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	UUMG_UserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_Geometry     MyGeometry                     (Parm, IsPlainOldData)
// struct FSlateCore_AnalogInputEvent InAnalogInputEvent             (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_UserWidget::OnAnalogValueChanged(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_AnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	UUMG_UserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateCore_FocusEvent   InFocusEvent                   (Parm)

void UUMG_UserWidget::OnAddedToFocusPath(const struct FSlateCore_FocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	UUMG_UserWidget_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_EInputEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)

void UUMG_UserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<FEngine_Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	UUMG_UserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsPlayingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	UUMG_UserWidget_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsListeningForInputAction(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	UUMG_UserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	UUMG_UserWidget_IsInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	UUMG_UserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsAnyAnimationPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	UUMG_UserWidget_IsAnyAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsAnimationPlayingForward(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	UUMG_UserWidget_IsAnimationPlayingForward_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::IsAnimationPlaying(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	UUMG_UserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AEngine_Pawn*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Pawn* UUMG_UserWidget::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	UUMG_UserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::GetIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	UUMG_UserWidget_GetIsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_WidgetAnimation*    InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_UserWidget::GetAnimationCurrentTime(class UUMG_WidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	UUMG_UserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlate_Anchors          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlate_Anchors UUMG_UserWidget::GetAnchorsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	UUMG_UserWidget_GetAnchorsInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_UserWidget::GetAlignmentInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	UUMG_UserWidget_GetAlignmentInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_UserWidget::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	UUMG_UserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_UserWidget::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	UUMG_UserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.CancelLatentActions
// (Final, Native, Public, BlueprintCallable)

void UUMG_UserWidget::CancelLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	UUMG_UserWidget_CancelLatentActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_UserWidget::BindToAnimationStarted(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	UUMG_UserWidget_BindToAnimationStarted_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_UserWidget::BindToAnimationFinished(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	UUMG_UserWidget_BindToAnimationFinished_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.BindToAnimationEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_WidgetAnimation*    Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// FUMG_UMG_EWidgetAnimationEvent AnimationEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   UserTag                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::BindToAnimationEvent(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate, FUMG_UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	UUMG_UserWidget_BindToAnimationEvent_Params params;
	params.Animation = Animation;
	params.Delegate = Delegate;
	params.AnimationEvent = AnimationEvent;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserWidget::AddToViewport(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	UUMG_UserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserWidget::AddToPlayerScreen(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	UUMG_UserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_WrapBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_WrapBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsWrapBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsWrapBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_WidgetSwitcherSlot* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_WidgetSwitcherSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsWidgetSwitcherSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");

	UUMG_WidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_VerticalBoxSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_VerticalBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_UniformGridSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UniformGridSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	UUMG_WidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_SizeBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_SizeBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsSizeBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsSizeBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_ScrollBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_ScrollBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsScrollBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsScrollBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_ScaleBoxSlot*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_ScaleBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsScaleBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsScaleBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_SafeZoneSlot*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_SafeZoneSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsSafeBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsSafeBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_OverlaySlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_OverlaySlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	UUMG_WidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_HorizontalBoxSlot*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_HorizontalBoxSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	UUMG_WidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_GridSlot*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_GridSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	UUMG_WidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_CanvasPanelSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_CanvasPanelSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	UUMG_WidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_BorderSlot*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_BorderSlot* UUMG_WidgetLayoutLibrary::STATIC_SlotAsBorderSlot(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	UUMG_WidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	UUMG_WidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class AEngine_PlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	UUMG_WidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_Geometry     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FSlateCore_Geometry UUMG_WidgetLayoutLibrary::STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	UUMG_WidgetLayoutLibrary_GetViewportWidgetGeometry_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetLayoutLibrary::STATIC_GetViewportSize(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	UUMG_WidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_WidgetLayoutLibrary::STATIC_GetViewportScale(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	UUMG_WidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_Geometry     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FSlateCore_Geometry UUMG_WidgetLayoutLibrary::STATIC_GetPlayerScreenWidgetGeometry(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	UUMG_WidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEngine_PlayerController* Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetLayoutLibrary::STATIC_GetMousePositionScaledByDPI(class AEngine_PlayerController* Player, float* LocationX, float* LocationY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	UUMG_WidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetLayoutLibrary::STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	UUMG_WidgetLayoutLibrary_GetMousePositionOnViewport_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetLayoutLibrary::STATIC_GetMousePositionOnPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	UUMG_WidgetLayoutLibrary_GetMousePositionOnPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// class UUMG_AsyncTaskDownloadImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_AsyncTaskDownloadImage* UUMG_AsyncTaskDownloadImage::STATIC_DownloadImage(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	UUMG_AsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	UUMG_BackgroundBlur_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	UUMG_BackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_BackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateCore_SlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	UUMG_BackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	UUMG_BackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStrength                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetBlurStrength(float InStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	UUMG_BackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetBlurRadius(int InBlurRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	UUMG_BackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	UUMG_BackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	UUMG_BackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlurSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	UUMG_BackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	UUMG_BackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_BoolBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	UUMG_BoolBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	UUMG_Border_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	UUMG_Border_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	UUMG_Border_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InScale                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	UUMG_Border_SetDesiredSizeScale_Params params;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	UUMG_Border_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture2D*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetBrushFromTexture(class UEngine_Texture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	UUMG_Border_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInterface* Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetBrushFromMaterial(class UEngine_MaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	UUMG_Border_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SlateBrushAsset* Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetBrushFromAsset(class UEngine_SlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	UUMG_Border_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBrushColor                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Border::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	UUMG_Border_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_Border::SetBrush(const struct FSlateCore_SlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	UUMG_Border_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_Border::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	UUMG_Border_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BorderSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	UUMG_BorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BorderSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	UUMG_BorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BorderSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	UUMG_BorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_BrushBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	UUMG_BrushBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ButtonSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	UUMG_ButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ButtonSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	UUMG_ButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ButtonSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	UUMG_ButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetZOrder(int InZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	UUMG_CanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	UUMG_CanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	UUMG_CanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InOffset                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetOffsets(const struct FSlateCore_Margin& InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	UUMG_CanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D               InMinimumAnchors               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	UUMG_CanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D               InMaximumAnchors               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	UUMG_CanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUMG_AnchorData         InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_CanvasPanelSlot::SetLayout(const struct FUMG_AnchorData& InLayoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	UUMG_CanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	UUMG_CanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlate_Anchors          InAnchors                      (Parm)

void UUMG_CanvasPanelSlot::SetAnchors(const struct FSlate_Anchors& InAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	UUMG_CanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InAlignment                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	UUMG_CanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_CanvasPanelSlot::GetZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	UUMG_CanvasPanelSlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_CanvasPanelSlot::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	UUMG_CanvasPanelSlot_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_CanvasPanelSlot::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	UUMG_CanvasPanelSlot_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateCore_Margin       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FSlateCore_Margin UUMG_CanvasPanelSlot::GetOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	UUMG_CanvasPanelSlot_GetOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUMG_AnchorData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_AnchorData UUMG_CanvasPanelSlot::GetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	UUMG_CanvasPanelSlot_GetLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_CanvasPanelSlot::GetAutoSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	UUMG_CanvasPanelSlot_GetAutoSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlate_Anchors          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlate_Anchors UUMG_CanvasPanelSlot::GetAnchors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	UUMG_CanvasPanelSlot_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_CanvasPanelSlot::GetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	UUMG_CanvasPanelSlot_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	UUMG_CheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_ECheckBoxState InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CheckBox::SetCheckedState(FSlateCore_SlateCore_ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	UUMG_CheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_CheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	UUMG_CheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_CheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	UUMG_CheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FSlateCore_SlateCore_ECheckBoxState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FSlateCore_SlateCore_ECheckBoxState UUMG_CheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	UUMG_CheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// FSlateCore_SlateCore_ECheckBoxState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FSlateCore_SlateCore_ECheckBoxState UUMG_CheckedStateBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	UUMG_CheckedStateBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CircularThrobber::SetRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	UUMG_CircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPeriod                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CircularThrobber::SetPeriod(float InPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	UUMG_CircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_CircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	UUMG_CircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateCore_SlateColor   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateColor UUMG_ColorBinding::GetSlateValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	UUMG_ColorBinding_GetSlateValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUMG_ColorBinding::GetLinearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	UUMG_ColorBinding_GetLinearValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)

void UUMG_ComboBoxString::SetSelectedOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	UUMG_ComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ComboBoxString::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	UUMG_ComboBoxString_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ComboBoxString::RemoveOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	UUMG_ComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)

void UUMG_ComboBoxString::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	UUMG_ComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<FSlateCore_SlateCore_ESelectInfo> SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<FSlateCore_SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	UUMG_ComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UUMG_ComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	UUMG_ComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ComboBoxString::IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	UUMG_ComboBoxString_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUMG_ComboBoxString::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	UUMG_ComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ComboBoxString::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	UUMG_ComboBoxString_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ComboBoxString::GetOptionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	UUMG_ComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUMG_ComboBoxString::GetOptionAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	UUMG_ComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ComboBoxString::FindOptionIndex(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	UUMG_ComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)

void UUMG_ComboBoxString::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	UUMG_ComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)

void UUMG_ComboBoxString::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	UUMG_ComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)

void UUMG_ComboBoxString::AddOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	UUMG_ComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_DragDropOperation::Drop(const struct FSlateCore_PointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	UUMG_DragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_DragDropOperation::Dragged(const struct FSlateCore_PointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	UUMG_DragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_DragDropOperation::DragCancelled(const struct FSlateCore_PointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	UUMG_DragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InEntrySpacing                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUMG_DynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	UUMG_DynamicEntryBoxBase_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DynamicEntryBoxBase.GetNumEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_DynamicEntryBoxBase::GetNumEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	UUMG_DynamicEntryBoxBase_GetNumEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUMG_UserWidget*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UUMG_UserWidget*> UUMG_DynamicEntryBoxBase::GetAllEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	UUMG_DynamicEntryBoxBase_GetAllEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.DynamicEntryBox.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDeleteWidgets                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	UUMG_DynamicEntryBox_Reset_Params params;
	params.bDeleteWidgets = bDeleteWidgets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DynamicEntryBox.RemoveEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         EntryWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_DynamicEntryBox::RemoveEntry(class UUMG_UserWidget* EntryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	UUMG_DynamicEntryBox_RemoveEntry_Params params;
	params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UClass*                  EntryClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UserWidget*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UserWidget* UUMG_DynamicEntryBox::BP_CreateEntryOfClass(class UClass* EntryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	UUMG_DynamicEntryBox_BP_CreateEntryOfClass_Params params;
	params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UserWidget* UUMG_DynamicEntryBox::BP_CreateEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	UUMG_DynamicEntryBox_BP_CreateEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_EditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	UUMG_EditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableText::SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	UUMG_EditableText_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	UUMG_EditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableText::SetIsPassword(bool InbIsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	UUMG_EditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (Parm)

void UUMG_EditableText::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	UUMG_EditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	UUMG_EditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_EditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	UUMG_EditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_EditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	UUMG_EditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_EditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	UUMG_EditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_ETextJustify> InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableTextBox::SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	UUMG_EditableTextBox_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	UUMG_EditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsPassword                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableTextBox::SetIsPassword(bool bIsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	UUMG_EditableTextBox_SetIsPassword_Params params;
	params.bIsPassword = bIsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_EditableTextBox::SetHintText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	UUMG_EditableTextBox_SetHintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InError                        (Parm)

void UUMG_EditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	UUMG_EditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_EditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUMG_EditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_EditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	UUMG_EditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_EditableTextBox::HasError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	UUMG_EditableTextBox_HasError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_EditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	UUMG_EditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)

void UUMG_EditableTextBox::ClearError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	UUMG_EditableTextBox_ClearError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	UUMG_ExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	UUMG_ExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ExpandableArea::GetIsExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	UUMG_ExpandableArea_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_FloatBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	UUMG_FloatBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.GridPanel.SetRowFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ColumnIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Coefficient                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridPanel::SetRowFill(int ColumnIndex, float Coefficient)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	UUMG_GridPanel_SetRowFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridPanel.SetColumnFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ColumnIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Coefficient                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridPanel::SetColumnFill(int ColumnIndex, float Coefficient)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	UUMG_GridPanel_SetColumnFill_Params params;
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_GridSlot*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_GridSlot* UUMG_GridPanel::AddChildToGrid(class UUMG_Widget* Content, int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	UUMG_GridPanel_AddChildToGrid_Params params;
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	UUMG_GridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetRowSpan(int InRowSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	UUMG_GridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	UUMG_GridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	UUMG_GridSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetNudge
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InNudge                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	UUMG_GridSlot_SetNudge_Params params;
	params.InNudge = InNudge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InLayer                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetLayer(int InLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	UUMG_GridSlot_SetLayer_Params params;
	params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	UUMG_GridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetColumnSpan(int InColumnSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	UUMG_GridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	UUMG_GridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_HorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	UUMG_HorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUMG_SlateChildSize     InSize                         (Parm)

void UUMG_HorizontalBoxSlot::SetSize(const struct FUMG_SlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	UUMG_HorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_HorizontalBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	UUMG_HorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_HorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	UUMG_HorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FUMG_UMG_ESlateVisibility      InVisibility                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InputKeySelector::SetTextBlockVisibility(FUMG_UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	UUMG_InputKeySelector_SetTextBlockVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlate_InputChord       InSelectedKey                  (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_InputKeySelector::SetSelectedKey(const struct FSlate_InputChord& InSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	UUMG_InputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InNoKeySpecifiedText           (Parm)

void UUMG_InputKeySelector::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	UUMG_InputKeySelector_SetNoKeySpecifiedText_Params params;
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InKeySelectionText             (Parm)

void UUMG_InputKeySelector::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	UUMG_InputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetEscapeKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInputCore_Key>  InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_InputKeySelector::SetEscapeKeys(TArray<struct FInputCore_Key> InKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	UUMG_InputKeySelector_SetEscapeKeys_Params params;
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	UUMG_InputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowGamepadKeys            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	UUMG_InputKeySelector_SetAllowGamepadKeys_Params params;
	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FSlate_InputChord       SelectedKey                    (Parm)

void UUMG_InputKeySelector::OnKeySelected__DelegateSignature(const struct FSlate_InputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	UUMG_InputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UUMG_InputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	UUMG_InputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_InputKeySelector::GetIsSelectingKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	UUMG_InputKeySelector_GetIsSelectingKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_Int32Binding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	UUMG_Int32Binding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           CanCache                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InvalidationBox::SetCanCache(bool CanCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	UUMG_InvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)

void UUMG_InvalidationBox::InvalidateCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	UUMG_InvalidationBox_InvalidateCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_InvalidationBox::GetCanCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	UUMG_InvalidationBox_GetCanCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");

	UUMG_UserListEntry_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");

	UUMG_UserListEntry_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserListEntry.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUMG_UserListEntry::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");

	UUMG_UserListEntry_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserListEntryLibrary.IsListItemSelected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UUMG_UserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserListEntryLibrary::STATIC_IsListItemSelected(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");

	UUMG_UserListEntryLibrary_IsListItemSelected_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UUMG_UserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_UserListEntryLibrary::STATIC_IsListItemExpanded(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");

	UUMG_UserListEntryLibrary_IsListItemExpanded_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserListEntryLibrary.GetOwningListView
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UUMG_UserListEntry> UserListEntry                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_ListViewBase*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_ListViewBase* UUMG_UserListEntryLibrary::STATIC_GetOwningListView(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");

	UUMG_UserListEntryLibrary_GetOwningListView_Params params;
	params.UserListEntry = UserListEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserObjectListEntry.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");

	UUMG_UserObjectListEntry_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UUMG_UserObjectListEntry> UserObjectListEntry            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUMG_UserObjectListEntryLibrary::STATIC_GetListItemObject(const TScriptInterface<class UUMG_UserObjectListEntry>& UserObjectListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");

	UUMG_UserObjectListEntryLibrary_GetListItemObject_Params params;
	params.UserObjectListEntry = UserObjectListEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.SetSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_ESelectionMode> SelectionMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::SetSelectionMode(TEnumAsByte<FSlate_Slate_ESelectionMode> SelectionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	UUMG_ListView_SetSelectionMode_Params params;
	params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	UUMG_ListView_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.ScrollIndexIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::ScrollIndexIntoView(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	UUMG_ListView_ScrollIndexIntoView_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::RemoveItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	UUMG_ListView_RemoveItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.NavigateToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::NavigateToIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	UUMG_ListView_NavigateToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ListView::IsRefreshPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	UUMG_ListView_IsRefreshPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ListView::GetNumItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	UUMG_ListView_GetNumItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.GetListItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UObject*> UUMG_ListView::GetListItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	UUMG_ListView_GetListItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUMG_ListView::GetItemAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	UUMG_ListView_GetItemAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ListView::GetIndexForItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	UUMG_ListView_GetIndexForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.ClearListItems
// (Final, Native, Public, BlueprintCallable)

void UUMG_ListView::ClearListItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	UUMG_ListView_ClearListItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_SetSelectedItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::BP_SetSelectedItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	UUMG_ListView_BP_SetSelectedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_SetListItems
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         InListItems                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_ListView::BP_SetListItems(TArray<class UObject*> InListItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	UUMG_ListView_BP_SetListItems_Params params;
	params.InListItems = InListItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_SetItemSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	UUMG_ListView_BP_SetItemSelection_Params params;
	params.Item = Item;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_ScrollItemIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	UUMG_ListView_BP_ScrollItemIntoView_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_NavigateToItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::BP_NavigateToItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	UUMG_ListView_BP_NavigateToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_IsItemVisible
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ListView::BP_IsItemVisible(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	UUMG_ListView_BP_IsItemVisible_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetSelectedItems
// (Final, Native, Private, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>         Items                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_ListView::BP_GetSelectedItems(TArray<class UObject*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	UUMG_ListView_BP_GetSelectedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetSelectedItem
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUMG_ListView::BP_GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	UUMG_ListView_BP_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.BP_GetNumItemsSelected
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_ListView::BP_GetNumItemsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	UUMG_ListView_BP_GetNumItemsSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ListView.BP_ClearSelection
// (Final, Native, Private, BlueprintCallable)

void UUMG_ListView::BP_ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	UUMG_ListView_BP_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.BP_CancelScrollIntoView
// (Final, Native, Private, BlueprintCallable)

void UUMG_ListView::BP_CancelScrollIntoView()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	UUMG_ListView_BP_CancelScrollIntoView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ListView.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ListView::AddItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	UUMG_ListView_AddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	UUMG_MenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_MenuAnchor::ShouldOpenDueToClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	UUMG_MenuAnchor_ShouldOpenDueToClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.SetPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EMenuPlacement> InPlacement                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MenuAnchor::SetPlacement(TEnumAsByte<FSlateCore_SlateCore_EMenuPlacement> InPlacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	UUMG_MenuAnchor_SetPlacement_Params params;
	params.InPlacement = InPlacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MenuAnchor::Open(bool bFocusMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	UUMG_MenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_MenuAnchor::IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	UUMG_MenuAnchor_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_MenuAnchor::HasOpenSubMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	UUMG_MenuAnchor_HasOpenSubMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_MenuAnchor::GetMenuPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	UUMG_MenuAnchor_GetMenuPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.FitInWindow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFit                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MenuAnchor::FitInWindow(bool bFit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	UUMG_MenuAnchor_FitInWindow_Params params;
	params.bFit = bFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)

void UUMG_MenuAnchor::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	UUMG_MenuAnchor_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<FCoreUObject_EMouseCursor> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FCoreUObject_EMouseCursor> UUMG_MouseCursorBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	UUMG_MouseCursorBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableText.SetWidgetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_TextBlockStyle InWidgetStyle                  (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_MultiLineEditableText::SetWidgetStyle(const struct FSlateCore_TextBlockStyle& InWidgetStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	UUMG_MultiLineEditableText_SetWidgetStyle_Params params;
	params.InWidgetStyle = InWidgetStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_MultiLineEditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	UUMG_MultiLineEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	UUMG_MultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (Parm)

void UUMG_MultiLineEditableText::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	UUMG_MultiLineEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	UUMG_MultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_MultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUMG_MultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_MultiLineEditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	UUMG_MultiLineEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_MultiLineEditableText::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	UUMG_MultiLineEditableText_GetHintText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.SetTextStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_TextBlockStyle InTextStyle                    (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_MultiLineEditableTextBox::SetTextStyle(const struct FSlateCore_TextBlockStyle& InTextStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	UUMG_MultiLineEditableTextBox_SetTextStyle_Params params;
	params.InTextStyle = InTextStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUMG_MultiLineEditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	UUMG_MultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	UUMG_MultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (Parm)

void UUMG_MultiLineEditableTextBox::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	UUMG_MultiLineEditableTextBox_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InError                        (Parm)

void UUMG_MultiLineEditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	UUMG_MultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_MultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	UUMG_MultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUMG_MultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UUMG_MultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_MultiLineEditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	UUMG_MultiLineEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_MultiLineEditableTextBox::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	UUMG_MultiLineEditableTextBox_GetHintText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_OverlaySlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	UUMG_OverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_OverlaySlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	UUMG_OverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_OverlaySlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	UUMG_OverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ProgressBar::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	UUMG_ProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	UUMG_ProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	UUMG_ProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TextureParameter               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RetainerBox::SetTextureParameter(const struct FName& TextureParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	UUMG_RetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.SetRenderingPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            RenderPhase                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalPhases                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RetainerBox::SetRenderingPhase(int RenderPhase, int TotalPhases)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	UUMG_RetainerBox_SetRenderingPhase_Params params;
	params.RenderPhase = RenderPhase;
	params.TotalPhases = TotalPhases;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_MaterialInterface* EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_RetainerBox::SetEffectMaterial(class UEngine_MaterialInterface* EffectMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	UUMG_RetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)

void UUMG_RetainerBox::RequestRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	UUMG_RetainerBox_RequestRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_RetainerBox::GetEffectMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	UUMG_RetainerBox_GetEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SafeZone.SetSidesToPad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPadLeft                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InPadRight                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InPadTop                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InPadBottom                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	UUMG_SafeZone_SetSidesToPad_Params params;
	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	UUMG_ScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_EStretchDirection> InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBox::SetStretchDirection(TEnumAsByte<FSlate_Slate_EStretchDirection> InStretchDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	UUMG_ScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlate_Slate_EStretch> InStretch                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBox::SetStretch(TEnumAsByte<FSlate_Slate_EStretch> InStretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	UUMG_ScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	UUMG_ScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	UUMG_ScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	UUMG_ScrollBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	UUMG_ScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	UUMG_ScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetWidthOverride(float InWidthOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	UUMG_SizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	UUMG_SizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	UUMG_SizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinAspectRatio               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	UUMG_SizeBox_SetMinAspectRatio_Params params;
	params.InMinAspectRatio = InMinAspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	UUMG_SizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	UUMG_SizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	UUMG_SizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBox::SetHeightOverride(float InHeightOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	UUMG_SizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearWidthOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	UUMG_SizeBox_ClearWidthOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMinDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	UUMG_SizeBox_ClearMinDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMinDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	UUMG_SizeBox_ClearMinDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMinAspectRatio
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMinAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	UUMG_SizeBox_ClearMinAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMaxDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	UUMG_SizeBox_ClearMaxDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMaxDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	UUMG_SizeBox_ClearMaxDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearMaxAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	UUMG_SizeBox_ClearMaxAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)

void UUMG_SizeBox::ClearHeightOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	UUMG_SizeBox_ClearHeightOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	UUMG_SizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	UUMG_SizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	UUMG_SizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_TransformVectorLocalToAbsolute(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute");

	UUMG_SlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalVector = LocalVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               AbsoluteVector                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_TransformVectorAbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal");

	UUMG_SlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteVector = AbsoluteVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LocalScalar                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SlateBlueprintLibrary::STATIC_TransformScalarLocalToAbsolute(const struct FSlateCore_Geometry& Geometry, float LocalScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute");

	UUMG_SlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalScalar = LocalScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          AbsoluteScalar                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SlateBlueprintLibrary::STATIC_TransformScalarAbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, float AbsoluteScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal");

	UUMG_SlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteScalar = AbsoluteScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SlateBlueprintLibrary::STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FSlateCore_Geometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");

	UUMG_SlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SlateBlueprintLibrary::STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");

	UUMG_SlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SlateBlueprintLibrary::STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");

	UUMG_SlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SlateBlueprintLibrary::STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	UUMG_SlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_LocalToAbsolute(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	UUMG_SlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_SlateBlueprintLibrary::STATIC_IsUnderLocation(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	UUMG_SlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_GetLocalTopLeft(const struct FSlateCore_Geometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft");

	UUMG_SlateBlueprintLibrary_GetLocalTopLeft_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_GetLocalSize(const struct FSlateCore_Geometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	UUMG_SlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_GetAbsoluteSize(const struct FSlateCore_Geometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");

	UUMG_SlateBlueprintLibrary_GetAbsoluteSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_SlateBrush   B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_SlateBlueprintLibrary::STATIC_EqualEqual_SlateBrush(const struct FSlateCore_SlateBrush& A, const struct FSlateCore_SlateBrush& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");

	UUMG_SlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               AbsoluteDesktopCoordinate      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SlateBlueprintLibrary::STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	UUMG_SlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_Geometry     Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_SlateBlueprintLibrary::STATIC_AbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	UUMG_SlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	UUMG_ScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	UUMG_ScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_ScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	UUMG_ScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	UUMG_Slider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	UUMG_Slider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	UUMG_Slider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	UUMG_Slider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetMinValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	UUMG_Slider_SetMinValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetMaxValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	UUMG_Slider_SetMaxValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	UUMG_Slider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Slider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	UUMG_Slider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_Slider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	UUMG_Slider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Slider.GetNormalizedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_Slider::GetNormalizedValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	UUMG_Slider_GetNormalizedValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Spacer::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	UUMG_Spacer_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::SetValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	UUMG_SpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::SetMinValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	UUMG_SpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::SetMinSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	UUMG_SpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::SetMaxValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	UUMG_SpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::SetMaxSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	UUMG_SpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateColor   InForegroundColor              (Parm)

void UUMG_SpinBox::SetForegroundColor(const struct FSlateCore_SlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	UUMG_SpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	UUMG_SpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	UUMG_SpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UUMG_SpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	UUMG_SpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SpinBox::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	UUMG_SpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SpinBox::GetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	UUMG_SpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SpinBox::GetMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	UUMG_SpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SpinBox::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	UUMG_SpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_SpinBox::GetMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	UUMG_SpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)

void UUMG_SpinBox::ClearMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	UUMG_SpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)

void UUMG_SpinBox::ClearMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	UUMG_SpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)

void UUMG_SpinBox::ClearMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	UUMG_SpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)

void UUMG_SpinBox::ClearMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	UUMG_SpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_TextBinding::GetTextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	UUMG_TextBinding_GetTextValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUMG_TextBinding::GetStringValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	UUMG_TextBinding_GetStringValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Throbber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	UUMG_Throbber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Throbber::SetAnimateVertically(bool bInAnimateVertically)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	UUMG_Throbber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Throbber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	UUMG_Throbber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Throbber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	UUMG_Throbber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TileView.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewWidth                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TileView::SetEntryWidth(float NewWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	UUMG_TileView_SetEntryWidth_Params params;
	params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TileView.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHeight                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TileView::SetEntryHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	UUMG_TileView_SetEntryHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TreeView.SetItemExpansion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExpandItem                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_TreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	UUMG_TreeView_SetItemExpansion_Params params;
	params.Item = Item;
	params.bExpandItem = bExpandItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TreeView.ExpandAll
// (Final, Native, Public, BlueprintCallable)

void UUMG_TreeView::ExpandAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	UUMG_TreeView_ExpandAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TreeView.CollapseAll
// (Final, Native, Public, BlueprintCallable)

void UUMG_TreeView::CollapseAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	UUMG_TreeView_CollapseAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InSlotPadding                  (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridPanel::SetSlotPadding(const struct FSlateCore_Margin& InSlotPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	UUMG_UniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	UUMG_UniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	UUMG_UniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UniformGridSlot*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UniformGridSlot* UUMG_UniformGridPanel::AddChildToUniformGrid(class UUMG_Widget* Content, int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	UUMG_UniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	UUMG_UniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	UUMG_UniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	UUMG_UniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UniformGridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	UUMG_UniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_VerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	UUMG_VerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUMG_SlateChildSize     InSize                         (Parm)

void UUMG_VerticalBoxSlot::SetSize(const struct FUMG_SlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	UUMG_VerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_VerticalBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	UUMG_VerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_VerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	UUMG_VerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Actor* UUMG_Viewport::Spawn(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	UUMG_Viewport_Spawn_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Viewport::SetViewRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	UUMG_Viewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Viewport::SetViewLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	UUMG_Viewport_SetViewLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UUMG_Viewport::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	UUMG_Viewport_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_World*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_World* UUMG_Viewport::GetViewportWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	UUMG_Viewport_GetViewportWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UUMG_Viewport::GetViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	UUMG_Viewport_GetViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UMGSequencePlayer.SetUserTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InUserTag                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_UMGSequencePlayer::SetUserTag(const struct FName& InUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	UUMG_UMGSequencePlayer_SetUserTag_Params params;
	params.InUserTag = InUserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UMGSequencePlayer.GetUserTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUMG_UMGSequencePlayer::GetUserTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	UUMG_UMGSequencePlayer_GetUserTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_WidgetAnimation::UnbindFromAnimationStarted(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	UUMG_WidgetAnimation_UnbindFromAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_WidgetAnimation::UnbindFromAnimationFinished(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	UUMG_WidgetAnimation_UnbindFromAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_WidgetAnimation::UnbindAllFromAnimationStarted(class UUMG_UserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	UUMG_WidgetAnimation_UnbindAllFromAnimationStarted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_WidgetAnimation::UnbindAllFromAnimationFinished(class UUMG_UserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	UUMG_WidgetAnimation_UnbindAllFromAnimationFinished_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_WidgetAnimation::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	UUMG_WidgetAnimation_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_WidgetAnimation::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	UUMG_WidgetAnimation_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_WidgetAnimation::BindToAnimationStarted(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	UUMG_WidgetAnimation_BindToAnimationStarted_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_WidgetAnimation::BindToAnimationFinished(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	UUMG_WidgetAnimation_BindToAnimationFinished_Params params;
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UUMG_UMGSequencePlayer*  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_WidgetAnimationPlayCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_WidgetAnimationPlayCallbackProxy* UUMG_WidgetAnimationPlayCallbackProxy::STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMG_UserWidget* Widget, class UUMG_WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMG_UMGSequencePlayer** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	UUMG_WidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UUMG_UMGSequencePlayer*  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUMG_UserWidget*         Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_WidgetAnimation*    InAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_WidgetAnimationPlayCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_WidgetAnimationPlayCallbackProxy* UUMG_WidgetAnimationPlayCallbackProxy::STATIC_CreatePlayAnimationProxyObject(class UUMG_UserWidget* Widget, class UUMG_WidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMG_UMGSequencePlayer** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	UUMG_WidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params params;
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_WidgetBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	UUMG_WidgetBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// FUMG_UMG_ESlateVisibility      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FUMG_UMG_ESlateVisibility UUMG_VisibilityBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	UUMG_VisibilityBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_UnlockMouse(struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	UUMG_WidgetBlueprintLibrary_UnlockMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_Unhandled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	UUMG_WidgetBlueprintLibrary_Unhandled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             TitleBarContent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FEngine_Engine_EWindowTitleBarMode Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTitleBarDragEnabled           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWindowButtonsVisible          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTitleBarVisible               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetWindowTitleBarState(class UUMG_Widget* TitleBarContent, FEngine_Engine_EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");

	UUMG_WidgetBlueprintLibrary_SetWindowTitleBarState_Params params;
	params.TitleBarContent = TitleBarContent;
	params.Mode = Mode;
	params.bTitleBarDragEnabled = bTitleBarDragEnabled;
	params.bWindowButtonsVisible = bWindowButtonsVisible;
	params.bTitleBarVisible = bTitleBarVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UUMG_WidgetBlueprintLibrary::STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");

	UUMG_WidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");

	UUMG_WidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_SetUserFocus(class UUMG_Widget* FocusWidget, bool bInAllUsers, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	UUMG_WidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// struct FVector2D               NewMousePosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	UUMG_WidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FEngine_Engine_EMouseLockMode  InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class AEngine_PlayerController* PlayerController, class UUMG_Widget* InWidgetToFocus, FEngine_Engine_EMouseLockMode InMouseLockMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	UUMG_WidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class AEngine_PlayerController* Target, class UUMG_Widget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	UUMG_WidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	UUMG_WidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FEngine_Engine_EMouseLockMode  InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class AEngine_PlayerController* PlayerController, class UUMG_Widget* InWidgetToFocus, FEngine_Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	UUMG_WidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class AEngine_PlayerController* Target, class UUMG_Widget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	UUMG_WidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FCoreUObject_EMouseCursor> CursorShape                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CursorName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               HotSpot                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetBlueprintLibrary::STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<FCoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	UUMG_WidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UUMG_WidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	UUMG_WidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// FSlateCore_SlateCore_EColorVisionDeficiency Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CorrectDeficiency              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowCorrectionWithDeficiency   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetColorVisionDeficiencyType(FSlateCore_SlateCore_EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");

	UUMG_WidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params params;
	params.Type = Type;
	params.Severity = Severity;
	params.CorrectDeficiency = CorrectDeficiency;
	params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (Parm, OutParm, ReferenceParm)
// class UEngine_Texture2D*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(class UEngine_Texture2D* Texture, struct FSlateCore_SlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	UUMG_WidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (Parm, OutParm, ReferenceParm)
// class UEngine_MaterialInterface* Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(class UEngine_MaterialInterface* Material, struct FSlateCore_SlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	UUMG_WidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)

void UUMG_WidgetBlueprintLibrary::STATIC_RestorePreviousWindowTitleBarState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");

	UUMG_WidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_ReleaseMouseCapture(struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	UUMG_WidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	UUMG_WidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// (Public, Delegate)

void UUMG_WidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	UUMG_WidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_WidgetBlueprintLibrary::STATIC_NoResourceBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	UUMG_WidgetBlueprintLibrary_NoResourceBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UEngine_Texture2D*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_WidgetBlueprintLibrary::STATIC_MakeBrushFromTexture(class UEngine_Texture2D* Texture, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	UUMG_WidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UEngine_MaterialInterface* Material                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_WidgetBlueprintLibrary::STATIC_MakeBrushFromMaterial(class UEngine_MaterialInterface* Material, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	UUMG_WidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UEngine_SlateBrushAsset* BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UUMG_WidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class UEngine_SlateBrushAsset* BrushAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	UUMG_WidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_LockMouse(class UUMG_Widget* CapturingWidget, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	UUMG_WidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetBlueprintLibrary::STATIC_IsDragDropping()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	UUMG_WidgetBlueprintLibrary_IsDragDropping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_Handled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	UUMG_WidgetBlueprintLibrary_Handled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                SafePadding                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector4                SpillOverPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	UUMG_WidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;
}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_AnalogInputEvent Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_KeyEvent     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_KeyEvent UUMG_WidgetBlueprintLibrary::STATIC_GetKeyEventFromAnalogInputEvent(const struct FSlateCore_AnalogInputEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	UUMG_WidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_PointerEvent Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_InputEvent   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_InputEvent UUMG_WidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(const struct FSlateCore_PointerEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	UUMG_WidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_NavigationEvent Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_InputEvent   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_InputEvent UUMG_WidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(const struct FSlateCore_NavigationEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	UUMG_WidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_KeyEvent     Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_InputEvent   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_InputEvent UUMG_WidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(const struct FSlateCore_KeyEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	UUMG_WidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_CharacterEvent Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateCore_InputEvent   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_InputEvent UUMG_WidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(const struct FSlateCore_CharacterEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	UUMG_WidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (Parm, OutParm, ReferenceParm)
// class UEngine_MaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInstanceDynamic* UUMG_WidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateCore_SlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	UUMG_WidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUMG_DragDropOperation*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_DragDropOperation* UUMG_WidgetBlueprintLibrary::STATIC_GetDragDroppingContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	UUMG_WidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UEngine_Texture2D*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_Texture2D* UUMG_WidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(const struct FSlateCore_SlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	UUMG_WidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UEngine_MaterialInterface* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_MaterialInterface* UUMG_WidgetBlueprintLibrary::STATIC_GetBrushResourceAsMaterial(const struct FSlateCore_SlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	UUMG_WidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateCore_SlateBrush   Brush                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUMG_WidgetBlueprintLibrary::STATIC_GetBrushResource(const struct FSlateCore_SlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	UUMG_WidgetBlueprintLibrary_GetBrushResource_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUMG_UserWidget*> FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass*                  Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUMG_UserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	UUMG_WidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUMG_UserWidget*> FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUMG_UserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	UUMG_WidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_EndDragDrop(struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	UUMG_WidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_Font*            Font                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FontTypeFace                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UEngine_Font* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	UUMG_WidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)
// struct FString                 inString                       (Parm, ZeroConstructor)
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	UUMG_WidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)
// TArray<struct FVector2D>       Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	UUMG_WidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D               PositionA                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PositionB                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	UUMG_WidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FUMG_PaintContext       Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SlateBrushAsset* Brush                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetBlueprintLibrary::STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class UEngine_SlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	UUMG_WidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UUMG_WidgetBlueprintLibrary::STATIC_DismissAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	UUMG_WidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateCore_PointerEvent PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FInputCore_Key          DragKey                        (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_DetectDragIfPressed(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_Widget* WidgetDetectingDrag, const struct FInputCore_Key& DragKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	UUMG_WidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FInputCore_Key          DragKey                        (Parm)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_DetectDrag(class UUMG_Widget* WidgetDetectingDrag, const struct FInputCore_Key& DragKey, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	UUMG_WidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  OperationClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_DragDropOperation*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUMG_DragDropOperation* UUMG_WidgetBlueprintLibrary::STATIC_CreateDragDropOperation(class UClass* OperationClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	UUMG_WidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_UserWidget*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_UserWidget* UUMG_WidgetBlueprintLibrary::STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class AEngine_PlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	UUMG_WidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_ClearUserFocus(bool bInAllUsers, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	UUMG_WidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_CaptureMouse(class UUMG_Widget* CapturingWidget, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	UUMG_WidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUMG_EventReply         Reply                          (Parm, OutParm, ReferenceParm)
// class UUMG_Widget*             CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FUMG_EventReply         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUMG_EventReply UUMG_WidgetBlueprintLibrary::STATIC_CaptureJoystick(class UUMG_Widget* CapturingWidget, bool bInAllJoysticks, struct FUMG_EventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	UUMG_WidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)

void UUMG_WidgetBlueprintLibrary::STATIC_CancelDragDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	UUMG_WidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetSwitcher::SetActiveWidgetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	UUMG_WidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_WidgetSwitcher::SetActiveWidget(class UUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	UUMG_WidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_WidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	UUMG_WidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_WidgetSwitcher::GetNumWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	UUMG_WidgetSwitcher_GetNumWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUMG_WidgetSwitcher::GetActiveWidgetIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	UUMG_WidgetSwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_Widget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_Widget* UUMG_WidgetSwitcher::GetActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	UUMG_WidgetSwitcher_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	UUMG_WidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetSwitcherSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	UUMG_WidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	UUMG_WidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	UUMG_WindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarArea::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	UUMG_WindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	UUMG_WindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	UUMG_WindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarAreaSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	UUMG_WindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	UUMG_WindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	UUMG_WrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUMG_WrapBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_WrapBoxSlot* UUMG_WrapBox::AddChildToWrapBox(class UUMG_Widget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	UUMG_WrapBox_AddChildToWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBoxSlot::SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	UUMG_WrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateCore_Margin       InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBoxSlot::SetPadding(const struct FSlateCore_Margin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	UUMG_WrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	UUMG_WrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	UUMG_WrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	UUMG_WrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUMG_Widget*             FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_WidgetInteractionComponent::SetFocus(class UUMG_Widget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	UUMG_WidgetInteractionComponent_SetFocus_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEngine_HitResult       HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUMG_WidgetInteractionComponent::SetCustomHitResult(const struct FEngine_HitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	UUMG_WidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Characters                     (Parm, ZeroConstructor)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	UUMG_WidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData)

void UUMG_WidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	UUMG_WidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputCore_Key          Key                            (Parm)

void UUMG_WidgetInteractionComponent::ReleasePointerKey(const struct FInputCore_Key& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	UUMG_WidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputCore_Key          Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::ReleaseKey(const struct FInputCore_Key& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	UUMG_WidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputCore_Key          Key                            (Parm)

void UUMG_WidgetInteractionComponent::PressPointerKey(const struct FInputCore_Key& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	UUMG_WidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputCore_Key          Key                            (Parm)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::PressKey(const struct FInputCore_Key& Key, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	UUMG_WidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputCore_Key          Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::PressAndReleaseKey(const struct FInputCore_Key& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	UUMG_WidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::IsOverInteractableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	UUMG_WidgetInteractionComponent_IsOverInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	UUMG_WidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_WidgetInteractionComponent::IsOverFocusableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	UUMG_WidgetInteractionComponent_IsOverFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEngine_HitResult       ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FEngine_HitResult UUMG_WidgetInteractionComponent::GetLastHitResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	UUMG_WidgetInteractionComponent_GetLastHitResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUMG_WidgetComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUMG_WidgetComponent* UUMG_WidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	UUMG_WidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UUMG_WidgetInteractionComponent::Get2DHitLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	UUMG_WidgetInteractionComponent_Get2DHitLocation_Params params;

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
