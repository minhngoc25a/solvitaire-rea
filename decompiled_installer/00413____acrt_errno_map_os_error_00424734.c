// Function: ___acrt_errno_map_os_error
// Entry: 00424734
// Size: 35 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_errno_map_os_error(ulong param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  p_Var1 = FUN_00424721();
  *(ulong *)p_Var1 = param_1;
  iVar2 = FID_conflict____acrt_errno_from_os_error(param_1);
  p_Var1 = FUN_0042470e();
  *(int *)p_Var1 = iVar2;
  return;
}


