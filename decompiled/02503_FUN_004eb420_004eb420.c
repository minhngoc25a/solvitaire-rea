// Function: FUN_004eb420
// Entry: 004eb420
// Size: 517 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eb420(int param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 0xaa0) & param_5;
  iVar2 = *(int *)(param_1 + 0x1f0) * 0x10;
  if (param_3 != 0xffffffff) {
    *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 1;
    *(uint *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) =
         param_1 + (iVar2 + 0x3556 + uVar4) * 2;
    iVar2 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar2;
    iVar2 = param_1 + iVar2 * 4;
    iVar6 = param_1 + (*(int *)(param_1 + 0x1f0) + 0x3616) * 2;
    if (3 < param_3) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = iVar6;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      FUN_004eb160(param_1,uVar4,param_3 - 4,param_4);
      param_2[6] = param_2[6] - param_4;
      return;
    }
    *(undefined4 *)(iVar2 + 0x20) = 1;
    *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = iVar6;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    FUN_004eb290(param_1,uVar4,param_3,param_4);
    param_2[6] = param_2[6] - param_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 0;
  *(uint *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_1 + (iVar2 + uVar4 + 0x3556) * 2
  ;
  iVar6 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar6;
  iVar2 = *param_2;
  uVar4 = (uint)*(byte *)((iVar2 - param_2[6]) + param_2[5]);
  iVar3 = ((uint)(*(byte *)((iVar2 - param_2[6]) + -1 + param_2[5]) >>
                 (8U - *(char *)(param_1 + 0xaa4) & 0x1f)) +
          ((*(uint *)(param_1 + 0xaa8) & param_5) << ((byte)*(undefined4 *)(param_1 + 0xaa4) & 0x1f)
          )) * 0x600 + 0xaac + param_1;
  if (*(int *)(param_1 + 0x1f0) < 7) {
    FUN_004ea4f0(param_1,iVar3,8,uVar4);
  }
  else {
    uVar5 = 0x100;
    uVar7 = (uint)*(byte *)(((iVar2 - *(int *)(param_1 + 500)) - param_2[6]) + -1 + param_2[5]);
    uVar4 = uVar4 + 0x100;
    do {
      uVar7 = uVar7 * 2;
      *(uint *)(param_1 + 0x20 + iVar6 * 4) = uVar4 >> 7 & 1;
      uVar1 = uVar4 * 2;
      *(uint *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) =
           iVar3 + ((uVar4 >> 8) + (uVar5 & uVar7) + uVar5) * 2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar6 = *(int *)(param_1 + 0x18);
      uVar5 = uVar5 & ~(uVar7 ^ uVar1);
      uVar4 = uVar1;
    } while (uVar1 < 0x10000);
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  if (3 < iVar2) {
    if (9 < iVar2) {
      *(int *)(param_1 + 0x1f0) = iVar2 + -6;
      param_2[6] = param_2[6] - param_4;
      return;
    }
    *(int *)(param_1 + 0x1f0) = iVar2 + -3;
    param_2[6] = param_2[6] - param_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_2[6] = param_2[6] - param_4;
  return;
}


