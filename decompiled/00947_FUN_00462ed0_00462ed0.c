// Function: FUN_00462ed0
// Entry: 00462ed0
// Size: 98 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_00462ed0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar3) {
    if (*(uint *)(param_1 + 0x10) == 0) {
LAB_00462f11:
      return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x40) + 4 + iVar3 * 8),
                      *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar3 * 8));
    }
    do {
      uVar2 = 0;
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
      while ((*piVar1 != iVar3 || (piVar1[1] != iVar3 >> 0x1f))) {
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 4;
        if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_00462f11;
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return 0;
}


