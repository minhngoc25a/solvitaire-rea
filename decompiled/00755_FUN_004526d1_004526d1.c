// Function: FUN_004526d1
// Entry: 004526d1
// Size: 138 bytes
// Thunk: false
// External: false


void __cdecl FUN_004526d1(_locale_t param_1)

{
  __acrt_ptd *p_Var1;
  floating_point_parse_result fVar2;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  float *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (float *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  else {
    fVar2 = FUN_00452e2a(param_1,(input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                                  *)&stack0x00000008,(int *)local_314);
    __crt_strtox::parse_floating_point_write_result<float>(fVar2,local_314,in_stack_00000028);
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


