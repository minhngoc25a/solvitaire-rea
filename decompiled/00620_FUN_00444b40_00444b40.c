// Function: FUN_00444b40
// Entry: 00444b40
// Size: 929 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00444b40(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_24;
  int local_18 [6];
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pResampler != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc993);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc994);
  }
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc995);
  }
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar9 = param_5[1];
  uVar10 = *param_5;
  uStack_24 = 0;
  uVar17 = uStack_24;
  uStack_38 = 0;
  uStack_24 = 0;
  if ((uVar9 == 0) && (uVar10 == 0)) {
    local_44 = 0;
    local_3c = 0;
  }
  else {
    local_3c = 0;
    local_34 = 0;
    local_44 = 0;
    local_40 = 0;
    puVar16 = param_4;
    uVar17 = uStack_24;
    do {
      iVar12 = *(int *)(param_1 + 0x28);
      iVar15 = param_2;
      while (iVar12 != 0) {
        uStack_38 = local_40;
        if ((uVar8 < uVar17) || ((uVar8 <= uVar17 && (uVar7 <= local_44)))) goto LAB_00444ec1;
        uVar13 = 0;
        if (iVar15 == 0) {
          iVar15 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar13 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar13 * 4);
              *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar13 * 4) = 0;
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar11 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar13 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar13 * 4);
              *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar13 * 4) =
                   *(undefined4 *)(iVar15 + uVar13 * 4);
              uVar13 = uVar13 + 1;
              uVar11 = *(uint *)(param_1 + 4);
            } while (uVar13 < uVar11);
          }
          iVar15 = iVar15 + uVar11 * 4;
          param_2 = iVar15;
        }
        bVar18 = 0xfffffffe < local_44;
        local_44 = local_44 + 1;
        uVar17 = uVar17 + bVar18;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        local_34 = uVar17;
        iVar12 = *piVar1;
      }
      if (puVar16 != (uint *)0x0) {
        FUN_00443ce0(param_1,(int)puVar16);
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          if (*(int *)(param_1 + 0x38) != 5) {
            FID_conflict___assert
                      (L"pLPF->format == ma_format_f32",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0xb4c1);
          }
          local_18[0] = 0;
          local_18[1] = 1;
          local_18[2] = 2;
          local_18[3] = 3;
          local_18[4] = 4;
          local_18[5] = 4;
          FUN_0044c490(puVar16,puVar16,local_18[*(int *)(param_1 + 0x38)] * *(int *)(param_1 + 0x3c)
                      );
          uVar17 = 0;
          if (*(int *)(param_1 + 0x44) != 0) {
            param_4 = (uint *)0x0;
            do {
              iVar15 = *(int *)(param_1 + 0x4c);
              uVar11 = 0;
              uVar13 = *(uint *)((int)param_4 + iVar15 + 4);
              fVar2 = *(float *)((int)param_4 + iVar15 + 8);
              fVar20 = DAT_0050c314 - fVar2;
              if (uVar13 != 0) {
                do {
                  fVar19 = (float)puVar16[uVar11] * fVar20 +
                           *(float *)(*(int *)((int)param_4 + iVar15 + 0xc) + uVar11 * 4) * fVar2;
                  puVar16[uVar11] = (uint)fVar19;
                  *(float *)(*(int *)((int)param_4 + iVar15 + 0xc) + uVar11 * 4) = fVar19;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar13);
              }
              uVar17 = uVar17 + 1;
              param_4 = param_4 + 6;
            } while (uVar17 < *(uint *)(param_1 + 0x44));
          }
          uVar13 = 0;
          uVar17 = local_34;
          if (*(int *)(param_1 + 0x48) != 0) {
            iVar15 = 0;
            do {
              uVar14 = 0;
              iVar12 = *(int *)(param_1 + 0x50) + iVar15;
              uVar11 = *(uint *)(iVar12 + 4);
              fVar2 = *(float *)(iVar12 + 0x18);
              fVar20 = *(float *)(iVar12 + 8);
              fVar19 = *(float *)(iVar12 + 0xc);
              fVar3 = *(float *)(iVar12 + 0x10);
              fVar4 = *(float *)(iVar12 + 0x14);
              if (uVar11 != 0) {
                do {
                  fVar5 = (float)puVar16[uVar14];
                  fVar21 = fVar5 * fVar20 + *(float *)(*(int *)(iVar12 + 0x1c) + uVar14 * 4);
                  fVar6 = *(float *)(*(int *)(iVar12 + 0x20) + uVar14 * 4);
                  puVar16[uVar14] = (uint)fVar21;
                  *(float *)(*(int *)(iVar12 + 0x1c) + uVar14 * 4) =
                       (fVar5 * fVar19 - fVar21 * fVar4) + fVar6;
                  *(float *)(*(int *)(iVar12 + 0x20) + uVar14 * 4) = fVar5 * fVar3 - fVar21 * fVar2;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar11);
              }
              uVar13 = uVar13 + 1;
              iVar15 = iVar15 + 0x2c;
            } while (uVar13 < *(uint *)(param_1 + 0x48));
          }
        }
        puVar16 = puVar16 + *(int *)(param_1 + 4);
      }
      bVar18 = 0xfffffffe < local_3c;
      local_3c = local_3c + 1;
      uStack_38 = local_40 + bVar18;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      uVar13 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x2c) = uVar13;
      if (*(uint *)(param_1 + 0xc) <= uVar13) {
        *(uint *)(param_1 + 0x2c) = uVar13 - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_40 = uStack_38;
    } while ((uStack_38 < uVar9) || ((uStack_38 <= uVar9 && (local_3c < uVar10))));
  }
LAB_00444ec1:
  *param_3 = local_44;
  param_3[1] = uVar17;
  param_5[1] = uStack_38;
  *param_5 = local_3c;
  return 0;
}


