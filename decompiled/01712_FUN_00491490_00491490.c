// Function: FUN_00491490
// Entry: 00491490
// Size: 451 bytes
// Thunk: false
// External: false


void __cdecl FUN_00491490(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((uVar1 & 0x10) != 0) {
    *(undefined1 **)(param_1 + 0x28) = &LAB_0048f430;
    *(undefined4 *)(param_1 + 0x30) = 1;
    return;
  }
  if ((uVar1 & 0x1400) != 0) {
    if ((uVar1 & 0x200) != 0) {
      *(undefined1 **)(param_1 + 0x28) = &LAB_00491210;
      *(undefined4 *)(param_1 + 0x30) = 1;
      return;
    }
    if ((uVar1 & 8) != 0) {
      if ((uVar1 & 0x400) == 0) {
        *(undefined1 **)(param_1 + 0x28) = &LAB_0048ec40;
        *(undefined4 *)(param_1 + 0x30) = 1;
        return;
      }
      *(undefined1 **)(param_1 + 0x28) = &LAB_0048ec20;
      *(undefined4 *)(param_1 + 0x30) = 1;
      return;
    }
    if ((uVar1 & 4) == 0) {
      return;
    }
    if ((uVar1 & 0x400) == 0) {
      *(undefined1 **)(param_1 + 0x28) = &LAB_0048ecc0;
      *(undefined4 *)(param_1 + 0x30) = 1;
      return;
    }
    *(undefined1 **)(param_1 + 0x28) = &LAB_0048eca0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    return;
  }
  if ((uVar1 & 0x2800) == 0) {
    if ((uVar1 & 0x200) != 0) {
      if ((char)uVar1 < '\0') {
        *(code **)(param_1 + 0x28) = FUN_00490810;
LAB_00491602:
        *(undefined4 *)(param_1 + 0x30) = 1;
      }
      else if ((uVar1 & 0x40) != 0) {
        *(code **)(param_1 + 0x28) = FUN_0048f700;
        goto LAB_00491602;
      }
      if ((uVar1 & 0x100) != 0) {
        if ((uVar1 & 0xc0) != 0) {
          return;
        }
        *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048f530;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        return;
      }
    }
    if ((uVar1 & 8) != 0) {
      *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048eae0;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      return;
    }
    if (((uVar1 & 4) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
      *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048ece0;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      return;
    }
    goto LAB_004915d9;
  }
  if ((char)uVar1 < '\0') {
    *(code **)(param_1 + 0x28) = FUN_00490810;
LAB_00491550:
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else if ((uVar1 & 0x40) != 0) {
    *(code **)(param_1 + 0x28) = FUN_0048f700;
    goto LAB_00491550;
  }
  if ((uVar1 & 0x100) != 0) {
    if ((uVar1 & 0xc0) != 0) {
      return;
    }
    *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_00491210;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return;
  }
  if ((uVar1 & 8) != 0) {
    if ((uVar1 & 0x800) == 0) {
      *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048ec00;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      return;
    }
    *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048ebe0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return;
  }
  if ((uVar1 & 0x804) == 0x804) {
    *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048ec60;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return;
  }
  if ((uVar1 & 0x2004) == 0x2004) {
    *(undefined1 **)(param_1 + 0x28 + *(int *)(param_1 + 0x30) * 4) = &LAB_0048ec80;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return;
  }
LAB_004915d9:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


