// Function: FUN_0047dca7
// Entry: 0047dca7
// Size: 149 bytes
// Thunk: false
// External: false


__acrt_ptd * FUN_0047dca7(void)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if ((DAT_00540688 == (wchar_t *)0xffffffff) ||
     (p_Var1 = (__acrt_ptd *)FUN_004815f6(DAT_00540688), p_Var1 == (__acrt_ptd *)0x0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0xffffffff);
    if (iVar2 != 0) {
      p_Var1 = __calloc_base(1,0x364);
      if (p_Var1 == (__acrt_ptd *)0x0) {
        ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
      }
      else {
        iVar2 = ___acrt_FlsSetValue_8(DAT_00540688,p_Var1);
        if (iVar2 != 0) {
          construct_ptd(p_Var1,(__crt_locale_data **)&DAT_005441f4);
          FUN_004247be((LPVOID)0x0);
          return p_Var1;
        }
        ___acrt_FlsSetValue_8(DAT_00540688,(LPVOID)0x0);
      }
      FUN_004247be(p_Var1);
    }
  }
  else if (p_Var1 != (__acrt_ptd *)0xffffffff) {
    return p_Var1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


