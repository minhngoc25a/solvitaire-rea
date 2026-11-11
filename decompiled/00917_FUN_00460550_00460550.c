// Function: FUN_00460550
// Entry: 00460550
// Size: 46 bytes
// Thunk: false
// External: false


void __cdecl FUN_00460550(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  while (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    FUN_0047d191(puVar1);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


