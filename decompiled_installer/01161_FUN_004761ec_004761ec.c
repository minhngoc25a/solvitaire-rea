// Function: FUN_004761ec
// Entry: 004761ec
// Size: 173 bytes
// Thunk: false
// External: false


void FUN_004761ec(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 local_14;
  undefined2 uStack_10;
  undefined2 uStack_c;
  
  if (DAT_00542f94 == 0) {
    hModule = LoadLibraryW(L"COMCTL32.DLL");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"DllGetVersion");
      if (pFVar1 == (FARPROC)0x0) {
        DAT_00542f94 = 1;
      }
      else {
        _memset(&local_14,0,0x14);
        local_14 = 0x14;
        iVar2 = (*pFVar1)(&local_14);
        if (-1 < iVar2) {
          DAT_00542f94 = CONCAT22(uStack_10,uStack_c);
        }
      }
      FreeLibrary(hModule);
    }
    BVar3 = IsAppThemed();
    if ((BVar3 == 0) || (DAT_00542f94 < 0x60000)) {
      DAT_00542f98 = 0;
    }
    else {
      DAT_00542f98 = 1;
    }
  }
  return;
}


