// Function: FUN_0048c200
// Entry: 0048c200
// Size: 72 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048c200(int *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if ((*(byte *)(param_1 + 0x26) & 2) != 0) {
    iVar1 = FUN_0048db20(*param_1,param_1 + 0x5d,(int *)&param_1);
    if (iVar1 == 0) {
      return param_1;
    }
    p_Var2 = FUN_0042470e();
    if (*(int *)p_Var2 == 0xc) {
      FUN_004873c0(1,"No memory");
    }
  }
  return (int *)0x0;
}


