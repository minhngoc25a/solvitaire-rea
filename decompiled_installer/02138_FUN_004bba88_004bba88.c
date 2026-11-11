// Function: FUN_004bba88
// Entry: 004bba88
// Size: 600 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bba88(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  uint3 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = param_2 + -1;
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar6 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  for (puVar4 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar6 + iVar5 * 3 + *(int *)(param_1 + 200));
      (-1 < iVar5 && (*puVar4 == param_4)); puVar4 = (uint3 *)((int)puVar4 + -3)) {
    FUN_004b8b27(param_1,iVar5,param_3);
    iVar5 = iVar5 + -1;
  }
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar6 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  for (puVar4 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar6 + param_2 * 3 + *(int *)(param_1 + 200));
      (param_2 < *(int *)(param_1 + 0x80) && (*puVar4 == param_4));
      puVar4 = (uint3 *)((int)puVar4 + 3)) {
    FUN_004b8b27(param_1,param_2,param_3);
    param_2 = param_2 + 1;
  }
  FUN_004bb358(param_1,iVar5,param_2,param_3);
  if (0 < param_3) {
    iVar6 = iVar5 + 1;
    iVar3 = param_3 + -1;
    iVar2 = iVar3;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar2 = *(int *)(param_1 + 0x84) - param_3;
    }
    puVar4 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar2 + iVar6 * 3 + *(int *)(param_1 + 200));
    if (iVar6 < param_2) {
      bVar7 = true;
      iVar2 = iVar3;
      do {
        if (((bVar7) && (*puVar4 == param_4)) &&
           (iVar1 = FUN_004bb38c(param_1,iVar6,iVar2), iVar2 = extraout_EDX, iVar1 == 0)) {
          FUN_004bba88(param_1,iVar6,extraout_EDX,param_4);
          iVar2 = iVar3;
        }
        bVar7 = *puVar4 != param_4;
        iVar6 = iVar6 + 1;
        puVar4 = (uint3 *)((int)puVar4 + 3);
      } while (iVar6 < param_2);
    }
  }
  if (param_3 < *(int *)(param_1 + 0x84) + -1) {
    iVar5 = iVar5 + 1;
    iVar6 = param_3 + 1;
    iVar3 = iVar6;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar3 = (*(int *)(param_1 + 0x84) - param_3) + -2;
    }
    puVar4 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar3 + iVar5 * 3 + *(int *)(param_1 + 200));
    if (iVar5 < param_2) {
      bVar7 = true;
      iVar3 = iVar6;
      do {
        if (((bVar7) && (*puVar4 == param_4)) &&
           (iVar2 = FUN_004bb38c(param_1,iVar5,iVar3), iVar3 = extraout_EDX_00, iVar2 == 0)) {
          FUN_004bba88(param_1,iVar5,extraout_EDX_00,param_4);
          iVar3 = iVar6;
        }
        bVar7 = *puVar4 != param_4;
        iVar5 = iVar5 + 1;
        puVar4 = (uint3 *)((int)puVar4 + 3);
      } while (iVar5 < param_2);
    }
  }
  return;
}


