// Function: FUN_00463150
// Entry: 00463150
// Size: 148 bytes
// Thunk: false
// External: false


uint * __cdecl FUN_00463150(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  puVar4 = param_1;
  iVar3 = *(int *)param_1[0x110];
  if ((*(int *)(iVar3 + 0x54) != 0) || (param_2 <= *(uint *)(iVar3 + 0x50))) {
    if (*(int *)(iVar3 + 0xe0) != 0) {
      FUN_00465320((int)param_1);
    }
    if (*(int *)(iVar3 + 0x4c) == 0) {
      puVar4 = (uint *)FUN_00488710((int)puVar4,uVar6,(uint *)0x0);
      if (puVar4 != (uint *)0x0) {
        puVar1 = (uint *)(iVar3 + 0x50);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - uVar6;
        *(uint *)(iVar3 + 0xe0) = uVar6;
        *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) - (uint)(uVar5 < uVar6);
LAB_004631c8:
        uVar6 = thunk_FUN_0048b320(*(uint *)(iVar3 + 0x58),puVar4,uVar6);
        *(uint *)(iVar3 + 0x58) = uVar6;
        return puVar4;
      }
    }
    else {
      uVar5 = FUN_00465370((uint)puVar4,&param_1,uVar6,uVar6);
      if (0 < (int)uVar5) {
        puVar4 = (uint *)(iVar3 + 0x50);
        uVar2 = *puVar4;
        *puVar4 = *puVar4 - uVar5;
        *(int *)(iVar3 + 0x54) =
             (*(int *)(iVar3 + 0x54) - ((int)uVar5 >> 0x1f)) - (uint)(uVar2 < uVar5);
        puVar4 = param_1;
        goto LAB_004631c8;
      }
    }
  }
  return (uint *)0x0;
}


