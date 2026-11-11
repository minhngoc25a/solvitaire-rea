// Function: FUN_004aeb80
// Entry: 004aeb80
// Size: 441 bytes
// Thunk: false
// External: false


void __cdecl FUN_004aeb80(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iStack_10;
  
  piVar1 = param_1;
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x67] = (int)puVar2;
  *puVar2 = &LAB_004af0b0;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)(param_1);
  }
  iVar7 = param_1[0x49];
  if (*(char *)(param_1[0x6e] + 8) == '\0') {
    puVar2[0xd] = iVar7;
  }
  else {
    if (iVar7 < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
    }
    iVar7 = param_1[0x67];
    iVar9 = param_1[0x49];
    iVar3 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar7 + 0x3c) = iVar3;
    _param_2 = (undefined4 *)0x0;
    *(int *)(iVar7 + 0x40) = iVar3 + param_1[9] * 4;
    piVar8 = param_1 + 0x31;
    if (0 < param_1[9]) {
      param_1 = (int *)0x0;
      piVar8 = (int *)(*piVar8 + 0xc);
      iStack_10 = 0;
      do {
        iVar4 = (piVar8[7] * *piVar8) / piVar1[0x49];
        iVar6 = (iVar9 + 4) * iVar4;
        iVar3 = (**(code **)piVar1[1])(piVar1,1,iVar6 * 8);
        piVar8 = piVar8 + 0x16;
        iVar3 = iVar3 + iVar4 * 4;
        *(int *)((int)param_1 + *(int *)(iVar7 + 0x3c)) = iVar3;
        param_1 = param_1 + 1;
        *(int *)(iStack_10 + *(int *)(iVar7 + 0x40)) = iVar3 + iVar6 * 4;
        iStack_10 = iStack_10 + 4;
        _param_2 = (undefined4 *)((int)_param_2 + 1);
      } while ((int)_param_2 < piVar1[9]);
    }
    iVar7 = piVar1[0x49] + 2;
  }
  iVar9 = 0;
  if (0 < piVar1[9]) {
    _param_2 = puVar2 + 2;
    piVar8 = (int *)(piVar1[0x31] + 0xc);
    do {
      uVar5 = (**(code **)(piVar1[1] + 8))
                        (piVar1,1,piVar8[6] * piVar8[4],
                         ((piVar8[7] * *piVar8) / piVar1[0x49]) * iVar7);
      piVar8 = piVar8 + 0x16;
      iVar9 = iVar9 + 1;
      *_param_2 = uVar5;
      _param_2 = _param_2 + 1;
    } while (iVar9 < piVar1[9]);
  }
  return;
}


