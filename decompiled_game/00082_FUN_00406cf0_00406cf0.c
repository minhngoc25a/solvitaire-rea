// Function: FUN_00406cf0
// Entry: 00406cf0
// Size: 150 bytes
// Thunk: false
// External: false


void __fastcall FUN_00406cf0(int *param_1,int param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *piVar2;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  
  iVar1 = param_1[3];
  if ((-1 < iVar1) && (iVar1 < param_2)) {
    param_2 = iVar1;
  }
  piVar2 = param_1;
  if (param_2 < param_1[2]) {
    iVar1 = param_1[2] - param_2;
    param_1[2] = iVar1;
    if ((0 < iVar1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
      param_1[2] = iVar1 + -1;
      do {
        FUN_00406ba0(piVar2,param_1);
        iVar1 = param_1[2];
        param_1[2] = iVar1 + -1;
        piVar2 = extraout_ECX;
      } while (iVar1 != 0);
    }
  }
  else {
    param_1[2] = -1;
  }
  if (param_2 == 0) goto LAB_00406d6c;
  do {
    FUN_00406ba0(piVar2,param_1);
    param_2 = param_2 + -1;
    piVar2 = extraout_ECX_00;
  } while (param_2 != 0);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + -1;
  while (0 < iVar1) {
    FUN_00406ba0(piVar2,param_1);
    piVar2 = extraout_ECX_01;
LAB_00406d6c:
    iVar1 = param_1[2];
    param_1[2] = iVar1 + -1;
  }
  return;
}


