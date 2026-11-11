// Function: FUN_00452563
// Entry: 00452563
// Size: 366 bytes
// Thunk: false
// External: false


uint __thiscall FUN_00452563(void *this,int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  __acrt_ptd *p_Var3;
  undefined4 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  pwVar6 = (wchar_t *)0x0;
  if (*(char *)((int)this + 0x2e) == '\0') {
    puVar1 = *(undefined4 **)((int)this + 0x6c);
    *(undefined4 **)((int)this + 0x6c) = puVar1 + 1;
    pwVar6 = (wchar_t *)*puVar1;
    if (pwVar6 == (wchar_t *)0x0) {
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0x16;
      p_Var3 = (__acrt_ptd *)FUN_004243be();
      goto LAB_00452598;
    }
    if ((*(uint *)this & 1) == 0) goto LAB_004525dc;
    *(undefined4 **)((int)this + 0x6c) = puVar1 + 2;
    uVar5 = puVar1[1];
    if (uVar5 == 0) {
      if ((*(uint *)this & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)((int)this + 8));
        *pwVar6 = L'\0';
      }
LAB_004525cf:
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0xc;
      goto LAB_00452598;
    }
  }
  else {
LAB_004525dc:
    uVar5 = 0xffffffff;
  }
  local_14 = *(uint *)((int)this + 0x30);
  local_18 = *(uint *)((int)this + 0x34);
  local_10 = uVar5;
  if ((param_1 != 0) && (uVar5 != 0xffffffff)) {
    local_10 = uVar5 - 1;
  }
  local_c = 0;
  local_8 = 0;
  local_20 = pwVar6;
  while( true ) {
    if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
    goto LAB_0045268e;
    local_1c = __crt_stdio_input::string_input_adapter<char>::get
                         ((string_input_adapter<char> *)((int)this + 8));
    uVar4 = FUN_00451fe8(this,param_1,local_1c);
    if ((char)uVar4 == '\0') break;
    if (*(char *)((int)this + 0x2e) == '\0') {
      if (local_10 == 0) {
        if (uVar5 != 0xffffffff) {
          *pwVar6 = L'\0';
        }
        goto LAB_004525cf;
      }
      bVar2 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character
                        (this,pwVar6,uVar5,&local_20,&local_10,(char)local_1c);
      if (!bVar2) goto LAB_0045268e;
    }
    bVar2 = 0xfffffffe < local_c;
    local_c = local_c + 1;
    local_8 = local_8 + bVar2;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)((int)this + 8),local_1c);
LAB_0045268e:
  uVar5 = local_c | local_8;
  p_Var3 = (__acrt_ptd *)0x0;
  if (uVar5 == 0) {
LAB_00452598:
    return (uint)p_Var3 & 0xffffff00;
  }
  if ((param_1 == 0) && ((local_c != local_14 || (local_8 != local_18)))) {
    uVar5 = *(uint *)this & 4;
    p_Var3 = (__acrt_ptd *)0x0;
    if (uVar5 == 0) goto LAB_00452598;
  }
  if ((*(char *)((int)this + 0x2e) == '\0') && (param_1 != 0)) {
    *local_20 = L'\0';
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


