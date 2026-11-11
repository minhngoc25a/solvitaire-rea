// Function: FUN_00497150
// Entry: 00497150
// Size: 494 bytes
// Thunk: false
// External: false


char __cdecl FUN_00497150(int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  while ((param_1[0x1d] != 0 || (FUN_00496bd0(param_1), param_1[0x1d] != 0))) {
    param_1[0x18] = 0;
    bVar2 = *(byte *)(param_1[0x1b] + param_1[0xe]);
    *(undefined1 *)(param_1[0x5a6] + param_1[0x5a8]) = 0;
    param_1[0x5a8] = param_1[0x5a8] + 1;
    *(undefined1 *)(param_1[0x5a8] + param_1[0x5a6]) = 0;
    param_1[0x5a8] = param_1[0x5a8] + 1;
    *(byte *)(param_1[0x5a8] + param_1[0x5a6]) = bVar2;
    param_1[0x5a8] = param_1[0x5a8] + 1;
    *(short *)(param_1 + bVar2 + 0x25) = (short)param_1[bVar2 + 0x25] + 1;
    iVar3 = param_1[0x1b];
    param_1[0x1d] = param_1[0x1d] + -1;
    param_1[0x1b] = iVar3 + 1;
    if (param_1[0x5a8] == param_1[0x5a9]) {
      iVar4 = param_1[0x17];
      if (iVar4 < 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)(param_1[0xe] + iVar4);
      }
      FUN_004d09b0(param_1,puVar5,(iVar3 + 1) - iVar4,0);
      iVar3 = *param_1;
      param_1[0x17] = param_1[0x1b];
      iVar4 = *(int *)(iVar3 + 0x1c);
      thunk_FUN_004d2390(iVar4);
      uVar6 = *(uint *)(iVar3 + 0x10);
      if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar3 + 0x10)) {
        uVar6 = *(uint *)(iVar4 + 0x14);
      }
      if (uVar6 != 0) {
        FUN_0044c490(*(uint **)(iVar3 + 0xc),*(uint **)(iVar4 + 0x10),uVar6);
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar6;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar6;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar6;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar6;
        piVar1 = (int *)(iVar4 + 0x14);
        *piVar1 = *piVar1 - uVar6;
        if (*piVar1 == 0) {
          *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
        }
      }
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  }
  if (param_2 == 0) {
    return '\0';
  }
  param_1[0x5ad] = 0;
  if (param_2 != 4) {
    if (param_1[0x5a8] != 0) {
      iVar3 = param_1[0x17];
      if (iVar3 < 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)(param_1[0xe] + iVar3);
      }
      FUN_004d09b0(param_1,puVar5,param_1[0x1b] - iVar3,0);
      param_1[0x17] = param_1[0x1b];
      FUN_00497370(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
    return '\x01';
  }
  iVar3 = param_1[0x17];
  if (iVar3 < 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)(param_1[0xe] + iVar3);
  }
  FUN_004d09b0(param_1,puVar5,param_1[0x1b] - iVar3,1);
  iVar3 = *param_1;
  param_1[0x17] = param_1[0x1b];
  iVar4 = *(int *)(iVar3 + 0x1c);
  thunk_FUN_004d2390(iVar4);
  uVar6 = *(uint *)(iVar3 + 0x10);
  if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar3 + 0x10)) {
    uVar6 = *(uint *)(iVar4 + 0x14);
  }
  if (uVar6 != 0) {
    FUN_0044c490(*(uint **)(iVar3 + 0xc),*(uint **)(iVar4 + 0x10),uVar6);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar6;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + uVar6;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar6;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar6;
    piVar1 = (int *)(iVar4 + 0x14);
    *piVar1 = *piVar1 - uVar6;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
    }
  }
  return (*(int *)(*param_1 + 0x10) != 0) + '\x02';
}


