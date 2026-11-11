// Function: __strnicoll
// Entry: 0047fb07
// Size: 41 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __strnicoll
   
   Library: Visual Studio 2019 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_005441f0 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


