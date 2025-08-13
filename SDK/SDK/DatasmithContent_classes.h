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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (0x0030 - 0x0028)
class UDatasmithContent_DatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (0x00D0 - 0x0030)
class UDatasmithContent_DatasmithActorTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Layers
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Tags

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithAdditionalData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x0058 (0x0270 - 0x0218)
class ADatasmithContent_DatasmithAreaLightActor : public AEngine_Actor
{
public:
	FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorType LightType;                                                // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorShape LightShape;                                               // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x021A(0x0002) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x021C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ELightUnits                         IntensityUnits;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x022C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_TextureLightProfile*                 IESTexture;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIESBrightness;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightInnerAngle;                                      // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightOuterAngle;                                      // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0070 (0x00A0 - 0x0030)
class UDatasmithContent_DatasmithAreaLightActorTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorType LightType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorShape LightShape;                                               // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ELightUnits                         IntensityUnits;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              Temperature;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithAreaLightActorTemplate.IESTexture
	bool                                               bUseIESBrightness;                                        // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithAssetImportData : public UEngine_AssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithStaticMeshImportData : public UDatasmithContent_DatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithStaticMeshCADImportData : public UDatasmithContent_DatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithSceneImportData : public UEngine_AssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithTranslatedSceneImportData : public UDatasmithContent_DatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithCADImportSceneData : public UDatasmithContent_DatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithMDLSceneImportData : public UDatasmithContent_DatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (0x0070 - 0x0028)
class UDatasmithContent_DatasmithGLTFSceneImportData : public UDatasmithContent_DatasmithSceneImportData
{
public:
	struct FString                                     Generator;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Version;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     Author;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     License;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Source;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithContent_DatasmithStaticMeshGLTFImportData : public UDatasmithContent_DatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x0020 (0x0048 - 0x0028)
class UDatasmithContent_DatasmithFBXSceneImportData : public UDatasmithContent_DatasmithSceneImportData
{
public:
	bool                                               bGenerateLightmapUVs;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TexturesDir;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      IntermediateSerialization;                                // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bColorizeMaterials;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithFBXSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithFBXSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithDeltaGenAssetImportData : public UDatasmithContent_DatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0048 (0x0090 - 0x0048)
class UDatasmithContent_DatasmithDeltaGenSceneImportData : public UDatasmithContent_DatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRemoveInvisibleNodes;                                    // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bSimplifyNodeHierarchy;                                   // 0x004B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bImportVar;                                               // 0x004C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     VarPath;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportPos;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     PosPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportTml;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     TmlPath;                                                  // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithVREDAssetImportData : public UDatasmithContent_DatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0060 (0x00A8 - 0x0048)
class UDatasmithContent_DatasmithVREDSceneImportData : public UDatasmithContent_DatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOptimizeDuplicatedNodes;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bImportMats;                                              // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     MatsPath;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportVar;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCleanVar;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FString                                     VarPath;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportLightInfo;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     LightInfoPath;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bImportClipInfo;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     ClipInfoPath;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithIFCSceneImportData : public UDatasmithContent_DatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (0x0038 - 0x0028)
class UDatasmithContent_DatasmithStaticMeshIFCImportData : public UDatasmithContent_DatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceGlobalId;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UDatasmithContent_DatasmithAssetUserData : public UEngine_AssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                 // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0030 (0x0060 - 0x0030)
class UDatasmithContent_DatasmithCineCameraActorTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	struct FDatasmithContent_DatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                   // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0060 (0x0090 - 0x0030)
class UDatasmithContent_DatasmithCineCameraComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	struct FDatasmithContent_DatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithContent_DatasmithCameraLensSettingsTemplate LensSettings;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithContent_DatasmithCameraFocusSettingsTemplate FocusSettings;                                            // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocalLength;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FDatasmithContent_DatasmithPostProcessSettingsTemplate PostProcessSettings;                                      // 0x0050(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContent_DatasmithContentBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	class UDatasmithContent_DatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);
};


// Class DatasmithContent.DatasmithCustomActionBase
// 0x0008 (0x0030 - 0x0028)
class UDatasmithContent_DatasmithCustomActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0010 (0x0228 - 0x0218)
class ADatasmithContent_DatasmithImportedSequencesActor : public AEngine_Actor
{
public:
	TArray<class ULevelSequence_LevelSequence*>        ImportedSequences;                                        // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}


	void PlayLevelSequence(class ULevelSequence_LevelSequence* SequenceToPlay);
};


// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (0x0038 - 0x0028)
class UDatasmithContent_DatasmithCommonTessellationOptions : public UObject
{
public:
	struct FDatasmithContent_DatasmithTessellationOptions Options;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportOptions
// 0x0050 (0x0078 - 0x0028)
class UDatasmithContent_DatasmithImportOptions : public UObject
{
public:
	FDatasmithContent_DatasmithContent_EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                                      // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                                   // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                                    // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportActorPolicy StaticMeshActorImportPolicy;                              // 0x002B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportActorPolicy LightImportPolicy;                                        // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportActorPolicy CameraImportPolicy;                                       // 0x002D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportActorPolicy OtherActorImportPolicy;                                   // 0x002E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportMaterialQuality MaterialQuality;                                          // 0x002F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	struct FDatasmithContent_DatasmithImportBaseOptions BaseOptions;                                              // 0x0034(0x0014) (Edit, BlueprintVisible, Config)
	struct FDatasmithContent_DatasmithReimportOptions  ReimportOptions;                                          // 0x0048(0x0002) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FString                                     Filename;                                                 // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FilePath;                                                 // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithContent_DatasmithLandscapeTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	class UEngine_MaterialInterface*                   LandscapeMaterial;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0068 - 0x0030)
class UDatasmithContent_DatasmithLightComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                             // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned char                                      CastShadows : 1;                                          // 0x0034(0x0001)
	unsigned char                                      bUseTemperature : 1;                                      // 0x0034(0x0001)
	unsigned char                                      bUseIESBrightness : 1;                                    // 0x0034(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   LightFunctionMaterial;                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureLightProfile*                 IESTexture;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0140 (0x0170 - 0x0030)
class UDatasmithContent_DatasmithMaterialInstanceTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	TMap<struct FName, float>                          ScalarParameterValues;                                    // 0x0030(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                    // 0x0080(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithMaterialInstanceTemplate.TextureParameterValues
	struct FDatasmithContent_DatasmithStaticParameterSetTemplate StaticParameters;                                         // 0x0120(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithContent_DatasmithPointLightComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	FEngine_Engine_ELightUnits                         IntensityUnits;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              SourceRadius;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0050 (0x0080 - 0x0030)
class UDatasmithContent_DatasmithPostProcessVolumeTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	struct FDatasmithContent_DatasmithPostProcessSettingsTemplate Settings;                                                 // 0x0030(0x0040)
	unsigned char                                      bEnabled : 1;                                             // 0x0070(0x0001)
	unsigned char                                      bUnbound : 1;                                             // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0071(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0008 (0x0030 - 0x0028)
class UDatasmithContent_DatasmithScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0270 - 0x0218)
class ADatasmithContent_DatasmithSceneActor : public AEngine_Actor
{
public:
	class UDatasmithContent_DatasmithScene*            Scene;                                                    // 0x0218(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0220(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithSceneActor.RelatedActors

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00B0 (0x00E0 - 0x0030)
class UDatasmithContent_DatasmithSceneComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0030) (IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EComponentMobility>     Mobility;                                                 // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0061(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithSceneComponentTemplate.AttachParent
	unsigned char                                      UnknownData02[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithSceneComponentTemplate.Tags

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0040 - 0x0030)
class UDatasmithContent_DatasmithSkyLightComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	TEnumAsByte<FEngine_Engine_ESkyLightSourceType>    SourceType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                CubemapResolution;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEngine_TextureCube*                         Cubemap;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0038 - 0x0030)
class UDatasmithContent_DatasmithSpotLightComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0018 (0x0048 - 0x0030)
class UDatasmithContent_DatasmithStaticMeshComponentTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	class UEngine_StaticMesh*                          StaticMesh;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_MaterialInterface*>           OverrideMaterials;                                        // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00A8 - 0x0030)
class UDatasmithContent_DatasmithStaticMeshTemplate : public UDatasmithContent_DatasmithObjectTemplate
{
public:
	struct FDatasmithContent_DatasmithMeshSectionInfoMapTemplate SectionInfoMap;                                           // 0x0030(0x0050) (Edit, EditConst)
	int                                                LightMapCoordinateIndex;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDatasmithContent_DatasmithMeshBuildSettingsTemplate> BuildSettings;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FDatasmithContent_DatasmithStaticMaterialTemplate> StaticMaterials;                                          // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
