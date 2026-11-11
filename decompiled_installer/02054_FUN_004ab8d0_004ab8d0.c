// Function: FUN_004ab8d0
// Entry: 004ab8d0
// Size: 615 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ab8d0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = param_1[0x4c];
  if (iVar6 == 1) {
    iVar6 = param_1[0x4d];
    param_1[0x51] = *(int *)(iVar6 + 0x1c);
    param_1[0x52] = *(int *)(iVar6 + 0x20);
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x24);
    uVar4 = *(uint *)(iVar6 + 0x20) % *(uint *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0x38) = 1;
    *(undefined4 *)(iVar6 + 0x3c) = 1;
    *(undefined4 *)(iVar6 + 0x40) = 1;
    *(undefined4 *)(iVar6 + 0x48) = 1;
    if (uVar4 == 0) {
      uVar4 = *(uint *)(iVar6 + 0xc);
    }
    *(uint *)(iVar6 + 0x4c) = uVar4;
    param_1[0x53] = 1;
    param_1[0x54] = 0;
  }
  else {
    if ((iVar6 < 1) || (4 < iVar6)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x4c];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar6 = FUN_004b7740(param_1[7],param_1[0x46] * param_1[0x62]);
    param_1[0x51] = iVar6;
    iVar6 = FUN_004b7740(param_1[8],param_1[0x47] * param_1[0x62]);
    iVar8 = 0;
    param_1[0x52] = iVar6;
    param_1[0x53] = 0;
    if (0 < param_1[0x4c]) {
      piVar1 = param_1 + 0x4d;
      do {
        iVar6 = *piVar1;
        uVar4 = *(uint *)(iVar6 + 8);
        *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0xc);
        iVar3 = *(int *)(iVar6 + 0xc) * uVar4;
        *(uint *)(iVar6 + 0x38) = uVar4;
        *(uint *)(iVar6 + 0x44) = *(int *)(iVar6 + 0x24) * uVar4;
        uVar5 = *(uint *)(iVar6 + 0x1c) % uVar4;
        *(int *)(iVar6 + 0x40) = iVar3;
        if (uVar5 == 0) {
          uVar5 = uVar4;
        }
        *(uint *)(iVar6 + 0x48) = uVar5;
        uVar4 = *(uint *)(iVar6 + 0x20) % *(uint *)(iVar6 + 0xc);
        if (uVar4 == 0) {
          uVar4 = *(uint *)(iVar6 + 0xc);
        }
        *(uint *)(iVar6 + 0x4c) = uVar4;
        if (10 < param_1[0x53] + iVar3) {
          *(undefined4 *)(*param_1 + 0x14) = 0xe;
          (**(code **)*param_1)(param_1);
        }
        for (; 0 < iVar3; iVar3 = iVar3 + -1) {
          param_1[param_1[0x53] + 0x54] = iVar8;
          param_1[0x53] = param_1[0x53] + 1;
        }
        iVar8 = iVar8 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar8 < param_1[0x4c]);
    }
  }
  iVar6 = 0;
  if (0 < param_1[0x4c]) {
    piVar1 = param_1 + 0x4d;
    do {
      iVar8 = *piVar1;
      if (*(int *)(iVar8 + 0x50) == 0) {
        uVar4 = *(uint *)(iVar8 + 0x10);
        if ((3 < uVar4) || (param_1[uVar4 + 0x24] == 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x36;
          *(uint *)(*param_1 + 0x18) = uVar4;
          (**(code **)*param_1)(param_1);
        }
        puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x82);
        puVar7 = (undefined4 *)param_1[uVar4 + 0x24];
        puVar9 = puVar2;
        for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
        *(undefined4 **)(iVar8 + 0x50) = puVar2;
      }
      iVar6 = iVar6 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar6 < param_1[0x4c]);
  }
  (**(code **)param_1[0x6c])(param_1);
  (**(code **)param_1[0x68])(param_1);
  *(undefined4 *)param_1[0x6a] = *(undefined4 *)(param_1[0x68] + 4);
  return;
}


