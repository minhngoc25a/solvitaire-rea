// Function: FUN_00473610
// Entry: 00473610
// Size: 1195 bytes
// Thunk: false
// External: false


void __cdecl FUN_00473610(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined1 uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint local_20;
  
  iVar8 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (param_3 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = (uint)*(ushort *)(param_3 + 8);
    }
    bVar14 = *(byte *)((int)param_1 + 9);
    if (bVar14 < 8) {
      if (bVar14 == 1) {
        local_20 = (local_20 & 1) * 0xff;
        iVar18 = 7 - (iVar8 - 1U & 7);
        pbVar15 = (byte *)((iVar8 - 1U >> 3) + param_2);
        pcVar16 = (char *)(param_2 + -1 + iVar8);
        for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
          *pcVar16 = -((*pbVar15 >> ((byte)iVar18 & 0x1f) & 1) != 0);
          iVar11 = iVar18 + 1;
          pbVar12 = pbVar15 + -1;
          if (iVar18 != 7) {
            pbVar12 = pbVar15;
          }
          bVar19 = iVar18 != 7;
          iVar18 = 0;
          if (bVar19) {
            iVar18 = iVar11;
          }
          pbVar15 = pbVar12;
          pcVar16 = pcVar16 + -1;
        }
      }
      else if (bVar14 == 2) {
        local_20 = (local_20 & 3) * 0x55;
        iVar17 = (3 - (iVar8 - 1U & 3)) * 2;
        pbVar15 = (byte *)((iVar8 - 1U >> 2) + param_2);
        pbVar12 = (byte *)(param_2 + -1 + iVar8);
        for (iVar18 = iVar8; iVar18 != 0; iVar18 = iVar18 + -1) {
          bVar14 = *pbVar15 >> ((byte)iVar17 & 0x1f) & 3;
          *pbVar12 = ((bVar14 << 2 | bVar14) << 2 | bVar14) << 2 | bVar14;
          pbVar10 = pbVar15 + -1;
          if (iVar17 != 6) {
            pbVar10 = pbVar15;
          }
          bVar19 = iVar17 != 6;
          iVar11 = iVar17 + 2;
          iVar17 = 0;
          if (bVar19) {
            iVar17 = iVar11;
          }
          pbVar15 = pbVar10;
          pbVar12 = pbVar12 + -1;
        }
      }
      else if (bVar14 == 4) {
        local_20 = (local_20 & 0xf) * 0x11;
        pbVar15 = (byte *)((iVar8 - 1U >> 1) + param_2);
        iVar18 = (iVar8 - 1U & 1) * -4 + 4;
        pbVar12 = (byte *)(param_2 + -1 + iVar8);
        for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
          bVar14 = *pbVar15 >> ((byte)iVar18 & 0x1f);
          *pbVar12 = bVar14 & 0xf ^ bVar14 << 4;
          pbVar10 = pbVar15 + -1;
          if (iVar18 != 4) {
            pbVar10 = pbVar15;
          }
          iVar11 = 0;
          if (iVar18 != 4) {
            iVar11 = 4;
          }
          pbVar15 = pbVar10;
          iVar18 = iVar11;
          pbVar12 = pbVar12 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      bVar14 = 8;
      param_1[1] = iVar8;
    }
    if (param_3 != 0) {
      if (bVar14 == 8) {
        pbVar15 = (byte *)(param_2 + -1 + iVar8);
        pcVar16 = (char *)(param_2 + -1 + iVar8 * 2);
        for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
          *pcVar16 = -((uint)*pbVar15 != (local_20 & 0xff));
          pcVar16[-1] = *pbVar15;
          pbVar15 = pbVar15 + -1;
          pcVar16 = pcVar16 + -2;
        }
      }
      else if (bVar14 == 0x10) {
        pbVar15 = (byte *)(param_2 + -1 + param_1[1]);
        puVar13 = (undefined1 *)(param_2 + param_1[1] * 2 + -1);
        for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (((uint)pbVar15[-1] == local_20 >> 8) && ((uint)*pbVar15 == (local_20 & 0xff))) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0xff;
          }
          *puVar13 = uVar9;
          puVar13[-1] = uVar9;
          puVar13[-2] = *pbVar15;
          pbVar12 = pbVar15 + -1;
          pbVar15 = pbVar15 + -2;
          puVar13[-3] = *pbVar12;
          puVar13 = puVar13 + -4;
        }
      }
      bVar14 = *(byte *)((int)param_1 + 9) * '\x02';
      *(undefined1 *)(param_1 + 2) = 4;
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(byte *)((int)param_1 + 0xb) = bVar14;
      if (bVar14 < 8) {
        param_1[1] = (uint)bVar14 * iVar8 + 7 >> 3;
        return;
      }
      param_1[1] = (uint)((*(byte *)((int)param_1 + 9) & 0x7f) >> 2) * iVar8;
      return;
    }
  }
  else if (((char)param_1[2] == '\x02') && (param_3 != 0)) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      cVar2 = *(char *)(param_3 + 2);
      cVar3 = *(char *)(param_3 + 4);
      cVar4 = *(char *)(param_3 + 6);
      pcVar16 = (char *)(param_2 + -1 + param_1[1]);
      puVar13 = (undefined1 *)(param_2 + iVar8 * 4 + -1);
      for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
        if (((pcVar16[-2] == cVar2) && (pcVar16[-1] == cVar3)) && (*pcVar16 == cVar4)) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0xff;
        }
        *puVar13 = uVar9;
        puVar13[-1] = *pcVar16;
        puVar13[-2] = pcVar16[-1];
        pcVar1 = pcVar16 + -2;
        pcVar16 = pcVar16 + -3;
        puVar13[-3] = *pcVar1;
        puVar13 = puVar13 + -4;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      uVar5 = *(undefined2 *)(param_3 + 2);
      uVar6 = *(undefined2 *)(param_3 + 4);
      uVar7 = *(undefined2 *)(param_3 + 6);
      pcVar16 = (char *)(param_2 + -1 + param_1[1]);
      puVar13 = (undefined1 *)(param_2 + iVar8 * 8 + -1);
      for (iVar17 = iVar8; iVar17 != 0; iVar17 = iVar17 + -1) {
        if (((((pcVar16[-5] == (char)((ushort)uVar5 >> 8)) && (pcVar16[-4] == (char)uVar5)) &&
             (pcVar16[-3] == (char)((ushort)uVar6 >> 8))) &&
            ((pcVar16[-2] == (char)uVar6 && (pcVar16[-1] == (char)((ushort)uVar7 >> 8))))) &&
           (*pcVar16 == (char)uVar7)) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0xff;
        }
        *puVar13 = uVar9;
        puVar13[-1] = uVar9;
        puVar13[-2] = *pcVar16;
        puVar13[-3] = pcVar16[-1];
        puVar13[-4] = pcVar16[-2];
        puVar13[-5] = pcVar16[-3];
        puVar13[-6] = pcVar16[-4];
        pcVar1 = pcVar16 + -5;
        pcVar16 = pcVar16 + -6;
        puVar13[-7] = *pcVar1;
        puVar13 = puVar13 + -8;
      }
    }
    bVar14 = *(byte *)((int)param_1 + 9) << 2;
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    *(byte *)((int)param_1 + 0xb) = bVar14;
    if (7 < bVar14) {
      param_1[1] = (uint)((*(byte *)((int)param_1 + 9) & 0x3f) >> 1) * iVar8;
      return;
    }
    param_1[1] = (uint)bVar14 * iVar8 + 7 >> 3;
  }
  return;
}


