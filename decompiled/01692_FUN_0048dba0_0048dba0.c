// Function: FUN_0048dba0
// Entry: 0048dba0
// Size: 246 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048dba0(int param_1,int *param_2,int *param_3,int *param_4,UINT param_5)

{
  UINT UVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  
  UVar1 = param_5;
  iVar3 = 0;
  if ((param_5 != 0) && ((*(byte *)(param_2 + 0xc) & 4) != 0)) {
    param_2[10] = 0;
    iVar3 = FUN_0048e8e0(param_2 + 9,(LPCWSTR)param_2[6],param_2[7],param_5);
    if (iVar3 == 0) {
      *param_3 = param_2[9];
      if (param_4 == (int *)0x0) {
        return 0;
      }
      *param_4 = param_2[10];
      return 0;
    }
    p_Var2 = FUN_0042470e();
    if (*(int *)p_Var2 == 0xc) {
      return -1;
    }
    iVar3 = -1;
  }
  if (((*(byte *)(param_2 + 0xc) & 1) == 0) &&
     (FUN_0048d920(param_1,param_2,(int *)&param_5), (*(byte *)(param_2 + 0xc) & 1) == 0)) {
    *param_3 = 0;
    if (param_4 == (int *)0x0) {
      return iVar3;
    }
    *param_4 = 0;
    return iVar3;
  }
  if (UVar1 == 0) {
    *param_3 = *param_2;
    if (param_4 != (int *)0x0) {
      *param_4 = param_2[1];
    }
    return 0;
  }
  param_2[10] = 0;
  iVar3 = FUN_0048d340(param_2 + 9,(uint *)*param_2,param_2[1],UVar1);
  *param_3 = param_2[9];
  if (param_4 == (int *)0x0) {
    return iVar3;
  }
  *param_4 = param_2[10];
  return iVar3;
}


