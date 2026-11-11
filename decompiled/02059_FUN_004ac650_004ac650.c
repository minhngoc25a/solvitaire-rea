// Function: FUN_004ac650
// Entry: 004ac650
// Size: 801 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ac650(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int iStack_124;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  byte bStack_108;
  uint uStack_104;
  uint auStack_100 [64];
  
  puVar2 = (undefined4 *)param_1[6];
  iVar8 = puVar2[1];
  if (iVar8 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_004ac964;
    iVar8 = puVar2[1];
  }
  bVar1 = *(byte *)*puVar2;
  pbVar9 = (byte *)*puVar2 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_004ac964:
      return uVar4 & 0xffffff00;
    }
    pbVar9 = (byte *)*puVar2;
    iVar8 = puVar2[1];
  }
  uStack_11c = (uint)*pbVar9;
  iVar7 = (uint)bVar1 * 0x100 + -2 + uStack_11c;
  iVar8 = iVar8 + -1;
  pbVar9 = pbVar9 + 1;
  do {
    if (iVar7 < 0x11) {
      if (iVar7 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        uStack_11c = (**(code **)*param_1)(param_1);
      }
      *puVar2 = pbVar9;
      puVar2[1] = iVar8;
      return CONCAT31((int3)(uStack_11c >> 8),1);
    }
    if (iVar8 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_004ac964;
      pbVar9 = (byte *)*puVar2;
      iVar8 = puVar2[1];
    }
    iVar8 = iVar8 + -1;
    uStack_104 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    *(undefined4 *)(*param_1 + 0x14) = 0x52;
    *(uint *)(*param_1 + 0x18) = uStack_104;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_118 = uStack_118 & 0xffffff00;
    uStack_11c = 0;
    iStack_124 = 1;
    do {
      if (iVar8 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_004ac964;
        pbVar9 = (byte *)*puVar2;
        iVar8 = puVar2[1];
      }
      bVar1 = *pbVar9;
      iVar8 = iVar8 + -1;
      *(byte *)((int)&uStack_118 + iStack_124) = bVar1;
      pbVar9 = pbVar9 + 1;
      iStack_124 = iStack_124 + 1;
      uStack_11c = uStack_11c + bVar1;
    } while (iStack_124 < 0x11);
    iVar3 = *param_1;
    *(uint *)(iVar3 + 0x18) = uStack_118 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x1c) = uStack_118 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x20) = uStack_118 >> 0x18;
    *(uint *)(iVar3 + 0x24) = uStack_114 & 0xff;
    *(uint *)(iVar3 + 0x28) = uStack_114 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x2c) = uStack_114 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x30) = uStack_114 >> 0x18;
    *(uint *)(iVar3 + 0x34) = uStack_110 & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar3 = *param_1;
    *(uint *)(iVar3 + 0x18) = uStack_110 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x1c) = uStack_110 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x20) = uStack_110 >> 0x18;
    *(uint *)(iVar3 + 0x24) = uStack_10c & 0xff;
    *(uint *)(iVar3 + 0x28) = uStack_10c >> 8 & 0xff;
    *(uint *)(iVar3 + 0x2c) = uStack_10c >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x30) = uStack_10c >> 0x18;
    *(uint *)(iVar3 + 0x34) = (uint)bStack_108;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < (int)uStack_11c) || (iVar7 + -0x11 < (int)uStack_11c)) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    iStack_124 = 0;
    if (0 < (int)uStack_11c) {
      do {
        if (iVar8 == 0) {
          uVar4 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_004ac964;
          pbVar9 = (byte *)*puVar2;
          iVar8 = puVar2[1];
        }
        iVar8 = iVar8 + -1;
        *(byte *)((int)auStack_100 + iStack_124) = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iStack_124 = iStack_124 + 1;
      } while (iStack_124 < (int)uStack_11c);
    }
    iVar7 = (iVar7 + -0x11) - uStack_11c;
    if ((uStack_104 & 0x10) == 0) {
      iVar3 = uStack_104 + 0x28;
      uVar4 = uStack_104;
    }
    else {
      iVar3 = uStack_104 + 0x1c;
      uVar4 = uStack_104 - 0x10;
    }
    piVar5 = param_1 + iVar3;
    if (((int)uVar4 < 0) || (3 < (int)uVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1f;
      *(uint *)(*param_1 + 0x18) = uVar4;
      (**(code **)*param_1)(param_1);
    }
    puVar6 = (uint *)*piVar5;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_004aaba0((int)param_1);
      *piVar5 = (int)puVar6;
    }
    *puVar6 = uStack_118;
    puVar6[1] = uStack_114;
    puVar6[2] = uStack_110;
    puVar6[3] = uStack_10c;
    *(byte *)(puVar6 + 4) = bStack_108;
    if (0 < (int)uStack_11c) {
      uVar10 = FUN_0044c490((uint *)(*piVar5 + 0x11),auStack_100,uStack_11c);
      uStack_11c = (uint)uVar10;
    }
  } while( true );
}


