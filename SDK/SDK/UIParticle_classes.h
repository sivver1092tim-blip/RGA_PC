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

// Class UIParticle.UIParticle
// 0x0030 (0x0138 - 0x0108)
class UUIParticle_UIParticle : public UUMG_Widget
{
public:
	class UUIParticle_UIParticleAsset*                 Asset;                                                    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0122(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIParticle.UIParticle");
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticle.UIParticle");
		return ptr;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleAsset
// 0x0018 (0x0040 - 0x0028)
class UUIParticle_UIParticleAsset : public UObject
{
public:
	bool                                               AutoPlay;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FUIParticle_UIParticleEmitterInfo>   Emitters;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIParticle.UIParticleAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticle.UIParticleAsset");
		return ptr;
	}

};


// Class UIParticle.UIParticleEmitter
// 0x0030 (0x0138 - 0x0108)
class UUIParticle_UIParticleEmitter : public UUMG_Widget
{
public:
	class UUIParticle_UIParticleEmitterAsset*          Asset;                                                    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0122(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		return ptr;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleEmitterAsset
// 0xD618 (0xD640 - 0x0028)
class UUIParticle_UIParticleEmitterAsset : public UObject
{
public:
	bool                                               AutoPlay;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SamplingTimes;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FUIParticle_UIParticle_EEmitterType                EmitterType;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              EmitSeconds;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FUIParticle_UIParticleProperty              MaxParticleCount;                                         // 0x0040(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              SpawnParticlePerSecond;                                   // 0x0828(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              ParticleEmitAngle;                                        // 0x1010(0x07E8) (Edit)
	struct FUIParticle_Range_Vector2D                  EmitPosRange;                                             // 0x17F8(0x0014) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x180C(0x0004) MISSED OFFSET
	struct FUIParticle_Posotion_Vector2DCurve          EmitPosition;                                             // 0x1810(0x0FD0) (Edit)
	bool                                               AutoEmitPosRange;                                         // 0x27E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoScale;                                                // 0x27E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByX;                                                 // 0x27E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x27E3(0x0001) MISSED OFFSET
	struct FVector2D                                   DesignSize;                                               // 0x27E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EmitAngleByWidgetAngle;                                   // 0x27EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FUIParticle_UIParticle_EPositionType               PositionType;                                             // 0x27ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x27EE(0x0002) MISSED OFFSET
	struct FUIParticle_UIParticleProperty              LifeSpan;                                                 // 0x27F0(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Size;                                                     // 0x2FD8(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Pivot;                                                    // 0x37C0(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              RotationStart;                                            // 0x3FA8(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              RotationSpeed;                                            // 0x4790(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Color;                                                    // 0x4F78(0x07E8) (Edit)
	class UObject*                                     ResourceObject;                                           // 0x5760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotationFollowSpeed;                                      // 0x5768(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSeparateSize;                                          // 0x5769(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x576A(0x0006) MISSED OFFSET
	struct FUIParticle_UIParticleProperty              Gravity;                                                  // 0x5770(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              StartSpeed;                                               // 0x5F58(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              AirResistance;                                            // 0x6740(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              RadialAcceleration;                                       // 0x6F28(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              TangentialAcceleration;                                   // 0x7710(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              Radius;                                                   // 0x7EF8(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              DegreePerSecond;                                          // 0x86E0(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              PositionX;                                                // 0x8EC8(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              PositionY;                                                // 0x96B0(0x07E8) (Edit)
	TArray<struct FUIParticle_ChildEmitter>            ChildrenEmitters;                                         // 0x9E98(0x0010) (Edit, ZeroConstructor)
	TArray<struct FUIParticle_ScalarParamCurve>        ScalarParams;                                             // 0x9EA8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FUIParticle_ScalarParamCurve>        ScalarParamsWhenStart;                                    // 0x9EB8(0x0010) (Edit, ZeroConstructor)
	FUIParticle_UIParticle_EParticleDrawEffect         DrawEffect;                                               // 0x9EC8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseScaleFollowSpeedDirection;                             // 0x9EC9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x9ECA(0x0006) MISSED OFFSET
	struct FUIParticle_UIParticleProperty              ScaleFollowSpeedDirection;                                // 0x9ED0(0x07E8) (Edit)
	bool                                               UseScaleFollowSpeedVertical;                              // 0xA6B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0xA6B9(0x0007) MISSED OFFSET
	struct FUIParticle_UIParticleProperty              ScaleFollowSpeedVertical;                                 // 0xA6C0(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              DirectionScale;                                           // 0xAEA8(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              VerticalDirectionScale;                                   // 0xB690(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              SineDirectionStart;                                       // 0xBE78(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              SineDirectionSpeed;                                       // 0xC660(0x07E8) (Edit)
	struct FUIParticle_UIParticleProperty              SineDirectionRange;                                       // 0xCE48(0x07E8) (Edit)
	TArray<class UUIParticle_UIParticleEmitterAsset*>  LevelOfDetail;                                            // 0xD630(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		return ptr;
	}

};


// Class UIParticle.UIParticleUtility
// 0x0000 (0x0028 - 0x0028)
class UUIParticle_UIParticleUtility : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIParticle.UIParticleUtility");
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticle.UIParticleUtility");
		return ptr;
	}


	void STATIC_SetMultiThread(bool Value);
	void STATIC_SetLOD(int newlod);
	bool STATIC_GetMultiThread();
	int STATIC_GetLOD();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
