// Function: FUN_0040b270
// Entry: 0040b270
// Size: 272 bytes
// Thunk: false
// External: false


void __cdecl FUN_0040b270(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  sbyte sVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar8 = (uint *)(param_1 + 0x14);
  if ((int)param_2 >> 5 < *(int *)(param_1 + 0x10)) {
    puVar1 = puVar8 + ((int)param_2 >> 5);
    puVar2 = puVar8 + *(int *)(param_1 + 0x10);
    if ((param_2 & 0x1f) == 0) {
      puVar6 = puVar1;
      if (puVar2 <= puVar1) goto LAB_0040b320;
      do {
        puVar4 = puVar6 + 1;
        *puVar8 = *puVar6;
        puVar6 = puVar4;
        puVar8 = puVar8 + 1;
      } while (puVar4 < puVar2);
      iVar5 = (~(uint)puVar1 + (int)puVar2 & 0xfffffffc) + 4;
    }
    else {
      sVar3 = (sbyte)(param_2 & 0x1f);
      puVar6 = puVar1 + 1;
      uVar9 = *puVar1 >> sVar3;
      puVar4 = puVar8;
      if (puVar6 < puVar2) {
        do {
          puVar7 = puVar6 + 1;
          *puVar4 = *puVar6 << (0x20U - sVar3 & 0x1f) | uVar9;
          uVar9 = *puVar6 >> sVar3;
          puVar6 = puVar7;
          puVar4 = puVar4 + 1;
        } while (puVar7 < puVar2);
        puVar4 = (uint *)(param_1 + 0x18 + ((int)puVar2 + (-5 - (int)puVar1) & 0xfffffffcU));
      }
      *puVar4 = uVar9;
      if (uVar9 != 0) {
        puVar4 = puVar4 + 1;
      }
      iVar5 = (int)puVar4 - (int)puVar8;
    }
    *(int *)(param_1 + 0x10) = iVar5 >> 2;
    if (iVar5 >> 2 != 0) {
      return;
    }
  }
  else {
LAB_0040b320:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


