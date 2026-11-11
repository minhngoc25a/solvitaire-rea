// Function: FUN_00485ad0
// Entry: 00485ad0
// Size: 635 bytes
// Thunk: false
// External: false


undefined4 FUN_00485ad0(int param_1,int param_2,int param_3,uint param_4)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (((param_1 == 0) || (8 < param_2 - 1U)) || (0xfa < param_4)) {
    return 0xfffffffe;
  }
  pcVar3 = *(code **)(param_1 + 0x24);
  uVar6 = 0x1e;
  if (param_4 != 0) {
    uVar6 = param_4;
  }
  if (pcVar3 == (code *)0x0) {
    *(code **)(param_1 + 0x24) = FUN_00486210;
    pcVar3 = FUN_00486210;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(code **)(param_1 + 0x28) = FUN_00486230;
  }
  if (pcVar3 == FUN_00486210) {
    piVar4 = (int *)FUN_00482949(0xd9b0);
  }
  else {
    piVar4 = (int *)(*pcVar3)(*(undefined4 *)(param_1 + 0x2c),0xd9b0,1);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = param_1;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    if (*(code **)(param_1 + 0x24) == FUN_00486210) {
      iVar5 = FUN_00482949(param_2 * 400000);
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),param_2 * 400000,1);
    }
    piVar4[4] = iVar5;
    SVar1 = param_2 * 400000 + 0x88;
    if (*(code **)(param_1 + 0x24) == FUN_00486210) {
      iVar5 = FUN_00482949(SVar1);
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),SVar1,1);
    }
    piVar4[5] = iVar5;
    if (*(code **)(param_1 + 0x24) == FUN_00486210) {
      iVar5 = FUN_00482949(0x40004);
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x2c),0x40004,1);
    }
    pvVar2 = (LPVOID)piVar4[4];
    piVar4[6] = iVar5;
    if (pvVar2 != (LPVOID)0x0) {
      if ((piVar4[5] != 0) && (iVar5 != 0)) {
        piVar4[0x9b] = 0;
        piVar4[0x12] = param_2 * 100000 + -0x13;
        piVar4[2] = 2;
        piVar4[1] = 2;
        piVar4[0x99] = 0;
        piVar4[0x9c] = param_2;
        piVar4[0x9a] = param_3;
        piVar4[0xc] = uVar6;
        piVar4[9] = piVar4[5];
        piVar4[10] = (int)pvVar2;
        piVar4[0xb] = 0;
        piVar4[8] = (int)pvVar2;
        *(int **)(param_1 + 0x20) = piVar4;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        piVar4[0xd] = 0x100;
        piVar4[0xe] = 0;
        FUN_00486240((int)piVar4);
        return 0;
      }
      if (*(code **)(param_1 + 0x28) == FUN_00486230) {
        FUN_0047d191(pvVar2);
      }
      else {
        (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    if ((LPVOID)piVar4[5] != (LPVOID)0x0) {
      if (*(code **)(param_1 + 0x28) == FUN_00486230) {
        FUN_0047d191((LPVOID)piVar4[5]);
      }
      else {
        (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    if ((LPVOID)piVar4[6] != (LPVOID)0x0) {
      if (*(code **)(param_1 + 0x28) == FUN_00486230) {
        FUN_0047d191((LPVOID)piVar4[6]);
      }
      else {
        (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    if (*(code **)(param_1 + 0x28) == FUN_00486230) {
      FUN_0047d191(piVar4);
      return 0xfffffffd;
    }
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  }
  return 0xfffffffd;
}


