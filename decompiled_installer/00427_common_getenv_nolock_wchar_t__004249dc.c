// Function: common_getenv_nolock<wchar_t>
// Entry: 004249dc
// Size: 132 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint _MaxCount;
  
  piVar2 = (int *)thunk_FUN_0047fe38();
  if ((piVar2 != (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    _MaxCount = (int)pwVar5 - (int)(param_1 + 1) >> 1;
    for (; pwVar5 = (wchar_t *)*piVar2, pwVar5 != (wchar_t *)0x0; piVar2 = piVar2 + 1) {
      pwVar4 = pwVar5;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      if (((_MaxCount < (uint)((int)pwVar4 - (int)(pwVar5 + 1) >> 1)) && (pwVar5[_MaxCount] == L'=')
          ) && (iVar3 = __wcsnicoll(pwVar5,param_1,_MaxCount), iVar3 == 0)) {
        return (wchar_t *)(*piVar2 + _MaxCount * 2 + 2);
      }
    }
  }
  return (wchar_t *)0x0;
}


