// Function: FUN_004b5ae0
// Entry: 004b5ae0
// Size: 301 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b5ae0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x70] = (int)puVar1;
  *puVar1 = &LAB_004b6f80;
  puVar1[3] = &LAB_004b7090;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x19] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(iVar3 + puVar1[6]) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)param_1 + 0x5a) == '\0') {
    uVar2 = 0;
    goto LAB_004b5bd6;
  }
  iVar3 = param_1[0x15];
  if (iVar3 < 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(undefined4 *)(*param_1 + 0x18) = 8;
LAB_004b5bb4:
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < iVar3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3b;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    goto LAB_004b5bb4;
  }
  uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
  puVar1[5] = iVar3;
LAB_004b5bd6:
  puVar1[4] = uVar2;
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x17] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_004b6eb0((int)param_1);
  }
  return;
}


