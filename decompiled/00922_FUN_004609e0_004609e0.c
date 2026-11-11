// Function: FUN_004609e0
// Entry: 004609e0
// Size: 72 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004609e0(int param_1,int *param_2,int *param_3,int *param_4,UINT param_5)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  iVar1 = FUN_0048ca80(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  p_Var2 = FUN_0042470e();
  if (*(int *)p_Var2 == 0xc) {
    FUN_00487380(param_1,0xc,0x526f10);
    return 0xffffffe2;
  }
  return 0xffffffec;
}


