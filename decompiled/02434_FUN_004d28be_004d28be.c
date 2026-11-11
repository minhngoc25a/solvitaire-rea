// Function: FUN_004d28be
// Entry: 004d28be
// Size: 134 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_004d28be(wchar_t *param_1,int param_2,int param_3)

{
  __acrt_ptd *p_Var1;
  errno_t eVar2;
  int local_28;
  errno_t local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00534cb8;
  uStack_c = 0x4d28ca;
  if (param_1 == (wchar_t *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else {
    local_20[0] = -1;
    local_28 = 0;
    local_24 = 0;
    local_8 = (undefined *)0x0;
    eVar2 = __wsopen_nolock(&local_28,local_20,param_1,param_2,0x40,param_3,0);
    local_8 = (undefined *)0xfffffffe;
    local_24 = eVar2;
    FUN_004d2934();
    if (eVar2 == 0) {
      ExceptionList = local_14;
      return local_20[0];
    }
    p_Var1 = FUN_0042470e();
    *(errno_t *)p_Var1 = eVar2;
  }
  ExceptionList = local_14;
  return 0xffffffff;
}


