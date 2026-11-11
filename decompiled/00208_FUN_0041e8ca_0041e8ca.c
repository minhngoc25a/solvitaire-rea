// Function: FUN_0041e8ca
// Entry: 0041e8ca
// Size: 110 bytes
// Thunk: false
// External: false


int FUN_0041e8ca(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  tagRECT local_14;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    if ((param_2 & 1) == 0) {
      GetWindowRect((HWND)*puVar1,&local_14);
      iVar4 = local_14.bottom - local_14.top;
    }
    else {
      GetClientRect((HWND)*puVar1,&local_14);
      iVar4 = local_14.bottom - local_14.top;
      pHVar2 = GetMenu((HWND)*puVar1);
      if ((pHVar2 != (HMENU)0x0) && (puVar1[7] == 0)) {
        iVar3 = GetSystemMetrics(0xf);
        iVar4 = iVar4 + iVar3;
      }
    }
    iVar4 = FUN_004761af(iVar4);
  }
  return iVar4;
}


