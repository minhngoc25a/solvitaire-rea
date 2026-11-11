// Function: FUN_00492da0
// Entry: 00492da0
// Size: 335 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_00492da0(int param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 0x3c00) == 0) {
    if ((param_2 & 0x300) == 0) {
      return (undefined4 *)0x0;
    }
    if ((*(uint *)(param_1 + 0x18) & 0xfffffcff) != 0) {
      return (undefined4 *)0x0;
    }
    uVar1 = param_3 & 0xfffffff8;
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0xffffc3ff) != 0) {
      return (undefined4 *)0x0;
    }
    uVar1 = param_3 & 0x80ff0006;
  }
  if (uVar1 != 0) {
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case (int *)0x2711:
  case (int *)0x2712:
  case (int *)0x2713:
  case (int *)0x2714:
    goto switchD_00492e16_caseD_2711;
  case (int *)0x2715:
  case (int *)0x2716:
    uVar1 = param_2 & 0xfffffcff;
    break;
  default:
    goto switchD_00492e16_caseD_2717;
  case (int *)0x277b:
    uVar1 = param_2 & 0xffffc3ff;
  }
  if (uVar1 == 0) {
switchD_00492e16_caseD_2711:
    FUN_0047d191(*(LPVOID *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_0047d191(*(LPVOID *)(param_1 + 0x14));
    puVar2 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x14) = 0;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if ((((((param_2 & 0x3c00) == 0) && (puVar2[1] == param_2)) && ((int *)puVar2[2] == param_4))
          && (puVar2[4] == param_5)) &&
         ((param_5 != -1 || ((param_4 != (int *)0x2711 && (param_4 != (int *)0x2713)))))) {
        puVar2[3] = param_3;
        return puVar2;
      }
    }
    puVar2 = (undefined4 *)FUN_0047f911(1,0x48);
    if (puVar2 != (undefined4 *)0x0) {
      if (param_4 == (int *)0x0) {
        *(undefined4 **)(param_1 + 4) = puVar2;
      }
      else {
        *param_4 = (int)puVar2;
      }
      puVar2[1] = param_2;
      puVar2[2] = param_4;
      puVar2[4] = param_5;
      puVar2[3] = param_5;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_2;
      return puVar2;
    }
  }
switchD_00492e16_caseD_2717:
  return (undefined4 *)0x0;
}


