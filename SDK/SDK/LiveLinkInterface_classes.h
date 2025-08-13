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

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkFrameTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x00B0 (0x00D8 - 0x0028)
class ULiveLinkInterface_LiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UClass*                                      Role;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkInterface_LiveLinkSubjectName> Subjects;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class ULiveLinkInterface_LiveLinkFrameTranslator*> FrameTranslators;                                         // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkFramePreProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkRole : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkBasicRole : public ULiveLinkInterface_LiveLinkRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkAnimationRole : public ULiveLinkInterface_LiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkTransformRole : public ULiveLinkInterface_LiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkCameraRole : public ULiveLinkInterface_LiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkController
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkController : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0050 (0x0078 - 0x0028)
class ULiveLinkInterface_LiveLinkSourceSettings : public UObject
{
public:
	FLiveLinkInterface_LiveLinkInterface_ELiveLinkSourceMode Mode;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLiveLinkInterface_LiveLinkSourceBufferManagementSettings BufferSettings;                                           // 0x002C(0x0030) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     ConnectionString;                                         // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Factory;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (0x00C8 - 0x0078)
class ULiveLinkInterface_LiveLinkCurveRemapSettings : public ULiveLinkInterface_LiveLinkSourceSettings
{
public:
	struct FLiveLinkInterface_LiveLinkCurveConversionSettings CurveConversionSettings;                                  // 0x0078(0x0050) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkInterface_LiveLinkLightRole : public ULiveLinkInterface_LiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkInterface_LiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkInterface_LiveLinkFramePreProcessor*> PreProcessors;                                            // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
	class ULiveLinkInterface_LiveLinkFrameInterpolationProcessor* InterpolationProcessor;                                   // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ULiveLinkInterface_LiveLinkFrameTranslator*> Translators;                                              // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UClass*                                      Role;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
