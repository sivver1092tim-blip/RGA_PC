#pragma once

HMODULE LoadRemoteLibraryR(HANDLE hProcess, LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter);
HMODULE LoadRemoteLibraryR(DWORD dwProcessID, LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter);
HMODULE LoadLibraryR(LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter);


