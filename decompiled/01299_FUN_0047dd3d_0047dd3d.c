// Function: FUN_0047dd3d
// Entry: 0047dd3d
// Size: 177 bytes
// Thunk: false
// External: false


__acrt_ptd * FUN_0047dd3d(void)

{
  DWORD dwErrCode;
  uint uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  
  dwErrCode = GetLastError();
  if ((DAT_00540688 == (wchar_t *)0xffffffff) || (uVar1 = FUN_004815f6(DAT_00540688), uVar1 == 0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0xffffffff);
    if (iVar2 == 0) {
      p_Var3 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var3 = __calloc_base(1,0x364);
      if (p_Var3 == (__acrt_ptd *)0x0) {
        ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
        p_Var4 = (__acrt_ptd *)0x0;
      }
      else {
        iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,p_Var3);
        if (iVar2 != 0) {
          construct_ptd(p_Var3,(__crt_locale_data **)&DAT_005441f4);
          FUN_004247be((LPVOID)0x0);
          goto LAB_0047dde2;
        }
        ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
        p_Var4 = p_Var3;
      }
      p_Var3 = (__acrt_ptd *)0x0;
      FUN_004247be(p_Var4);
    }
  }
  else {
    p_Var3 = (__acrt_ptd *)(-(uint)(uVar1 != 0xffffffff) & uVar1);
  }
LAB_0047dde2:
  SetLastError(dwErrCode);
  return p_Var3;
}


