// Function: FUN_00493ab0
// Entry: 00493ab0
// Size: 52 bytes
// Thunk: false
// External: false


void __cdecl FUN_00493ab0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x308);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0047d191(puVar2);
    *(undefined4 **)(param_1 + 0x308) = puVar1;
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x30c) = 0;
  return;
}


