// Function: skip_whitespace<__crt_stdio_input::string_input_adapter,char>
// Entry: 00452154
// Size: 47 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::string_input_adapter,char>(class __crt_stdio_input::string_input_adapter<char>
   &,struct __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__crt_stdio_input::skip_whitespace<__crt_stdio_input::string_input_adapter,char>
          (string_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = string_input_adapter<char>::get(param_1);
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar2 = FUN_0044e948(uVar1 & 0xff,8,(_locale_t)param_2);
  } while (uVar2 != 0);
  return uVar1;
}


