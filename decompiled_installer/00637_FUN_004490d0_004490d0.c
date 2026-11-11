// Function: FUN_004490d0
// Entry: 004490d0
// Size: 357 bytes
// Thunk: false
// External: false


int __cdecl FUN_004490d0(int *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_10;
  int local_c;
  undefined8 local_8;
  
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    return -0x11;
  }
  LOCK();
  iVar5 = param_1[0xd];
  if (iVar5 == 0) {
    param_1[0xd] = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (param_3 == 0 && param_4 == 0) {
    return -2;
  }
  if (((*(byte *)((undefined4 *)*param_1 + 6) & 1) == 0) &&
     (((param_1[4] & param_1[5]) != 0xffffffff ||
      (((param_1[8] & param_1[9]) != 0xffffffff && (iVar5 != 0)))))) {
    iVar1 = FUN_0042ef90(param_1,(int *)&local_10);
    if (iVar1 == 0) {
      uVar3 = param_1[2];
      uVar2 = uVar3 + local_10;
      uVar6 = param_1[4];
      local_10 = param_1[3] + local_c + (uint)CARRY4(uVar3,local_10);
      uVar8 = param_1[5];
      if ((iVar5 != 0) && ((param_1[8] & param_1[9]) != 0xffffffff)) {
        uVar7 = uVar3 + param_1[8];
        uVar3 = param_1[3] + param_1[9] + (uint)CARRY4(uVar3,param_1[8]);
        if ((uVar3 <= uVar8) && ((uVar8 != uVar3 || (uVar7 <= uVar6)))) {
          uVar6 = uVar7;
          uVar8 = uVar3;
        }
      }
      uVar3 = uVar6 - uVar2;
      uVar2 = (uVar8 - local_10) - (uint)(uVar6 < uVar2);
      if ((uVar2 <= param_4) &&
         (((param_4 != uVar2 || (uVar3 < param_3)) && ((uVar6 & uVar8) != 0xffffffff)))) {
        param_4 = uVar2;
        param_3 = uVar3;
      }
      if ((param_4 == 0) && (param_3 == 0)) {
        iVar5 = -0x11;
        goto LAB_004491fc;
      }
    }
    pcVar4 = *(code **)*param_1;
  }
  else {
    pcVar4 = *(code **)*param_1;
  }
  iVar5 = (*pcVar4)(param_1,param_2,param_3,param_4,&local_8);
LAB_004491fc:
  if (param_5 != (int *)0x0) {
    *param_5 = (int)local_8;
    param_5[1] = local_8._4_4_;
  }
  if ((iVar5 == 0) && ((int)local_8 == 0 && local_8._4_4_ == 0)) {
    return -0x11;
  }
  return iVar5;
}


