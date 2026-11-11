// Function: FUN_00446a60
// Entry: 00446a60
// Size: 1674 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00446fac) */
/* WARNING: Removing unreachable block (ram,0x00446e7e) */

undefined4 __cdecl FUN_00446a60(int *param_1,void *param_2,int param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  int *piVar2;
  void *pvVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_18 [6];
  
  pvVar3 = param_2;
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1fd);
  }
  if (param_2 == (void *)0x0) {
    FID_conflict___assert
              (L"pFramesOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1fe);
  }
  if (param_3 == 0) {
    FID_conflict___assert
              (L"pFramesIn != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd1ff);
  }
  local_18[0] = 0;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 4;
  local_18[5] = 4;
  lVar12 = (ulonglong)param_4 * (ulonglong)(uint)(local_18[*param_1] * param_1[2]);
  iVar10 = param_5 * local_18[*param_1] * param_1[2] + (int)((ulonglong)lVar12 >> 0x20);
  _Dst = param_2;
  for (uVar5 = (uint)lVar12; (iVar10 != 0 || (uVar5 != 0)); uVar5 = uVar5 - uVar9) {
    uVar9 = uVar5;
    if (iVar10 != 0) {
      uVar9 = 0xffffffff;
    }
    if (_Dst == (void *)0x0) {
      if (uVar9 != 0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
    }
    else if (uVar9 != 0) {
      _memset(_Dst,0,uVar9);
    }
    iVar10 = iVar10 - (uint)(uVar5 < uVar9);
    _Dst = (void *)((int)_Dst + uVar9);
  }
  puVar11 = (uint *)(param_1 + 2);
  switch(*param_1) {
  case 1:
    param_2 = (void *)0x0;
    if ((param_5 != 0) || (param_4 != 0)) {
      do {
        param_1 = (int *)0x0;
        if (piVar2[1] != 0) {
          uVar5 = piVar2[2];
          do {
            uVar9 = 0;
            if (uVar5 != 0) {
              do {
                iVar10 = (uint)*(byte *)(uVar5 * (int)param_2 + uVar9 + (int)pvVar3) +
                         ((int)((*(byte *)((int)param_1 + param_3 + piVar2[1] * (int)param_2) - 0x80
                                ) * *(int *)(*(int *)(piVar2[8] + (int)param_1 * 4) + uVar9 * 4)) >>
                         0xc) + -0x80;
                if (iVar10 < 0x7f) {
                  if (iVar10 < -0x80) {
                    iVar10 = -0x80;
                  }
                  sVar4 = (short)iVar10;
                }
                else {
                  sVar4 = 0x7f;
                }
                sVar6 = 0x7f;
                if (sVar4 < 0x7f) {
                  sVar6 = sVar4;
                }
                if (sVar6 < -0x80) {
                  sVar6 = -0x80;
                }
                *(char *)(uVar5 * (int)param_2 + uVar9 + (int)pvVar3) = (char)sVar6 + -0x80;
                uVar9 = uVar9 + 1;
                uVar5 = piVar2[2];
              } while (uVar9 < uVar5);
            }
            param_1 = (int *)((int)param_1 + 1);
          } while (param_1 < (int *)piVar2[1]);
        }
        param_2 = (void *)((int)param_2 + 1);
      } while ((param_5 != 0) || (param_2 < param_4));
      return 0;
    }
    break;
  case 2:
    param_2 = (void *)0x0;
    if ((param_5 != 0) || (param_4 != 0)) {
      do {
        param_1 = (int *)0x0;
        if (piVar2[1] != 0) {
          uVar5 = *puVar11;
          do {
            uVar9 = 0;
            if (uVar5 != 0) {
              do {
                iVar8 = uVar5 * (int)param_2 + uVar9;
                iVar7 = ((int)*(short *)(param_3 +
                                        (int)(piVar2[1] * (int)param_2 + (int)param_1) * 2) *
                         *(int *)(*(int *)(piVar2[8] + (int)param_1 * 4) + uVar9 * 4) >> 0xc) +
                        (int)*(short *)((int)pvVar3 + iVar8 * 2);
                iVar10 = 0x7fff;
                if (iVar7 < 0x7fff) {
                  iVar10 = iVar7;
                }
                if (iVar10 < -0x8000) {
                  iVar10 = -0x8000;
                }
                uVar9 = uVar9 + 1;
                *(short *)((int)pvVar3 + iVar8 * 2) = (short)iVar10;
                uVar5 = *puVar11;
              } while (uVar9 < uVar5);
            }
            param_1 = (int *)((int)param_1 + 1);
          } while (param_1 < (int *)piVar2[1]);
        }
        param_2 = (void *)((int)param_2 + 1);
      } while ((param_5 != 0) || (param_2 < param_4));
      return 0;
    }
    break;
  case 3:
    local_28 = 0;
    if ((param_5 != 0) || (param_4 != 0)) {
      do {
        local_30 = 0;
        if (param_1[1] != 0) {
          uVar5 = *puVar11;
          do {
            local_2c = 0;
            if (uVar5 != 0) {
              do {
                iVar10 = uVar5 * local_28 + local_2c;
                iVar7 = (uint)*(uint3 *)(param_3 + (param_1[1] * local_28 + local_30) * 3) << 8;
                uVar5 = *(uint *)(*(int *)(param_1[8] + local_30 * 4) + local_2c * 4);
                lVar12 = __allmul(iVar7 >> 8,iVar7 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
                iVar7 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)param_2 + iVar10 * 3 + 2),
                                                *(undefined1 *)((int)param_2 + iVar10 * 3 + 1)),
                                       *(undefined1 *)((int)param_2 + iVar10 * 3)) << 8;
                uVar1 = (lVar12 >> 0xc) + CONCAT44(iVar7 >> 0x1f,iVar7 >> 8);
                uVar5 = (uint)uVar1;
                if ((longlong)uVar1 < 0x7fffff) {
                  if ((0x7fffffffffffffff < uVar1) &&
                     (((longlong)uVar1 < -0x100000000 || (uVar5 < 0xff800000)))) {
                    uVar5 = 0xff800000;
                  }
                }
                else {
                  uVar5 = 0x7fffff;
                }
                *(char *)((int)param_2 + iVar10 * 3) = (char)uVar5;
                local_2c = local_2c + 1;
                *(char *)((int)param_2 + iVar10 * 3 + 2) = (char)(uVar5 >> 0x10);
                *(char *)((int)param_2 + iVar10 * 3 + 1) = (char)(uVar5 >> 8);
                uVar5 = *puVar11;
              } while (local_2c < uVar5);
            }
            local_30 = local_30 + 1;
          } while (local_30 < (uint)param_1[1]);
        }
        local_28 = local_28 + 1;
      } while ((param_5 != 0) || (local_28 < param_4));
      return 0;
    }
    break;
  case 4:
    local_30 = 0;
    if ((param_5 != 0) || (param_4 != 0)) {
      do {
        param_2 = (void *)0x0;
        if (param_1[1] != 0) {
          uVar5 = *puVar11;
          do {
            local_28 = 0;
            if (uVar5 != 0) {
              do {
                iVar10 = uVar5 * local_30 + local_28;
                uVar1 = ((longlong)
                         *(int *)(param_3 + (int)(param_1[1] * local_30 + (int)param_2) * 4) *
                         (longlong)*(int *)(*(int *)(param_1[8] + (int)param_2 * 4) + local_28 * 4)
                        >> 0xc) + (longlong)*(int *)((int)pvVar3 + iVar10 * 4);
                uVar5 = (uint)uVar1;
                if ((longlong)uVar1 < 0x7fffffff) {
                  if ((0x7fffffffffffffff < uVar1) &&
                     (((longlong)uVar1 < -0x100000000 || (uVar5 < 0x80000000)))) {
                    uVar5 = 0x80000000;
                  }
                }
                else {
                  uVar5 = 0x7fffffff;
                }
                local_28 = local_28 + 1;
                *(uint *)((int)pvVar3 + iVar10 * 4) = uVar5;
                uVar5 = *puVar11;
              } while (local_28 < uVar5);
            }
            param_2 = (void *)((int)param_2 + 1);
          } while (param_2 < (void *)param_1[1]);
        }
        local_30 = local_30 + 1;
      } while ((param_5 != 0) || (local_30 < param_4));
      return 0;
    }
    break;
  case 5:
    param_1 = (int *)0x0;
    if ((param_5 != 0) || (param_4 != 0)) {
      do {
        param_2 = (void *)0x0;
        if (piVar2[1] != 0) {
          uVar5 = *puVar11;
          do {
            uVar9 = 0;
            if (uVar5 != 0) {
              do {
                iVar7 = uVar5 * (int)param_1 + uVar9;
                iVar10 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                *(float *)((int)pvVar3 + iVar7 * 4) =
                     *(float *)(*(int *)(piVar2[8] + (int)param_2 * 4) + iVar10) *
                     *(float *)(param_3 + (int)(piVar2[1] * (int)param_1 + (int)param_2) * 4) +
                     *(float *)((int)pvVar3 + iVar7 * 4);
                uVar5 = *puVar11;
              } while (uVar9 < uVar5);
            }
            param_2 = (void *)((int)param_2 + 1);
          } while (param_2 < (void *)piVar2[1]);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((param_5 != 0) || (param_1 < param_4));
    }
    break;
  default:
    return 0xfffffffd;
  }
  return 0;
}


