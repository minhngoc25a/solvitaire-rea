// Function: FUN_00449240
// Entry: 00449240
// Size: 504 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00449240(int *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  SIZE_T SVar9;
  uint *puVar10;
  int local_18 [6];
  
  puVar8 = param_3;
  if (((param_3 == (undefined4 *)0x0) || (_memset(param_3,0,0x77), param_1 == (int *)0x0)) ||
     (puVar1 = (uint *)(param_1 + 4), param_1[4] == 0 && param_1[5] == 0)) {
    return 0xfffffffe;
  }
  iVar3 = param_1[1];
  iVar4 = *param_1;
  *param_3 = &PTR_LAB_005404d4;
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  param_3[8] = 0xffffffff;
  param_3[9] = 0xffffffff;
  param_3[10] = param_3;
  param_3[0xf] = iVar3;
  param_3[0xe] = iVar4;
  param_3[0x10] = param_1[2];
  piVar2 = param_1 + 7;
  if (param_3 + 0x18 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
LAB_004492ef:
      param_3[0x19] = FUN_00435570;
      param_3[0x1a] = &LAB_00435580;
      param_3[0x1b] = FUN_004355a0;
    }
    else {
      if (*piVar2 == 0) {
        if (param_1[10] == 0) {
          if ((param_1[8] == 0) && (param_1[9] == 0)) goto LAB_004492ef;
          goto LAB_004492d5;
        }
      }
      else {
LAB_004492d5:
        if (param_1[10] == 0) goto LAB_00449304;
      }
      if ((param_1[8] != 0) || (param_1[9] != 0)) {
        iVar3 = param_1[8];
        iVar4 = param_1[9];
        iVar7 = param_1[10];
        param_3[0x18] = *piVar2;
        param_3[0x19] = iVar3;
        param_3[0x1a] = iVar4;
        param_3[0x1b] = iVar7;
      }
    }
  }
LAB_00449304:
  if (param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    lVar6 = (ulonglong)*puVar1 * (ulonglong)(uint)(local_18[*param_1] * param_1[1]);
    SVar9 = (SIZE_T)lVar6;
    if (param_1[5] * local_18[*param_1] * param_1[1] + (int)((ulonglong)lVar6 >> 0x20) == 0) {
      if (param_3 + 0x18 == (undefined4 *)0x0) {
        puVar10 = (uint *)FUN_00482949(SVar9);
      }
      else {
        if ((code *)param_3[0x19] == (code *)0x0) {
          return 0xfffffffc;
        }
        puVar10 = (uint *)(*(code *)param_3[0x19])(SVar9,param_3[0x18]);
      }
      if (puVar10 != (uint *)0x0) {
        if ((uint *)param_1[6] == (uint *)0x0) {
          FUN_00431f80(puVar10,*puVar1,param_1[5],*param_1,param_1[1]);
          param_3 = (undefined4 *)0x1;
        }
        else {
          FUN_00431ec0(puVar10,(uint *)param_1[6],*puVar1,param_1[5],*param_1,param_1[1]);
          param_3 = (undefined4 *)0x1;
        }
        goto LAB_004493f5;
      }
    }
    return 0xfffffffc;
  }
  puVar10 = (uint *)param_1[6];
  param_3 = (undefined4 *)0x0;
LAB_004493f5:
  iVar3 = param_1[5];
  uVar5 = *puVar1;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = uVar5;
  puVar8[0x15] = iVar3;
  puVar8[0x16] = puVar10;
  puVar8[0x1c] = param_3;
  return 0;
}


