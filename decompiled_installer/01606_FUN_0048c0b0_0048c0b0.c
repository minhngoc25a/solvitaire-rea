// Function: FUN_0048c0b0
// Entry: 0048c0b0
// Size: 64 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048c0b0(int *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int local_4;
  
  iVar1 = FUN_0048db20(*param_1,param_1 + 0x50,&local_4);
  if (iVar1 == 0) {
    return local_4;
  }
  p_Var2 = FUN_0042470e();
  if (*(int *)p_Var2 == 0xc) {
    FUN_004873c0(1,"No memory");
  }
  return 0;
}


