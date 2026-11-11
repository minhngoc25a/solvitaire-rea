// Function: FUN_00444370
// Entry: 00444370
// Size: 1050 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00444370(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  int local_18 [6];
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pResampler != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc8ef);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc8f0);
  }
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc8f1);
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_5[1];
  uVar5 = *param_5;
  local_28 = 0;
  uVar11 = local_28;
  uStack_24 = 0;
  uVar12 = uStack_24;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  if ((uVar4 == 0) && (uVar5 == 0)) {
    local_64 = 0;
    uStack_24 = uVar12;
    local_28 = uVar11;
  }
  else {
    local_4c = 0;
    local_48 = 0;
    local_60 = 0;
    local_64 = 0;
    do {
      iVar17 = *(int *)(param_1 + 0x28);
      iVar14 = param_2;
      while (iVar17 != 0) {
        uStack_2c = local_60;
        if ((uVar3 < uStack_24) || ((uVar3 <= uStack_24 && (uVar2 <= local_28)))) goto LAB_00444768;
        uVar11 = 0;
        if (iVar14 == 0) {
          iVar14 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined2 *)(*(int *)(param_1 + 0x30) + uVar11 * 2) =
                   *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar11 * 2);
              *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar11 * 2) = 0;
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar12 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined2 *)(*(int *)(param_1 + 0x30) + uVar11 * 2) =
                   *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar11 * 2);
              *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar11 * 2) =
                   *(undefined2 *)(iVar14 + uVar11 * 2);
              uVar11 = uVar11 + 1;
              uVar12 = *(uint *)(param_1 + 4);
            } while (uVar11 < uVar12);
          }
          iVar14 = iVar14 + uVar12 * 2;
          param_2 = iVar14;
        }
        bVar18 = 0xfffffffe < local_28;
        local_28 = local_28 + 1;
        uStack_24 = uStack_24 + bVar18;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        local_4c = uStack_24;
        local_48 = local_28;
        iVar17 = *piVar1;
      }
      if (param_4 != (uint *)0x0) {
        FUN_00443bf0(param_1,(uint)param_4);
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          if (*(int *)(param_1 + 0x38) != 2) {
            FID_conflict___assert
                      (L"pLPF->format == ma_format_s16",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0xb4d3);
          }
          local_18[0] = 0;
          local_18[1] = 1;
          local_18[2] = 2;
          local_18[3] = 3;
          local_18[4] = 4;
          local_18[5] = 4;
          FUN_0044c490(param_4,param_4,local_18[*(int *)(param_1 + 0x38)] * *(int *)(param_1 + 0x3c)
                      );
          local_54 = 0;
          if (*(int *)(param_1 + 0x44) != 0) {
            local_50 = 0;
            do {
              iVar17 = *(int *)(param_1 + 0x4c) + local_50;
              uVar12 = 0;
              iVar14 = *(int *)(iVar17 + 8);
              uVar11 = *(uint *)(iVar17 + 4);
              if (uVar11 != 0) {
                do {
                  iVar10 = (int)*(short *)((int)param_4 + uVar12 * 2) * (0x4000 - iVar14) +
                           *(int *)(*(int *)(iVar17 + 0xc) + uVar12 * 4) * iVar14 >> 0xe;
                  *(short *)((int)param_4 + uVar12 * 2) = (short)iVar10;
                  *(int *)(*(int *)(iVar17 + 0xc) + uVar12 * 4) = iVar10;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar11);
              }
              local_54 = local_54 + 1;
              local_50 = local_50 + 0x18;
            } while (local_54 < *(uint *)(param_1 + 0x44));
          }
          local_50 = 0;
          if (*(int *)(param_1 + 0x48) != 0) {
            local_54 = 0;
            do {
              iVar16 = *(int *)(param_1 + 0x50) + local_54;
              iVar14 = *(int *)(iVar16 + 0xc);
              uVar11 = *(uint *)(iVar16 + 4);
              iVar17 = *(int *)(iVar16 + 8);
              iVar10 = *(int *)(iVar16 + 0x10);
              iVar6 = *(int *)(iVar16 + 0x14);
              iVar7 = *(int *)(iVar16 + 0x18);
              if (uVar11 != 0) {
                uVar12 = 0;
                do {
                  iVar15 = (int)*(short *)((int)param_4 + uVar12 * 2);
                  iVar13 = *(int *)(*(int *)(iVar16 + 0x1c) + uVar12 * 4) + iVar15 * iVar17 >> 0xe;
                  iVar8 = *(int *)(*(int *)(iVar16 + 0x20) + uVar12 * 4);
                  iVar9 = 0x7fff;
                  if (iVar13 < 0x7fff) {
                    iVar9 = iVar13;
                  }
                  if (iVar9 < -0x8000) {
                    iVar9 = -0x8000;
                  }
                  *(short *)((int)param_4 + uVar12 * 2) = (short)iVar9;
                  *(int *)(*(int *)(iVar16 + 0x1c) + uVar12 * 4) =
                       (iVar8 - iVar13 * iVar6) + iVar15 * iVar14;
                  *(int *)(*(int *)(iVar16 + 0x20) + uVar12 * 4) = iVar15 * iVar10 - iVar13 * iVar7;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar11);
              }
              local_50 = local_50 + 1;
              local_54 = local_54 + 0x2c;
            } while (local_50 < *(uint *)(param_1 + 0x48));
          }
        }
        param_4 = (uint *)((int)param_4 + *(int *)(param_1 + 4) * 2);
        uStack_24 = local_4c;
        local_28 = local_48;
      }
      bVar18 = 0xfffffffe < local_64;
      local_64 = local_64 + 1;
      uStack_2c = local_60 + bVar18;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      uVar11 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x2c) = uVar11;
      if (*(uint *)(param_1 + 0xc) <= uVar11) {
        *(uint *)(param_1 + 0x2c) = uVar11 - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_60 = uStack_2c;
    } while ((uStack_2c < uVar4) || ((uStack_2c <= uVar4 && (local_64 < uVar5))));
  }
LAB_00444768:
  *param_3 = local_28;
  param_3[1] = uStack_24;
  *param_5 = local_64;
  param_5[1] = uStack_2c;
  return 0;
}


