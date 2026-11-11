// Function: call_wfullpath
// Entry: 00499af5
// Size: 96 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    wchar_t * __cdecl call_wfullpath(wchar_t * const,wchar_t const * const,unsigned int,wchar_t * *
   const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl call_wfullpath(wchar_t *param_1,wchar_t *param_2,uint param_3,wchar_t **param_4)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  wchar_t *pwVar3;
  
  p_Var2 = FUN_0042470e();
  uVar1 = *(undefined4 *)p_Var2;
  p_Var2 = FUN_0042470e();
  *(undefined4 *)p_Var2 = 0;
  pwVar3 = __wfullpath(param_1,param_2,param_3);
  p_Var2 = FUN_0042470e();
  if (pwVar3 == (wchar_t *)0x0) {
    if (*(int *)p_Var2 == 0x22) {
      p_Var2 = FUN_0042470e();
      *(undefined4 *)p_Var2 = uVar1;
      pwVar3 = __wfullpath((wchar_t *)0x0,param_2,0);
      *param_4 = pwVar3;
    }
    else {
      pwVar3 = (wchar_t *)0x0;
    }
  }
  else {
    *(undefined4 *)p_Var2 = uVar1;
  }
  return pwVar3;
}


