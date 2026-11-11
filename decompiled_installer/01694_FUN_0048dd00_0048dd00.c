// Function: FUN_0048dd00
// Entry: 0048dd00
// Size: 92 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048dd00(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != (uint *)0x0) {
    puVar2 = param_2;
    do {
      uVar1 = *puVar2;
      puVar2 = (uint *)((int)puVar2 + 2);
    } while ((short)uVar1 != 0);
    *(undefined4 *)(param_1 + 0x30) = 4;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_0048d5e0((int *)(param_1 + 0x18),param_2,(int)puVar2 - ((int)param_2 + 2) >> 1);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}


