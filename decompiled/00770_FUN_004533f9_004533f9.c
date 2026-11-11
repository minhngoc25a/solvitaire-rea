// Function: FUN_004533f9
// Entry: 004533f9
// Size: 264 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004533f9(char *param_1,
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
            undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *local_10;
  char *local_c;
  undefined4 *local_8;
  
  local_8 = &param_3;
  iVar3 = 0;
  local_10 = param_2;
  local_c = param_1;
  do {
    if ((*param_1 != (&DAT_0050ce78)[iVar3]) && (*param_1 != (&DAT_0050ce7c)[iVar3])) {
      FID_conflict_operator__(&local_10);
      return 7;
    }
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar3 = iVar3 + 1;
    *param_1 = cVar1;
  } while (iVar3 != 3);
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,cVar1);
  param_4 = *(undefined4 *)(param_2 + 0x14);
  param_3 = *(undefined4 *)(param_2 + 0x10);
  cVar1 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    *param_1 = cVar1;
    bVar2 = __crt_strtox::
            parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                      (param_1,param_2);
    if (bVar2) {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,*param_1);
      iVar3 = 5;
    }
    else {
      bVar2 = __crt_strtox::
              parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                        (param_1,param_2);
      cVar1 = *param_1;
      if (bVar2) {
        __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
        ::unget(param_2,cVar1);
        iVar3 = 6;
      }
      else {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_0045345a;
          cVar1 = __crt_strtox::
                  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                  get(param_2);
          *param_1 = cVar1;
        }
        iVar3 = 4;
      }
    }
  }
  else {
LAB_0045345a:
    cVar1 = FID_conflict_operator__(&local_10);
    iVar3 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return iVar3;
}


