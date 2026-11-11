// Function: FUN_00485d50
// Entry: 00485d50
// Size: 354 bytes
// Thunk: false
// External: false


/* WARNING: Switch with 1 destination removed at 0x00485da6 */
/* WARNING: Switch with 1 destination removed at 0x00485dc7 */

undefined4 FUN_00485d50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  
  if (((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x20), piVar1 == (int *)0x0)) ||
     (iVar2 = *piVar1, iVar2 != param_1)) {
    return 0xfffffffe;
  }
  switch(piVar1[1]) {
  case 1:
    break;
  case 2:
    if (param_2 == 0) {
      cVar3 = FUN_00486530(param_1);
      uVar5 = 0xfffffffe;
      if (cVar3 != '\0') {
        uVar5 = 1;
      }
      return uVar5;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0xfffffffe;
      }
      piVar1[3] = *(int *)(param_1 + 4);
      piVar1[1] = 4;
      goto switchD_00485d85_caseD_4;
    }
    piVar1[3] = *(int *)(param_1 + 4);
    piVar1[1] = 3;
  case 3:
    if ((param_2 == 1) && (piVar1[3] == *(int *)(iVar2 + 4))) {
      FUN_00486530(param_1);
      if ((piVar1[3] == 0) &&
         ((bVar4 = FUN_00486280((int)piVar1), bVar4 && (piVar1[0x13] <= piVar1[0x14])))) {
        piVar1[1] = 2;
        return 1;
      }
      return 2;
    }
    break;
  case 4:
switchD_00485d85_caseD_4:
    if (((param_2 == 2) && (piVar1[3] == *(int *)(iVar2 + 4))) &&
       (cVar3 = FUN_00486530(param_1), cVar3 != '\0')) {
      if (((piVar1[3] == 0) && (bVar4 = FUN_00486280((int)piVar1), bVar4)) &&
         (piVar1[0x13] <= piVar1[0x14])) {
        piVar1[1] = 1;
        return 4;
      }
      return 3;
    }
    break;
  default:
    return 0;
  }
  return 0xffffffff;
}


