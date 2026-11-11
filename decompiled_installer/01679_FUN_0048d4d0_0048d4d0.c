// Function: FUN_0048d4d0
// Entry: 0048d4d0
// Size: 143 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048d4d0(int *param_1,LPVOID param_2)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  
  pvVar1 = (LPVOID)*param_1;
  if ((pvVar1 != (LPVOID)0x0) && (param_2 <= (LPVOID)param_1[2])) {
    return param_1;
  }
  pvVar2 = (LPVOID)param_1[2];
  if (pvVar2 < (LPVOID)0x20) {
    pvVar5 = (LPVOID)0x20;
  }
  else if (pvVar2 < (LPVOID)0x2000) {
    pvVar5 = (LPVOID)((int)pvVar2 * 2);
  }
  else {
    pvVar5 = (LPVOID)(((uint)pvVar2 >> 2) + (int)pvVar2);
    pvVar6 = pvVar1;
    if (pvVar5 < pvVar2) goto LAB_0048d50d;
  }
  if (pvVar5 < param_2) {
    pvVar5 = param_2;
  }
  pvVar6 = pvVar5;
  iVar3 = FUN_00482954(pvVar1,(uint)pvVar5);
  if (iVar3 != 0) {
    param_1[2] = (int)pvVar5;
    *param_1 = iVar3;
    return param_1;
  }
LAB_0048d50d:
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_0047d191(pvVar6);
  *param_1 = 0;
  p_Var4 = FUN_0042470e();
  *(undefined4 *)p_Var4 = 0xc;
  return (int *)0x0;
}


