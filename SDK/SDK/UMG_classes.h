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

// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
class UUMG_RichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UUMG_Visual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00E0 (0x0108 - 0x0028)
class UUMG_Widget : public UUMG_Visual
{
public:
	class UUMG_PanelSlot*                              Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0030(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0058(0x0014) (ZeroConstructor, InstancedReference)
	class UUMG_Widget*                                 ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0070(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0080(0x0014) (ZeroConstructor, InstancedReference)
	struct FUMG_WidgetTransform                        RenderTransform;                                          // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVariable : 1;                                          // 0x00B4(0x0001)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x00B4(0x0001) (Transient)
	unsigned char                                      bIsEnabled : 1;                                           // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class UUMG_SlateAccessibleWidgetData*              AccessibleWidgetData;                                     // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<FCoreUObject_EMouseCursor>             Cursor;                                                   // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EWidgetClipping               Clipping;                                                 // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_ESlateVisibility                          Visibility;                                               // 0x00C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UUMG_WidgetNavigation*                       Navigation;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	FSlateCore_SlateCore_EFlowDirectionPreference      FlowDirectionPreference;                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00D1(0x0027) MISSED OFFSET
	TArray<class UUMG_PropertyBinding*>                NativeBindings;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility(FUMG_UMG_ESlateVisibility InVisibility);
	void SetUserFocus(class AEngine_PlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UUMG_Widget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FUMG_WidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(FSlateCore_SlateCore_EUINavigation Direction, class UUMG_Widget* InWidget);
	void SetNavigationRuleCustomBoundary(FSlateCore_SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleCustom(FSlateCore_SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleBase(FSlateCore_SlateCore_EUINavigation Direction, FSlateCore_SlateCore_EUINavigationRule Rule);
	void SetNavigationRule(FSlateCore_SlateCore_EUINavigation Direction, FSlateCore_SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(TEnumAsByte<FCoreUObject_EMouseCursor> InCursor);
	void SetClipping(FSlateCore_SlateCore_EWidgetClipping InClipping);
	void SetAllNavigationRules(FSlateCore_SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FUMG_EventReply OnReply__DelegateSignature();
	struct FUMG_EventReply OnPointerEvent__DelegateSignature(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class AEngine_PlayerController* PlayerController);
	bool HasUserFocus(class AEngine_PlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UUMG_Widget* GetWidget__DelegateSignature();
	FUMG_UMG_ESlateVisibility GetVisibility();
	struct FSlateCore_Geometry GetTickSpaceGeometry();
	struct FText GetText__DelegateSignature();
	FUMG_UMG_ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateCore_SlateColor GetSlateColor__DelegateSignature();
	struct FSlateCore_SlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UUMG_PanelWidget* GetParent();
	struct FSlateCore_Geometry GetPaintSpaceGeometry();
	class AEngine_PlayerController* GetOwningPlayer();
	class UEngine_LocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<FCoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UEngine_GameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	FSlateCore_SlateCore_EWidgetClipping GetClipping();
	FSlateCore_SlateCore_ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FSlateCore_Geometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UUMG_Widget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UUMG_Widget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};


// Class UMG.Image
// 0x0108 (0x0210 - 0x0108)
class UUMG_Image : public UUMG_Widget
{
public:
	struct FSlateCore_SlateBrush                       Brush;                                                    // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0190(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01B0(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x01C4(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x01D4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateCore_SlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UEngine_Texture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UEngine_Texture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UEngine_MaterialInterface* Material);
	void SetBrushFromAtlasInterface(const TScriptInterface<class UEngine_SlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class UEngine_SlateBrushAsset* Asset);
	void SetBrush(const struct FSlateCore_SlateBrush& InBrush);
	class UEngine_MaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.PanelWidget
// 0x0018 (0x0120 - 0x0108)
class UUMG_PanelWidget : public UUMG_Widget
{
public:
	TArray<class UUMG_PanelSlot*>                      Slots;                                                    // 0x0108(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UUMG_Widget* Content);
	bool HasChild(class UUMG_Widget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UUMG_Widget* Content);
	class UUMG_Widget* GetChildAt(int Index);
	TArray<class UUMG_Widget*> GetAllChildren();
	void ClearChildren();
	class UUMG_PanelSlot* AddChild(class UUMG_Widget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x0120 - 0x0120)
class UUMG_ContentWidget : public UUMG_PanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UUMG_PanelSlot* SetContent(class UUMG_Widget* Content);
	class UUMG_PanelSlot* GetContentSlot();
	class UUMG_Widget* GetContent();
};


// Class UMG.Button
// 0x0308 (0x0428 - 0x0120)
class UUMG_Button : public UUMG_ContentWidget
{
public:
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0120(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateCore_ButtonStyle                      WidgetStyle;                                              // 0x0128(0x0278) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EButtonClickMethod> ClickMethod;                                              // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EButtonTouchMethod> TouchMethod;                                              // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EButtonPressMethod> PressMethod;                                              // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x03C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FSlateCore_ButtonStyle& InStyle);
	void SetPressMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<FSlateCore_SlateCore_EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class UMG.CanvasPanel
// 0x0010 (0x0130 - 0x0120)
class UUMG_CanvasPanel : public UUMG_PanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	class UUMG_CanvasPanelSlot* AddChildToCanvas(class UUMG_Widget* Content);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0130 - 0x0120)
class UUMG_HorizontalBox : public UUMG_PanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UUMG_HorizontalBoxSlot* AddChildToHorizontalBox(class UUMG_Widget* Content);
};


// Class UMG.ListViewBase
// 0x0110 (0x0218 - 0x0108)
class UUMG_ListViewBase : public UUMG_Widget
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelScrollMultiplier;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScrollAnimation;                                   // 0x0114(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFixedLineOffset;                                   // 0x0115(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              FixedLineScrollOffset;                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnEntryGenerated;                                      // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnEntryReleased;                                       // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FUMG_UserWidgetPool                         EntryWidgetPool;                                          // 0x0140(0x0080) (Transient)
	unsigned char                                      UnknownData02[0x58];                                      // 0x01C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollbarVisibility(FUMG_UMG_ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUMG_UserWidget*> GetDisplayedEntryWidgets();
};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0128 - 0x0108)
class UUMG_TextLayoutWidget : public UUMG_Widget
{
public:
	struct FUMG_ShapedTextOptions                      ShapedTextOptions;                                        // 0x0108(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<FSlate_Slate_ETextJustify>             Justification;                                            // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FSlate_Slate_ETextWrappingPolicy                   WrappingPolicy;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           Margin;                                                   // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}


	void SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification);
};


// Class UMG.WidgetComponent
// 0x0120 (0x0520 - 0x0400)
class UUMG_WidgetComponent : public UEngine_MeshComponent
{
public:
	FUMG_UMG_EWidgetSpace                              Space;                                                    // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_EWidgetTimingPolicy                       TimingPolicy;                                             // 0x0401(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0402(0x0006) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x0419(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0420(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // 0x0430(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x0434(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x043C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x043D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_EWindowVisibility                         WindowVisibility;                                         // 0x043E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyGammaCorrection;                                    // 0x043F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_LocalPlayer*                         OwnerPlayer;                                              // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0448(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x0458(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x0468(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_EWidgetBlendMode                          BlendMode;                                                // 0x046C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x046D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x046E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x046F(0x0001) MISSED OFFSET
	class UUMG_UserWidget*                             Widget;                                                   // 0x0470(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0478(0x0020) MISSED OFFSET
	class UEngine_BodySetup*                           BodySetup;                                                // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UEngine_MaterialInterface*                   TranslucentMaterial;                                      // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   TranslucentMaterial_OneSided;                             // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   OpaqueMaterial;                                           // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   OpaqueMaterial_OneSided;                                  // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   MaskedMaterial;                                           // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   MaskedMaterial_OneSided;                                  // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTarget;                                             // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             MaterialInstance;                                         // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x04E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x04E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x04E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FUMG_UMG_EWidgetGeometryMode                       GeometryMode;                                             // 0x04F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x28];                                      // 0x04F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void SetWindowVisibility(FUMG_UMG_EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(FUMG_UMG_EWidgetSpace NewSpace);
	void SetWidget(class UUMG_UserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class UEngine_LocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(FUMG_UMG_EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	FUMG_UMG_EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	FUMG_UMG_EWidgetSpace GetWidgetSpace();
	class UUMG_UserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UEngine_TextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class UEngine_LocalPlayer* GetOwnerPlayer();
	class UEngine_MaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	FUMG_UMG_EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};


// Class UMG.Overlay
// 0x0010 (0x0130 - 0x0120)
class UUMG_Overlay : public UUMG_PanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UUMG_OverlaySlot* AddChildToOverlay(class UUMG_Widget* Content);
};


// Class UMG.RichTextBlock
// 0x0540 (0x0668 - 0x0128)
class UUMG_RichTextBlock : public UUMG_TextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	class UEngine_DataTable*                           TextStyleSet;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DecoratorClasses;                                         // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideDefaultStyle;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FSlateCore_TextBlockStyle                   DefaultTextStyleOverride;                                 // 0x0160(0x0268) (Edit)
	float                                              MinDesiredWidth;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26C];                                     // 0x03CC(0x026C) MISSED OFFSET
	TArray<class UUMG_RichTextBlockDecorator*>         InstanceDecorators;                                       // 0x0638(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0648(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}


	void SetTextStyleSet(class UEngine_DataTable* NewTextStyleSet);
	void SetText(const struct FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(const struct FSlateCore_TextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateCore_SlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultFont(const struct FSlateCore_SlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateCore_SlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UUMG_RichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
class UUMG_RichTextBlockImageDecorator : public UUMG_RichTextBlockDecorator
{
public:
	class UEngine_DataTable*                           ImageSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

};


// Class UMG.ScrollBox
// 0x0760 (0x0880 - 0x0120)
class UUMG_ScrollBox : public UUMG_PanelWidget
{
public:
	struct FSlateCore_ScrollBoxStyle                   WidgetStyle;                                              // 0x0120(0x0228) (Edit, BlueprintVisible)
	struct FSlateCore_ScrollBarStyle                   WidgetBarStyle;                                           // 0x0348(0x04D0) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateCore_SlateWidgetStyleAsset*            BarStyle;                                                 // 0x0820(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EOrientation>     Orientation;                                              // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_ESlateVisibility                          ScrollBarVisibility;                                      // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EConsumeMouseWheel            ConsumeMouseWheel;                                        // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x082B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x082C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           ScrollbarPadding;                                         // 0x0834(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbarTrack;                                 // 0x0845(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0846(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateWheelScrolling;                                   // 0x0847(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlate_Slate_EDescendantScrollDestination          NavigationDestination;                                    // 0x0848(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0850(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	float                                              WheelScrollMultiplier;                                    // 0x0854(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollbarVisibility(FUMG_UMG_ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FSlateCore_Margin& NewScrollbarPadding);
	void SetOrientation(TEnumAsByte<FSlateCore_SlateCore_EOrientation> NewOrientation);
	void SetConsumeMouseWheel(FSlateCore_SlateCore_EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UUMG_Widget* WidgetToFind, bool AnimateScroll, FSlate_Slate_EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};


// Class UMG.TextBlock
// 0x01D0 (0x02F8 - 0x0128)
class UUMG_TextBlock : public UUMG_TextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_SlateColor                       ColorAndOpacity;                                          // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0178(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0188(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateCore_SlateBrush                       StrikeBrush;                                              // 0x01D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0278(0x0014) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x028D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x028E(0x0002) MISSED OFFSET
	TMap<FUMG_UMG_EUserSettingColor, struct FSlateCore_SlateColor> SettingTextColorMap;                                      // 0x0290(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSimpleTextMode;                                          // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02E1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetStrikeBrush(const struct FSlateCore_SlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFont(const struct FSlateCore_SlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateCore_SlateColor& InColorAndOpacity, FUMG_UMG_EUserSettingColor SettingColor);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UEngine_MaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UEngine_MaterialInstanceDynamic* GetDynamicFontMaterial();
};


// Class UMG.VerticalBox
// 0x0010 (0x0130 - 0x0120)
class UUMG_VerticalBox : public UUMG_PanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UUMG_VerticalBoxSlot* AddChildToVerticalBox(class UUMG_Widget* Content);
};


// Class UMG.UserWidget
// 0x0128 (0x0230 - 0x0108)
class UUMG_UserWidget : public UUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_Margin                           Padding;                                                  // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UUMG_UMGSequencePlayer*>              ActiveSequencePlayers;                                    // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class UUMG_UMGSequencePlayer*>              StoppedSequencePlayers;                                   // 0x0188(0x0010) (ZeroConstructor, Transient)
	TArray<struct FUMG_NamedSlotBinding>               NamedSlotBindings;                                        // 0x0198(0x0010) (ZeroConstructor)
	class UUMG_WidgetTree*                             WidgetTree;                                               // 0x01A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Priority;                                                 // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x01B4(0x0001) (Deprecated)
	unsigned char                                      bIsFocusable : 1;                                         // 0x01B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAction : 1;                                          // 0x01B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHasScriptImplementedTick : 1;                            // 0x01B4(0x0001)
	unsigned char                                      bHasScriptImplementedPaint : 1;                           // 0x01B4(0x0001)
	unsigned char                                      UnknownData01 : 2;                                        // 0x01B4(0x0001)
	unsigned char                                      bCookedWidgetTree : 1;                                    // 0x01B4(0x0001)
	unsigned char                                      UnknownData02[0xB];                                       // 0x01B5(0x000B) MISSED OFFSET
	FUMG_UMG_EWidgetTickFrequency                      TickFrequency;                                            // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UEngine_InputComponent*                      InputComponent;                                           // 0x01C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	TArray<struct FUMG_AnimationEventBinding>          AnimationCallbacks;                                       // 0x01D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData04[0x50];                                      // 0x01E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUMG_WidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UUMG_WidgetAnimation* Animation);
	void Tick(const struct FSlateCore_Geometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<FEngine_Engine_EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UUMG_WidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetOwningPlayer(class AEngine_PlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UUMG_WidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateCore_SlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FSlate_Anchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UUMG_WidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class UEngine_SoundBase* SoundToPlay);
	class UUMG_UMGSequencePlayer* PlayAnimationTimeRange(class UUMG_WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMG_UMGSequencePlayer* PlayAnimationReverse(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMG_UMGSequencePlayer* PlayAnimationForward(class UUMG_WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMG_UMGSequencePlayer* PlayAnimation(class UUMG_WidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(class UUMG_WidgetAnimation* InAnimation);
	struct FUMG_EventReply OnTouchStarted(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent);
	struct FUMG_EventReply OnTouchMoved(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent);
	struct FUMG_EventReply OnTouchGesture(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& GestureEvent);
	struct FUMG_EventReply OnTouchForceChanged(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent);
	struct FUMG_EventReply OnTouchEnded(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FSlateCore_FocusEvent& InFocusEvent);
	struct FUMG_EventReply OnPreviewMouseButtonDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	struct FUMG_EventReply OnPreviewKeyDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent);
	void OnPaint(struct FUMG_PaintContext* Context);
	struct FUMG_EventReply OnMouseWheel(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	struct FUMG_EventReply OnMouseMove(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	void OnMouseLeave(const struct FSlateCore_PointerEvent& MouseEvent);
	void OnMouseEnter(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FUMG_EventReply OnMouseButtonUp(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	struct FUMG_EventReply OnMouseButtonDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& MouseEvent);
	struct FUMG_EventReply OnMouseButtonDoubleClick(const struct FSlateCore_Geometry& InMyGeometry, const struct FSlateCore_PointerEvent& InMouseEvent);
	struct FUMG_EventReply OnMotionDetected(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_MotionEvent& InMotionEvent);
	struct FUMG_EventReply OnKeyUp(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent);
	struct FUMG_EventReply OnKeyDown(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_KeyEvent& InKeyEvent);
	struct FUMG_EventReply OnKeyChar(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_CharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FUMG_EventReply OnFocusReceived(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_FocusEvent& InFocusEvent);
	void OnFocusLost(const struct FSlateCore_FocusEvent& InFocusEvent);
	bool OnDrop(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation);
	bool OnDragOver(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation);
	void OnDragLeave(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation);
	void OnDragEnter(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation);
	void OnDragDetected(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation** Operation);
	void OnDragCancelled(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_DragDropOperation* Operation);
	void OnAnimationStarted(class UUMG_WidgetAnimation* Animation);
	void OnAnimationFinished(class UUMG_WidgetAnimation* Animation);
	struct FUMG_EventReply OnAnalogValueChanged(const struct FSlateCore_Geometry& MyGeometry, const struct FSlateCore_AnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FSlateCore_FocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<FEngine_Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UUMG_WidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UUMG_WidgetAnimation* InAnimation);
	class AEngine_Pawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UUMG_WidgetAnimation* InAnimation);
	struct FSlate_Anchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationEvent(class UUMG_WidgetAnimation* Animation, const struct FScriptDelegate& Delegate, FUMG_UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UUMG_WidgetLayoutLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	class UUMG_WrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UUMG_Widget* Widget);
	class UUMG_WidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UUMG_Widget* Widget);
	class UUMG_VerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UUMG_Widget* Widget);
	class UUMG_UniformGridSlot* STATIC_SlotAsUniformGridSlot(class UUMG_Widget* Widget);
	class UUMG_SizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UUMG_Widget* Widget);
	class UUMG_ScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UUMG_Widget* Widget);
	class UUMG_ScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UUMG_Widget* Widget);
	class UUMG_SafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UUMG_Widget* Widget);
	class UUMG_OverlaySlot* STATIC_SlotAsOverlaySlot(class UUMG_Widget* Widget);
	class UUMG_HorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UUMG_Widget* Widget);
	class UUMG_GridSlot* STATIC_SlotAsGridSlot(class UUMG_Widget* Widget);
	class UUMG_CanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UUMG_Widget* Widget);
	class UUMG_BorderSlot* STATIC_SlotAsBorderSlot(class UUMG_Widget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class AEngine_PlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FSlateCore_Geometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	struct FSlateCore_Geometry STATIC_GetPlayerScreenWidgetGeometry(class AEngine_PlayerController* PlayerController);
	bool STATIC_GetMousePositionScaledByDPI(class AEngine_PlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetMousePositionOnPlatform();
};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UUMG_AsyncTaskDownloadImage : public UEngine_BlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	class UUMG_AsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};


// Class UMG.BackgroundBlur
// 0x00B8 (0x01D8 - 0x0120)
class UUMG_BackgroundBlur : public UUMG_ContentWidget
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       LowQualityFallbackBrush;                                  // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateCore_SlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UUMG_PanelSlot : public UUMG_Visual
{
public:
	class UUMG_PanelWidget*                            Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_Widget*                                 Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_BackgroundBlurSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PropertyBinding
// 0x0038 (0x0060 - 0x0028)
class UUMG_PropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUMG_DynamicPropertyPath                    SourcePath;                                               // 0x0030(0x0028)
	struct FName                                       DestinationProperty;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0060 - 0x0060)
class UUMG_BoolBinding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	bool GetValue();
};


// Class UMG.Border
// 0x0150 (0x0270 - 0x0120)
class UUMG_Border : public UUMG_ContentWidget
{
public:
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowEffectWhenDisabled : 1;                              // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0124(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0134(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_Margin                           Padding;                                                  // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FSlateCore_SlateBrush                       Background;                                               // 0x0158(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x01E0(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0200(0x0014) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x021C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x022C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x023C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x024C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x14];                                      // 0x025C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UEngine_Texture2D* Texture);
	void SetBrushFromMaterial(class UEngine_MaterialInterface* Material);
	void SetBrushFromAsset(class UEngine_SlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateCore_SlateBrush& InBrush);
	class UEngine_MaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_BorderSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BrushBinding
// 0x0008 (0x0068 - 0x0060)
class UUMG_BrushBinding : public UUMG_PropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	struct FSlateCore_SlateBrush GetValue();
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_ButtonSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UUMG_CanvasPanelSlot : public UUMG_PanelSlot
{
public:
	struct FUMG_AnchorData                             LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FSlateCore_Margin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FUMG_AnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FSlate_Anchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FSlateCore_Margin GetOffsets();
	struct FUMG_AnchorData GetLayout();
	bool GetAutoSize();
	struct FSlate_Anchors GetAnchors();
	struct FVector2D GetAlignment();
};


// Class UMG.CheckBox
// 0x0650 (0x0770 - 0x0120)
class UUMG_CheckBox : public UUMG_ContentWidget
{
public:
	FSlateCore_SlateCore_ECheckBoxState                CheckedState;                                             // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0124(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FSlateCore_CheckBoxStyle                    WidgetStyle;                                              // 0x0138(0x0580) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UncheckedImage;                                           // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UncheckedHoveredImage;                                    // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UncheckedPressedImage;                                    // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     CheckedImage;                                             // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     CheckedHoveredImage;                                      // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     CheckedPressedImage;                                      // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UndeterminedImage;                                        // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UndeterminedHoveredImage;                                 // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     UndeterminedPressedImage;                                 // 0x0700(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FSlateCore_Margin                           Padding;                                                  // 0x070C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FSlateCore_SlateColor                       BorderBackgroundColor;                                    // 0x0720(0x0028) (Deprecated)
	bool                                               IsFocusable;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(FSlateCore_SlateCore_ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	FSlateCore_SlateCore_ECheckBoxState GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0068 - 0x0060)
class UUMG_CheckedStateBinding : public UUMG_PropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	FSlateCore_SlateCore_ECheckBoxState GetValue();
};


// Class UMG.CircularThrobber
// 0x00B8 (0x01C0 - 0x0108)
class UUMG_CircularThrobber : public UUMG_Widget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UEngine_SlateBrushAsset*                     PieceImage;                                               // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateCore_SlateBrush                       Image;                                                    // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x01A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01A9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ColorBinding
// 0x0008 (0x0068 - 0x0060)
class UUMG_ColorBinding : public UUMG_PropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	struct FSlateCore_SlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0140 - 0x0108)
class UUMG_ComboBox : public UUMG_Widget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0118(0x0014) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0129(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0CD8 (0x0DE0 - 0x0108)
class UUMG_ComboBoxString : public UUMG_Widget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0108(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FSlateCore_ComboBoxStyle                    WidgetStyle;                                              // 0x0128(0x03D8) (Edit, BlueprintVisible)
	struct FSlateCore_TableRowStyle                    ItemStyle;                                                // 0x0500(0x07C8) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           ContentPadding;                                           // 0x0CC8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x0CD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0CDC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0CDD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0CDE(0x0002) MISSED OFFSET
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0CE0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x0D30(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0D58(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D59(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0D5C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D6C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0D70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x0D80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0D90(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(const struct FString& Option);
	void SetSelectedIndex(int Index);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<FSlateCore_SlateCore_ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UUMG_DragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	FUMG_UMG_EDragPivot                                Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void Drop(const struct FSlateCore_PointerEvent& PointerEvent);
	void Dragged(const struct FSlateCore_PointerEvent& PointerEvent);
	void DragCancelled(const struct FSlateCore_PointerEvent& PointerEvent);
};


// Class UMG.DynamicEntryBoxBase
// 0x00C0 (0x01C8 - 0x0108)
class UUMG_DynamicEntryBoxBase : public UUMG_Widget
{
public:
	FUMG_UMG_EDynamicBoxType                           EntryBoxType;                                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUMG_SlateChildSize                         EntrySizeRule;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> EntryHorizontalAlignment;                                 // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> EntryVerticalAlignment;                                   // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	struct FUMG_UserWidgetPool                         EntryWidgetPool;                                          // 0x0148(0x0080) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}


	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	int GetNumEntries();
	TArray<class UUMG_UserWidget*> GetAllEntries();
};


// Class UMG.DynamicEntryBox
// 0x0008 (0x01D0 - 0x01C8)
class UUMG_DynamicEntryBox : public UUMG_DynamicEntryBoxBase
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}


	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUMG_UserWidget* EntryWidget);
	class UUMG_UserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUMG_UserWidget* BP_CreateEntry();
};


// Class UMG.EditableText
// 0x0348 (0x0450 - 0x0108)
class UUMG_EditableText : public UUMG_Widget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0148(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_EditableTextStyle                WidgetStyle;                                              // 0x0158(0x0218) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     BackgroundImageSelected;                                  // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     BackgroundImageComposing;                                 // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     CaretImage;                                               // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0390(0x0050) (Deprecated)
	struct FSlateCore_SlateColor                       ColorAndOpacity;                                          // 0x03E0(0x0028) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x040A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0412(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0413(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0414(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0415(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EVirtualKeyboardType>         KeyboardType;                                             // 0x0416(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlate_VirtualKeyboardOptions               VirtualKeyboardOptions;                                   // 0x0417(0x0001) (Edit)
	FSlate_Slate_EVirtualKeyboardDismissAction         VirtualKeyboardDismissAction;                             // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlate_Slate_ETextJustify>             Justification;                                            // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUMG_ShapedTextOptions                      ShapedTextOptions;                                        // 0x041A(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.EditableTextBox
// 0x0920 (0x0A28 - 0x0108)
class UUMG_EditableTextBox : public UUMG_Widget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_EditableTextBoxStyle             WidgetStyle;                                              // 0x0130(0x07F0) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0920(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x0928(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0940(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0950(0x0050) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x09A0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x09B0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x09C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x09D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x09D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09D2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           Padding;                                                  // 0x09D8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x09E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x09E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x09EA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x09EB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x09EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x09ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_EVirtualKeyboardType>         KeyboardType;                                             // 0x09EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlate_VirtualKeyboardOptions               VirtualKeyboardOptions;                                   // 0x09EF(0x0001) (Edit)
	FSlate_Slate_EVirtualKeyboardDismissAction         VirtualKeyboardDismissAction;                             // 0x09F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlate_Slate_ETextJustify>             Justification;                                            // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUMG_ShapedTextOptions                      ShapedTextOptions;                                        // 0x09F2(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09F5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x09F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0A18(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<FSlate_Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};


// Class UMG.ExpandableArea
// 0x0230 (0x0338 - 0x0108)
class UUMG_ExpandableArea : public UUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FSlateCore_ExpandableAreaStyle              Style;                                                    // 0x0110(0x0120) (Edit)
	struct FSlateCore_SlateBrush                       BorderBrush;                                              // 0x0230(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateCore_SlateColor                       BorderColor;                                              // 0x02B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           HeaderPadding;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           AreaPadding;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UUMG_Widget*                                 HeaderContent;                                            // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_Widget*                                 BodyContent;                                              // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.FloatBinding
// 0x0000 (0x0060 - 0x0060)
class UUMG_FloatBinding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	float GetValue();
};


// Class UMG.GridPanel
// 0x0030 (0x0150 - 0x0120)
class UUMG_GridPanel : public UUMG_PanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UUMG_GridSlot* AddChildToGrid(class UUMG_Widget* Content, int InRow, int InColumn);
};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UUMG_GridSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_HorizontalBoxSlot : public UUMG_PanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSlateCore_Margin                           Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FUMG_SlateChildSize                         Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FUMG_SlateChildSize& InSize);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.InputKeySelector
// 0x05E8 (0x06F0 - 0x0108)
class UUMG_InputKeySelector : public UUMG_Widget
{
public:
	struct FSlateCore_ButtonStyle                      WidgetStyle;                                              // 0x0108(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_TextBlockStyle                   TextStyle;                                                // 0x0380(0x0268) (Edit, BlueprintVisible)
	struct FSlate_InputChord                           SelectedKey;                                              // 0x05E8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0608(0x0050) (Deprecated)
	struct FSlateCore_Margin                           Margin;                                                   // 0x0658(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0668(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x0678(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecifiedText;                                       // 0x0690(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x06A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGamepadKeys;                                        // 0x06A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06AA(0x0006) MISSED OFFSET
	TArray<struct FInputCore_Key>                      EscapeKeys;                                               // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnKeySelected;                                            // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void SetTextBlockVisibility(FUMG_UMG_ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FSlate_InputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEscapeKeys(TArray<struct FInputCore_Key> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FSlate_InputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0x0000 (0x0060 - 0x0060)
class UUMG_Int32Binding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	int GetValue();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0138 - 0x0120)
class UUMG_InvalidationBox : public UUMG_ContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CacheRelativeTransforms;                                  // 0x0121(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0122(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};


// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
class UUMG_UserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};


// Class UMG.UserListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUMG_UserListEntryLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}


	bool STATIC_IsListItemSelected(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry);
	bool STATIC_IsListItemExpanded(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry);
	class UUMG_ListViewBase* STATIC_GetOwningListView(const TScriptInterface<class UUMG_UserListEntry>& UserListEntry);
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
class UUMG_UserObjectListEntry : public UUMG_UserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);
};


// Class UMG.UserObjectListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUMG_UserObjectListEntryLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}


	class UObject* STATIC_GetListItemObject(const TScriptInterface<class UUMG_UserObjectListEntry>& UserObjectListEntry);
};


// Class UMG.ListView
// 0x0150 (0x0368 - 0x0218)
class UUMG_ListView : public UUMG_ListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0218(0x00C0) MISSED OFFSET
	TEnumAsByte<FSlateCore_SlateCore_EOrientation>     Orientation;                                              // 0x02D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlate_Slate_ESelectionMode>           SelectionMode;                                            // 0x02D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EConsumeMouseWheel            ConsumeMouseWheel;                                        // 0x02DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x02DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnFocusToSelection;                                  // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	TArray<class UObject*>                             ListItems;                                                // 0x02E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnEntryInitialized;                                    // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemClicked;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemDoubleClicked;                                   // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemIsHoveredChanged;                                // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemSelectionChanged;                                // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemScrolledIntoView;                                // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}


	void SetSelectionMode(TEnumAsByte<FSlate_Slate_ESelectionMode> SelectionMode);
	void SetSelectedIndex(int Index);
	void ScrollIndexIntoView(int Index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
class UUMG_ListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0160 - 0x0120)
class UUMG_MenuAnchor : public UUMG_ContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0128(0x0014) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<FSlateCore_SlateCore_EMenuPlacement>   Placement;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFitInWindow;                                             // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x013A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x013B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(TEnumAsByte<FSlateCore_SlateCore_EMenuPlacement> InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0060 - 0x0060)
class UUMG_MouseCursorBinding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	TEnumAsByte<FCoreUObject_EMouseCursor> GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x0470 (0x0550 - 0x00E0)
class UUMG_MovieScene2DTransformSection : public UMovieScene_MovieSceneSection
{
public:
	struct FUMG_MovieScene2DTransformMask              TransformMask;                                            // 0x00E0(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneFloatChannel          Translation[0x2];                                         // 0x00E8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Rotation;                                                 // 0x0228(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Scale[0x2];                                               // 0x02C8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Shear[0x2];                                               // 0x0408(0x00A0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UUMG_MovieScene2DTransformTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x0280 (0x0360 - 0x00E0)
class UUMG_MovieSceneMarginSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneFloatChannel          TopCurve;                                                 // 0x00E0(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          LeftCurve;                                                // 0x0180(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          RightCurve;                                               // 0x0220(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          BottomCurve;                                              // 0x02C0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0088 - 0x0088)
class UUMG_MovieSceneMarginTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0080 - 0x0068)
class UUMG_MovieSceneWidgetMaterialTrack : public UMovieSceneTracks_MovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0068(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x0338 (0x0460 - 0x0128)
class UUMG_MultiLineEditableText : public UUMG_TextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_TextBlockStyle                   WidgetStyle;                                              // 0x0168(0x0268) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x03D8(0x0050) (Deprecated)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearTextSelectionOnFocusLoss;                            // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x042A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x042B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x042C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlate_VirtualKeyboardOptions               VirtualKeyboardOptions;                                   // 0x042D(0x0001) (Edit)
	FSlate_Slate_EVirtualKeyboardDismissAction         VirtualKeyboardDismissAction;                             // 0x042E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x042F(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetWidgetStyle(const struct FSlateCore_TextBlockStyle& InWidgetStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0B58 (0x0C80 - 0x0128)
class UUMG_MultiLineEditableTextBox : public UUMG_TextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateCore_EditableTextBoxStyle             WidgetStyle;                                              // 0x0168(0x07F0) (Edit, BlueprintVisible)
	struct FSlateCore_TextBlockStyle                   TextStyle;                                                // 0x0958(0x0268) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x0BC0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0BC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlate_VirtualKeyboardOptions               VirtualKeyboardOptions;                                   // 0x0BC2(0x0001) (Edit)
	FSlate_Slate_EVirtualKeyboardDismissAction         VirtualKeyboardDismissAction;                             // 0x0BC3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BC4(0x0004) MISSED OFFSET
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0BC8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0BD0(0x0050) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C20(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C30(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C40(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0C50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0C60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0C70(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetTextStyle(const struct FSlateCore_TextBlockStyle& InTextStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.NamedSlot
// 0x0010 (0x0130 - 0x0120)
class UUMG_NamedSlot : public UUMG_ContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UUMG_NamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UUMG_OverlaySlot : public UUMG_PanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSlateCore_Margin                           Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ProgressBar
// 0x0210 (0x0318 - 0x0108)
class UUMG_ProgressBar : public UUMG_Widget
{
public:
	struct FSlateCore_ProgressBarStyle                 WidgetStyle;                                              // 0x0108(0x01A0) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     BackgroundImage;                                          // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     FillImage;                                                // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_SlateBrushAsset*                     MarqueeImage;                                             // 0x02C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              percent;                                                  // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlate_Slate_EProgressBarFillType>     BarFillType;                                              // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x02CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CE(0x0002) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x02D8(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x02F8(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class UMG.RetainerBox
// 0x0030 (0x0150 - 0x0120)
class UUMG_RetainerBox : public UUMG_ContentWidget
{
public:
	bool                                               RenderOnInvalidation;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnPhase;                                            // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                Phase;                                                    // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   EffectMaterial;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UEngine_MaterialInterface* EffectMaterial);
	void RequestRender();
	class UEngine_MaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.SafeZone
// 0x0018 (0x0138 - 0x0120)
class UUMG_SafeZone : public UUMG_ContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadRight;                                                 // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadTop;                                                   // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadBottom;                                                // 0x0123(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_SafeZoneSlot : public UUMG_PanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FSlateCore_Margin                           SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FSlateCore_Margin                           Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0140 - 0x0120)
class UUMG_ScaleBox : public UUMG_ContentWidget
{
public:
	TEnumAsByte<FSlate_Slate_EStretch>                 Stretch;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlate_Slate_EStretchDirection>        StretchDirection;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0129(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<FSlate_Slate_EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<FSlate_Slate_EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0118 - 0x0108)
class UUMG_NativeWidgetHost : public UUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.ScrollBar
// 0x0508 (0x0610 - 0x0108)
class UUMG_ScrollBar : public UUMG_Widget
{
public:
	struct FSlateCore_ScrollBarStyle                   WidgetStyle;                                              // 0x0108(0x04D0) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysShowScrollbarTrack;                                // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EOrientation>     Orientation;                                              // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05E3(0x0001) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x05E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           Padding;                                                  // 0x05EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x05FC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UUMG_ScrollBoxSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBox
// 0x0038 (0x0158 - 0x0120)
class UUMG_SizeBox : public UUMG_ContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAspectRatio;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinAspectRatio : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_SizeBoxSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UUMG_SlateBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalVector);
	struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteVector);
	float STATIC_TransformScalarLocalToAbsolute(const struct FSlateCore_Geometry& Geometry, float LocalScalar);
	float STATIC_TransformScalarAbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, float AbsoluteScalar);
	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FSlateCore_Geometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalTopLeft(const struct FSlateCore_Geometry& Geometry);
	struct FVector2D STATIC_GetLocalSize(const struct FSlateCore_Geometry& Geometry);
	struct FVector2D STATIC_GetAbsoluteSize(const struct FSlateCore_Geometry& Geometry);
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateCore_SlateBrush& A, const struct FSlateCore_SlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FSlateCore_Geometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_ScaleBoxSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class UUMG_SlateVectorArtData : public UObject
{
public:
	TArray<struct FUMG_SlateMeshVertex>                VertexData;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor)
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.SlateAccessibleWidgetData
// 0x0058 (0x0080 - 0x0028)
class UUMG_SlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	FUMG_UMG_ESlateAccessibleBehavior                  AccessibleBehavior;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	FUMG_UMG_ESlateAccessibleBehavior                  AccessibleSummaryBehavior;                                // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FText                                       AccessibleText;                                           // 0x0030(0x0018)
	struct FScriptDelegate                             AccessibleTextDelegate;                                   // 0x0048(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       AccessibleSummaryText;                                    // 0x0058(0x0018)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                            // 0x0070(0x0014) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}

};


// Class UMG.Slider
// 0x03F0 (0x04F8 - 0x0108)
class UUMG_Slider : public UUMG_Widget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0014) (ZeroConstructor, InstancedReference)
	float                                              MinValue;                                                 // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FSlateCore_SliderStyle                      WidgetStyle;                                              // 0x0128(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<FSlateCore_SlateCore_EOrientation>     Orientation;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x047C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x048D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               MouseUsesStep;                                            // 0x048E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresControllerLock;                                   // 0x048F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};


// Class UMG.Spacer
// 0x0018 (0x0120 - 0x0108)
class UUMG_Spacer : public UUMG_Widget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0400 (0x0508 - 0x0108)
class UUMG_SpinBox : public UUMG_Widget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSlateCore_SpinBoxStyle                     WidgetStyle;                                              // 0x0120(0x02E8) (Edit, BlueprintVisible)
	class USlateCore_SlateWidgetStyleAsset*            Style;                                                    // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Delta;                                                    // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0418(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<FSlate_Slate_ETextJustify>             Justification;                                            // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0471(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0472(0x0006) MISSED OFFSET
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x0478(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x04E0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x04E0(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x04E0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x04E0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x04F4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateCore_SlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<FSlateCore_SlateCore_ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0068 - 0x0060)
class UUMG_TextBinding : public UUMG_PropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};


// Class UMG.Throbber
// 0x00A8 (0x01B0 - 0x0108)
class UUMG_Throbber : public UUMG_Widget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	class UEngine_SlateBrushAsset*                     PieceImage;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateCore_SlateBrush                       Image;                                                    // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.TileView
// 0x0020 (0x0388 - 0x0368)
class UUMG_TileView : public UUMG_ListView
{
public:
	float                                              EntryHeight;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryWidth;                                               // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FSlate_Slate_EListItemAlignment                    TileAlignment;                                            // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapHorizontalNavigation;                                // 0x0371(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0372(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};


// Class UMG.TreeView
// 0x0058 (0x03C0 - 0x0368)
class UUMG_TreeView : public UUMG_ListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	struct FScriptDelegate                             BP_OnGetItemChildren;                                     // 0x0378(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    BP_OnItemExpansionChanged;                                // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0398(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}


	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};


// Class UMG.UniformGridPanel
// 0x0028 (0x0148 - 0x0120)
class UUMG_UniformGridPanel : public UUMG_PanelWidget
{
public:
	struct FSlateCore_Margin                           SlotPadding;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotWidth;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void SetSlotPadding(const struct FSlateCore_Margin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUMG_UniformGridSlot* AddChildToUniformGrid(class UUMG_Widget* Content, int InRow, int InColumn);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUMG_UniformGridSlot : public UUMG_PanelSlot
{
public:
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_VerticalBoxSlot : public UUMG_PanelSlot
{
public:
	struct FUMG_SlateChildSize                         Size;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateCore_Margin                           Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FUMG_SlateChildSize& InSize);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Viewport
// 0x0028 (0x0148 - 0x0120)
class UUMG_Viewport : public UUMG_ContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AEngine_Actor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UEngine_World* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.UMGSequencePlayer
// 0x0768 (0x0790 - 0x0028)
class UUMG_UMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0028(0x03E0) MISSED OFFSET
	class UUMG_WidgetAnimation*                        Animation;                                                // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x380];                                     // 0x0410(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}


	void SetUserTag(const struct FName& InUserTag);
	struct FName GetUserTag();
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0378 - 0x0348)
class UUMG_WidgetAnimation : public UMovieScene_MovieSceneSequence
{
public:
	class UMovieScene_MovieScene*                      MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FUMG_WidgetAnimationBinding>         AnimationBindings;                                        // 0x0350(0x0010) (ZeroConstructor)
	bool                                               bLegacyFinishOnStop;                                      // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FString                                     DisplayLabel;                                             // 0x0368(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	void UnbindFromAnimationStarted(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUMG_UserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUMG_UserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUMG_UserWidget* Widget, const struct FScriptDelegate& Delegate);
};


// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UUMG_WidgetAnimationDelegateBinding : public UEngine_DynamicBlueprintBinding
{
public:
	TArray<struct FUMG_BlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                          // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}

};


// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UUMG_WidgetAnimationPlayCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    Finished;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}


	class UUMG_WidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMG_UserWidget* Widget, class UUMG_WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMG_UMGSequencePlayer** Result);
	class UUMG_WidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMG_UserWidget* Widget, class UUMG_WidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<FUMG_UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMG_UMGSequencePlayer** Result);
};


// Class UMG.WidgetBinding
// 0x0000 (0x0060 - 0x0060)
class UUMG_WidgetBinding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	class UUMG_Widget* GetValue();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0060 - 0x0060)
class UUMG_VisibilityBinding : public UUMG_PropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	FUMG_UMG_ESlateVisibility GetValue();
};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UUMG_WidgetBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	struct FUMG_EventReply STATIC_UnlockMouse(struct FUMG_EventReply* Reply);
	struct FUMG_EventReply STATIC_Unhandled();
	void STATIC_SetWindowTitleBarState(class UUMG_Widget* TitleBarContent, FEngine_Engine_EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FUMG_EventReply STATIC_SetUserFocus(class UUMG_Widget* FocusWidget, bool bInAllUsers, struct FUMG_EventReply* Reply);
	struct FUMG_EventReply STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FUMG_EventReply* Reply);
	void STATIC_SetInputMode_UIOnlyEx(class AEngine_PlayerController* PlayerController, class UUMG_Widget* InWidgetToFocus, FEngine_Engine_EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class AEngine_PlayerController* Target, class UUMG_Widget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class AEngine_PlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUIEx(class AEngine_PlayerController* PlayerController, class UUMG_Widget* InWidgetToFocus, FEngine_Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class AEngine_PlayerController* Target, class UUMG_Widget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<FCoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetColorVisionDeficiencyType(FSlateCore_SlateCore_EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void STATIC_SetBrushResourceToTexture(class UEngine_Texture2D* Texture, struct FSlateCore_SlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UEngine_MaterialInterface* Material, struct FSlateCore_SlateBrush* Brush);
	void STATIC_RestorePreviousWindowTitleBarState();
	struct FUMG_EventReply STATIC_ReleaseMouseCapture(struct FUMG_EventReply* Reply);
	struct FUMG_EventReply STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FUMG_EventReply* Reply);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateCore_SlateBrush STATIC_NoResourceBrush();
	struct FSlateCore_SlateBrush STATIC_MakeBrushFromTexture(class UEngine_Texture2D* Texture, int Width, int Height);
	struct FSlateCore_SlateBrush STATIC_MakeBrushFromMaterial(class UEngine_MaterialInterface* Material, int Width, int Height);
	struct FSlateCore_SlateBrush STATIC_MakeBrushFromAsset(class UEngine_SlateBrushAsset* BrushAsset);
	struct FUMG_EventReply STATIC_LockMouse(class UUMG_Widget* CapturingWidget, struct FUMG_EventReply* Reply);
	bool STATIC_IsDragDropping();
	struct FUMG_EventReply STATIC_Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FSlateCore_KeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FSlateCore_AnalogInputEvent& Event);
	struct FSlateCore_InputEvent STATIC_GetInputEventFromPointerEvent(const struct FSlateCore_PointerEvent& Event);
	struct FSlateCore_InputEvent STATIC_GetInputEventFromNavigationEvent(const struct FSlateCore_NavigationEvent& Event);
	struct FSlateCore_InputEvent STATIC_GetInputEventFromKeyEvent(const struct FSlateCore_KeyEvent& Event);
	struct FSlateCore_InputEvent STATIC_GetInputEventFromCharacterEvent(const struct FSlateCore_CharacterEvent& Event);
	class UEngine_MaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateCore_SlateBrush* Brush);
	class UUMG_DragDropOperation* STATIC_GetDragDroppingContent();
	class UEngine_Texture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateCore_SlateBrush& Brush);
	class UEngine_MaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateCore_SlateBrush& Brush);
	class UObject* STATIC_GetBrushResource(const struct FSlateCore_SlateBrush& Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUMG_UserWidget*>* FoundWidgets);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUMG_UserWidget*>* FoundWidgets);
	struct FUMG_EventReply STATIC_EndDragDrop(struct FUMG_EventReply* Reply);
	void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UEngine_Font* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context);
	void STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context);
	void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FUMG_PaintContext* Context);
	void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FUMG_PaintContext* Context);
	void STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class UEngine_SlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FUMG_PaintContext* Context);
	void STATIC_DismissAllMenus();
	struct FUMG_EventReply STATIC_DetectDragIfPressed(const struct FSlateCore_PointerEvent& PointerEvent, class UUMG_Widget* WidgetDetectingDrag, const struct FInputCore_Key& DragKey);
	struct FUMG_EventReply STATIC_DetectDrag(class UUMG_Widget* WidgetDetectingDrag, const struct FInputCore_Key& DragKey, struct FUMG_EventReply* Reply);
	class UUMG_DragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	class UUMG_UserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class AEngine_PlayerController* OwningPlayer);
	struct FUMG_EventReply STATIC_ClearUserFocus(bool bInAllUsers, struct FUMG_EventReply* Reply);
	struct FUMG_EventReply STATIC_CaptureMouse(class UUMG_Widget* CapturingWidget, struct FUMG_EventReply* Reply);
	struct FUMG_EventReply STATIC_CaptureJoystick(class UUMG_Widget* CapturingWidget, bool bInAllJoysticks, struct FUMG_EventReply* Reply);
	void STATIC_CancelDragDrop();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0370 - 0x0300)
class UUMG_WidgetBlueprintGeneratedClass : public UEngine_BlueprintGeneratedClass
{
public:
	class UUMG_WidgetTree*                             WidgetTree;                                               // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowTemplate : 1;                                       // 0x0308(0x0001)
	unsigned char                                      bAllowDynamicCreation : 1;                                // 0x0308(0x0001)
	unsigned char                                      bValidTemplate : 1;                                       // 0x0308(0x0001)
	unsigned char                                      bTemplateInitialized : 1;                                 // 0x0308(0x0001) (Transient)
	unsigned char                                      bCookedTemplate : 1;                                      // 0x0308(0x0001) (Transient)
	unsigned char                                      bClassRequiresNativeTick : 1;                             // 0x0308(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	TArray<struct FUMG_DelegateRuntimeBinding>         Bindings;                                                 // 0x0310(0x0010) (ZeroConstructor)
	TArray<class UUMG_WidgetAnimation*>                Animations;                                               // 0x0320(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x0330(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0340(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UMG.WidgetBlueprintGeneratedClass.TemplateAsset
	class UUMG_UserWidget*                             Template;                                                 // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetNavigation
// 0x00D8 (0x0100 - 0x0028)
class UUMG_WidgetNavigation : public UObject
{
public:
	struct FUMG_WidgetNavigationData                   Up;                                                       // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUMG_WidgetNavigationData                   Down;                                                     // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUMG_WidgetNavigationData                   Left;                                                     // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUMG_WidgetNavigationData                   Right;                                                    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUMG_WidgetNavigationData                   Next;                                                     // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUMG_WidgetNavigationData                   Previous;                                                 // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0138 - 0x0120)
class UUMG_WidgetSwitcher : public UUMG_PanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UUMG_Widget* Widget);
	class UUMG_Widget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UUMG_Widget* GetActiveWidget();
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UUMG_WidgetSwitcherSlot : public UUMG_PanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSlateCore_Margin                           Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
class UUMG_WidgetTree : public UObject
{
public:
	class UUMG_Widget*                                 RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0140 - 0x0120)
class UUMG_WindowTitleBarArea : public UUMG_ContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0122(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_WindowTitleBarAreaSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBox
// 0x0020 (0x0140 - 0x0120)
class UUMG_WrapBox : public UUMG_PanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WrapWidth;                                                // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapWidth;                                       // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x012D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UUMG_WrapBoxSlot* AddChildToWrapBox(class UUMG_Widget* Content);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UUMG_WrapBoxSlot : public UUMG_PanelSlot
{
public:
	struct FSlateCore_Margin                           Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<FSlateCore_SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FSlateCore_Margin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<FSlateCore_SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x03E0 - 0x01F0)
class UUMG_WidgetInteractionComponent : public UEngine_SceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointerIndex;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      TraceChannel;                                             // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FUMG_UMG_EWidgetInteractionSource                  InteractionSource;                                        // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x0222(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0223(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0224(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x0234(0x007C) MISSED OFFSET
	struct FEngine_HitResult                           CustomHitResult;                                          // 0x02B0(0x0088) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUMG_WidgetComponent*                        HoveredWidgetComponent;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FEngine_HitResult                           LastHitResult;                                            // 0x0350(0x0088) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x03D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x03D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x03DA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void SetFocus(class UUMG_Widget* FocusWidget);
	void SetCustomHitResult(const struct FEngine_HitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FInputCore_Key& Key);
	bool ReleaseKey(const struct FInputCore_Key& Key);
	void PressPointerKey(const struct FInputCore_Key& Key);
	bool PressKey(const struct FInputCore_Key& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FInputCore_Key& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FEngine_HitResult GetLastHitResult();
	class UUMG_WidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
