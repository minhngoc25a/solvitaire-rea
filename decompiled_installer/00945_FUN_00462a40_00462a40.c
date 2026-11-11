// Function: FUN_00462a40
// Entry: 00462a40
// Size: 941 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00462a40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SIZE_T SVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint local_c;
  uint local_8;
  int local_4;
  
  uVar1 = param_1;
  iVar2 = **(int **)(param_1 + 0x440);
  if ((*(int *)(iVar2 + 0xe4) == 0) && (*(int *)(iVar2 + 0xe8) == -1)) {
    uVar7 = 1;
    if (param_2 != 0) {
      uVar7 = param_2;
    }
    iVar3 = FUN_00488710(param_1,uVar7,&param_1);
    if ((iVar3 != 0) && (0 < (int)param_1)) {
      if ((*(uint *)(iVar2 + 0xdc) <= (uint)((int)param_1 >> 0x1f)) &&
         ((*(uint *)(iVar2 + 0xdc) < (uint)((int)param_1 >> 0x1f) ||
          (*(uint *)(iVar2 + 0xd8) < param_1)))) {
        param_1 = *(uint *)(iVar2 + 0xd8);
      }
      uVar7 = (int)param_1 >> 0x1f;
      puVar5 = (uint *)(iVar2 + 0xd8);
      uVar1 = *puVar5;
      *puVar5 = *puVar5 - param_1;
      *(int *)(iVar2 + 0xdc) = (*(int *)(iVar2 + 0xdc) - uVar7) - (uint)(uVar1 < param_1);
      if ((*(uint *)(iVar2 + 0xcc) <= uVar7) &&
         ((*(uint *)(iVar2 + 0xcc) < uVar7 || (*(uint *)(iVar2 + 200) < param_1)))) {
        param_1 = *(uint *)(iVar2 + 200);
      }
      puVar5 = (uint *)(iVar2 + 200);
      uVar1 = *puVar5;
      *puVar5 = *puVar5 - param_1;
      *(int *)(iVar2 + 0xcc) =
           (*(int *)(iVar2 + 0xcc) - ((int)param_1 >> 0x1f)) - (uint)(uVar1 < param_1);
      *(uint *)(iVar2 + 0xb4) = param_1;
      return 0;
    }
  }
  else {
    puVar5 = *(uint **)(iVar2 + 0xa8);
    if (puVar5 == (uint *)0x0) {
      SVar4 = 0x10000;
      *(undefined4 *)(iVar2 + 0xb0) = 0x10000;
      if (0x10000 < param_2) {
        SVar4 = param_2 + 0x3ff & 0xfffffc00;
        *(SIZE_T *)(iVar2 + 0xb0) = SVar4;
      }
      iVar3 = FUN_00482949(SVar4);
      *(int *)(iVar2 + 0xa8) = iVar3;
      if (iVar3 == 0) {
LAB_00462bb9:
        pcVar11 = "No memory for 7-Zip decompression";
        uVar10 = 0xc;
        goto LAB_00462dae;
      }
      *(undefined4 *)(iVar2 + 0xb4) = 0;
    }
    else if ((*(uint *)(iVar2 + 0xb0) < param_2) || (*(uint *)(iVar2 + 0xb4) < param_2)) {
      iVar3 = 0;
      if (*(int *)(iVar2 + 0xac) != 0) {
        iVar3 = *(int *)(iVar2 + 0xac) - (int)puVar5;
      }
      if (*(uint *)(iVar2 + 0xb0) < param_2) {
        uVar7 = param_2 + 0x3ff & 0xfffffc00;
        puVar5 = (uint *)FUN_00482954(puVar5,uVar7);
        if (puVar5 == (uint *)0x0) goto LAB_00462bb9;
        *(uint **)(iVar2 + 0xa8) = puVar5;
        *(uint *)(iVar2 + 0xb0) = uVar7;
      }
      if (iVar3 != 0) {
        FUN_0044c490(puVar5,(uint *)((int)puVar5 + iVar3),*(uint *)(iVar2 + 0xb4));
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0xb4) = 0;
    }
    *(undefined4 *)(iVar2 + 0xac) = 0;
    puVar5 = (uint *)FUN_00488710(uVar1,1,&param_3);
    while (0 < (int)param_3) {
      local_8 = *(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0xb4);
      local_c = param_3;
      if ((*(int *)(iVar2 + 0xdc) == 0) && (local_c = param_3, *(uint *)(iVar2 + 0xd8) < param_3)) {
        local_c = *(uint *)(iVar2 + 0xd8);
      }
      uVar7 = FUN_00462210(uVar1,iVar2,(uint *)(*(int *)(iVar2 + 0xa8) + *(int *)(iVar2 + 0xb4)),
                           &local_8,puVar5,&local_c);
      if (uVar7 == 0) {
        local_4 = 0;
      }
      else {
        if (uVar7 != 1) {
          return 0xffffffe2;
        }
        local_4 = 1;
      }
      iVar9 = *(uint *)(iVar2 + 0xd8) - local_c;
      iVar3 = *(int *)(iVar2 + 0xdc) - (uint)(*(uint *)(iVar2 + 0xd8) < local_c);
      uVar7 = *(uint *)(iVar2 + 200);
      *(int *)(iVar2 + 0xdc) = iVar3;
      *(int *)(iVar2 + 0xd8) = iVar9;
      uVar8 = local_8;
      if ((*(int *)(iVar2 + 0xcc) == 0) && (uVar7 < local_8)) {
        uVar8 = uVar7;
      }
      *(uint *)(iVar2 + 0xe0) = local_c;
      *(uint *)(iVar2 + 200) = uVar7 - uVar8;
      local_8 = *(int *)(iVar2 + 0xcc) - (uint)(uVar7 < uVar8);
      *(uint *)(iVar2 + 0xcc) = local_8;
      uVar6 = *(int *)(iVar2 + 0xb4) + uVar8;
      *(uint *)(iVar2 + 0xb4) = uVar6;
      if ((uVar6 == *(uint *)(iVar2 + 0xb0)) ||
         ((((*(int *)(iVar2 + 0xe8) == 0x3030103 && (*(int *)(iVar2 + 0x4d00) != 0)) &&
           (param_1 = uVar6, *(uint *)(iVar2 + 0xb0) < uVar6 + 5)) ||
          ((iVar9 == 0 && iVar3 == 0 && (uVar7 - uVar8 == 0 && local_8 == 0)))))) {
        if (param_4 <= uVar6) {
          *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar2 + 0xa8);
          return 0;
        }
LAB_00462dc4:
        pcVar11 = "Damaged 7-Zip archive";
        uVar10 = 0xffffffff;
        goto LAB_00462dae;
      }
      if ((local_4 != 0) || ((local_c == 0 && (uVar8 == 0)))) goto LAB_00462dc4;
      iVar3 = **(int **)(uVar1 + 0x440);
      if (*(uint *)(iVar3 + 0xe0) != 0) {
        FUN_00488f20(uVar1,(ulonglong)*(uint *)(iVar3 + 0xe0));
        uVar8 = *(uint *)(iVar3 + 0xe0);
        puVar5 = (uint *)(iVar3 + 0xb8);
        uVar7 = *puVar5;
        *puVar5 = *puVar5 + uVar8;
        *(undefined4 *)(iVar3 + 0xe0) = 0;
        *(int *)(iVar3 + 0xbc) = *(int *)(iVar3 + 0xbc) + (uint)CARRY4(uVar7,uVar8);
      }
      puVar5 = (uint *)FUN_00488710(uVar1,1,&param_3);
    }
  }
  pcVar11 = "Truncated 7-Zip file body";
  uVar10 = 0x2a;
LAB_00462dae:
  FUN_00487380(uVar1,uVar10,(int)pcVar11);
  return 0xffffffe2;
}


