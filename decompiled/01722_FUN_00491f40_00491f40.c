// Function: FUN_00491f40
// Entry: 00491f40
// Size: 104 bytes
// Thunk: false
// External: false


void __cdecl FUN_00491f40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0048d760(puVar2 + 5);
    FUN_0047d191(*(LPVOID *)(param_1 + 4));
    *(undefined4 **)(param_1 + 4) = puVar1;
    puVar2 = puVar1;
  }
  FUN_0047d191(*(LPVOID *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0047d191(*(LPVOID *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


