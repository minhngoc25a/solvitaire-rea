// Function: FUN_0047ddee
// Entry: 0047ddee
// Size: 163 bytes
// Thunk: false
// External: false


__acrt_ptd * __cdecl FUN_0047ddee(undefined4 param_1,int param_2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  p_Var3 = (__acrt_ptd *)0x0;
  if ((DAT_00540688 == (wchar_t *)0xffffffff) ||
     (p_Var1 = (__acrt_ptd *)FUN_004815f6(DAT_00540688), p_Var1 == (__acrt_ptd *)0x0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0xffffffff);
    if (iVar2 == 0) {
      return (__acrt_ptd *)0x0;
    }
    p_Var1 = __calloc_base(1,0x364);
    if (p_Var1 == (__acrt_ptd *)0x0) {
      ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,p_Var1);
      if (iVar2 != 0) {
        construct_ptd(p_Var1,(__crt_locale_data **)&DAT_005441f4);
        FUN_004247be((LPVOID)0x0);
        goto LAB_0047de82;
      }
      ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
    }
    FUN_004247be(p_Var1);
  }
  else {
    if (p_Var1 == (__acrt_ptd *)0xffffffff) {
      return (__acrt_ptd *)0x0;
    }
LAB_0047de82:
    p_Var3 = p_Var1 + param_2 * 0x364;
  }
  return p_Var3;
}


