// Function: FUN_004bbe2b
// Entry: 004bbe2b
// Size: 422 bytes
// Thunk: false
// External: false


void FUN_004bbe2b(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar3 = param_2;
  if (((param_2 >> 8 & 1) != 0) &&
     ((uVar3 = param_2 & 0xffffffc7, *(int *)(param_1 + 0xd4) == 3 ||
      ((*(uint *)(param_1 + 0xd0) & 0x10000) != 0)))) {
    uVar3 = param_2 & 0xfffffec7;
  }
  *(uint *)(param_1 + 0xd8) = uVar3;
  if (((uVar3 & 0x30) == 0) || ((uVar3 & 0x1c2) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(uint *)(param_1 + 0xe4) = uVar3 & 0x80;
  *(uint *)(param_1 + 0xe0) = uVar3 & 0x40;
  if (((uVar3 & 0x40) == 0) && ((uVar3 & 0x80) == 0)) {
    if (*(int *)(param_1 + 0xd4) == 4) {
      if ((uVar3 & 2) == 0) {
        if ((uVar3 >> 8 & 1) == 0) {
          if ((uVar3 & 8) == 0) {
            if ((uVar3 & 0x10) == 0) {
              if ((uVar3 & 0x20) == 0) {
                puVar2 = &LAB_004ba0c4;
                puVar4 = &LAB_004ba06d;
              }
              else {
                puVar2 = &LAB_004ba739;
                puVar4 = &LAB_004ba5fe;
              }
            }
            else {
              puVar2 = &LAB_004ba475;
              puVar4 = &LAB_004ba2ec;
            }
          }
          else {
            puVar2 = &LAB_004ba8ae;
            puVar4 = &LAB_004ba870;
          }
        }
        else {
          puVar2 = &LAB_004ba94e;
          puVar4 = &LAB_004ba8ee;
        }
        goto LAB_004bbf81;
      }
    }
    else if ((uVar3 & 2) == 0) {
      if ((uVar3 & 8) == 0) {
        if ((uVar3 & 0x30) == 0) {
          puVar2 = &LAB_004ba0c4;
          puVar4 = &LAB_004ba06d;
        }
        else {
          puVar2 = &LAB_004ba23e;
          puVar4 = &LAB_004ba1bb;
        }
      }
      else {
        puVar2 = &DAT_004ba2e9;
        puVar4 = &DAT_004ba2e6;
      }
      goto LAB_004bbf81;
    }
    puVar2 = &LAB_004ba16b;
    puVar4 = &LAB_004ba114;
  }
  else {
    puVar2 = &LAB_004ba9bd;
    puVar4 = &LAB_004ba9a6;
  }
LAB_004bbf81:
  *(undefined1 **)(param_1 + 0x4c) = puVar4;
  *(undefined1 **)(param_1 + 0x50) = puVar2;
  if ((*(int *)(param_1 + 0xd4) != 4) || (puVar2 = &LAB_004baa31, (uVar3 & 0x1b8) == 0)) {
    puVar2 = &LAB_004ba9df;
  }
  *(undefined1 **)(param_1 + 0x54) = puVar2;
  FUN_004b94e8(param_1,*(uint *)(param_1 + 0xac));
  FUN_004b9549(param_1,*(uint *)(param_1 + 0xb0));
  return;
}


