// Function: parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
// Entry: 00453501
// Size: 58 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_0050ce80)[iVar2] || (*param_1 == (&DAT_0050ce88)[iVar2]))) {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar2 = iVar2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 5) {
      return true;
    }
  }
  return false;
}


