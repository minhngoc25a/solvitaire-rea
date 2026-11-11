// Function: FUN_004317d0
// Entry: 004317d0
// Size: 382 bytes
// Thunk: false
// External: false


int __cdecl FUN_004317d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  
  if (param_1 == (int *)0x0) {
    return -2;
  }
  piVar1 = param_1 + 3;
  LOCK();
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 == 0) {
    return -3;
  }
  LOCK();
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 == 2) {
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
  *piVar1 = 3;
  UNLOCK();
  iVar3 = *param_1;
  if (iVar3 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x9e71);
  }
  if (((*(int *)(iVar3 + 0x20) == 0) && (*(int *)(iVar3 + 0x24) == 0)) &&
     (*(int *)(iVar3 + 0x28) == 0)) {
    if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
      iVar3 = -3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      if (iVar3 == 0) {
        LOCK();
        *piVar1 = 2;
        UNLOCK();
        FUN_00435dd0((uint)param_1);
        goto LAB_0043191d;
      }
    }
  }
  else {
    if (param_1 + 9 == (int *)0x0) {
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x4145);
    }
    else {
      BVar4 = SetEvent((HANDLE)param_1[9]);
      if (BVar4 == 0) {
        GetLastError();
      }
    }
    if (param_1 + 10 == (int *)0x0) {
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x4137);
    }
    else {
      DVar5 = WaitForSingleObject((HANDLE)param_1[10],0xffffffff);
      if ((DVar5 != 0) && (DVar5 != 0x102)) {
        GetLastError();
      }
    }
    iVar3 = param_1[0xd];
    if (iVar3 == 0) goto LAB_0043191d;
  }
  LOCK();
  *piVar1 = 1;
  UNLOCK();
LAB_0043191d:
  if (piVar2 != (int *)0x0) {
    SetEvent((HANDLE)*piVar2);
    return iVar3;
  }
  FID_conflict___assert
            (L"0",L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
             0x40e5);
  return iVar3;
}


