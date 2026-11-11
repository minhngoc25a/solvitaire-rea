// Function: FUN_00405880
// Entry: 00405880
// Size: 1480 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_00405880(code *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  char *in_EAX;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  size_t sVar14;
  uint uVar15;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar16;
  undefined4 extraout_EDX;
  char *pcVar17;
  int *piVar18;
  char *pcVar20;
  undefined4 *puVar21;
  bool bVar22;
  size_t sStackY_80;
  char acStack_70 [8];
  uint local_68;
  char local_61;
  undefined4 *local_60;
  code *local_5c;
  int local_58;
  char *local_54;
  int *local_50;
  char *local_4c;
  size_t local_48;
  char *local_44;
  undefined4 *local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined4 local_20;
  int *piVar19;
  
  sStackY_80 = 0x405899;
  local_5c = param_1;
  local_34 = param_2;
  strlen(in_EAX);
  sStackY_80 = 0x4058a7;
  uVar5 = FUN_0040b3d0();
  iVar9 = -uVar5;
  piVar18 = (int *)(&stack0xffffff84 + iVar9);
  *(undefined4 *)(&stack0xffffff8c + iVar9) = extraout_EDX;
  *(char **)(&stack0xffffff88 + iVar9) = in_EAX;
  *(char **)(&stack0xffffff84 + iVar9) = acStack_70 + iVar9;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4058bd;
  pvVar6 = memcpy(*(void **)(&stack0xffffff84 + iVar9),*(void **)(&stack0xffffff88 + iVar9),
                  *(size_t *)(&stack0xffffff8c + iVar9));
  *(void **)(&stack0xffffff84 + iVar9) = pvVar6;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4058c5;
  local_4c = FUN_00405f80(*(char **)(&stack0xffffff84 + iVar9));
  local_20 = 0;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4058d7;
  iVar7 = FUN_004054d0();
  uVar5 = local_34;
  if (iVar7 != 0) {
    return iVar7;
  }
  if (local_4c != (char *)0x0) {
    uVar15 = 0;
    cVar16 = *local_4c;
    pcVar8 = local_4c;
    while ((cVar16 != '\0' &&
           (((pcVar20 = pcVar8 + 1, (local_34 & 0x20) != 0 || (cVar16 != '\x7f')) ||
            (pcVar20 = pcVar8 + 2, pcVar8[1] != '\0'))))) {
      if (uVar15 == 0) {
        if ((cVar16 == '?') || (cVar16 == '*')) {
LAB_00405de2:
          *(undefined1 **)(&stack0xffffff84 + iVar9) = local_2c;
          pcVar3 = local_5c;
          *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x405df9;
          iVar7 = FUN_00405880(pcVar3,uVar5 | 0x8000,*(int *)(&stack0xffffff84 + iVar9));
          goto LAB_004059ac;
        }
        uVar15 = (uint)(cVar16 == '[');
      }
      else {
        if ((cVar16 == ']') && (1 < (int)uVar15)) goto LAB_00405de2;
        uVar15 = uVar15 + (cVar16 != '!');
      }
      cVar16 = *pcVar20;
      pcVar8 = pcVar20;
    }
  }
  *(char **)(&stack0xffffff84 + iVar9) = local_4c;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x405949;
  strlen(*(char **)(&stack0xffffff84 + iVar9));
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x405954;
  uVar5 = FUN_0040b3d0();
  iVar7 = -uVar5;
  pcVar8 = acStack_70 + iVar7 + iVar9;
  pcVar20 = local_4c;
  do {
    while (cVar16 = *pcVar20, cVar16 == '\x7f') {
      cVar16 = pcVar20[1];
      pcVar20 = pcVar20 + 2;
      *pcVar8 = cVar16;
      pcVar8 = pcVar8 + 1;
      if (cVar16 == '\0') goto LAB_00405989;
    }
    pcVar20 = pcVar20 + 1;
    *pcVar8 = cVar16;
    pcVar8 = pcVar8 + 1;
  } while (cVar16 != '\0');
LAB_00405989:
  *(char **)(&stack0xffffff84 + iVar7 + iVar9) = acStack_70 + iVar7 + iVar9;
  *(undefined4 *)((int)&sStackY_80 + iVar7 + iVar9) = 0x405991;
  pcVar8 = _strdup(*(char **)(&stack0xffffff84 + iVar7 + iVar9));
  if (pcVar8 == (char *)0x0) {
    return 1;
  }
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4059ac;
  iVar7 = FUN_004057b0(pcVar8,(int)local_2c);
LAB_004059ac:
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((in_EAX[1] != '\\') && (bVar22 = in_EAX[1] == '/', !bVar22)) {
    iVar7 = 2;
    pcVar8 = local_4c;
    pcVar20 = ".";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar22 = *pcVar8 == *pcVar20;
      pcVar8 = pcVar8 + 1;
      pcVar20 = pcVar20 + 1;
    } while (bVar22);
    if (bVar22) {
      local_61 = '\\';
      local_4c = (char *)0x0;
      local_44 = in_EAX;
      goto LAB_004059eb;
    }
  }
  *(char **)(&stack0xffffff84 + iVar9) = local_4c;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x405d4b;
  sVar14 = strlen(*(char **)(&stack0xffffff84 + iVar9));
  local_44 = in_EAX + sVar14;
  if (in_EAX < local_44) {
    local_61 = *local_44;
    if ((local_61 == '/') || (local_61 == '\\')) {
    }
    else {
      do {
        pcVar8 = local_44 + -1;
        if (pcVar8 == in_EAX) {
          local_61 = local_44[-1];
          local_44 = pcVar8;
          goto LAB_00405d99;
        }
        local_61 = local_44[-1];
      } while ((local_61 != '\\') && (local_44 = pcVar8, local_61 != '/'));
      local_44 = pcVar8;
    }
  }
  else {
    local_61 = *local_44;
  }
LAB_00405d99:
  if ((local_61 == '/') || (local_61 == '\\')) {
    local_44 = local_44 + 1;
    cVar16 = *local_44;
    if (cVar16 != '\\') goto LAB_00405dc2;
    do {
      do {
        local_61 = cVar16;
        local_44 = local_44 + 1;
        cVar16 = *local_44;
      } while (cVar16 == '\\');
LAB_00405dc2:
    } while (cVar16 == '/');
  }
  else {
    local_61 = '\\';
  }
LAB_004059eb:
  local_38 = local_24;
  iVar7 = *local_24;
  if (iVar7 == 0) {
    local_3c = 2;
    piVar18 = (int *)(&stack0xffffff84 + iVar9);
  }
  else {
    local_3c = 2;
    local_68 = local_34 & 4;
    local_30 = local_34 & 0x8000;
    do {
      if (local_3c != 1) {
        *piVar18 = iVar7;
        piVar18[-1] = 0x405a2a;
        pcVar8 = (char *)FUN_00406380((char *)*piVar18);
        pcVar3 = local_5c;
        if (pcVar8 == (char *)0x0) {
          if (local_68 == 0) {
            if (local_5c != (code *)0x0) {
              piVar18[-1] = 0x405d1b;
              piVar13 = _errno();
              piVar18[1] = *piVar13;
              *piVar18 = *local_38;
              piVar19 = piVar18 + -1;
              piVar18 = piVar18 + -1;
              *piVar19 = 0x405d2b;
              iVar7 = (*pcVar3)();
              iVar9 = 1;
              if (iVar7 == 0) {
                iVar9 = local_3c;
              }
              local_3c = iVar9;
            }
          }
          else {
            local_3c = 1;
          }
        }
        else {
          if (local_4c == (char *)0x0) {
            local_48 = 0;
          }
          else {
            *piVar18 = *local_38;
            piVar18[-1] = 0x405a4c;
            local_48 = strlen((char *)*piVar18);
          }
          local_40 = (undefined4 *)0x0;
          local_58 = local_48 + 2;
LAB_00405a60:
          *piVar18 = (int)pcVar8;
          piVar18[-1] = 0x405a68;
          iVar9 = FUN_004065d0(*piVar18);
          if (iVar9 != 0) {
            while ((uVar5 = local_34, local_30 == 0 || (*(int *)(iVar9 + 8) == 0x10))) {
              pbVar1 = (byte *)(iVar9 + 0x2c);
              piVar18[-1] = 0x405a8d;
              iVar9 = FUN_00405530(uVar5,pbVar1);
              if (iVar9 != 0) break;
              local_50 = piVar18;
              *piVar18 = (int)pbVar1;
              piVar18[-1] = 0x405a9c;
              strlen((char *)*piVar18);
              piVar18[-1] = 0x405aad;
              uVar5 = FUN_0040b3d0();
              iVar9 = -uVar5;
              pcVar20 = (char *)((int)piVar18 + iVar9 + 0xc);
              sVar14 = 0;
              puVar12 = extraout_ECX;
              local_54 = pcVar20;
              if (local_48 != 0) {
                local_60 = extraout_ECX;
                iVar7 = *local_38;
                *(size_t *)((int)piVar18 + iVar9 + 8) = local_48;
                *(char **)((int)piVar18 + iVar9) = pcVar20;
                *(int *)((int)piVar18 + iVar9 + 4) = iVar7;
                *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405ca0;
                memcpy(*(void **)((int)piVar18 + iVar9),*(void **)((int)piVar18 + iVar9 + 4),
                       *(size_t *)((int)piVar18 + iVar9 + 8));
                puVar12 = local_60;
                cVar16 = *(char *)((int)piVar18 + local_48 + iVar9 + 0xb);
                sVar14 = local_48;
                if ((cVar16 != '\\') && (cVar16 != '/')) {
                  local_60 = (undefined4 *)pcVar8;
                  local_54[local_48] = local_61;
                  sVar14 = local_48 + 1;
                  pcVar8 = (char *)local_60;
                }
              }
              pcVar10 = local_54 + sVar14;
              *(int *)((int)piVar18 + iVar9 + 8) = (int)puVar12 + 1;
              *(byte **)((int)piVar18 + iVar9 + 4) = pbVar1;
              *(char **)((int)piVar18 + iVar9) = pcVar10;
              *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405adb;
              memcpy(*(void **)((int)piVar18 + iVar9),*(void **)((int)piVar18 + iVar9 + 4),
                     *(size_t *)((int)piVar18 + iVar9 + 8));
              *(char **)((int)piVar18 + iVar9) = local_54;
              *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405ae6;
              strlen(*(char **)((int)piVar18 + iVar9));
              *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405af1;
              uVar5 = FUN_0040b3d0();
              iVar7 = -uVar5;
              pcVar10 = (char *)((int)piVar18 + iVar7 + iVar9 + 0xc);
              pcVar17 = pcVar10;
              do {
                while (cVar16 = *pcVar20, cVar16 == '\x7f') {
                  cVar16 = pcVar20[1];
                  pcVar20 = pcVar20 + 2;
                  *pcVar17 = cVar16;
                  pcVar17 = pcVar17 + 1;
                  if (cVar16 == '\0') goto LAB_00405b28;
                }
                pcVar20 = pcVar20 + 1;
                *pcVar17 = cVar16;
                pcVar17 = pcVar17 + 1;
              } while (cVar16 != '\0');
LAB_00405b28:
              *(char **)((int)piVar18 + iVar7 + iVar9) = pcVar10;
              *(undefined4 *)((int)piVar18 + iVar7 + iVar9 + -4) = 0x405b30;
              pcVar20 = _strdup(*(char **)((int)piVar18 + iVar7 + iVar9));
              iVar7 = local_3c;
              if (pcVar20 == (char *)0x0) {
                local_3c = 3;
                puVar12 = local_40;
              }
              else {
                iVar11 = 0;
                if (local_3c != 2) {
                  iVar11 = local_3c;
                }
                local_3c = iVar11;
                if ((local_34 & 0x40) == 0) {
                  if (local_40 == (undefined4 *)0x0) {
                    puVar21 = (undefined4 *)0x0;
                    pcVar10 = (char *)0x0;
                  }
                  else {
                    uVar5 = local_34 & 0x4000;
                    local_54 = pcVar8;
                    puVar12 = local_40;
                    do {
                      puVar21 = puVar12;
                      uVar2 = puVar21[2];
                      *(char **)((int)piVar18 + iVar9) = pcVar20;
                      *(undefined4 *)((int)piVar18 + iVar9 + 4) = uVar2;
                      if (uVar5 == 0) {
                        *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405b96;
                        pcVar10 = (char *)_stricoll(*(char **)((int)piVar18 + iVar9),
                                                    *(char **)((int)piVar18 + iVar9 + 4));
                        puVar12 = (undefined4 *)puVar21[1];
                        pcVar8 = local_54;
                        if ((int)pcVar10 < 1) {
                          puVar12 = (undefined4 *)*puVar21;
                        }
                      }
                      else {
                        *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405b75;
                        pcVar10 = (char *)strcoll(*(char **)((int)piVar18 + iVar9),
                                                  *(char **)((int)piVar18 + iVar9 + 4));
                        puVar12 = (undefined4 *)puVar21[1];
                        pcVar8 = local_54;
                        if ((int)pcVar10 < 1) {
                          puVar12 = (undefined4 *)*puVar21;
                        }
                      }
                      local_54 = pcVar8;
                    } while (puVar12 != (undefined4 *)0x0);
                  }
                  local_54 = pcVar10;
                  *(undefined4 *)((int)piVar18 + iVar9) = 0xc;
                  *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405bb6;
                  puVar12 = malloc(*(size_t *)((int)piVar18 + iVar9));
                  if (puVar12 != (undefined4 *)0x0) {
                    puVar12[2] = pcVar20;
                    puVar12[1] = 0;
                    *puVar12 = 0;
                    if (puVar21 != (undefined4 *)0x0) {
                      if ((int)local_54 < 1) {
                        *puVar21 = puVar12;
                      }
                      else {
                        puVar21[1] = puVar12;
                      }
                    }
                  }
                  if (local_40 != (undefined4 *)0x0) {
                    puVar12 = local_40;
                  }
                }
                else {
                  *(undefined4 *)((int)piVar18 + iVar9 + -4) = 0x405ce0;
                  FUN_00405820(iVar7,param_3);
                  puVar12 = local_40;
                }
              }
              local_40 = puVar12;
              piVar18 = local_50;
              *local_50 = (int)pcVar8;
              piVar18[-1] = 0x405bf2;
              iVar9 = FUN_004065d0(*piVar18);
              if (iVar9 == 0) goto LAB_00405c00;
            }
            goto LAB_00405a60;
          }
LAB_00405c00:
          *piVar18 = (int)pcVar8;
          piVar18[-1] = 0x405c08;
          FUN_00406730((void *)*piVar18);
          if (local_40 != (undefined4 *)0x0) {
            piVar18[-1] = 0x405c1a;
            FUN_00405840(extraout_ECX_00,param_3);
          }
        }
      }
      piVar4 = local_38;
      piVar13 = local_38 + 1;
      local_38 = piVar13;
      *piVar18 = *piVar4;
      piVar18[-1] = 0x405c2c;
      free((void *)*piVar18);
      iVar7 = *piVar13;
    } while (iVar7 != 0);
  }
  *piVar18 = (int)local_24;
  piVar18[-1] = 0x405c41;
  free((void *)*piVar18);
  return local_3c;
}


