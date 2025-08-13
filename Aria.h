// ----------------------------------------------------------------------------
//
// ARIA crypto library module for C++ version 1.0
//
// http://www.gilgil.net
//
// Last Build : 2009.01.30
//
// Copyright (c) NetworkLab Corporation All rights reserved
//
// ----------------------------------------------------------------------------

#ifndef __ARIA_HPP__
#define __ARIA_HPP__

int EncryptBuffer(BYTE *pbSource, BYTE *pbResult, int len, BYTE* pbKey);
int DecryptBuffer(BYTE *pbSource, BYTE *pbResult, int len, BYTE* pbKey);

#endif  __ARIA_HPP__
