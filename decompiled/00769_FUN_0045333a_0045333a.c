// Function: FUN_0045333a
// Entry: 0045333a
// Size: 191 bytes
// Thunk: false
// External: false


char __cdecl
FUN_0045333a(char *param_1,
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
            undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *local_14;
  char *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = &param_3;
  iVar2 = 0;
  local_14 = param_2;
  local_10 = param_1;
  local_8 = 0;
  while ((*param_1 == (&DAT_0050ce60)[local_8] || (*param_1 == (&DAT_0050ce64)[local_8]))) {
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_8 = local_8 + 1;
    *param_1 = cVar1;
    if (local_8 == 3) {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar1);
      param_4 = *(undefined4 *)(param_2 + 0x14);
      param_3 = *(undefined4 *)(param_2 + 0x10);
      cVar1 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      *param_1 = cVar1;
      while ((*param_1 == "INITY"[iVar2] || (*param_1 == "inity"[iVar2]))) {
        cVar1 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          (param_2);
        iVar2 = iVar2 + 1;
        *param_1 = cVar1;
        if (iVar2 == 5) {
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                    (param_2,cVar1);
          return '\x03';
        }
      }
      cVar1 = FID_conflict_operator__(&local_14);
      return (cVar1 == '\0') * '\x04' + '\x03';
    }
  }
  FID_conflict_operator__(&local_14);
  return '\a';
}


