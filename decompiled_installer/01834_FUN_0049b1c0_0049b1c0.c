// Function: FUN_0049b1c0
// Entry: 0049b1c0
// Size: 81 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049b1c0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0)) {
    FUN_0049b560(*(undefined4 **)(param_1 + 0x24),*(int *)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (*(code **)(iVar1 + 4) != (code *)0x0)) {
      (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8),*(LPVOID *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    FUN_0047d191(*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


