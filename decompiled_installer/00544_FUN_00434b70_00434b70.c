// Function: FUN_00434b70
// Entry: 00434b70
// Size: 414 bytes
// Thunk: false
// External: false


void __cdecl FUN_00434b70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x3b9) == '\0') {
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        FUN_00431950(*(int **)(param_1 + 0x208));
      }
    }
    else {
      FUN_004313d0(*(int **)(param_1 + 0x208));
      pvVar3 = *(LPVOID *)(param_1 + 0x208);
      if (pvVar3 != (LPVOID)0x0) {
        if ((undefined4 *)(param_1 + 0x3a8) == (undefined4 *)0x0) {
          FUN_0047d191(pvVar3);
        }
        else if (*(code **)(param_1 + 0x3b4) != (code *)0x0) {
          (**(code **)(param_1 + 0x3b4))(pvVar3,*(undefined4 *)(param_1 + 0x3a8));
        }
      }
    }
    piVar1 = (int *)(param_1 + 0x3bc);
    FUN_0042fa20(piVar1);
    puVar2 = (undefined4 *)(param_1 + 0x3a8);
    pvVar3 = *(LPVOID *)(param_1 + 0x3c0);
    while (pvVar3 != (LPVOID)0x0) {
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)((int)pvVar3 + 0x2d8);
      FUN_00433b50((int)pvVar3,(undefined4 *)(*(int *)((int)pvVar3 + 0x100) + 0x3a8));
      if (*(char *)((int)pvVar3 + 0x2d4) != '\0') {
        FID_conflict___assert
                  (L"pSound->ownsDataSource == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x12944);
      }
      if (puVar2 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar3);
      }
      else if (*(code **)(param_1 + 0x3b4) != (code *)0x0) {
        (**(code **)(param_1 + 0x3b4))(pvVar3,*puVar2);
      }
      pvVar3 = *(LPVOID *)(param_1 + 0x3c0);
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = 0;
      UNLOCK();
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x214) != 0) {
      puVar5 = (undefined4 *)(param_1 + 0x278);
      do {
        if (((puVar5 != (undefined4 *)0x60) && (puVar5[-1] != 0)) &&
           (pvVar3 = (LPVOID)*puVar5, pvVar3 != (LPVOID)0x0)) {
          if (puVar2 == (undefined4 *)0x0) {
            FUN_0047d191(pvVar3);
          }
          else if (*(code **)(param_1 + 0x3b4) != (code *)0x0) {
            (**(code **)(param_1 + 0x3b4))(pvVar3,*puVar2);
          }
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x19;
      } while (uVar4 < *(uint *)(param_1 + 0x214));
    }
    if (((param_1 + 0x100 != 0) && (FUN_0044a080(param_1 + 0x100), *(int *)(param_1 + 0x1fc) != 0))
       && (pvVar3 = *(LPVOID *)(param_1 + 0x1f8), pvVar3 != (LPVOID)0x0)) {
      if ((undefined4 *)(param_1 + 0x3a8) == (undefined4 *)0x0) {
        FUN_0047d191(pvVar3);
        return;
      }
      if (*(code **)(param_1 + 0x3b4) != (code *)0x0) {
        (**(code **)(param_1 + 0x3b4))(pvVar3,*(undefined4 *)(param_1 + 0x3a8));
      }
    }
  }
  return;
}


