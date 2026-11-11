// Function: FUN_00474713
// Entry: 00474713
// Size: 81 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_00474713(short *param_1,short *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_3 != '\x01') && (param_3 != '\x02')) {
    uVar1 = 0;
    iVar2 = 0;
    for (; param_1 != param_2; param_1 = (short *)((int)param_1 + 1)) {
      if ((char)*param_1 == '\n') {
        bVar3 = 0xfffffffe < uVar1;
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + (uint)bVar3;
      }
    }
    return CONCAT44(iVar2,uVar1);
  }
  uVar1 = 0;
  iVar2 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 == 10) {
      bVar3 = 0xfffffffe < uVar1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + (uint)bVar3;
    }
  }
  return CONCAT44(iVar2 << 1 | uVar1 >> 0x1f,uVar1 * 2);
}


