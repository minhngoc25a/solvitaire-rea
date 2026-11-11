// Function: __strnicmp
// Entry: 004c3e87
// Size: 109 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __strnicmp
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (DAT_005441f0 == 0) {
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
      iVar2 = 0x7fffffff;
    }
    else {
      if (_MaxCount < 0x80000000) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
        return iVar2;
      }
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
      iVar2 = 0x7fffffff;
    }
  }
  else {
    iVar2 = FUN_004c3ef4((byte *)_Str1,(byte *)_Str2,_MaxCount,(int *)0x0);
  }
  return iVar2;
}


