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

// Class UIWS.UIWSCapture
// 0x0060 (0x0278 - 0x0218)
class AUIWS_UIWSCapture : public AEngine_Actor
{
public:
	class UEngine_SceneCaptureComponent2D*             SceneCaptureComp;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_BoxComponent*                        PPVolume;                                                 // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SceneComponent*                      SceneRoot;                                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             DrawMID;                                                  // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     moveoffset;                                               // 0x0238(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UEngine_TextureRenderTarget2D*               RTPersistent;                                             // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               RTCapture;                                                // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialParameterCollection*         MPC_UIWSWaterBodies;                                      // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   DrawToPMat;                                               // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             DynamicDrawToPMat;                                        // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_PostProcessComponent*                PostProcessComp;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSCapture");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSCapture");
		return ptr;
	}

};


// Class UIWS.UIWSWaterBody
// 0x0290 (0x04A8 - 0x0218)
class AUIWS_UIWSWaterBody : public AEngine_Actor
{
public:
	TWeakObjectPtr<class AUIWS_UIWSManager>            MyManager;                                                // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UEngine_BoxComponent*                        BoxComp;                                                  // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUIWS_UIWSCapture*                           myCaptureActor;                                           // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_StaticMeshComponent*>         XMeshes;                                                  // 0x0238(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UEngine_StaticMeshComponent*>         YMeshes;                                                  // 0x0248(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UEngine_StaticMeshComponent*>         CurrentYArray;                                            // 0x0258(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UEngine_StaticMeshComponent*>         WaterSurfaceMeshes;                                       // 0x0268(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0278(0x0010) MISSED OFFSET
	bool                                               OverrideWaterMaterials;                                   // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UEngine_MaterialInterface*                   CustomWaterMaterial;                                      // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   CustomWaterMaterialDistant;                               // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02A0(0x0002) MISSED OFFSET
	bool                                               bIsInteractive;                                           // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteraction;                             // 0x02A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteractionXbox;                         // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteractionPS4;                          // 0x02A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteractionNintendoSwitch;               // 0x02A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteractionAndroid;                      // 0x02A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutomaticInteractionIOS;                          // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	int                                                CaptureRes;                                               // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTileScale;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimResMin;                                                // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTieSimToFPS;                                             // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractOnDamage;                                         // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitTickRate;                                           // 0x02BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x02BB(0x0001) MISSED OFFSET
	float                                              TickRate;                                                 // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageScale;                                              // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsEdgeReflection;                                  // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	float                                              EdgeDepth;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CaptureOffset;                                            // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x02D0(0x0004) MISSED OFFSET
	struct FLinearColor                                WaterColor;                                               // 0x02D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DeepOpacity;                                              // 0x02E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShallowOpacity;                                           // 0x02F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthTransitionDistance;                                  // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0308(0x0004) MISSED OFFSET
	float                                              ShallowEdgeFadeDistance;                                  // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShallowEdgeFadePower;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableParticleOnDamage;                                  // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableParticleOnCollision;                               // 0x0315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideParticleSettings;                                // 0x0316(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0317(0x0001) MISSED OFFSET
	float                                              InteractionEffectScaleMin;                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractionEffectScaleMax;                                // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleSystem*                      InteractionEffect;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageEffectScaleMin;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageEffectScaleMax;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleSystem*                      DamageEffect;                                             // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x20];                                      // 0x0338(0x0020) MISSED OFFSET
	class UEngine_StaticMeshComponent*                 WaterMeshComp;                                            // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UEngine_MaterialInstanceDynamic*>     hellmats;                                                 // 0x0360(0x0010) (ZeroConstructor)
	class UEngine_TextureRenderTarget2D*               activeheight0;                                            // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               activeheight1;                                            // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               activeheight2;                                            // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               activenormal;                                             // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               localheight0;                                             // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               localheight1;                                             // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               localheight2;                                             // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               localnormal;                                              // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               globalheight0;                                            // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               globalheight1;                                            // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               globalheight2;                                            // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               globalnormal;                                             // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               myCaptureRT;                                              // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   ForceSplatMat;                                            // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   ManForceSplatMat;                                         // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   HeightSimMat;                                             // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   ComputeNormalMat;                                         // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   PPUnderWaterMat;                                          // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             PPUnderWaterMID;                                          // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleSystem*                      DefaultSplashEffect;                                      // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class UEngine_MaterialInstanceDynamic*             WaterMID;                                                 // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             WaterMIDLOD1;                                             // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_StaticMesh*                          WaterMeshSM;                                              // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_BoxComponent*                        WaterVolume;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0438(0x0010) MISSED OFFSET
	class UEngine_MaterialInstanceDynamic*             HeightSimInst;                                            // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             ForceSplatInst;                                           // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             ManualSplatInst;                                          // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInstanceDynamic*             ComputeNormalInst;                                        // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Canvas*                              Canvas;                                                   // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_DrawToRenderTargetContext           Context;                                                  // 0x0478(0x0010)
	class UEngine_Canvas*                              CanvasMan;                                                // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SizeMan;                                                  // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_DrawToRenderTargetContext           ContextMan;                                               // 0x0498(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSWaterBody");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSWaterBody");
		return ptr;
	}


	void SplashedAtLocation(const struct FVector& SplashLoc, const struct FVector& SplashVelocity, float Strength);
	void SplashAtlocation(const struct FVector& SplashLoc, const struct FVector& SplachVelocity, float SplashStrengthPercent);
	void RequestPriorityManual();
	void RadialDamageSplashAtlocation(const struct FVector& SplashLoc, float DamageAmount);
	void PointDamageSplashAtlocation(const struct FVector& SplashLoc, float DamageAmount);
	void OnWaterOverlap(class UEngine_PrimitiveComponent* OverlappedComponent, class AEngine_Actor* OtherActor, class UEngine_PrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FEngine_HitResult& SweepResult);
	void OnRadialDamageEffect(const struct FVector& RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount);
	void OnPointDamageEffect(const struct FVector& RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount);
	void ForceAppliedAtLocation(const struct FVector& RippleLoc, float Strength);
	void ApplyForceAtLocation(float fStrength, float fSizePercent, const struct FVector& HitLocation, bool bWithEffect);
};


// Class UIWS.UIWSCustomBody
// 0x0028 (0x04D0 - 0x04A8)
class AUIWS_UIWSCustomBody : public AUIWS_UIWSWaterBody
{
public:
	class UEngine_StaticMesh*                          CustomStaticMesh;                                         // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_StaticMeshComponent*                 CustomMeshComp;                                           // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	class UEngine_BoxComponent*                        CustomWaterVolume;                                        // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AllowCameraUnder;                                         // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSCustomBody");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSCustomBody");
		return ptr;
	}

};


// Class UIWS.UIWSInteractorComponent
// 0x0028 (0x00D8 - 0x00B0)
class UUIWS_UIWSInteractorComponent : public UEngine_ActorComponent
{
public:
	bool                                               bShouldInteract;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableInteractiveStateSwitching;                         // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              MinInteractionVelocity;                                   // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_ActorComponent*>              Statics;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UEngine_ActorComponent*>              Skels;                                                    // 0x00C8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSInteractorComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSInteractorComponent");
		return ptr;
	}


	void UpdateComponentList();
};


// Class UIWS.UIWSManager
// 0x0048 (0x0260 - 0x0218)
class AUIWS_UIWSManager : public AEngine_Actor
{
public:
	bool                                               UpdateLightInfo;                                          // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSpawnGlobalPostProcess;                            // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ContinuousLightUpdate;                                    // 0x021A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CenterSimOnPawn;                                          // 0x021B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindVector;                                               // 0x021C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindTurbulence;                                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CausticBrightnessMult;                                    // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialParameterCollection*         MPC_UIWSWaterBodies;                                      // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class AUIWS_UIWSWaterBody>>  ManagedWaterBodies;                                       // 0x0238(0x0010) (ZeroConstructor)
	class UEngine_PostProcessComponent*                PostProcessComp;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUIWS_UIWSWaterBody*                         CurrentPriorityBody;                                      // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUIWS_UIWSWaterBody*                         LastPriorityBody;                                         // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSManager");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSManager");
		return ptr;
	}

};


// Class UIWS.UIWSRiver
// 0x0020 (0x04C8 - 0x04A8)
class AUIWS_UIWSRiver : public AUIWS_UIWSWaterBody
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	class UEngine_SplineComponent*                     SplineComp;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AllowCameraUnder;                                         // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIWS.UIWSRiver");
		if (!ptr)
			ptr = UObject::FindClass("Class UIWS.UIWSRiver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
