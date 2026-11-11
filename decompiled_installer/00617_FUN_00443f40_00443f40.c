// Function: FUN_00443f40
// Entry: 00443f40
// Size: 1064 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00443f40(int param_1,int param_2,uint *param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  uint local_68;
  uint local_60;
  uint local_5c;
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
               0xc8a3);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc8a4);
  }
  if (param_5 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFrameCountOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc8a5);
  }
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  local_28 = 0;
  uVar14 = local_28;
  uStack_24 = 0;
  uVar18 = uStack_24;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  if ((uVar3 == 0) && (uVar2 == 0)) {
    local_68 = 0;
  }
  else {
    local_60 = 0;
    local_5c = 0;
    local_48 = 0;
    local_68 = 0;
    uVar18 = uStack_24;
    uVar14 = local_28;
    uVar11 = param_4;
    do {
      iVar6 = *(int *)(param_1 + 0x28);
      while (iVar6 != 0) {
        uStack_2c = local_60;
        if ((uVar5 < uVar18) || ((uVar5 <= uVar18 && (uVar4 <= uVar14)))) goto LAB_00444347;
        uVar14 = 0;
        if (param_2 == 0) {
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined2 *)(*(int *)(param_1 + 0x30) + uVar14 * 2) =
                   *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar14 * 2);
              *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar14 * 2) = 0;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar11 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined2 *)(*(int *)(param_1 + 0x30) + uVar14 * 2) =
                   *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar14 * 2);
              *(undefined2 *)(*(int *)(param_1 + 0x34) + uVar14 * 2) =
                   *(undefined2 *)(param_2 + uVar14 * 2);
              uVar14 = uVar14 + 1;
              uVar11 = *(uint *)(param_1 + 4);
            } while (uVar14 < uVar11);
          }
          param_2 = param_2 + uVar11 * 2;
        }
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          puVar7 = *(uint **)(param_1 + 0x34);
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
          FUN_0044c490(puVar7,puVar7,local_18[*(int *)(param_1 + 0x38)] * *(int *)(param_1 + 0x3c));
          local_50 = 0;
          if (*(int *)(param_1 + 0x44) != 0) {
            local_4c = 0;
            do {
              iVar19 = *(int *)(param_1 + 0x4c) + local_4c;
              iVar6 = *(int *)(iVar19 + 8);
              uVar18 = *(uint *)(iVar19 + 4);
              uVar14 = 0;
              if (uVar18 != 0) {
                do {
                  iVar15 = (int)*(short *)((int)puVar7 + uVar14 * 2) * (0x4000 - iVar6) +
                           *(int *)(*(int *)(iVar19 + 0xc) + uVar14 * 4) * iVar6 >> 0xe;
                  *(short *)((int)puVar7 + uVar14 * 2) = (short)iVar15;
                  *(int *)(*(int *)(iVar19 + 0xc) + uVar14 * 4) = iVar15;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar18);
              }
              local_50 = local_50 + 1;
              local_4c = local_4c + 0x18;
              uVar18 = local_5c;
            } while (local_50 < *(uint *)(param_1 + 0x44));
          }
          local_4c = 0;
          if (*(int *)(param_1 + 0x48) != 0) {
            local_50 = 0;
            do {
              iVar17 = *(int *)(param_1 + 0x50) + local_50;
              iVar6 = *(int *)(iVar17 + 8);
              uVar18 = *(uint *)(iVar17 + 4);
              iVar19 = *(int *)(iVar17 + 0xc);
              iVar15 = *(int *)(iVar17 + 0x10);
              iVar8 = *(int *)(iVar17 + 0x14);
              iVar9 = *(int *)(iVar17 + 0x18);
              if (uVar18 != 0) {
                uVar14 = 0;
                do {
                  iVar20 = (int)*(short *)((int)puVar7 + uVar14 * 2);
                  iVar16 = *(int *)(*(int *)(iVar17 + 0x1c) + uVar14 * 4) + iVar20 * iVar6 >> 0xe;
                  iVar10 = *(int *)(*(int *)(iVar17 + 0x20) + uVar14 * 4);
                  iVar12 = 0x7fff;
                  if (iVar16 < 0x7fff) {
                    iVar12 = iVar16;
                  }
                  if (iVar12 < -0x8000) {
                    iVar12 = -0x8000;
                  }
                  *(short *)((int)puVar7 + uVar14 * 2) = (short)iVar12;
                  *(int *)(*(int *)(iVar17 + 0x1c) + uVar14 * 4) =
                       (iVar10 - iVar16 * iVar8) + iVar20 * iVar19;
                  *(int *)(*(int *)(iVar17 + 0x20) + uVar14 * 4) = iVar20 * iVar15 - iVar16 * iVar9;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar18);
              }
              local_4c = local_4c + 1;
              local_50 = local_50 + 0x2c;
              uVar18 = local_5c;
            } while (local_4c < *(uint *)(param_1 + 0x48));
          }
        }
        uVar14 = local_48 + 1;
        uVar18 = uVar18 + (0xfffffffe < local_48);
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        uVar11 = param_4;
        local_5c = uVar18;
        local_48 = uVar14;
        iVar6 = *piVar1;
      }
      if (uVar11 != 0) {
        FUN_00443bf0(param_1,uVar11);
        uVar11 = uVar11 + *(int *)(param_1 + 4) * 2;
        param_4 = uVar11;
      }
      bVar21 = 0xfffffffe < local_68;
      local_68 = local_68 + 1;
      uStack_2c = local_60 + bVar21;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      uVar13 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x2c) = uVar13;
      if (*(uint *)(param_1 + 0xc) <= uVar13) {
        *(uint *)(param_1 + 0x2c) = uVar13 - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_60 = uStack_2c;
    } while ((uStack_2c < uVar3) || ((uStack_2c == uVar3 && (local_68 < uVar2))));
  }
LAB_00444347:
  *param_3 = uVar14;
  param_3[1] = uVar18;
  *param_5 = local_68;
  param_5[1] = uStack_2c;
  return 0;
}


