// Function: FUN_004a0570
// Entry: 004a0570
// Size: 82 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a0570(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xac) = 1;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_004a0370(param_1,*(uint *)(param_1 + 0x4c) & param_2);
  }
  iVar1 = 5;
  do {
    FUN_0049e680(param_1 + 0x58);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0049e640(param_1 + 0x58);
  FUN_004a0510(param_1);
  return;
}


