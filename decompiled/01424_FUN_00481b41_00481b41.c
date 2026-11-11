// Function: FUN_00481b41
// Entry: 00481b41
// Size: 203 bytes
// Thunk: false
// External: false


HMODULE __cdecl FUN_00481b41(int *param_1,int *param_2)

{
  int iVar1;
  LPCWSTR lpLibFileName;
  HMODULE pHVar2;
  DWORD DVar3;
  int iVar4;
  
  do {
    if (param_1 == param_2) {
      return (HMODULE)0x0;
    }
    iVar1 = *param_1;
    pHVar2 = (HMODULE)(&DAT_00544580)[iVar1];
    if (pHVar2 == (HMODULE)0x0) {
      lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_core_datetime_l1_1_1_0050e350)[iVar1];
      pHVar2 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((pHVar2 != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = _wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = _wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (pHVar2 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), pHVar2 != (HMODULE)0x0)))) {
        LOCK();
        iVar4 = (&DAT_00544580)[iVar1];
        (&DAT_00544580)[iVar1] = pHVar2;
        UNLOCK();
        if (iVar4 == 0) {
          return pHVar2;
        }
        FreeLibrary(pHVar2);
        return pHVar2;
      }
      LOCK();
      (&DAT_00544580)[iVar1] = 0xffffffff;
      UNLOCK();
    }
    else if (pHVar2 != (HMODULE)0xffffffff) {
      return pHVar2;
    }
    param_1 = param_1 + 1;
  } while( true );
}


