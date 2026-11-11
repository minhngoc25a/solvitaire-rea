// Function: FUN_00491fb0
// Entry: 00491fb0
// Size: 168 bytes
// Thunk: false
// External: false


void __cdecl FUN_00491fb0(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_0048d760(puVar1 + 5);
    FUN_0047d191(*(LPVOID *)(param_1 + 2));
    *(undefined4 **)(param_1 + 2) = puVar2;
    puVar1 = puVar2;
  }
  FUN_0047d191(*(LPVOID *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0047d191(*(LPVOID *)(param_1 + 10));
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = *param_2;
  for (puVar1 = *(undefined4 **)(param_2 + 2); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar2 = FUN_00492da0((int)param_1,puVar1[1],puVar1[3],(int *)puVar1[2],puVar1[4]);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048d7f0(puVar2 + 5,puVar1 + 5);
    }
  }
  return;
}


