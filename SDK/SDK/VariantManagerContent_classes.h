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

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (0x0090 - 0x0028)
class UVariantManagerContent_LevelVariantSets : public UObject
{
public:
	class UEngine_BlueprintGeneratedClass*             DirectorClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UVariantManagerContent_VariantSet*>   VariantSets;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}


	class UVariantManagerContent_VariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantManagerContent_VariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0018 (0x0230 - 0x0218)
class AVariantManagerContent_LevelVariantSetsActor : public AEngine_Actor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0218(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class UVariantManagerContent_LevelVariantSets* InVariantSets);
	class UVariantManagerContent_LevelVariantSets* GetLevelVariantSets(bool bLoad);
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (0x0040 - 0x0028)
class UVariantManagerContent_LevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x0180 (0x01A8 - 0x0028)
class UVariantManagerContent_PropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<class UProperty*>                           Properties;                                               // 0x0080(0x0010) (ZeroConstructor, Deprecated)
	TArray<int>                                        PropertyIndices;                                          // 0x0090(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FVariantManagerContent_CapturedPropSegment> CapturedPropSegments;                                     // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     FullDisplayString;                                        // 0x00B0(0x0010) (ZeroConstructor)
	struct FName                                       PropertySetterName;                                       // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x00C8(0x0050) (ZeroConstructor)
	bool                                               bHasRecordedData;                                         // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class UClass*                                      LeafPropertyClass;                                        // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ValueBytes;                                               // 0x0128(0x0010) (ZeroConstructor)
	FVariantManagerContent_VariantManagerContent_EPropertyValueCategory PropCategory;                                             // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6F];                                      // 0x0139(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x01A8 - 0x01A8)
class UVariantManagerContent_PropertyValueTransform : public UVariantManagerContent_PropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x01A8 - 0x01A8)
class UVariantManagerContent_PropertyValueVisibility : public UVariantManagerContent_PropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueColor
// 0x0000 (0x01A8 - 0x01A8)
class UVariantManagerContent_PropertyValueColor : public UVariantManagerContent_PropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x01A8 - 0x01A8)
class UVariantManagerContent_PropertyValueMaterial : public UVariantManagerContent_PropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueOption
// 0x0000 (0x01A8 - 0x01A8)
class UVariantManagerContent_PropertyValueOption : public UVariantManagerContent_PropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}

};


// Class VariantManagerContent.SwitchActor
// 0x0020 (0x0238 - 0x0218)
class AVariantManagerContent_SwitchActor : public AEngine_Actor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0218(0x0018) MISSED OFFSET
	class UEngine_SceneComponent*                      SceneComponent;                                           // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}


	void SelectOption(int OptionIndex);
	int GetSelectedOption();
	TArray<class AEngine_Actor*> GetOptions();
};


// Class VariantManagerContent.Variant
// 0x0040 (0x0068 - 0x0028)
class UVariantManagerContent_Variant : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TArray<class UVariantManagerContent_VariantObjectBinding*> ObjectBindings;                                           // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	int GetNumActors();
	struct FText GetDisplayText();
	class AEngine_Actor* GetActor(int ActorIndex);
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0058 (0x0080 - 0x0028)
class UVariantManagerContent_VariantObjectBinding : public UObject
{
public:
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0028(0x0018) (ZeroConstructor)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0040(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UVariantManagerContent_PropertyValue*> CapturedProperties;                                       // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FVariantManagerContent_FunctionCaller> FunctionCallers;                                          // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0048 (0x0070 - 0x0028)
class UVariantManagerContent_VariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	bool                                               bExpanded;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UVariantManagerContent_Variant*>      Variants;                                                 // 0x0060(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}


	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariantManagerContent_Variant* GetVariantByName(const struct FString& VariantName);
	class UVariantManagerContent_Variant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
