// Function: FUN_004afe50
// Entry: 004afe50
// Size: 108 bytes
// Thunk: false
// External: false


void __cdecl FUN_004afe50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (1 < *(int *)(param_1 + 0x130)) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return;
  }
  if (*(uint *)(param_1 + 0x80) < *(int *)(param_1 + 0x128) - 1U) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0xc);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x4c);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}


