// Function: FUN_0049e680
// Entry: 0049e680
// Size: 155 bytes
// Thunk: false
// External: false


void __fastcall FUN_0049e680(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar6 = __aullshr(0x20,*(uint *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 8) = uVar4 << 8;
  if ((0xfeffffff < uVar4) && ((int)uVar6 == 0)) {
    puVar1 = (uint *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uint)(0xfffffffe < uVar4);
    return;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
  *pcVar5 = *(char *)(param_1 + 4) + (char)uVar6;
  pcVar5 = pcVar5 + 1;
  *(uint *)(param_1 + 4) = uVar4 >> 0x18;
  *(char **)(param_1 + 0x18) = pcVar5;
  if (pcVar5 == *(char **)(param_1 + 0x1c)) {
    FUN_0049e640(param_1);
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    do {
      pcVar5 = *(char **)(param_1 + 0x18);
      *pcVar5 = (char)uVar6 + -1;
      pcVar5 = pcVar5 + 1;
      *(char **)(param_1 + 0x18) = pcVar5;
      if (pcVar5 == *(char **)(param_1 + 0x1c)) {
        FUN_0049e640(param_1);
      }
      piVar2 = (int *)(param_1 + 0x10);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1 + (uint)(iVar3 != 0);
    } while (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0);
  }
  return;
}


