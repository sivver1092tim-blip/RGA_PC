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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMRMesh_MeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMesh_MRMeshComponent* Mesh);
};


// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0260 - 0x01F0)
class UMRMesh_MockDataMeshTrackerComponent : public UEngine_SceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                     // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               ScanWorld;                                                // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x0202(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FMRMesh_MRMesh_EMeshTrackerVertexColorMode         VertexColorMode;                                          // 0x0203(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UMRMesh_MRMeshComponent*                     MRMesh;                                                   // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr);
};


// Class MRMesh.MRMeshComponent
// 0x0070 (0x0450 - 0x03E0)
class UMRMesh_MRMeshComponent : public UEngine_PrimitiveComponent
{
public:
	class UEngine_MaterialInterface*                   Material;                                                 // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x03E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateCollisionMesh;                                // 0x03EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03EB(0x0005) MISSED OFFSET
	class UEngine_BodySetup*                           CachedBodySetup;                                          // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UEngine_BodySetup*>                   BodySetups;                                               // 0x03F8(0x0010) (ZeroConstructor, Transient)
	class UEngine_MaterialInterface*                   WireframeMaterial;                                        // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0410(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
