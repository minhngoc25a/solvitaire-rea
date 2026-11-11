// Function: __wfullpath
// Entry: 004e6e94
// Size: 30 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wfullpath
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __wfullpath(wchar_t *_FullPath,wchar_t *_Path,size_t _SizeInWords)

{
  wchar_t *pwVar1;
  
  pwVar1 = common_fullpath<wchar_t>(_FullPath,_Path,_SizeInWords,1,(char *)0x0,0);
  return pwVar1;
}


