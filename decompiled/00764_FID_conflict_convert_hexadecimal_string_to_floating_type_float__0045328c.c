// Function: FID_conflict:convert_hexadecimal_string_to_floating_type<float>
// Entry: 0045328c
// Size: 33 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
   
   Library: Visual Studio 2019 Release */

void __cdecl
FID_conflict_convert_hexadecimal_string_to_floating_type<float>(uint *param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = 0;
  FUN_0044f656(param_1,(floating_point_value *)&local_c);
  return;
}


