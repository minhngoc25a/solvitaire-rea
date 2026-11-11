// Function: _wcspbrk
// Entry: 004c2a57
// Size: 78 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _wcspbrk
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        wVar1 = *_Str;
        pwVar3 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == wVar1) {
            return _Str;
          }
          pwVar3 = pwVar3 + 1;
          wVar2 = *pwVar3;
          wVar1 = *_Str;
        } while (wVar2 != L'\0');
      }
      _Str = _Str + 1;
    } while (*_Str != L'\0');
  }
  return (wchar_t *)0x0;
}


