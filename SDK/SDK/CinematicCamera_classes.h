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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0248 - 0x0218)
class ACinematicCamera_CameraRig_Crane : public AEngine_Actor
{
public:
	float                                              CranePitch;                                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	class UEngine_SceneComponent*                      TransformComponent;                                       // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEngine_SceneComponent*                      CraneYawControl;                                          // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEngine_SceneComponent*                      CranePitchControl;                                        // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEngine_SceneComponent*                      CraneCameraMount;                                         // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0238 - 0x0218)
class ACinematicCamera_CameraRig_Rail : public AEngine_Actor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	class UEngine_SceneComponent*                      TransformComponent;                                       // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEngine_SplineComponent*                     RailSplineComponent;                                      // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEngine_SceneComponent*                      RailCameraMount;                                          // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}


	class UEngine_SplineComponent* GetRailSplineComponent();
};


// Class CinematicCamera.CineCameraActor
// 0x0060 (0x07E0 - 0x0780)
class ACinematicCamera_CineCameraActor : public AEngine_CameraActor
{
public:
	struct FCinematicCamera_CameraLookatTrackingSettings LookatTrackingSettings;                                   // 0x0780(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x07D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCinematicCamera_CineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x0100 (0x08A0 - 0x07A0)
class UCinematicCamera_CineCameraComponent : public UEngine_CameraComponent
{
public:
	struct FCinematicCamera_CameraFilmbackSettings     FilmbackSettings;                                         // 0x07A0(0x000C) (Deprecated)
	struct FCinematicCamera_CameraFilmbackSettings     Filmback;                                                 // 0x07AC(0x000C) (Edit, BlueprintVisible)
	struct FCinematicCamera_CameraLensSettings         LensSettings;                                             // 0x07B8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCinematicCamera_CameraFocusSettings        FocusSettings;                                            // 0x07D0(0x0058) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0834(0x000C) MISSED OFFSET
	TArray<struct FCinematicCamera_NamedFilmbackPreset> FilmbackPresets;                                          // 0x0840(0x0010) (ZeroConstructor, Config)
	TArray<struct FCinematicCamera_NamedLensPreset>    LensPresets;                                              // 0x0850(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0860(0x0010) (ZeroConstructor, Config, Deprecated)
	struct FString                                     DefaultFilmbackPreset;                                    // 0x0870(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x0880(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0890(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x0894(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0898(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	void SetCurrentFocalLength(float InFocalLength);
	float GetVerticalFieldOfView();
	TArray<struct FCinematicCamera_NamedLensPreset> STATIC_GetLensPresetsCopy();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
	struct FString GetDefaultFilmbackPresetName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
