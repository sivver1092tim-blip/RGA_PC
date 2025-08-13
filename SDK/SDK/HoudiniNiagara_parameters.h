#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HoudiniNiagara.HoudiniCSV.GetVelocityValue
struct UHoudiniNiagara_HoudiniCSV_GetVelocityValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetVectorValue
struct UHoudiniNiagara_HoudiniCSV_GetVectorValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                colIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DoSwap;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               DoScale;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetTimeValue
struct UHoudiniNiagara_HoudiniCSV_GetTimeValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime
struct UHoudiniNiagara_HoudiniCSV_GetRowIndexesForPointAtTime_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                PrevIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PrevWeight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPositionValue
struct UHoudiniNiagara_HoudiniCSV_GetPositionValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime
struct UHoudiniNiagara_HoudiniCSV_GetPointVectorValueAtTime_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ColumnIndex;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DoSwap;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               DoScale;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime
struct UHoudiniNiagara_HoudiniCSV_GetPointValueAtTime_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ColumnIndex;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointType
struct UHoudiniNiagara_HoudiniCSV_GetPointType_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime
struct UHoudiniNiagara_HoudiniCSV_GetPointPositionAtTime_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime
struct UHoudiniNiagara_HoudiniCSV_GetPointLifeAtTime_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointLife
struct UHoudiniNiagara_HoudiniCSV_GetPointLife_Params
{
	int                                                POINTID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime
struct UHoudiniNiagara_HoudiniCSV_GetPointIDsToSpawnAtTime_Params
{
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                MinID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LastSpawnedPointID;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows
struct UHoudiniNiagara_HoudiniCSV_GetNumberOfRows_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints
struct UHoudiniNiagara_HoudiniCSV_GetNumberOfPoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns
struct UHoudiniNiagara_HoudiniCSV_GetNumberOfColumns_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetNormalValue
struct UHoudiniNiagara_HoudiniCSV_GetNormalValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime
struct UHoudiniNiagara_HoudiniCSV_GetLastRowIndexAtTime_Params
{
	float                                              desiredTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                lastRowIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime
struct UHoudiniNiagara_HoudiniCSV_GetLastPointIDToSpawnAtTime_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                lastIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetImpulseValue
struct UHoudiniNiagara_HoudiniCSV_GetImpulseValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString
struct UHoudiniNiagara_HoudiniCSV_GetFloatValueForString_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ColumnTitle;                                              // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetFloatValue
struct UHoudiniNiagara_HoudiniCSV_GetFloatValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                colIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString
struct UHoudiniNiagara_HoudiniCSV_GetColumnIndexFromString_Params
{
	struct FString                                     ColumnTitle;                                              // (Parm, ZeroConstructor)
	int                                                ColumnIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniNiagara.HoudiniCSV.GetColorValue
struct UHoudiniNiagara_HoudiniCSV_GetColorValue_Params
{
	int                                                RowIndex;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
