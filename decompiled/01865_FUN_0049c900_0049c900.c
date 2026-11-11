// Function: FUN_0049c900
// Entry: 0049c900
// Size: 966 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c900(int *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  char *pcVar6;
  short *psVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  ushort uVar16;
  uint uVar17;
  int *piVar18;
  short sVar19;
  short sVar20;
  int *piVar21;
  uint uVar22;
  ushort *puVar23;
  char *pcVar24;
  char *pcVar25;
  uint uVar26;
  ushort *local_24;
  ushort *local_1c;
  
  pcVar6 = (char *)param_1[2];
  local_24 = *(ushort **)(pcVar6 + 2);
  if (((byte)pcVar6[1] < 0x1f) && (psVar7 = *(short **)(*param_1 + 8), psVar7 != (short *)0x0)) {
    if (*psVar7 == 1) {
      if (*(byte *)((int)psVar7 + 3) < 0x20) {
        *(byte *)((int)psVar7 + 3) = *(byte *)((int)psVar7 + 3) + 1;
      }
    }
    else {
      pcVar25 = *(char **)(psVar7 + 2);
      if (*pcVar25 != *pcVar6) {
        do {
          pcVar24 = pcVar25;
          pcVar25 = pcVar24 + 6;
        } while (*pcVar25 != *pcVar6);
        if ((byte)pcVar24[1] <= (byte)pcVar24[7]) {
          uVar3 = *(undefined2 *)(pcVar24 + 10);
          uVar8 = *(undefined4 *)pcVar25;
          *(undefined4 *)pcVar25 = *(undefined4 *)pcVar24;
          *(undefined2 *)(pcVar24 + 10) = *(undefined2 *)(pcVar24 + 4);
          *(undefined4 *)pcVar24 = uVar8;
          *(undefined2 *)(pcVar24 + 4) = uVar3;
          pcVar25 = pcVar24;
        }
      }
      if ((byte)pcVar25[1] < 0x73) {
        pcVar25[1] = pcVar25[1] + 2;
        psVar7[1] = psVar7[1] + 2;
      }
    }
  }
  if (param_1[3] == 0) {
    puVar12 = FUN_0049c770(param_1,1);
    param_1[1] = (int)puVar12;
    *param_1 = (int)puVar12;
    if (puVar12 != (ushort *)0x0) {
      iVar9 = param_1[2];
      *(short *)(iVar9 + 2) = (short)puVar12;
      *(short *)(iVar9 + 4) = (short)((uint)puVar12 >> 0x10);
      return;
    }
  }
  else {
    *(undefined1 *)param_1[0xf] = *(undefined1 *)param_1[2];
    local_1c = (ushort *)(param_1[0xf] + 1);
    param_1[0xf] = (int)local_1c;
    if (local_1c < (ushort *)param_1[0x10]) {
      if (local_24 == (ushort *)0x0) {
        *(ushort **)(param_1[2] + 2) = local_1c;
        puVar12 = (ushort *)*param_1;
        local_24 = puVar12;
      }
      else {
        if ((local_24 <= local_1c) &&
           (local_24 = FUN_0049c770(param_1,0), local_24 == (ushort *)0x0)) goto LAB_0049ccb5;
        piVar15 = param_1 + 3;
        *piVar15 = *piVar15 + -1;
        puVar12 = (ushort *)*param_1;
        if (*piVar15 == 0) {
          param_1[0xf] = param_1[0xf] - (uint)((ushort *)param_1[1] != puVar12);
          local_1c = local_24;
        }
      }
      uVar4 = puVar12[1];
      uVar26 = (uint)*puVar12;
      puVar23 = (ushort *)param_1[1];
      bVar2 = *(byte *)(param_1[2] + 1);
      if (puVar23 != puVar12) {
        do {
          uVar5 = *puVar23;
          uVar13 = (uint)uVar5;
          if (uVar13 == 1) {
            piVar15 = (int *)param_1[0x3c];
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)param_1[0xd];
              if ((uint)(param_1[0xe] - (int)piVar15) < (uint)*(byte *)(param_1 + 0x12) * 0xc) {
                piVar15 = FUN_0049c570((int)param_1,0);
              }
              else {
                param_1[0xd] = (int)(piVar15 + (uint)*(byte *)(param_1 + 0x12) * 3);
              }
              if (piVar15 == (int *)0x0) goto LAB_0049ccb5;
            }
            else {
              param_1[0x3c] = *piVar15;
            }
            *piVar15 = *(int *)(puVar23 + 1);
            *(ushort *)(piVar15 + 1) = puVar23[3];
            *(int **)(puVar23 + 2) = piVar15;
            if (*(byte *)((int)piVar15 + 1) < 0x1e) {
              bVar11 = *(byte *)((int)piVar15 + 1) * '\x02';
            }
            else {
              bVar11 = 0x78;
            }
            *(byte *)((int)piVar15 + 1) = bVar11;
            uVar16 = (ushort)(3 < uVar26) + (short)param_1[4] + (ushort)bVar11;
          }
          else {
            if ((uVar5 & 1) == 0) {
              uVar22 = (uint)(uVar5 >> 1);
              uVar17 = (uint)*(byte *)(uVar22 + 0x6d + (int)param_1);
              if (uVar17 != *(byte *)(uVar22 + 0x6e + (int)param_1)) {
                piVar15 = (int *)param_1[uVar17 + 0x3d];
                if (piVar15 == (int *)0x0) {
                  uVar14 = (uint)*(byte *)(uVar17 + 0x49 + (int)param_1);
                  piVar15 = (int *)param_1[0xd];
                  if ((uint)(param_1[0xe] - (int)piVar15) < uVar14 * 0xc) {
                    piVar15 = FUN_0049c570((int)param_1,uVar17 + 1);
                  }
                  else {
                    param_1[0xd] = (int)(piVar15 + uVar14 * 3);
                  }
                  if (piVar15 == (int *)0x0) goto LAB_0049ccb5;
                }
                else {
                  param_1[uVar17 + 0x3d] = *piVar15;
                }
                piVar10 = *(int **)(puVar23 + 2);
                piVar18 = piVar10 + 2;
                piVar21 = piVar15;
                do {
                  *piVar21 = piVar18[-2];
                  piVar21[1] = piVar18[-1];
                  *(int *)((int)piVar18 + ((int)piVar15 - (int)piVar10)) = *piVar18;
                  uVar22 = uVar22 - 1;
                  piVar18 = piVar18 + 3;
                  piVar21 = piVar21 + 3;
                } while (uVar22 != 0);
                *piVar10 = param_1[uVar17 + 0x3c];
                param_1[uVar17 + 0x3c] = (int)piVar10;
                *(int **)(puVar23 + 2) = piVar15;
              }
            }
            uVar16 = (ushort)((uint)puVar23[1] <= uVar13 * 8 && uVar13 * 4 <= uVar26) * 2 +
                     (ushort)(uVar13 * 2 < uVar26) + puVar23[1];
          }
          puVar23[1] = uVar16;
          uVar22 = (uint)uVar16 + (((uint)uVar4 - (uint)bVar2) - uVar26) + 1;
          uVar17 = (uint)*(byte *)(param_1[2] + 1) * (uVar16 + 6) * 2;
          if (uVar17 < uVar22 * 6) {
            sVar19 = 3;
            sVar20 = ((uVar22 < uVar17) + 2) - (ushort)(uVar17 < uVar22 * 4);
          }
          else {
            sVar19 = (-(ushort)(uVar17 < uVar22 * 9) - (ushort)(uVar17 < uVar22 * 0xf)) +
                     (7 - (ushort)(uVar17 < uVar22 * 0xc));
            sVar20 = sVar19;
          }
          puVar23[1] = uVar16 + sVar19;
          iVar9 = *(int *)(puVar23 + 2);
          *(short *)(iVar9 + 2 + uVar13 * 6) = (short)local_1c;
          puVar1 = (undefined1 *)(iVar9 + uVar13 * 6);
          *(short *)(puVar1 + 4) = (short)((uint)local_1c >> 0x10);
          *puVar1 = *(undefined1 *)param_1[2];
          puVar1[1] = (char)sVar20;
          *puVar23 = uVar5 + 1;
          puVar23 = *(ushort **)(puVar23 + 4);
        } while (puVar23 != (ushort *)*param_1);
      }
      *param_1 = (int)local_24;
      param_1[1] = (int)local_24;
      return;
    }
  }
LAB_0049ccb5:
  FUN_0049c610(param_1);
  return;
}


