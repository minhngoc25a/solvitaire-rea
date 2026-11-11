// Function: FUN_00443ce0
// Entry: 00443ce0
// Size: 598 bytes
// Thunk: false
// External: false


void __cdecl FUN_00443ce0(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pFrameOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc88f);
  }
  uVar20 = 0;
  fVar25 = (float)((double)*(int *)(param_1 + 0x2c) +
                  (double)(&DAT_0050c3d0)[-(*(int *)(param_1 + 0x2c) >> 0x1f)]) /
           (float)((double)*(int *)(param_1 + 0xc) +
                  (double)(&DAT_0050c3d0)[-(*(int *)(param_1 + 0xc) >> 0x1f)]);
  if (uVar4 != 0) {
    if (uVar4 < 0x10) {
      uVar20 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30);
      pfVar21 = (float *)(param_2 + 0x20);
      iVar22 = *(int *)(param_1 + 0x34);
      iVar23 = 0x20;
      do {
        uVar20 = uVar20 + 0x10;
        pfVar1 = (float *)((int)pfVar21 + iVar5 + (-0x20 - param_2));
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)((int)pfVar21 + iVar22 + (-0x20 - param_2));
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)((int)pfVar21 + iVar5 + (-0x10 - param_2));
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar21[-8] = (*pfVar2 - *pfVar1) * fVar25 + *pfVar1;
        pfVar21[-7] = (fVar10 - fVar7) * fVar25 + fVar7;
        pfVar21[-6] = (fVar11 - fVar8) * fVar25 + fVar8;
        pfVar21[-5] = (fVar12 - fVar9) * fVar25 + fVar9;
        pfVar1 = (float *)((int)pfVar21 + iVar22 + (-0x10 - param_2));
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = (float *)(iVar5 + iVar23);
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar21[-4] = (*pfVar1 - fVar13) * fVar25 + fVar13;
        pfVar21[-3] = (fVar7 - fVar14) * fVar25 + fVar14;
        pfVar21[-2] = (fVar8 - fVar15) * fVar25 + fVar15;
        pfVar21[-1] = (fVar9 - fVar16) * fVar25 + fVar16;
        pfVar1 = (float *)(iVar22 + iVar23);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        iVar23 = iVar23 + 0x40;
        pfVar2 = (float *)((int)pfVar21 + iVar5 + (0x10 - param_2));
        fVar13 = *pfVar2;
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        *pfVar21 = (*pfVar1 - fVar10) * fVar25 + fVar10;
        pfVar21[1] = (fVar7 - fVar11) * fVar25 + fVar11;
        pfVar21[2] = (fVar8 - fVar12) * fVar25 + fVar12;
        pfVar21[3] = (fVar9 - fVar17) * fVar25 + fVar17;
        pfVar1 = (float *)((int)pfVar21 + iVar22 + (0x10 - param_2));
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar21[4] = (*pfVar1 - fVar13) * fVar25 + fVar13;
        pfVar21[5] = (fVar7 - fVar14) * fVar25 + fVar14;
        pfVar21[6] = (fVar8 - fVar15) * fVar25 + fVar15;
        pfVar21[7] = (fVar9 - fVar16) * fVar25 + fVar16;
        pfVar21 = pfVar21 + 0x10;
      } while (uVar20 < (uVar4 & 0xfffffff0));
      if (uVar4 <= uVar20) {
        return;
      }
    }
    iVar23 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x34);
    if (3 < uVar4 - uVar20) {
      iVar22 = uVar20 * 4 + 8;
      pfVar21 = (float *)(iVar22 + param_2);
      iVar18 = 4 - param_2;
      iVar6 = -param_2;
      iVar19 = iVar6 + -8;
      iVar24 = ((uVar4 - uVar20) - 4 >> 2) + 1;
      uVar20 = uVar20 + iVar24 * 4;
      do {
        pfVar21[-2] = (*(float *)((int)pfVar21 + iVar5 + iVar19) -
                      *(float *)((int)pfVar21 + iVar23 + iVar19)) * fVar25 +
                      *(float *)((int)pfVar21 + iVar23 + iVar19);
        pfVar21[-1] = (*(float *)((int)pfVar21 + iVar5 + iVar6 + -4) -
                      *(float *)((int)pfVar21 + iVar23 + iVar6 + -4)) * fVar25 +
                      *(float *)((int)pfVar21 + iVar23 + iVar6 + -4);
        pfVar1 = (float *)(iVar22 + iVar5);
        pfVar2 = (float *)(iVar22 + iVar23);
        pfVar3 = (float *)(iVar22 + iVar23);
        iVar22 = iVar22 + 0x10;
        *pfVar21 = (*pfVar1 - *pfVar2) * fVar25 + *pfVar3;
        pfVar21[1] = (*(float *)((int)pfVar21 + iVar5 + iVar18) -
                     *(float *)((int)pfVar21 + iVar23 + iVar18)) * fVar25 +
                     *(float *)((int)pfVar21 + iVar23 + iVar18);
        pfVar21 = pfVar21 + 4;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      if (uVar4 <= uVar20) {
        return;
      }
    }
    do {
      *(float *)(param_2 + uVar20 * 4) =
           (*(float *)(iVar5 + uVar20 * 4) - *(float *)(iVar23 + uVar20 * 4)) * fVar25 +
           *(float *)(iVar23 + uVar20 * 4);
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar4);
  }
  return;
}


