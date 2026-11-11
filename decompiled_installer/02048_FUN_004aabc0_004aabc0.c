// Function: FUN_004aabc0
// Entry: 004aabc0
// Size: 327 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_004aabc0(uint *param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  puVar3 = param_1;
  if ((char)param_1[4] == '\0') {
    iVar4 = (-(uint)(param_2 != '\0') & 0xfffffff0) + 0x88;
  }
  else {
    iVar4 = (-(uint)(param_2 != '\0') & 0xfffffff0) + 0xb0;
  }
  if (param_3 == 0) {
    if (param_2 == '\0') {
      puVar7 = (undefined4 *)&DAT_00519538;
      param_1 = (uint *)&DAT_00519550;
    }
    else {
      puVar7 = (undefined4 *)&DAT_005194f8;
      param_1 = (uint *)&DAT_0051950c;
    }
  }
  else {
    if (param_3 != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x34;
      *(int *)(*param_1 + 0x18) = param_3;
      (**(code **)*param_1)(param_1);
      return (undefined4 *)0x0;
    }
    if (param_2 == '\0') {
      puVar7 = (undefined4 *)&DAT_005195f4;
      param_1 = (uint *)&DAT_00519608;
    }
    else {
      puVar7 = &DAT_00519518;
      param_1 = (uint *)&DAT_0051952c;
    }
  }
  piVar1 = (int *)((int)puVar3 + param_3 * 4 + iVar4);
  puVar5 = (undefined4 *)*piVar1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)puVar3[1])(puVar3,0,0x112);
    *(undefined1 *)((int)puVar5 + 0x111) = 0;
    *piVar1 = (int)puVar5;
  }
  iVar8 = 0;
  *puVar5 = *puVar7;
  iVar6 = 0;
  puVar5[1] = puVar7[1];
  puVar5[2] = puVar7[2];
  puVar5[3] = puVar7[3];
  *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar7 + 4);
  iVar4 = 1;
  do {
    iVar8 = iVar8 + (uint)*(byte *)((int)puVar7 + iVar4);
    iVar2 = iVar4 + 1;
    iVar4 = iVar4 + 2;
    iVar6 = iVar6 + (uint)*(byte *)((int)puVar7 + iVar2);
  } while (iVar4 < 0x11);
  uVar9 = iVar8 + iVar6;
  if ((int)uVar9 < 0x101) {
    if ((int)uVar9 < 1) goto LAB_004aacf9;
  }
  else {
    *(undefined4 *)(*puVar3 + 0x14) = 9;
    (**(code **)*puVar3)(puVar3);
  }
  FUN_0044c490((uint *)((int)puVar5 + 0x11),param_1,uVar9);
LAB_004aacf9:
  *(undefined1 *)((int)puVar5 + 0x111) = 0;
  return puVar5;
}


