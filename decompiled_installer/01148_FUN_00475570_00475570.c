// Function: FUN_00475570
// Entry: 00475570
// Size: 225 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00475570(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1[5];
  if (iVar3 == 0xca) {
    uVar2 = FUN_00475aa0(param_1);
    if ((char)param_1[0x10] != '\0') {
      param_1[5] = 0xcf;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    param_1[5] = 0xcb;
  }
  else if (iVar3 != 0xcb) {
    if (iVar3 != 0xcc) {
      *(undefined4 *)(*param_1 + 0x14) = 0x15;
      *(int *)(*param_1 + 0x18) = param_1[5];
      (**(code **)*param_1)(param_1);
    }
    uVar4 = FUN_00475700((int)param_1);
    return uVar4;
  }
  if (*(char *)(param_1[0x6a] + 0x10) != '\0') {
    while( true ) {
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        (**(code **)param_1[2])(param_1);
      }
      iVar3 = (**(code **)param_1[0x6a])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar3 == 2) break;
      iVar1 = param_1[2];
      if ((iVar1 != 0) && ((iVar3 == 3 || (iVar3 == 1)))) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        iVar3 = *(int *)(param_1[2] + 8);
        if (iVar3 <= *(int *)(iVar1 + 4)) {
          *(int *)(param_1[2] + 8) = param_1[0x4a] + iVar3;
        }
      }
    }
  }
  param_1[0x21] = param_1[0x1f];
  uVar4 = FUN_00475700((int)param_1);
  return uVar4;
}


