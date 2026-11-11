// Function: FUN_004adf90
// Entry: 004adf90
// Size: 332 bytes
// Thunk: false
// External: false


int __cdecl FUN_004adf90(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar2 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined4 *)(iVar2 + param_2 * 4 + 0x34);
  puVar3 = (undefined4 *)0x0;
  for (puVar6 = (undefined4 *)*puVar4; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6)
  {
    if (param_3 <= (uint)puVar6[2]) goto LAB_004ae0c6;
    puVar3 = puVar6;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar7 = *(uint *)(&DAT_005196ac + param_2 * 4);
  }
  else {
    uVar7 = *(uint *)(&DAT_005196b4 + param_2 * 4);
  }
  uVar5 = 1000000000 - (param_3 + 0x10);
  if (uVar5 < uVar7) {
    uVar7 = uVar5;
  }
  puVar6 = (undefined4 *)FUN_004f1970(param_1,uVar7 + param_3 + 0x10);
  while (puVar6 == (undefined4 *)0x0) {
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
    puVar6 = (undefined4 *)FUN_004f1970(param_1,param_3 + 0x10 + uVar7);
  }
  piVar1 = (int *)(iVar2 + 0x4c);
  *piVar1 = *piVar1 + uVar7 + 0x10 + param_3;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = uVar7 + param_3;
  if (puVar3 == (undefined4 *)0x0) {
    *puVar4 = puVar6;
  }
  else {
    *puVar3 = puVar6;
  }
LAB_004ae0c6:
  iVar2 = puVar6[1];
  puVar6[2] = puVar6[2] - param_3;
  puVar6[1] = iVar2 + param_3;
  return (int)puVar6 + iVar2 + 0x10;
}


