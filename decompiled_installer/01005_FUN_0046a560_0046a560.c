// Function: FUN_0046a560
// Entry: 0046a560
// Size: 145 bytes
// Thunk: false
// External: false


uint FUN_0046a560(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_1[5];
  param_1[2] = (int)piVar1;
  param_1[6] = iVar2;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
    if (iVar2 != -1) goto LAB_0046a595;
    param_1[5] = 0;
    if (0 < param_1[9]) {
      iVar3 = param_1[1];
      iVar2 = 0;
      do {
        if (*(int *)(iVar3 + iVar2 * 4) != 0) goto LAB_0046a5dc;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[9]);
    }
  }
  else {
    iVar3 = *piVar1;
    *param_1 = iVar3;
    if (iVar3 != 0) goto LAB_0046a595;
    iVar2 = iVar2 + 1;
    param_1[5] = iVar2;
    if (iVar2 < param_1[9]) {
      iVar3 = param_1[1];
      while (*(int *)(iVar3 + iVar2 * 4) == 0) {
        iVar2 = iVar2 + 1;
        if (param_1[9] <= iVar2) {
          *param_1 = 0;
          return 0;
        }
      }
LAB_0046a5dc:
      param_1[5] = iVar2;
      iVar2 = *(int *)(iVar3 + iVar2 * 4);
      *param_1 = iVar2;
      return -(uint)(iVar2 != 0) & iVar2 + 8U;
    }
  }
  iVar3 = 0;
  *param_1 = 0;
LAB_0046a595:
  return -(uint)(iVar3 != 0) & iVar3 + 8U;
}


