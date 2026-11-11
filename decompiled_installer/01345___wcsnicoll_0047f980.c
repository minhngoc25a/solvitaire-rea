// Function: __wcsnicoll
// Entry: 0047f980
// Size: 109 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wcsnicoll
   
   Library: Visual Studio 2019 Release */

int __cdecl __wcsnicoll(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (DAT_005441f0 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
      iVar2 = 0x7fffffff;
    }
    else {
      if (_MaxCount < 0x80000000) {
        iVar2 = FUN_00478f6f((ushort *)_Str1,(ushort *)_Str2,_MaxCount);
        return iVar2;
      }
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
      iVar2 = 0x7fffffff;
    }
  }
  else {
    iVar2 = __wcsnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


