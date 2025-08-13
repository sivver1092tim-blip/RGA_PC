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

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkComponents_LiveLinkControllerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkCameraController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkComponents_LiveLinkCameraController : public ULiveLinkComponents_LiveLinkControllerBase
{
public:
	struct FEngine_ComponentReference                  ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkComponents_LiveLinkTransformControllerData TransformData;                                            // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkCameraController");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkCameraController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentController
// 0x0038 (0x00E8 - 0x00B0)
class ULiveLinkComponents_LiveLinkComponentController : public UEngine_ActorComponent
{
public:
	struct FLiveLinkInterface_LiveLinkSubjectRepresentation SubjectRepresentation;                                    // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULiveLinkComponents_LiveLinkControllerBase*  Controller;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData)
	bool                                               bUpdateInEditor;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                        // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkComponents_LiveLinkLightController : public ULiveLinkComponents_LiveLinkControllerBase
{
public:
	struct FEngine_ComponentReference                  ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkComponents_LiveLinkTransformControllerData TransformData;                                            // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkComponents_LiveLinkTransformController : public ULiveLinkComponents_LiveLinkControllerBase
{
public:
	struct FEngine_ComponentReference                  ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkComponents_LiveLinkTransformControllerData TransformData;                                            // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
