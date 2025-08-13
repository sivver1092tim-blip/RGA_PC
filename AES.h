#pragma once
#include "math.h"

extern UINT	g_dwAESEncKey[64];
extern UINT	g_dwAESDecKey[64];

/* forward S-box & tables */

extern UINT	FSb[256];
extern UINT	FT0[256]; 
extern UINT	FT1[256]; 
extern UINT	FT2[256]; 
extern UINT	FT3[256]; 

/* reverse S-box & tables */

extern UINT	RSb[256];
extern UINT	RT0[256];
extern UINT	RT1[256];
extern UINT	RT2[256];
extern UINT	RT3[256];

/* round constants */

extern UINT	RCON[10];

/* decryption key schedule tables */

extern UINT	KT0[256];
extern UINT	KT1[256];
extern UINT	KT2[256];
extern UINT	KT3[256];

#define XTIME(x) ((x << 1) ^ ((x & 0x80) ? 0x1B:0x00))
#define ROTR8(x) (((x << 24) & 0xFFFFFFFF) | ((x & 0xFFFFFFFF) >> 8))
#define MUL(x, y) ((x && y) ? pow[(log[x] + log[y]) % 255] : 0)
#define GET_UINT32(n, b, i) {(n) = ((UINT)(b)[(i)] << 24) | ((UINT)(b)[(i) + 1] << 16) | ((UINT)(b)[(i) + 2] << 8) | ((UINT)(b)[(i) + 3]);}
#define PUT_UINT32(n, b, i) { (b)[(i) ] = (BYTE)((n) >> 24); (b)[(i) + 1] = (BYTE)((n) >> 16); (b)[(i) + 2] = (BYTE)((n) >> 8); (b)[(i) + 3] = (BYTE)((n));}
#define AES_FROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3) {RK += 4; X0 = RK[0] ^ FT0[(BYTE)(Y0 >> 24)] ^ FT1[(BYTE)(Y1 >> 16)] ^ FT2[(BYTE)(Y2 >> 8)] ^ FT3[(BYTE)(Y3)]; X1 = RK[1] ^ FT0[(BYTE)(Y1 >> 24)] ^ FT1[(BYTE)(Y2 >> 16)] ^ FT2[(BYTE)(Y3 >> 8)] ^ FT3[(BYTE)(Y0)]; X2 = RK[2] ^ FT0[(BYTE)(Y2 >> 24)] ^ FT1[(BYTE)(Y3 >> 16)] ^ FT2[(BYTE)(Y0 >> 8)] ^ FT3[(BYTE)(Y1)]; X3 = RK[3] ^ FT0[(BYTE)(Y3 >> 24)] ^ FT1[(BYTE)(Y0 >> 16)] ^ FT2[(BYTE)(Y1 >> 8)] ^ FT3[(BYTE)(Y2)];}
#define AES_RROUND(RK, X0, X1, X2, X3, Y0, Y1, Y2, Y3) {RK += 4; X0 = RK[0] ^ RT0[(BYTE)(Y0 >> 24)] ^ RT1[(BYTE)(Y3 >> 16)] ^ RT2[(BYTE)(Y2 >> 8)] ^ RT3[(BYTE)(Y1)]; X1 = RK[1] ^ RT0[(BYTE)(Y1 >> 24)] ^ RT1[(BYTE)(Y0 >> 16)] ^ RT2[(BYTE)(Y3 >> 8)] ^ RT3[(BYTE)(Y2)]; X2 = RK[2] ^ RT0[(BYTE)(Y2 >> 24)] ^ RT1[(BYTE)(Y1 >> 16)] ^ RT2[(BYTE)(Y0 >> 8)] ^ RT3[(BYTE)(Y3)]; X3 = RK[3] ^ RT0[(BYTE)(Y3 >> 24)] ^ RT1[(BYTE)(Y2 >> 16)] ^ RT2[(BYTE)(Y1 >> 8)] ^ RT3[(BYTE)(Y0)];}


void	OnAESGenerateKey();
void	OnAESEncrypt(BYTE *pbSrc, BYTE *pbDst, int nLen);
void	OnAESDecrypt(BYTE *pbSrc, BYTE *pbDst, int nLen);