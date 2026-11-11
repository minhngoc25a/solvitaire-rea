// Function: FUN_00465bd0
// Entry: 00465bd0
// Size: 1813 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00465bd0(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_ESI;
  uint unaff_EDI;
  bool bVar9;
  undefined8 uVar10;
  uint *puStack0000000c;
  char *pcVar11;
  uint *local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  LPVOID local_3c [3];
  int local_30 [3];
  char *local_24 [3];
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  iVar8 = 3;
  puStack0000000c = (uint *)0x0;
  iVar4 = **(int **)(param_1 + 0x440);
  puVar3 = (undefined4 *)(iVar4 + 0x4d18);
  do {
    FUN_0047d191((LPVOID)*puVar3);
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(uint *)(iVar4 + 0xd4) = param_2[8];
  *(uint *)(iVar4 + 0xd0) = param_2[0x16];
  uVar10 = FUN_00462ed0((int)param_2);
  *(undefined8 *)(iVar4 + 200) = uVar10;
  uVar6 = 0;
  *(undefined4 *)(iVar4 + 0xb4) = 0;
  if ((param_2[1] != 0) || (*param_2 != 0)) {
    puVar5 = (uint *)param_2[2];
    do {
      uVar7 = *puVar5;
      if (uVar7 < 0x6f10304) {
        if (uVar7 == 0x6f10303) goto LAB_00465cf9;
        if (uVar7 != 0x303011b) {
          bVar9 = uVar7 == 0x6f10101;
          goto LAB_00465c99;
        }
        puStack0000000c = (uint *)((int)puStack0000000c + 1);
      }
      else {
        bVar9 = uVar7 == 0x6f10701;
LAB_00465c99:
        if (bVar9) {
LAB_00465cf9:
          *(undefined4 *)(iVar4 + 0x4fac) = 1;
          if (*(int *)(param_1 + 0x60) != 0) {
            FUN_0048c8e0(*(int *)(param_1 + 0x60),'\x01');
            FUN_0048c910(*(int *)(param_1 + 0x60),'\x01');
          }
          pcVar11 = "The %s is encrypted, but currently not supported";
          goto LAB_00465ce1;
        }
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 10;
    } while ((param_2[1] != 0) || (uVar6 < *param_2));
  }
  if (*(int *)(iVar4 + 0x4fac) == -1) {
    *(undefined4 *)(iVar4 + 0x4fac) = 0;
  }
  uVar6 = param_2[1];
  uVar7 = *param_2;
  if ((((uVar6 != 0) || (2 < uVar7)) && (puStack0000000c == (uint *)0x0)) ||
     (1 < (int)puStack0000000c)) {
    pcVar11 = "The %s is encoded with many filters, but currently not supported";
LAB_00465ce1:
    FUN_00487380(param_1,0xffffffff,(int)pcVar11);
    return 0xffffffe2;
  }
  puVar5 = (uint *)param_2[2];
  if ((uVar7 == 2) && (uVar6 == 0)) {
    local_58 = puVar5 + 10;
  }
  else {
    local_58 = (uint *)0x0;
  }
  bVar9 = puStack0000000c == (uint *)0x0;
  puStack0000000c = puVar5;
  if (bVar9) goto LAB_004661f7;
  local_24[0] = "";
  local_24[1] = "";
  local_24[2] = "";
  local_3c[0] = (LPVOID)0x0;
  local_3c[1] = (LPVOID)0x0;
  local_3c[2] = (LPVOID)0x0;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_50 = 0;
  local_4c = 1;
  local_48 = 2;
  if ((((uVar7 == 4) && (uVar6 == 0)) &&
      ((puVar5[0x1e] == 0x303011b &&
       (((param_2[0xc] == 7 && (param_2[0xd] == 0)) && (param_2[0xe] == 4)))))) &&
     ((param_2[0xf] == 0 && (*(int *)(iVar4 + 0xd4) == 4)))) {
    if ((*(int *)param_2[6] == 5) && (((int *)param_2[6])[1] == 0)) {
      local_24[1] = (char *)(puVar5 + 10);
      puVar3 = (undefined4 *)param_2[0x10];
      local_50 = 1;
      local_c = puVar3[3];
      local_10 = puVar3[2];
      local_8 = *puVar3;
      local_4 = puVar3[1];
      local_58 = puVar5 + 0x1e;
      local_4c = 2;
      puVar3 = puVar3 + 4;
      local_48 = 0;
      puStack0000000c = puVar5 + 0x14;
      local_24[2] = (char *)puVar5;
    }
    else {
      if (*puVar5 == 0) {
        puStack0000000c = puVar5 + 0x14;
        if (puVar5[10] != 0) {
          if (puVar5[0x14] != 0) goto LAB_004662c8;
          local_58 = puVar5 + 0x1e;
          puVar3 = (undefined4 *)(param_2[0x10] + 0x10);
          puStack0000000c = puVar5 + 10;
          goto LAB_00465f49;
        }
      }
      else if ((puVar5[10] != 0) || (puVar5[0x14] != 0)) {
LAB_004662c8:
        FUN_00487380(param_1,0xffffffff,0x524af8);
        return 0xffffffe2;
      }
      local_58 = puVar5 + 0x1e;
      puVar3 = (undefined4 *)(param_2[0x10] + 0x10);
    }
  }
  else {
    if ((local_58 == (uint *)0x0) ||
       (((*local_58 != 0x303011b || (*(int *)(iVar4 + 0xd4) != 4)) ||
        ((param_2[0xc] != 5 || (((param_2[0xd] != 0 || (param_2[0xe] != 2)) || (param_2[0xf] != 0)))
         ))))) goto LAB_004662c8;
    puVar3 = (undefined4 *)param_2[0x10];
  }
LAB_00465f49:
  *(undefined4 *)(iVar4 + 0x4d14) = *puVar3;
  uVar6 = FUN_004655d0(param_1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  *(undefined4 *)(iVar4 + 0xe0) = *(undefined4 *)(iVar4 + 0xd8);
  FUN_00465320(param_1);
  local_54 = &local_18;
  param_1 = 0;
  do {
    puVar5 = *(uint **)((int)local_30 + param_1 + 0xc);
    uVar6 = FUN_004655d0(uVar2);
    if ((int)uVar6 < 0) {
LAB_004662a0:
      FUN_0047d191(local_3c[0]);
      FUN_0047d191(local_3c[1]);
      FUN_0047d191(local_3c[2]);
      return uVar6;
    }
    uVar6 = *local_54;
    uVar7 = local_54[1];
    if ((uVar6 & uVar7) == 0xffffffff) {
      uVar6 = *(uint *)(iVar4 + 0xd8);
      uVar7 = *(uint *)(iVar4 + 0xdc);
    }
    *(uint *)(iVar4 + 200) = uVar6;
    *(uint *)(iVar4 + 0xcc) = uVar7;
    iVar8 = FUN_004631f0(uVar2,iVar4,puVar5,(uint *)0x0);
    if (iVar8 != 0) {
      FUN_0047d191(local_3c[0]);
      FUN_0047d191(local_3c[1]);
      FUN_0047d191(local_3c[2]);
      return 0xffffffe2;
    }
    local_40 = FUN_00482949(*(SIZE_T *)(iVar4 + 200));
    *(int *)((int)local_3c + param_1) = local_40;
    if (local_40 == 0) {
      FUN_0047d191(local_3c[0]);
      FUN_0047d191(local_3c[1]);
      FUN_0047d191(local_3c[2]);
      FUN_00487380(uVar2,0xc,0x525c24);
      return 0xffffffe2;
    }
    if (*(int *)(iVar4 + 0xdc) != 0) goto LAB_00466015;
    iVar8 = *(int *)(iVar4 + 0xd8);
    while (iVar8 != 0) {
LAB_00466015:
      do {
        uVar6 = FUN_00462a40(uVar2,0,unaff_EDI,unaff_ESI);
        if ((int)uVar6 < 0) goto LAB_004662a0;
        uVar6 = FUN_00463050(uVar2,&local_44,*(uint *)(iVar4 + 0xb4),0);
        if ((int)uVar6 < 0) {
          FUN_0047d191(local_3c[0]);
          FUN_0047d191(local_3c[1]);
          FUN_0047d191(local_3c[2]);
          return uVar6;
        }
        iVar8 = *(int *)((int)local_30 + param_1);
        FUN_0044c490((uint *)(local_40 + iVar8),local_44,uVar6);
        iVar1 = *(int *)(iVar4 + 0xe0);
        *(uint *)((int)local_30 + param_1) = iVar8 + uVar6;
        if (iVar1 != 0) {
          iVar8 = **(int **)(uVar2 + 0x440);
          if (*(uint *)(iVar8 + 0xe0) != 0) {
            FUN_00488f20(uVar2,(ulonglong)*(uint *)(iVar8 + 0xe0));
            uVar7 = *(uint *)(iVar8 + 0xe0);
            puVar5 = (uint *)(iVar8 + 0xb8);
            uVar6 = *puVar5;
            *puVar5 = *puVar5 + uVar7;
            *(undefined4 *)(iVar8 + 0xe0) = 0;
            *(int *)(iVar8 + 0xbc) = *(int *)(iVar8 + 0xbc) + (uint)CARRY4(uVar6,uVar7);
          }
        }
      } while (*(int *)(iVar4 + 0xdc) != 0);
      iVar8 = *(int *)(iVar4 + 0xd8);
    }
    local_54 = local_54 + 2;
    param_1 = param_1 + 4;
  } while (param_1 < 0xc);
  *(LPVOID *)(iVar4 + 0x4d18) = local_3c[local_50];
  iVar8 = local_30[local_50];
  *(int *)(iVar4 + 0x4d24) = iVar8;
  *(int *)(iVar4 + 0x4d30) = iVar8;
  *(LPVOID *)(iVar4 + 0x4d1c) = local_3c[local_4c];
  iVar8 = local_30[local_4c];
  *(int *)(iVar4 + 0x4d28) = iVar8;
  *(int *)(iVar4 + 0x4d34) = iVar8;
  *(LPVOID *)(iVar4 + 0x4d20) = local_3c[local_48];
  iVar8 = local_30[local_48];
  *(int *)(iVar4 + 0x4d2c) = iVar8;
  *(int *)(iVar4 + 0x4d38) = iVar8;
  if (*(int *)(iVar4 + 0x4d3c) == 0) {
    *(undefined4 *)(iVar4 + 0x4d40) = 0x8000;
    iVar8 = FUN_00482949(0x8000);
    *(int *)(iVar4 + 0x4d3c) = iVar8;
    if (iVar8 == 0) {
      FUN_00487380(uVar2,0xc,0x525c24);
      return 0xffffffe2;
    }
  }
  *(undefined4 *)(iVar4 + 0x4d44) = 0;
  *(undefined4 *)(iVar4 + 0x4d48) = 0;
  *(undefined4 *)(iVar4 + 0x4d00) = 0;
  *(undefined4 *)(iVar4 + 0x4f60) = 0;
  *(undefined4 *)(iVar4 + 0x4f64) = 0;
  *(undefined4 *)(iVar4 + 0xd4) = 1;
  *(uint *)(iVar4 + 0xd0) = param_2[0x16];
  uVar10 = FUN_00462ed0((int)param_2);
  *(undefined8 *)(iVar4 + 200) = uVar10;
  *(undefined4 *)(iVar4 + 0xb4) = 0;
LAB_004661f7:
  iVar4 = FUN_004631f0(uVar2,iVar4,puStack0000000c,local_58);
  return -(uint)(iVar4 != 0) & 0xffffffe2;
}


