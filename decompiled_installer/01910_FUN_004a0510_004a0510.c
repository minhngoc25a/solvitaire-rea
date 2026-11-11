// Function: FUN_004a0510
// Entry: 004a0510
// Size: 87 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a0510(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      *(undefined4 *)(param_1 + 0xd0) = 9;
      iVar1 = 9;
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      *(undefined4 *)(param_1 + 0xd0) = 8;
      *(undefined4 *)(param_1 + 0xac) = 1;
      return 8;
    }
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
    }
  }
  return iVar1;
}


