// Function: FUN_0046fa70
// Entry: 0046fa70
// Size: 2376 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046fa70(int param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  undefined1 *puVar18;
  bool bVar19;
  
  iVar7 = *(int *)(param_1 + 0x124);
  if ((iVar7 == 0) || ((*(uint *)(param_1 + 0x78) & 0x4040) == 0x4000)) goto LAB_004703b2;
  if ((*(uint *)(param_1 + 0x7c) & 0x1000) != 0) {
    if ((char)param_2[2] == '\x03') {
      FUN_00473350(param_1,param_2,iVar7 + 1,*(int *)(param_1 + 0x13c),*(int *)(param_1 + 0x1b0),
                   (uint)*(ushort *)(param_1 + 0x148));
    }
    else if ((*(ushort *)(param_1 + 0x148) == 0) || ((*(uint *)(param_1 + 0x7c) & 0x2000000) == 0))
    {
      uVar17 = *param_2;
      iVar12 = iVar7 + 1;
      if (((char)param_2[2] == '\0') && (bVar14 = *(byte *)((int)param_2 + 9), bVar14 < 8)) {
        if (bVar14 == 1) {
          iVar7 = 7 - (uVar17 - 1 & 7);
          pcVar6 = (char *)((uVar17 - 1) + iVar12);
          pbVar9 = (byte *)((uVar17 - 1 >> 3) + iVar12);
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar6 = -((*pbVar9 >> ((byte)iVar7 & 0x1f) & 1) != 0);
            iVar12 = iVar7 + 1;
            pbVar8 = pbVar9 + -1;
            if (iVar7 != 7) {
              pbVar8 = pbVar9;
            }
            bVar19 = iVar7 != 7;
            iVar7 = 0;
            if (bVar19) {
              iVar7 = iVar12;
            }
            pcVar6 = pcVar6 + -1;
            pbVar9 = pbVar8;
          }
        }
        else if (bVar14 == 2) {
          iVar13 = (3 - (uVar17 - 1 & 3)) * 2;
          pbVar9 = (byte *)((uVar17 - 1 >> 2) + iVar12);
          pbVar8 = (byte *)(iVar7 + uVar17);
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            bVar14 = *pbVar9 >> ((byte)iVar13 & 0x1f) & 3;
            *pbVar8 = ((bVar14 << 2 | bVar14) << 2 | bVar14) << 2 | bVar14;
            pbVar16 = pbVar9 + -1;
            if (iVar13 != 6) {
              pbVar16 = pbVar9;
            }
            bVar19 = iVar13 != 6;
            iVar7 = iVar13 + 2;
            iVar13 = 0;
            if (bVar19) {
              iVar13 = iVar7;
            }
            pbVar9 = pbVar16;
            pbVar8 = pbVar8 + -1;
          }
        }
        else if (bVar14 == 4) {
          pbVar9 = (byte *)((uVar17 - 1 >> 1) + iVar12);
          pbVar8 = (byte *)(iVar7 + uVar17);
          iVar7 = (uVar17 - 1 & 1) * -4 + 4;
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            bVar14 = *pbVar9 >> ((byte)iVar7 & 0x1f);
            *pbVar8 = bVar14 & 0xf ^ bVar14 << 4;
            pbVar16 = pbVar9 + -1;
            if (iVar7 != 4) {
              pbVar16 = pbVar9;
            }
            iVar12 = 0;
            if (iVar7 != 4) {
              iVar12 = 4;
            }
            pbVar9 = pbVar16;
            pbVar8 = pbVar8 + -1;
            iVar7 = iVar12;
          }
        }
        *(undefined1 *)((int)param_2 + 9) = 8;
        *(undefined1 *)((int)param_2 + 0xb) = 8;
        param_2[1] = uVar17;
      }
    }
    else {
      FUN_00473610((int *)param_2,iVar7 + 1,param_1 + 0x1b4);
    }
  }
  puVar1 = (uint *)(param_1 + 0x7c);
  if (((*puVar1 & 0x40080) == 0x40000) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_00473c80((int)param_2,(undefined1 *)(*(int *)(param_1 + 0x124) + 1),0);
  }
  if (((*puVar1 & 0x600000) != 0) &&
     (iVar7 = FUN_004717f0(param_1,(int *)param_2,(ushort *)(*(int *)(param_1 + 0x124) + 1)),
     iVar7 != 0)) {
    *(undefined1 *)(param_1 + 0x248) = 1;
    if ((*puVar1 & 0x600000) == 0x400000) {
      FUN_0046f1c0(param_1,"png_do_rgb_to_gray found nongray pixel");
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x600000) == 0x200000) goto LAB_004703b2;
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x800) == 0)) {
    FUN_00471650((int *)param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x80) != 0) {
    FUN_00471d20((int *)param_2,(byte *)(*(int *)(param_1 + 0x124) + 1),param_1);
  }
  uVar17 = *(uint *)(param_1 + 0x7c);
  if (((uVar17 & 0x602000) == 0x2000) &&
     (((-1 < (char)uVar17 ||
       ((*(short *)(param_1 + 0x148) == 0 && ((*(byte *)(param_1 + 0x14f) & 4) == 0)))) &&
      (*(char *)(param_1 + 0x14f) != '\x03')))) {
    FUN_00472f30((int *)param_2,(byte *)(*(int *)(param_1 + 0x124) + 1),param_1);
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x40080) == 0x40080) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_00473c80((int)param_2,(undefined1 *)(*(int *)(param_1 + 0x124) + 1),0);
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x800000) != 0) && (uVar17 = param_2[2], (uVar17 & 4) != 0)) {
    pbVar9 = *(byte **)(param_1 + 0x124);
    uVar15 = *param_2;
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar7 = *(int *)(param_1 + 0x194);
      if (iVar7 == 0) {
LAB_0046fedb:
        FUN_0046f1c0(param_1,"png_do_encode_alpha: unexpected call");
      }
      else {
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          pbVar9 = pbVar9 + (uint)((uVar17 & 2) != 0) * 2 + 2;
          *pbVar9 = *(byte *)((uint)*pbVar9 + iVar7);
        }
      }
    }
    else {
      if ((*(char *)((int)param_2 + 9) != '\x10') || (*(int *)(param_1 + 0x19c) == 0))
      goto LAB_0046fedb;
      iVar7 = (uint)((uVar17 & 2) != 0) * 4;
      pbVar9 = pbVar9 + iVar7 + 3;
      if (uVar15 != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x184);
        iVar12 = *(int *)(param_1 + 0x19c);
        do {
          uVar4 = *(undefined2 *)
                   (*(int *)(iVar12 + (uint)(pbVar9[1] >> ((byte)uVar5 & 0x1f)) * 4) +
                   (uint)*pbVar9 * 2);
          pbVar9[1] = (byte)uVar4;
          *pbVar9 = (byte)((ushort)uVar4 >> 8);
          pbVar9 = pbVar9 + iVar7 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
  }
  uVar17 = *(uint *)(param_1 + 0x7c);
  if (((uVar17 & 0x4000000) != 0) && (*(char *)((int)param_2 + 9) == '\x10')) {
    pbVar16 = (byte *)(*(int *)(param_1 + 0x124) + 1);
    pbVar8 = pbVar16 + param_2[1];
    pbVar9 = pbVar16;
    if (pbVar16 < pbVar8) {
      do {
        bVar14 = *pbVar16;
        pbVar2 = pbVar16 + 1;
        pbVar16 = pbVar16 + 2;
        *pbVar9 = bVar14 + (char)((((uint)*pbVar2 - (uint)bVar14) + 0x80) * 0xffff >> 0x18);
        pbVar9 = pbVar9 + 1;
      } while (pbVar16 < pbVar8);
      uVar17 = *(uint *)(param_1 + 0x7c);
    }
    *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 10) << 3;
    *(undefined1 *)((int)param_2 + 9) = 8;
    param_2[1] = (uint)*(byte *)((int)param_2 + 10) * *param_2;
  }
  if (((uVar17 & 0x400) != 0) && (*(char *)((int)param_2 + 9) == '\x10')) {
    puVar10 = (undefined1 *)(*(int *)(param_1 + 0x124) + 1);
    puVar18 = puVar10 + param_2[1];
    puVar11 = puVar10;
    if (puVar10 < puVar18) {
      do {
        uVar3 = *puVar10;
        puVar10 = puVar10 + 2;
        *puVar11 = uVar3;
        puVar11 = puVar11 + 1;
      } while (puVar10 < puVar18);
      uVar17 = *(uint *)(param_1 + 0x7c);
    }
    *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 10) << 3;
    *(undefined1 *)((int)param_2 + 9) = 8;
    param_2[1] = (uint)*(byte *)((int)param_2 + 10) * *param_2;
  }
  if (((uVar17 & 0x40) == 0) ||
     (FUN_00473ac0((int *)param_2,(byte *)(*(int *)(param_1 + 0x124) + 1),*(int *)(param_1 + 0x204),
                   *(int *)(param_1 + 0x208)), param_2[1] != 0)) {
    uVar17 = *(uint *)(param_1 + 0x7c);
    if (((uVar17 & 0x200) != 0) &&
       ((*(char *)((int)param_2 + 9) == '\b' && ((char)param_2[2] != '\x03')))) {
      puVar10 = (undefined1 *)(param_2[1] + 1 + *(int *)(param_1 + 0x124));
      puVar11 = puVar10 + param_2[1];
      if (puVar10 < puVar11) {
        do {
          uVar3 = puVar10[-1];
          puVar10 = puVar10 + -1;
          puVar11[-1] = uVar3;
          puVar11 = puVar11 + -2;
          *puVar11 = uVar3;
        } while (puVar10 < puVar11);
      }
      *(undefined1 *)((int)param_2 + 9) = 0x10;
      param_2[1] = param_2[1] * 2;
      *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 10) << 4;
    }
    if (((uVar17 & 0x4000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x800) != 0)) {
      FUN_00471650((int *)param_2,*(int *)(param_1 + 0x124) + 1);
    }
    if ((*(byte *)(param_1 + 0x7c) & 0x20) != 0) {
      FUN_00473e90((int)param_2,(uint *)(*(int *)(param_1 + 0x124) + 1));
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x80000) != 0) {
      iVar7 = *(int *)(param_1 + 0x124) + 1;
      uVar17 = *param_2;
      if ((char)param_2[2] == '\x06') {
        iVar7 = param_2[1] + iVar7;
        if (*(char *)((int)param_2 + 9) == '\b') {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(byte *)(iVar7 + -1) = ~*(byte *)(iVar7 + -1);
            iVar7 = iVar7 + -4;
          }
        }
        else {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(byte *)(iVar7 + -1) = ~*(byte *)(iVar7 + -1);
            *(byte *)(iVar7 + -2) = ~*(byte *)(iVar7 + -2);
            iVar7 = iVar7 + -8;
          }
        }
      }
      else if ((char)param_2[2] == '\x04') {
        puVar11 = (undefined1 *)(param_2[1] + iVar7);
        puVar10 = puVar11;
        if (*(char *)((int)param_2 + 9) == '\b') {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            pbVar9 = puVar11 + -1;
            puVar11 = puVar11 + -2;
            puVar10[-1] = ~*pbVar9;
            puVar10[-2] = *puVar11;
            puVar10 = puVar10 + -2;
          }
        }
        else {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            puVar11[-1] = ~puVar11[-1];
            puVar11[-2] = ~puVar11[-2];
            puVar11 = puVar11 + -4;
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 0x7c) & 8) != 0) {
      FUN_004710c0((int)param_2,(byte *)(*(int *)(param_1 + 0x124) + 1),(byte *)(param_1 + 0x1a9));
    }
    if ((*(byte *)(param_1 + 0x7c) & 4) != 0) {
      iVar7 = *(int *)(param_1 + 0x124);
      bVar14 = *(byte *)((int)param_2 + 9);
      iVar12 = iVar7 + 1;
      if (bVar14 < 8) {
        uVar17 = *param_2;
        if (bVar14 == 1) {
          iVar13 = 7 - (uVar17 - 1 & 7);
          pbVar9 = (byte *)((uVar17 - 1 >> 3) + iVar12);
          pbVar8 = (byte *)(iVar7 + uVar17);
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pbVar8 = *pbVar9 >> ((byte)iVar13 & 0x1f) & 1;
            pbVar16 = pbVar9 + -1;
            if (iVar13 != 7) {
              pbVar16 = pbVar9;
            }
            iVar7 = iVar13 + 1;
            bVar19 = iVar13 != 7;
            iVar13 = 0;
            if (bVar19) {
              iVar13 = iVar7;
            }
            pbVar9 = pbVar16;
            pbVar8 = pbVar8 + -1;
          }
        }
        else if (bVar14 == 2) {
          iVar13 = (3 - (uVar17 - 1 & 3)) * 2;
          pbVar9 = (byte *)((uVar17 - 1 >> 2) + iVar12);
          pbVar8 = (byte *)(iVar7 + uVar17);
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pbVar8 = *pbVar9 >> ((byte)iVar13 & 0x1f) & 3;
            pbVar16 = pbVar9 + -1;
            if (iVar13 != 6) {
              pbVar16 = pbVar9;
            }
            bVar19 = iVar13 != 6;
            iVar7 = iVar13 + 2;
            iVar13 = 0;
            if (bVar19) {
              iVar13 = iVar7;
            }
            pbVar9 = pbVar16;
            pbVar8 = pbVar8 + -1;
          }
        }
        else if (bVar14 == 4) {
          pbVar9 = (byte *)((uVar17 - 1 >> 1) + iVar12);
          pbVar8 = (byte *)(iVar7 + uVar17);
          iVar7 = (1 - (uVar17 - 1 & 1)) * 4;
          for (uVar15 = uVar17; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pbVar8 = *pbVar9 >> ((byte)iVar7 & 0x1f) & 0xf;
            pbVar16 = pbVar9 + -1;
            if (iVar7 != 4) {
              pbVar16 = pbVar9;
            }
            iVar12 = 0;
            if (iVar7 != 4) {
              iVar12 = 4;
            }
            pbVar9 = pbVar16;
            pbVar8 = pbVar8 + -1;
            iVar7 = iVar12;
          }
        }
        *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 10) << 3;
        *(undefined1 *)((int)param_2 + 9) = 8;
        param_2[1] = *(byte *)((int)param_2 + 10) * uVar17;
      }
    }
    if (((char)param_2[2] == '\x03') && (-1 < *(int *)(param_1 + 0x144))) {
      FUN_00474040(param_1,(int *)param_2);
    }
    if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
      FUN_00473f60((int *)param_2,(undefined1 *)(*(int *)(param_1 + 0x124) + 1));
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x10000) != 0) {
      FUN_00473e40((int)param_2,(byte *)(*(int *)(param_1 + 0x124) + 1));
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x8000) != 0) {
      FUN_004713a0(param_2,*(int *)(param_1 + 0x124) + 1,(uint)*(ushort *)(param_1 + 0x15a),
                   (byte)*(undefined4 *)(param_1 + 0x78));
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x20000) != 0) {
      FUN_00471290((int *)param_2,*(int *)(param_1 + 0x124) + 1);
    }
    if ((*(byte *)(param_1 + 0x7c) & 0x10) != 0) {
      FUN_00473e00((int *)param_2,(undefined1 *)(*(int *)(param_1 + 0x124) + 1));
    }
    if ((*(uint *)(param_1 + 0x7c) & 0x100000) != 0) {
      if (*(code **)(param_1 + 100) != (code *)0x0) {
        (**(code **)(param_1 + 100))(param_1,param_2,*(int *)(param_1 + 0x124) + 1);
      }
      if (*(char *)(param_1 + 0x70) != '\0') {
        *(char *)((int)param_2 + 9) = *(char *)(param_1 + 0x70);
      }
      if (*(char *)(param_1 + 0x71) != '\0') {
        *(char *)((int)param_2 + 10) = *(char *)(param_1 + 0x71);
      }
      bVar14 = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
      *(byte *)((int)param_2 + 0xb) = bVar14;
      if (7 < bVar14) {
        param_2[1] = (uint)(bVar14 >> 3) * *param_2;
        return;
      }
      param_2[1] = (uint)bVar14 * *param_2 + 7 >> 3;
    }
    return;
  }
LAB_004703b2:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


