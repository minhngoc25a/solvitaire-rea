// Function: __wcsicmp
// Entry: 004a377f
// Size: 73 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2019 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (DAT_005441f0 != 0) {
    iVar2 = FUN_004a37c8((ushort *)_Str1,(ushort *)_Str2,(int *)0x0);
    return iVar2;
  }
  if ((_Str1 != (wchar_t *)0x0) && (_Str2 != (wchar_t *)0x0)) {
    iVar2 = FUN_004a3880((ushort *)_Str1,(ushort *)_Str2);
    return iVar2;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x16;
  FUN_004243be();
  return 0x7fffffff;
}


