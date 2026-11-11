// Function: FUN_0042f030
// Entry: 0042f030
// Size: 329 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042f030(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_10;
  uint uStack_c;
  undefined8 uStack_8;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_5 < param_3) {
    return 0xfffffffe;
  }
  if ((param_5 == param_3) && (param_4 < param_2)) {
    return 0xfffffffe;
  }
  if ((*(code **)(*param_1 + 0xc) != (code *)0x0) &&
     (iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&local_10), iVar3 == 0)) {
    uVar5 = param_1[3];
    uVar1 = param_1[2];
    if ((uVar5 < uStack_c) || ((uVar5 <= uStack_c && (uVar1 <= local_10)))) {
      uVar4 = local_10 - uVar1;
      param_1 = (int *)((uStack_c - uVar5) - (uint)(local_10 < uVar1));
    }
    else {
      uStack_8 = 0;
      param_1 = (int *)0x0;
      uStack_8._0_4_ = 0;
      uVar4 = (uint)uStack_8;
    }
    piVar2[2] = param_2;
    uVar5 = (int)param_1 + CARRY4(uVar1,uVar4) + uVar5;
    piVar2[3] = param_3;
    piVar2[4] = param_4;
    piVar2[5] = param_5;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = -1;
    piVar2[9] = -1;
    if ((uVar5 <= param_3) && ((uVar5 < param_3 || (uVar1 + uVar4 < param_2)))) {
      if (*(code **)(*piVar2 + 4) == (code *)0x0) {
        return 0;
      }
      (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
      return 0;
    }
    if (uVar5 < param_5) {
      return 0;
    }
    if ((uVar5 <= param_5) && (uVar1 + uVar4 <= param_4)) {
      return 0;
    }
    FUN_0042ef40(piVar2,param_4 - param_2,(param_5 - param_3) - (uint)(param_4 < param_2));
    return 0;
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = -1;
  param_1[9] = -1;
  return 0;
}


