// Function: __acrt_stdio_parse_mode<wchar_t>
// Entry: 004c6607
// Size: 619 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  short sVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  __acrt_ptd *p_Var8;
  uint in_ECX;
  wchar_t *pwVar9;
  short *in_stack_00000008;
  undefined4 uStack_8;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_00544b18;
  sVar1 = *in_stack_00000008;
  while (sVar1 == 0x20) {
    in_stack_00000008 = in_stack_00000008 + 1;
    sVar1 = *in_stack_00000008;
  }
  if (sVar1 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_004c666f:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar1 != 0x72) {
      uStack_8 = in_ECX;
      if (sVar1 != 0x77) goto LAB_004c685b;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_004c666f;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar9 = in_stack_00000008 + 1;
  cVar5 = '\x01';
  uStack_8 = in_ECX & 0xffff;
  bVar4 = false;
  bVar3 = false;
  do {
    wVar2 = *pwVar9;
    if (wVar2 == L'\0') break;
    if ((ushort)wVar2 < 0x54) {
      if (wVar2 == L'S') {
        if (bVar3) goto LAB_004c66dd;
        *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_004c66f5:
        bVar3 = true;
        cVar5 = '\x01';
      }
      else if (wVar2 != L' ') {
        if (wVar2 == L'+') {
          cVar5 = __acrt_stdio_parse_mode_plus
                            ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 2));
        }
        else if (wVar2 == L',') {
          bVar4 = true;
LAB_004c66dd:
          cVar5 = '\0';
        }
        else if (wVar2 == L'D') {
          cVar5 = __acrt_stdio_parse_mode_D((__acrt_stdio_stream_mode *)param_1);
        }
        else {
          if (wVar2 != L'N') {
            if (wVar2 == L'R') {
              if (!bVar3) {
                *(uint *)param_1 = *(uint *)param_1 | 0x10;
                goto LAB_004c66f5;
              }
              goto LAB_004c66dd;
            }
            goto LAB_004c685b;
          }
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
          cVar5 = '\x01';
        }
      }
    }
    else if (wVar2 == L'T') {
      cVar5 = __acrt_stdio_parse_mode_T((__acrt_stdio_stream_mode *)param_1);
    }
    else if (wVar2 == L'b') {
      uVar6 = FID_conflict___acrt_stdio_parse_mode_b((uint *)param_1);
      cVar5 = (char)uVar6;
    }
    else if (wVar2 == L'c') {
      cVar5 = __acrt_stdio_parse_mode_c
                        ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 3));
    }
    else if (wVar2 == L'n') {
      cVar5 = __acrt_stdio_parse_mode_n
                        ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 3));
    }
    else if (wVar2 == L't') {
      uVar6 = FID_conflict___acrt_stdio_parse_mode_b((uint *)param_1);
      cVar5 = (char)uVar6;
    }
    else {
      if (wVar2 != L'x') goto LAB_004c685b;
      cVar5 = __acrt_stdio_parse_mode_x((__acrt_stdio_stream_mode *)param_1);
    }
    pwVar9 = (wchar_t *)((int)pwVar9 + (-(uint)(cVar5 != '\0') & 2));
  } while (cVar5 != '\0');
  if (bVar4) {
    pwVar9 = pwVar9 + 1;
  }
  for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
  }
  if (bVar4) {
    iVar7 = _wcsncmp(pwVar9,L"ccs",3);
    if (iVar7 != 0) goto LAB_004c685b;
    pwVar9 = pwVar9 + 3;
    wVar2 = *pwVar9;
    while (wVar2 == L' ') {
      pwVar9 = pwVar9 + 1;
      wVar2 = *pwVar9;
    }
    if (wVar2 != L'=') goto LAB_004c685b;
    do {
      pwVar9 = pwVar9 + 1;
    } while (*pwVar9 == L' ');
    iVar7 = __wcsnicmp(pwVar9,L"UTF-8",5);
    if (iVar7 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
      iVar7 = 10;
    }
    else {
      iVar7 = __wcsnicmp(pwVar9,L"UTF-16LEUNICODE",8);
      if (iVar7 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        iVar7 = 0x10;
      }
      else {
        iVar7 = __wcsnicmp(pwVar9,L"UNICODE",7);
        if (iVar7 != 0) goto LAB_004c685b;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        iVar7 = 0xe;
      }
    }
    pwVar9 = (wchar_t *)((int)pwVar9 + iVar7);
    wVar2 = *pwVar9;
    while (wVar2 == L' ') {
      pwVar9 = pwVar9 + 1;
      wVar2 = *pwVar9;
    }
  }
  else {
    wVar2 = *pwVar9;
  }
  if (wVar2 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_004c685b:
  p_Var8 = FUN_0042470e();
  *(undefined4 *)p_Var8 = 0x16;
  FUN_004243be();
  return param_1;
}


