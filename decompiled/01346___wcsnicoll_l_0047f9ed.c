// Function: __wcsnicoll_l
// Entry: 0047f9ed
// Size: 192 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wcsnicoll_l
   
   Library: Visual Studio 2019 Release */

int __cdecl __wcsnicoll_l(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  int local_14;
  int local_10;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      FUN_00425544(&local_14,(int *)_Locale);
      if (*(wchar_t **)(local_10 + 0xa4) == (wchar_t *)0x0) {
        iVar1 = FUN_00478f6f((ushort *)_Str1,(ushort *)_Str2,_MaxCount);
      }
      else {
        iVar3 = ___acrt_CompareStringW
                          (*(wchar_t **)(local_10 + 0xa4),0x1001,_Str1,_MaxCount,_Str2,_MaxCount);
        if (iVar3 == 0) {
          p_Var2 = FUN_0042470e();
          *(undefined4 *)p_Var2 = 0x16;
        }
        else {
          iVar1 = iVar3 + -2;
        }
      }
      if (local_8 != '\0') {
        *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
      }
    }
    else {
      p_Var2 = FUN_0042470e();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_004243be();
    }
  }
  return iVar1;
}


