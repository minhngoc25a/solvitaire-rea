// Function: FUN_004a1ac0
// Entry: 004a1ac0
// Size: 441 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a1ac0(int *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 7;
  do {
    if ((uint)param_1[0x33] <= (uint)(1 << ((byte)uVar5 & 0x1f))) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x20);
  param_1[0x32] = uVar5 * 2;
  param_1[0x2b] = 0;
  param_1[0x34] = 0;
  if (param_1[0x1e] == 0) {
    iVar2 = (*(code *)*param_3)(param_3,0x10000);
    param_1[0x1e] = iVar2;
    if (iVar2 == 0) {
      return 2;
    }
    param_1[0x1d] = iVar2 + 0x10000;
  }
  iVar2 = param_1[0x26] + param_1[0x25];
  if (((param_1[0x14] == 0) || (param_1[0x6ea8] == 0)) || (param_1[0x28] != iVar2)) {
    (*(code *)param_3[1])(param_3,param_1[0x14]);
    (*(code *)param_3[1])(param_3,param_1[0x6ea8]);
    param_1[0x14] = 0;
    param_1[0x6ea8] = 0;
    iVar4 = (0x300 << ((byte)iVar2 & 0x1f)) * 2;
    iVar3 = (*(code *)*param_3)(param_3,iVar4);
    param_1[0x14] = iVar3;
    iVar4 = (*(code *)*param_3)(param_3,iVar4);
    param_1[0x6ea8] = iVar4;
    if ((param_1[0x14] == 0) || (iVar4 == 0)) {
      (*(code *)param_3[1])(param_3,param_1[0x14]);
      (*(code *)param_3[1])(param_3,param_1[0x6ea8]);
      param_1[0x14] = 0;
      param_1[0x6ea8] = 0;
      return 2;
    }
    param_1[0x28] = iVar2;
  }
  iVar2 = 0x800;
  uVar5 = param_1[0x33];
  *(bool *)((int)param_1 + 0xf6) = 0x1000000 < uVar5;
  if ((uVar5 == 0x80000000) || (uVar5 == 0xc0000000)) {
    uVar5 = uVar5 - 1;
  }
  if (uVar5 + 0x800 < param_2) {
    iVar2 = param_2 - uVar5;
  }
  piVar1 = param_1 + 0x36;
  iVar2 = FUN_004ee5a0((int)piVar1,uVar5,iVar2,param_1[0xc],0x112,param_4);
  if (iVar2 == 0) {
    return 2;
  }
  *param_1 = (int)piVar1;
  FUN_004ee8b0((int)piVar1,param_1 + 1);
  FUN_004a1830((int)param_1);
  FUN_004a1a30((int)param_1);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return 0;
}


