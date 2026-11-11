// Function: FUN_00482275
// Entry: 00482275
// Size: 174 bytes
// Thunk: false
// External: false


void __cdecl FUN_00482275(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t wVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  DWORD local_48c;
  wchar_t local_488;
  undefined1 local_486 [1150];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  hFile = GetStdHandle(0xfffffff4);
  if ((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0x0)) {
    DVar2 = GetFileType(hFile);
    if (DVar2 == 2) {
      iVar3 = FID_conflict___swprintf_c
                        (&local_488,(wchar_t *)0x240,L"Assertion failed: %Ts, file %Ts, line %d\n",
                         param_1,param_2,param_3);
      if (-1 < iVar3) {
        pwVar5 = &local_488;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        local_48c = 0;
        BVar4 = WriteConsoleW(hFile,&local_488,(int)pwVar5 - (int)local_486 >> 1,&local_48c,
                              (LPVOID)0x0);
        if (BVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0047d96c();
        }
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


