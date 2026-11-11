// Function: FUN_004519bc
// Entry: 004519bc
// Size: 33 bytes
// Thunk: false
// External: false


void __fastcall FUN_004519bc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 8)) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}


