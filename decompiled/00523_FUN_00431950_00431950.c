// Function: FUN_00431950
// Entry: 00431950
// Size: 436 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00431950(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  piVar1 = param_1 + 3;
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 == 0) {
    return 0xfffffffd;
  }
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 == 1) {
    return 0;
  }
  piVar2 = param_1 + 8;
  if (piVar2 == (int *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40d7);
  }
  else {
    WaitForSingleObject((HANDLE)*piVar2,0xffffffff);
  }
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 != 2) {
    FID_conflict___assert
              (L"ma_device_get_state(pDevice) == ma_device_state_started",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa589);
  }
  LOCK();
  *piVar1 = 4;
  UNLOCK();
  iVar4 = *param_1;
  if (iVar4 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x9e71);
  }
  if (((*(int *)(iVar4 + 0x20) == 0) && (*(int *)(iVar4 + 0x24) == 0)) &&
     (*(int *)(iVar4 + 0x28) == 0)) {
    if (*(code **)(*param_1 + 0x1c) == (code *)0x0) {
      uVar3 = 0xfffffffd;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
    }
    LOCK();
    *piVar1 = 1;
    UNLOCK();
  }
  else {
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 == 2) {
      FID_conflict___assert
                (L"ma_device_get_state(pDevice) != ma_device_state_started",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa59e);
    }
    if (*(code **)(*param_1 + 0x2c) != (code *)0x0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    if (param_1 + 0xb == (int *)0x0) {
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x4137);
    }
    else {
      DVar5 = WaitForSingleObject((HANDLE)param_1[0xb],0xffffffff);
      if ((DVar5 != 0) && (DVar5 != 0x102)) {
        GetLastError();
      }
    }
    uVar3 = 0;
  }
  param_1[0x17c] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  if (piVar2 != (int *)0x0) {
    SetEvent((HANDLE)*piVar2);
    return uVar3;
  }
  FID_conflict___assert
            (L"0",L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
             0x40e5);
  return uVar3;
}


