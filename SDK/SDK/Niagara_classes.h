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

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0068 - 0x0058)
class UNiagara_MovieSceneNiagaraTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0030 (0x0098 - 0x0068)
class UNiagara_MovieSceneNiagaraParameterTrack : public UNiagara_MovieSceneNiagaraTrack
{
public:
	struct FNiagara_NiagaraVariable                    Parameter;                                                // 0x0068(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UNiagara_MovieSceneNiagaraBoolParameterTrack : public UNiagara_MovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UNiagara_MovieSceneNiagaraColorParameterTrack : public UNiagara_MovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UNiagara_MovieSceneNiagaraFloatParameterTrack : public UNiagara_MovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UNiagara_MovieSceneNiagaraIntegerParameterTrack : public UNiagara_MovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (0x00E0 - 0x00E0)
class UNiagara_MovieSceneNiagaraSystemSpawnSection : public UMovieScene_MovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0068 - 0x0068)
class UNiagara_MovieSceneNiagaraSystemTrack : public UNiagara_MovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x00A0 - 0x0098)
class UNiagara_MovieSceneNiagaraVectorParameterTrack : public UNiagara_MovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0008 (0x0220 - 0x0218)
class ANiagara_NiagaraActor : public AEngine_Actor
{
public:
	class UNiagara_NiagaraComponent*                   NiagaraComponent;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x01B0 (0x0590 - 0x03E0)
class UNiagara_NiagaraComponent : public UEngine_FXSystemComponent
{
public:
	FNiagara_Niagara_ENiagaraTickBehavior              TickBehavior;                                             // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	struct FNiagara_NiagaraUserRedirectionParameterStore OverrideParameters;                                       // 0x03E8(0x0108) (Edit)
	unsigned char                                      bForceSolo : 1;                                           // 0x04F0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x27];                                      // 0x04F1(0x0027) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0518(0x0001)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x0518(0x0001)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0520(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSystemFinished;                                         // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class UEngine_SceneComponent>       AutoAttachParent;                                         // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AutoAttachLocationRule;                                   // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AutoAttachRotationRule;                                   // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AutoAttachScaleRule;                                      // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x054B(0x0001) MISSED OFFSET
	int                                                PreviewDetailLevel;                                       // 0x054C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviewLODDistance;                                       // 0x0550(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEnablePreviewDetailLevel : 1;                            // 0x0554(0x0001) (Edit, Transient)
	unsigned char                                      bEnablePreviewLODDistance : 1;                            // 0x0554(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData05[0x3B];                                      // 0x0555(0x003B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);
	void SetVariableMaterial(const struct FName& InVariableName, class UEngine_MaterialInterface* Object);
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);
	void SetVariableInt(const struct FName& InVariableName, int InValue);
	void SetVariableFloat(const struct FName& InVariableName, float InValue);
	void SetVariableBool(const struct FName& InVariableName, bool InValue);
	void SetVariableActor(const struct FName& InVariableName, class AEngine_Actor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AEngine_Actor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagara_NiagaraSystem* InAsset);
	void SetAgeUpdateMode(FNiagara_Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagara_NiagaraDataInterface* GetDataInterface(const struct FString& Name);
	class UNiagara_NiagaraSystem* GetAsset();
	FNiagara_Niagara_ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};


// Class Niagara.NiagaraComponentPool
// 0x0058 (0x0080 - 0x0028)
class UNiagara_NiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagara_NiagaraSystem*, struct FNiagara_NCPool> WorldParticleSystemPools;                                 // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface
// 0x0010 (0x0038 - 0x0028)
class UNiagara_NiagaraDataInterface : public UNiagaraCore_NiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0020 (0x0058 - 0x0038)
class UNiagara_NiagaraDataInterfaceCurveBase : public UNiagara_NiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT : 1;                                              // 0x0054(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (0x0048 - 0x0038)
class UNiagara_NiagaraDataInterfaceCollisionQuery : public UNiagara_NiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0258 - 0x0058)
class UNiagara_NiagaraDataInterfaceColorCurve : public UNiagara_NiagaraDataInterfaceCurveBase
{
public:
	struct FEngine_RichCurve                           RedCurve;                                                 // 0x0058(0x0080) (Edit)
	struct FEngine_RichCurve                           GreenCurve;                                               // 0x00D8(0x0080) (Edit)
	struct FEngine_RichCurve                           BlueCurve;                                                // 0x0158(0x0080) (Edit)
	struct FEngine_RichCurve                           AlphaCurve;                                               // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0048 - 0x0038)
class UNiagara_NiagaraDataInterfaceCurlNoise : public UNiagara_NiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00D8 - 0x0058)
class UNiagara_NiagaraDataInterfaceCurve : public UNiagara_NiagaraDataInterfaceCurveBase
{
public:
	struct FEngine_RichCurve                           Curve;                                                    // 0x0058(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (0x0028 - 0x0028)
class UNiagara_NiagaraParticleCallbackHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}


	void ReceiveParticleData(TArray<struct FNiagara_BasicParticleData> Data, class UNiagara_NiagaraSystem* NiagaraSystem);
};


// Class Niagara.NiagaraDataInterfaceExport
// 0x0030 (0x0068 - 0x0038)
class UNiagara_NiagaraDataInterfaceExport : public UNiagara_NiagaraDataInterface
{
public:
	struct FNiagara_NiagaraUserParameterBinding        CallbackHandlerParameter;                                 // 0x0038(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A8 (0x00E0 - 0x0038)
class UNiagara_NiagaraDataInterfaceRWBase : public UNiagara_NiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.OutputShaderStages
	unsigned char                                      UnknownData01[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.IterationShaderStages
	unsigned char                                      UnknownData02[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0028 (0x0108 - 0x00E0)
class UNiagara_NiagaraDataInterfaceGrid2D : public UNiagara_NiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsY;                                                // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAttributes;                                            // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromCellSize;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector                                     WorldBBoxMin;                                             // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldBBoxSize;                                            // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x0000 (0x0108 - 0x0108)
class UNiagara_NiagaraDataInterfaceGrid2DCollection : public UNiagara_NiagaraDataInterfaceGrid2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}


	void FillTexture2D(class UNiagara_NiagaraComponent* Component, class UEngine_TextureRenderTarget2D* dest, int AttributeIndex);
};


// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0030 (0x0110 - 0x00E0)
class UNiagara_NiagaraDataInterfaceGrid3D : public UNiagara_NiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumVoxels;                                                // 0x00E0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromVoxelSize;                                     // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector                                     WorldBBoxMin;                                             // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldBBoxSize;                                            // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (0x0118 - 0x0110)
class UNiagara_NiagaraDataInterfaceNeighborGrid3D : public UNiagara_NiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerVoxel;                                     // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (0x0048 - 0x0038)
class UNiagara_NiagaraDataInterfaceParticleRead : public UNiagara_NiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0038 - 0x0038)
class UNiagara_NiagaraDataInterfaceSimpleCounter : public UNiagara_NiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (0x00C0 - 0x0038)
class UNiagara_NiagaraDataInterfaceSkeletalMesh : public UNiagara_NiagaraDataInterface
{
public:
	class AEngine_Actor*                               Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagara_NiagaraUserParameterBinding        MeshUserParameter;                                        // 0x0040(0x0030) (Edit)
	class UEngine_SkeletalMeshComponent*               SourceComponent;                                          // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	FNiagara_Niagara_ENDISkeletalMesh_SkinningMode     SkinningMode;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0080(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FName>                               SpecificBones;                                            // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               SpecificSockets;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (0x0040 - 0x0038)
class UNiagara_NiagaraDataInterfaceSpline : public UNiagara_NiagaraDataInterface
{
public:
	class AEngine_Actor*                               Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (0x0068 - 0x0038)
class UNiagara_NiagaraDataInterfaceStaticMesh : public UNiagara_NiagaraDataInterface
{
public:
	class UEngine_StaticMesh*                          DefaultMesh;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_StaticMeshComponent*                 SourceComponent;                                          // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNiagara_NDIStaticMeshSectionFilter         SectionFilter;                                            // 0x0050(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (0x0040 - 0x0038)
class UNiagara_NiagaraDataInterfaceTexture : public UNiagara_NiagaraDataInterface
{
public:
	class UEngine_Texture*                             Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0158 - 0x0058)
class UNiagara_NiagaraDataInterfaceVector2DCurve : public UNiagara_NiagaraDataInterfaceCurveBase
{
public:
	struct FEngine_RichCurve                           XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FEngine_RichCurve                           YCurve;                                                   // 0x00D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0258 - 0x0058)
class UNiagara_NiagaraDataInterfaceVector4Curve : public UNiagara_NiagaraDataInterfaceCurveBase
{
public:
	struct FEngine_RichCurve                           XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FEngine_RichCurve                           YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FEngine_RichCurve                           ZCurve;                                                   // 0x0158(0x0080) (Edit)
	struct FEngine_RichCurve                           WCurve;                                                   // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01D8 - 0x0058)
class UNiagara_NiagaraDataInterfaceVectorCurve : public UNiagara_NiagaraDataInterfaceCurveBase
{
public:
	struct FEngine_RichCurve                           XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FEngine_RichCurve                           YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FEngine_RichCurve                           ZCurve;                                                   // 0x0158(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0048 - 0x0038)
class UNiagara_NiagaraDataInterfaceVectorField : public UNiagara_NiagaraDataInterface
{
public:
	class UEngine_VectorField*                         Field;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileX;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagara_NiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x0280 (0x02A8 - 0x0028)
class UNiagara_NiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreAllocationCount;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FNiagara_NiagaraEmitterScriptProperties     UpdateScriptProps;                                        // 0x0038(0x0028)
	struct FNiagara_NiagaraEmitterScriptProperties     SpawnScriptProps;                                         // 0x0060(0x0028)
	struct FNiagara_NiagaraEmitterScriptProperties     EmitterSpawnScriptProps;                                  // 0x0088(0x0028)
	struct FNiagara_NiagaraEmitterScriptProperties     EmitterUpdateScriptProps;                                 // 0x00B0(0x0028)
	FNiagara_Niagara_ENiagaraSimTarget                 SimTarget;                                                // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x00DC(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagara_NiagaraDetailsLevelScaleOverrides  GlobalSpawnCountScaleOverrides;                           // 0x0100(0x0014) (Edit)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0114(0x0001) (Edit)
	unsigned char                                      bFixedBounds : 1;                                         // 0x0114(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x0114(0x0001) (Edit)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x0114(0x0001) (Edit)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                       // 0x0114(0x0001) (Edit)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0114(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxUpdateIterations;                                      // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraEmitter.SpawnStages
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x0170(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	struct FNiagara_NiagaraFastPath_Module_EmitterScalability EmitterScalability;                                       // 0x0174(0x002C) (Edit)
	struct FNiagara_NiagaraFastPath_Module_EmitterLifeCycle EmitterLifeCycle;                                         // 0x01A0(0x0010) (Edit)
	TArray<struct FNiagara_NiagaraFastPath_Module_SpawnRate> SpawnRate;                                                // 0x01B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagara_NiagaraFastPath_Module_SpawnPerUnit> SpawnPerUnit;                                             // 0x01C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagara_NiagaraFastPath_Module_SpawnBurstInstantaneous> SpawnBurstInstantaneous;                                  // 0x01D0(0x0010) (Edit, ZeroConstructor)
	struct FNiagara_NiagaraFastPathAttributeNames      SpawnFastPathAttributeNames;                              // 0x01E0(0x0040)
	struct FNiagara_NiagaraFastPathAttributeNames      UpdateFastPathAttributeNames;                             // 0x0220(0x0040)
	struct FString                                     UniqueEmitterName;                                        // 0x0260(0x0010) (ZeroConstructor)
	TArray<class UNiagara_NiagaraRendererProperties*>  RendererProperties;                                       // 0x0270(0x0010) (ZeroConstructor)
	TArray<struct FNiagara_NiagaraEventScriptProperties> EventHandlerScriptProps;                                  // 0x0280(0x0010) (Edit, ZeroConstructor)
	class UNiagara_NiagaraScript*                      GPUComputeScript;                                         // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x0298(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagara_NiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagara_NiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagara_NiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagara_NiagaraFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagara_NiagaraComponent* STATIC_SpawnSystemAttached(class UNiagara_NiagaraSystem* SystemTemplate, class UEngine_SceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<FEngine_Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, FNiagara_Niagara_ENCPoolMethod PoolingMethod);
	class UNiagara_NiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagara_NiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, FNiagara_Niagara_ENCPoolMethod PoolingMethod);
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_StaticMeshComponent* StaticMeshComponent);
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_StaticMesh* StaticMesh);
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_SkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagara_NiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagara_NiagaraParameterCollection* Collection);
};


// Class Niagara.NiagaraRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagara_NiagaraRendererProperties : public UNiagaraCore_NiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0378 (0x03A8 - 0x0030)
class UNiagara_NiagaraLightRendererProperties : public UNiagara_NiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x0030(0x0001) (Edit)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideRenderingEnabled : 1;                            // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FNiagara_NiagaraVariableAttributeBinding    LightRenderingEnabledBinding;                             // 0x0048(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    LightExponentBinding;                                     // 0x00D8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    PositionBinding;                                          // 0x0168(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    ColorBinding;                                             // 0x01F8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RadiusBinding;                                            // 0x0288(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    VolumetricScatteringBinding;                              // 0x0318(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x06E8 (0x0718 - 0x0030)
class UNiagara_NiagaraMeshRendererProperties : public UNiagara_NiagaraRendererProperties
{
public:
	class UEngine_StaticMesh*                          ParticleMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraSortMode                  SortMode;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x003C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<struct FNiagara_NiagaraMeshMaterialOverride> OverrideMaterials;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	FNiagara_Niagara_ENiagaraMeshFacingMode            FacingMode;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FNiagara_NiagaraVariableAttributeBinding    PositionBinding;                                          // 0x0058(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    ColorBinding;                                             // 0x00E8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    VelocityBinding;                                          // 0x0178(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    MeshOrientationBinding;                                   // 0x0208(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    ScaleBinding;                                             // 0x0298(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterialBinding;                                   // 0x0328(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial1Binding;                                  // 0x03B8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial2Binding;                                  // 0x0448(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial3Binding;                                  // 0x04D8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    MaterialRandomBinding;                                    // 0x0568(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    CustomSortingBinding;                                     // 0x05F8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    NormalizedAgeBinding;                                     // 0x0688(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x00D0 (0x00F8 - 0x0028)
class UNiagara_NiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagara_NiagaraParameterCollection*         Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagara_NiagaraVariable>            OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagara_NiagaraParameterStore              ParameterStorage;                                         // 0x0040(0x00B8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x0030 (0x0058 - 0x0028)
class UNiagara_NiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagara_NiagaraVariable>            Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UNiagara_NiagaraParameterCollectionInstance* DefaultInstance;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x0218 - 0x0218)
class ANiagara_NiagaraPreviewBase : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}


	void SetSystem(class UNiagara_NiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000 (0x0028 - 0x0028)
class UNiagara_NiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}


	int Num();
	void ApplyToPreview(class UNiagara_NiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0038 - 0x0028)
class UNiagara_NiagaraPreviewAxis_InterpParamBase : public UNiagara_NiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0040 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamInt32 : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0040 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamFloat : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (0x0048 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamVector2D : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (0x0050 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamVector : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (0x0060 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamVector4 : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    Min;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0058 - 0x0038)
class UNiagara_NiagaraPreviewAxis_InterpParamLinearColor : public UNiagara_NiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0050 (0x0268 - 0x0218)
class ANiagara_NiagaraPreviewGrid : public AEngine_Actor
{
public:
	class UNiagara_NiagaraSystem*                      System;                                                   // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraPreviewGridResetMode      ResetMode;                                                // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UNiagara_NiagaraPreviewAxis*                 PreviewAxisX;                                             // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagara_NiagaraPreviewAxis*                 PreviewAxisY;                                             // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PreviewClass;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UEngine_ChildActorComponent*>         PreviewComponents;                                        // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0838 (0x0868 - 0x0030)
class UNiagara_NiagaraRibbonRendererProperties : public UNiagara_NiagaraRendererProperties
{
public:
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraRibbonFacingMode          FacingMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              UV0TilingDistance;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Scale;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Offset;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraRibbonAgeOffsetMode       UV0AgeOffsetMode;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              UV1TilingDistance;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Scale;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Offset;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraRibbonAgeOffsetMode       UV1AgeOffsetMode;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraRibbonDrawDirection       DrawDirection;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              CurveTension;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraRibbonTessellationMode    TessellationMode;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantFactor;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenSpaceTessellation;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FNiagara_NiagaraVariableAttributeBinding    PositionBinding;                                          // 0x0088(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    ColorBinding;                                             // 0x0118(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    VelocityBinding;                                          // 0x01A8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    NormalizedAgeBinding;                                     // 0x0238(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RibbonTwistBinding;                                       // 0x02C8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RibbonWidthBinding;                                       // 0x0358(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RibbonFacingBinding;                                      // 0x03E8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RibbonIdBinding;                                          // 0x0478(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    RibbonLinkOrderBinding;                                   // 0x0508(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    MaterialRandomBinding;                                    // 0x0598(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterialBinding;                                   // 0x0628(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial1Binding;                                  // 0x06B8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial2Binding;                                  // 0x0748(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial3Binding;                                  // 0x07D8(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x0528 (0x0550 - 0x0028)
class UNiagara_NiagaraScript : public UObject
{
public:
	FNiagara_Niagara_ENiagaraScriptUsage               Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FNiagara_NiagaraParameterStore              RapidIterationParameters;                                 // 0x0040(0x00B8)
	struct FNiagara_NiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                                // 0x00F8(0x00D8)
	TArray<struct FNiagara_NiagaraBoundParameter>      ScriptExecutionBoundParameters;                           // 0x01D0(0x0010) (ZeroConstructor)
	struct FNiagara_NiagaraVMExecutableDataId          CachedScriptVMId;                                         // 0x01E0(0x0050)
	struct FNiagara_NiagaraVMExecutableDataId          LastGeneratedVMId;                                        // 0x0230(0x0050)
	unsigned char                                      UnknownData01[0x198];                                     // 0x0280(0x0198) MISSED OFFSET
	struct FNiagara_NiagaraVMExecutableData            CachedScriptVM;                                           // 0x0418(0x0118)
	TArray<class UNiagara_NiagaraParameterCollection*> CachedParameterCollectionReferences;                      // 0x0530(0x0010) (ZeroConstructor)
	TArray<struct FNiagara_NiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                              // 0x0540(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void OnCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagara_NiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0030 (0x0068 - 0x0038)
class UNiagara_NiagaraSettings : public UEngine_DeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x09D8 (0x0A08 - 0x0030)
class UNiagara_NiagaraSpriteRendererProperties : public UNiagara_NiagaraRendererProperties
{
public:
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraSpriteAlignment           Alignment;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraSpriteFacingMode          FacingMode;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENiagaraSortMode                  SortMode;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x005C(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x005C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagara_NiagaraVariableAttributeBinding    PositionBinding;                                          // 0x0068(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    ColorBinding;                                             // 0x00F8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    VelocityBinding;                                          // 0x0188(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    SpriteRotationBinding;                                    // 0x0218(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    SpriteSizeBinding;                                        // 0x02A8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    SpriteFacingBinding;                                      // 0x0338(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    SpriteAlignmentBinding;                                   // 0x03C8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    SubImageIndexBinding;                                     // 0x0458(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterialBinding;                                   // 0x04E8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial1Binding;                                  // 0x0578(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial2Binding;                                  // 0x0608(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    DynamicMaterial3Binding;                                  // 0x0698(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    CameraOffsetBinding;                                      // 0x0728(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    UVScaleBinding;                                           // 0x07B8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    MaterialRandomBinding;                                    // 0x0848(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    CustomSortingBinding;                                     // 0x08D8(0x0090) (Edit)
	struct FNiagara_NiagaraVariableAttributeBinding    NormalizedAgeBinding;                                     // 0x0968(0x0090) (Edit)
	unsigned char                                      UnknownData03[0x10];                                      // 0x09F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x0350 (0x0380 - 0x0030)
class UNiagara_NiagaraSystem : public UEngine_FXSystemAsset
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) MISSED OFFSET
	bool                                               bDumpDebugSystemInfo;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	unsigned char                                      bFixedBounds : 1;                                         // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	FNiagara_Niagara_ENiagaraFastPathMode              FastPathMode;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FNiagara_NiagaraFastPath_Module_SystemScalability SystemScalability;                                        // 0x003C(0x0010) (Edit)
	struct FNiagara_NiagaraFastPath_Module_SystemLifeCycle SystemLifeCycle;                                          // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	TArray<struct FNiagara_NiagaraEmitterHandle>       EmitterHandles;                                           // 0x0050(0x0010) (ZeroConstructor)
	TArray<class UNiagara_NiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UNiagara_NiagaraScript*                      SystemSpawnScript;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraScript*                      SystemUpdateScript;                                       // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	struct FNiagara_NiagaraSystemCompiledData          SystemCompiledData;                                       // 0x0090(0x01A8)
	struct FNiagara_NiagaraUserRedirectionParameterStore ExposedParameters;                                        // 0x0238(0x0108)
	struct FBox                                        FixedBounds;                                              // 0x0340(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDeactivate;                                          // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x0370(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
