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

// Class RichTextBlockInlineDecorator.RichTextBlockInlineDecorator
// 0x0000 (0x0028 - 0x0028)
class URichTextBlockInlineDecorator_RichTextBlockInlineDecorator : public UUMG_RichTextBlockDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RichTextBlockInlineDecorator.RichTextBlockInlineDecorator");
		if (!ptr)
			ptr = UObject::FindClass("Class RichTextBlockInlineDecorator.RichTextBlockInlineDecorator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
