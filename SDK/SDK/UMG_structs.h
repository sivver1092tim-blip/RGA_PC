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

// Enum UMG.ESlateAccessibleBehavior
enum class FUMG_UMG_ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	ESlateAccessibleBehavior__Auto = 1,
	ESlateAccessibleBehavior__Summary = 2,
	ESlateAccessibleBehavior__Custom = 3,
	ESlateAccessibleBehavior__ToolTip = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5
};


// Enum UMG.ESlateVisibility
enum class FUMG_UMG_ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
};


// Enum UMG.EVirtualKeyboardType
enum class FUMG_UMG_EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
};


// Enum UMG.EWidgetAnimationEvent
enum class FUMG_UMG_EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2
};


// Enum UMG.EUMGSequencePlayMode
enum class FUMG_UMG_EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
};


// Enum UMG.EWidgetTickFrequency
enum class FUMG_UMG_EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2
};


// Enum UMG.EDragPivot
enum class FUMG_UMG_EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
};


// Enum UMG.EDynamicBoxType
enum class FUMG_UMG_EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__Overlay       = 3,
	EDynamicBoxType__EDynamicBoxType_MAX = 4
};


// Enum UMG.ESlateSizeRule
enum class FUMG_UMG_ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
};


// Enum UMG.EUserSettingColor
enum class FUMG_UMG_EUserSettingColor : uint8_t
{
	EUserSettingColor__None        = 0,
	EUserSettingColor__Default     = 1,
	EUserSettingColor__Resource_Default = 2,
	EUserSettingColor__Resource_NotEnough = 3,
	EUserSettingColor__EUserSettingColor_MAX = 4
};


// Enum UMG.EWidgetDesignFlags
enum class FUMG_UMG_EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
};


// Enum UMG.EBindingKind
enum class FUMG_UMG_EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
};


// Enum UMG.EWindowVisibility
enum class FUMG_UMG_EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible     = 0,
	EWindowVisibility__SelfHitTestInvisible = 1,
	EWindowVisibility__EWindowVisibility_MAX = 2
};


// Enum UMG.EWidgetGeometryMode
enum class FUMG_UMG_EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
};


// Enum UMG.EWidgetBlendMode
enum class FUMG_UMG_EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class FUMG_UMG_EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
};


// Enum UMG.EWidgetInteractionSource
enum class FUMG_UMG_EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
};


// Enum UMG.EWidgetSpace
enum class FUMG_UMG_EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FUMG_WidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FUMG_EventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.UserWidgetPool
// 0x0080
struct FUMG_UserWidgetPool
{
	TArray<class UUMG_UserWidget*>                     ActiveWidgets;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UUMG_UserWidget*>                     InactiveWidgets;                                          // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0020(0x0060) MISSED OFFSET
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FUMG_ShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (Edit)
	FSlateCore_SlateCore_ETextShapingMethod            TextShapingMethod;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSlate_Slate_ETextFlowDirection                    TextFlowDirection;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FUMG_NamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUMG_Widget*                                 Content;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UMG.AnimationEventBinding
// 0x0028
struct FUMG_AnimationEventBinding
{
	class UUMG_WidgetAnimation*                        Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	FUMG_UMG_EWidgetAnimationEvent                     AnimationEvent;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       UserTag;                                                  // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FUMG_PaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0028 - 0x0028)
struct FUMG_DynamicPropertyPath : public FPropertyPath_CachedPropertyPath
{

};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FUMG_AnchorData
{
	struct FSlateCore_Margin                           Offsets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlate_Anchors                              Anchors;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FUMG_SlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FUMG_UMG_ESlateSizeRule>               SizeRule;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FUMG_MovieScene2DTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FUMG_SlateMeshVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV4;                                                      // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV5;                                                      // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
struct FUMG_WidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C
struct FUMG_BlueprintWidgetAnimationDelegateBinding
{
	FUMG_UMG_EWidgetAnimationEvent                     Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       AnimationToBind;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       UserTag;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0050
struct FUMG_DelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUMG_DynamicPropertyPath                    SourcePath;                                               // 0x0020(0x0028)
	FUMG_UMG_EBindingKind                              Kind;                                                     // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0024
struct FUMG_WidgetNavigationData
{
	FSlateCore_SlateCore_EUINavigationRule             Rule;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUMG_Widget>                  Widget;                                                   // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             CustomDelegate;                                           // 0x0014(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FUMG_MovieScene2DTransformSectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          Translation[0x2];                                         // 0x0048(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Rotation;                                                 // 0x0188(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Scale[0x2];                                               // 0x0228(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Shear[0x2];                                               // 0x0368(0x00A0)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FUMG_MovieScene2DTransformMask              Mask;                                                     // 0x04AC(0x0004)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FUMG_MovieSceneMarginSectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          TopCurve;                                                 // 0x0048(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          LeftCurve;                                                // 0x00E8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          RightCurve;                                               // 0x0188(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          BottomCurve;                                              // 0x0228(0x00A0)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0070 - 0x0060)
struct FUMG_MovieSceneWidgetMaterialSectionTemplate : public FMovieSceneTracks_MovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct UMG.RichTextStyleRow
// 0x0268 (0x0270 - 0x0008)
struct FUMG_RichTextStyleRow : public FEngine_TableRowBase
{
	struct FSlateCore_TextBlockStyle                   TextStyle;                                                // 0x0008(0x0268) (Edit)
};

// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
struct FUMG_RichImageRow : public FEngine_TableRowBase
{
	struct FSlateCore_SlateBrush                       Brush;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00B8 - 0x00A8)
struct FUMG_WidgetComponentInstanceData : public FEngine_SceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
