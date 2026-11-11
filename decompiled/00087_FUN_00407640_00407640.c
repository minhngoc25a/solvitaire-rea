// Function: FUN_00407640
// Entry: 00407640
// Size: 196 bytes
// Thunk: false
// External: false


void __fastcall FUN_00407640(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  
  iVar2 = param_1 + -1;
  iVar3 = 1;
  iVar1 = iVar2 >> 0x1f;
  while (iVar2 = iVar2 / 10, iVar2 != 0) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < param_3[8]) {
    iVar3 = param_3[8];
  }
  if (iVar3 + 2 < param_3[2]) {
    param_3[2] = param_3[2] - (iVar3 + 2);
  }
  else {
    param_3[2] = -1;
  }
  FUN_00407310(1,param_2,param_3);
  param_3[3] = param_3[8];
  param_3[1] = param_3[1] | 0x1c0;
  FUN_00406ba0(extraout_ECX,param_3);
  param_3[2] = param_3[2] + iVar3 + 1;
  FUN_00406e20(param_3,iVar1);
  return;
}


