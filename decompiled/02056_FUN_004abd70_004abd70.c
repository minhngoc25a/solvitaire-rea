// Function: FUN_004abd70
// Entry: 004abd70
// Size: 940 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004abd70(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  int iVar12;
  
  puVar4 = (undefined4 *)param_1[6];
  iVar12 = puVar4[1];
  puVar8 = (undefined1 *)*puVar4;
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)((int)param_1 + 0xc9) = param_3;
  *(undefined1 *)((int)param_1 + 0xca) = param_4;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    puVar8 = (undefined1 *)*puVar4;
    iVar12 = puVar4[1];
  }
  uVar1 = *puVar8;
  puVar8 = puVar8 + 1;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    puVar8 = (undefined1 *)*puVar4;
    iVar12 = puVar4[1];
  }
  uVar2 = *puVar8;
  pbVar9 = puVar8 + 1;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    pbVar9 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  pbVar10 = pbVar9 + 1;
  param_1[0x30] = (uint)*pbVar9;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    pbVar10 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  pbVar9 = pbVar10 + 1;
  param_1[8] = (uint)*pbVar10 << 8;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    pbVar9 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  pbVar10 = pbVar9 + 1;
  param_1[8] = param_1[8] + (uint)*pbVar9;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    pbVar10 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  pbVar9 = pbVar10 + 1;
  param_1[7] = (uint)*pbVar10 << 8;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_004ac115;
    pbVar9 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  piVar7 = param_1 + 7;
  pbVar10 = pbVar9 + 1;
  *piVar7 = *piVar7 + (uint)*pbVar9;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') {
LAB_004ac115:
      return uVar5 & 0xffffff00;
    }
    pbVar10 = (byte *)*puVar4;
    iVar12 = puVar4[1];
  }
  _param_4 = param_1 + 7;
  iVar12 = iVar12 + -1;
  iVar6 = *param_1;
  pbVar9 = pbVar10 + 1;
  param_1[9] = (uint)*pbVar10;
  *(int *)(iVar6 + 0x18) = param_1[0x65];
  *(int *)(iVar6 + 0x1c) = *piVar7;
  *(int *)(iVar6 + 0x20) = param_1[8];
  *(int *)(iVar6 + 0x24) = param_1[9];
  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(char *)(param_1[0x6b] + 0xd) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)(param_1);
  }
  if (((param_1[8] == 0) || (*_param_4 == 0)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
  }
  piVar7 = param_1 + 9;
  iVar6 = *piVar7;
  if (CONCAT11(uVar1,uVar2) - 8 != iVar6 * 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
    iVar6 = *piVar7;
  }
  if (param_1[0x31] == 0) {
    iVar6 = (**(code **)param_1[1])(param_1,1,iVar6 * 0x58);
    param_1[0x31] = iVar6;
  }
  _param_2 = 0;
  if (0 < *piVar7) {
    do {
      if (iVar12 == 0) {
        uVar5 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar5 == '\0') goto LAB_004ac115;
        pbVar9 = (byte *)*puVar4;
        iVar12 = puVar4[1];
      }
      uVar5 = (uint)*pbVar9;
      iVar12 = iVar12 + -1;
      puVar11 = (uint *)param_1[0x31];
      pbVar9 = pbVar9 + 1;
      iVar6 = 0;
      if (0 < (int)_param_2) {
LAB_004ac010:
        if (uVar5 != *puVar11) goto code_r0x004ac018;
        uVar5 = *(uint *)param_1[0x31];
        puVar11 = (uint *)param_1[0x31] + 0x16;
        if (1 < (int)_param_2) {
          iVar6 = _param_2 - 1;
          do {
            if ((int)uVar5 < (int)*puVar11) {
              uVar5 = *puVar11;
            }
            puVar11 = puVar11 + 0x16;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar5 = uVar5 + 1;
      }
LAB_004ac024:
      *puVar11 = uVar5;
      puVar11[1] = _param_2;
      if (iVar12 == 0) {
        uVar5 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar5 == '\0') goto LAB_004ac115;
        pbVar9 = (byte *)*puVar4;
        iVar12 = puVar4[1];
      }
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      puVar11[2] = (uint)(bVar3 >> 4);
      puVar11[3] = bVar3 & 0xf;
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) {
        uVar5 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar5 == '\0') goto LAB_004ac115;
        pbVar9 = (byte *)*puVar4;
        iVar12 = puVar4[1];
      }
      iVar12 = iVar12 + -1;
      puVar11[4] = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar6 = *param_1;
      *(uint *)(iVar6 + 0x18) = *puVar11;
      *(uint *)(iVar6 + 0x1c) = puVar11[2];
      *(uint *)(iVar6 + 0x20) = puVar11[3];
      *(uint *)(iVar6 + 0x24) = puVar11[4];
      *(undefined4 *)(*param_1 + 0x14) = 0x67;
      (**(code **)(*param_1 + 4))(param_1,1);
      _param_2 = _param_2 + 1;
    } while ((int)_param_2 < *piVar7);
  }
  iVar6 = param_1[0x6b];
  *(undefined1 *)(iVar6 + 0xd) = 1;
  puVar4[1] = iVar12;
  *puVar4 = pbVar9;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
code_r0x004ac018:
  iVar6 = iVar6 + 1;
  puVar11 = puVar11 + 0x16;
  if ((int)_param_2 <= iVar6) goto LAB_004ac024;
  goto LAB_004ac010;
}


