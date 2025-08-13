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

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x0220 - 0x0218)
class AFieldSystemEngine_FieldSystemActor : public AEngine_Actor
{
public:
	class UFieldSystemEngine_FieldSystemComponent*     FieldSystemComponent;                                     // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystem
// 0x0010 (0x0038 - 0x0028)
class UFieldSystemEngine_FieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_FieldSystemMetaData : public UEngine_ActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_FieldSystemMetaDataIteration : public UFieldSystemEngine_FieldSystemMetaData
{
public:
	int                                                Iterations;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}


	class UFieldSystemEngine_FieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);
};


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_FieldSystemMetaDataProcessingResolution : public UFieldSystemEngine_FieldSystemMetaData
{
public:
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldResolutionType> ResolutionType;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}


	class UFieldSystemEngine_FieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldResolutionType> ResolutionType);
};


// Class FieldSystemEngine.FieldNodeBase
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_FieldNodeBase : public UEngine_ActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_FieldNodeInt : public UFieldSystemEngine_FieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_FieldNodeFloat : public UFieldSystemEngine_FieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_FieldNodeVector : public UFieldSystemEngine_FieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}

};


// Class FieldSystemEngine.UniformInteger
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_UniformInteger : public UFieldSystemEngine_FieldNodeInt
{
public:
	int                                                Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}


	class UFieldSystemEngine_UniformInteger* SetUniformInteger(int Magnitude);
};


// Class FieldSystemEngine.RadialIntMask
// 0x0020 (0x00D0 - 0x00B0)
class UFieldSystemEngine_RadialIntMask : public UFieldSystemEngine_FieldNodeInt
{
public:
	float                                              Radius;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_ESetMaskConditionType> SetMaskCondition;                                         // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}


	class UFieldSystemEngine_RadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<FFieldSystemCore_FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn);
};


// Class FieldSystemEngine.UniformScalar
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_UniformScalar : public UFieldSystemEngine_FieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}


	class UFieldSystemEngine_UniformScalar* SetUniformScalar(float Magnitude);
};


// Class FieldSystemEngine.RadialFalloff
// 0x0028 (0x00D8 - 0x00B0)
class UFieldSystemEngine_RadialFalloff : public UFieldSystemEngine_FieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}


	class UFieldSystemEngine_RadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff);
};


// Class FieldSystemEngine.FieldSystemComponent
// 0x0040 (0x0420 - 0x03E0)
class UFieldSystemEngine_FieldSystemComponent : public UEngine_PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x03E0(0x0010) UNKNOWN PROPERTY: ArrayProperty FieldSystemEngine.FieldSystemComponent.SupportedSolvers
	unsigned char                                      UnknownData02[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}


	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemEngine_FieldSystemMetaData* MetaData, class UFieldSystemEngine_FieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddFieldCommand(bool Enabled, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemEngine_FieldSystemMetaData* MetaData, class UFieldSystemEngine_FieldNodeBase* Field);
};


// Class FieldSystemEngine.PlaneFalloff
// 0x0030 (0x00E0 - 0x00B0)
class UFieldSystemEngine_PlaneFalloff : public UFieldSystemEngine_FieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}


	class UFieldSystemEngine_PlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff);
};


// Class FieldSystemEngine.BoxFalloff
// 0x0050 (0x0100 - 0x00B0)
class UFieldSystemEngine_BoxFalloff : public UFieldSystemEngine_FieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}


	class UFieldSystemEngine_BoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff);
};


// Class FieldSystemEngine.NoiseField
// 0x0040 (0x00F0 - 0x00B0)
class UFieldSystemEngine_NoiseField : public UFieldSystemEngine_FieldNodeFloat
{
public:
	float                                              MinRange;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}


	class UFieldSystemEngine_NoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
};


// Class FieldSystemEngine.UniformVector
// 0x0010 (0x00C0 - 0x00B0)
class UFieldSystemEngine_UniformVector : public UFieldSystemEngine_FieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}


	class UFieldSystemEngine_UniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
};


// Class FieldSystemEngine.RadialVector
// 0x0010 (0x00C0 - 0x00B0)
class UFieldSystemEngine_RadialVector : public UFieldSystemEngine_FieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}


	class UFieldSystemEngine_RadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};


// Class FieldSystemEngine.OperatorField
// 0x0020 (0x00D0 - 0x00B0)
class UFieldSystemEngine_OperatorField : public UFieldSystemEngine_FieldNodeBase
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UFieldSystemEngine_FieldNodeBase*            RightField;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            LeftField;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldOperationType> Operation;                                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}


	class UFieldSystemEngine_OperatorField* SetOperatorField(float Magnitude, class UFieldSystemEngine_FieldNodeBase* RightField, class UFieldSystemEngine_FieldNodeBase* LeftField, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldOperationType> Operation);
};


// Class FieldSystemEngine.ToIntegerField
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_ToIntegerField : public UFieldSystemEngine_FieldNodeInt
{
public:
	class UFieldSystemEngine_FieldNodeFloat*           FloatField;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}


	class UFieldSystemEngine_ToIntegerField* SetToIntegerField(class UFieldSystemEngine_FieldNodeFloat* FloatField);
};


// Class FieldSystemEngine.ToFloatField
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_ToFloatField : public UFieldSystemEngine_FieldNodeFloat
{
public:
	class UFieldSystemEngine_FieldNodeInt*             IntField;                                                 // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}


	class UFieldSystemEngine_ToFloatField* SetToFloatField(class UFieldSystemEngine_FieldNodeInt* IntegerField);
};


// Class FieldSystemEngine.RandomVector
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemEngine_RandomVector : public UFieldSystemEngine_FieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}


	class UFieldSystemEngine_RandomVector* SetRandomVector(float Magnitude);
};


// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemEngine_ReturnResultsTerminal : public UFieldSystemEngine_FieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}


	class UFieldSystemEngine_ReturnResultsTerminal* SetReturnResultsTerminal();
};


// Class FieldSystemEngine.CullingField
// 0x0018 (0x00C8 - 0x00B0)
class UFieldSystemEngine_CullingField : public UFieldSystemEngine_FieldNodeBase
{
public:
	class UFieldSystemEngine_FieldNodeBase*            Culling;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            Field;                                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldCullingOperationType> Operation;                                                // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}


	class UFieldSystemEngine_CullingField* SetCullingField(class UFieldSystemEngine_FieldNodeBase* Culling, class UFieldSystemEngine_FieldNodeBase* Field, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldCullingOperationType> Operation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
