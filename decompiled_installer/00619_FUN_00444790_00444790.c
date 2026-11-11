// Function: FUN_00444790
// Entry: 00444790
// Size: 932 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00444790(int param_1,int param_2,uint *param_3,int param_4,uint *param_5)

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
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  int local_18 [6];
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pResampler != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc947);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc948);
  }
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc949);
  }
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar9 = param_5[1];
  uVar10 = *param_5;
  local_28 = 0;
  uStack_24 = 0;
  uVar15 = uStack_24;
  uStack_24 = 0;
  local_34 = 0;
  uStack_30 = 0;
  if ((uVar9 != 0) || (uVar10 != 0)) {
    local_48 = 0;
    local_2c = 0;
    local_44 = 0;
    local_40 = 0;
    iVar16 = param_4;
    do {
      iVar14 = *(int *)(param_1 + 0x28);
      local_28 = local_44;
      while (uVar15 = uStack_24, iVar14 != 0) {
        local_34 = local_48;
        uStack_30 = local_40;
        if ((uVar8 < uStack_24) || ((uVar8 <= uStack_24 && (uVar7 <= local_28)))) goto LAB_00444b19;
        uVar15 = 0;
        if (param_2 == 0) {
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar15 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar15 * 4);
              *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar15 * 4) = 0;
              uVar15 = uVar15 + 1;
            } while (uVar15 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar12 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar15 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar15 * 4);
              *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar15 * 4) =
                   *(undefined4 *)(param_2 + uVar15 * 4);
              uVar15 = uVar15 + 1;
              uVar12 = *(uint *)(param_1 + 4);
            } while (uVar15 < uVar12);
          }
          param_2 = param_2 + uVar12 * 4;
        }
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          puVar11 = *(uint **)(param_1 + 0x34);
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
          FUN_0044c490(puVar11,puVar11,local_18[*(int *)(param_1 + 0x38)] * *(int *)(param_1 + 0x3c)
                      );
          uVar15 = 0;
          if (*(int *)(param_1 + 0x44) != 0) {
            local_34 = 0;
            do {
              uVar13 = 0;
              iVar16 = *(int *)(param_1 + 0x4c) + local_34;
              uVar12 = *(uint *)(iVar16 + 4);
              fVar2 = *(float *)(iVar16 + 8);
              fVar19 = DAT_0050c314 - fVar2;
              if (uVar12 != 0) {
                do {
                  fVar18 = (float)puVar11[uVar13] * fVar19 +
                           *(float *)(*(int *)(iVar16 + 0xc) + uVar13 * 4) * fVar2;
                  puVar11[uVar13] = (uint)fVar18;
                  *(float *)(*(int *)(iVar16 + 0xc) + uVar13 * 4) = fVar18;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar12);
              }
              uVar15 = uVar15 + 1;
              local_34 = local_34 + 0x18;
            } while (uVar15 < *(uint *)(param_1 + 0x44));
          }
          uVar15 = 0;
          if (*(int *)(param_1 + 0x48) != 0) {
            iVar16 = 0;
            do {
              uVar13 = 0;
              iVar14 = *(int *)(param_1 + 0x50) + iVar16;
              uVar12 = *(uint *)(iVar14 + 4);
              fVar2 = *(float *)(iVar14 + 0x18);
              fVar19 = *(float *)(iVar14 + 8);
              fVar18 = *(float *)(iVar14 + 0xc);
              fVar3 = *(float *)(iVar14 + 0x10);
              fVar4 = *(float *)(iVar14 + 0x14);
              if (uVar12 != 0) {
                do {
                  fVar5 = (float)puVar11[uVar13];
                  fVar20 = fVar5 * fVar19 + *(float *)(*(int *)(iVar14 + 0x1c) + uVar13 * 4);
                  fVar6 = *(float *)(*(int *)(iVar14 + 0x20) + uVar13 * 4);
                  puVar11[uVar13] = (uint)fVar20;
                  *(float *)(*(int *)(iVar14 + 0x1c) + uVar13 * 4) =
                       (fVar5 * fVar18 - fVar20 * fVar4) + fVar6;
                  *(float *)(*(int *)(iVar14 + 0x20) + uVar13 * 4) = fVar5 * fVar3 - fVar20 * fVar2;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar12);
              }
              uVar15 = uVar15 + 1;
              iVar16 = iVar16 + 0x2c;
            } while (uVar15 < *(uint *)(param_1 + 0x48));
          }
        }
        bVar17 = 0xfffffffe < local_28;
        local_28 = local_28 + 1;
        uStack_24 = local_2c + bVar17;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        iVar16 = param_4;
        local_2c = uStack_24;
        iVar14 = *piVar1;
      }
      if (iVar16 != 0) {
        FUN_00443ce0(param_1,iVar16);
        iVar16 = iVar16 + *(int *)(param_1 + 4) * 4;
        param_4 = iVar16;
      }
      local_34 = local_48 + 1;
      uStack_30 = local_40 + (0xfffffffe < local_48);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      uVar12 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x2c) = uVar12;
      if (*(uint *)(param_1 + 0xc) <= uVar12) {
        *(uint *)(param_1 + 0x2c) = uVar12 - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_48 = local_34;
      local_44 = local_28;
      local_40 = uStack_30;
    } while ((uStack_30 < uVar9) || ((uStack_30 <= uVar9 && (local_34 < uVar10))));
  }
LAB_00444b19:
  *param_3 = local_28;
  param_3[1] = uVar15;
  param_5[1] = uStack_30;
  *param_5 = local_34;
  return 0;
}


