// Function: FUN_00445e70
// Entry: 00445e70
// Size: 322 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00445e70(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == (uint *)0x0) {
    FID_conflict___assert
              (L"pHeapLayout != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xcfce);
  }
  if (((param_1 == 0) || (uVar4 = *(uint *)(param_1 + 4), uVar4 == 0)) ||
     (uVar3 = *(uint *)(param_1 + 8), uVar3 == 0)) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (1 < uVar4) {
    uVar3 = 0;
    do {
      if (iVar2 == 0) {
        cVar1 = FUN_00448a20(0,uVar4,uVar3);
LAB_00445ed8:
        if (cVar1 == '\x01') {
          return 0xfffffffe;
        }
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else if (uVar3 < uVar4) {
        cVar1 = *(char *)(uVar3 + iVar2);
        goto LAB_00445ed8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar3 = *(uint *)(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (1 < uVar3) {
    uVar4 = 0;
    do {
      if (iVar2 == 0) {
        cVar1 = FUN_00448a20(0,uVar3,uVar4);
        uVar3 = *(uint *)(param_1 + 8);
LAB_00445f10:
        if (cVar1 == '\x01') {
          return 0xfffffffe;
        }
      }
      else if (uVar4 < uVar3) {
        cVar1 = *(char *)(uVar4 + iVar2);
        goto LAB_00445f10;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = *(uint *)(param_1 + 4);
    *param_2 = uVar4;
  }
  param_2[2] = uVar4;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = uVar4 + *(int *)(param_1 + 8);
  }
  *param_2 = uVar4 + 7 & 0xfffffff8;
  iVar2 = FUN_00445d20(param_1);
  uVar4 = *param_2;
  param_2[3] = uVar4;
  if (iVar2 != 4) {
    param_2[4] = uVar4;
    if (iVar2 == 5) {
      uVar4 = uVar4 + *(int *)(param_1 + 4) * 4;
      *param_2 = uVar4;
      uVar4 = uVar4 + *(int *)(param_1 + 4) * *(int *)(param_1 + 8) * 4;
    }
    *param_2 = uVar4 + 7 & 0xfffffff8;
    return 0;
  }
  uVar4 = *(int *)(param_1 + 8) + uVar4;
  param_2[4] = uVar4;
  *param_2 = uVar4 + 7 & 0xfffffff8;
  return 0;
}


