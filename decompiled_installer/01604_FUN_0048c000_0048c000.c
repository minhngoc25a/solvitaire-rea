// Function: FUN_0048c000
// Entry: 0048c000
// Size: 99 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048c000(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  
  piVar2 = param_1;
  piVar1 = param_1 + 0x50;
  iVar3 = FUN_0048d920(*param_1,piVar1,(int *)&param_1);
  if (iVar3 == 0) {
    return param_1;
  }
  p_Var4 = FUN_0042470e();
  if ((*(int *)p_Var4 == 0x2a) && (iVar3 = FUN_0048da30(*piVar2,piVar1,(int *)&param_1), iVar3 == 0)
     ) {
    return param_1;
  }
  p_Var4 = FUN_0042470e();
  if (*(int *)p_Var4 == 0xc) {
    FUN_004873c0(1,"No memory");
  }
  return (int *)0x0;
}


