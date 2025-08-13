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

// Enum HoudiniNiagara.EHoudiniAttributes
enum class FHoudiniNiagara_HoudiniNiagara_EHoudiniAttributes : uint8_t
{
	HOUDINI_ATTR_BEGIN             = 0,
	Position                       = 1,
	Normal                         = 2,
	Time                           = 3,
	POINTID                        = 4,
	ALIVE                          = 5,
	LIFE                           = 6,
	Color                          = 7,
	ALPHA                          = 8,
	Velocity                       = 9,
	Type                           = 10,
	Impulse                        = 11,
	HOUDINI_ATTR_SIZE              = 12,
	HOUDINI_ATTR_END               = 13,
	EHoudiniAttributes_MAX         = 14
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoudiniNiagara.PointIndexes
// 0x0010
struct FHoudiniNiagara_PointIndexes
{
	TArray<int>                                        RowIndexes;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniNiagara.HoudiniEvent
// 0x0048
struct FHoudiniNiagara_HoudiniEvent
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                POINTID;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LIFE;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
