#include "stdafx.h"
#include "AES.h"



UINT	g_dwAESEncKey[64];
UINT	g_dwAESDecKey[64];

/* forward S-box & tables */

UINT	FSb[256];
UINT	FT0[256]; 
UINT	FT1[256]; 
UINT	FT2[256]; 
UINT	FT3[256]; 

/* reverse S-box & tables */

UINT	RSb[256];
UINT	RT0[256];
UINT	RT1[256];
UINT	RT2[256];
UINT	RT3[256];

/* round constants */

UINT	RCON[10];

/* decryption key schedule tables */

UINT	KT0[256];
UINT	KT1[256];
UINT	KT2[256];
UINT	KT3[256];

/* AES 256 Byte Key */

BYTE g_pbAESKey[] = {
	0x0F, 0xFB, 0xFC, 0x5B, 0x07, 0xDB, 0x44, 0x08,
	0xB4, 0xF9, 0xBD, 0x67, 0x7A, 0x39, 0x8A, 0x9D,
	0x3E, 0xFA, 0x5C, 0x2B, 0xCC, 0xEC, 0xF0, 0x65,
	0x76, 0x26, 0xDA, 0x25, 0xFE, 0x73, 0x82, 0xC0
};


void OnAESGenerateKey()
{
	BYTE x, y;
	BYTE pow[256];
	BYTE log[256];

	for(int i = 0, x = 1; i < 256; i++, x ^= (BYTE)XTIME(x))
	{
		pow[i] = x;
		log[x] = i;
	}

	for(int i = 0, x = 1; i < 10; i++, x = (BYTE)XTIME(x))
		RCON[i] = (UINT) x << 24;

	FSb[0x00] = 0x63;
	RSb[0x63] = 0x00;

	for(int i = 1; i < 256; i++)
	{
		x = pow[255 - log[i]];

		y = x;  y = (y << 1) | (y >> 7);
		x ^= y; y = (y << 1) | (y >> 7);
		x ^= y; y = (y << 1) | (y >> 7);
		x ^= y; y = (y << 1) | (y >> 7);
		x ^= y ^ 0x63;

		FSb[i] = x;
		RSb[x] = i;
	}

	for(int i = 0; i < 256; i++)
	{
		x = (unsigned char) FSb[i]; y = (BYTE)XTIME( x );

		FT0[i] = (UINT)(x ^ y) ^ ((UINT)x << 8) ^ ((UINT)x << 16) ^ ((UINT)y << 24);
		FT0[i] &= 0xFFFFFFFF;
		FT1[i] = ROTR8(FT0[i]);
		FT2[i] = ROTR8(FT1[i]);
		FT3[i] = ROTR8(FT2[i]);

		y = (unsigned char)RSb[i];

		RT0[i] = ((UINT)MUL(0x0B, y)) ^ ((UINT)MUL(0x0D, y) << 8) ^ ((UINT)MUL(0x09, y) << 16) ^ ((UINT)MUL(0x0E, y) << 24);
		RT0[i] &= 0xFFFFFFFF;
		RT1[i] = ROTR8(RT0[i]);
		RT2[i] = ROTR8(RT1[i]);
		RT3[i] = ROTR8(RT2[i]);
	}

	// Set Encrypt Key

	UINT *dwEncKey = g_dwAESEncKey;

	for(int i = 0; i < 8; i++ )
		GET_UINT32(dwEncKey[i], g_pbAESKey, i * 4);

	for(int i = 0; i < 7; i++, dwEncKey += 8)
	{
		dwEncKey[8] = dwEncKey[0] ^ RCON[i] ^ (FSb[(BYTE)(dwEncKey[7] >> 16)] << 24) ^ (FSb[(BYTE)(dwEncKey[7] >> 8)] << 16) ^ (FSb[(BYTE)(dwEncKey[7])] << 8) ^ (FSb[(BYTE)(dwEncKey[7] >> 24)]);
		dwEncKey[9] = dwEncKey[1] ^ dwEncKey[8];
		dwEncKey[10] = dwEncKey[2] ^ dwEncKey[9];
		dwEncKey[11] = dwEncKey[3] ^ dwEncKey[10];
		dwEncKey[12] = dwEncKey[4] ^ (FSb[(BYTE)(dwEncKey[11] >> 24)] << 24) ^ (FSb[(BYTE)(dwEncKey[11] >> 16)] << 16) ^ (FSb[(BYTE)(dwEncKey[11] >> 8)] << 8) ^ (FSb[(BYTE)(dwEncKey[11])]);
		dwEncKey[13] = dwEncKey[5] ^ dwEncKey[12];
		dwEncKey[14] = dwEncKey[6] ^ dwEncKey[13];
		dwEncKey[15] = dwEncKey[7] ^ dwEncKey[14];
	}

	// Set Decrypt Key

	for(int i = 0; i < 256; i++)
	{
		KT0[i] = RT0[FSb[i]];
		KT1[i] = RT1[FSb[i]];
		KT2[i] = RT2[FSb[i]];
		KT3[i] = RT3[FSb[i]];
	}

	UINT *dwDecKey = g_dwAESDecKey;

	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;

	for(int i = 1; i < 14; i++ )
	{
		dwEncKey -= 8;

		*dwDecKey++ = KT0[(BYTE)(*dwEncKey >> 24)] ^ KT1[(BYTE)(*dwEncKey >> 16)] ^ KT2[(BYTE)(*dwEncKey >> 8)] ^ KT3[(BYTE)(*dwEncKey)]; dwEncKey++;
		*dwDecKey++ = KT0[(BYTE)(*dwEncKey >> 24)] ^ KT1[(BYTE)(*dwEncKey >> 16)] ^ KT2[(BYTE)(*dwEncKey >> 8)] ^ KT3[(BYTE)(*dwEncKey)]; dwEncKey++;
		*dwDecKey++ = KT0[(BYTE)(*dwEncKey >> 24)] ^ KT1[(BYTE)(*dwEncKey >> 16)] ^ KT2[(BYTE)(*dwEncKey >> 8)] ^ KT3[(BYTE)(*dwEncKey)]; dwEncKey++;
		*dwDecKey++ = KT0[(BYTE)(*dwEncKey >> 24)] ^ KT1[(BYTE)(*dwEncKey >> 16)] ^ KT2[(BYTE)(*dwEncKey >> 8)] ^ KT3[(BYTE)(*dwEncKey)]; dwEncKey++;
	}

	dwEncKey -= 8;

	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;
	*dwDecKey++ = *dwEncKey++;
}



void OnAESEncrypt(BYTE *pbSrc, BYTE *pbDst, int nLen)	// pbSrc의 길이는 16의 곱수이다
{
	for(int i = 0; i < nLen; i+= 0x10)
	{
		BYTE *pbStart = pbSrc + i;
		BYTE *pbStop = pbDst + i;

		UINT *RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3;

		RK = g_dwAESEncKey;

		GET_UINT32(X0, pbStart,  0); X0 ^= RK[0];
		GET_UINT32(X1, pbStart,  4); X1 ^= RK[1];
		GET_UINT32(X2, pbStart,  8); X2 ^= RK[2];
		GET_UINT32(X3, pbStart, 12); X3 ^= RK[3];

		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 1 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 2 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 3 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 4 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 5 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 6 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 7 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 8 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 9 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 10 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 11 */
		AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);		/* round 12 */
		AES_FROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);		/* round 13 */

		RK += 4;
		X0 = RK[0] ^ (FSb[(BYTE)(Y0 >> 24)] << 24) ^ (FSb[(BYTE)(Y1 >> 16)] << 16) ^ (FSb[(BYTE)(Y2 >> 8)] << 8) ^ (FSb[(BYTE)(Y3)]);
		X1 = RK[1] ^ (FSb[(BYTE)(Y1 >> 24)] << 24) ^ (FSb[(BYTE)(Y2 >> 16)] << 16) ^ (FSb[(BYTE)(Y3 >> 8)] << 8) ^ (FSb[(BYTE)(Y0)]);
		X2 = RK[2] ^ (FSb[(BYTE)(Y2 >> 24)] << 24) ^ (FSb[(BYTE)(Y3 >> 16)] << 16) ^ (FSb[(BYTE)(Y0 >> 8)] << 8) ^ (FSb[(BYTE)(Y1)]);
		X3 = RK[3] ^ (FSb[(BYTE)(Y3 >> 24)] << 24) ^ (FSb[(BYTE)(Y0 >> 16)] << 16) ^ (FSb[(BYTE)(Y1 >> 8)] << 8) ^ (FSb[(BYTE)(Y2)]);

		PUT_UINT32(X0, pbStop, 0);
		PUT_UINT32(X1, pbStop, 4);
		PUT_UINT32(X2, pbStop, 8);
		PUT_UINT32(X3, pbStop, 12);
	}
}



void OnAESDecrypt(BYTE *pbSrc, BYTE *pbDst, int nLen)	// pbSrc의 길이는 16의 곱수이다
{
	for(int i = 0; i < nLen; i+= 0x10)
	{
		BYTE *pbStart = pbSrc + i;
		BYTE *pbStop = pbDst + i;

		UINT *RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3;

		RK = g_dwAESDecKey;

		GET_UINT32(X0, pbStart,  0); X0 ^= RK[0];
		GET_UINT32(X1, pbStart,  4); X1 ^= RK[1];
		GET_UINT32(X2, pbStart,  8); X2 ^= RK[2];
		GET_UINT32(X3, pbStart, 12); X3 ^= RK[3];

		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);
		AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3);
		AES_RROUND(RK, Y0, Y1, Y2, Y3, X0, X1, X2, X3);

		RK += 4;
		X0 = RK[0] ^ (RSb[(BYTE)(Y0 >> 24)] << 24) ^ (RSb[(BYTE)(Y3 >> 16)] << 16) ^ (RSb[(BYTE)(Y2 >> 8)] << 8) ^ (RSb[(BYTE)(Y1)]);
		X1 = RK[1] ^ (RSb[(BYTE)(Y1 >> 24)] << 24) ^ (RSb[(BYTE)(Y0 >> 16)] << 16) ^ (RSb[(BYTE)(Y3 >> 8)] << 8) ^ (RSb[(BYTE)(Y2)]);
		X2 = RK[2] ^ (RSb[(BYTE)(Y2 >> 24)] << 24) ^ (RSb[(BYTE)(Y1 >> 16)] << 16) ^ (RSb[(BYTE)(Y0 >> 8)] << 8) ^ (RSb[(BYTE)(Y3)]);
		X3 = RK[3] ^ (RSb[(BYTE)(Y3 >> 24)] << 24) ^ (RSb[(BYTE)(Y2 >> 16)] << 16) ^ (RSb[(BYTE)(Y1 >> 8)] << 8) ^ (RSb[(BYTE)(Y0)]);

		PUT_UINT32(X0, pbStop, 0);
		PUT_UINT32(X1, pbStop, 4);
		PUT_UINT32(X2, pbStop, 8);
		PUT_UINT32(X3, pbStop, 12);
	}
}