// Function: FUN_0042b130
// Entry: 0042b130
// Size: 245 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042b130(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  if (param_3 != (void *)0x0) {
    _memset(param_3,0,0x90);
    if (param_1 != (undefined4 *)0x0) {
      *(undefined4 *)((int)param_3 + 0x88) = param_2;
      *(undefined4 *)((int)param_3 + 0xc) = *param_1;
      *(undefined4 *)((int)param_3 + 0x10) = param_1[1];
      puVar1 = (undefined4 *)((int)param_3 + 4);
      *(undefined4 *)((int)param_3 + 0x14) = param_1[2];
      *(undefined4 *)((int)param_3 + 0x18) = param_1[3];
      puVar2 = (undefined4 *)((int)param_3 + 8);
      if (puVar1 == (undefined4 *)0x0) {
        FID_conflict___assert
                  (L"ppVTable != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xcb17);
      }
      if (puVar2 == (undefined4 *)0x0) {
        FID_conflict___assert
                  (L"ppUserData != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xcb18);
      }
      *puVar1 = 0;
      *puVar2 = 0;
      if (param_1[4] == 0) {
        *puVar1 = &PTR_FUN_0053ffb0;
        ppuVar3 = &PTR_FUN_0053ffb0;
        pvVar5 = param_3;
      }
      else {
        if (param_1[4] != 1) {
          return 0xfffffffe;
        }
        ppuVar3 = (undefined **)param_1[5];
        *puVar1 = ppuVar3;
        pvVar5 = (void *)param_1[6];
      }
      *puVar2 = pvVar5;
      if ((ppuVar3 != (undefined **)0x0) && ((code *)ppuVar3[1] != (code *)0x0)) {
        uVar4 = (*(code *)ppuVar3[1])(pvVar5,param_1,param_2,param_3);
        return uVar4;
      }
      return 0xffffffe3;
    }
  }
  return 0xfffffffe;
}


