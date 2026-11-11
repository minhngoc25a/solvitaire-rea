// Function: FID_conflict:__dupenv_s
// Entry: 0042480e
// Size: 30 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    __dupenv_s
    __wdupenv_s
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict___dupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,wchar_t *_VarName)

{
  errno_t eVar1;
  
  eVar1 = common_dupenv_s<>(_Buffer,_BufferSizeInWords,(char *)_VarName);
  return eVar1;
}


