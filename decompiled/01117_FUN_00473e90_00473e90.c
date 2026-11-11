// Function: FUN_00473e90
// Entry: 00473e90
// Size: 196 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00473e90(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  uVar5 = _UNK_0050dbac;
  uVar4 = _UNK_0050dba8;
  uVar3 = _UNK_0050dba4;
  uVar2 = _DAT_0050dba0;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    uVar6 = 0;
    if (uVar1 != 0) {
      if (0x3f < uVar1) {
        do {
          uVar6 = uVar6 + 0x40;
          *param_2 = ~*param_2 & uVar2;
          param_2[1] = ~param_2[1] & uVar3;
          param_2[2] = ~param_2[2] & uVar4;
          param_2[3] = ~param_2[3] & uVar5;
          param_2[4] = ~param_2[4] & uVar2;
          param_2[5] = ~param_2[5] & uVar3;
          param_2[6] = ~param_2[6] & uVar4;
          param_2[7] = ~param_2[7] & uVar5;
          param_2[8] = ~param_2[8] & uVar2;
          param_2[9] = ~param_2[9] & uVar3;
          param_2[10] = ~param_2[10] & uVar4;
          param_2[0xb] = ~param_2[0xb] & uVar5;
          param_2[0xc] = ~param_2[0xc] & uVar2;
          param_2[0xd] = ~param_2[0xd] & uVar3;
          param_2[0xe] = ~param_2[0xe] & uVar4;
          param_2[0xf] = ~param_2[0xf] & uVar5;
          param_2 = param_2 + 0x10;
        } while (uVar6 < (uVar1 & 0xffffffc0));
        if (uVar1 <= uVar6) {
          return;
        }
      }
      iVar8 = uVar1 - uVar6;
      do {
        *(byte *)param_2 = ~(byte)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return;
    }
  }
  else if (*(char *)(param_1 + 8) == '\x04') {
    if (*(char *)(param_1 + 9) == '\b') {
      if (*(int *)(param_1 + 4) != 0) {
        iVar8 = (*(int *)(param_1 + 4) - 1U >> 1) + 1;
        do {
          *(byte *)param_2 = ~(byte)*param_2;
          param_2 = (uint *)((int)param_2 + 2);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return;
      }
    }
    else if ((*(char *)(param_1 + 9) == '\x10') && (*(int *)(param_1 + 4) != 0)) {
      iVar8 = (*(int *)(param_1 + 4) - 1U >> 2) + 1;
      pbVar7 = (byte *)((int)param_2 + 1);
      do {
        pbVar7[-1] = ~pbVar7[-1];
        *pbVar7 = ~*pbVar7;
        iVar8 = iVar8 + -1;
        pbVar7 = pbVar7 + 4;
      } while (iVar8 != 0);
    }
  }
  return;
}


