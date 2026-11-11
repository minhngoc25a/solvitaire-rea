// Function: FUN_004643c0
// Entry: 004643c0
// Size: 1697 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004643c0(uint *param_1,undefined4 param_2,uint *param_3,int param_4,int param_5,int param_6,
            char param_7)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  void *this;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  void *this_01;
  int *piVar7;
  uint unaff_EBX;
  uint *puVar8;
  uint *unaff_EBP;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint unaff_retaddr;
  uint uVar14;
  uint *puStack_c;
  uint local_8;
  uint uStack_4;
  
  puVar5 = *(uint **)param_1[0x110];
  if (param_3 != (uint *)0x0) {
    puVar2 = FUN_00463150(param_1,1);
    if (puVar2 == (uint *)0x0) {
      return 0xffffffff;
    }
    if ((char)*puVar2 != '\x01') {
      return 0xffffffff;
    }
  }
  puVar2 = FUN_00463150(param_1,1);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if ((char)*puVar2 == '\x02') {
    puVar2 = FUN_00463150(param_1,1);
    if (puVar2 == (uint *)0x0) {
      return 0xffffffff;
    }
    while ((char)*puVar2 != '\0') {
      iVar3 = FUN_004638e0(param_1,&local_8);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      puVar2 = FUN_00463150(param_1,1);
      if (puVar2 == (uint *)0x0) {
        return 0xffffffff;
      }
    }
    puVar2 = FUN_00463150(param_1,1);
    if (puVar2 == (uint *)0x0) {
      return 0xffffffff;
    }
  }
  if (((char)*puVar2 != '\x04') ||
     ((iVar3 = FUN_00464c00(param_1,puVar5), -1 < iVar3 &&
      (puVar2 = FUN_00463150(param_1,1), puVar2 != (uint *)0x0)))) {
    if ((char)*puVar2 == '\0') {
      return 0;
    }
    if ((char)*puVar2 == '\x05') {
      puVar2 = puVar5 + 0x1e;
      iVar3 = FUN_004638e0(param_1,puVar2);
      if (((-1 < iVar3) && (puVar5[0x1f] == 0)) && (*puVar2 < 0x5f5e101)) {
        uStack_4 = FUN_0047f911(*puVar2,0x48);
        puVar5[0x20] = uStack_4;
        if (uStack_4 != 0) {
          local_8 = 0;
          puVar4 = FUN_00463150(param_1,1);
          puVar8 = param_1;
          while (puVar4 != (uint *)0x0) {
            puVar4 = (uint *)(uint)(byte)*puVar4;
            if (puVar4 == (uint *)0x0) {
              uVar10 = puVar5[10];
              uVar9 = 0;
              uVar11 = 0;
              param_5 = 0;
              param_3 = (uint *)0x0;
              uVar14 = 0;
              if ((puStack_c[0x1f] == 0) && (puStack_c[0x1e] == 0)) {
                return 0;
              }
              puVar5 = (uint *)(uStack_4 + 0x3c);
              goto LAB_004648b2;
            }
            iVar3 = FUN_004638e0(puVar8,(uint *)&stack0x00000000);
            uVar10 = local_8;
            if (iVar3 < 0) {
              return 0xffffffff;
            }
            if ((uint *)puVar5[0x15] < param_1) {
              return 0xffffffff;
            }
            if (((uint *)puVar5[0x15] == param_1) && (puStack_c[0x14] < unaff_retaddr)) {
              return 0xffffffff;
            }
            switch(puVar4) {
            case (uint *)0xe:
              if (*(int *)(param_4 + 8) != 0) {
                return 0xffffffff;
              }
              unaff_EBP = (uint *)FUN_0047f911(*puVar2,1);
              *(uint **)(param_4 + 8) = unaff_EBP;
              if (unaff_EBP == (uint *)0x0) {
                return 0xffffffff;
              }
              unaff_EBX = *puVar2;
              iVar3 = FUN_00463a80(this,(uint)puVar8,(int)unaff_EBP,unaff_EBX);
              if (iVar3 < 0) {
                return 0xffffffff;
              }
              uVar10 = 0;
              unaff_retaddr = 0;
              if ((puVar2[1] != 0) || (*puVar2 != 0)) {
                uVar9 = 0;
                do {
                  unaff_retaddr = uVar9 + 1;
                  if (*(char *)(*(int *)(param_6 + 8) + uVar10) == '\0') {
                    unaff_retaddr = uVar9;
                  }
                  uVar10 = uVar10 + 1;
                  uVar9 = unaff_retaddr;
                } while ((puVar2[1] != 0) || (puVar8 = param_3, uVar10 < *puVar2));
              }
              break;
            case (uint *)0xf:
              if ((int)local_8 < 1) goto switchD_0046452d_caseD_16;
              if (*(int *)(param_4 + 0xc) != 0) {
                return 0xffffffff;
              }
              unaff_EBP = (uint *)FUN_0047f911(local_8,1);
              *(uint **)(param_4 + 0xc) = unaff_EBP;
              this_00 = extraout_ECX;
LAB_00464602:
              if (unaff_EBP == (uint *)0x0) {
                return 0xffffffff;
              }
              iVar3 = FUN_00463a80(this_00,(uint)puVar8,(int)unaff_EBP,uVar10);
              unaff_EBX = uVar10;
              goto LAB_00464615;
            case (uint *)0x10:
              if (0 < (int)local_8) {
                if (*(int *)(param_4 + 0x10) != 0) {
                  return 0xffffffff;
                }
                unaff_EBP = (uint *)FUN_0047f911(local_8,1);
                *(uint **)(param_4 + 0x10) = unaff_EBP;
                this_00 = extraout_ECX_00;
                goto LAB_00464602;
              }
            default:
switchD_0046452d_caseD_16:
              puVar5 = FUN_00463150(puVar8,unaff_retaddr);
              if (puVar5 == (uint *)0x0) {
                return 0xffffffff;
              }
              break;
            case (uint *)0x11:
              puVar5 = FUN_00463150(puVar8,1);
              if (puVar5 == (uint *)0x0) {
                return 0xffffffff;
              }
              uVar10 = unaff_retaddr - 1;
              if ((uVar10 & 1) != 0) {
                return 0xffffffff;
              }
              if ((puVar2[1] & 0x3fffffff) != 0 || *puVar2 >> 0x1e != 0) {
                return 0xffffffff;
              }
              if (uVar10 < *puVar2 << 2) {
                return 0xffffffff;
              }
              if (puStack_c[0x22] != 0) {
                return 0xffffffff;
              }
              puVar5 = (uint *)FUN_00482949(uVar10);
              puStack_c[0x22] = (uint)puVar5;
              uVar9 = uVar10;
              if (puVar5 == (uint *)0x0) {
                return 0xffffffff;
              }
              for (; uVar9 != 0; uVar9 = uVar9 - uVar14) {
                uVar14 = uVar9;
                if (0x10000 < uVar9) {
                  uVar14 = 0x10000;
                }
                puVar2 = FUN_00463150(param_3,uVar14);
                if (puVar2 == (uint *)0x0) {
                  return 0xffffffff;
                }
                FUN_0044c490(puVar5,puVar2,uVar14);
                puVar5 = (uint *)((int)puVar5 + uVar14);
              }
              pcVar6 = (char *)puStack_c[0x22];
              puVar2 = puStack_c + 0x1e;
              uVar9 = 0;
              if ((puStack_c[0x1f] != 0) || (puVar8 = param_3, *puVar2 != 0)) {
                piVar7 = (int *)(uStack_4 + 4);
                do {
                  *piVar7 = (int)pcVar6;
                  if (uVar10 < 2) {
                    return 0xffffffff;
                  }
                  while ((*pcVar6 != '\0' || (pcVar6[1] != '\0'))) {
                    uVar10 = uVar10 - 2;
                    pcVar6 = pcVar6 + 2;
                    if (uVar10 < 2) {
                      return 0xffffffff;
                    }
                  }
                  uVar10 = uVar10 - 2;
                  iVar3 = (int)pcVar6 - *piVar7;
                  pcVar6 = pcVar6 + 2;
                  piVar7[-1] = iVar3;
                  uVar9 = uVar9 + 1;
                  piVar7 = piVar7 + 0x12;
                } while ((puStack_c[0x1f] != 0) || (puVar8 = param_3, uVar9 < *puVar2));
              }
              break;
            case (uint *)0x12:
            case (uint *)0x13:
            case (uint *)0x14:
              iVar3 = FUN_00465180(puVar8,param_4,puVar4,unaff_EBP,unaff_EBX);
LAB_00464615:
              if (iVar3 < 0) {
                return 0xffffffff;
              }
              break;
            case (uint *)0x15:
              puVar5 = FUN_00463150(puVar8,2);
              if (puVar5 == (uint *)0x0) {
                return 0xffffffff;
              }
              if (*(int *)(param_4 + 0x14) != 0) {
                return 0xffffffff;
              }
              unaff_EBP = (uint *)FUN_0047f911(*puVar2,1);
              *(uint **)(param_4 + 0x14) = unaff_EBP;
              if (unaff_EBP == (uint *)0x0) {
                return 0xffffffff;
              }
              unaff_EBX = *puVar2;
              if (param_7 == '\0') {
                iVar3 = FUN_00463a80(this_01,(uint)puVar8,(int)unaff_EBP,unaff_EBX);
                if (iVar3 < 0) {
                  return 0xffffffff;
                }
              }
              else {
                puVar5 = (uint *)0x1;
                _memset(unaff_EBP,1,unaff_EBX);
                unaff_EBP = puVar5;
              }
              uVar10 = 0;
              if ((puVar2[1] != 0) || (*puVar2 != 0)) {
                puVar5 = param_1 + 0x10;
                do {
                  if (*(char *)(uVar10 + *(int *)(param_6 + 0x14)) != '\0') {
                    unaff_EBX = 4;
                    unaff_EBP = puVar8;
                    puVar4 = FUN_00463150(puVar8,4);
                    if (puVar4 == (uint *)0x0) {
                      return 0xffffffff;
                    }
                    *puVar5 = *puVar4;
                  }
                  uVar10 = uVar10 + 1;
                  puVar5 = puVar5 + 0x12;
                } while ((puVar2[1] != 0) || (uVar10 < *puVar2));
              }
              break;
            case (uint *)0x19:
              if (unaff_retaddr != 0) goto switchD_0046452d_caseD_16;
            }
            puVar4 = FUN_00463150(puVar8,1);
            puVar5 = puStack_c;
          }
        }
      }
    }
  }
  return 0xffffffff;
LAB_004648b2:
  if ((*(int *)(param_4 + 8) == 0) || (*(char *)(*(int *)(param_4 + 8) + uVar14) == '\0')) {
    puVar5[-0xb] = puVar5[-0xb] | 0x10;
  }
  uVar12 = (uint)*(ushort *)((int)puVar5 + 6);
  *puVar5 = uVar12;
  if ((puVar5[-0xb] & 0x10) == 0) {
    if (*(int *)(param_4 + 0xc) == 0) {
      bVar13 = true;
    }
    else {
      bVar13 = *(char *)(*(int *)(param_4 + 0xc) + param_5) == '\0';
      param_5 = param_5 + 1;
    }
    if (uVar12 == 0) {
      uVar12 = 0x41ff;
      if (!bVar13) {
        uVar12 = 0x81b6;
      }
LAB_00464959:
      *puVar5 = uVar12;
    }
    else if ((bVar13) && ((uVar12 & 0xf000) != 0x4000)) {
      uVar12 = uVar12 & 0xffff4fff | 0x4000;
      goto LAB_00464959;
    }
    if ((((uVar12 & 0xf000) == 0x4000) && (uVar12 = puVar5[-0xf], 1 < uVar12)) &&
       ((uVar1 = puVar5[-0xe], *(char *)((uVar1 - 2) + uVar12) != '/' ||
        (*(char *)((uVar1 - 1) + uVar12) != '\0')))) {
      *(undefined1 *)(uVar1 + uVar12) = 0x2f;
      *(undefined1 *)(puVar5[-0xe] + 1 + puVar5[-0xf]) = 0;
      puVar5[-0xf] = puVar5[-0xf] + 2;
    }
    uVar12 = 0xffffffff;
  }
  else {
    if (puStack_c[0xe] <= uVar9) {
      return 0xffffffff;
    }
    if (uVar12 == 0) {
      *puVar5 = 0x81b6;
    }
    if (*(char *)(puStack_c[0x10] + uVar9) != '\0') {
      puVar5[-0xb] = puVar5[-0xb] | 8;
    }
    uVar12 = uVar9;
    uVar9 = uVar9 + 1;
  }
  puVar5[-0xc] = uVar12;
  if ((puVar5[1] & 1) != 0) {
    *puVar5 = *puVar5 & 0xffffff6d;
  }
  if (param_3 == (uint *)0x0) {
    if ((puVar5[-0xb] & 0x10) != 0) {
      piVar7 = (int *)(uVar10 + 0x50 + uVar11 * 0x68);
      while( true ) {
        if ((puStack_c[9] == 0) && (puStack_c[8] <= uVar11)) {
          return 0xffffffff;
        }
        if (*piVar7 != 0 || piVar7[1] != 0) break;
        uVar11 = uVar11 + 1;
        piVar7 = piVar7 + 0x1a;
      }
      goto LAB_00464a05;
    }
    puVar5[-0xd] = 0xffffffff;
  }
  else {
LAB_00464a05:
    puVar5[-0xd] = uVar11;
    if ((puVar5[-0xb] & 0x10) != 0) {
      param_3 = (uint *)((int)param_3 + 1);
      if ((*(int *)(uVar11 * 0x68 + 0x54 + uVar10) == 0) &&
         (*(uint **)(uVar11 * 0x68 + 0x50 + uVar10) <= param_3)) {
        uVar11 = uVar11 + 1;
        param_3 = (uint *)0x0;
      }
    }
  }
  puVar5 = puVar5 + 0x12;
  uVar14 = uVar14 + 1;
  if ((puStack_c[0x1f] == 0) && (puStack_c[0x1e] <= uVar14)) {
    return 0;
  }
  goto LAB_004648b2;
}


