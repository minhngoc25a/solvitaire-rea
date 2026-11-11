// Function: FUN_0048d240
// Entry: 0048d240
// Size: 107 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048d240(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0047d191((LPVOID)puVar2[1]);
    FUN_0047d191((LPVOID)puVar2[2]);
    puVar2[8] = 0;
    puVar2[9] = 0;
    FUN_0047d191((LPVOID)puVar2[7]);
    puVar2[7] = 0;
    FUN_0047d191(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0047d191(*(LPVOID *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


