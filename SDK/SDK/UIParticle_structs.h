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

// Enum UIParticle.EUIParticlePropertyType
enum class FUIParticle_UIParticle_EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float = 0,
	EUIParticlePropertyType__FloatRange = 1,
	EUIParticlePropertyType__FloatCurve = 2,
	EUIParticlePropertyType__FloatCurveRange = 3,
	EUIParticlePropertyType__Vector2D = 4,
	EUIParticlePropertyType__Vector2DRange = 5,
	EUIParticlePropertyType__LinearColorCurve = 6,
	EUIParticlePropertyType__LinearColorCurveRange = 7,
	EUIParticlePropertyType__EUIParticlePropertyType_MAX = 8
};


// Enum UIParticle.EParticleDrawEffect
enum class FUIParticle_UIParticle_EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None      = 0,
	EParticleDrawEffect__NoBlending = 1,
	EParticleDrawEffect__PreMultipliedAlpha = 2,
	EParticleDrawEffect__NoGamma   = 3,
	EParticleDrawEffect__InvertAlpha = 4,
	EParticleDrawEffect__NoPixelSnapping = 5,
	EParticleDrawEffect__DisabledEffect = 6,
	EParticleDrawEffect__IgnoreTextureAlpha = 7,
	EParticleDrawEffect__ReverseGamma = 8,
	EParticleDrawEffect__EParticleDrawEffect_MAX = 9
};


// Enum UIParticle.EPositionType
enum class FUIParticle_UIParticle_EPositionType : uint8_t
{
	EPositionType__FREE            = 0,
	EPositionType__RELATIVE        = 1,
	EPositionType__EPositionType_MAX = 2
};


// Enum UIParticle.EEmitterType
enum class FUIParticle_UIParticle_EEmitterType : uint8_t
{
	EEmitterType__Gravity          = 0,
	EEmitterType__Radial           = 1,
	EEmitterType__Curve            = 2,
	EEmitterType__EEmitterType_MAX = 3
};


// Enum UIParticle.ECurveType
enum class FUIParticle_UIParticle_ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent = 0,
	ECurveType__ParticleLifeTime   = 1,
	ECurveType__EmitLifeTime       = 2,
	ECurveType__ECurveType_MAX     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0018
struct FUIParticle_UIParticleEmitterInfo
{
	bool                                               Disable;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ActiveDelay;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UUIParticle_UIParticleEmitterAsset*          Asset;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.Range_Float
// 0x0008
struct FUIParticle_Range_Float
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0088
struct FUIParticle_UIParticleFloatCurve
{
	struct FEngine_RichCurve                           CurveData;                                                // 0x0000(0x0080) (Edit)
	FUIParticle_UIParticle_ECurveType                  CurveType;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_FloatCurve
// 0x0110
struct FUIParticle_Range_FloatCurve
{
	struct FUIParticle_UIParticleFloatCurve            Min;                                                      // 0x0000(0x0088) (Edit)
	struct FUIParticle_UIParticleFloatCurve            Max;                                                      // 0x0088(0x0088) (Edit)
};

// ScriptStruct UIParticle.Range_Vector2D
// 0x0014
struct FUIParticle_Range_Vector2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_X_Y;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x0208
struct FUIParticle_UIParticleLinearColorCurve
{
	struct FEngine_RichCurve                           ColorCurves[0x4];                                         // 0x0000(0x0080) (Edit)
	FUIParticle_UIParticle_ECurveType                  CurveType;                                                // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0201(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x0418
struct FUIParticle_Range_LinearColorCurve
{
	struct FUIParticle_UIParticleLinearColorCurve      Min;                                                      // 0x0000(0x0208) (Edit)
	struct FUIParticle_UIParticleLinearColorCurve      Max;                                                      // 0x0208(0x0208) (Edit)
	bool                                               RandomKey_R_G;                                            // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_B;                                            // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_A;                                            // 0x0412(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_B;                                            // 0x0413(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_A;                                            // 0x0414(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_B_A;                                            // 0x0415(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0416(0x0002) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleProperty
// 0x07E8
struct FUIParticle_UIParticleProperty
{
	FUIParticle_UIParticle_EUIParticlePropertyType     Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FUIParticle_Range_Float                     FloatRangeValue;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FUIParticle_UIParticleFloatCurve            FloatCurveValue;                                          // 0x0010(0x0088) (Edit)
	struct FUIParticle_Range_FloatCurve                FloatCurveRangeValue;                                     // 0x0098(0x0110) (Edit)
	struct FVector2D                                   Vector2DValue;                                            // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FUIParticle_Range_Vector2D                  Vector2DRangeValue;                                       // 0x01B0(0x0014) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FUIParticle_UIParticleLinearColorCurve      LinearColorCurveValue;                                    // 0x01C8(0x0208) (Edit)
	struct FUIParticle_Range_LinearColorCurve          LinearColorCurveRangeValue;                               // 0x03D0(0x0418) (Edit)
};

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0FD0
struct FUIParticle_Posotion_Vector2DCurve
{
	struct FUIParticle_UIParticleProperty              X;                                                        // 0x0000(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Y;                                                        // 0x07E8(0x07E8) (Edit)
};

// ScriptStruct UIParticle.ChildEmitter
// 0x0018
struct FUIParticle_ChildEmitter
{
	float                                              ActivityInParentLifeTime;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FollowParentPosition;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              FollowParentSpeedPercent;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrderOffset;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUIParticle_UIParticleEmitterAsset*          ChildrenAsset;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.ScalarParamCurve
// 0x07F0
struct FUIParticle_ScalarParamCurve
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUIParticle_UIParticleProperty              Value;                                                    // 0x0008(0x07E8) (Edit)
};

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0FD0
struct FUIParticle_Size_Vector2DCurve
{
	struct FUIParticle_UIParticleProperty              Min;                                                      // 0x0000(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Max;                                                      // 0x07E8(0x07E8) (Edit)
};

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0010
struct FUIParticle_ScalarParamFloat
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUIParticle_Range_Float                     Value;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008
struct FUIParticle_LerpKeyVector2D
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010
struct FUIParticle_LerpKeyColor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
