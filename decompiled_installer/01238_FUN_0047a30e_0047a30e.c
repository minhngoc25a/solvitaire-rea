// Function: FUN_0047a30e
// Entry: 0047a30e
// Size: 222 bytes
// Thunk: false
// External: false


undefined4 * FUN_0047a30e(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[5];
  param_1[5] = param_2;
  if ((param_2 < 0) || (iVar3 = param_1[4], iVar3 <= param_2)) {
    puVar1 = (undefined4 *)0x0;
  }
  else if (*(char *)(param_1 + 0xc) == '\0') {
    puVar1 = (undefined4 *)param_1[2];
    if (iVar2 < param_2) {
      iVar3 = iVar3 - param_2;
      iVar2 = param_2 - iVar2;
      if (iVar2 < iVar3) {
        for (; (puVar1 != (undefined4 *)0x0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
          puVar1 = (undefined4 *)*puVar1;
        }
      }
      else {
        puVar1 = (undefined4 *)param_1[1];
        while ((iVar3 = iVar3 + -1, puVar1 != (undefined4 *)0x0 && (iVar3 != 0))) {
          puVar1 = (undefined4 *)puVar1[1];
        }
      }
    }
    else {
      iVar2 = iVar2 - param_2;
      if (iVar2 < param_2) {
        for (; (puVar1 != (undefined4 *)0x0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
          puVar1 = (undefined4 *)puVar1[1];
        }
      }
      else {
        puVar1 = (undefined4 *)*param_1;
        for (; (puVar1 != (undefined4 *)0x0 && (param_2 != 0)); param_2 = param_2 + -1) {
          puVar1 = (undefined4 *)*puVar1;
        }
      }
    }
  }
  else if (param_2 < iVar3 / 2) {
    puVar1 = (undefined4 *)*param_1;
    for (; (puVar1 != (undefined4 *)0x0 && (param_2 != 0)); param_2 = param_2 + -1) {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  else {
    puVar1 = (undefined4 *)param_1[1];
    iVar3 = iVar3 - param_2;
    while ((iVar3 = iVar3 + -1, puVar1 != (undefined4 *)0x0 && (iVar3 != 0))) {
      puVar1 = (undefined4 *)puVar1[1];
    }
  }
  param_1[2] = puVar1;
  *(undefined4 **)param_1[3] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
    puVar1 = puVar1 + 2;
  }
  return puVar1;
}


