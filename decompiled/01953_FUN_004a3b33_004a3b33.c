// Function: FUN_004a3b33
// Entry: 004a3b33
// Size: 43 bytes
// Thunk: false
// External: false


int FUN_004a3b33(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + -1;
    iVar1 = *(int *)(param_1 + 8) + 8;
  }
  return iVar1;
}


