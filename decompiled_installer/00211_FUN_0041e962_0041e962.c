// Function: FUN_0041e962
// Entry: 0041e962
// Size: 71 bytes
// Thunk: false
// External: false


int FUN_0041e962(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tagRECT local_14;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((param_2 & 1) == 0) {
      GetWindowRect((HWND)*puVar1,&local_14);
    }
    else {
      GetClientRect((HWND)*puVar1,&local_14);
    }
    iVar2 = FUN_0047737b(local_14.right - local_14.left);
  }
  return iVar2;
}


