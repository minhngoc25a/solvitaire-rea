// Function: FUN_00438580
// Entry: 00438580
// Size: 248 bytes
// Thunk: false
// External: false


int __cdecl FUN_00438580(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  uint _Line;
  
  if ((undefined4 *)(param_1 + 0xb4c) == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4170);
    return -2;
  }
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xb4c),0xffffffff);
  if (DVar1 == 0) {
    iVar2 = 0;
  }
  else if (DVar1 == 0x102) {
    iVar2 = -0x22;
  }
  else {
    DVar1 = GetLastError();
    iVar2 = FUN_00435680(DVar1);
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0xb50) = param_2;
  if ((undefined4 *)(param_1 + 0xb44) == (undefined4 *)0x0) {
    _Line = 0x4145;
  }
  else {
    BVar3 = SetEvent(*(HANDLE *)(param_1 + 0xb44));
    if (BVar3 == 0) {
      DVar1 = GetLastError();
      iVar2 = FUN_00435680(DVar1);
      if (iVar2 != 0) {
        return -1;
      }
    }
    if ((undefined4 *)(param_1 + 0xb48) != (undefined4 *)0x0) {
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xb48),0xffffffff);
      if (DVar1 != 0) {
        if (DVar1 == 0x102) {
          return -1;
        }
        DVar1 = GetLastError();
        iVar2 = FUN_00435680(DVar1);
        if (iVar2 != 0) {
          return -1;
        }
      }
      return *(int *)(param_1 + 0xb54);
    }
    _Line = 0x4137;
  }
  FID_conflict___assert
            (L"0",L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
             _Line);
  return -1;
}


