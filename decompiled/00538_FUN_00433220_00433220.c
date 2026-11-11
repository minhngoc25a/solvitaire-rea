// Function: FUN_00433220
// Entry: 00433220
// Size: 366 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00433220(int param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    if ((param_1 != param_3) &&
       ((param_2 < *(uint *)(param_1 + 0x34) && (param_4 < *(uint *)(param_3 + 0x30))))) {
      if (*(char *)(param_2 * 0x28 + 5 + *(int *)(param_1 + 0x3c)) ==
          *(char *)(param_4 * 0x34 + 0x30 + *(int *)(param_3 + 0x38))) {
        iVar5 = *(int *)(param_1 + 0x3c) + param_2 * 0x28;
        iVar4 = *(int *)(param_3 + 0x38) + param_4 * 0x34;
        if (iVar4 == 0) {
          FID_conflict___assert
                    (L"pInputBus != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11797);
        }
        if (iVar5 == 0) {
          FID_conflict___assert
                    (L"pOutputBus != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11798);
        }
        piVar1 = (int *)(iVar5 + 0x14);
        FUN_0042fa20(piVar1);
        LOCK();
        iVar3 = *(int *)(iVar5 + 0x24);
        if (iVar3 == 0) {
          *(int *)(iVar5 + 0x24) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (iVar3 != 0) {
          FUN_00449c00(iVar4,iVar5);
        }
        *(int *)(iVar5 + 0x24) = param_3;
        *(char *)(iVar5 + 6) = (char)param_4;
        if (iVar4 == 0) {
          FID_conflict___assert
                    (L"pInputBus != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x1171b);
        }
        FUN_0042fa20((int *)(iVar4 + 0x2c));
        piVar2 = (int *)(iVar4 + 0x1c);
        LOCK();
        iVar3 = *piVar2;
        if (iVar3 == 0) {
          *piVar2 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        LOCK();
        *(int *)(iVar5 + 0x20) = iVar4;
        UNLOCK();
        LOCK();
        *(int *)(iVar5 + 0x1c) = iVar3;
        UNLOCK();
        LOCK();
        *piVar2 = iVar5;
        UNLOCK();
        if (iVar3 != 0) {
          LOCK();
          *(int *)(iVar3 + 0x20) = iVar5;
          UNLOCK();
        }
        if (iVar4 == 0) {
          FID_conflict___assert
                    (L"pInputBus != ((void *)0)",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11722);
        }
        if ((undefined4 *)(iVar4 + 0x2c) != (undefined4 *)0x0) {
          LOCK();
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          UNLOCK();
        }
        LOCK();
        *(undefined4 *)(iVar5 + 0x10) = 1;
        UNLOCK();
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = 0;
          UNLOCK();
        }
        return 0;
      }
    }
    return 0xfffffffd;
  }
  return 0xfffffffe;
}


