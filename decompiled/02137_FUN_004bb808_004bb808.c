// Function: FUN_004bb808
// Entry: 004bb808
// Size: 640 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bb808(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint3 *extraout_EDX;
  uint3 *puVar4;
  int extraout_EDX_00;
  int iVar5;
  uint3 *puVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = param_2 + -1;
  iVar1 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar1 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  for (puVar6 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar1 + iVar5 * 3 + *(int *)(param_1 + 200));
      (-1 < iVar5 && (*puVar6 != param_4)); puVar6 = (uint3 *)((int)puVar6 + -3)) {
    FUN_004b8b27(param_1,iVar5,param_3);
    iVar5 = iVar5 + -1;
  }
  iVar1 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar1 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  puVar6 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar1 + param_2 * 3 + *(int *)(param_1 + 200));
  if (param_2 < *(int *)(param_1 + 0x80)) {
    do {
      if (*puVar6 == param_4) break;
      FUN_004b8b27(param_1,param_2,param_3);
      puVar6 = (uint3 *)((int)puVar6 + 3);
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x80));
  }
  FUN_004bb358(param_1,iVar5,param_2,param_3);
  bVar8 = true;
  if (0 < param_3) {
    iVar2 = iVar5 + 1;
    iVar1 = param_3 + -1;
    iVar3 = iVar1;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar3 = *(int *)(param_1 + 0x84) - param_3;
    }
    puVar6 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar3 + iVar2 * 3 + *(int *)(param_1 + 200));
    bVar7 = bVar8;
    for (; iVar2 < param_2; iVar2 = iVar2 + 1) {
      puVar4 = puVar6;
      if (((bVar7) && (*puVar6 != param_4)) &&
         (iVar3 = FUN_004bb38c(param_1,iVar2,iVar1), puVar4 = extraout_EDX, iVar3 == 0)) {
        FUN_004bb808(param_1,iVar2,iVar1,param_4);
        puVar4 = puVar6;
      }
      bVar7 = *puVar4 == param_4;
      puVar6 = (uint3 *)((int)puVar4 + 3);
    }
  }
  if (param_3 < *(int *)(param_1 + 0x84) + -1) {
    iVar1 = param_3 + 1;
    iVar5 = iVar5 + 1;
    iVar2 = iVar1;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar2 = (*(int *)(param_1 + 0x84) - param_3) + -2;
    }
    puVar6 = (uint3 *)(*(int *)(param_1 + 0xcc) * iVar2 + iVar5 * 3 + *(int *)(param_1 + 200));
    iVar2 = iVar1;
    for (; iVar5 < param_2; iVar5 = iVar5 + 1) {
      if (((bVar8) && (*puVar6 != param_4)) &&
         (iVar3 = FUN_004bb38c(param_1,iVar5,iVar2), iVar2 = extraout_EDX_00, iVar3 == 0)) {
        FUN_004bb808(param_1,iVar5,extraout_EDX_00,param_4);
        iVar2 = iVar1;
      }
      bVar8 = *puVar6 == param_4;
      puVar6 = (uint3 *)((int)puVar6 + 3);
    }
  }
  return;
}


