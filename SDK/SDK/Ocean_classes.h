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

// Class Ocean.STC_OceanActor
// 0x0210 (0x0428 - 0x0218)
class AOcean_STC_OceanActor : public AEngine_Actor
{
public:
	float                                              SimulationSpeed;                                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PauseSimulation;                                          // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	class UEngine_Texture2D*                           FoamTexture;                                              // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      WaterColor;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SubsurfaceScatteringColor;                                // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnvirnmentCubeMapSaturation;                              // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeaufortInterpolator;                                     // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AnimateBeaufortScaleTransition;                           // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FOcean_Ocean_EBeaufortScale                        CurrentBeaufortScaleValue;                                // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FOcean_Ocean_EBeaufortScale                        BeaufortStartKeyFrame;                                    // 0x023A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FOcean_Ocean_EBeaufortScale                        BeaufortEndKeyFrame;                                      // 0x023B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	TArray<struct FOcean_BeaufortScaleElem>            BeaufortScaleKeyFrames;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UEngine_StaticMeshComponent*                 OceanGridMeshComponent;                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NormalStrength;                                           // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamTranslationSpeed;                                     // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamContrast;                                             // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamDecay;                                                // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamIntensity;                                            // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamFarIntensity;                                         // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamCutoff;                                               // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoamPeakPresence;                                         // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubsurfaceStartDistance;                                  // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubsurfaceIntensity;                                      // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindDependency;                                           // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindAngleDirection;                                       // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveChoppiness;                                           // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveHeightGlobalScale;                                    // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OceanUVTranslationSpeed;                                  // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OceanAngleDirection;                                      // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FoamTiling;                                               // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OceanTiling;                                              // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaveChoppinessParamName;                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WavetHeightGlobalScaleParamName;                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WaterColorParamName;                                      // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WindDirectionName;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamNearIntensityName;                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamFarIntensityName;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SubsurfaceStartDistanceName;                              // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamPeakPresenceName;                                     // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SubsurfaceColorIntensityName;                             // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SubsurfaceScatteringColorName;                            // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamTilingName;                                           // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OceanTilingName;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DYTextureName;                                            // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DXTextureName;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DZTextureName;                                            // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NormalStrengthName;                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamCutoffName;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OceanColorRampTextureName;                                // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamTextureName;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamTranslationSpeedName;                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoamDecayName;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OceanUVTranslationSpeedName;                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OceanAngleDirectionName;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EnvirnmentCubeMapSaturationName;                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             OceanMaterialInstanceDynamic;                             // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             OceanMIDClipMap0;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             OceanMIDClipMap1;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             OceanMIDClipMap2;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             OceanMIDClipMap3;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           GaussianNoise;                                            // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTargetDY;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTargetDZ;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTargetDX;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTargetNormalAndFold;                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RenderTargetNormalAndFoldPrev;                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x03C8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Ocean.STC_OceanActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Ocean.STC_OceanActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
