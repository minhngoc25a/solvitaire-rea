// Function: FUN_004247be
// Entry: 004247be
// Size: 58 bytes
// Thunk: false
// External: false


void __cdecl FUN_004247be(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_005441f8,0,param_1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      iVar3 = FID_conflict____acrt_errno_from_os_error(DVar2);
      p_Var4 = FUN_0042470e();
      *(int *)p_Var4 = iVar3;
    }
  }
  return;
}


