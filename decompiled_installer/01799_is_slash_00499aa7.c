// Function: is_slash
// Entry: 00499aa7
// Size: 27 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl is_slash(wchar_t)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl is_slash(wchar_t param_1)

{
  if ((param_1 != L'\\') && (param_1 != L'/')) {
    return false;
  }
  return true;
}


