// Function: FUN_0048db20
// Entry: 0048db20
// Size: 118 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048db20(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  piVar1 = param_2;
  if ((*(byte *)(param_2 + 0xc) & 4) != 0) {
    *param_3 = param_2[6];
    return 0;
  }
  *param_3 = 0;
  if (((*(byte *)(param_2 + 0xc) & 1) == 0) &&
     (FUN_0048d920(param_1,param_2,(int *)&param_2), (*(byte *)(piVar1 + 0xc) & 1) == 0)) {
    return 0;
  }
  piVar1[7] = 0;
  iVar3 = FUN_0048e5d0(piVar1 + 6,(uint *)*piVar1,piVar1[1],0);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  piVar1[0xc] = piVar1[0xc] | 4;
  *piVar2 = piVar1[6];
  return 0;
}


