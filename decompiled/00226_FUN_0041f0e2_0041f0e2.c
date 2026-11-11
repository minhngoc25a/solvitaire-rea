// Function: FUN_0041f0e2
// Entry: 0041f0e2
// Size: 99 bytes
// Thunk: false
// External: false


void FUN_0041f0e2(int param_1)

{
  LPWSTR lpBuffer;
  DWORD DVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  lpBuffer = (LPWSTR)FUN_0044c3e0(0x104,param_1);
  DVar1 = GetTempPathW(0x104,lpBuffer);
  hModule = LoadLibraryW(L"Kernel32.DLL");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"GetLongPathNameW");
    if (pFVar2 != (FARPROC)0x0) {
      DVar1 = (*pFVar2)(lpBuffer,lpBuffer,0x104);
    }
    FreeLibrary(hModule);
  }
  FUN_0044c470(0x104 - DVar1);
  lpBuffer[DVar1] = L'\0';
  return;
}


