// Function: FUN_0043fed0
// Entry: 0043fed0
// Size: 297 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0043fed0(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x7a32);
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x7a35);
  }
  if (param_1[0x2d0] != 0) {
    (**(code **)(iVar1 + 0xb0))(param_1[0x2d0]);
  }
  if ((param_1[1] == 2) || (param_1[1] == 3)) {
    pvVar2 = (LPVOID)param_1[0x2d4];
    puVar4 = (undefined4 *)(*param_1 + 0x80);
    if (pvVar2 != (LPVOID)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar2);
      }
      else {
        pcVar3 = *(code **)(*param_1 + 0x8c);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(pvVar2,*puVar4);
        }
      }
    }
    pvVar2 = (LPVOID)param_1[0x2d2];
    puVar4 = (undefined4 *)(*param_1 + 0x80);
    if (pvVar2 != (LPVOID)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar2);
      }
      else {
        pcVar3 = *(code **)(*param_1 + 0x8c);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(pvVar2,*puVar4);
        }
      }
    }
  }
  if ((param_1[1] == 1) || (param_1[1] == 3)) {
    pvVar2 = (LPVOID)param_1[0x2d3];
    puVar4 = (undefined4 *)(*param_1 + 0x80);
    if (pvVar2 != (LPVOID)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar2);
      }
      else {
        pcVar3 = *(code **)(*param_1 + 0x8c);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(pvVar2,*puVar4);
        }
      }
    }
    pvVar2 = (LPVOID)param_1[0x2d1];
    puVar4 = (undefined4 *)(*param_1 + 0x80);
    if (pvVar2 != (LPVOID)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        FUN_0047d191(pvVar2);
      }
      else {
        pcVar3 = *(code **)(*param_1 + 0x8c);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(pvVar2,*puVar4);
          return 0;
        }
      }
    }
  }
  return 0;
}


