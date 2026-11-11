// Function: FUN_0049d730
// Entry: 0049d730
// Size: 114 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049d730(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar1 = &DAT_00518fa0;
  while ((*piVar1 != *param_2 || (piVar1[1] != param_2[1]))) {
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 8;
    if (8 < uVar3) {
LAB_0049d754:
      if (0x7fffffff < (uint)param_2[1]) {
        return 0xb;
      }
      return 8;
    }
  }
  iVar4 = uVar3 * 0x20;
  if (iVar4 != -0x518fa0) {
    if (*(code **)(&UNK_00518fb4 + iVar4) != (code *)0x0) {
      uVar2 = (**(code **)(&UNK_00518fb4 + iVar4))(param_1,param_2[2]);
      return uVar2;
    }
    *param_1 = *(undefined4 *)(&UNK_00518fb8 + iVar4);
    return 0;
  }
  goto LAB_0049d754;
}


