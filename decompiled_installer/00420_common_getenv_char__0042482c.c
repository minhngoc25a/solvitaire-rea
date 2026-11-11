// Function: common_getenv<char>
// Entry: 0042482c
// Size: 115 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    char * __cdecl common_getenv<char>(char const * const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl common_getenv<char>(char *param_1)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  char *pcVar3;
  void *local_14;
  
  if ((param_1 != (char *)0x0) &&
     (uVar2 = FUN_0044c0e2((undefined1 (*) [32])param_1,0x7fff), uVar2 < 0x7fff)) {
    ___acrt_lock(0xb);
    pcVar3 = common_getenv_nolock<char>(param_1);
    FUN_004248a2();
    ExceptionList = local_14;
    return pcVar3;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x16;
  FUN_004243be();
  ExceptionList = local_14;
  return (char *)0x0;
}


