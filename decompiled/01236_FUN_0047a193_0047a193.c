// Function: FUN_0047a193
// Entry: 0047a193
// Size: 92 bytes
// Thunk: false
// External: false


int FUN_0047a193(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
LAB_0047a1dc:
    do {
      piVar3 = param_1;
      iVar1 = *piVar3;
      if (iVar1 == -1) {
        return iVar2;
      }
      if ((((iVar1 == -7) || (iVar1 == -6)) || (iVar1 == -5)) || (iVar1 == -4)) {
        return 1;
      }
      if (iVar1 == -3) {
        piVar3 = piVar3 + 3;
      }
      else {
        param_1 = piVar3 + 1;
        if (iVar1 != -2) goto LAB_0047a1dc;
        piVar3 = piVar3 + 4;
      }
      iVar2 = FUN_0047a193((int *)*piVar3);
      param_1 = piVar3 + 1;
    } while (iVar2 == 0);
  }
  return iVar2;
}


