// Function: FUN_00449d20
// Entry: 00449d20
// Size: 166 bytes
// Thunk: false
// External: false


int __cdecl FUN_00449d20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pInputBus != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x117d7);
  }
  if (param_2 == 0) {
    return 0;
  }
  piVar4 = (int *)(param_1 + 0x28);
  LOCK();
  *piVar4 = *piVar4 + 1;
  UNLOCK();
  LOCK();
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x1c) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  do {
    if (iVar2 == 0) {
LAB_00449d97:
      piVar5 = (int *)(param_2 + 0xc);
      do {
        iVar1 = *piVar5;
        LOCK();
        iVar3 = *piVar5;
        if (iVar1 == iVar3) {
          *piVar5 = iVar1 + -1;
          iVar3 = iVar1;
        }
        UNLOCK();
      } while (iVar3 != iVar1);
      do {
        iVar1 = *piVar4;
        LOCK();
        iVar3 = *piVar4;
        if (iVar1 == iVar3) {
          *piVar4 = iVar1 + -1;
          iVar3 = iVar1;
        }
        UNLOCK();
      } while (iVar3 != iVar1);
      return iVar2;
    }
    LOCK();
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      *(int *)(iVar2 + 0x10) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      UNLOCK();
      goto LAB_00449d97;
    }
    piVar5 = (int *)(iVar2 + 0x1c);
    LOCK();
    iVar2 = *piVar5;
    if (iVar2 == 0) {
      *piVar5 = 0;
      iVar2 = 0;
    }
    UNLOCK();
  } while( true );
}


