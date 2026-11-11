// Function: FUN_004ac980
// Entry: 004ac980
// Size: 863 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ac980(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_20;
  undefined *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar11 = puVar2[1];
  if (iVar11 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_004accd5;
    iVar11 = puVar2[1];
  }
  bVar1 = *(byte *)*puVar2;
  pbVar9 = (byte *)*puVar2 + 1;
  iVar11 = iVar11 + -1;
  if (iVar11 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_004accd5:
      return uVar4 & 0xffffff00;
    }
    pbVar9 = (byte *)*puVar2;
    iVar11 = puVar2[1];
  }
  uVar4 = (uint)*pbVar9;
  iVar6 = (uint)bVar1 * 0x100 + -2 + uVar4;
  iVar11 = iVar11 + -1;
  pbVar9 = pbVar9 + 1;
  do {
    if (iVar6 < 1) {
      if (iVar6 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        uVar4 = (**(code **)*param_1)(param_1);
      }
      puVar2[1] = iVar11;
      *puVar2 = pbVar9;
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    iVar6 = iVar6 + -1;
    if (iVar11 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_004accd5;
      pbVar9 = (byte *)*puVar2;
      iVar11 = puVar2[1];
    }
    iVar11 = iVar11 + -1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar4 = bVar1 & 0xf;
    uVar8 = (uint)(bVar1 >> 4);
    *(undefined4 *)(*param_1 + 0x14) = 0x53;
    *(uint *)(*param_1 + 0x18) = uVar4;
    *(uint *)(*param_1 + 0x1c) = uVar8;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (3 < uVar4) {
      *(undefined4 *)(*param_1 + 0x14) = 0x20;
      *(uint *)(*param_1 + 0x18) = uVar4;
      (**(code **)*param_1)(param_1);
    }
    puStack_18 = (undefined4 *)param_1[uVar4 + 0x24];
    if (puStack_18 == (undefined4 *)0x0) {
      puStack_18 = (undefined4 *)FUN_004aab80((int)param_1);
      param_1[uVar4 + 0x24] = (int)puStack_18;
    }
    if (uVar8 == 0) {
      iStack_14 = iVar6;
      if (iVar6 < 0x40) goto LAB_004acac1;
      iStack_14 = 0x40;
switchD_004acaec_caseD_5:
      puStack_1c = &DAT_00519c40;
      iStack_20 = 0;
      if (0 < iStack_14) goto LAB_004acb72;
    }
    else {
      if (iVar6 < 0x80) {
        iStack_14 = iVar6 >> 1;
LAB_004acac1:
        puVar12 = puStack_18;
        for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = 0x10001;
          puVar12 = puVar12 + 1;
        }
      }
      else {
        iStack_14 = 0x40;
      }
      switch(iStack_14) {
      case 4:
        puStack_1c = &DAT_0051a0e8;
        iStack_20 = 0;
        break;
      default:
        goto switchD_004acaec_caseD_5;
      case 9:
        puStack_1c = &DAT_0051a080;
        iStack_20 = 0;
        break;
      case 0x10:
        puStack_1c = &DAT_0051a000;
        iStack_20 = 0;
        break;
      case 0x19:
        puStack_1c = &DAT_00519f58;
        iStack_20 = 0;
        break;
      case 0x24:
        puStack_1c = &DAT_00519e88;
        iStack_20 = 0;
        break;
      case 0x31:
        puStack_1c = &DAT_00519d80;
        iStack_20 = 0;
      }
LAB_004acb72:
      do {
        if (uVar8 == 0) {
          if (iVar11 == 0) {
            uVar4 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar4 == '\0') goto LAB_004accd5;
            pbVar9 = (byte *)*puVar2;
            iVar11 = puVar2[1];
          }
          uVar5 = (ushort)*pbVar9;
        }
        else {
          if (iVar11 == 0) {
            uVar4 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar4 == '\0') goto LAB_004accd5;
            pbVar9 = (byte *)*puVar2;
            iVar11 = puVar2[1];
          }
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) {
            uVar4 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar4 == '\0') goto LAB_004accd5;
            pbVar9 = (byte *)*puVar2;
            iVar11 = puVar2[1];
          }
          uVar5 = (ushort)bVar1 * 0x100 + (ushort)*pbVar9;
        }
        iVar11 = iVar11 + -1;
        pbVar9 = pbVar9 + 1;
        iVar7 = iStack_20 * 4;
        iStack_20 = iStack_20 + 1;
        *(ushort *)((int)puStack_18 + *(int *)(puStack_1c + iVar7) * 2) = uVar5;
      } while (iStack_20 < iStack_14);
    }
    uVar4 = *param_1;
    if (1 < *(int *)(uVar4 + 0x68)) {
      iVar7 = 8;
      puVar10 = (ushort *)(puStack_18 + 1);
      do {
        iVar3 = *param_1;
        *(uint *)(iVar3 + 0x18) = (uint)puVar10[-2];
        *(uint *)(iVar3 + 0x1c) = (uint)puVar10[-1];
        *(uint *)(iVar3 + 0x20) = (uint)*puVar10;
        *(uint *)(iVar3 + 0x24) = (uint)puVar10[1];
        *(uint *)(iVar3 + 0x28) = (uint)puVar10[2];
        *(uint *)(iVar3 + 0x2c) = (uint)puVar10[3];
        *(uint *)(iVar3 + 0x30) = (uint)puVar10[4];
        *(uint *)(iVar3 + 0x34) = (uint)puVar10[5];
        *(undefined4 *)(*param_1 + 0x14) = 0x5f;
        uVar4 = (**(code **)(*param_1 + 4))(param_1,2);
        puVar10 = puVar10 + 8;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar6 = iVar6 - iStack_14;
    if (uVar8 != 0) {
      iVar6 = iVar6 - iStack_14;
    }
  } while( true );
}


