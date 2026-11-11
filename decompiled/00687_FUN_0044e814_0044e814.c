// Function: FUN_0044e814
// Entry: 0044e814
// Size: 73 bytes
// Thunk: false
// External: false


int __cdecl FUN_0044e814(byte *param_1,byte *param_2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (DAT_005441f0 != 0) {
    iVar2 = FUN_0044e85d(param_1,param_2,(int *)0x0);
    return iVar2;
  }
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    iVar2 = FUN_0044e8ed(param_1,param_2);
    return iVar2;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x16;
  FUN_004243be();
  return 0x7fffffff;
}


