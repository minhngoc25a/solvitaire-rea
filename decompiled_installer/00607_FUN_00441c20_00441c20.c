// Function: FUN_00441c20
// Entry: 00441c20
// Size: 1478 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00441c20(int *param_1,void *param_2,int *param_3,int param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *extraout_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_124;
  int local_110;
  size_t local_104 [3];
  int local_f8;
  void *pvStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  double dStack_98;
  int local_90;
  void *pvStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  double local_40;
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  
  if (((param_3 != (int *)0x0) && (param_1 != (int *)0x0)) &&
     ((iVar3 = *param_1, iVar3 == 5 || (iVar3 == 2)))) {
    if (((*param_3 != 0) && (*param_3 != iVar3)) ||
       ((param_3[1] != 0 && (param_3[1] != param_1[1])))) {
      return -3;
    }
    uVar7 = param_1[6];
    if (uVar7 < 9) {
      pvVar2 = (void *)(uVar7 >> 1);
      uVar7 = uVar7 & 1;
      if (param_4 == 0) {
        if (param_3[3] != uVar7) {
          return -3;
        }
        if ((void *)param_3[4] != pvVar2) {
          return -3;
        }
        local_110 = 0;
        local_104[0] = 0;
        local_104[1] = 0;
      }
      else {
        iVar3 = FUN_00441b30((int)param_1,local_104);
        if (iVar3 != 0) {
          return iVar3;
        }
        param_3[7] = (int)param_2;
        if (param_2 == (void *)0x0) {
          if (local_104[0] != 0) {
            FID_conflict___assert
                      (L"sz == 0",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x2fbb);
          }
        }
        else if (local_104[0] != 0) {
          _memset(param_2,0,local_104[0]);
        }
        local_110 = local_104[2];
        param_3[5] = local_104[1] + (int)param_2;
        param_3[6] = local_104[2] + (int)param_2;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        local_124 = 0;
        do {
          iStack_c8 = param_1[2];
          iVar3 = *param_1;
          iStack_cc = param_1[1];
          local_a0 = *(double *)(param_1 + 4);
          uStack_c4 = 0;
          uStack_a4 = 0;
          dStack_98 = DAT_0050c088;
          local_d0 = iVar3;
          local_b0 = iVar3;
          iStack_ac = iStack_cc;
          iStack_a8 = iStack_c8;
          if (param_4 == 0) {
            piVar8 = (int *)(param_3[5] + local_124);
            if ((piVar8 == (int *)0x0) || ((iVar3 != 5 && (iVar3 != 2)))) {
              iVar3 = -2;
            }
            else if ((*piVar8 == 0) || (*piVar8 == iVar3)) {
              if ((piVar8[1] == 0) || (piVar8[1] == iStack_cc)) {
                dVar10 = local_a0 * _DAT_0050c398;
                *piVar8 = iVar3;
                piVar8[1] = iStack_cc;
                dVar10 = dVar10 / ((double)iStack_c8 + (double)(&DAT_0050c3d0)[-(iStack_c8 >> 0x1f)]
                                  );
                FUN_00482e00();
                if (iVar3 == 5) {
                  piVar8[2] = (int)(float)dVar10;
                  iVar3 = 0;
                }
                else {
                  piVar8[2] = (int)(dVar10 * DAT_0050c350);
                  iVar3 = 0;
                }
              }
              else {
                iVar3 = -3;
              }
            }
            else {
              iVar3 = -3;
            }
          }
          else {
            if (iStack_cc == 0) {
              iVar3 = -2;
              goto LAB_00441ed3;
            }
            iVar3 = FUN_00427cf0(&local_b0,
                                 (void *)((iStack_cc * 4 + 7U & 0xfffffff8) * uVar5 + local_104[1] +
                                          uVar7 * 0x18 + (int)param_2),
                                 (int *)(param_3[5] + local_124));
          }
          if (iVar3 != 0) {
LAB_00441ed3:
            if (uVar5 != 0) {
              iVar6 = 0;
              do {
                iVar4 = param_3[5] + iVar6;
                if (((iVar4 != 0) && (*(int *)(iVar4 + 0x14) != 0)) &&
                   (*(LPVOID *)(iVar4 + 0x10) != (LPVOID)0x0)) {
                  FUN_0047d191(*(LPVOID *)(iVar4 + 0x10));
                }
                iVar6 = iVar6 + 0x18;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            return iVar3;
          }
          local_124 = local_124 + 0x18;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      pvVar9 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        local_124 = 0;
        do {
          iVar3 = param_1[6];
          if (uVar7 == 0) {
            dVar10 = (double)(iVar3 * 2) + (double)(&DAT_0050c3d0)[-(iVar3 * 2 >> 0x1f)];
            pvVar1 = (void *)((int)pvVar9 * 2);
          }
          else {
            dVar10 = (double)iVar3 + (double)(&DAT_0050c3d0)[-(iVar3 >> 0x1f)];
            pvVar1 = pvVar9;
          }
          dVar11 = DAT_0050c320 -
                   (DAT_0050c330 / dVar10) *
                   ((double)((int)pvVar1 + 1) + (double)(&DAT_0050c3d0)[-((int)pvVar1 + 1 >> 0x1f)])
          ;
          FUN_00483ec0(pvVar2);
          local_f8 = *param_1;
          dVar10 = *(double *)(param_1 + 4);
          pvStack_f4 = (void *)param_1[1];
          iStack_f0 = param_1[2];
          uStack_e0 = DAT_0050c098 / (dVar11 + dVar11);
          uStack_ec = 0;
          if (uStack_e0 == 0.0) {
            uStack_e0 = DAT_0050c318;
          }
          dVar11 = uStack_e0;
          uStack_84 = 0;
          local_e8._0_4_ = SUB84(dVar10,0);
          local_e8._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
          local_80 = (undefined4)local_e8;
          uStack_7c = local_e8._4_4_;
          uStack_78 = (undefined4)uStack_e0;
          uStack_74 = uStack_e0._4_4_;
          local_e8 = dVar10;
          local_90 = local_f8;
          pvStack_8c = pvStack_f4;
          iStack_88 = iStack_f0;
          if (param_4 == 0) {
            iVar3 = param_3[6];
            if ((int *)(iVar3 + local_124) == (int *)0x0) {
              iVar3 = -2;
            }
            else {
              dVar10 = (dVar10 * _DAT_0050c338) /
                       ((double)iStack_f0 + (double)(&DAT_0050c3d0)[-(iStack_f0 >> 0x1f)]);
              dVar12 = DAT_0050c320 - dVar10;
              FUN_00483ec0(pvStack_f4);
              local_d8 = dVar12;
              FUN_00483ec0(extraout_ECX);
              local_70 = *param_1;
              iStack_6c = param_1[1];
              dVar10 = dVar10 / (dVar11 + dVar11);
              local_40 = DAT_0050c098 - dVar10;
              dVar11 = (DAT_0050c098 - local_d8) * DAT_0050c088;
              local_50._8_4_ = SUB84(local_d8 * _DAT_0050c390,0);
              local_50._0_8_ = dVar10 + DAT_0050c098;
              local_50._12_4_ = (int)((ulonglong)(local_d8 * _DAT_0050c390) >> 0x20);
              uStack_30._0_4_ = SUB84(dVar11,0);
              uStack_30._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
              uStack_68 = (undefined4)uStack_30;
              uStack_64 = uStack_30._4_4_;
              local_60._8_4_ = (undefined4)uStack_30;
              local_60._0_8_ = DAT_0050c098 - local_d8;
              local_60._12_4_ = uStack_30._4_4_;
              local_38 = local_70;
              iStack_34 = iStack_6c;
              uStack_30 = dVar11;
              iVar3 = FUN_00427930(&local_70,(int *)(iVar3 + local_124));
            }
          }
          else {
            if (pvStack_f4 == (void *)0x0) {
              iVar3 = -2;
              goto LAB_00442171;
            }
            iVar3 = FUN_00427fe0(&local_90,
                                 (void *)((int)pvVar2 * 0x2c +
                                          (int)pvStack_f4 * 8 * (int)pvVar9 + local_110 +
                                         (int)param_2),(int *)(param_3[6] + local_124));
          }
          if (iVar3 != 0) {
LAB_00442171:
            if (uVar7 != 0) {
              iVar6 = 0;
              do {
                iVar4 = param_3[5] + iVar6;
                if (((iVar4 != 0) && (*(int *)(iVar4 + 0x14) != 0)) &&
                   (*(LPVOID *)(iVar4 + 0x10) != (LPVOID)0x0)) {
                  FUN_0047d191(*(LPVOID *)(iVar4 + 0x10));
                }
                iVar6 = iVar6 + 0x18;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (pvVar9 != (void *)0x0) {
              iVar6 = 0;
              do {
                iVar4 = param_3[6] + iVar6;
                if (((iVar4 != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
                   (*(LPVOID *)(iVar4 + 0x24) != (LPVOID)0x0)) {
                  FUN_0047d191(*(LPVOID *)(iVar4 + 0x24));
                }
                iVar6 = iVar6 + 0x2c;
                pvVar9 = (void *)((int)pvVar9 + -1);
              } while (pvVar9 != (void *)0x0);
            }
            return iVar3;
          }
          local_124 = local_124 + 0x2c;
          pvVar9 = (void *)((int)pvVar9 + 1);
        } while (pvVar9 < pvVar2);
      }
      param_3[3] = uVar7;
      param_3[4] = (int)pvVar2;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      return 0;
    }
  }
  return -2;
}


