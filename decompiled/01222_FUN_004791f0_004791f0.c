// Function: FUN_004791f0
// Entry: 004791f0
// Size: 70 bytes
// Thunk: false
// External: false


uint * FUN_004791f0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  if (param_1 == 0xffffffff) {
    if (DAT_00544030 != 0) {
      return &DAT_00543a30;
    }
  }
  else if (0 < DAT_00544030) {
    puVar1 = &DAT_00543a30;
    iVar2 = DAT_00544030;
    do {
      if (*puVar1 == (param_1 & 0xfffeffff)) {
        puVar3 = puVar1;
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return puVar3;
}


