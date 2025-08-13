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

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
struct FWebBrowser_WebJSCallbackBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FWebBrowser_WebJSResponse : public FWebBrowser_WebJSCallbackBase
{

};

// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FWebBrowser_WebJSFunction : public FWebBrowser_WebJSCallbackBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
