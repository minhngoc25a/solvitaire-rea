// Function: FUN_0044b7e0
// Entry: 0044b7e0
// Size: 58 bytes
// Thunk: false
// External: false


void __cdecl FUN_0044b7e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x50) = 0;
  while (iVar1 != 0) {
    FUN_00425a35(10);
    iVar1 = *(int *)(param_1 + 0x60);
  }
  FUN_0047d191(*(LPVOID *)(param_1 + 0x38));
  FUN_0047d191(*(LPVOID *)(param_1 + 0x3c));
  guard_check_icall();
  return;
}


