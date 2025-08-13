#pragma once
#include <filesystem>
#include <winnt.h>
#include <tchar.h>

#define MAX_LOG_LEN					512
#define PACKET_BUFF_LEN				4096 * 5

//namespace fs = std::filesystem;

void	XMSG_EX(const TCHAR* szFormat, ...);
void	WriteArrayToCSV(const CStringArray& arr, const CString& strFilePath);