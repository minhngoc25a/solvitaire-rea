// Function: FUN_0042b230
// Entry: 0042b230
// Size: 2447 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042b230(int *param_1,void *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte local_1d;
  uint local_1c;
  size_t local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3 == (int *)0x0) {
    return -2;
  }
  _memset(param_3,0,0x2c);
  iVar4 = FUN_00445e70((int)param_1,&local_14);
  if (iVar4 != 0) {
    return iVar4;
  }
  param_3[9] = (int)param_2;
  if (param_2 == (void *)0x0) {
    if (local_14 != 0) {
      FID_conflict___assert
                (L"sz == 0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x2fbb);
    }
  }
  else if (local_14 != 0) {
    _memset(param_2,0,local_14);
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[5];
  if (param_1[3] == 0) {
    param_3[5] = 0;
  }
  else {
    puVar5 = (uint *)(local_10 + (int)param_2);
    param_3[5] = (int)puVar5;
    uVar6 = param_1[1];
    if ((puVar5 != (uint *)0x0) && (uVar6 != 0)) {
      if ((uint *)param_1[3] == (uint *)0x0) {
        FUN_0042e820(0,(char *)puVar5,uVar6,uVar6);
      }
      else {
        FUN_0044c490(puVar5,(uint *)param_1[3],uVar6);
      }
    }
  }
  if (param_1[4] == 0) {
    param_3[6] = 0;
  }
  else {
    puVar5 = (uint *)(local_c + (int)param_2);
    param_3[6] = (int)puVar5;
    uVar6 = param_1[2];
    if ((puVar5 != (uint *)0x0) && (uVar6 != 0)) {
      if ((uint *)param_1[4] == (uint *)0x0) {
        FUN_0042e820(0,(char *)puVar5,uVar6,uVar6);
      }
      else {
        FUN_0044c490(puVar5,(uint *)param_1[4],uVar6);
      }
    }
  }
  iVar4 = FUN_00445d20((int)param_1);
  param_3[4] = iVar4;
  if (iVar4 == 4) {
    param_3[7] = local_8 + (int)param_2;
    FUN_00444ef0(param_3[5],param_3[1],param_3[6],param_3[2],(undefined1 *)(local_8 + (int)param_2))
    ;
  }
  if (param_3[4] != 5) {
    return 0;
  }
  uVar9 = 0;
  uVar6 = param_3[1];
  param_3[8] = local_4 + (int)param_2;
  if (*param_3 == 5) {
    if (uVar6 != 0) {
      do {
        *(uint *)(param_3[8] + uVar9 * 4) =
             local_4 + (param_3[2] * uVar9 + uVar6) * 4 + (int)param_2;
        uVar9 = uVar9 + 1;
        uVar6 = param_3[1];
      } while (uVar9 < uVar6);
    }
  }
  else if (uVar6 != 0) {
    do {
      *(uint *)(param_3[8] + uVar9 * 4) = local_4 + (param_3[2] * uVar9 + uVar6) * 4 + (int)param_2;
      uVar9 = uVar9 + 1;
      uVar6 = param_3[1];
    } while (uVar9 < uVar6);
  }
  fVar15 = DAT_0050c314;
  uVar10 = 0;
  fVar13 = 0.0;
  uVar9 = 0;
  if (uVar6 != 0) {
    do {
      uVar6 = 0;
      if (param_3[2] != 0) {
        do {
          *(undefined4 *)(*(int *)(param_3[8] + uVar10 * 4) + uVar6 * 4) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)param_3[2]);
      }
      uVar6 = param_3[1];
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
    uVar10 = 0;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        if (param_3[5] == 0) {
          local_1d = FUN_00448a20(0,uVar6,uVar10);
        }
        else if (uVar10 < uVar6) {
          local_1d = *(char *)(param_3[5] + uVar10);
        }
        else {
          local_1d = '\0';
        }
        uVar6 = param_3[2];
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            if (param_3[6] == 0) {
              cVar1 = FUN_00448a20(0,uVar6,uVar9);
            }
            else if (uVar9 < uVar6) {
              cVar1 = *(char *)(param_3[6] + uVar9);
            }
            else {
              cVar1 = '\0';
            }
            if (local_1d == cVar1) {
              iVar4 = *(int *)(param_3[8] + uVar10 * 4);
              if (*param_3 == 5) {
                *(undefined4 *)(iVar4 + uVar9 * 4) = 0x3f800000;
              }
              else {
                *(undefined4 *)(iVar4 + uVar9 * 4) = 0x1000;
              }
            }
            uVar6 = param_3[2];
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar6);
        }
        uVar9 = param_3[1];
        uVar10 = uVar10 + 1;
        uVar6 = uVar9;
      } while (uVar10 < uVar9);
    }
  }
  fVar14 = DAT_0050c370;
  iVar4 = param_3[3];
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      return 0;
    }
    if (iVar4 == 2) {
      if (param_1[7] == 0) {
        return -2;
      }
      uVar6 = 0;
      if (uVar9 != 0) {
        do {
          uVar9 = 0;
          if (param_3[2] != 0) {
            do {
              fVar15 = *(float *)(*(int *)(param_1[7] + uVar6 * 4) + uVar9 * 4);
              iVar4 = *(int *)(param_3[8] + uVar6 * 4);
              if (*param_3 == 5) {
                *(float *)(iVar4 + uVar9 * 4) = fVar15;
              }
              else {
                *(int *)(iVar4 + uVar9 * 4) = (int)(fVar15 * fVar14);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)param_3[2]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)param_3[1]);
        return 0;
      }
      return 0;
    }
  }
  local_1c = 0;
  if (uVar9 != 0) {
LAB_0042b524:
    if (param_3[5] == 0) {
      bVar2 = FUN_00448a20(0,uVar9,local_1c);
LAB_0042b551:
      if ((((bVar2 != 0) && (bVar2 != 1)) && (bVar2 != 5)) && (0x1f < (byte)(bVar2 - 0x14))) {
        iVar4 = 0;
        pfVar7 = (float *)(&DAT_0053ffd8 + (uint)bVar2 * 0x18);
        do {
          if (*pfVar7 != fVar13) {
            uVar6 = param_3[2];
            uVar9 = 0;
            iVar4 = param_3[6];
            if (uVar6 != 0) goto LAB_0042b5b1;
            break;
          }
          iVar4 = iVar4 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar4 < 6);
      }
    }
    else if (local_1c < uVar9) {
      bVar2 = *(byte *)(param_3[5] + local_1c);
      goto LAB_0042b551;
    }
    goto LAB_0042b752;
  }
LAB_0042b762:
  uVar6 = param_3[2];
  local_1c = 0;
  if (uVar6 != 0) {
LAB_0042b773:
    if (param_3[6] == 0) {
      local_1d = FUN_00448a20(0,uVar6,local_1c);
LAB_0042b798:
      if (((local_1d != 0) && (local_1d != 1)) &&
         ((local_1d != 5 && (0x1f < (byte)(local_1d - 0x14))))) {
        iVar4 = 0;
        pfVar7 = (float *)(&DAT_0053ffd8 + (uint)local_1d * 0x18);
        do {
          if (*pfVar7 != fVar13) {
            uVar6 = param_3[1];
            uVar9 = 0;
            iVar4 = param_3[5];
            if (uVar6 != 0) goto LAB_0042b7e4;
            break;
          }
          iVar4 = iVar4 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar4 < 6);
      }
    }
    else if (local_1c < uVar6) {
      local_1d = *(byte *)(param_3[6] + local_1c);
      goto LAB_0042b798;
    }
    goto LAB_0042b808;
  }
LAB_0042b818:
  if (param_1[6] != 0) {
    uVar6 = param_3[1];
    uVar9 = 0;
    iVar4 = param_3[5];
    if (uVar6 != 0) {
      do {
        if (iVar4 == 0) {
          cVar1 = FUN_00448a20(0,uVar6,uVar9);
LAB_0042b9b9:
          if (cVar1 == '\x05') {
            return 0;
          }
        }
        else if (uVar9 < uVar6) {
          cVar1 = *(char *)(uVar9 + iVar4);
          goto LAB_0042b9b9;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
    iVar4 = param_3[5];
    iVar11 = 0;
    uVar6 = param_3[1];
    if (iVar4 == 0) {
      FID_conflict___assert
                (L"pChannelMap != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xccc4);
      fVar13 = 0.0;
      fVar14 = DAT_0050c370;
      fVar15 = DAT_0050c314;
    }
    if (uVar6 == 0) {
      FID_conflict___assert
                (L"channels > 0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xccc5);
      return 0;
    }
    uVar9 = 0;
    do {
      if (iVar4 == 0) {
        bVar2 = FUN_00448a20(0,uVar6,uVar9);
      }
      else {
        bVar2 = *(byte *)(uVar9 + iVar4);
      }
      if (((bVar2 != 0) && (bVar2 != 1)) && ((bVar2 != 5 && (0x1f < (byte)(bVar2 - 0x14))))) {
        iVar8 = 0;
        pfVar7 = (float *)(&DAT_0053ffd8 + (uint)bVar2 * 0x18);
        do {
          if (*pfVar7 != fVar13) {
            iVar11 = iVar11 + 1;
            break;
          }
          iVar8 = iVar8 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar8 < 6);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
    if (iVar11 != 0) {
      uVar6 = param_3[2];
      uVar9 = 0;
      iVar4 = param_3[6];
      if (uVar6 != 0) {
        do {
          if (iVar4 == 0) {
            cVar1 = FUN_00448a20(0,uVar6,uVar9);
LAB_0042bac8:
            if (cVar1 == '\x05') {
              uVar6 = param_3[1];
              uVar10 = 0;
              fVar15 = fVar15 / (float)((double)iVar11 + (double)(&DAT_0050c3d0)[-(iVar11 >> 0x1f)])
              ;
              if (uVar6 == 0) {
                return 0;
              }
              goto LAB_0042bb07;
            }
            iVar4 = param_3[6];
          }
          else if (uVar9 < uVar6) {
            cVar1 = *(char *)(uVar9 + iVar4);
            goto LAB_0042bac8;
          }
          uVar9 = uVar9 + 1;
          if (uVar6 <= uVar9) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
LAB_0042b5b1:
  do {
    if (iVar4 == 0) {
      bVar3 = FUN_00448a20(0,uVar6,uVar9);
LAB_0042b5c9:
      if (bVar3 == bVar2) goto LAB_0042b752;
    }
    else if (uVar9 < uVar6) {
      bVar3 = *(byte *)(uVar9 + iVar4);
      goto LAB_0042b5c9;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar6);
  uVar10 = 0;
  uVar9 = (uint)bVar2;
  uVar6 = param_3[2];
  do {
    if (param_3[6] == 0) {
      bVar2 = FUN_00448a20(0,uVar6,uVar10);
LAB_0042b614:
      if (((bVar2 != 0) && (bVar2 != 1)) && ((bVar2 != 5 && (0x1f < (byte)(bVar2 - 0x14))))) {
        iVar4 = 0;
        pfVar7 = (float *)(&DAT_0053ffd8 + (uint)bVar2 * 0x18);
        do {
          if (*pfVar7 != fVar13) {
            fVar12 = fVar13;
            if (param_3[3] == 0) {
              uVar6 = (uint)bVar2;
              fVar12 = *(float *)(&DAT_0053ffdc + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffdc + uVar9 * 0x18) +
                       *(float *)(&DAT_0053ffd8 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffd8 + uVar9 * 0x18) +
                       *(float *)(&DAT_0053ffe0 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe0 + uVar9 * 0x18) +
                       *(float *)(&DAT_0053ffe4 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe4 + uVar9 * 0x18) +
                       *(float *)(&DAT_0053ffe8 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe8 + uVar9 * 0x18) +
                       *(float *)(&DAT_0053ffec + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffec + uVar9 * 0x18);
            }
            iVar4 = *(int *)(param_3[8] + local_1c * 4);
            if (*param_3 == 5) {
              if (*(float *)(iVar4 + uVar10 * 4) == fVar13) {
                *(float *)(iVar4 + uVar10 * 4) = fVar12;
              }
            }
            else if (*(int *)(iVar4 + uVar10 * 4) == 0) {
              *(int *)(iVar4 + uVar10 * 4) = (int)(fVar12 * fVar14);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar4 < 6);
      }
    }
    else if (uVar10 < uVar6) {
      bVar2 = *(byte *)(param_3[6] + uVar10);
      goto LAB_0042b614;
    }
    uVar6 = param_3[2];
    uVar10 = uVar10 + 1;
  } while (uVar10 < uVar6);
LAB_0042b752:
  uVar9 = param_3[1];
  local_1c = local_1c + 1;
  if (uVar9 <= local_1c) goto LAB_0042b762;
  goto LAB_0042b524;
LAB_0042b7e4:
  do {
    if (iVar4 == 0) {
      bVar2 = FUN_00448a20(0,uVar6,uVar9);
LAB_0042b7fc:
      if (bVar2 == local_1d) goto LAB_0042b808;
    }
    else if (uVar9 < uVar6) {
      bVar2 = *(byte *)(uVar9 + iVar4);
      goto LAB_0042b7fc;
    }
    uVar10 = (uint)local_1d;
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar6);
  uVar9 = 0;
  uVar6 = param_3[1];
  do {
    if (param_3[5] == 0) {
      bVar2 = FUN_00448a20(0,uVar6,uVar9);
LAB_0042b87f:
      if ((((bVar2 != 0) && (bVar2 != 1)) && (bVar2 != 5)) && (0x1f < (byte)(bVar2 - 0x14))) {
        iVar4 = 0;
        pfVar7 = (float *)(&DAT_0053ffd8 + (uint)bVar2 * 0x18);
        do {
          if (*pfVar7 != fVar13) {
            fVar12 = fVar13;
            if (param_3[3] == 0) {
              uVar6 = (uint)bVar2;
              fVar12 = *(float *)(&DAT_0053ffdc + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffdc + uVar10 * 0x18) +
                       *(float *)(&DAT_0053ffd8 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffd8 + uVar10 * 0x18) +
                       *(float *)(&DAT_0053ffe0 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe0 + uVar10 * 0x18) +
                       *(float *)(&DAT_0053ffe4 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe4 + uVar10 * 0x18) +
                       *(float *)(&DAT_0053ffe8 + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffe8 + uVar10 * 0x18) +
                       *(float *)(&DAT_0053ffec + uVar6 * 0x18) *
                       *(float *)(&DAT_0053ffec + uVar10 * 0x18);
            }
            iVar4 = *(int *)(param_3[8] + uVar9 * 4);
            if (*param_3 == 5) {
              if (*(float *)(iVar4 + local_1c * 4) == fVar13) {
                *(float *)(iVar4 + local_1c * 4) = fVar12;
              }
            }
            else if (*(int *)(iVar4 + local_1c * 4) == 0) {
              *(int *)(iVar4 + local_1c * 4) = (int)(fVar12 * fVar14);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar4 < 6);
      }
    }
    else if (uVar9 < uVar6) {
      bVar2 = *(byte *)(param_3[5] + uVar9);
      goto LAB_0042b87f;
    }
    uVar6 = param_3[1];
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar6);
LAB_0042b808:
  uVar6 = param_3[2];
  local_1c = local_1c + 1;
  if (uVar6 <= local_1c) goto LAB_0042b818;
  goto LAB_0042b773;
LAB_0042bb07:
  if (param_3[5] == 0) {
    bVar2 = FUN_00448a20(0,uVar6,uVar10);
LAB_0042bb24:
    if (((bVar2 != 0) && (bVar2 != 1)) && ((bVar2 != 5 && (0x1f < (byte)(bVar2 - 0x14))))) {
      iVar4 = 0;
      pfVar7 = (float *)(&DAT_0053ffd8 + (uint)bVar2 * 0x18);
      do {
        if (*pfVar7 != fVar13) {
          iVar4 = *(int *)(param_3[8] + uVar10 * 4);
          if (*param_3 == 5) {
            if (*(float *)(iVar4 + uVar9 * 4) == fVar13) {
              *(float *)(iVar4 + uVar9 * 4) = fVar15;
            }
          }
          else if (*(int *)(iVar4 + uVar9 * 4) == 0) {
            *(int *)(iVar4 + uVar9 * 4) = (int)(fVar15 * fVar14);
          }
          break;
        }
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 1;
      } while (iVar4 < 6);
    }
  }
  else if (uVar10 < uVar6) {
    bVar2 = *(byte *)(param_3[5] + uVar10);
    goto LAB_0042bb24;
  }
  uVar6 = param_3[1];
  uVar10 = uVar10 + 1;
  if (uVar6 <= uVar10) {
    return 0;
  }
  goto LAB_0042bb07;
}


