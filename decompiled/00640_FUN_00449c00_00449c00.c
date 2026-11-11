// Function: FUN_00449c00
// Entry: 00449c00
// Size: 287 bytes
// Thunk: false
// External: false


void __cdecl FUN_00449c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pInputBus != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11740);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pOutputBus != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11741);
  }
  LOCK();
  *(undefined4 *)(param_2 + 0x10) = 0;
  UNLOCK();
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pInputBus != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1171b);
  }
  piVar3 = (int *)(param_1 + 0x2c);
  FUN_0042fa20(piVar3);
  LOCK();
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x20) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  LOCK();
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    *(int *)(param_2 + 0x1c) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 0x1c) = iVar1;
    UNLOCK();
  }
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 0x20) = iVar2;
    UNLOCK();
  }
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pInputBus != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11722);
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = 0;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_2 + 0x1c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_2 + 0x20) = 0;
  UNLOCK();
  *(undefined4 *)(param_2 + 0x24) = 0;
  piVar3 = (int *)(param_1 + 0x28);
  *(undefined1 *)(param_2 + 6) = 0;
  LOCK();
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    *piVar3 = 0;
    iVar2 = 0;
  }
  UNLOCK();
  while (iVar2 != 0) {
    LOCK();
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      *piVar3 = 0;
      iVar2 = 0;
    }
    UNLOCK();
  }
  piVar3 = (int *)(param_2 + 0xc);
  LOCK();
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    *piVar3 = 0;
    iVar2 = 0;
  }
  UNLOCK();
  while (iVar2 != 0) {
    LOCK();
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      *piVar3 = 0;
      iVar2 = 0;
    }
    UNLOCK();
  }
  return;
}


