// Function: common_sopen_dispatch<wchar_t>
// Entry: 004d298f
// Size: 143 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * const,int,int,int,int * const,int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_sopen_dispatch<wchar_t>
          (wchar_t *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  int local_24;
  errno_t local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00534cd8;
  uStack_c = 0x4d299b;
  if (((param_5 == (int *)0x0) || (*param_5 = -1, param_1 == (wchar_t *)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7fU) != 0)))) {
    p_Var1 = FUN_0042470e();
    iVar2 = 0x16;
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    iVar2 = __wsopen_nolock(&local_24,param_5,param_1,param_2,param_3,param_4,param_6);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_004d2a24();
    if (iVar2 != 0) {
      *param_5 = -1;
    }
  }
  ExceptionList = local_14;
  return iVar2;
}


