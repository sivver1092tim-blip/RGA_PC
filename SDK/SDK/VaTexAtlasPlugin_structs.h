#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VaTexAtlasPlugin.VtaAsset
// 0x0050 (0x0058 - 0x0008)
struct FVaTexAtlasPlugin_VtaAsset : public FEngine_TableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty VaTexAtlasPlugin.VtaAsset.Material
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty VaTexAtlasPlugin.VtaAsset.SlateTexture
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
