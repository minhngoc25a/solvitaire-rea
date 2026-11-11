// Function: FUN_004ac120
// Entry: 004ac120
// Size: 866 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004ac120(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  byte *pbVar15;
  int iStack_10;
  int *piStack_c;
  
  puVar5 = (undefined4 *)param_1[6];
  puVar10 = (undefined1 *)*puVar5;
  iVar9 = puVar5[1];
  if (*(char *)(param_1[0x6b] + 0xd) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    _strncpy((char *)(*param_1 + 0x18),"SOS",0x50);
    (**(code **)*param_1)(param_1);
  }
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_004ac3f6;
    puVar10 = (undefined1 *)*puVar5;
    iVar9 = puVar5[1];
  }
  uVar1 = *puVar10;
  puVar10 = puVar10 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_004ac3f6;
    puVar10 = (undefined1 *)*puVar5;
    iVar9 = puVar5[1];
  }
  uVar2 = *puVar10;
  pbVar11 = puVar10 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_004ac3f6;
    pbVar11 = (byte *)*puVar5;
    iVar9 = puVar5[1];
  }
  bVar3 = *pbVar11;
  iVar9 = iVar9 + -1;
  uVar7 = (uint)bVar3;
  pbVar11 = pbVar11 + 1;
  *(undefined4 *)(*param_1 + 0x14) = 0x69;
  *(uint *)(*param_1 + 0x18) = uVar7;
  (**(code **)(*param_1 + 4))(param_1,1);
  if ((((uint)CONCAT11(uVar1,uVar2) != uVar7 * 2 + 6) || (4 < bVar3)) ||
     ((bVar3 == 0 && (*(char *)((int)param_1 + 0xc9) == '\0')))) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  param_1[0x4c] = uVar7;
  iStack_10 = 0;
  if (bVar3 != 0) {
    piStack_c = param_1 + 0x4d;
    do {
      if (iVar9 == 0) {
        uVar6 = (*(code *)puVar5[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_004ac3f6;
        pbVar11 = (byte *)*puVar5;
        iVar9 = puVar5[1];
      }
      uVar6 = (uint)*pbVar11;
      iVar9 = iVar9 + -1;
      pbVar11 = pbVar11 + 1;
      iVar12 = 0;
      if (0 < iStack_10) {
        piVar8 = param_1 + 0x4d;
LAB_004ac292:
        if (uVar6 != *(uint *)*piVar8) goto code_r0x004ac298;
        iVar12 = *(int *)param_1[0x4d];
        if (1 < iStack_10) {
          piVar8 = param_1 + 0x4e;
          iVar13 = iStack_10 + -1;
          do {
            if (iVar12 < *(int *)*piVar8) {
              iVar12 = *(int *)*piVar8;
            }
            piVar8 = piVar8 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        uVar6 = iVar12 + 1;
      }
LAB_004ac2d3:
      iVar12 = 0;
      puVar14 = (uint *)param_1[0x31];
      if (0 < param_1[9]) {
        do {
          if (uVar6 == *puVar14) goto LAB_004ac306;
          iVar12 = iVar12 + 1;
          puVar14 = puVar14 + 0x16;
        } while (iVar12 < param_1[9]);
      }
      *(undefined4 *)(*param_1 + 0x14) = 4;
      *(uint *)(*param_1 + 0x18) = uVar6;
      (**(code **)*param_1)(param_1);
LAB_004ac306:
      *piStack_c = (int)puVar14;
      if (iVar9 == 0) {
        uVar6 = (*(code *)puVar5[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_004ac3f6;
        pbVar11 = (byte *)*puVar5;
        iVar9 = puVar5[1];
      }
      bVar4 = *pbVar11;
      iVar9 = iVar9 + -1;
      pbVar11 = pbVar11 + 1;
      puVar14[5] = (uint)(bVar4 >> 4);
      puVar14[6] = bVar4 & 0xf;
      iVar12 = *param_1;
      *(uint *)(iVar12 + 0x18) = *puVar14;
      *(uint *)(iVar12 + 0x1c) = puVar14[5];
      *(uint *)(iVar12 + 0x20) = puVar14[6];
      *(undefined4 *)(*param_1 + 0x14) = 0x6a;
      (**(code **)(*param_1 + 4))(param_1,1);
      piStack_c = piStack_c + 1;
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < (int)uVar7);
  }
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_004ac3f6;
    pbVar11 = (byte *)*puVar5;
    iVar9 = puVar5[1];
  }
  pbVar15 = pbVar11 + 1;
  param_1[0x5e] = (uint)*pbVar11;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_004ac3f6;
    pbVar15 = (byte *)*puVar5;
    iVar9 = puVar5[1];
  }
  pbVar11 = pbVar15 + 1;
  param_1[0x5f] = (uint)*pbVar15;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') {
LAB_004ac3f6:
      return uVar6 & 0xffffff00;
    }
    pbVar11 = (byte *)*puVar5;
    iVar9 = puVar5[1];
  }
  bVar4 = *pbVar11;
  param_1[0x60] = (uint)(bVar4 >> 4);
  param_1[0x61] = bVar4 & 0xf;
  iVar12 = *param_1;
  *(int *)(iVar12 + 0x18) = param_1[0x5e];
  *(int *)(iVar12 + 0x1c) = param_1[0x5f];
  *(int *)(iVar12 + 0x20) = param_1[0x60];
  *(int *)(iVar12 + 0x24) = param_1[0x61];
  *(undefined4 *)(*param_1 + 0x14) = 0x6b;
  (**(code **)(*param_1 + 4))(param_1,1);
  iVar12 = param_1[0x6b];
  *(undefined4 *)(iVar12 + 0x10) = 0;
  if (bVar3 != 0) {
    param_1[0x1f] = param_1[0x1f] + 1;
  }
  *puVar5 = pbVar11 + 1;
  puVar5[1] = iVar9 + -1;
  return CONCAT31((int3)((uint)iVar12 >> 8),1);
code_r0x004ac298:
  iVar12 = iVar12 + 1;
  piVar8 = piVar8 + 1;
  if (iStack_10 <= iVar12) goto LAB_004ac2d3;
  goto LAB_004ac292;
}


