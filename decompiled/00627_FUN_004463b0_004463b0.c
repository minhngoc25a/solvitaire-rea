// Function: FUN_004463b0
// Entry: 004463b0
// Size: 1684 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004463b0(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint uStack_14;
  uint local_10;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd19f);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pFramesOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1a0);
  }
  if (param_3 == 0) {
    FID_conflict___assert
              (L"pFramesIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1a1);
  }
  if (param_1[2] != 1) {
    FID_conflict___assert
              (L"pConverter->channelsOut == 1",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1a2);
  }
  switch(*param_1) {
  case 1:
    if ((param_5 != 0) || (param_4 != 0)) {
      local_20 = 0;
      local_30 = 0;
      do {
        iVar9 = 0;
        iVar8 = 0;
        uVar10 = param_1[1];
        if (uVar10 < 2) {
          iVar9 = 0;
          iVar8 = 0;
          if (uVar10 != 0) {
            local_38 = 0;
            goto LAB_004464e7;
          }
        }
        else {
          iVar7 = (uVar10 - 2 >> 1) + 1;
          local_38 = iVar7 * 2;
          pbVar4 = (byte *)(uVar10 * local_20 + param_3);
          do {
            iVar9 = iVar9 + (*pbVar4 - 0x80);
            iVar8 = iVar8 + -0x80 + (uint)pbVar4[1];
            iVar7 = iVar7 + -1;
            pbVar4 = pbVar4 + 2;
          } while (iVar7 != 0);
          if (local_38 < uVar10) {
LAB_004464e7:
            iVar9 = iVar9 + -0x80 + (uint)*(byte *)(local_20 * uVar10 + local_38 + param_3);
          }
        }
        uVar6 = (uint)(iVar9 + iVar8) / (uint)param_1[2];
        uVar10 = 0x7f;
        if ((int)uVar6 < 0x7f) {
          uVar10 = uVar6;
        }
        if ((int)uVar10 < -0x80) {
          uVar10 = 0xffffff80;
        }
        *(char *)(local_20 + param_2) = (char)uVar10 + -0x80;
        bVar11 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        local_30 = local_30 + bVar11;
        if (param_5 <= local_30) {
          if (param_5 < local_30) {
            return 0;
          }
          if (param_4 <= local_20) {
            return 0;
          }
        }
      } while( true );
    }
    break;
  case 2:
    if ((param_5 != 0) || (param_4 != 0)) {
      local_2c = 0;
      local_38 = 0;
      do {
        uVar10 = param_1[1];
        iVar9 = 0;
        iVar8 = 0;
        local_40 = 0;
        if (uVar10 < 2) {
          iVar9 = 0;
          iVar8 = 0;
          local_34 = uVar10;
          if (uVar10 != 0) {
            uVar6 = 0;
            goto LAB_00446640;
          }
        }
        else {
          iVar7 = (uVar10 - 2 >> 1) + 1;
          uVar6 = iVar7 * 2;
          psVar5 = (short *)(param_3 + uVar10 * local_38 * 2);
          do {
            iVar9 = iVar9 + *psVar5;
            iVar8 = iVar8 + psVar5[1];
            iVar7 = iVar7 + -1;
            psVar5 = psVar5 + 2;
          } while (iVar7 != 0);
          local_34 = param_1[1];
          if (uVar6 < local_34) {
LAB_00446640:
            local_40 = (uint)*(short *)(param_3 + (local_38 * uVar10 + uVar6) * 2);
          }
        }
        uVar10 = local_38 + 1;
        *(short *)(param_2 + local_38 * 2) = (short)((iVar8 + iVar9 + local_40) / local_34);
        local_2c = local_2c + (0xfffffffe < local_38);
        local_38 = uVar10;
        if (param_5 <= local_2c) {
          if (param_5 < local_2c) {
            return 0;
          }
          if (param_4 <= uVar10) {
            return 0;
          }
        }
      } while( true );
    }
    break;
  case 3:
    if ((param_5 != 0) || (param_4 != 0)) {
      local_40 = 0;
      local_34 = 0;
      while( true ) {
        do {
          local_38 = 0;
          local_18 = 0;
          uStack_14 = 0;
          if (param_1[1] != 0) {
            local_30 = 0;
            local_2c = 0;
            do {
              iVar9 = (uint)*(uint3 *)(param_3 + (param_1[1] * local_34 + local_38) * 3) << 8;
              uVar10 = iVar9 >> 8;
              local_18 = local_2c + uVar10;
              uStack_14 = local_30 + (iVar9 >> 0x1f) + (uint)CARRY4(local_2c,uVar10);
              local_38 = local_38 + 1;
              local_30 = uStack_14;
              local_2c = local_18;
            } while (local_38 < (uint)param_1[1]);
          }
          puVar1 = (undefined1 *)(param_2 + local_34 * 3);
          uVar13 = __alldiv(local_18,uStack_14,param_1[1],0);
          *puVar1 = (char)uVar13;
          puVar1[1] = (char)((ulonglong)uVar13 >> 8);
          bVar11 = 0xfffffffe < local_34;
          local_34 = local_34 + 1;
          puVar1[2] = (char)((ulonglong)uVar13 >> 0x10);
          local_40 = local_40 + bVar11;
        } while (local_40 < param_5);
        if (param_5 < local_40) break;
        if (param_4 <= local_34) {
          return 0;
        }
      }
    }
    break;
  case 4:
    if ((param_5 != 0) || (param_4 != 0)) {
      local_24 = 0;
      local_34 = 0;
      do {
        uVar10 = param_1[1];
        uVar6 = 0;
        if (uVar10 < 2) {
          local_2c = uVar10;
          if (uVar10 == 0) {
            uStack_14 = 0;
            local_18 = 0;
            local_38 = 0;
            local_40 = 0;
            goto LAB_004468c6;
          }
          uVar6 = 0;
          uStack_14 = 0;
          local_18 = 0;
          local_38 = 0;
          local_40 = 0;
LAB_00446891:
          local_10 = *(uint *)(param_3 + (local_34 * uVar10 + uVar6) * 4);
          local_28 = (int)local_10 >> 0x1f;
        }
        else {
          uStack_14 = 0;
          local_38 = 0;
          local_40 = 0;
          local_2c = 0;
          do {
            iVar9 = uVar10 * local_34 + uVar6;
            uVar2 = *(uint *)(param_3 + iVar9 * 4);
            bVar11 = CARRY4(local_40,uVar2);
            local_40 = local_40 + uVar2;
            uVar3 = *(uint *)(param_3 + 4 + iVar9 * 4);
            local_38 = local_38 + ((int)uVar2 >> 0x1f) + (uint)bVar11;
            local_18 = local_2c + uVar3;
            uStack_14 = uStack_14 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(local_2c,uVar3);
            uVar6 = uVar6 + 2;
            local_2c = local_18;
          } while (uVar6 < uVar10 - 1);
          local_2c = param_1[1];
          if (uVar6 < local_2c) goto LAB_00446891;
LAB_004468c6:
          local_28 = 0;
          local_10 = 0;
        }
        uVar13 = __alldiv(local_18 + local_40 + local_10,
                          uStack_14 + local_38 + (uint)CARRY4(local_18,local_40) + local_28 +
                          (uint)CARRY4(local_18 + local_40,local_10),local_2c,0);
        *(int *)(param_2 + local_34 * 4) = (int)uVar13;
        bVar11 = 0xfffffffe < local_34;
        local_34 = local_34 + 1;
        local_24 = local_24 + bVar11;
        if (param_5 <= local_24) {
          if (param_5 < local_24) {
            return 0;
          }
          if (param_4 <= local_34) {
            return 0;
          }
        }
      } while( true );
    }
    break;
  case 5:
    if ((param_5 != 0) || (param_4 != 0)) {
      local_28 = 0;
      local_24 = 0;
      do {
        uVar10 = param_1[1];
        uVar6 = 0;
        fVar12 = 0.0;
        if (uVar10 < 4) {
          if (uVar10 != 0) {
            uVar6 = 0;
            goto LAB_004469c9;
          }
        }
        else {
          do {
            iVar9 = uVar10 * local_24 + uVar6;
            uVar6 = uVar6 + 4;
            fVar12 = fVar12 + *(float *)(param_3 + iVar9 * 4) + *(float *)(param_3 + 4 + iVar9 * 4)
                     + *(float *)(param_3 + 8 + iVar9 * 4) + *(float *)(param_3 + 0xc + iVar9 * 4);
          } while (uVar6 < uVar10 - 3);
          if (uVar6 < uVar10) {
LAB_004469c9:
            do {
              iVar9 = uVar10 * local_24 + uVar6;
              uVar6 = uVar6 + 1;
              fVar12 = fVar12 + *(float *)(param_3 + iVar9 * 4);
            } while (uVar6 < uVar10);
          }
        }
        uVar10 = local_24 + 1;
        *(float *)(param_2 + local_24 * 4) =
             fVar12 / (float)((double)(int)param_1[1] +
                             (double)(&DAT_0050c3d0)[-((int)param_1[1] >> 0x1f)]);
        local_28 = local_28 + (0xfffffffe < local_24);
        local_24 = uVar10;
      } while ((local_28 < param_5) || ((local_28 <= param_5 && (uVar10 < param_4))));
    }
    break;
  default:
    return 0xfffffffd;
  }
  return 0;
}


