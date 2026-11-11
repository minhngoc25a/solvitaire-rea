// Function: FUN_00474f40
// Entry: 00474f40
// Size: 304 bytes
// Thunk: false
// External: false


void __cdecl FUN_00474f40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = 0x5a;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1c8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    *(undefined4 *)(*param_1 + 0x18) = 0x1c8;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  _memset(param_1,0,0x1c8);
  *param_1 = iVar1;
  param_1[3] = iVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_004ade60(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x45] = 0;
  FUN_004abcc0((int)param_1);
  FUN_004ab240((int)param_1);
  param_1[5] = 200;
  return;
}


