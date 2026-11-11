// Function: __wfopen
// Entry: 0048295f
// Size: 23 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wfopen
   
   Library: Visual Studio 2019 Release */

FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode)

{
  _iobuf *p_Var1;
  
  p_Var1 = common_fsopen<wchar_t>(_Filename,_Mode,0x40);
  return p_Var1;
}


