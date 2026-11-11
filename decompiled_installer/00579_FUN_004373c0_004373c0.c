// Function: FUN_004373c0
// Entry: 004373c0
// Size: 2351 bytes
// Thunk: false
// External: false


int __cdecl FUN_004373c0(int *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int local_120;
  int local_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  int iStack_108;
  int *piStack_104;
  int *piStack_100;
  undefined4 local_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  undefined8 uStack_c8;
  uint local_c0 [6];
  undefined1 local_a8 [32];
  undefined4 local_88;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_54 [84];
  
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x9e83);
  }
  if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
    if (param_1[0x206] == 0) {
      param_1[0x206] = param_1[0x248];
    }
    uVar8 = param_1[0x207];
    if (uVar8 == 0) {
      uVar8 = param_1[0x249];
      param_1[0x207] = uVar8;
    }
    if ((char)param_1[0x208] == '\0') {
      if (0xfe < uVar8) {
        FID_conflict___assert
                  (L"pDevice->capture.channels <= 254",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x9e8d);
      }
      puVar9 = (uint *)(param_1 + 0x208);
      uVar8 = param_1[0x207];
      if (param_1[0x249] == uVar8) {
        if (((puVar9 != (uint *)0x0) && ((uint *)(param_1 + 0x24b) != (uint *)0x0)) && (uVar8 != 0))
        {
          FUN_0044c490(puVar9,(uint *)(param_1 + 0x24b),uVar8);
        }
      }
      else if (param_1[0x28d] == 1) {
        if ((puVar9 != (uint *)0x0) && (uVar8 != 0)) {
          _memset(puVar9,0,uVar8);
        }
      }
      else {
        local_120 = 0xfe;
        if (((puVar9 != (uint *)0x0) && (uVar8 != 0)) && (uVar10 = 0, uVar8 != 0)) {
          do {
            if (local_120 == 0) break;
            cVar3 = FUN_00448a20(0,uVar8,uVar10);
            *(char *)(uVar10 + 0x820 + (int)param_1) = cVar3;
            uVar10 = uVar10 + 1;
            local_120 = local_120 + -1;
          } while (uVar10 < uVar8);
        }
      }
    }
  }
  if ((param_2 == 1) || (param_2 == 3)) {
    if (param_1[0xb4] == 0) {
      param_1[0xb4] = param_1[0xf6];
    }
    uVar8 = param_1[0xb5];
    if (uVar8 == 0) {
      uVar8 = param_1[0xf7];
      param_1[0xb5] = uVar8;
    }
    if ((char)param_1[0xb6] == '\0') {
      if (0xfe < uVar8) {
        FID_conflict___assert
                  (L"pDevice->playback.channels <= 254",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x9ea2);
      }
      puVar9 = (uint *)(param_1 + 0xb6);
      uVar8 = param_1[0xb5];
      if (param_1[0xf7] == uVar8) {
        if (((puVar9 != (uint *)0x0) && ((uint *)(param_1 + 0xf9) != (uint *)0x0)) && (uVar8 != 0))
        {
          FUN_0044c490(puVar9,(uint *)(param_1 + 0xf9),uVar8);
        }
      }
      else if (param_1[0x13b] == 1) {
        if ((puVar9 != (uint *)0x0) && (uVar8 != 0)) {
          _memset(puVar9,0,uVar8);
        }
      }
      else {
        local_120 = 0xfe;
        if (((puVar9 != (uint *)0x0) && (uVar8 != 0)) && (uVar10 = 0, uVar8 != 0)) {
          do {
            if (local_120 == 0) break;
            cVar3 = FUN_00448a20(0,uVar8,uVar10);
            *(char *)(uVar10 + 0x2d8 + (int)param_1) = cVar3;
            uVar10 = uVar10 + 1;
            local_120 = local_120 + -1;
          } while (uVar10 < uVar8);
        }
      }
    }
  }
  iVar7 = param_1[2];
  if (iVar7 == 0) {
    if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
      iVar7 = param_1[0x24a];
      param_1[2] = iVar7;
      goto LAB_0043761a;
    }
    param_1[2] = param_1[0xf8];
  }
  else {
LAB_0043761a:
    if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
      _memset(local_a8,0,0x54);
      local_11c = param_1[0x248];
      iStack_114 = param_1[0x249];
      local_10c = param_1[0x24a];
      piStack_104 = param_1 + 0x24b;
      iStack_118 = param_1[0x206];
      iStack_110 = param_1[0x207];
      piStack_100 = param_1 + 0x208;
      local_fc = local_88;
      uStack_f0 = uStack_7c;
      iStack_f8 = param_1[0x28d];
      iStack_f4 = param_1[0x28e];
      uStack_e8 = uStack_74;
      uStack_e4 = uStack_70;
      uStack_e0 = uStack_6c;
      iStack_d8 = param_1[0x2e];
      local_dc = local_68;
      local_cc = param_1[0x31];
      iStack_d4 = param_1[0x2f];
      iStack_d0 = param_1[0x30];
      local_ec = 0;
      LOCK();
      iVar4 = param_1[3];
      if (iVar4 == 0) {
        param_1[3] = 0;
        iVar4 = 0;
      }
      UNLOCK();
      iStack_108 = iVar7;
      if (iVar4 != 0) {
        iVar7 = *param_1;
        puVar11 = (undefined4 *)(iVar7 + 0x80);
        if (param_1 != (int *)0xfffff5c0) {
          if (((((*(char *)((int)param_1 + 0xb23) != '\0') && (param_1 + 0x2a4 != (int *)0x0)) &&
               (param_1[0x2a5] != 0)) &&
              ((pcVar1 = *(code **)(param_1[0x2a5] + 8), pcVar1 != (code *)0x0 &&
               ((*pcVar1)(param_1[0x2a6],param_1[0x2a4],puVar11), param_1[0x2c7] != 0)))) &&
             (pvVar5 = (LPVOID)param_1[0x2c6], pvVar5 != (LPVOID)0x0)) {
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar5);
            }
            else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
            }
          }
          if (((param_1 != (int *)0xfffff5a0) && (param_1[0x2a2] != 0)) &&
             (pvVar5 = (LPVOID)param_1[0x2a1], pvVar5 != (LPVOID)0x0)) {
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar5);
            }
            else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
            }
          }
          if ((*(char *)((int)param_1 + 0xb25) != '\0') &&
             (pvVar5 = (LPVOID)param_1[0x2ca], pvVar5 != (LPVOID)0x0)) {
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar5);
            }
            else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
            }
          }
        }
      }
      iVar7 = *param_1;
      puVar11 = (undefined4 *)(iVar7 + 0x80);
      iVar4 = FUN_004472b0(&local_11c,local_c0);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (local_c0[0] == 0) {
        pvVar5 = (LPVOID)0x0;
      }
      else {
        if (puVar11 == (undefined4 *)0x0) {
          pvVar5 = (LPVOID)FUN_00482949(local_c0[0]);
        }
        else {
          if (*(code **)(iVar7 + 0x84) == (code *)0x0) {
            return -4;
          }
          pvVar5 = (LPVOID)(**(code **)(iVar7 + 0x84))(local_c0[0],*puVar11);
        }
        if (pvVar5 == (LPVOID)0x0) {
          return -4;
        }
      }
      iVar4 = FUN_0042be60(&local_11c,pvVar5,param_1 + 0x290);
      if (iVar4 != 0) {
        if (pvVar5 == (LPVOID)0x0) {
          return iVar4;
        }
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar5);
          return iVar4;
        }
        if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
          (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
          return iVar4;
        }
        return iVar4;
      }
      *(undefined1 *)((int)param_1 + 0xb25) = 1;
    }
  }
  if ((param_2 != 1) && (param_2 != 3)) {
    return 0;
  }
  pvVar6 = FUN_0042be10(local_54);
  local_fc = *(undefined4 *)((int)pvVar6 + 0x20);
  uStack_f0 = *(undefined4 *)((int)pvVar6 + 0x2c);
  uStack_e8 = *(undefined4 *)((int)pvVar6 + 0x34);
  uStack_e4 = *(undefined4 *)((int)pvVar6 + 0x38);
  uStack_e0 = *(undefined4 *)((int)pvVar6 + 0x3c);
  local_ec = 0;
  local_dc = *(undefined4 *)((int)pvVar6 + 0x40);
  local_11c = param_1[0xb4];
  iStack_114 = param_1[0xb5];
  local_10c = param_1[2];
  piStack_104 = param_1 + 0xb6;
  iStack_118 = param_1[0xf6];
  iStack_110 = param_1[0xf7];
  iStack_108 = param_1[0xf8];
  piStack_100 = param_1 + 0xf9;
  iStack_f8 = param_1[0x13b];
  iStack_f4 = param_1[0x13c];
  iStack_d8 = param_1[0x2e];
  local_cc = param_1[0x31];
  iStack_d4 = param_1[0x2f];
  iStack_d0 = param_1[0x30];
  LOCK();
  iVar7 = param_1[3];
  if (iVar7 == 0) {
    param_1[3] = 0;
    iVar7 = 0;
  }
  UNLOCK();
  if (iVar7 != 0) {
    iVar7 = *param_1;
    puVar11 = (undefined4 *)(iVar7 + 0x80);
    if (param_1 != (int *)0xfffffb08) {
      if ((((*(char *)((int)param_1 + 0x5db) != '\0') && (param_1 + 0x152 != (int *)0x0)) &&
          (param_1[0x153] != 0)) &&
         (((pcVar1 = *(code **)(param_1[0x153] + 8), pcVar1 != (code *)0x0 &&
           ((*pcVar1)(param_1[0x154],param_1[0x152],puVar11), param_1[0x175] != 0)) &&
          (pvVar5 = (LPVOID)param_1[0x174], pvVar5 != (LPVOID)0x0)))) {
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar5);
        }
        else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
          (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
        }
      }
      if (((param_1 != (int *)0xfffffae8) && (param_1[0x150] != 0)) &&
         (pvVar5 = (LPVOID)param_1[0x14f], pvVar5 != (LPVOID)0x0)) {
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar5);
        }
        else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
          (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
        }
      }
      if ((*(char *)((int)param_1 + 0x5dd) != '\0') &&
         (pvVar5 = (LPVOID)param_1[0x178], pvVar5 != (LPVOID)0x0)) {
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar5);
        }
        else if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
          (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
        }
      }
    }
  }
  iVar7 = FUN_0042c110(&local_11c,(undefined4 *)(*param_1 + 0x80),param_1 + 0x13e);
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((param_2 != 1) && (param_2 != 3)) {
    return 0;
  }
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  if ((param_1[1] != 3) && (uStack_c8 = 0, param_1 + 0x13e != (int *)0x0)) {
    if (*(char *)((int)param_1 + 0x5db) == '\0') {
      uStack_c8 = 1;
LAB_00437bf3:
      pvVar5 = (LPVOID)param_1[0x17d];
      puVar11 = (undefined4 *)(*param_1 + 0x80);
      if (pvVar5 != (LPVOID)0x0) {
        if (puVar11 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar5);
        }
        else {
          pcVar1 = *(code **)(*param_1 + 0x8c);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(pvVar5,*puVar11);
          }
        }
      }
      param_1[0x17d] = 0;
      param_1[0x17e] = 0;
      param_1[0x17f] = 0;
      return 0;
    }
    if (param_1 + 0x152 == (int *)0x0) {
      iVar7 = (int)param_1 + 0x546;
    }
    else if ((param_1[0x153] == 0) ||
            (pcVar1 = *(code **)(param_1[0x153] + 0x1c), pcVar1 == (code *)0x0)) {
      iVar7 = -0x1d;
    }
    else {
      iVar7 = (*pcVar1)(param_1[0x154],param_1[0x152],1,0,&uStack_c8);
    }
    if (iVar7 == 0) goto LAB_00437bf3;
  }
  uVar12 = FUN_004355b0(param_1[0xf8],param_1[2],param_1[0x139],0);
  local_c0[0] = 0;
  local_c0[1] = 1;
  local_c0[2] = 2;
  local_c0[3] = 3;
  local_c0[4] = 4;
  local_c0[5] = 4;
  lVar2 = (uVar12 & 0xffffffff) * (ulonglong)(local_c0[param_1[0xb4]] * param_1[0xb5]);
  uVar8 = (uint)lVar2;
  iVar7 = *param_1;
  puVar11 = (undefined4 *)(iVar7 + 0x80);
  pvVar5 = (LPVOID)param_1[0x17d];
  if ((int)(uVar12 >> 0x20) * local_c0[param_1[0xb4]] * param_1[0xb5] +
      (int)((ulonglong)lVar2 >> 0x20) == 0) {
    if (puVar11 == (undefined4 *)0x0) {
      iVar7 = FUN_00482954(pvVar5,uVar8);
LAB_00437c55:
      if (iVar7 != 0) {
        param_1[0x17d] = iVar7;
        *(ulonglong *)(param_1 + 0x17e) = uVar12;
        return 0;
      }
    }
    else if (*(code **)(iVar7 + 0x88) != (code *)0x0) {
      iVar7 = (**(code **)(iVar7 + 0x88))(pvVar5,uVar8,*puVar11);
      goto LAB_00437c55;
    }
    pvVar5 = (LPVOID)param_1[0x17d];
    puVar11 = (undefined4 *)(*param_1 + 0x80);
    if (pvVar5 == (LPVOID)0x0) goto LAB_00437cc1;
    if (puVar11 != (undefined4 *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x8c);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(pvVar5,*puVar11);
      }
      goto LAB_00437cc1;
    }
  }
  else {
    if (pvVar5 == (LPVOID)0x0) goto LAB_00437cc1;
    if (puVar11 != (undefined4 *)0x0) {
      if (*(code **)(iVar7 + 0x8c) != (code *)0x0) {
        (**(code **)(iVar7 + 0x8c))(pvVar5,*puVar11);
      }
      goto LAB_00437cc1;
    }
  }
  FUN_0047d191(pvVar5);
LAB_00437cc1:
  param_1[0x17f] = 0;
  param_1[0x17e] = 0;
  param_1[0x17d] = 0;
  return -4;
}


