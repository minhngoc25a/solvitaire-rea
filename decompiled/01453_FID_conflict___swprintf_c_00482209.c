// Function: FID_conflict:__swprintf_c
// Entry: 00482209
// Size: 30 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    __snprintf_c
    __sprintf_p
    __swprintf_c
    __swprintf_p
     7 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl FID_conflict___swprintf_c(wchar_t *_Dest,wchar_t *_Format,...)

{
  int iVar1;
  wchar_t *in_stack_0000000c;
  
  iVar1 = FID_conflict___vsnprintf_c_l
                    (_Dest,(size_t)_Format,in_stack_0000000c,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}


