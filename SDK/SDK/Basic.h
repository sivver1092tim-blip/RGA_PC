#pragma once
#pragma warning(disable: 4267)

#include <vector>
#include <locale>
#include <set>

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{

			void InitSdk(size_t gObjectsOffset, size_t gNamesOffset);

			template<typename Fn>
			inline Fn GetVFunction(const void* instance, std::size_t index)
			{
				auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
				return reinterpret_cast<Fn>(vtable[index]);
			}

			class UObject;

			class FUObjectItem
			{
			public:
				UObject* Object;
	int Flags;
	int ClusterIndex;
	int SerialNumber;
	unsigned char Unknown_00[4];


	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
};
class TUObjectArray
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};
public:
	inline int32_t Num() const
	{
		return NumElements;
	}

	inline int32_t Max() const
	{
		return MaxElements;
	}

	inline bool IsValidIndex(int32_t Index) const
	{
		return Index < Num() && Index >= 0;
	}

	inline FUObjectItem* GetObjectPtr(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		if (!IsValidIndex(Index)) return nullptr;
		if (ChunkIndex > NumChunks) return nullptr;
		if (Index > MaxElements) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;
		return Chunk + WithinChunkIndex;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;

		return (*ItemPtr).Object;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return ItemPtr;
	}

private:
	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
};

class FUObjectArray
{
public:
	int32_t ObjFirstGCIndex;
	int32_t ObjLastNonGCIndex;
	int32_t MaxObjectsNotConsideredByGC;
	int32_t OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

#define LOWORD1(_dw)     ((uint16_t)(((uint32_t)(_dw)) & 0xffff))
#define HIWORD1(_dw)     ((uint16_t)((((uint32_t)(_dw)) >> 16) & 0xffff))

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_LENGTH_SHIFT = 6;

	uint16_t	wInfo;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline int32_t  GetLength()
	{
		return wInfo >> NAME_LENGTH_SHIFT;
	}

	inline bool IsWide() const
	{
		return wInfo & NAME_WIDE_MASK;
	}

	inline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	inline const wchar_t* GetWideName() const
	{
		return WideName;
	}
};

template<typename ElementType>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return NumElements;
	}

	inline size_t GetNumChunk() const
	{
		return NumChunks + 1;
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType* operator[](int32_t index) const
	{
		ElementType* ItemPtr = GetItemPtr(index);
		return ItemPtr;
	}

	inline int32_t GetItemCompIdx(const char* szBuffer) const 
	{
		int32_t i, nOffset = 0;
		for (i = 0; i <= NumChunks; i++)
		{
			nOffset = 0;
			while (1)
			{
				uint16_t wparam = *(uint16_t*)((char*)Chunks[i] + nOffset);
				int nLen = wparam >> 6;
				if (!nLen)
					break;
				if (wparam & 1)	//Wide
					nLen *= 2;
				else
				{
					if (!strncmp(szBuffer, (char*)Chunks[i] + nOffset + 2, nLen))
						return i * 0x10000 + nOffset;
				}
				nOffset += 2 + nLen;
			}
		}

		return 1;
	}

private:
	inline ElementType* GetItemPtr(int32_t dwComparationIndex) const
	{

		int32_t ChunkIndex = HIWORD1(dwComparationIndex);
		if (ChunkIndex > NumChunks)
			return NULL;

		int32_t strOffset = LOWORD1(dwComparationIndex) * 2;
		void* Chunk = Chunks[ChunkIndex];
		ElementType* ItemPtr = (ElementType*)((char*)Chunk + strOffset);
		return ItemPtr;
	}

	int64_t		qwStartParagraph;
	int32_t NumChunks;
	int32_t NumElements;
	void* Chunks[80];
	
	
};

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry>;

struct FName
{
	union
	{
		struct
		{
			int32_t ComparisonIndex;	// LOWORD : Offset HIWORD : Chunk
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	inline FName()
		: ComparisonIndex(0),
		  Number(0)
	{
	};

	inline FName(int32_t i)
		: ComparisonIndex(i),
		  Number(0)
	{
	};

	FName(const char* nameToFind)
		: ComparisonIndex(0),
		  Number(0)
	{
		static std::set<int> cache;

		for (auto i : cache)
		{
			std::string str(GetGlobalNames()[i]->GetAnsiName());
			if(!str.compare(nameToFind))
			{
				ComparisonIndex = i;
				return;
			}
		}

		int32_t nRet = GetGlobalNames().GetItemCompIdx(nameToFind);
		if (nRet != 1)
		{
			cache.insert(nRet);
			ComparisonIndex = nRet;
			return;
		}
	};

	static TNameEntryArray *GNames;
	static inline TNameEntryArray& GetGlobalNames()
	{
		return *GNames;
	};

	inline const char* GetName() const
	{
		if (GetGlobalNames()[ComparisonIndex])
		{
			char szBuffer[500];
			memset(szBuffer, 0, 500);
			int32_t nLen = GetGlobalNames()[ComparisonIndex]->GetLength();
			memcpy(szBuffer, GetGlobalNames()[ComparisonIndex]->GetAnsiName(), nLen);
			return szBuffer;
		}
		else
		{
			return "";
		}
	};

	inline bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};


struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[16];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
