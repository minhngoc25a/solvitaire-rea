// Function: FUN_0044b880
// Entry: 0044b880
// Size: 185 bytes
// Thunk: false
// External: false


void FUN_0044b880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_005424ac != 0) {
    if (param_1 == -1) {
      iVar3 = 0;
      if (0 < DAT_00542894) {
        iVar2 = 0;
        iVar1 = DAT_00542894;
        do {
          iVar4 = DAT_00542898 + iVar2;
          if (*(char *)(iVar4 + 0x368) != '\0') {
            FUN_00434f70(iVar4);
            FUN_00416900(iVar4);
            iVar1 = DAT_00542894;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x370;
        } while (iVar3 < iVar1);
        return;
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_00542894) {
        iVar2 = 0;
        iVar1 = DAT_00542894;
        do {
          iVar4 = DAT_00542898 + iVar2;
          if ((((*(byte *)(iVar4 + 0x360) & 4) != 0) && (*(int *)(iVar4 + 0x358) == param_1)) &&
             (*(char *)(iVar4 + 0x368) != '\0')) {
            FUN_00434f70(iVar4);
            FUN_00416900(iVar4);
            iVar1 = DAT_00542894;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x370;
        } while (iVar3 < iVar1);
      }
    }
  }
  return;
}


