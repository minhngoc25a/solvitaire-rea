// Function: FUN_004bff80
// Entry: 004bff80
// Size: 150 bytes
// Thunk: false
// External: false


int * FUN_004bff80(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int extraout_ECX;
  int extraout_EDX;
  int iVar2;
  
  if ((param_3 == 1) && (piVar1 = FUN_004ff320(param_1,param_2), piVar1 != (int *)0x0)) {
    if ((int *)param_1[4] != (int *)0x0) {
      FUN_004a3931(extraout_ECX,extraout_EDX,(int)piVar1,(int *)param_1[4]);
    }
  }
  else {
    iVar2 = param_2 % (int)param_1[9];
    piVar1 = FUN_00478ad9((int *)param_1[0xe]);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1[1] = param_2;
    *piVar1 = *(int *)(param_1[1] + iVar2 * 4);
    *(int **)(param_1[1] + iVar2 * 4) = piVar1;
    param_1[10] = param_1[10] + 1;
    *param_1 = piVar1;
    param_1[5] = iVar2;
    param_1[2] = 0;
    piVar1 = piVar1 + 2;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  _memset(piVar1,0,param_1[7]);
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    FUN_0047a01e((int)piVar1,(int *)param_1[4]);
  }
  return piVar1;
}


