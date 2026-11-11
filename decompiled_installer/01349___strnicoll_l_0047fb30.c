// Function: __strnicoll_l
// Entry: 0047fb30
// Size: 200 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2019 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10 [2];
  char local_8;
  
  FUN_00425544(&local_14,(int *)_Locale);
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  else {
    iVar3 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      if (*(wchar_t **)(local_10[0] + 0xa4) == (wchar_t *)0x0) {
        iVar3 = FUN_004c3ef4((byte *)_Str1,(byte *)_Str2,_MaxCount,local_10);
      }
      else {
        iVar2 = ___acrt_CompareStringA
                          (local_10,*(wchar_t **)(local_10[0] + 0xa4),0x1001,(byte *)_Str1,_MaxCount
                           ,(byte *)_Str2,_MaxCount,*(uint *)(local_10[0] + 0x10));
        if (iVar2 == 0) {
          p_Var1 = FUN_0042470e();
          *(undefined4 *)p_Var1 = 0x16;
        }
        else {
          iVar3 = iVar2 + -2;
        }
      }
    }
    else {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar3;
}


