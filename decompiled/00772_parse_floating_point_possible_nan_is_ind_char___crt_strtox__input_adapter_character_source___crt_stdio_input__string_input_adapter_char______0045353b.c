// Function: parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
// Entry: 0045353b
// Size: 58 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_0050ce90)[iVar2] || (*param_1 == (&DAT_0050ce94)[iVar2]))) {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar2 = iVar2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 4) {
      return true;
    }
  }
  return false;
}


