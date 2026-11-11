// Function: FUN_004bb5f1
// Entry: 004bb5f1
// Size: 535 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bb5f1(int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *extraout_EDX;
  uint *puVar4;
  int extraout_EDX_00;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = param_2 + -1;
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar6 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  for (puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar6 + iVar5 * 4 + *(int *)(param_1 + 200));
      (-1 < iVar5 && ((*puVar1 & 0xffffff) == param_4)); puVar1 = puVar1 + -1) {
    FUN_004b8b27(param_1,iVar5,param_3);
    iVar5 = iVar5 + -1;
  }
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar6 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar6 + param_2 * 4 + *(int *)(param_1 + 200));
  if (param_2 < *(int *)(param_1 + 0x80)) {
    do {
      if ((*puVar1 & 0xffffff) != param_4) break;
      FUN_004b8b27(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x80));
  }
  FUN_004bb358(param_1,iVar5,param_2,param_3);
  if (0 < param_3) {
    iVar6 = iVar5 + 1;
    iVar3 = param_3 + -1;
    iVar2 = iVar3;
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar2 = *(int *)(param_1 + 0x84) - param_3;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar2 + iVar6 * 4 + *(int *)(param_1 + 200));
    if (iVar6 < param_2) {
      bVar7 = true;
      do {
        puVar4 = puVar1;
        if (((bVar7) && ((*puVar1 & 0xffffff) == param_4)) &&
           (iVar2 = FUN_004bb38c(param_1,iVar6,iVar3), puVar4 = extraout_EDX, iVar2 == 0)) {
          FUN_004bb5f1(param_1,iVar6,iVar3,param_4);
          puVar4 = puVar1;
        }
        bVar7 = (*puVar4 & 0xffffff) != param_4;
        iVar6 = iVar6 + 1;
        puVar1 = puVar4 + 1;
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
    puVar1 = (uint *)(*(int *)(param_1 + 0xcc) * iVar3 + iVar5 * 4 + *(int *)(param_1 + 200));
    if (iVar5 < param_2) {
      bVar7 = true;
      iVar3 = iVar6;
      do {
        if (((bVar7) && ((*puVar1 & 0xffffff) == param_4)) &&
           (iVar2 = FUN_004bb38c(param_1,iVar5,iVar3), iVar3 = extraout_EDX_00, iVar2 == 0)) {
          FUN_004bb5f1(param_1,iVar5,extraout_EDX_00,param_4);
          iVar3 = iVar6;
        }
        bVar7 = (*puVar1 & 0xffffff) != param_4;
        iVar5 = iVar5 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar5 < param_2);
    }
  }
  return;
}


