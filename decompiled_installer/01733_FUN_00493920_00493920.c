// Function: FUN_00493920
// Entry: 00493920
// Size: 79 bytes
// Thunk: false
// External: false


void __cdecl FUN_00493920(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x300);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 1;
    puVar2 = (undefined4 *)*puVar2;
    FUN_0047d191((LPVOID)*puVar1);
    FUN_0047d191(*(LPVOID *)(*(int *)(param_1 + 0x300) + 8));
    FUN_0047d191(*(LPVOID *)(param_1 + 0x300));
    *(undefined4 **)(param_1 + 0x300) = puVar2;
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  return;
}


