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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayTags_BlueprintGameplayTagLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	bool STATIC_RemoveGameplayTag(const struct FGameplayTags_GameplayTag& Tag, struct FGameplayTags_GameplayTagContainer* TagContainer);
	bool STATIC_NotEqual_TagTag(const struct FGameplayTags_GameplayTag& A, const struct FString& B);
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FString& B);
	bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FGameplayTags_GameplayTagContainer& B);
	bool STATIC_NotEqual_GameplayTag(const struct FGameplayTags_GameplayTag& A, const struct FGameplayTags_GameplayTag& B);
	bool STATIC_MatchesTag(const struct FGameplayTags_GameplayTag& TagOne, const struct FGameplayTags_GameplayTag& TagTwo, bool bExactMatch);
	bool STATIC_MatchesAnyTags(const struct FGameplayTags_GameplayTag& TagOne, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTags_GameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& Value);
	struct FGameplayTags_GameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTags_GameplayTag& Value);
	struct FGameplayTags_GameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTags_GameplayTagQuery& TagQuery);
	struct FGameplayTags_GameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTags_GameplayTag& SingleTag);
	struct FGameplayTags_GameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTags_GameplayTag> GameplayTags);
	bool STATIC_IsTagQueryEmpty(const struct FGameplayTags_GameplayTagQuery& TagQuery);
	bool STATIC_IsGameplayTagValid(const struct FGameplayTags_GameplayTag& GameplayTag);
	bool STATIC_HasTag(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTag& Tag, bool bExactMatch);
	bool STATIC_HasAnyTags(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllTags(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTags_GameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTags_GameplayTagContainer& OtherContainer);
	struct FName STATIC_GetTagName(const struct FGameplayTags_GameplayTag& GameplayTag);
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTags_GameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTags_GameplayTag& GameplayTag);
	void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTags_GameplayTagQuery& GameplayTagQuery, TArray<class AEngine_Actor*>* OutActors);
	bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FGameplayTags_GameplayTagContainer& B);
	bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTags_GameplayTag& A, const struct FGameplayTags_GameplayTag& B);
	bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTags_GameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTags_GameplayTag& Tag);
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagQuery& TagQuery);
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTags_GameplayTag>* GameplayTags);
	void STATIC_AppendGameplayTagContainers(const struct FGameplayTags_GameplayTagContainer& InTagContainer, struct FGameplayTags_GameplayTagContainer* InOutTagContainer);
	void STATIC_AddGameplayTag(const struct FGameplayTags_GameplayTag& Tag, struct FGameplayTags_GameplayTagContainer* TagContainer);
};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTags_GameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	bool HasMatchingGameplayTag(const struct FGameplayTags_GameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTags_GameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(const struct FGameplayTags_GameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTags_GameplayTagContainer* TagContainer);
};


// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UGameplayTags_EditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UGameplayTags_EditableGameplayTagQueryExpression* RootExpression;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTags_GameplayTagQuery              TagQueryExportText_Helper;                                // 0x0050(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_AnyTagsMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	struct FGameplayTags_GameplayTagContainer          Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_AllTagsMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	struct FGameplayTags_GameplayTagContainer          Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_NoTagsMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	struct FGameplayTags_GameplayTagContainer          Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_AnyExprMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	TArray<class UGameplayTags_EditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_AllExprMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	TArray<class UGameplayTags_EditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UGameplayTags_EditableGameplayTagQueryExpression_NoExprMatch : public UGameplayTags_EditableGameplayTagQueryExpression
{
public:
	TArray<class UGameplayTags_EditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsManager
// 0x01E8 (0x0210 - 0x0028)
class UGameplayTags_GameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET
	TArray<struct FGameplayTags_GameplayTagSource>     TagSources;                                               // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x00D0(0x00E0) MISSED OFFSET
	TArray<class UEngine_DataTable*>                   GameplayTagTables;                                        // 0x01B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTags_GameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTags_GameplayTagTableRow>   GameplayTagList;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTags_RestrictedGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTags_RestrictedGameplayTagTableRow> RestrictedGameplayTagList;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
class UGameplayTags_GameplayTagsSettings : public UGameplayTags_GameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               WarnOnInvalidTags;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               FastReplication;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     InvalidTagCharacters;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTags_GameplayTagCategoryRemap> CategoryRemapping;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTags_GameplayTagRedirect>   GameplayTagRedirects;                                     // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               CommonlyReplicatedTags;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	int                                                NumBitsForContainerSize;                                  // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NetIndexFirstBitSegment;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FGameplayTags_RestrictedConfigInfo>  RestrictedConfigFiles;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayTags_GameplayTagsDeveloperSettings : public UObject
{
public:
	struct FString                                     DeveloperConfigName;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
