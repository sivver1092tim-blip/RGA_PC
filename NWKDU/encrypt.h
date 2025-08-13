#define DEREF( name )*(UINT_PTR *)(name)
#define DEREF_64( name )*(DWORD64 *)(name)
#define DEREF_32( name )*(DWORD *)(name)
#define DEREF_16( name )*(WORD *)(name)
#define DEREF_8( name )*(BYTE *)(name)


typedef struct
{
	WORD	offset : 12;
	WORD	type : 4;
} IMAGE_RELOC, * PIMAGE_RELOC;


BYTE* EncryptBlock(BYTE* pbBlock, int nLen, ULONG& nOutLen);
BYTE* DecryptBlock(BYTE* pbBlock, int nLen, ULONG& nOutLen);
PVOID LoadPE64(PVOID pBuffer);
