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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (0x00B0 - 0x00B0)
class UMagicLeapHandMeshing_MagicLeapHandMeshingComponent : public UEngine_ActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		return ptr;
	}


	bool DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
};


// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		return ptr;
	}


	bool STATIC_DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
	bool STATIC_DestroyClient();
	bool STATIC_CreateClient();
	bool STATIC_ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
