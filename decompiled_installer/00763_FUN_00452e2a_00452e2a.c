// Function: FUN_00452e2a
// Entry: 00452e2a
// Size: 1122 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00452e2a(_locale_t param_1,
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
            int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var;
  byte bVar6;
  int iVar7;
  int *piVar8;
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  byte local_b [4];
  char local_7;
  char local_6;
  byte local_5;
  
  uVar3 = FUN_004522e1((int *)param_2);
  if ((char)uVar3 == '\0') {
    return 7;
  }
  local_1c = *(undefined4 *)(param_2 + 0x14);
  local_20 = *(undefined4 *)(param_2 + 0x10);
  bVar1 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  local_28 = local_b;
  local_24 = &local_20;
  local_2c = param_2;
  while( true ) {
    local_b[0] = bVar1;
    uVar4 = FUN_0044e948((uint)bVar1,8,param_1);
    if (uVar4 == 0) break;
    bVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
  }
  *(bool *)(param_3 + 0xc2) = local_b[0] == 0x2d;
  if ((local_b[0] == 0x2d) || (bVar1 = local_b[0], local_b[0] == 0x2b)) {
    bVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = bVar1;
  }
  if ((bVar1 == 0x49) || (bVar1 == 0x69)) {
    cVar2 = FUN_0045333a((char *)local_b,param_2,local_20,local_1c);
    return CONCAT31(extraout_var,cVar2);
  }
  if ((bVar1 == 0x4e) || (bVar1 == 0x6e)) {
    uVar4 = FUN_004533f9((char *)local_b,param_2,local_20,local_1c);
    return uVar4;
  }
  local_5 = 0;
  if (bVar1 == 0x30) {
    local_10 = *(int **)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    cVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_14 = CONCAT31(local_14._1_3_,cVar2);
    if ((cVar2 == 'x') || (cVar2 == 'X')) {
      local_5 = 1;
      bVar1 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = bVar1;
      local_1c = local_10;
      local_20 = uVar3;
    }
    else {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar2);
      bVar1 = local_b[0];
    }
  }
  local_14 = 0;
  local_6 = '\0';
  local_10 = param_3 + 2;
  if (bVar1 == 0x30) {
    local_6 = '\x01';
    do {
      bVar1 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = bVar1;
    } while (bVar1 == 0x30);
  }
  uVar4 = ((local_5 == 0) - 1 & 6) + 9;
  piVar8 = local_10;
  local_18 = uVar4;
  while( true ) {
    if ((byte)(bVar1 - 0x30) < 10) {
      uVar5 = (int)(char)bVar1 - 0x30;
    }
    else if ((byte)(bVar1 + 0x9f) < 0x1a) {
      uVar5 = (int)(char)bVar1 - 0x57;
    }
    else if ((byte)(bVar1 + 0xbf) < 0x1a) {
      uVar5 = (int)(char)bVar1 - 0x37;
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar4 < uVar5) break;
    local_6 = '\x01';
    if (piVar8 != param_3 + 0xc2) {
      *(char *)piVar8 = (char)uVar5;
      piVar8 = (int *)((int)piVar8 + 1);
    }
    local_14 = local_14 + 1;
    bVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = bVar1;
  }
  if (bVar1 == *(byte *)*param_1->locinfo->ctype1_refcount) {
    local_10 = piVar8;
    cVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar2;
    piVar8 = local_10;
    iVar7 = local_14;
    uVar4 = local_18;
    if ((local_10 == param_3 + 2) && (cVar2 == '0')) {
      local_6 = '\x01';
      do {
        iVar7 = iVar7 + -1;
        cVar2 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          (param_2);
        local_b[0] = cVar2;
        piVar8 = local_10;
        uVar4 = local_18;
      } while (cVar2 == '0');
    }
    while( true ) {
      local_14 = iVar7;
      if ((byte)(cVar2 - 0x30U) < 10) {
        uVar5 = (int)cVar2 - 0x30;
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar5 = (int)cVar2 - 0x57;
      }
      else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar5 = (int)cVar2 - 0x37;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if (uVar4 < uVar5) break;
      local_6 = '\x01';
      if (piVar8 != param_3 + 0xc2) {
        *(char *)piVar8 = (char)uVar5;
        piVar8 = (int *)((int)piVar8 + 1);
      }
      cVar2 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar2;
      iVar7 = local_14;
    }
  }
  local_10 = piVar8;
  iVar7 = 0;
  if (local_6 == '\0') {
    cVar2 = FID_conflict_operator__(&local_2c);
    if (cVar2 == '\0') {
      return 7;
    }
    if (local_5 == 0) {
      return 7;
    }
    return 2;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  local_1c = *(undefined4 *)(param_2 + 0x14);
  local_20 = *(undefined4 *)(param_2 + 0x10);
  bVar1 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  if (bVar1 == 0x45) {
LAB_004530d0:
    bVar6 = local_5 ^ 1;
  }
  else if (bVar1 == 0x50) {
LAB_004530cb:
    bVar6 = local_5;
  }
  else {
    if (bVar1 == 0x65) goto LAB_004530d0;
    bVar6 = 0;
    if (bVar1 == 0x70) goto LAB_004530cb;
  }
  local_b[0] = bVar1;
  if (bVar6 != 0) {
    local_b[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                           (param_2);
    local_7 = local_b[0] == 0x2d;
    if ((local_b[0] == 0x2b) || (local_b[0] == 0x2d)) {
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    local_6 = '\0';
    if (local_b[0] == 0x30) {
      local_6 = '\x01';
      local_b[0] = 0x30;
      do {
        local_b[0] = __crt_strtox::
                     input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                     ::get(param_2);
      } while (local_b[0] == 0x30);
    }
    while( true ) {
      if ((byte)(local_b[0] - 0x30) < 10) {
        uVar4 = (int)(char)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9f) < 0x1a) {
        uVar4 = (int)(char)local_b[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_b[0] + 0xbf)) goto LAB_0045317b;
        uVar4 = (int)(char)local_b[0] - 0x37;
      }
      if (9 < uVar4) goto LAB_0045317b;
      local_6 = '\x01';
      iVar7 = iVar7 * 10 + uVar4;
      if (0x1450 < iVar7) break;
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    iVar7 = 0x1451;
LAB_0045317b:
    do {
      if ((byte)(local_b[0] - 0x30) < 10) {
        uVar4 = (int)(char)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9f) < 0x1a) {
        uVar4 = (int)(char)local_b[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_b[0] + 0xbf)) goto LAB_004531bc;
        uVar4 = (int)(char)local_b[0] - 0x37;
      }
      if (9 < uVar4) goto LAB_004531bc;
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    } while( true );
  }
LAB_004531e4:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  do {
    piVar8 = local_10;
    if (piVar8 == param_3 + 2) {
      return 2;
    }
    local_10 = (int *)((int)piVar8 + -1);
  } while (*(char *)((int)piVar8 + -1) == '\0');
  if (iVar7 < 0x1451) {
    if (-0x1451 < iVar7) {
      iVar7 = iVar7 + (((local_5 == 0) - 1 & 3) + 1) * local_14;
      if (0x1450 < iVar7) goto LAB_0045325b;
      if (-0x1451 < iVar7) {
        *param_3 = iVar7;
        param_3[1] = (int)piVar8 - (int)(param_3 + 2);
        return (uint)local_5;
      }
    }
    uVar4 = 8;
  }
  else {
LAB_0045325b:
    uVar4 = 9;
  }
  return uVar4;
LAB_004531bc:
  if (local_7 != '\0') {
    iVar7 = -iVar7;
  }
  if (local_6 == '\0') {
    cVar2 = FID_conflict_operator__(&local_2c);
    if (cVar2 == '\0') {
      return 7;
    }
    local_b[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                           (param_2);
  }
  goto LAB_004531e4;
}


