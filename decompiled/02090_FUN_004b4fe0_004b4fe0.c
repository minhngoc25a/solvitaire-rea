// Function: FUN_004b4fe0
// Entry: 004b4fe0
// Size: 585 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b4fe0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  
  iVar1 = param_1[0x70];
  iVar11 = param_1[0x15];
  iVar5 = param_1[0x19];
  piVar3 = (int *)(iVar1 + 0x20);
  iVar10 = 1;
  do {
    iVar6 = iVar10;
    iVar10 = iVar6 + 1;
    iVar8 = iVar10;
    if (1 < iVar5) {
      iVar4 = iVar5 + -1;
      do {
        iVar8 = iVar8 * iVar10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  } while (iVar8 <= iVar11);
  if (iVar6 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(int *)(*param_1 + 0x18) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  iVar8 = 1;
  local_24 = 1;
  iVar10 = iVar5;
  piVar12 = piVar3;
  if (0 < iVar5) {
    for (; iVar4 = iVar5, iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar12 = iVar6;
      piVar12 = piVar12 + 1;
    }
    do {
      iVar8 = iVar8 * iVar6;
      iVar4 = iVar4 + -1;
      local_24 = iVar8;
    } while (iVar4 != 0);
  }
  do {
    iVar10 = 0;
    bVar2 = false;
    if (iVar5 < 1) break;
    while( true ) {
      iVar8 = iVar10;
      if (param_1[0xb] == 2) {
        iVar8 = (&DAT_00519c30)[iVar10];
      }
      iVar4 = piVar3[iVar8];
      iVar6 = iVar4 + 1;
      iVar4 = (local_24 / iVar4) * iVar6;
      if (iVar4 - iVar11 != 0 && iVar11 <= iVar4) break;
      iVar10 = iVar10 + 1;
      piVar3[iVar8] = iVar6;
      bVar2 = true;
      local_24 = iVar4;
      if (iVar5 <= iVar10) {
        iVar10 = 0;
        bVar2 = false;
      }
    }
  } while (bVar2);
  iVar11 = *param_1;
  if (param_1[0x19] == 3) {
    *(int *)(iVar11 + 0x18) = local_24;
    *(int *)(iVar11 + 0x1c) = *piVar3;
    *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(*param_1 + 0x14) = 0x60;
    (**(code **)(*param_1 + 4))();
  }
  else {
    *(undefined4 *)(iVar11 + 0x14) = 0x61;
    *(int *)(*param_1 + 0x18) = local_24;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  iVar5 = (**(code **)(param_1[1] + 8))(param_1,1,local_24,param_1[0x19]);
  iStack_1c = 0;
  iVar11 = local_24;
  if (0 < param_1[0x19]) {
    do {
      iStack_20 = *piVar3;
      iVar10 = iVar11 / iStack_20;
      if (0 < iStack_20) {
        iVar8 = iStack_20 + -1;
        iStack_14 = 0;
        iVar6 = iVar8 / 2;
        do {
          for (iVar4 = iStack_14; iVar4 < local_24; iVar4 = iVar4 + iVar11) {
            iVar9 = 0;
            if (0 < iVar10) {
              do {
                iVar7 = *(int *)(iVar5 + iStack_1c * 4) + iVar9;
                iVar9 = iVar9 + 1;
                *(char *)(iVar7 + iVar4) = (char)(iVar6 / iVar8);
              } while (iVar9 < iVar10);
            }
          }
          iStack_14 = iStack_14 + iVar10;
          iStack_20 = iStack_20 + -1;
          iVar6 = iVar6 + 0xff;
        } while (iStack_20 != 0);
      }
      iStack_1c = iStack_1c + 1;
      piVar3 = piVar3 + 1;
      iVar11 = iVar10;
    } while (iStack_1c < param_1[0x19]);
  }
  *(int *)(iVar1 + 0x14) = local_24;
  *(int *)(iVar1 + 0x10) = iVar5;
  return;
}


