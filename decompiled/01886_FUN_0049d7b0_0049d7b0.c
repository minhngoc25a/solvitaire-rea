// Function: FUN_0049d7b0
// Entry: 0049d7b0
// Size: 79 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049d7b0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = 0;
  piVar3 = &DAT_00518fa0;
  while ((*piVar3 != *param_1 || (piVar3[1] != param_1[1]))) {
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 8;
    if (8 < uVar1) {
      return 0xb;
    }
  }
  if (uVar1 * 0x20 == -0x518fa0) {
    return 0xb;
  }
  if (*(code **)(&UNK_00518fbc + uVar1 * 0x20) != (code *)0x0) {
    uVar2 = (**(code **)(&UNK_00518fbc + uVar1 * 0x20))(param_1[2],param_2);
    return uVar2;
  }
  return 0;
}


