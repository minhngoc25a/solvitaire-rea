// Function: FUN_00418903
// Entry: 00418903
// Size: 63 bytes
// Thunk: false
// External: false


uint * FUN_00418903(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = (uint *)0x0;
  if (param_1 == 0xffffffff) {
    if (DAT_00542934 != 0) {
      puVar1 = &DAT_00542938;
    }
  }
  else if (0 < DAT_00542934) {
    puVar2 = &DAT_00542938;
    iVar3 = DAT_00542934;
    do {
      if (*puVar2 == (param_1 & 0xffff)) {
        puVar1 = puVar2;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return puVar1;
}


