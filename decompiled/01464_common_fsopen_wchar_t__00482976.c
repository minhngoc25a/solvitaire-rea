// Function: common_fsopen<wchar_t>
// Entry: 00482976
// Size: 156 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fsopen<wchar_t>(wchar_t const * const,wchar_t const * const,int)
   
   Library: Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  __acrt_ptd *p_Var1;
  _iobuf *p_Var2;
  int local_20;
  void *local_14;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else if (*param_1 == L'\0') {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      p_Var2 = (_iobuf *)FUN_004c6465();
      FUN_00482a15();
      ExceptionList = local_14;
      return p_Var2;
    }
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x18;
  }
  ExceptionList = local_14;
  return (_iobuf *)0x0;
}


