// Function: FUN_00433cc0
// Entry: 00433cc0
// Size: 3747 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00433cc0(int *param_1,void *param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  DWORD DVar8;
  LPVOID pvVar9;
  BOOL BVar10;
  undefined4 *puVar11;
  int iVar12;
  ushort uVar13;
  int *piVar14;
  int local_414;
  int local_410;
  uint local_408;
  uint *local_404;
  int local_3fc;
  uint local_3f8;
  uint local_3f4;
  int local_3f0;
  int iStack_3ec;
  int iStack_3e8;
  undefined1 *puStack_3e4;
  int local_3e0;
  int iStack_3dc;
  uint uStack_3d8;
  int iStack_3d4;
  int local_3d0;
  uint uStack_3cc;
  int iStack_3c8;
  int iStack_3c4;
  int local_3c0;
  int iStack_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int local_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int local_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  undefined **local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  int *local_380;
  int *piStack_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined8 uStack_35c;
  undefined4 uStack_354;
  uint local_350 [4];
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  code *pcStack_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  undefined1 *puStack_30c;
  int local_308;
  int iStack_304;
  undefined4 uStack_300;
  int iStack_2fc;
  int local_2f8;
  uint uStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int local_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  undefined4 local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  undefined4 local_2b8 [6];
  int local_2a0 [6];
  undefined2 local_288;
  undefined1 *local_284;
  int local_280;
  void *local_278;
  int local_254;
  undefined4 local_250;
  int local_24c;
  int local_1cc [4];
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int local_150 [11];
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 local_7c [124];
  
  if (param_2 == (void *)0x0) {
    return -2;
  }
  _memset(param_2,0,0x3e0);
  if (param_1 == (int *)0x0) {
    _memset(&local_318,0,0x60);
    uStack_300 = 1;
    local_2c8 = 0;
    local_3f0 = local_318;
    iStack_3ec = iStack_314;
    iStack_3e8 = iStack_310;
    puStack_3e4 = puStack_30c;
    local_3e0 = local_308;
    iStack_3dc = iStack_304;
    uStack_3d8 = 1;
    iStack_3d4 = iStack_2fc;
    local_3d0 = local_2f8;
    uStack_3cc = uStack_2f4;
    iStack_3c8 = iStack_2f0;
    iStack_3c4 = iStack_2ec;
    local_3c0 = local_2e8;
    iStack_3bc = iStack_2e4;
    iStack_3b8 = iStack_2e0;
    iStack_3b4 = iStack_2dc;
    local_3b0 = local_2d8;
    iStack_3ac = iStack_2d4;
    iStack_3a8 = iStack_2d0;
    iStack_3a4 = iStack_2cc;
    local_3a0 = 0;
  }
  else {
    local_3f0 = *param_1;
    iStack_3ec = param_1[1];
    iStack_3e8 = param_1[2];
    puStack_3e4 = (undefined1 *)param_1[3];
    local_3e0 = param_1[4];
    iStack_3dc = param_1[5];
    uStack_3d8 = param_1[6];
    iStack_3d4 = param_1[7];
    local_3d0 = param_1[8];
    uStack_3cc = param_1[9];
    iStack_3c8 = param_1[10];
    iStack_3c4 = param_1[0xb];
    local_3c0 = param_1[0xc];
    iStack_3bc = param_1[0xd];
    iStack_3b8 = param_1[0xe];
    iStack_3b4 = param_1[0xf];
    local_3b0 = param_1[0x10];
    iStack_3ac = param_1[0x11];
    iStack_3a8 = param_1[0x12];
    iStack_3a4 = param_1[0x13];
    local_3a0 = param_1[0x14];
    iStack_2c4 = param_1[0x15];
    iStack_2c0 = param_1[0x16];
    iStack_2bc = param_1[0x17];
  }
  piVar2 = (int *)((int)param_2 + 0x3a8);
  *(int *)((int)param_2 + 0x3d0) = local_3a0;
  *(int *)((int)param_2 + 0x3cc) = iStack_3bc;
  *(int *)((int)param_2 + 0x3d4) = iStack_2c0;
  *(int *)((int)param_2 + 0x3d8) = iStack_2bc;
  if (piVar2 != (int *)0x0) {
    if (iStack_3b8 == 0) {
      if (iStack_3ac == 0) {
        if ((iStack_3b4 == 0) && (local_3b0 == 0)) {
          *piVar2 = 0;
          *(code **)((int)param_2 + 0x3ac) = FUN_00435570;
          *(undefined1 **)((int)param_2 + 0x3b0) = &LAB_00435580;
          *(code **)((int)param_2 + 0x3b4) = FUN_004355a0;
        }
      }
      else {
LAB_00433e1b:
        if ((iStack_3b4 != 0) || (local_3b0 != 0)) {
          *piVar2 = iStack_3b8;
          *(int *)((int)param_2 + 0x3ac) = iStack_3b4;
          *(int *)((int)param_2 + 0x3b0) = local_3b0;
          *(int *)((int)param_2 + 0x3b4) = iStack_3ac;
        }
      }
    }
    else if (iStack_3ac != 0) goto LAB_00433e1b;
  }
  *(int *)((int)param_2 + 0x208) = iStack_3ec;
  iStack_39c = iStack_2c4;
  iStack_398 = iStack_2c0;
  iStack_394 = iStack_2bc;
  if ((iStack_3ec == 0) && (iStack_3a4 == 0)) {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_00482949(0xbc0);
    }
    else {
      if (*(code **)((int)param_2 + 0x3ac) == (code *)0x0) {
        *(undefined4 *)((int)param_2 + 0x208) = 0;
        return -4;
      }
      piVar2 = (int *)(**(code **)((int)param_2 + 0x3ac))(0xbc0,*piVar2);
    }
    *(int **)((int)param_2 + 0x208) = piVar2;
    if (piVar2 == (int *)0x0) {
      return -4;
    }
    _memset(local_150,0,0xd4);
    local_370 = 0;
    uStack_35c = 0;
    uStack_36c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    local_360 = 0;
    uStack_354 = 4;
    local_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    local_150[0] = 1;
    local_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 4;
    piVar3 = local_150;
    piVar14 = local_2a0;
    for (iVar12 = 0x35; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar14 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar14 = piVar14 + 1;
    }
    local_254 = iStack_3e8;
    local_24c = iStack_3d4;
    local_2a0[1] = local_3d0;
    local_250 = 5;
    local_284 = &LAB_0044b230;
    if (puStack_3e4 != (undefined1 *)0x0) {
      local_284 = puStack_3e4;
    }
    local_278 = param_2;
    local_280 = local_3e0;
    local_2a0[2] = uStack_3cc;
    local_2a0[3] = iStack_3c8;
    local_288 = 0x101;
    if (local_3f0 == 0) {
      piVar3 = FUN_0042fb60(local_7c);
      piVar2 = *(int **)((int)param_2 + 0x208);
      local_1bc = *(undefined4 *)((int)param_2 + 0x3a8);
      uStack_1b8 = *(undefined4 *)((int)param_2 + 0x3ac);
      uStack_1b4 = *(undefined4 *)((int)param_2 + 0x3b0);
      uStack_1b0 = *(undefined4 *)((int)param_2 + 0x3b4);
      piVar14 = local_1cc;
      for (iVar12 = 0x1f; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar14 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar14 = piVar14 + 1;
      }
      local_1cc[0] = iStack_3dc;
      iVar12 = FUN_00431260((uint *)0x0,0,local_1cc,local_2a0,piVar2);
    }
    else {
      iVar12 = FUN_00430300(local_3f0,local_2a0,piVar2);
    }
    if (iVar12 != 0) {
      pvVar9 = *(LPVOID *)((int)param_2 + 0x208);
      if (pvVar9 != (LPVOID)0x0) {
        if ((undefined4 *)((int)param_2 + 0x3a8) == (undefined4 *)0x0) {
          FUN_0047d191(pvVar9);
        }
        else if (*(code **)((int)param_2 + 0x3b4) != (code *)0x0) {
          (**(code **)((int)param_2 + 0x3b4))(pvVar9,*(undefined4 *)((int)param_2 + 0x3a8));
          *(undefined4 *)((int)param_2 + 0x208) = 0;
          return iVar12;
        }
      }
      *(undefined4 *)((int)param_2 + 0x208) = 0;
      return iVar12;
    }
    *(undefined1 *)((int)param_2 + 0x3b9) = 1;
  }
  puVar11 = (undefined4 *)((int)param_2 + 0x3a8);
  piVar2 = *(int **)((int)param_2 + 0x208);
  iVar12 = local_3d0;
  local_3fc = iStack_3d4;
  if (piVar2 != (int *)0x0) {
    local_3fc = piVar2[0xb5];
    iVar12 = piVar2[2];
  }
  if ((local_3fc == 0) || (iVar12 == 0)) {
    return -2;
  }
  *(int *)((int)param_2 + 0x210) = iVar12;
  if (iStack_3dc == 0) {
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar2 + 0x38);
    }
    *(undefined4 *)((int)param_2 + 0x20c) = uVar4;
  }
  else {
    *(int *)((int)param_2 + 0x20c) = iStack_3dc;
  }
  local_378 = 0x1e000000000;
  if (uStack_3cc < 0x10000) {
    uVar13 = (ushort)uStack_3cc;
  }
  else {
    uVar13 = 0xffff;
  }
  local_3f8 = (uint)uVar13;
  _memset(param_2,0,0x208);
  *(ushort *)((int)param_2 + 0x200) = uVar13;
  if (uVar13 == 0) {
    *(undefined2 *)((int)param_2 + 0x200) = 0x1e0;
  }
  puVar5 = FUN_00432dd0(local_2b8);
  uStack_38c = puVar5[1];
  uStack_388 = puVar5[2];
  uStack_384 = puVar5[3];
  local_390 = &PTR_LAB_0054050c;
  _local_380 = CONCAT44(&local_3fc,(int *)*(undefined8 *)(puVar5 + 4));
  local_410 = FUN_00433150((int)param_2,(int *)&local_390,puVar11,param_2);
  if (local_410 != 0) goto LAB_00434699;
  puVar5 = FUN_00432dd0(local_2b8);
  uStack_38c = puVar5[1];
  uStack_388 = puVar5[2];
  uStack_384 = puVar5[3];
  local_390 = &PTR_LAB_0054051c;
  _local_380 = CONCAT44(&local_3fc,&local_3fc);
  local_410 = FUN_00433150((int)param_2,(int *)&local_390,puVar11,(int *)((int)param_2 + 0x100));
  if (local_410 == 0) {
    local_408 = uStack_3d8;
    if (uStack_3d8 == 0) {
      local_408 = 1;
    }
    else if (4 < uStack_3d8) {
      local_410 = -2;
      goto LAB_00434699;
    }
    local_3f4 = 0;
    if (local_408 != 0) {
      local_404 = (uint *)((int)param_2 + 0x218);
      do {
        if (param_2 == (void *)0xffffff00) {
          local_350[0] = 0;
        }
        else if (*(int *)((int)param_2 + 0x134) == 0) {
          local_350[0] = 0;
        }
        else {
          local_350[0] = (uint)*(byte *)(*(int *)((int)param_2 + 0x13c) + 5);
        }
        local_350[1] = 0;
        local_350[2] = 0;
        local_334 = 0;
        local_330 = 0x3f800000;
        local_32c = 0;
        local_350[3] = _DAT_0050c3e0;
        uStack_340 = _UNK_0050c3e4;
        uStack_33c = _UNK_0050c3e8;
        uStack_338 = _UNK_0050c3ec;
        if (local_350[0] == 0) {
          local_410 = -2;
          goto LAB_004345fb;
        }
        uVar6 = local_350[0] + 7 & 0xfffffff8;
        if (uVar6 != 0) {
          if (puVar11 == (undefined4 *)0x0) {
            puVar7 = (uint *)FUN_00482949(uVar6);
LAB_0043433c:
            if (puVar7 != (uint *)0x0) goto LAB_00434359;
          }
          else if (*(code **)((int)param_2 + 0x3ac) != (code *)0x0) {
            puVar7 = (uint *)(**(code **)((int)param_2 + 0x3ac))(uVar6,*puVar11);
            goto LAB_0043433c;
          }
          local_410 = -4;
          goto LAB_004345fb;
        }
        puVar7 = (uint *)0x0;
LAB_00434359:
        local_410 = FUN_00429a80(local_350,puVar7,local_404);
        if (local_410 != 0) {
          if (puVar7 != (uint *)0x0) {
            if (puVar11 == (undefined4 *)0x0) {
              FUN_0047d191(puVar7);
            }
            else if (*(code **)((int)param_2 + 0x3b4) != (code *)0x0) {
              (**(code **)((int)param_2 + 0x3b4))(puVar7,*puVar11);
            }
          }
          goto LAB_004345fb;
        }
        local_3f4 = local_3f4 + 1;
        local_404[0x17] = 1;
        local_404 = local_404 + 0x19;
        *(int *)((int)param_2 + 0x214) = *(int *)((int)param_2 + 0x214) + 1;
      } while (local_3f4 < local_408);
    }
    *(int *)((int)param_2 + 0x3c8) = iStack_3c4;
    if (iStack_3c4 == 0) {
      iVar12 = local_3c0;
      if (local_3c0 == 0) {
        iVar12 = 8;
      }
      *(uint *)((int)param_2 + 0x3c8) = (uint)(*(int *)((int)param_2 + 0x210) * iVar12) / 1000;
    }
    *(undefined4 *)((int)param_2 + 0x3bc) = 0;
    *(undefined4 *)((int)param_2 + 0x3c0) = 0;
    if (iStack_3a8 != 0) {
      return 0;
    }
    piVar2 = *(int **)((int)param_2 + 0x208);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar3 = piVar2 + 3;
    LOCK();
    iVar12 = *piVar3;
    if (iVar12 == 0) {
      *piVar3 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (iVar12 == 0) {
      local_410 = -3;
    }
    else {
      LOCK();
      iVar12 = *piVar3;
      if (iVar12 == 0) {
        *piVar3 = 0;
        iVar12 = 0;
      }
      UNLOCK();
      if (iVar12 == 2) {
        return 0;
      }
      piVar14 = piVar2 + 8;
      if (piVar14 == (int *)0x0) {
        FID_conflict___assert
                  (L"0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x40d7);
      }
      else {
        WaitForSingleObject((HANDLE)*piVar14,0xffffffff);
      }
      LOCK();
      piVar2[3] = 3;
      UNLOCK();
      iVar12 = *piVar2;
      if (iVar12 == 0) {
        FID_conflict___assert
                  (L"pContext != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x9e71);
      }
      if (((*(int *)(iVar12 + 0x20) == 0) && (*(int *)(iVar12 + 0x24) == 0)) &&
         (*(int *)(iVar12 + 0x28) == 0)) {
        if (*(code **)(*piVar2 + 0x18) == (code *)0x0) {
          local_410 = -3;
        }
        else {
          local_410 = (**(code **)(*piVar2 + 0x18))(piVar2);
          if (local_410 == 0) {
            LOCK();
            piVar2[3] = 2;
            UNLOCK();
            FUN_00435dd0((uint)piVar2);
            goto LAB_004345c7;
          }
        }
LAB_004345bc:
        LOCK();
        *piVar3 = 1;
        UNLOCK();
      }
      else {
        if (piVar2 + 9 == (int *)0x0) {
          FID_conflict___assert
                    (L"0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x4145);
        }
        else {
          BVar10 = SetEvent((HANDLE)piVar2[9]);
          if (BVar10 == 0) {
            GetLastError();
          }
        }
        if (piVar2 + 10 == (int *)0x0) {
          FID_conflict___assert
                    (L"0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x4137);
        }
        else {
          DVar8 = WaitForSingleObject((HANDLE)piVar2[10],0xffffffff);
          if ((DVar8 != 0) && (DVar8 != 0x102)) {
            GetLastError();
          }
        }
        local_410 = piVar2[0xd];
        if (local_410 != 0) goto LAB_004345bc;
      }
LAB_004345c7:
      if (piVar14 == (int *)0x0) {
        FID_conflict___assert
                  (L"0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x40e5);
      }
      else {
        SetEvent((HANDLE)*piVar14);
      }
      if (local_410 == 0) {
        return 0;
      }
    }
LAB_004345fb:
    local_414 = (int)param_2 + 0x100;
    local_408 = 0;
    if (*(int *)((int)param_2 + 0x214) != 0) {
      puVar5 = (undefined4 *)((int)param_2 + 0x278);
      do {
        if (((puVar5 != (undefined4 *)0x60) && (puVar5[-1] != 0)) &&
           (pvVar9 = (LPVOID)*puVar5, pvVar9 != (LPVOID)0x0)) {
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar9);
          }
          else if (*(code **)((int)param_2 + 0x3b4) != (code *)0x0) {
            (**(code **)((int)param_2 + 0x3b4))(pvVar9,*puVar11);
          }
        }
        puVar5 = puVar5 + 0x19;
        local_408 = local_408 + 1;
      } while (local_408 < *(uint *)((int)param_2 + 0x214));
    }
    if ((local_414 == 0) || (FUN_0044a080(local_414), *(int *)((int)param_2 + 0x1fc) == 0))
    goto LAB_00434699;
    pvVar9 = *(LPVOID *)((int)param_2 + 0x1f8);
  }
  else {
    FUN_0044a080((int)param_2);
    if (*(int *)((int)param_2 + 0xfc) == 0) goto LAB_00434699;
    pvVar9 = *(LPVOID *)((int)param_2 + 0xf8);
  }
  if (pvVar9 != (LPVOID)0x0) {
    if (puVar11 == (undefined4 *)0x0) {
      FUN_0047d191(pvVar9);
    }
    else if (*(code **)((int)param_2 + 0x3b4) != (code *)0x0) {
      (**(code **)((int)param_2 + 0x3b4))(pvVar9,*puVar11);
    }
  }
LAB_00434699:
  if (*(char *)((int)param_2 + 0x3b9) != '\0') {
    piVar2 = *(int **)((int)param_2 + 0x208);
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 3;
      LOCK();
      iVar12 = *piVar3;
      if (iVar12 == 0) {
        *piVar3 = 0;
        iVar12 = 0;
      }
      UNLOCK();
      if (iVar12 != 0) {
        LOCK();
        *piVar3 = 0;
        UNLOCK();
        iVar12 = *piVar2;
        if (iVar12 == 0) {
          FID_conflict___assert
                    (L"pContext != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x9e71);
        }
        if (((*(int *)(iVar12 + 0x20) != 0) || (*(int *)(iVar12 + 0x24) != 0)) ||
           (*(int *)(iVar12 + 0x28) != 0)) {
          if (piVar2 + 9 == (int *)0x0) {
            FID_conflict___assert
                      (L"0",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x4145);
          }
          else {
            BVar10 = SetEvent((HANDLE)piVar2[9]);
            if (BVar10 == 0) {
              GetLastError();
            }
          }
          if (piVar2 + 0xc != (int *)0x0) {
            WaitForSingleObject((HANDLE)piVar2[0xc],0xffffffff);
            CloseHandle((HANDLE)piVar2[0xc]);
          }
        }
        if (*(code **)(*piVar2 + 0x14) != (code *)0x0) {
          (**(code **)(*piVar2 + 0x14))(piVar2);
        }
        if (piVar2 + 0xb != (int *)0x0) {
          CloseHandle((HANDLE)piVar2[0xb]);
        }
        if (piVar2 + 10 != (int *)0x0) {
          CloseHandle((HANDLE)piVar2[10]);
        }
        if (piVar2 + 9 != (int *)0x0) {
          CloseHandle((HANDLE)piVar2[9]);
        }
        if (piVar2 + 8 != (int *)0x0) {
          CloseHandle((HANDLE)piVar2[8]);
        }
        iVar12 = *piVar2;
        if (iVar12 == 0) {
          FID_conflict___assert
                    (L"pContext != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x9e71);
        }
        if ((((*(int *)(iVar12 + 0x20) == 0) && (*(int *)(iVar12 + 0x24) == 0)) &&
            ((*(int *)(iVar12 + 0x28) == 0 && ((piVar2[1] == 3 && (piVar2 != (int *)0xffffffb8))))))
           && ((piVar2 + 0x20 != (int *)0x0 && ((char)piVar2[0x26] != '\0')))) {
          pvVar9 = *(LPVOID *)(piVar2[0x20] + -4);
          if (pvVar9 != (LPVOID)0x0) {
            if (piVar2 + 0x27 == (int *)0x0) {
              FUN_0047d191(pvVar9);
            }
            else if ((code *)piVar2[0x2a] != (code *)0x0) {
              (*(code *)piVar2[0x2a])(pvVar9,piVar2[0x27]);
            }
          }
        }
        iVar12 = piVar2[1];
        if (((iVar12 == 2) || (iVar12 == 3)) || (iVar12 == 4)) {
          iVar12 = *piVar2;
          puVar11 = (undefined4 *)(iVar12 + 0x80);
          if (piVar2 != (int *)0xfffff5c0) {
            if ((((*(char *)((int)piVar2 + 0xb23) != '\0') && (piVar2 + 0x2a4 != (int *)0x0)) &&
                ((piVar2[0x2a5] != 0 &&
                 ((*(code **)(piVar2[0x2a5] + 8) != (code *)0x0 &&
                  ((**(code **)(piVar2[0x2a5] + 8))(piVar2[0x2a6],piVar2[0x2a4],puVar11),
                  piVar2[0x2c7] != 0)))))) &&
               (pvVar9 = (LPVOID)piVar2[0x2c6], pvVar9 != (LPVOID)0x0)) {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
            if (((piVar2 != (int *)0xfffff5a0) && (piVar2[0x2a2] != 0)) &&
               (pvVar9 = (LPVOID)piVar2[0x2a1], pvVar9 != (LPVOID)0x0)) {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
            if ((*(char *)((int)piVar2 + 0xb25) != '\0') &&
               (pvVar9 = (LPVOID)piVar2[0x2ca], pvVar9 != (LPVOID)0x0)) {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
          }
        }
        if ((piVar2[1] == 1) || (piVar2[1] == 3)) {
          iVar12 = *piVar2;
          puVar11 = (undefined4 *)(iVar12 + 0x80);
          if (piVar2 != (int *)0xfffffb08) {
            if (((((*(char *)((int)piVar2 + 0x5db) != '\0') && (piVar2 + 0x152 != (int *)0x0)) &&
                 (piVar2[0x153] != 0)) &&
                ((*(code **)(piVar2[0x153] + 8) != (code *)0x0 &&
                 ((**(code **)(piVar2[0x153] + 8))(piVar2[0x154],piVar2[0x152],puVar11),
                 piVar2[0x175] != 0)))) && (pvVar9 = (LPVOID)piVar2[0x174], pvVar9 != (LPVOID)0x0))
            {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
            if (((piVar2 != (int *)0xfffffae8) && (piVar2[0x150] != 0)) &&
               (pvVar9 = (LPVOID)piVar2[0x14f], pvVar9 != (LPVOID)0x0)) {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
            if ((*(char *)((int)piVar2 + 0x5dd) != '\0') &&
               (pvVar9 = (LPVOID)piVar2[0x178], pvVar9 != (LPVOID)0x0)) {
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0047d191(pvVar9);
              }
              else if (*(code **)(iVar12 + 0x8c) != (code *)0x0) {
                (**(code **)(iVar12 + 0x8c))(pvVar9,*puVar11);
              }
            }
          }
        }
        pvVar9 = (LPVOID)piVar2[0x17d];
        if (pvVar9 != (LPVOID)0x0) {
          puVar11 = (undefined4 *)(*piVar2 + 0x80);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar9);
          }
          else {
            pcVar1 = *(code **)(*piVar2 + 0x8c);
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(pvVar9,*puVar11);
            }
          }
        }
        pvVar9 = (LPVOID)piVar2[0x2cc];
        if (pvVar9 != (LPVOID)0x0) {
          puVar11 = (undefined4 *)(*piVar2 + 0x80);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar9);
          }
          else {
            pcVar1 = *(code **)(*piVar2 + 0x8c);
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(pvVar9,*puVar11);
            }
          }
        }
        pvVar9 = (LPVOID)piVar2[0x17a];
        if (pvVar9 != (LPVOID)0x0) {
          puVar11 = (undefined4 *)(*piVar2 + 0x80);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar9);
          }
          else {
            pcVar1 = *(code **)(*piVar2 + 0x8c);
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(pvVar9,*puVar11);
            }
          }
        }
        if ((char)piVar2[0xe] != '\0') {
          iVar12 = *piVar2;
          uStack_328 = *(undefined4 *)(iVar12 + 0x80);
          uStack_324 = *(undefined4 *)(iVar12 + 0x84);
          uStack_320 = *(undefined4 *)(iVar12 + 0x88);
          pcStack_31c = *(code **)(iVar12 + 0x8c);
          FUN_00430110(iVar12);
          if ((*piVar2 != 0) && (pcStack_31c != (code *)0x0)) {
            (*pcStack_31c)(*piVar2,uStack_328);
          }
        }
        _memset(piVar2,0,0xbc0);
      }
    }
    pvVar9 = *(LPVOID *)((int)param_2 + 0x208);
    if (pvVar9 != (LPVOID)0x0) {
      if ((undefined4 *)((int)param_2 + 0x3a8) == (undefined4 *)0x0) {
        FUN_0047d191(pvVar9);
      }
      else if (*(code **)((int)param_2 + 0x3b4) != (code *)0x0) {
        (**(code **)((int)param_2 + 0x3b4))(pvVar9,*(undefined4 *)((int)param_2 + 0x3a8));
        return local_410;
      }
    }
  }
  return local_410;
}


