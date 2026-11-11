// Function: FUN_00479240
// Entry: 00479240
// Size: 103 bytes
// Thunk: false
// External: false


undefined4 * FUN_00479240(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = (uint *)0x0;
  puVar1 = DAT_00544030;
  if (param_1 != 0xffffffff) {
    if ((int)DAT_00544030 < 1) goto LAB_0047928a;
    puVar2 = &DAT_00543a30;
    puVar4 = DAT_00544030;
    do {
      if (*puVar2 == (param_1 & 0xfffeffff)) {
        puVar5 = puVar2;
      }
      puVar2 = puVar2 + 6;
      puVar4 = (uint *)((int)puVar4 + -1);
      puVar1 = puVar5;
    } while (puVar4 != (uint *)0x0);
  }
  if (puVar1 != (uint *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_0047928a:
  iVar3 = (int)DAT_00544030 + 1;
  (&DAT_00543a30)[(int)DAT_00544030 * 6] = param_1;
  DAT_00544030 = (uint *)iVar3;
  return &DAT_00543a18 + iVar3 * 6;
}


