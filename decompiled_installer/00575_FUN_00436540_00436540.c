// Function: FUN_00436540
// Entry: 00436540
// Size: 1189 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00436540(uint param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_1040;
  uint uStack_103c;
  uint local_1038;
  uint *local_1034;
  uint local_1030;
  uint local_102c;
  int local_1028;
  int local_1024 [7];
  undefined8 local_1008;
  uint local_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x43654a;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x49a0);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"frameCount > 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x49a1);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFramesOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x49a2);
  }
  if (*(char *)(param_1 + 0x5dc) != '\0') {
    FUN_00436270(param_1,param_3,0,param_2);
    return;
  }
  local_1040 = 0;
  uStack_103c = 0;
  if (*(int *)(param_1 + 0x5f4) == 0) {
    local_1034 = (uint *)local_1040;
    if (param_2 != 0) {
      do {
        local_1038 = 0;
        local_1024[0] = 0;
        local_1024[1] = 1;
        local_1024[2] = 2;
        local_1024[3] = 3;
        local_1024[4] = 4;
        local_1024[5] = 4;
        uVar6 = (uint)(0x1000 / (ulonglong)
                                (uint)(local_1024[*(int *)(param_1 + 0x2d0)] *
                                      *(int *)(param_1 + 0x2d4)));
        uVar8 = param_2 - (int)local_1034;
        uVar12 = -(uint)(param_2 < local_1034);
        if ((uVar12 != 0) || (uVar9 = uVar12, uVar11 = uVar8, uVar6 < uVar8)) {
          uVar9 = 0;
          uVar11 = uVar6;
        }
        local_1008 = 0;
        local_1024[6] = uVar12;
        if (param_1 == 0xfffffb08) {
LAB_004368c4:
          uVar12 = local_1008._4_4_;
          uVar6 = (uint)local_1008;
        }
        else {
          if (*(char *)(param_1 + 0x5db) != '\0') {
            if ((((undefined4 *)(param_1 + 0x548) != (undefined4 *)0x0) &&
                (*(int *)(param_1 + 0x54c) != 0)) &&
               (pcVar4 = *(code **)(*(int *)(param_1 + 0x54c) + 0x1c), pcVar4 != (code *)0x0)) {
              (*pcVar4)(*(undefined4 *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x548),uVar8,
                        uVar12,&local_1008);
            }
            goto LAB_004368c4;
          }
          local_1008 = CONCAT44(uVar12,uVar8);
          uVar6 = uVar8;
        }
        if ((uVar12 <= uVar9) && ((uVar12 < uVar9 || (uVar6 < uVar11)))) {
          uVar9 = uVar12;
          uVar11 = uVar6;
        }
        if ((uVar9 != 0) || (uVar11 != 0)) {
          FUN_00436270(param_1,local_1000,0,uVar11);
        }
        uStack_103c = local_1024[6];
        local_1030 = uVar11;
        local_102c = uVar9;
        local_1040 = uVar8;
        local_1024[0] =
             FUN_0042c1d0((uint *)(param_1 + 0x4f8),local_1000,&local_1030,param_3,&local_1040);
        if (local_1024[0] != 0) {
          return;
        }
        uVar12 = (int)local_1034 + local_1040;
        local_1024[1] = 1;
        local_1024[2] = 2;
        local_1024[3] = 3;
        local_1024[4] = 4;
        local_1024[5] = 4;
        param_3 = (uint *)((int)param_3 +
                          local_1024[*(int *)(param_1 + 0x3d8)] * *(int *)(param_1 + 0x3dc) *
                          local_1040);
        if ((local_1030 == 0 && local_102c == 0) && (local_1040 == 0 && uStack_103c == 0)) {
          return;
        }
        if (local_1038 + uStack_103c + (uint)CARRY4((uint)local_1034,local_1040) != 0) {
          return;
        }
        local_1034 = (uint *)uVar12;
        if (param_2 <= uVar12) {
          return;
        }
      } while( true );
    }
  }
  else if (param_2 != 0) {
    puVar7 = (uint *)(param_1 + 0x600);
    local_1028 = 0;
    local_1038 = 0;
    do {
      uVar12 = *(uint *)(param_1 + 0x60c);
      uVar6 = *(uint *)(param_1 + 0x608);
      if (uVar12 == 0) {
        iVar5 = 0;
        iVar10 = 0;
        if (uVar6 != 0) goto LAB_00436638;
      }
      else {
LAB_00436638:
        local_1040 = param_2 - local_1038;
        uStack_103c = -(uint)(param_2 < local_1038) - local_1028;
        local_1034 = puVar7;
        local_1030 = local_1040;
        local_102c = uStack_103c;
        if ((uVar12 <= uStack_103c) && ((uVar12 < uStack_103c || (uVar6 < local_1040)))) {
          local_1034 = (uint *)(param_1 + 0x600);
          local_1030 = uVar6;
          local_102c = uVar12;
        }
        local_1024[0] = 0;
        local_1024[1] = 1;
        local_1024[2] = 2;
        local_1024[3] = 3;
        local_1024[4] = 4;
        local_1024[5] = 4;
        iVar5 = FUN_0042c1d0((uint *)(param_1 + 0x4f8),
                             (uint *)(local_1024[*(int *)(param_1 + 0x2d0)] *
                                      *(int *)(param_1 + 0x2d4) * *puVar7 +
                                     *(int *)(param_1 + 0x5f4)),&local_1030,param_3,&local_1040);
        if (iVar5 != 0) {
          return;
        }
        uVar12 = *puVar7;
        *puVar7 = *puVar7 + local_1030;
        puVar7[1] = puVar7[1] + local_102c + (uint)CARRY4(uVar12,local_1030);
        iVar10 = *(uint *)(param_1 + 0x608) - local_1030;
        iVar5 = (*(int *)(param_1 + 0x60c) - local_102c) -
                (uint)(*(uint *)(param_1 + 0x608) < local_1030);
        local_1024[6] = local_1040;
        bVar13 = CARRY4(local_1038,local_1040);
        local_1038 = local_1038 + local_1040;
        local_1028 = local_1028 + uStack_103c + (uint)bVar13;
        local_1024[0] = 0;
        local_1024[1] = 1;
        local_1024[2] = 2;
        local_1024[3] = 3;
        local_1024[4] = 4;
        local_1024[5] = 4;
        iVar1 = local_1024[*(int *)(param_1 + 0x3d8)];
        *(int *)(param_1 + 0x608) = iVar10;
        *(int *)(param_1 + 0x60c) = iVar5;
        param_3 = (uint *)((int)param_3 + iVar1 * *(int *)(param_1 + 0x3dc) * local_1040);
        if ((local_1030 == 0 && local_102c == 0) &&
           (puVar7 = local_1034, local_1040 == 0 && uStack_103c == 0)) {
          return;
        }
      }
      if (iVar10 == 0 && iVar5 == 0) {
        FUN_00436270(param_1,*(void **)(param_1 + 0x5f4),0,*(uint *)(param_1 + 0x5f8));
        uVar2 = *(undefined4 *)(param_1 + 0x5f8);
        uVar3 = *(undefined4 *)(param_1 + 0x5fc);
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(param_1 + 0x608) = uVar2;
        *(undefined4 *)(param_1 + 0x60c) = uVar3;
      }
      else {
        puVar7 = (uint *)(param_1 + 0x600);
      }
      if (local_1028 != 0) {
        return;
      }
      if (param_2 <= local_1038) {
        return;
      }
    } while( true );
  }
  return;
}


