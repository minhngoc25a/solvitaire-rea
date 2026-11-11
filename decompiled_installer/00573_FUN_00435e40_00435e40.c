// Function: FUN_00435e40
// Entry: 00435e40
// Size: 1072 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435e40(uint param_1,void *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_30 [12];
  
  uVar7 = param_1;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4907);
  }
  else {
    LOCK();
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar9 == 0) {
      *(int *)(param_1 + 0xc) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 == 4) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
      FID_conflict___assert
                (L"pDevice->onData != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x48fc);
    }
    if ((*(char *)(param_1 + 0x39) == '\0') && (param_2 != (void *)0x0)) {
      FUN_00431f80(param_2,param_4,0,*(int *)(param_1 + 0x2d0),*(uint *)(param_1 + 0x2d4));
    }
    (**(code **)(param_1 + 0x10))(param_1,param_2,param_3,param_4);
    return;
  }
  param_1 = 0;
  if (param_4 != 0) {
    do {
      uVar11 = 0;
      uVar10 = param_4 - param_1;
      if (param_3 != 0) {
        uVar8 = *(uint *)(uVar7 + 0xb38);
        puVar1 = (uint *)(uVar7 + 0xb38);
        if (uVar8 < *(uint *)(uVar7 + 0xb34)) {
          iVar9 = *(int *)(uVar7 + 0x81c);
          uVar11 = *(uint *)(uVar7 + 0xb34) - uVar8;
          local_30[0] = 0;
          iVar3 = *(int *)(uVar7 + 0x818);
          if (uVar10 <= uVar11) {
            uVar11 = uVar10;
          }
          local_30[1] = 1;
          local_30[2] = 2;
          local_30[3] = 3;
          local_30[4] = 4;
          local_30[5] = 4;
          local_30[6] = 0;
          local_30[7] = 1;
          local_30[8] = 2;
          local_30[9] = 3;
          local_30[10] = 4;
          local_30[0xb] = 4;
          FUN_00431ec0((uint *)(local_30[iVar3 + 6] * iVar9 * *puVar1 + *(int *)(uVar7 + 0xb30)),
                       (uint *)(local_30[iVar3] * iVar9 * param_1 + param_3),uVar11,0,iVar3,iVar9);
          *puVar1 = *puVar1 + uVar11;
          uVar8 = *puVar1;
        }
        uVar4 = *(uint *)(uVar7 + 0xb34);
        if ((uVar8 == uVar4) && (*(int *)(uVar7 + 4) != 3)) {
          uVar5 = *(undefined4 *)(uVar7 + 0xb30);
          if (*(int *)(uVar7 + 0x10) == 0) {
            FID_conflict___assert
                      (L"pDevice->onData != ((void *)0)",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x48fc);
          }
          (**(code **)(uVar7 + 0x10))(uVar7,0,uVar5,uVar4);
          *(undefined4 *)(uVar7 + 0xb38) = 0;
        }
      }
      if (param_2 == (void *)0x0) {
LAB_004361c6:
        if (*(int *)(uVar7 + 4) == 3) goto LAB_004361d0;
      }
      else {
        uVar8 = *(uint *)(uVar7 + 0x5f0);
        piVar2 = (int *)(uVar7 + 0x5f0);
        if (uVar8 == 0) {
          iVar9 = 0;
        }
        else {
          if ((*(int *)(uVar7 + 4) != 3) && (uVar11 = uVar10, uVar8 < uVar10)) {
            uVar11 = uVar8;
          }
          iVar9 = *(int *)(uVar7 + 0x2d0);
          iVar3 = *(int *)(uVar7 + 0x2d4);
          local_30[6] = 0;
          local_30[7] = 1;
          local_30[8] = 2;
          local_30[9] = 3;
          local_30[10] = 4;
          local_30[0xb] = 4;
          local_30[0] = 0;
          local_30[1] = 1;
          local_30[2] = 2;
          local_30[3] = 3;
          local_30[4] = 4;
          local_30[5] = 4;
          FUN_00431ec0((uint *)(local_30[iVar9] * iVar3 * param_1 + (int)param_2),
                       (uint *)((*(int *)(uVar7 + 0x5ec) - uVar8) * local_30[iVar9 + 6] * iVar3 +
                               *(int *)(uVar7 + 0x5e8)),uVar11,0,iVar9,iVar3);
          *piVar2 = *piVar2 - uVar11;
          iVar9 = *piVar2;
        }
        if (iVar9 != 0) goto LAB_004361c6;
        if (*(int *)(uVar7 + 4) != 3) {
          uVar10 = *(uint *)(uVar7 + 0x5ec);
          pvVar6 = *(void **)(uVar7 + 0x5e8);
          if (*(int *)(uVar7 + 0x10) == 0) {
            FID_conflict___assert
                      (L"pDevice->onData != ((void *)0)",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x48fc);
          }
          if ((*(char *)(uVar7 + 0x39) == '\0') && (pvVar6 != (void *)0x0)) {
            FUN_00431f80(pvVar6,uVar10,0,*(int *)(uVar7 + 0x2d0),*(uint *)(uVar7 + 0x2d4));
          }
          (**(code **)(uVar7 + 0x10))(uVar7,pvVar6,0,uVar10);
          *(undefined4 *)(uVar7 + 0x5f0) = *(undefined4 *)(uVar7 + 0x5ec);
          goto LAB_004361c6;
        }
LAB_004361d0:
        uVar10 = *(uint *)(uVar7 + 0xb34);
        if (*(uint *)(uVar7 + 0xb38) == uVar10) {
          uVar5 = *(undefined4 *)(uVar7 + 0xb30);
          pvVar6 = *(void **)(uVar7 + 0x5e8);
          if (*(int *)(uVar7 + 0x10) == 0) {
            FID_conflict___assert
                      (L"pDevice->onData != ((void *)0)",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x48fc);
          }
          if ((*(char *)(uVar7 + 0x39) == '\0') && (pvVar6 != (void *)0x0)) {
            FUN_00431f80(pvVar6,uVar10,0,*(int *)(uVar7 + 0x2d0),*(uint *)(uVar7 + 0x2d4));
          }
          (**(code **)(uVar7 + 0x10))(uVar7,pvVar6,uVar5,uVar10);
          *(undefined4 *)(uVar7 + 0x5f0) = *(undefined4 *)(uVar7 + 0x5ec);
          *(undefined4 *)(uVar7 + 0xb38) = 0;
        }
      }
      param_1 = param_1 + uVar11;
    } while (param_1 < param_4);
  }
  return;
}


