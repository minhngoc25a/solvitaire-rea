// Function: _wcscspn
// Entry: 004c29fe
// Size: 89 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _wcscspn
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = _Str;
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar3 = _Control;
        wVar1 = *_Control;
        do {
          if (*pwVar2 == wVar1) goto LAB_004c2a4c;
          pwVar3 = pwVar3 + 1;
          wVar1 = *pwVar3;
        } while (wVar1 != L'\0');
      }
      pwVar2 = pwVar2 + 1;
    } while (*pwVar2 != L'\0');
  }
LAB_004c2a4c:
  return (int)pwVar2 - (int)_Str >> 1;
}


