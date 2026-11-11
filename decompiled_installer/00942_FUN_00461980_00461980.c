// Function: FUN_00461980
// Entry: 00461980
// Size: 452 bytes
// Thunk: false
// External: false


undefined8 __fastcall
FUN_00461980(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint *param_5,
            undefined4 *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  longlong lVar7;
  undefined4 local_4;
  
  local_4 = 0;
  iVar2 = **(int **)(param_3 + 0x440);
  if (*(int *)(iVar2 + 0x4fac) == -1) {
    *(undefined4 *)(iVar2 + 0x4fac) = 0;
  }
  if (*(int *)(iVar2 + 0xe0) != 0) {
    iVar6 = **(int **)(param_3 + 0x440);
    if (*(uint *)(iVar6 + 0xe0) != 0) {
      lVar7 = FUN_00488f20(param_3,(ulonglong)*(uint *)(iVar6 + 0xe0));
      param_2 = (undefined4)((ulonglong)lVar7 >> 0x20);
      uVar5 = *(uint *)(iVar6 + 0xe0);
      puVar1 = (uint *)(iVar6 + 0xb8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      *(undefined4 *)(iVar6 + 0xe0) = 0;
      *(int *)(iVar6 + 0xbc) = *(int *)(iVar6 + 0xbc) + (uint)CARRY4(uVar4,uVar5);
    }
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x94);
  *param_6 = *(undefined4 *)(iVar2 + 0x90);
  param_6[1] = uVar3;
  *param_5 = 0;
  *param_4 = 0;
  if (*(char *)(iVar2 + 0xa4) != '\0') {
    return CONCAT44(param_2,1);
  }
  uVar4 = 0x1000000;
  if ((*(int *)(iVar2 + 0x9c) == 0) && (*(uint *)(iVar2 + 0x98) < 0x1000000)) {
    uVar4 = *(uint *)(iVar2 + 0x98);
  }
  uVar4 = FUN_00465370(param_3,param_4,uVar4,0);
  if (-1 < (int)uVar4) {
    if (uVar4 != 0) {
      puVar1 = (uint *)(iVar2 + 0x98);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      *(int *)(iVar2 + 0x9c) =
           (*(int *)(iVar2 + 0x9c) - ((int)uVar4 >> 0x1f)) - (uint)(uVar5 < uVar4);
      if (*(int *)(iVar2 + 0x98) == 0 && *(int *)(iVar2 + 0x9c) == 0) {
        *(undefined1 *)(iVar2 + 0xa4) = 1;
      }
      if ((*(byte *)(*(int *)(iVar2 + 0x84) + 0x10) & 8) != 0) {
        uVar5 = thunk_FUN_0048b320(*(uint *)(iVar2 + 0xa0),(uint *)*param_4,uVar4);
        *(uint *)(iVar2 + 0xa0) = uVar5;
      }
      if (((*(char *)(iVar2 + 0xa4) != '\0') &&
          ((*(byte *)(*(int *)(iVar2 + 0x84) + 0x10) & 8) != 0)) &&
         (*(int *)(*(int *)(iVar2 + 0x44) + *(int *)(*(int *)(iVar2 + 0x84) + 0xc) * 4) !=
          *(int *)(iVar2 + 0xa0))) {
        FUN_00487380(param_3,0xffffffff,0x523b90);
        local_4 = 0xffffffec;
      }
      *param_5 = uVar4;
      uVar3 = *(undefined4 *)(iVar2 + 0x94);
      *param_6 = *(undefined4 *)(iVar2 + 0x90);
      param_6[1] = uVar3;
      puVar1 = (uint *)(iVar2 + 0x90);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      iVar6 = ((int)uVar4 >> 0x1f) + *(int *)(iVar2 + 0x94) + (uint)CARRY4(uVar5,uVar4);
      *(int *)(iVar2 + 0x94) = iVar6;
      return CONCAT44(iVar6,local_4);
    }
    FUN_00487380(param_3,0x2a,0x523aa4);
    return CONCAT44(extraout_EDX_00,0xffffffe2);
  }
  return CONCAT44(extraout_EDX,uVar4);
}


