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

// Enum GameplayTags.EGameplayTagQueryExprType
enum class FGameplayTags_GameplayTags_EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class FGameplayTags_GameplayTags_EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class FGameplayTags_GameplayTags_EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagSourceType
enum class FGameplayTags_GameplayTags_EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6
};


// Enum GameplayTags.EGameplayTagSelectionType
enum class FGameplayTags_GameplayTags_EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTags_GameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
struct FGameplayTags_GameplayTagContainer
{
	TArray<struct FGameplayTags_GameplayTag>           GameplayTags;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame)
	TArray<struct FGameplayTags_GameplayTag>           ParentTags;                                               // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTags_GameplayTagQuery
{
	int                                                TokenStreamVersion;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTags_GameplayTag>           TagDictionary;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AutoDescription;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0020
struct FGameplayTags_GameplayTagSource
{
	struct FName                                       SourceName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGameplayTags_GameplayTags_EGameplayTagSourceType  SourceType;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UGameplayTags_GameplayTagsList*              SourceTagList;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameplayTags_RestrictedGameplayTagsList*    SourceRestrictedTagList;                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0018 (0x0020 - 0x0008)
struct FGameplayTags_GameplayTagTableRow : public FEngine_TableRowBase
{
	struct FName                                       Tag;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DevComment;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0008 (0x0028 - 0x0020)
struct FGameplayTags_RestrictedGameplayTagTableRow : public FGameplayTags_GameplayTagTableRow
{
	bool                                               bAllowNonRestrictedChildren;                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020
struct FGameplayTags_GameplayTagCategoryRemap
{
	struct FString                                     BaseCategory;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             RemapCategories;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0010
struct FGameplayTags_GameplayTagRedirect
{
	struct FName                                       OldTagName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewTagName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0020
struct FGameplayTags_RestrictedConfigInfo
{
	struct FString                                     RestrictedConfigName;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             Owners;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001
struct FGameplayTags_GameplayTagCreationWidgetHelper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0010
struct FGameplayTags_GameplayTagReferenceHelper
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0050
struct FGameplayTags_GameplayTagNode
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
