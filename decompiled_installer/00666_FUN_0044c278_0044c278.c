// Function: FUN_0044c278
// Entry: 0044c278
// Size: 180 bytes
// Thunk: false
// External: false


void FUN_0044c278(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  puVar1 = DAT_00543788;
  if (param_1 == 0) {
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      DVar3 = GetCurrentThreadId();
      if (puVar2[2] == DVar3) {
        if (*(char *)((int)puVar2 + 0x11) != '\0') {
          EnableWindow((HWND)puVar2[3],1);
        }
        if (*(char *)(puVar2 + 4) != '\0') {
          SetWindowPos((HWND)puVar2[3],(HWND)0xffffffff,0,0,0,0,3);
        }
        FUN_004257fb((int *)&DAT_00543788,(int)(puVar2 + 2));
      }
    }
  }
  else {
    EnumWindows((WNDENUMPROC)&LAB_0044c32c,param_1);
    puVar1 = DAT_00543788;
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      DVar3 = GetCurrentThreadId();
      if ((puVar2[2] == DVar3) && (*(char *)(puVar2 + 4) != '\0')) {
        SetWindowPos((HWND)puVar2[3],(HWND)0xfffffffe,0,0,0,0,3);
      }
    }
  }
  return;
}


