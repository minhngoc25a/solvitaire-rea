// Function: FUN_00436c10
// Entry: 00436c10
// Size: 1060 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00436c10(int *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *_Dst;
  uint uVar6;
  char *pcVar7;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18 [6];
  
  iVar3 = param_4;
  param_4 = 0;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a3d);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"frameCountInDeviceFormat > 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a3e);
  }
  if (param_3 == (uint *)0x0) {
    FID_conflict___assert
              (L"pFramesInDeviceFormat != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a3f);
  }
  if (iVar3 == 0) {
    FID_conflict___assert
              (L"pRB != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4a40);
  }
  while( true ) {
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    if (iVar3 == 0) break;
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    uVar6 = local_18[*(int *)(iVar3 + 100)] * *(int *)(iVar3 + 0x68) *
            (int)(0x1000 / (ulonglong)(local_18[param_1[0x206]] * param_1[0x207]));
    if (iVar3 == -0x38) break;
    LOCK();
    uVar4 = *(uint *)(iVar3 + 0x48);
    if (uVar4 == 0) {
      *(uint *)(iVar3 + 0x48) = 0;
      uVar4 = 0;
    }
    UNLOCK();
    uVar5 = uVar4 & 0x7fffffff;
    LOCK();
    uVar1 = *(uint *)(iVar3 + 0x4c);
    if (uVar1 == 0) {
      *(uint *)(iVar3 + 0x4c) = 0;
      uVar1 = 0;
    }
    UNLOCK();
    if ((uVar1 & 0x80000000) == (uVar4 & 0x80000000)) {
      uVar5 = *(uint *)(iVar3 + 0x3c);
    }
    uVar5 = uVar5 - (uVar1 & 0x7fffffff);
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      uVar6 = uVar5;
    }
    LOCK();
    uVar4 = *(uint *)(iVar3 + 0x4c);
    if (uVar4 == 0) {
      *(uint *)(iVar3 + 0x4c) = 0;
      uVar4 = 0;
    }
    UNLOCK();
    _Dst = (uint *)((uVar4 & 0x7fffffff) + *(int *)(iVar3 + 0x38));
    if (*(char *)(iVar3 + 0x51) != '\0') {
      if (_Dst == (uint *)0x0) {
        if (uVar6 != 0) {
          FID_conflict___assert
                    (L"sz == 0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x2fbb);
        }
      }
      else if (uVar6 != 0) {
        _memset(_Dst,0,uVar6);
      }
    }
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    uVar6 = uVar6 / (local_18[*(int *)(iVar3 + 100)] * *(int *)(iVar3 + 0x68));
    if (uVar6 == 0) {
      local_18[0] = uVar6;
      uVar4 = *(uint *)(iVar3 + 0x3c);
      local_18[1] = 1;
      local_18[2] = 2;
      local_18[3] = 3;
      local_18[4] = 4;
      local_18[5] = 4;
      uVar1 = local_18[*(int *)(iVar3 + 100)];
      iVar2 = *(int *)(iVar3 + 0x68);
      uVar5 = FUN_0042f8c0(iVar3);
      if (uVar5 == uVar4 / (uVar1 * iVar2)) {
        return 0;
      }
    }
    local_1c = 0;
    local_24 = 0;
    local_28 = uVar6;
    local_20 = param_2 - param_4;
    local_18[0] = FUN_0042c1d0((uint *)(param_1 + 0x290),param_3,&local_20,_Dst,&local_28);
    if (local_18[0] != 0) {
      return 0;
    }
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    uVar4 = local_18[*(int *)(iVar3 + 100)];
    LOCK();
    uVar6 = *(uint *)(iVar3 + 0x4c);
    if (uVar6 == 0) {
      *(uint *)(iVar3 + 0x4c) = 0;
      uVar6 = 0;
    }
    UNLOCK();
    uVar1 = *(uint *)(iVar3 + 0x3c);
    uVar4 = uVar4 * *(int *)(iVar3 + 0x68) * local_28 + (uVar6 & 0x7fffffff);
    if (uVar1 < uVar4) {
LAB_00436ff8:
      if (*param_1 == 0) {
        pcVar7 = "Failed to commit capture PCM frames to ring buffer.";
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*param_1 + 0x38);
        pcVar7 = "Failed to commit capture PCM frames to ring buffer.";
      }
      goto LAB_0043701f;
    }
    uVar5 = uVar6 & 0x80000000 ^ 0x80000000;
    if (uVar4 != uVar1) {
      uVar5 = uVar6 & 0x80000000;
    }
    uVar6 = 0;
    if (uVar4 != uVar1) {
      uVar6 = uVar4;
    }
    LOCK();
    *(uint *)(iVar3 + 0x4c) = uVar5 | uVar6;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(iVar3 + 0x48);
    if (uVar6 == 0) {
      *(uint *)(iVar3 + 0x48) = 0;
      uVar6 = 0;
    }
    UNLOCK();
    LOCK();
    uVar4 = *(uint *)(iVar3 + 0x4c);
    if (uVar4 == 0) {
      *(uint *)(iVar3 + 0x4c) = 0;
      uVar4 = 0;
    }
    UNLOCK();
    if ((uVar6 & 0x80000000) == (uVar4 & 0x80000000)) {
      iVar2 = -(uVar6 & 0x7fffffff);
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x3c) - (uVar6 & 0x7fffffff);
    }
    if ((uVar4 & 0x7fffffff) + iVar2 == 0) goto LAB_00436ff8;
    param_4 = param_4 + local_20;
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    param_3 = (uint *)((int)param_3 + local_18[param_1[0x248]] * param_1[0x249] * local_20);
    if ((local_28 == 0 && local_24 == 0) && (local_20 == 0 && local_1c == 0)) {
      return 0;
    }
  }
  local_18[0] = 0;
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + 0x38);
  }
  pcVar7 = "Failed to acquire capture PCM frames from ring buffer.";
LAB_0043701f:
  local_18[5] = 4;
  local_18[4] = 4;
  local_18[3] = 3;
  local_18[2] = 2;
  local_18[1] = 1;
  FUN_004276f0(iVar3,1,(int)pcVar7);
  return 0;
}


