// Function: FUN_00439460
// Entry: 00439460
// Size: 271 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00439460(short *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  if (param_1 == (short *)0x0) {
    FID_conflict___assert
              (L"pWF != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4e71);
  }
  sVar1 = *param_1;
  if (sVar1 == -2) {
    piVar5 = (int *)(param_1 + 0xc);
    piVar7 = &DAT_0053fd00;
    uVar6 = 0xc;
    piVar4 = piVar5;
    do {
      if (*piVar4 != *piVar7) goto LAB_004394e3;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
      bVar8 = 3 < uVar6;
      uVar6 = uVar6 - 4;
    } while (bVar8);
    sVar1 = param_1[9];
    if (sVar1 == 0x20) {
      return 4;
    }
    if (sVar1 == 0x18) {
      if (param_1[7] == 0x20) {
        return 4;
      }
      if (param_1[7] == 0x18) {
        return 3;
      }
    }
    else {
      if (sVar1 == 0x10) {
        return 2;
      }
      if (sVar1 == 8) {
        return 1;
      }
    }
LAB_004394e3:
    piVar4 = &DAT_0053fd10;
    uVar6 = 0xc;
    do {
      if (*piVar5 != *piVar4) {
        return 0;
      }
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
      bVar8 = 3 < uVar6;
      uVar6 = uVar6 - 4;
    } while (bVar8);
    if (param_1[9] == 0x20) {
      return 5;
    }
  }
  else {
    if (sVar1 == 1) {
      sVar2 = param_1[7];
      if (sVar2 == 0x20) {
        return 4;
      }
      if (sVar2 == 0x18) {
        return 3;
      }
      if (sVar2 == 0x10) {
        return 2;
      }
      if (sVar2 == 8) {
        return 1;
      }
    }
    if (sVar1 == 3) {
      uVar3 = 0;
      if (param_1[7] == 0x20) {
        uVar3 = 5;
      }
      return uVar3;
    }
  }
  return 0;
}


