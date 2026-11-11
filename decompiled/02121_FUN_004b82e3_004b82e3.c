// Function: FUN_004b82e3
// Entry: 004b82e3
// Size: 1044 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004b82e3(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  
  fVar8 = (float10)(**(code **)(param_1 + 0xb4))(param_1,param_2,param_3);
  if (*(int **)(param_1 + 0xbc) == (int *)0x0) {
    uVar2 = thunk_FUN_00469d60();
    iVar3 = thunk_FUN_00469d60();
    uVar4 = thunk_FUN_00469d60();
    uVar5 = thunk_FUN_00469d60();
    uVar2 = uVar5 & 0xff | ((uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff) << 8;
  }
  else {
    piVar6 = (int *)0x0;
    piVar1 = *(int **)(param_1 + 0xbc);
    do {
      piVar7 = piVar1;
      if ((float)fVar8 < (float)piVar7[1]) {
        if (piVar6 == (int *)0x0) {
          uVar2 = thunk_FUN_00469d60();
          iVar3 = thunk_FUN_00469d60();
          uVar4 = thunk_FUN_00469d60();
          uVar2 = (uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff;
        }
        else {
          uVar2 = thunk_FUN_00469d60();
          iVar3 = thunk_FUN_00469d60();
          uVar4 = thunk_FUN_00469d60();
          uVar2 = (uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff;
        }
        goto LAB_004b86e1;
      }
      piVar6 = piVar7;
      piVar1 = (int *)*piVar7;
    } while ((int *)*piVar7 != (int *)0x0);
    if ((float)piVar7[1] == 1.0) {
      uVar2 = ((piVar7[5] << 8 | (uint)*(byte *)(piVar7 + 4)) << 8 | (uint)*(byte *)(piVar7 + 3)) <<
              8 | (uint)*(byte *)(piVar7 + 2);
    }
    else {
      uVar2 = thunk_FUN_00469d60();
      iVar3 = thunk_FUN_00469d60();
      uVar4 = thunk_FUN_00469d60();
      uVar2 = (uVar2 & 0xff | iVar3 << 8) << 8 | uVar4 & 0xff;
LAB_004b86e1:
      uVar4 = thunk_FUN_00469d60();
      uVar2 = uVar4 & 0xff | uVar2 << 8;
    }
  }
  return uVar2;
}


