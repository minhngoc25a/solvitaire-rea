// Function: FUN_004313d0
// Entry: 004313d0
// Size: 1014 bytes
// Thunk: false
// External: false


void __cdecl FUN_004313d0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  
  if (param_1 != (int *)0x0) {
    piVar1 = param_1 + 3;
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 != 0) {
      LOCK();
      *piVar1 = 0;
      UNLOCK();
      iVar5 = *param_1;
      if (iVar5 == 0) {
        FID_conflict___assert
                  (L"pContext != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x9e71);
      }
      if (((*(int *)(iVar5 + 0x20) != 0) || (*(int *)(iVar5 + 0x24) != 0)) ||
         (*(int *)(iVar5 + 0x28) != 0)) {
        if (param_1 + 9 == (int *)0x0) {
          FID_conflict___assert
                    (L"0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x4145);
        }
        else {
          BVar6 = SetEvent((HANDLE)param_1[9]);
          if (BVar6 == 0) {
            GetLastError();
          }
        }
        piVar1 = param_1 + 0xc;
        if (piVar1 != (int *)0x0) {
          WaitForSingleObject((HANDLE)*piVar1,0xffffffff);
          CloseHandle((HANDLE)*piVar1);
        }
      }
      if (*(code **)(*param_1 + 0x14) != (code *)0x0) {
        (**(code **)(*param_1 + 0x14))(param_1);
      }
      if (param_1 + 0xb != (int *)0x0) {
        CloseHandle((HANDLE)param_1[0xb]);
      }
      if (param_1 + 10 != (int *)0x0) {
        CloseHandle((HANDLE)param_1[10]);
      }
      if (param_1 + 9 != (int *)0x0) {
        CloseHandle((HANDLE)param_1[9]);
      }
      if (param_1 + 8 != (int *)0x0) {
        CloseHandle((HANDLE)param_1[8]);
      }
      iVar5 = *param_1;
      if (iVar5 == 0) {
        FID_conflict___assert
                  (L"pContext != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x9e71);
      }
      if ((((*(int *)(iVar5 + 0x20) == 0) && (*(int *)(iVar5 + 0x24) == 0)) &&
          ((*(int *)(iVar5 + 0x28) == 0 && ((param_1[1] == 3 && (param_1 != (int *)0xffffffb8))))))
         && ((param_1 + 0x20 != (int *)0x0 && ((char)param_1[0x26] != '\0')))) {
        pvVar2 = *(LPVOID *)(param_1[0x20] + -4);
        if (pvVar2 != (LPVOID)0x0) {
          if (param_1 + 0x27 == (int *)0x0) {
            FUN_0047d191(pvVar2);
          }
          else if ((code *)param_1[0x2a] != (code *)0x0) {
            (*(code *)param_1[0x2a])(pvVar2,param_1[0x27]);
          }
        }
      }
      iVar5 = param_1[1];
      if (((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 4)) {
        iVar5 = *param_1;
        puVar7 = (undefined4 *)(iVar5 + 0x80);
        if (param_1 != (int *)0xfffff5c0) {
          if ((((*(char *)((int)param_1 + 0xb23) != '\0') && (param_1 + 0x2a4 != (int *)0x0)) &&
              ((param_1[0x2a5] != 0 &&
               ((pcVar3 = *(code **)(param_1[0x2a5] + 8), pcVar3 != (code *)0x0 &&
                ((*pcVar3)(param_1[0x2a6],param_1[0x2a4],puVar7), param_1[0x2c7] != 0)))))) &&
             (pvVar2 = (LPVOID)param_1[0x2c6], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
          if (((param_1 != (int *)0xfffff5a0) && (param_1[0x2a2] != 0)) &&
             (pvVar2 = (LPVOID)param_1[0x2a1], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
          if ((*(char *)((int)param_1 + 0xb25) != '\0') &&
             (pvVar2 = (LPVOID)param_1[0x2ca], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
        }
      }
      if ((param_1[1] == 1) || (param_1[1] == 3)) {
        iVar5 = *param_1;
        puVar7 = (undefined4 *)(iVar5 + 0x80);
        if (param_1 != (int *)0xfffffb08) {
          if (((((*(char *)((int)param_1 + 0x5db) != '\0') && (param_1 + 0x152 != (int *)0x0)) &&
               (param_1[0x153] != 0)) &&
              ((pcVar3 = *(code **)(param_1[0x153] + 8), pcVar3 != (code *)0x0 &&
               ((*pcVar3)(param_1[0x154],param_1[0x152],puVar7), param_1[0x175] != 0)))) &&
             (pvVar2 = (LPVOID)param_1[0x174], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
          if (((param_1 != (int *)0xfffffae8) && (param_1[0x150] != 0)) &&
             (pvVar2 = (LPVOID)param_1[0x14f], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
          if ((*(char *)((int)param_1 + 0x5dd) != '\0') &&
             (pvVar2 = (LPVOID)param_1[0x178], pvVar2 != (LPVOID)0x0)) {
            if (puVar7 == (undefined4 *)0x0) {
              FUN_0047d191(pvVar2);
            }
            else if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
              (**(code **)(iVar5 + 0x8c))(pvVar2,*puVar7);
            }
          }
        }
      }
      pvVar2 = (LPVOID)param_1[0x17d];
      if (pvVar2 != (LPVOID)0x0) {
        puVar7 = (undefined4 *)(*param_1 + 0x80);
        if (puVar7 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar2);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x8c);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(pvVar2,*puVar7);
          }
        }
      }
      pvVar2 = (LPVOID)param_1[0x2cc];
      if (pvVar2 != (LPVOID)0x0) {
        puVar7 = (undefined4 *)(*param_1 + 0x80);
        if (puVar7 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar2);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x8c);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(pvVar2,*puVar7);
          }
        }
      }
      pvVar2 = (LPVOID)param_1[0x17a];
      if (pvVar2 != (LPVOID)0x0) {
        puVar7 = (undefined4 *)(*param_1 + 0x80);
        if (puVar7 == (undefined4 *)0x0) {
          FUN_0047d191(pvVar2);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x8c);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(pvVar2,*puVar7);
          }
        }
      }
      if ((char)param_1[0xe] != '\0') {
        iVar5 = *param_1;
        uVar4 = *(undefined4 *)(iVar5 + 0x80);
        pcVar3 = *(code **)(iVar5 + 0x8c);
        FUN_00430110(iVar5);
        if ((*param_1 != 0) && (pcVar3 != (code *)0x0)) {
          (*pcVar3)(*param_1,uVar4);
        }
      }
      _memset(param_1,0,0xbc0);
    }
  }
  return;
}


