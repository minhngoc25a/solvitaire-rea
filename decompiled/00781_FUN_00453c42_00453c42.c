// Function: FUN_00453c42
// Entry: 00453c42
// Size: 1550 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00453c42(int *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  wchar_t *pwVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  wchar_t wVar8;
  uint uVar9;
  uint uVar10;
  wint_t _C;
  wchar_t local_8c;
  wchar_t local_88;
  int local_c;
  uint local_8;
  
  uVar3 = FUN_004536c1((int *)&param_2);
  uVar10 = param_4;
  pwVar1 = param_2;
  if ((char)uVar3 == '\0') {
LAB_00453c8b:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_00453c8b;
  }
  local_8 = 0;
  uVar9 = (uint)(ushort)*param_2;
  param_2 = param_2 + 1;
  if ((char)param_1[5] == '\0') {
    FUN_0044ef90(param_1);
  }
  while( true ) {
    _C = (wint_t)uVar9;
    iVar4 = _iswctype(_C,8);
    if (iVar4 == 0) break;
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  if (_C == 0x2d) {
    bVar6 = param_5 | 2;
LAB_00453cf5:
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar6 = param_5;
    if (_C == 0x2b) goto LAB_00453cf5;
  }
  local_c = 0x660;
  if ((uVar10 != 0) && (uVar10 != 0x10)) goto LAB_00453ff4;
  uVar7 = (ushort)uVar9;
  if (uVar7 < 0x30) goto LAB_00453f81;
  iVar4 = 0x30;
  if (uVar7 < 0x3a) {
LAB_00453e24:
    iVar4 = -iVar4;
LAB_00453f7c:
    iVar4 = uVar9 + iVar4;
    if (iVar4 == -1) goto LAB_00453f81;
LAB_00453fa6:
    if (iVar4 == 0) {
      wVar8 = *param_2;
      if ((wVar8 == L'x') || (wVar8 == L'X')) {
        if (uVar10 == 0) {
          uVar10 = 0x10;
          param_4 = 0x10;
        }
        uVar9 = (uint)(ushort)param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar10 == 0) {
          uVar10 = 8;
          param_4 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<wchar_t>::unget
                  ((c_string_character_source<wchar_t> *)&param_2,wVar8);
      }
      goto LAB_00453ff4;
    }
  }
  else {
    if (uVar7 < 0xff10) {
      if ((0x65f < uVar7) &&
         ((iVar4 = local_c, uVar7 < 0x66a ||
          ((iVar4 = 0x6f0, 0x6ef < uVar7 &&
           ((uVar7 < 0x6fa ||
            ((iVar4 = 0x966, 0x965 < uVar7 &&
             ((uVar7 < 0x970 ||
              ((iVar4 = 0x9e6, 0x9e5 < uVar7 &&
               ((uVar7 < 0x9f0 ||
                ((iVar4 = 0xa66, 0xa65 < uVar7 &&
                 ((uVar7 < 0xa70 ||
                  ((iVar4 = 0xae6, 0xae5 < uVar7 &&
                   ((uVar7 < 0xaf0 ||
                    ((iVar4 = 0xb66, 0xb65 < uVar7 &&
                     ((uVar7 < 0xb70 ||
                      ((iVar4 = 0xc66, 0xc65 < uVar7 &&
                       ((uVar7 < 0xc70 ||
                        ((iVar4 = 0xce6, 0xce5 < uVar7 &&
                         ((uVar7 < 0xcf0 ||
                          ((iVar4 = 0xd66, 0xd65 < uVar7 &&
                           ((uVar7 < 0xd70 ||
                            ((iVar4 = 0xe50, 0xe4f < uVar7 &&
                             ((uVar7 < 0xe5a ||
                              ((iVar4 = 0xed0, 0xecf < uVar7 &&
                               ((uVar7 < 0xeda ||
                                ((iVar4 = 0xf20, 0xf1f < uVar7 &&
                                 ((uVar7 < 0xf2a ||
                                  ((iVar4 = 0x1040, 0x103f < uVar7 &&
                                   ((uVar7 < 0x104a ||
                                    ((iVar4 = 0x17e0, 0x17df < uVar7 &&
                                     ((uVar7 < 0x17ea ||
                                      ((iVar4 = 0x1810, 0x180f < uVar7 && (uVar7 < 0x181a)))))))))))
                                  )))))))))))))))))))))))))))))))))))))))))))))))))))
      goto LAB_00453e24;
    }
    else if (uVar7 < 0xff1a) {
      iVar4 = -0xff10;
      goto LAB_00453f7c;
    }
LAB_00453f81:
    if (((0x40 < uVar9) && (uVar9 < 0x5b)) || (uVar9 - 0x61 < 0x1a)) {
      uVar5 = uVar9;
      if (uVar9 - 0x61 < 0x1a) {
        uVar5 = uVar9 - 0x20;
      }
      iVar4 = uVar5 - 0x37;
      goto LAB_00453fa6;
    }
  }
  if (uVar10 == 0) {
    uVar10 = 10;
    param_4 = 10;
  }
LAB_00453ff4:
  do {
    wVar8 = (wchar_t)uVar9;
    if ((ushort)wVar8 < 0x30) {
LAB_00454159:
      if (((uVar9 < 0x41) || (0x5a < uVar9)) && ((uVar9 < 0x61 || (0x7a < (ushort)wVar8)))) {
        uVar5 = 0xffffffff;
      }
      else {
        if ((ushort)(wVar8 + L'ﾟ') < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar5 = uVar9 - 0x37;
      }
    }
    else {
      if (0x39 < (ushort)wVar8) {
        iVar4 = 0xff10;
        if ((ushort)wVar8 < 0xff10) {
          iVar4 = 0x660;
          if (0x65f < (ushort)wVar8) {
            if ((ushort)wVar8 < 0x66a) {
LAB_0045414f:
              iVar4 = -iVar4;
              goto LAB_00454154;
            }
            iVar4 = 0x6f0;
            if (0x6ef < (ushort)wVar8) {
              if ((ushort)wVar8 < 0x6fa) goto LAB_0045414f;
              iVar4 = 0x966;
              if (0x965 < (ushort)wVar8) {
                if ((ushort)wVar8 < 0x970) goto LAB_0045414f;
                iVar4 = 0x9e6;
                if (0x9e5 < (ushort)wVar8) {
                  if ((ushort)wVar8 < 0x9f0) goto LAB_0045414f;
                  iVar4 = 0xa66;
                  if (0xa65 < (ushort)wVar8) {
                    if ((ushort)wVar8 < 0xa70) goto LAB_0045414f;
                    iVar4 = 0xae6;
                    if (0xae5 < (ushort)wVar8) {
                      if ((ushort)wVar8 < 0xaf0) goto LAB_0045414f;
                      iVar4 = 0xb66;
                      if (0xb65 < (ushort)wVar8) {
                        if ((ushort)wVar8 < 0xb70) goto LAB_0045414f;
                        iVar4 = 0xc66;
                        if (0xc65 < (ushort)wVar8) {
                          if ((ushort)wVar8 < 0xc70) goto LAB_0045414f;
                          iVar4 = 0xce6;
                          if (0xce5 < (ushort)wVar8) {
                            if ((ushort)wVar8 < 0xcf0) goto LAB_0045414f;
                            iVar4 = 0xd66;
                            if (0xd65 < (ushort)wVar8) {
                              if ((ushort)wVar8 < 0xd70) goto LAB_0045414f;
                              iVar4 = 0xe50;
                              if (0xe4f < (ushort)wVar8) {
                                if ((ushort)wVar8 < 0xe5a) goto LAB_0045414f;
                                iVar4 = 0xed0;
                                if (0xecf < (ushort)wVar8) {
                                  if ((ushort)wVar8 < 0xeda) goto LAB_0045414f;
                                  iVar4 = 0xf20;
                                  if (0xf1f < (ushort)wVar8) {
                                    if ((ushort)wVar8 < 0xf2a) goto LAB_0045414f;
                                    iVar4 = 0x1040;
                                    if (0x103f < (ushort)wVar8) {
                                      if ((ushort)wVar8 < 0x104a) goto LAB_0045414f;
                                      iVar4 = 0x17e0;
                                      if (0x17df < (ushort)wVar8) {
                                        if ((ushort)wVar8 < 0x17ea) goto LAB_0045414f;
                                        iVar4 = 0x1810;
                                        if (0x180f < (ushort)wVar8) {
                                          local_88 = L'᠚';
                                          goto LAB_0045414d;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_8c = L'：';
          local_88 = local_8c;
LAB_0045414d:
          if ((ushort)wVar8 < (ushort)local_88) goto LAB_0045414f;
        }
        goto LAB_00454159;
      }
      iVar4 = -0x30;
LAB_00454154:
      uVar5 = uVar9 + iVar4;
      if (uVar5 == 0xffffffff) goto LAB_00454159;
    }
    if (param_4 <= uVar5) {
      __crt_strtox::c_string_character_source<wchar_t>::unget
                ((c_string_character_source<wchar_t> *)&param_2,wVar8);
      if ((bVar6 & 8) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = pwVar1;
        return 0;
      }
      bVar2 = FUN_00454250(bVar6,local_8);
      if (bVar2) {
        *(undefined1 *)(param_1 + 7) = 1;
        param_1[6] = 0x22;
        if ((bVar6 & 1) != 0) {
          if ((bVar6 & 2) == 0) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = param_2;
            }
            return 0x7fffffff;
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_2;
          }
          return 0x80000000;
        }
        local_8 = 0xffffffff;
      }
      else if ((bVar6 & 2) != 0) {
        local_8 = -local_8;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
        return local_8;
      }
      return local_8;
    }
    uVar5 = local_8 * param_4 + uVar5;
    bVar6 = bVar6 | (uVar5 < local_8 * param_4 || (uint)(0xffffffff / (ulonglong)uVar10) < local_8)
                    << 2 | 8U;
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
    local_8 = uVar5;
  } while( true );
}


