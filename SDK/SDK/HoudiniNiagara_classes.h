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

// Class HoudiniNiagara.HoudiniCSV
// 0x00A8 (0x00D0 - 0x0028)
class UHoudiniNiagara_HoudiniCSV : public UObject
{
public:
	struct FString                                     Filename;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                NumberOfRows;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumberOfColumns;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumberOfPoints;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     SourceTitleRow;                                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             ColumnTitleArray;                                         // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<float>                                      FloatCSVData;                                             // 0x0068(0x0010) (ZeroConstructor)
	TArray<float>                                      SpawnTimes;                                               // 0x0078(0x0010) (ZeroConstructor)
	TArray<float>                                      LifeValues;                                               // 0x0088(0x0010) (ZeroConstructor)
	TArray<int>                                        PointTypes;                                               // 0x0098(0x0010) (ZeroConstructor)
	TArray<int>                                        SpecialAttributesColumnIndexes;                           // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FHoudiniNiagara_PointIndexes>        PointValueIndexes;                                        // 0x00B8(0x0010) (ZeroConstructor)
	bool                                               UseCustomTitleRow;                                        // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniNiagara.HoudiniCSV");
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniNiagara.HoudiniCSV");
		return ptr;
	}


	bool GetVelocityValue(int RowIndex, struct FVector* Value);
	bool GetVectorValue(int RowIndex, int colIndex, bool DoSwap, bool DoScale, struct FVector* Value);
	bool GetTimeValue(int RowIndex, float* Value);
	bool GetRowIndexesForPointAtTime(int POINTID, float desiredTime, int* PrevIndex, int* NextIndex, float* PrevWeight);
	bool GetPositionValue(int RowIndex, struct FVector* Value);
	bool GetPointVectorValueAtTime(int POINTID, int ColumnIndex, float desiredTime, bool DoSwap, bool DoScale, struct FVector* Vector);
	bool GetPointValueAtTime(int POINTID, int ColumnIndex, float desiredTime, float* Value);
	bool GetPointType(int POINTID, int* Value);
	bool GetPointPositionAtTime(int POINTID, float desiredTime, struct FVector* Vector);
	bool GetPointLifeAtTime(int POINTID, float desiredTime, float* Value);
	bool GetPointLife(int POINTID, float* Value);
	bool GetPointIDsToSpawnAtTime(float desiredTime, int* MinID, int* MaxID, int* count, int* LastSpawnedPointID, float* LastSpawnTime);
	int GetNumberOfRows();
	int GetNumberOfPoints();
	int GetNumberOfColumns();
	bool GetNormalValue(int RowIndex, struct FVector* Value);
	bool GetLastRowIndexAtTime(float desiredTime, int* lastRowIndex);
	bool GetLastPointIDToSpawnAtTime(float Time, int* lastIndex);
	bool GetImpulseValue(int RowIndex, float* Value);
	bool GetFloatValueForString(int RowIndex, const struct FString& ColumnTitle, float* Value);
	bool GetFloatValue(int RowIndex, int colIndex, float* Value);
	bool GetColumnIndexFromString(const struct FString& ColumnTitle, int* ColumnIndex);
	bool GetColorValue(int RowIndex, struct FLinearColor* Value);
};


// Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV
// 0x0010 (0x0048 - 0x0038)
class UHoudiniNiagara_NiagaraDataInterfaceHoudiniCSV : public UNiagara_NiagaraDataInterface
{
public:
	class UHoudiniNiagara_HoudiniCSV*                  HoudiniCSVAsset;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LastSpawnedPointID;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTime;                                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV");
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
