// Function: FUN_00443980
// Entry: 00443980
// Size: 339 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00443980(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 local_20 [8];
  
  if (((param_1 == (undefined4 *)0x0) || (param_4 == 0)) || (param_5 == 0)) {
    return -2;
  }
  uVar6 = param_1[3];
  uVar8 = param_5;
  uVar7 = param_4;
  do {
    uVar3 = uVar8;
    uVar2 = (ulonglong)uVar7;
    uVar8 = (uint)(uVar2 % (ulonglong)uVar3);
    uVar7 = uVar3;
  } while (uVar8 != 0);
  uVar8 = (uint)((uVar2 % (ulonglong)uVar3 << 0x20 | (ulonglong)param_4) / (ulonglong)uVar3);
  uVar3 = param_5 / uVar3;
  param_1[2] = uVar8;
  param_1[3] = uVar3;
  if (8 < (uint)param_1[4]) {
    return -2;
  }
  uVar7 = uVar8;
  if (uVar3 <= uVar8) {
    uVar7 = uVar3;
  }
  if (uVar8 <= uVar3) {
    uVar8 = uVar3;
  }
  piVar4 = FUN_00428150(local_20,*param_1,param_1[1],uVar8,
                        ((double)(int)uVar7 + (double)(&DAT_0050c3d0)[-((int)uVar7 >> 0x1f)]) *
                        DAT_0050c088 * *(double *)(param_1 + 6),param_1[4]);
  piVar1 = param_1 + 0xe;
  local_40 = *piVar4;
  iStack_3c = piVar4[1];
  iStack_38 = piVar4[2];
  iStack_34 = piVar4[3];
  local_30 = piVar4[4];
  iStack_2c = piVar4[5];
  iStack_28 = piVar4[6];
  iStack_24 = piVar4[7];
  if (param_6 == 0) {
    pvVar5 = (void *)(*(int *)(param_3 + 0xc) + param_2);
    if (piVar1 == (int *)0x0) {
      iVar9 = (int)param_1 + 0x36;
      goto LAB_00443a83;
    }
    iVar9 = 1;
    *piVar1 = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  else {
    iVar9 = 0;
    pvVar5 = (void *)0x0;
  }
  iVar9 = FUN_00441c20(&local_40,pvVar5,piVar1,iVar9);
LAB_00443a83:
  if (iVar9 == 0) {
    uVar8 = param_1[3];
    param_1[8] = (uint)param_1[2] / uVar8;
    param_1[9] = (uint)param_1[2] % uVar8;
    uVar6 = (((uint)param_1[0xb] % uVar6) * uVar8) / uVar6 + ((uint)param_1[0xb] / uVar6) * uVar8;
    param_1[10] = param_1[10] + uVar6 / uVar8;
    param_1[0xb] = uVar6 % uVar8;
    return 0;
  }
  return iVar9;
}


