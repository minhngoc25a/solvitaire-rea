// Function: FUN_0049b8b0
// Entry: 0049b8b0
// Size: 94 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049b8b0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(LPVOID *)(param_1 + 0x30) != (LPVOID)0x0) && (*(uint *)(param_1 + 0x28) == param_2)) {
    return 1;
  }
  if (0xb < param_2) {
    FUN_0047d191(*(LPVOID *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x44) = -param_2 & 3;
    iVar1 = FUN_00482949((-param_2 & 3) + param_2);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x28) = param_2;
      return 1;
    }
  }
  return 0;
}


