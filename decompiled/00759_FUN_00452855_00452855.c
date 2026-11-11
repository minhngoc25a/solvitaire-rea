// Function: FUN_00452855
// Entry: 00452855
// Size: 772 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00452a67) */
/* WARNING: Type propagation algorithm not settling */

ulonglong __cdecl FUN_00452855(int *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  byte in_stack_0000002c;
  uint local_24;
  uint local_20;
  uint local_14;
  byte local_c;
  
  uVar6 = FUN_004522e1((int *)&stack0x00000008);
  uVar11 = in_stack_00000028;
  iVar4 = in_stack_0000001c;
  iVar3 = in_stack_00000018;
  if ((char)uVar6 == '\0') goto LAB_00452ab3;
  if ((in_stack_00000028 != 0) && (((int)in_stack_00000028 < 2 || (0x24 < (int)in_stack_00000028))))
  {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    if (in_stack_00000020 == (undefined1 *)0x0) {
      return 0;
    }
    if (in_stack_00000018 != 0 || in_stack_0000001c != 0) {
      return 0;
    }
    *in_stack_00000020 = 0;
    return 0;
  }
  uVar1 = 0;
  local_c = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                        *)&stack0x00000008);
  if ((char)param_1[5] == '\0') {
    FUN_0044ef90(param_1);
  }
  uVar7 = FUN_0044e948((uint)local_c,8,(_locale_t)(param_1 + 3));
  while (uVar7 != 0) {
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
    uVar7 = FUN_0044e948((uint)local_c,8,(_locale_t)(param_1 + 3));
    uVar11 = in_stack_00000028;
  }
  if (local_c == 0x2d) {
    bVar2 = in_stack_0000002c | 2;
LAB_00452947:
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
  }
  else {
    bVar2 = in_stack_0000002c;
    if (local_c == 0x2b) goto LAB_00452947;
  }
  if ((uVar11 == 0) || (uVar11 == 0x10)) {
    if ((byte)(local_c - 0x30) < 10) {
      iVar8 = (char)local_c + -0x30;
LAB_0045298b:
      if (iVar8 == 0) {
        cVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                            *)&stack0x00000008);
        if ((cVar5 == 'x') || (cVar5 == 'X')) {
          if (uVar11 == 0) {
            uVar11 = 0x10;
          }
          local_c = __crt_strtox::
                    input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                    get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                         *)&stack0x00000008);
        }
        else {
          if (uVar11 == 0) {
            uVar11 = 8;
          }
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                    ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                      *)&stack0x00000008,cVar5);
        }
        goto LAB_004529d3;
      }
    }
    else {
      if ((byte)(local_c + 0x9f) < 0x1a) {
        iVar8 = (char)local_c + -0x57;
        goto LAB_0045298b;
      }
      if ((byte)(local_c + 0xbf) < 0x1a) {
        iVar8 = (char)local_c + -0x37;
        goto LAB_0045298b;
      }
    }
    if (uVar11 == 0) {
      uVar11 = 10;
    }
  }
LAB_004529d3:
  uVar12 = __aulldiv(0xffffffff,0xffffffff,uVar11,(int)uVar11 >> 0x1f);
  while( true ) {
    uVar7 = (uint)(uVar1 >> 0x20);
    local_14 = (uint)uVar1;
    if ((byte)(local_c - 0x30) < 10) {
      uVar9 = (int)(char)local_c - 0x30;
    }
    else if ((byte)(local_c + 0x9f) < 0x1a) {
      uVar9 = (int)(char)local_c - 0x57;
    }
    else if ((byte)(local_c + 0xbf) < 0x1a) {
      uVar9 = (int)(char)local_c - 0x37;
    }
    else {
      uVar9 = 0xffffffff;
    }
    if (uVar11 <= uVar9) break;
    uVar13 = __allmul(uVar11,(int)uVar11 >> 0x1f,local_14,uVar7);
    uVar1 = uVar13 + uVar9;
    local_20 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((uVar7 < local_20) ||
       ((uVar7 <= local_20 && (local_24 = (uint)uVar12, local_14 <= local_24)))) {
      bVar10 = 0;
    }
    else {
      bVar10 = 1;
    }
    bVar2 = bVar2 | (uVar1 < uVar13 | bVar10) << 2 | 8;
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)
        &stack0x00000008,local_c);
  if ((bVar2 & 8) != 0) {
    cVar5 = FUN_00452de9(bVar2,local_14,uVar7);
    if (cVar5 == '\0') {
      if ((bVar2 & 2) != 0) {
        uVar1 = CONCAT44(-(uVar7 + (local_14 != 0)),-local_14);
      }
    }
    else {
      *(undefined1 *)(param_1 + 7) = 1;
      param_1[6] = 0x22;
      if ((bVar2 & 1) != 0) {
        if ((bVar2 & 2) == 0) {
          if ((in_stack_00000020 != (undefined1 *)0x0) &&
             (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
            *in_stack_00000020 = 0;
          }
          return 0x7fffffffffffffff;
        }
        if ((in_stack_00000020 != (undefined1 *)0x0) &&
           (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
          *in_stack_00000020 = 0;
        }
        return 0x8000000000000000;
      }
      uVar1 = 0xffffffffffffffff;
    }
    if (in_stack_00000020 != (undefined1 *)0x0) {
      if (in_stack_00000018 == 0 && in_stack_0000001c == 0) {
        *in_stack_00000020 = 0;
        return uVar1;
      }
      return uVar1;
    }
    return uVar1;
  }
  restore_state(&stack0x00000008,iVar3,iVar4);
LAB_00452ab3:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return 0;
}


