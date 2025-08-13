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

// Enum SlateCore.ECheckBoxState
enum class FSlateCore_SlateCore_ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};


// Enum SlateCore.EWidgetClipping
enum class FSlateCore_SlateCore_EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
};


// Enum SlateCore.ESlateBrushImageType
enum class FSlateCore_SlateCore_ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class FSlateCore_SlateCore_ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class FSlateCore_SlateCore_ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class FSlateCore_SlateCore_ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class FSlateCore_SlateCore_ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.EUINavigation
enum class FSlateCore_SlateCore_EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.EUINavigationRule
enum class FSlateCore_SlateCore_EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__CustomBoundary = 5,
	EUINavigationRule__Invalid     = 6,
	EUINavigationRule__EUINavigationRule_MAX = 7
};


// Enum SlateCore.EFlowDirectionPreference
enum class FSlateCore_SlateCore_EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4
};


// Enum SlateCore.EColorVisionDeficiency
enum class FSlateCore_SlateCore_EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision = 0,
	EColorVisionDeficiency__Deuteranope = 1,
	EColorVisionDeficiency__Protanope = 2,
	EColorVisionDeficiency__Tritanope = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX = 4
};


// Enum SlateCore.ESelectInfo
enum class FSlateCore_SlateCore_ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ETextCommit
enum class FSlateCore_SlateCore_ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ETextShapingMethod
enum class FSlateCore_SlateCore_ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EFontLoadingPolicy
enum class FSlateCore_SlateCore_EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class FSlateCore_SlateCore_EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.EFocusCause
enum class FSlateCore_SlateCore_EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};


// Enum SlateCore.EFontLayoutMethod
enum class FSlateCore_SlateCore_EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};


// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class FSlateCore_SlateCore_ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6
};


// Enum SlateCore.ESlateDebuggingFocusEvent
enum class FSlateCore_SlateCore_ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__ESlateDebuggingFocusEvent_MAX = 3
};


// Enum SlateCore.EScrollDirection
enum class FSlateCore_SlateCore_EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.ESlateDebuggingInputEvent
enum class FSlateCore_SlateCore_ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__MouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonUp = 4,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 5,
	ESlateDebuggingInputEvent__MouseWheel = 6,
	ESlateDebuggingInputEvent__TouchStart = 7,
	ESlateDebuggingInputEvent__TouchEnd = 8,
	ESlateDebuggingInputEvent__DragDetected = 9,
	ESlateDebuggingInputEvent__DragEnter = 10,
	ESlateDebuggingInputEvent__DragLeave = 11,
	ESlateDebuggingInputEvent__DragOver = 12,
	ESlateDebuggingInputEvent__DragDrop = 13,
	ESlateDebuggingInputEvent__DropMessage = 14,
	ESlateDebuggingInputEvent__KeyDown = 15,
	ESlateDebuggingInputEvent__KeyUp = 16,
	ESlateDebuggingInputEvent__KeyChar = 17,
	ESlateDebuggingInputEvent__AnalogInput = 18,
	ESlateDebuggingInputEvent__TouchGesture = 19,
	ESlateDebuggingInputEvent__COUNT = 20,
	ESlateDebuggingInputEvent__ESlateDebuggingInputEvent_MAX = 21
};


// Enum SlateCore.EOrientation
enum class FSlateCore_SlateCore_EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class FSlateCore_SlateCore_EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
};


// Enum SlateCore.EVerticalAlignment
enum class FSlateCore_SlateCore_EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class FSlateCore_SlateCore_EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class FSlateCore_SlateCore_ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};


// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class FSlateCore_SlateCore_ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2
};


// Enum SlateCore.EButtonPressMethod
enum class FSlateCore_SlateCore_EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EUINavigationAction
enum class FSlateCore_SlateCore_EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept    = 0,
	EUINavigationAction__Back      = 1,
	EUINavigationAction__Num       = 2,
	EUINavigationAction__Invalid   = 3,
	EUINavigationAction__EUINavigationAction_MAX = 4
};


// Enum SlateCore.EButtonClickMethod
enum class FSlateCore_SlateCore_EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.ESlateCheckBoxType
enum class FSlateCore_SlateCore_ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};


// Enum SlateCore.ESlateParentWindowSearchMethod
enum class FSlateCore_SlateCore_ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow = 0,
	ESlateParentWindowSearchMethod__MainWindow = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class FSlateCore_SlateCore_EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class FSlateCore_SlateCore_EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__Down       = 1,
	EButtonTouchMethod__PreciseTap = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 3
};


// Enum SlateCore.ENavigationSource
enum class FSlateCore_SlateCore_ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FSlateCore_Geometry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FSlateCore_Margin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateCore_SlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_ESlateColorStylingMode> ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0088
struct FSlateCore_SlateBrush
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           Margin;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateColor                       TintColor;                                                // 0x0020(0x0028) (Edit, BlueprintVisible)
	class UObject*                                     ResourceObject;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      UVRegion;                                                 // 0x0058(0x0014) (ZeroConstructor)
	TEnumAsByte<FSlateCore_SlateCore_ESlateBrushDrawType> DrawAs;                                                   // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_ESlateBrushTileType> Tiling;                                                   // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_ESlateBrushMirrorType> Mirroring;                                                // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FSlateCore_SlateCore_ESlateBrushImageType> ImageType;                                                // 0x006F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 // 0x0080(0x0001)
	unsigned char                                      bHasUObject : 1;                                          // 0x0080(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0018
struct FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0070 - 0x0018)
struct FSlateCore_PointerEvent : public FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
struct FSlateCore_CharacterEvent : public FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
struct FSlateCore_KeyEvent : public FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
struct FSlateCore_AnalogInputEvent : public FSlateCore_KeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
struct FSlateCore_NavigationEvent : public FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0020
struct FSlateCore_FontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparateFillAlpha;                                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyOutlineToDropShadows;                               // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class UObject*                                     OutlineMaterial;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0050
struct FSlateCore_SlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_FontOutlineSettings              OutlineSettings;                                          // 0x0010(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateCore_SlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x07C0 (0x07C8 - 0x0008)
struct FSlateCore_TableRowStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       SelectorFocusedBrush;                                     // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ActiveHoveredBrush;                                       // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ActiveBrush;                                              // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       InactiveHoveredBrush;                                     // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       InactiveBrush;                                            // 0x0228(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       EvenRowBackgroundHoveredBrush;                            // 0x02B0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       EvenRowBackgroundBrush;                                   // 0x0338(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       OddRowBackgroundHoveredBrush;                             // 0x03C0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       OddRowBackgroundBrush;                                    // 0x0448(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       TextColor;                                                // 0x04D0(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       SelectedTextColor;                                        // 0x04F8(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DropIndicator_Above;                                      // 0x0520(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DropIndicator_Onto;                                       // 0x05A8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DropIndicator_Below;                                      // 0x0630(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ActiveHighlightedBrush;                                   // 0x06B8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       InactiveHighlightedBrush;                                 // 0x0740(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateCore_SlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x0270 (0x0278 - 0x0008)
struct FSlateCore_ButtonStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       Normal;                                                   // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       Hovered;                                                  // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       Pressed;                                                  // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       Disabled;                                                 // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           NormalPadding;                                            // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           PressedPadding;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateSound                       PressedSlateSound;                                        // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       HoveredSlateSound;                                        // 0x0260(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x0398 (0x03A0 - 0x0008)
struct FSlateCore_ComboButtonStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_ButtonStyle                      ButtonStyle;                                              // 0x0008(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DownArrowImage;                                           // 0x0280(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       MenuBorderBrush;                                          // 0x0308(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           MenuBorderPadding;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x03D0 (0x03D8 - 0x0008)
struct FSlateCore_ComboBoxStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_ComboButtonStyle                 ComboButtonStyle;                                         // 0x0008(0x03A0) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       PressedSlateSound;                                        // 0x03A8(0x0018) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       SelectionChangeSlateSound;                                // 0x03C0(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0210 (0x0218 - 0x0008)
struct FSlateCore_EditableTextStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0008(0x0050) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       ColorAndOpacity;                                          // 0x0058(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundImageSelected;                                  // 0x0080(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundImageComposing;                                 // 0x0108(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       CaretImage;                                               // 0x0190(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FSlateCore_ScrollBarStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       HorizontalBackgroundImage;                                // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       VerticalBackgroundImage;                                  // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       VerticalTopSlotImage;                                     // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HorizontalTopSlotImage;                                   // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       VerticalBottomSlotImage;                                  // 0x0228(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HorizontalBottomSlotImage;                                // 0x02B0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       NormalThumbImage;                                         // 0x0338(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HoveredThumbImage;                                        // 0x03C0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DraggedThumbImage;                                        // 0x0448(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07E8 (0x07F0 - 0x0008)
struct FSlateCore_EditableTextBoxStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       BackgroundImageNormal;                                    // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundImageHovered;                                   // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundImageFocused;                                   // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundImageReadOnly;                                  // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           Padding;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0238(0x0050) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x0288(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       BackgroundColor;                                          // 0x02B0(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       ReadOnlyForegroundColor;                                  // 0x02D8(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           HScrollBarPadding;                                        // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_Margin                           VScrollBarPadding;                                        // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_ScrollBarStyle                   ScrollBarStyle;                                           // 0x0320(0x04D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0260 (0x0268 - 0x0008)
struct FSlateCore_TextBlockStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateFontInfo                    Font;                                                     // 0x0008(0x0050) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       ColorAndOpacity;                                          // 0x0058(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateColor                       SelectedBackgroundColor;                                  // 0x0098(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       HighlightShape;                                           // 0x00D0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       StrikeBrush;                                              // 0x0158(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UnderlineBrush;                                           // 0x01E0(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FSlateCore_FocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FSlateCore_SpinBoxStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       BackgroundBrush;                                          // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HoveredBackgroundBrush;                                   // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ActiveFillBrush;                                          // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       InactiveFillBrush;                                        // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ArrowsImage;                                              // 0x0228(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x02B0(0x0028)
	struct FSlateCore_Margin                           TextPadding;                                              // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0048 - 0x0018)
struct FSlateCore_MotionEvent : public FSlateCore_InputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FSlateCore_FontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (ZeroConstructor)
	FSlateCore_SlateCore_EFontHinting                  Hinting;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	FSlateCore_SlateCore_EFontLoadingPolicy            LoadingPolicy;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                SubFaceIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontFaceAsset;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FSlateCore_TypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSlateCore_FontData                         Font;                                                     // 0x0008(0x0020)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FSlateCore_Typeface
{
	TArray<struct FSlateCore_TypefaceEntry>            Fonts;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
struct FSlateCore_CompositeFallbackFont
{
	struct FSlateCore_Typeface                         Typeface;                                                 // 0x0000(0x0010)
	float                                              ScalingFactor;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
struct FSlateCore_CompositeSubFont : public FSlateCore_CompositeFallbackFont
{
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Cultures;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeFont
// 0x0038
struct FSlateCore_CompositeFont
{
	struct FSlateCore_Typeface                         DefaultTypeface;                                          // 0x0000(0x0010)
	struct FSlateCore_CompositeFallbackFont            FallbackTypeface;                                         // 0x0010(0x0018)
	TArray<struct FSlateCore_CompositeSubFont>         SubTypefaces;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
struct FSlateCore_CaptureLostEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1050 (0x1058 - 0x0008)
struct FSlateCore_WindowStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_ButtonStyle                      MinimizeButtonStyle;                                      // 0x0008(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_ButtonStyle                      MaximizeButtonStyle;                                      // 0x0280(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_ButtonStyle                      RestoreButtonStyle;                                       // 0x04F8(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_ButtonStyle                      CloseButtonStyle;                                         // 0x0770(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_TextBlockStyle                   TitleTextStyle;                                           // 0x09E8(0x0268) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ActiveTitleBrush;                                         // 0x0C50(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       InactiveTitleBrush;                                       // 0x0CD8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       FlashTitleBrush;                                          // 0x0D60(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       BackgroundColor;                                          // 0x0DE8(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       OutlineBrush;                                             // 0x0E10(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       OutlineColor;                                             // 0x0E98(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BorderBrush;                                              // 0x0EC0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BackgroundBrush;                                          // 0x0F48(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       ChildBackgroundBrush;                                     // 0x0FD0(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
struct FSlateCore_ScrollBorderStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       TopShadowBrush;                                           // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BottomShadowBrush;                                        // 0x0090(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
struct FSlateCore_ScrollBoxStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       TopShadowBrush;                                           // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       BottomShadowBrush;                                        // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       LeftShadowBrush;                                          // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       RightShadowBrush;                                         // 0x01A0(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06F8 (0x0700 - 0x0008)
struct FSlateCore_DockTabStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_ButtonStyle                      CloseButtonStyle;                                         // 0x0008(0x0278) (Edit)
	struct FSlateCore_SlateBrush                       NormalBrush;                                              // 0x0280(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ActiveBrush;                                              // 0x0308(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ColorOverlayTabBrush;                                     // 0x0390(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ColorOverlayIconBrush;                                    // 0x0418(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ForegroundBrush;                                          // 0x04A0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       HoveredBrush;                                             // 0x0528(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ContentAreaBrush;                                         // 0x05B0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       TabWellBrush;                                             // 0x0638(0x0088) (Edit)
	struct FSlateCore_Margin                           TabPadding;                                               // 0x06C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapWidth;                                             // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FSlateCore_SlateColor                       FlashColor;                                               // 0x06D8(0x0028) (Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FSlateCore_TableColumnHeaderStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       SortPrimaryAscendingImage;                                // 0x0008(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       SortPrimaryDescendingImage;                               // 0x0090(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       SortSecondaryAscendingImage;                              // 0x0118(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       SortSecondaryDescendingImage;                             // 0x01A0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       NormalBrush;                                              // 0x0228(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       HoveredBrush;                                             // 0x02B0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       MenuDropdownImage;                                        // 0x0338(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       MenuDropdownNormalBorderBrush;                            // 0x03C0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       MenuDropdownHoveredBorderBrush;                           // 0x0448(0x0088) (Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
struct FSlateCore_SplitterStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       HandleNormalBrush;                                        // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HandleHighlightBrush;                                     // 0x0090(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
struct FSlateCore_HeaderRowStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_TableColumnHeaderStyle           ColumnStyle;                                              // 0x0008(0x04D0) (Edit)
	struct FSlateCore_TableColumnHeaderStyle           LastColumnStyle;                                          // 0x04D8(0x04D0) (Edit)
	struct FSlateCore_SplitterStyle                    ColumnSplitterStyle;                                      // 0x09A8(0x0118) (Edit)
	struct FSlateCore_SlateBrush                       BackgroundBrush;                                          // 0x0AC0(0x0088) (Edit)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x0B48(0x0028) (Edit)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
struct FSlateCore_InlineTextImageStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       Image;                                                    // 0x0008(0x0088) (Edit)
	int16_t                                            Baseline;                                                 // 0x0090(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0338 (0x0340 - 0x0008)
struct FSlateCore_SliderStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       NormalBarImage;                                           // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HoveredBarImage;                                          // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DisabledBarImage;                                         // 0x0118(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       NormalThumbImage;                                         // 0x01A0(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       HoveredThumbImage;                                        // 0x0228(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       DisabledThumbImage;                                       // 0x02B0(0x0088) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A78 (0x0A80 - 0x0008)
struct FSlateCore_SearchBoxStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_EditableTextBoxStyle             TextBoxStyle;                                             // 0x0008(0x07F0) (Edit)
	struct FSlateCore_SlateFontInfo                    ActiveFontInfo;                                           // 0x07F8(0x0050) (Edit)
	struct FSlateCore_SlateBrush                       UpArrowImage;                                             // 0x0848(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       DownArrowImage;                                           // 0x08D0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       GlassImage;                                               // 0x0958(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ClearImage;                                               // 0x09E0(0x0088) (Edit)
	struct FSlateCore_Margin                           ImagePadding;                                             // 0x0A68(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftAlignButtons;                                        // 0x0A78(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FSlateCore_VolumeControlStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SliderStyle                      SliderStyle;                                              // 0x0008(0x0340) (Edit)
	struct FSlateCore_SlateBrush                       HighVolumeImage;                                          // 0x0348(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       MidVolumeImage;                                           // 0x03D0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       LowVolumeImage;                                           // 0x0458(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       NoVolumeImage;                                            // 0x04E0(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       MutedImage;                                               // 0x0568(0x0088) (Edit)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0118 (0x0120 - 0x0008)
struct FSlateCore_ExpandableAreaStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       CollapsedImage;                                           // 0x0008(0x0088) (Edit)
	struct FSlateCore_SlateBrush                       ExpandedImage;                                            // 0x0090(0x0088) (Edit)
	float                                              RolloutAnimationSeconds;                                  // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
struct FSlateCore_ProgressBarStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_SlateBrush                       BackgroundImage;                                          // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       FillImage;                                                // 0x0090(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       MarqueeImage;                                             // 0x0118(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A58 (0x0A60 - 0x0008)
struct FSlateCore_InlineEditableTextBlockStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_EditableTextBoxStyle             EditableTextBoxStyle;                                     // 0x0008(0x07F0) (Edit, BlueprintVisible)
	struct FSlateCore_TextBlockStyle                   TextStyle;                                                // 0x07F8(0x0268) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x04F0 (0x04F8 - 0x0008)
struct FSlateCore_HyperlinkStyle : public FSlateCore_SlateWidgetStyle
{
	struct FSlateCore_ButtonStyle                      UnderlineStyle;                                           // 0x0008(0x0278) (Edit, BlueprintVisible)
	struct FSlateCore_TextBlockStyle                   TextStyle;                                                // 0x0280(0x0268) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           Padding;                                                  // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0578 (0x0580 - 0x0008)
struct FSlateCore_CheckBoxStyle : public FSlateCore_SlateWidgetStyle
{
	TEnumAsByte<FSlateCore_SlateCore_ESlateCheckBoxType> CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateCore_SlateBrush                       UncheckedImage;                                           // 0x0010(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UncheckedHoveredImage;                                    // 0x0098(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UncheckedPressedImage;                                    // 0x0120(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       CheckedImage;                                             // 0x01A8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       CheckedHoveredImage;                                      // 0x0230(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       CheckedPressedImage;                                      // 0x02B8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UndeterminedImage;                                        // 0x0340(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UndeterminedHoveredImage;                                 // 0x03C8(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_SlateBrush                       UndeterminedPressedImage;                                 // 0x0450(0x0088) (Edit, BlueprintVisible)
	struct FSlateCore_Margin                           Padding;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateColor                       ForegroundColor;                                          // 0x04E8(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateColor                       BorderBackgroundColor;                                    // 0x0510(0x0028) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       CheckedSlateSound;                                        // 0x0538(0x0018) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       UncheckedSlateSound;                                      // 0x0550(0x0018) (Edit, BlueprintVisible)
	struct FSlateCore_SlateSound                       HoveredSlateSound;                                        // 0x0568(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
