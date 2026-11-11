// Function: FUN_00437040
// Entry: 00437040
// Size: 890 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00437040(uint param_1,uint param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_1034;
  int local_1030 [7];
  uint local_1014;
  int local_1010;
  int local_100c;
  uint local_1008 [2];
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x43704a;
  local_1034 = 0;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a76);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"frameCount > 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a77);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFramesInInternalFormat != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a78);
  }
  if (param_4 == 0) {
    FID_conflict___assert
              (L"pRB != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a79);
  }
  if (*(int *)(param_1 + 0x5f4) == 0) {
    FID_conflict___assert
              (L"pDevice->playback.pInputCache != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a7a);
  }
  _memset(local_1000,0,0x1000);
  if (param_2 != 0) {
    while( true ) {
      LOCK();
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xc) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (iVar2 != 2) break;
      if (*(int *)(param_1 + 0x60c) == 0) {
        iVar5 = 0;
        iVar2 = 0;
        if (*(uint *)(param_1 + 0x608) != 0) goto LAB_00437145;
      }
      else {
LAB_00437145:
        local_1030[0] = 0;
        local_1008[0] = param_2 - local_1034;
        local_1030[1] = 1;
        local_1030[2] = 2;
        local_1030[3] = 3;
        local_1030[4] = 4;
        local_1030[5] = 4;
        local_1008[1] = 0;
        local_1014 = *(uint *)(param_1 + 0x608);
        local_1010 = *(int *)(param_1 + 0x60c);
        FUN_0042c1d0((uint *)(param_1 + 0x4f8),
                     (uint *)(local_1030[*(int *)(param_1 + 0x2d0)] * *(int *)(param_1 + 0x2d4) *
                              *(int *)(param_1 + 0x600) + *(int *)(param_1 + 0x5f4)),&local_1014,
                     param_3,local_1008);
        puVar1 = (uint *)(param_1 + 0x600);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + local_1014;
        *(int *)(param_1 + 0x604) =
             *(int *)(param_1 + 0x604) + local_1010 + (uint)CARRY4(uVar4,local_1014);
        puVar1 = (uint *)(param_1 + 0x608);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - local_1014;
        *(int *)(param_1 + 0x60c) =
             (*(int *)(param_1 + 0x60c) - local_1010) - (uint)(uVar4 < local_1014);
        local_1034 = local_1034 + local_1008[0];
        iVar2 = *(int *)(param_1 + 0x608);
        iVar5 = *(int *)(param_1 + 0x60c);
        local_1030[0] = 0;
        local_1030[1] = 1;
        local_1030[2] = 2;
        local_1030[3] = 3;
        local_1030[4] = 4;
        local_1030[5] = 4;
        param_3 = (uint *)((int)param_3 +
                          local_1030[*(int *)(param_1 + 0x3d8)] * *(int *)(param_1 + 0x3dc) *
                          local_1008[0]);
      }
      if (param_2 <= local_1034) {
        return 0;
      }
      if (iVar2 == 0 && iVar5 == 0) {
        local_1030[6] = *(uint *)(param_1 + 0x5f8);
        iVar2 = FUN_0042f660(param_4,(uint *)(local_1030 + 6),&local_100c);
        uVar4 = local_1030[6];
        if (iVar2 == 0) {
          if (local_1030[6] == 0) {
            uVar3 = FUN_0042f8c0(param_4);
            if (uVar3 == 0) {
              return 0;
            }
          }
          else {
            FUN_00436270(param_1,*(void **)(param_1 + 0x5f4),local_100c,local_1030[6]);
          }
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x5f8);
          local_1030[0] = 0;
          local_1030[1] = 1;
          local_1030[2] = 2;
          local_1030[3] = 3;
          local_1030[4] = 4;
          local_1030[5] = 4;
          if ((*(int *)(param_1 + 0x5fc) != 0) ||
             ((uint)(0x1000 / (ulonglong)
                              (uint)(local_1030[*(int *)(param_1 + 0x818)] *
                                    *(int *)(param_1 + 0x81c))) <= uVar4)) {
            local_1030[0] = 0;
            local_1030[1] = 1;
            local_1030[2] = 2;
            local_1030[3] = 3;
            local_1030[4] = 4;
            local_1030[5] = 4;
            uVar4 = (uint)(0x1000 / (ulonglong)
                                    (uint)(local_1030[*(int *)(param_1 + 0x818)] *
                                          *(int *)(param_1 + 0x81c)));
          }
          local_1030[5] = 4;
          local_1030[4] = 4;
          local_1030[3] = 3;
          local_1030[2] = 2;
          local_1030[1] = 1;
          local_1030[0] = 0;
          FUN_00436270(param_1,*(void **)(param_1 + 0x5f4),(int)local_1000,uVar4);
        }
        *(undefined4 *)(param_1 + 0x600) = 0;
        *(undefined4 *)(param_1 + 0x604) = 0;
        *(uint *)(param_1 + 0x608) = uVar4;
        *(undefined4 *)(param_1 + 0x60c) = 0;
        iVar2 = FUN_0042f7a0(param_4,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
  }
  return 0;
}


