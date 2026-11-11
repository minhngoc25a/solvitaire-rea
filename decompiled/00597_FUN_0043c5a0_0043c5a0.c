// Function: FUN_0043c5a0
// Entry: 0043c5a0
// Size: 636 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0043c5a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  
  piVar4 = param_1;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               23000);
  }
  if (piVar4[0x2ee] != 0) {
    (**(code **)(*piVar4 + 0x124))(piVar4[0x2ee]);
    piVar4[0x2ee] = 0;
  }
  iVar5 = piVar4[1];
  if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
LAB_0043c69e:
    if ((piVar4[1] != 1) && (piVar4[1] != 3)) {
      return 0;
    }
    LOCK();
    iVar5 = piVar4[0x2e9];
    if (iVar5 == 0) {
      piVar4[0x2e9] = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 != 0) {
      uVar1 = piVar4[0x2da];
      uVar2 = piVar4[0xf8];
      if (piVar4[0xb3] == 1) {
        WaitForSingleObject((HANDLE)piVar4[0x2d8],uVar1 / uVar2);
      }
      else {
        piVar8 = (int *)0xffffffff;
        while( true ) {
          piVar3 = (int *)piVar4[0x2d0];
          if (piVar4[0xb3] != 0) break;
          iVar5 = (**(code **)(*piVar3 + 0x18))(piVar3,&param_1);
          if (iVar5 < 0) {
            iVar5 = FUN_00435aa0(iVar5);
            piVar9 = (int *)0x0;
            if (iVar5 != 0) break;
          }
          else {
            piVar9 = param_1;
            if (piVar3 == (int *)piVar4[0x2d0]) {
              piVar9 = (int *)(piVar4[0x2da] - (int)param_1);
            }
          }
          if (((int *)piVar4[0x2da] <= piVar9) || (piVar9 == piVar8)) break;
          WaitForSingleObject((HANDLE)piVar4[0x2d8],(uVar1 / uVar2) * 1000);
          ResetEvent((HANDLE)piVar4[0x2d8]);
          piVar8 = piVar9;
        }
      }
    }
    iVar5 = (**(code **)(*(int *)piVar4[0x2d0] + 0x2c))((int *)piVar4[0x2d0]);
    if (iVar5 < 0) {
      if (*piVar4 == 0) {
        pcVar10 = "[WASAPI] Failed to stop internal playback device.";
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*piVar4 + 0x38);
        pcVar10 = "[WASAPI] Failed to stop internal playback device.";
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)piVar4[0x2d0] + 0x30))((int *)piVar4[0x2d0]);
      if (-1 < iVar5) {
        if (piVar4[0x2e5] != 0) {
          (**(code **)(*(int *)piVar4[0x2d2] + 0x10))((int *)piVar4[0x2d2],piVar4[0x2e6],0);
          piVar4[0x2e5] = 0;
          piVar4[0x2e6] = 0;
          piVar4[0x2e7] = 0;
        }
        LOCK();
        piVar4[0x2e9] = 0;
        UNLOCK();
        return 0;
      }
      iVar7 = 0;
      if (*piVar4 != 0) {
        iVar7 = *(int *)(*piVar4 + 0x38);
      }
      pcVar10 = "[WASAPI] Failed to reset internal playback device.";
    }
    FUN_004276f0(iVar7,1,(int)pcVar10);
    uVar6 = FUN_00435aa0(iVar5);
    return uVar6;
  }
  iVar5 = (**(code **)(*(int *)piVar4[0x2d1] + 0x2c))((int *)piVar4[0x2d1]);
  if (iVar5 < 0) {
    iVar7 = 0;
    if (*piVar4 != 0) {
      iVar7 = *(int *)(*piVar4 + 0x38);
    }
    pcVar10 = "[WASAPI] Failed to stop internal capture device.";
  }
  else {
    iVar5 = (**(code **)(*(int *)piVar4[0x2d1] + 0x30))((int *)piVar4[0x2d1]);
    if (-1 < iVar5) {
      if (piVar4[0x2e2] != 0) {
        (**(code **)(*(int *)piVar4[0x2d3] + 0x10))((int *)piVar4[0x2d3],piVar4[0x2e3]);
        piVar4[0x2e2] = 0;
        piVar4[0x2e3] = 0;
        piVar4[0x2e4] = 0;
      }
      LOCK();
      piVar4[0x2e8] = 0;
      UNLOCK();
      goto LAB_0043c69e;
    }
    if (*piVar4 == 0) {
      pcVar10 = "[WASAPI] Failed to reset internal capture device.";
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*piVar4 + 0x38);
      pcVar10 = "[WASAPI] Failed to reset internal capture device.";
    }
  }
  FUN_004276f0(iVar7,1,(int)pcVar10);
  uVar6 = FUN_00435aa0(iVar5);
  return uVar6;
}


