// Function: try_load_library_from_system_directory
// Entry: 00507a13
// Size: 75 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t *param_1)

{
  HINSTANCE__ *pHVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE pHVar4;
  
  pHVar1 = LoadLibraryExW(param_1,(HANDLE)0x0,0x800);
  if (pHVar1 == (HMODULE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x57) {
      iVar3 = _wcsncmp(param_1,L"api-ms-",7);
      if (iVar3 != 0) {
        pHVar4 = LoadLibraryExW(param_1,(HANDLE)0x0,0);
        return pHVar4;
      }
    }
    pHVar1 = (HINSTANCE__ *)0x0;
  }
  return pHVar1;
}


