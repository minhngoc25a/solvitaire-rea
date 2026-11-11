// Function: FUN_004bb3bc
// Entry: 004bb3bc
// Size: 565 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bb3bc(int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_2 + -1;
  iVar2 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar2 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  for (puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar2 + iVar5 * 4 + *(int *)(param_1 + 200));
      (-1 < iVar5 && ((*puVar1 & 0xffffff) != param_4)); puVar1 = puVar1 + -1) {
    FUN_004b8b27(param_1,iVar5,param_3);
    iVar5 = iVar5 + -1;
  }
  iVar2 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar2 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar2 + param_2 * 4 + *(int *)(param_1 + 200));
  if (param_2 < *(int *)(param_1 + 0x80)) {
    do {
      if ((*puVar1 & 0xffffff) == param_4) break;
      FUN_004b8b27(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x80));
  }
  FUN_004bb358(param_1,iVar5,param_2,param_3);
  bVar6 = true;
  if (0 < param_3) {
    iVar2 = param_3 + -1;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar2 = *(int *)(param_1 + 0x84) - param_3;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar2 + iVar5 * 4 + 4 + *(int *)(param_1 + 200));
    iVar2 = iVar5;
    while (iVar2 = iVar2 + 1, iVar2 < param_2) {
      if (((bVar6) && ((*puVar1 & 0xffffff) != param_4)) &&
         (iVar3 = FUN_004bb38c(param_1,iVar2,param_3 + -1), iVar3 == 0)) {
        FUN_004bb3bc(param_1,iVar2,extraout_EDX,param_4);
      }
      bVar6 = (*puVar1 & 0xffffff) == param_4;
      puVar1 = puVar1 + 1;
    }
  }
  bVar6 = true;
  if (param_3 < *(int *)(param_1 + 0x84) + -1) {
    iVar2 = param_3 + 1;
    iVar5 = iVar5 + 1;
    iVar3 = iVar2;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar3 = (*(int *)(param_1 + 0x84) - param_3) + -2;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar3 + iVar5 * 4 + *(int *)(param_1 + 200));
    iVar3 = param_2;
    for (; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      if (((bVar6) && ((*puVar1 & 0xffffff) != param_4)) &&
         (iVar4 = FUN_004bb38c(param_1,iVar5,iVar2), iVar3 = extraout_EDX_00, iVar4 == 0)) {
        FUN_004bb3bc(param_1,iVar5,iVar2,param_4);
        iVar3 = param_2;
      }
      bVar6 = (*puVar1 & 0xffffff) == param_4;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}


