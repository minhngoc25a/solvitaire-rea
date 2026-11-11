// Function: FUN_0045804a
// Entry: 0045804a
// Size: 1491 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_0045804a(int *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  wchar_t *pwVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  byte bVar7;
  ushort uVar8;
  wchar_t wVar9;
  uint uVar10;
  uint uVar11;
  wchar_t local_8c;
  wchar_t local_88;
  int local_c;
  uint local_8;
  
  uVar3 = FUN_004536c1((int *)&param_2);
  pwVar1 = param_2;
  if ((char)uVar3 == '\0') {
LAB_00458093:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_00458093;
  }
  local_8 = 0;
  uVar10 = (uint)(ushort)*param_2;
  pwVar6 = param_2 + 1;
  if (uVar10 == 0x2d) {
    bVar7 = param_5 | 2;
LAB_004580d1:
    uVar10 = (uint)(ushort)*pwVar6;
    pwVar6 = param_2 + 2;
  }
  else {
    bVar7 = param_5;
    if (uVar10 == 0x2b) goto LAB_004580d1;
  }
  local_c = 0x660;
  uVar11 = param_4;
  param_2 = pwVar6;
  if ((param_4 != 0) && (param_4 != 0x10)) goto LAB_004583c8;
  uVar8 = (ushort)uVar10;
  if (uVar8 < 0x30) goto LAB_00458355;
  iVar4 = 0x30;
  if (uVar8 < 0x3a) {
LAB_004581f8:
    iVar4 = -iVar4;
LAB_00458350:
    iVar4 = uVar10 + iVar4;
    if (iVar4 == -1) goto LAB_00458355;
LAB_0045837d:
    if (iVar4 == 0) {
      wVar9 = *pwVar6;
      param_2 = pwVar6 + 1;
      if ((wVar9 == L'x') || (wVar9 == L'X')) {
        if (param_4 == 0) {
          param_4 = 0x10;
        }
        uVar10 = (uint)(ushort)*param_2;
        uVar11 = param_4;
        param_2 = pwVar6 + 2;
      }
      else {
        if (param_4 == 0) {
          param_4 = 8;
        }
        uVar11 = param_4;
        __crt_strtox::c_string_character_source<wchar_t>::unget
                  ((c_string_character_source<wchar_t> *)&param_2,wVar9);
      }
      goto LAB_004583c8;
    }
  }
  else {
    if (uVar8 < 0xff10) {
      if ((0x65f < uVar8) &&
         ((iVar4 = local_c, uVar8 < 0x66a ||
          ((iVar4 = 0x6f0, 0x6ef < uVar8 &&
           ((uVar8 < 0x6fa ||
            ((iVar4 = 0x966, 0x965 < uVar8 &&
             ((uVar8 < 0x970 ||
              ((iVar4 = 0x9e6, 0x9e5 < uVar8 &&
               ((uVar8 < 0x9f0 ||
                ((iVar4 = 0xa66, 0xa65 < uVar8 &&
                 ((uVar8 < 0xa70 ||
                  ((iVar4 = 0xae6, 0xae5 < uVar8 &&
                   ((uVar8 < 0xaf0 ||
                    ((iVar4 = 0xb66, 0xb65 < uVar8 &&
                     ((uVar8 < 0xb70 ||
                      ((iVar4 = 0xc66, 0xc65 < uVar8 &&
                       ((uVar8 < 0xc70 ||
                        ((iVar4 = 0xce6, 0xce5 < uVar8 &&
                         ((uVar8 < 0xcf0 ||
                          ((iVar4 = 0xd66, 0xd65 < uVar8 &&
                           ((uVar8 < 0xd70 ||
                            ((iVar4 = 0xe50, 0xe4f < uVar8 &&
                             ((uVar8 < 0xe5a ||
                              ((iVar4 = 0xed0, 0xecf < uVar8 &&
                               ((uVar8 < 0xeda ||
                                ((iVar4 = 0xf20, 0xf1f < uVar8 &&
                                 ((uVar8 < 0xf2a ||
                                  ((iVar4 = 0x1040, 0x103f < uVar8 &&
                                   ((uVar8 < 0x104a ||
                                    ((iVar4 = 0x17e0, 0x17df < uVar8 &&
                                     ((uVar8 < 0x17ea ||
                                      ((iVar4 = 0x1810, 0x180f < uVar8 && (uVar8 < 0x181a)))))))))))
                                  )))))))))))))))))))))))))))))))))))))))))))))))))))
      goto LAB_004581f8;
    }
    else if (uVar8 < 0xff1a) {
      iVar4 = -0xff10;
      goto LAB_00458350;
    }
LAB_00458355:
    if (((0x40 < uVar10) && (uVar10 < 0x5b)) || (uVar10 - 0x61 < 0x1a)) {
      uVar5 = uVar10;
      if (uVar10 - 0x61 < 0x1a) {
        uVar5 = uVar10 - 0x20;
      }
      iVar4 = uVar5 - 0x37;
      goto LAB_0045837d;
    }
  }
  if (param_4 == 0) {
    uVar11 = 10;
    param_4 = 10;
  }
LAB_004583c8:
  do {
    iVar4 = 0x30;
    wVar9 = (wchar_t)uVar10;
    if ((ushort)wVar9 < 0x30) goto LAB_00458529;
    if ((ushort)wVar9 < 0x3a) {
LAB_0045851f:
      uVar5 = uVar10 - iVar4;
      if (uVar5 == 0xffffffff) goto LAB_00458529;
    }
    else {
      iVar4 = 0xff10;
      if ((ushort)wVar9 < 0xff10) {
        iVar4 = 0x660;
        if (0x65f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0x66a) goto LAB_0045851f;
          iVar4 = 0x6f0;
          if (0x6ef < (ushort)wVar9) {
            if ((ushort)wVar9 < 0x6fa) goto LAB_0045851f;
            iVar4 = 0x966;
            if (0x965 < (ushort)wVar9) {
              if ((ushort)wVar9 < 0x970) goto LAB_0045851f;
              iVar4 = 0x9e6;
              if (0x9e5 < (ushort)wVar9) {
                if ((ushort)wVar9 < 0x9f0) goto LAB_0045851f;
                iVar4 = 0xa66;
                if (0xa65 < (ushort)wVar9) {
                  if ((ushort)wVar9 < 0xa70) goto LAB_0045851f;
                  iVar4 = 0xae6;
                  if (0xae5 < (ushort)wVar9) {
                    if ((ushort)wVar9 < 0xaf0) goto LAB_0045851f;
                    iVar4 = 0xb66;
                    if (0xb65 < (ushort)wVar9) {
                      if ((ushort)wVar9 < 0xb70) goto LAB_0045851f;
                      iVar4 = 0xc66;
                      if (0xc65 < (ushort)wVar9) {
                        if ((ushort)wVar9 < 0xc70) goto LAB_0045851f;
                        iVar4 = 0xce6;
                        if (0xce5 < (ushort)wVar9) {
                          if ((ushort)wVar9 < 0xcf0) goto LAB_0045851f;
                          iVar4 = 0xd66;
                          if (0xd65 < (ushort)wVar9) {
                            if ((ushort)wVar9 < 0xd70) goto LAB_0045851f;
                            iVar4 = 0xe50;
                            if (0xe4f < (ushort)wVar9) {
                              if ((ushort)wVar9 < 0xe5a) goto LAB_0045851f;
                              iVar4 = 0xed0;
                              if (0xecf < (ushort)wVar9) {
                                if ((ushort)wVar9 < 0xeda) goto LAB_0045851f;
                                iVar4 = 0xf20;
                                if (0xf1f < (ushort)wVar9) {
                                  if ((ushort)wVar9 < 0xf2a) goto LAB_0045851f;
                                  iVar4 = 0x1040;
                                  if (0x103f < (ushort)wVar9) {
                                    if ((ushort)wVar9 < 0x104a) goto LAB_0045851f;
                                    iVar4 = 0x17e0;
                                    if (0x17df < (ushort)wVar9) {
                                      if ((ushort)wVar9 < 0x17ea) goto LAB_0045851f;
                                      iVar4 = 0x1810;
                                      if (0x180f < (ushort)wVar9) {
                                        local_88 = L'᠚';
                                        goto LAB_0045851d;
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
LAB_0045851d:
        if ((ushort)wVar9 < (ushort)local_88) goto LAB_0045851f;
      }
LAB_00458529:
      if (((uVar10 < 0x41) || (0x5a < uVar10)) && ((uVar10 < 0x61 || (0x7a < (ushort)wVar9)))) {
        uVar5 = 0xffffffff;
      }
      else {
        if ((ushort)(wVar9 + L'ﾟ') < 0x1a) {
          uVar10 = uVar10 - 0x20;
        }
        uVar5 = uVar10 - 0x37;
      }
    }
    if (param_4 <= uVar5) {
      __crt_strtox::c_string_character_source<wchar_t>::unget
                ((c_string_character_source<wchar_t> *)&param_2,wVar9);
      if ((bVar7 & 8) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = pwVar1;
        return 0;
      }
      bVar2 = FUN_00454250(bVar7,local_8);
      if (bVar2) {
        *(undefined1 *)(param_1 + 7) = 1;
        param_1[6] = 0x22;
        if ((bVar7 & 1) != 0) {
          if ((bVar7 & 2) == 0) {
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
      else if ((bVar7 & 2) != 0) {
        local_8 = -local_8;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
        return local_8;
      }
      return local_8;
    }
    uVar5 = local_8 * param_4 + uVar5;
    bVar7 = bVar7 | (uVar5 < local_8 * param_4 || (uint)(0xffffffff / (ulonglong)uVar11) < local_8)
                    << 2 | 8U;
    uVar10 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
    local_8 = uVar5;
  } while( true );
}


