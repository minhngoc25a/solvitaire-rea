// Function: FUN_0048f700
// Entry: 0048f700
// Size: 4235 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048f700(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int local_ac;
  int local_a8;
  uint local_a4;
  code *local_a0;
  undefined1 *local_9c;
  int local_98;
  undefined1 *local_94;
  int local_90;
  int local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  uint *local_80;
  uint local_7c;
  undefined1 *local_78;
  code *local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [9];
  undefined1 *apuStack_2c [11];
  
  uVar6 = *(uint *)(param_4 + 0x18);
  local_58 = 1;
  local_6c = 0;
  local_68 = 1;
  if ((uVar6 & 0x400) == 0) {
    if ((uVar6 & 0x1000) != 0) {
      local_58 = 2;
      local_a0 = (code *)&LAB_0048f3b0;
      local_68 = 2;
      local_60 = ~(uVar6 >> 0xd) & 1;
      goto LAB_0048f77c;
    }
    if ((uVar6 & 0x100) != 0) {
      local_a0 = FUN_0048f180;
      local_60 = ~(uVar6 >> 9) & 1;
      goto LAB_0048f77c;
    }
    local_60 = 0;
    if ((uVar6 & 0x800) != 0) {
      local_a0 = FUN_0048f330;
      local_68 = 2;
      local_58 = 2;
      goto LAB_0048f7e4;
    }
    if ((uVar6 & 0x2000) == 0) {
      local_a0 = FUN_0048f180;
      local_58 = 1;
      goto LAB_0048f842;
    }
    local_a0 = (code *)&LAB_0048f3b0;
    local_58 = 2;
  }
  else {
    local_58 = 2;
    local_a0 = FUN_0048f330;
    local_68 = 2;
    local_60 = ~(uVar6 >> 0xb) & 1;
LAB_0048f77c:
    if ((uVar6 & 0x800) != 0) {
LAB_0048f7e4:
      local_74 = (code *)&LAB_004918c0;
      local_98 = 1;
      local_54 = 4;
      goto LAB_0048f858;
    }
    if ((uVar6 & 0x2000) == 0) {
LAB_0048f842:
      local_74 = FUN_0048f0c0;
      local_54 = 6;
      local_98 = local_58;
      local_68 = local_58;
      goto LAB_0048f858;
    }
  }
  local_74 = FUN_004918e0;
  local_98 = 1;
  local_54 = 4;
  local_68 = local_58;
LAB_0048f858:
  iVar10 = local_58;
  local_64 = local_60;
  piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * param_3 + param_1[1] + local_58));
  if (piVar4 == (int *)0x0) {
    return 0xffffffff;
  }
  puVar11 = (undefined1 *)(param_1[1] + *param_1);
  puVar9 = (undefined1 *)((param_1[2] - iVar10) + *param_1);
  local_94 = puVar11;
  local_84 = puVar9;
  local_8c = (*local_74)(&local_a4,param_2,param_3);
joined_r0x0048f8b7:
  if (local_8c != 0) {
    if (-1 < local_8c) {
      if ((local_8c == local_54) || (local_9c = param_2, local_64 != 0)) {
        local_9c = (undefined1 *)0x0;
      }
      param_2 = param_2 + local_8c;
      local_ac = param_3 - local_8c;
      local_70 = (*local_74)(&local_7c,param_2,local_ac);
      while (puVar8 = local_78, 0 < local_70) {
        if ((local_70 == local_54) || (local_88 = param_2, local_60 != 0)) {
          local_88 = (undefined1 *)0x0;
        }
        local_ac = local_ac - local_70;
        param_2 = param_2 + local_70;
        local_80 = (uint *)(local_7c >> 8);
        if (((uint *)0x1d2 < local_80) || ((char)local_80[0x1453a8] == '\0')) {
          if (local_9c != (undefined1 *)0x0) {
            if (puVar9 < puVar11 + local_8c) {
              param_1[1] = (int)puVar11 - *param_1;
              piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
              if (piVar4 == (int *)0x0) {
                return 0xffffffff;
              }
              puVar11 = (undefined1 *)(param_1[1] + *param_1);
              puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
              local_94 = puVar11;
              local_84 = puVar9;
            }
            switch(local_8c) {
            case 4:
switchD_0048faae_caseD_4:
              *puVar11 = *local_9c;
              puVar11 = puVar11 + 1;
              local_9c = local_9c + 1;
            case 3:
switchD_0048faae_caseD_3:
              *puVar11 = *local_9c;
              puVar11 = puVar11 + 1;
              local_9c = local_9c + 1;
            case 2:
switchD_0048faae_caseD_2:
              *puVar11 = *local_9c;
              puVar11 = puVar11 + 1;
              local_9c = local_9c + 1;
            case 1:
switchD_0048faae_caseD_1:
              *puVar11 = *local_9c;
              puVar11 = puVar11 + 1;
              local_94 = puVar11;
            }
            goto switchD_0048faae_default;
          }
          iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
          if (iVar5 == 0) {
            iVar7 = local_98 * local_ac;
            do {
              param_1[1] = (int)puVar11 - *param_1;
              piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
              if (piVar4 == (int *)0x0) {
                return 0xffffffff;
              }
              puVar11 = (undefined1 *)(param_1[1] + *param_1);
              puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
              local_84 = puVar9;
              iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
            } while (iVar5 == 0);
          }
LAB_0048fe88:
          puVar11 = puVar11 + iVar5;
          local_94 = puVar11;
          goto switchD_0048faae_default;
        }
        if (local_a4 - 0x1100 < 0x13) {
          if (0x14 < local_7c - 0x1161) {
            if (local_9c != (undefined1 *)0x0) {
              if (puVar9 < puVar11 + local_8c) {
                param_1[1] = (int)puVar11 - *param_1;
                piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
                if (piVar4 == (int *)0x0) {
                  return 0xffffffff;
                }
                puVar11 = (undefined1 *)(param_1[1] + *param_1);
                puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
                local_94 = puVar11;
                local_84 = puVar9;
              }
              switch(local_8c) {
              case 1:
                goto switchD_0048faae_caseD_1;
              case 2:
                goto switchD_0048faae_caseD_2;
              case 3:
                goto switchD_0048faae_caseD_3;
              case 4:
                goto switchD_0048faae_caseD_4;
              }
              goto switchD_0048faae_default;
            }
            iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
            if (iVar5 == 0) {
              iVar7 = local_98 * local_ac;
              do {
                param_1[1] = (int)puVar11 - *param_1;
                piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
                if (piVar4 == (int *)0x0) {
                  return 0xffffffff;
                }
                puVar11 = (undefined1 *)(param_1[1] + *param_1);
                puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
                local_84 = puVar9;
                iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
              } while (iVar5 == 0);
            }
            goto LAB_0048fe88;
          }
          local_9c = (undefined1 *)0x0;
          local_a4 = ((local_a4 - 0x1100) * 0x15 + (local_7c - 0x1161)) * 0x1c + 0xac00;
        }
        else {
          uVar6 = local_a4 - 0xac00;
          if ((uVar6 < 0x2ba4) && (uVar6 == ((int)uVar6 / 0x1c) * 0x1c)) {
            if (0x1a < local_7c - 0x11a8) {
              if (local_9c == (undefined1 *)0x0) {
                iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
                if (iVar5 == 0) {
                  iVar7 = local_98 * local_ac;
                  do {
                    param_1[1] = (int)puVar11 - *param_1;
                    piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
                    if (piVar4 == (int *)0x0) {
                      return 0xffffffff;
                    }
                    puVar11 = (undefined1 *)(param_1[1] + *param_1);
                    puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
                    local_84 = puVar9;
                    iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
                  } while (iVar5 == 0);
                }
                goto LAB_0048fe88;
              }
              if (puVar9 < puVar11 + local_8c) {
                param_1[1] = (int)puVar11 - *param_1;
                piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
                if (piVar4 == (int *)0x0) {
                  return 0xffffffff;
                }
                puVar11 = (undefined1 *)(param_1[1] + *param_1);
                puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
                local_94 = puVar11;
                local_84 = puVar9;
              }
              switch(local_8c) {
              case 1:
                goto switchD_0048faae_caseD_1;
              case 2:
                goto switchD_0048faae_caseD_2;
              case 3:
                goto switchD_0048faae_caseD_3;
              case 4:
                goto switchD_0048faae_caseD_4;
              }
              goto switchD_0048faae_default;
            }
            local_9c = (undefined1 *)0x0;
            local_a4 = local_a4 + (local_7c - 0x11a7);
            goto LAB_0048fea6;
          }
          uVar6 = FUN_00491900(local_a4,local_7c);
          if (uVar6 != 0) {
            local_9c = (undefined1 *)0x0;
            local_a4 = uVar6;
            goto LAB_0048fea6;
          }
          if ((local_7c < 0x1d245) &&
             (local_78 = (undefined1 *)
                         (uint)(byte)(&DAT_00515078)
                                     [(uint)(byte)(&DAT_005157a8)
                                                  [(uint)(byte)local_80[0x145686] * 0x10 +
                                                   (local_7c >> 4 & 0xf)] * 0x10 + (local_7c & 0xf)]
             , local_78 != (undefined1 *)0x0)) {
            local_50[0] = local_7c;
            local_88 = (undefined1 *)0x0;
            local_90 = 1;
            apuStack_2c[1] = local_78;
            goto LAB_0048fef4;
          }
          if (local_9c == (undefined1 *)0x0) {
            iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
            if (iVar5 == 0) {
              iVar7 = local_98 * local_ac;
              do {
                param_1[1] = (int)puVar11 - *param_1;
                piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
                if (piVar4 == (int *)0x0) {
                  return 0xffffffff;
                }
                puVar11 = (undefined1 *)(param_1[1] + *param_1);
                puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
                local_84 = puVar9;
                iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
              } while (iVar5 == 0);
            }
            goto LAB_0048fe88;
          }
          if (puVar9 < puVar11 + local_8c) {
            param_1[1] = (int)puVar11 - *param_1;
            piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
            if (piVar4 == (int *)0x0) {
              return 0xffffffff;
            }
            puVar11 = (undefined1 *)(param_1[1] + *param_1);
            puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
            local_94 = puVar11;
            local_84 = puVar9;
          }
          switch(local_8c) {
          case 1:
            goto switchD_0048faae_caseD_1;
          case 2:
            goto switchD_0048faae_caseD_2;
          case 3:
            goto switchD_0048faae_caseD_3;
          case 4:
            goto switchD_0048faae_caseD_4;
          }
switchD_0048faae_default:
          local_a4 = local_7c;
          local_9c = local_88;
          local_8c = local_70;
        }
LAB_0048fea6:
        local_70 = (*local_74)(&local_7c,param_2,local_ac);
      }
      goto LAB_004904d5;
    }
    iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
    if (iVar5 == 0) {
      iVar7 = local_98 * param_3;
      do {
        param_1[1] = (int)puVar11 - *param_1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar11 = (undefined1 *)(param_1[1] + *param_1);
        puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
        local_84 = puVar9;
        iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
      } while (iVar5 == 0);
    }
    puVar11 = puVar11 + iVar5;
    param_2 = param_2 + -local_8c;
    local_ac = param_3 + local_8c;
    local_6c = 0xffffffff;
    local_94 = puVar11;
    goto LAB_0049066d;
  }
switchD_004906da_default:
  param_1[1] = (int)puVar11 - *param_1;
  *puVar11 = 0;
  if (local_58 == 2) {
    *(undefined1 *)(param_1[1] + 1 + *param_1) = 0;
  }
  return local_6c;
  while( true ) {
    param_2 = param_2 + local_5c;
    local_ac = local_ac - local_5c;
    *(undefined1 **)((int)apuStack_2c + (int)local_80 + 4) = local_88;
    local_90 = local_90 + 1;
    local_78 = local_88;
    if (9 < local_90) break;
LAB_0048fef4:
    local_80 = (uint *)(local_90 * 4);
    local_5c = (*local_74)(local_50 + local_90,param_2,local_ac);
    if (local_5c < 1) {
LAB_0048ffe0:
      local_80 = (uint *)0x1;
      if (1 < local_90) goto LAB_0049001b;
      goto LAB_00490200;
    }
    uVar6 = *(uint *)((int)local_50 + (int)local_80);
    if (uVar6 < 0x1d245) {
      local_88 = (undefined1 *)
                 (uint)(byte)(&DAT_00515078)
                             [(uint)(byte)(&DAT_005157a8)
                                          [(uint)(byte)(&DAT_00515a18)[uVar6 >> 8] * 0x10 +
                                           (uVar6 >> 4 & 0xf)] * 0x10 + (uVar6 & 0xf)];
    }
    else {
      local_88 = (undefined1 *)0x0;
    }
    if (((local_88 <= local_78) && (local_78 != (undefined1 *)0xe4)) &&
       (local_88 != (undefined1 *)0xe4)) {
      if (local_90 < 10) goto LAB_0048ffe0;
      break;
    }
  }
  local_6c = 0xffffffff;
  local_90 = 10;
LAB_0049001b:
  iVar5 = 1;
  puVar8 = local_88;
  puVar12 = local_78;
  iVar7 = local_90;
  do {
    local_80 = (uint *)(iVar5 * 4);
    uVar6 = FUN_00491900(local_a4,local_50[iVar5]);
    iVar13 = iVar5 + 1;
    if (uVar6 != 0) {
      local_9c = (undefined1 *)0x0;
      puVar1 = local_80;
      for (; iVar13 < local_90; iVar13 = iVar13 + 1) {
        puVar2 = (undefined4 *)((int)(local_50 + 1) + (int)puVar1);
        puVar1 = puVar1 + 1;
        *(undefined4 *)((int)&local_54 + (int)puVar1) = *puVar2;
        *(undefined4 *)((int)apuStack_2c + (int)puVar1) =
             *(undefined4 *)((int)(apuStack_2c + 1) + (int)puVar1);
      }
      local_90 = local_90 + -1;
      local_a4 = uVar6;
      if (((0 < local_90) && (iVar5 == local_90)) && ((0 < local_5c && (puVar8 == puVar12)))) {
        iVar10 = local_90;
        puVar9 = apuStack_2c[local_90];
        while (local_78 = puVar9, iVar10 < 10) {
          local_90 = iVar10;
          local_5c = (*local_74)(local_50 + iVar10,param_2,local_ac);
          if (local_5c < 1) {
LAB_004901b9:
            puVar8 = local_88;
            puVar12 = local_78;
            if (local_90 < 10) goto LAB_004901d6;
            break;
          }
          uVar6 = local_50[iVar10];
          if (uVar6 < 0x1d245) {
            local_88 = (undefined1 *)
                       (uint)(byte)(&DAT_00515078)
                                   [(uint)(byte)(&DAT_005157a8)
                                                [(uint)(byte)(&DAT_00515a18)[uVar6 >> 8] * 0x10 +
                                                 (uVar6 >> 4 & 0xf)] * 0x10 + (uVar6 & 0xf)];
          }
          else {
            local_88 = (undefined1 *)0x0;
          }
          if ((((int)local_88 <= (int)puVar9) && (puVar9 != (undefined1 *)0xe4)) &&
             (local_88 != (undefined1 *)0xe4)) goto LAB_004901b9;
          local_ac = local_ac - local_5c;
          param_2 = param_2 + local_5c;
          apuStack_2c[iVar10 + 1] = local_88;
          iVar10 = local_90 + 1;
          puVar9 = local_88;
          puVar8 = local_88;
        }
        local_6c = 0xffffffff;
        local_90 = 10;
        puVar12 = local_78;
      }
LAB_004901d6:
      iVar13 = 0;
      iVar7 = local_90;
    }
    puVar9 = local_84;
    iVar5 = iVar13;
    iVar10 = local_68;
    puVar11 = local_94;
  } while (iVar13 < iVar7);
LAB_00490200:
  if (local_9c == (undefined1 *)0x0) {
    iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
    if (iVar5 == 0) {
      iVar7 = local_98 * local_ac;
      do {
        param_1[1] = (int)puVar11 - *param_1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar11 = (undefined1 *)(param_1[1] + *param_1);
        puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
        local_84 = puVar9;
        iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
      } while (iVar5 == 0);
    }
    puVar11 = puVar11 + iVar5;
    local_94 = puVar11;
  }
  else {
    if (puVar9 < puVar11 + local_8c) {
      param_1[1] = (int)puVar11 - *param_1;
      piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
      if (piVar4 == (int *)0x0) {
        return 0xffffffff;
      }
      puVar11 = (undefined1 *)(param_1[1] + *param_1);
      puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
      local_94 = puVar11;
      local_84 = puVar9;
    }
    switch(local_8c) {
    case 4:
      *puVar11 = *local_9c;
      puVar11 = puVar11 + 1;
      local_9c = local_9c + 1;
    case 3:
      *puVar11 = *local_9c;
      puVar11 = puVar11 + 1;
      local_9c = local_9c + 1;
    case 2:
      *puVar11 = *local_9c;
      puVar11 = puVar11 + 1;
      local_9c = local_9c + 1;
    case 1:
      *puVar11 = *local_9c;
      puVar11 = puVar11 + 1;
      local_94 = puVar11;
    default:
      local_9c = (undefined1 *)0x0;
    }
  }
  local_a8 = 0;
  if (0 < local_90) {
    local_80 = local_50;
    do {
      iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,*local_80);
      if (iVar5 == 0) {
        local_94 = (undefined1 *)(local_98 * local_ac);
        do {
          param_1[1] = (int)puVar11 - *param_1;
          piVar4 = FUN_0048d4d0(param_1,(LPVOID)((int)local_94 + iVar10 + param_1[2]));
          if (piVar4 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar11 = (undefined1 *)(param_1[1] + *param_1);
          puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
          local_84 = puVar9;
          iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,*local_80);
        } while (iVar5 == 0);
      }
      puVar11 = puVar11 + iVar5;
      local_a8 = local_a8 + 1;
      local_80 = local_80 + 1;
      local_94 = puVar11;
    } while (local_a8 < local_90);
  }
  puVar8 = local_78;
  if (((0 < local_5c) && (local_88 == local_78)) && (local_ac != 0)) {
    iVar5 = (*local_74)(local_50,param_2,local_ac);
    puVar8 = local_78;
    while (0 < iVar5) {
      if (local_50[0] < 0x1d245) {
        local_78 = (undefined1 *)
                   (uint)(byte)(&DAT_00515078)
                               [(uint)(byte)(&DAT_005157a8)
                                            [(uint)(byte)(&DAT_00515a18)[local_50[0] >> 8] * 0x10 +
                                             (local_50[0] >> 4 & 0xf)] * 0x10 + (local_50[0] & 0xf)]
        ;
      }
      else {
        local_78 = (undefined1 *)0x0;
      }
      if ((int)local_78 < (int)puVar8) break;
      param_2 = param_2 + iVar5;
      local_ac = local_ac - iVar5;
      iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_50[0]);
      if (iVar5 == 0) {
        iVar7 = local_98 * local_ac;
        do {
          param_1[1] = (int)puVar11 - *param_1;
          piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
          if (piVar4 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar11 = (undefined1 *)(param_1[1] + *param_1);
          puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
          local_84 = puVar9;
          iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_50[0]);
        } while (iVar5 == 0);
      }
      puVar11 = puVar11 + iVar5;
      local_94 = puVar11;
      iVar5 = (*local_74)(local_50,param_2,local_ac);
      puVar8 = local_78;
    }
  }
LAB_004904d5:
  local_78 = puVar8;
  pcVar3 = local_a0;
  if (local_70 < 0) {
    if (local_9c == (undefined1 *)0x0) {
      iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
      if (iVar5 == 0) {
        iVar7 = local_98 * local_ac;
        do {
          param_1[1] = (int)puVar11 - *param_1;
          piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
          if (piVar4 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar11 = (undefined1 *)(param_1[1] + *param_1);
          puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
          local_84 = puVar9;
          iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
        } while (iVar5 == 0);
      }
      puVar11 = puVar11 + iVar5;
    }
    else {
      if (puVar9 < puVar11 + local_8c) {
        param_1[1] = (int)puVar11 - *param_1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + iVar10 + param_1[2]));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar11 = (undefined1 *)(param_1[1] + *param_1);
        puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
        local_84 = puVar9;
      }
      puVar8 = local_9c;
      switch(local_8c) {
      case 4:
        *puVar11 = *local_9c;
        puVar11 = puVar11 + 1;
        puVar8 = local_9c + 1;
      case 3:
        *puVar11 = *puVar8;
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + 1;
      case 2:
        *puVar11 = *puVar8;
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + 1;
      case 1:
        *puVar11 = *puVar8;
        puVar11 = puVar11 + 1;
      }
    }
    iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_7c);
    if (iVar5 == 0) {
      iVar7 = local_98 * local_ac;
      do {
        param_1[1] = (int)puVar11 - *param_1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)(iVar7 + iVar10 + param_1[2]));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar11 = (undefined1 *)(param_1[1] + *param_1);
        puVar9 = (undefined1 *)((*param_1 - iVar10) + param_1[2]);
        local_84 = puVar9;
        iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_7c);
      } while (iVar5 == 0);
    }
    puVar11 = puVar11 + iVar5;
    param_2 = param_2 + -local_70;
    local_ac = local_ac + local_70;
    local_6c = 0xffffffff;
    local_94 = puVar11;
  }
  else if (local_70 == 0) {
    if (local_9c == (undefined1 *)0x0) {
      iVar5 = (*local_a0)(puVar11,(int)puVar9 - (int)puVar11,local_a4);
      if (iVar5 == 0) {
        local_98 = local_98 * local_ac;
        do {
          param_1[1] = (int)puVar11 - *param_1;
          piVar4 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + local_98 + iVar10));
          if (piVar4 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar11 = (undefined1 *)(param_1[1] + *param_1);
          iVar5 = (*pcVar3)(puVar11,((param_1[2] - iVar10) + *param_1) - (int)puVar11,local_a4);
        } while (iVar5 == 0);
      }
      puVar11 = puVar11 + iVar5;
    }
    else {
      if (puVar9 < puVar11 + local_8c) {
        param_1[1] = (int)puVar11 - *param_1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)(local_98 * local_ac + param_1[2] + iVar10));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar11 = (undefined1 *)(param_1[1] + *param_1);
      }
      switch(local_8c) {
      case 4:
        *puVar11 = *local_9c;
        puVar11 = puVar11 + 1;
        local_9c = local_9c + 1;
      case 3:
        *puVar11 = *local_9c;
        puVar11 = puVar11 + 1;
        local_9c = local_9c + 1;
      case 2:
        *puVar11 = *local_9c;
        puVar11 = puVar11 + 1;
        local_9c = local_9c + 1;
      case 1:
        *puVar11 = *local_9c;
        puVar11 = puVar11 + 1;
      }
    }
    goto switchD_004906da_default;
  }
LAB_0049066d:
  local_8c = (*local_74)(&local_a4,param_2,local_ac);
  param_3 = local_ac;
  goto joined_r0x0048f8b7;
}


