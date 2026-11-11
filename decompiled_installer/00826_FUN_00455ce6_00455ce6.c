// Function: FUN_00455ce6
// Entry: 00455ce6
// Size: 862 bytes
// Thunk: false
// External: false


void __fastcall FUN_00455ce6(__uint64 *param_1)

{
  byte *pbVar1;
  __uint64 *this;
  short sVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  bool bVar13;
  byte bVar14;
  ushort uVar15;
  uint local_20;
  __uint64 *local_1c;
  int local_18;
  byte *local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_14 = (byte *)0x41;
  iVar10 = 0;
  uVar15 = *(ushort *)((int)param_1 + 0x2e);
  local_1c = param_1;
  if (uVar15 < 0x65) {
    if (uVar15 == 100) {
LAB_00455da9:
      *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x10;
LAB_00455dad:
      uVar8 = FUN_00457940(param_1,0);
      cVar6 = (char)uVar8;
    }
    else if (uVar15 < 0x54) {
      if (uVar15 == 0x53) {
LAB_00455dd6:
        uVar7 = FUN_0045614f(param_1);
        cVar6 = (char)uVar7;
      }
      else {
        if (uVar15 != 0x41) {
          if (uVar15 == 0x43) {
LAB_00455d63:
            uVar7 = FUN_00456044(param_1);
            cVar6 = (char)uVar7;
            goto LAB_00455de6;
          }
          if (((uVar15 != 0x45) && (uVar15 != 0x46)) && (uVar15 != 0x47)) goto LAB_00456035;
        }
LAB_00455d42:
        uVar7 = FUN_00456218((uint *)param_1);
        cVar6 = (char)uVar7;
      }
    }
    else if (uVar15 == 0x58) {
      bVar14 = 1;
LAB_00455d78:
      uVar8 = FUN_0045761c(param_1,bVar14);
      cVar6 = (char)uVar8;
    }
    else {
      if (uVar15 != 0x5a) {
        if (uVar15 != 0x61) {
          if (uVar15 != 99) goto LAB_00456035;
          goto LAB_00455d63;
        }
        goto LAB_00455d42;
      }
      uVar7 = FUN_004560ec(param_1);
      cVar6 = (char)uVar7;
    }
  }
  else if (uVar15 < 0x70) {
    if (uVar15 == 0x6f) {
      cVar6 = FUN_004563bf(param_1);
    }
    else {
      if (((uVar15 == 0x65) || (uVar15 == 0x66)) || (uVar15 == 0x67)) goto LAB_00455d42;
      if (uVar15 == 0x69) goto LAB_00455da9;
      if (uVar15 != 0x6e) goto LAB_00456035;
      uVar8 = FUN_004555cc((int)param_1);
      cVar6 = (char)uVar8;
    }
  }
  else {
    if (uVar15 != 0x70) {
      if (uVar15 == 0x73) goto LAB_00455dd6;
      if (uVar15 != 0x75) {
        if (uVar15 != 0x78) goto LAB_00456035;
        bVar14 = 0;
        goto LAB_00455d78;
      }
      goto LAB_00455dad;
    }
    cVar6 = FUN_004563dc(param_1);
  }
LAB_00455de6:
  if ((cVar6 == '\0') || (*(char *)((int)param_1 + 0x2c) != '\0')) goto LAB_00456035;
  local_10 = 0;
  iVar9 = 0;
  local_c = 0;
  local_18 = 0;
  if ((*(uint *)((int)param_1 + 0x1c) >> 4 & 1) != 0) {
    if ((*(uint *)((int)param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)((int)param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)((int)param_1 + 0x1c) >> 1 & 1) != 0) {
          local_10 = 0x20;
          iVar9 = 1;
          local_18 = 1;
        }
        goto LAB_00455e49;
      }
      uVar15 = 0x2b;
    }
    else {
      uVar15 = 0x2d;
    }
    local_10 = (uint)uVar15;
    local_18 = 1;
    iVar9 = 1;
  }
LAB_00455e49:
  sVar2 = *(short *)((int)param_1 + 0x2e);
  if (((sVar2 != 0x78) && (sVar2 != 0x58)) ||
     (bVar13 = true, (*(uint *)((int)param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar13 = false;
  }
  if ((sVar2 == 0x61) || (bVar5 = false, sVar2 == (short)local_14)) {
    bVar5 = true;
  }
  local_20 = 0x30;
  if ((bVar13) || (bVar5)) {
    *(undefined2 *)((int)&local_10 + iVar9 * 2) = 0x30;
    if ((sVar2 == 0x58) || (uVar11 = 0x78, sVar2 == (short)local_14)) {
      uVar11 = 0x58;
    }
    *(undefined2 *)((int)&local_10 + iVar9 * 2 + 2) = uVar11;
    iVar9 = iVar9 + 2;
    local_18 = iVar9;
  }
  iVar12 = ((int)param_1[4] - *(int *)((int)param_1 + 0x34)) - iVar9;
  if ((*(byte *)((int)param_1 + 0x1c) & 0xc) == 0) {
    piVar3 = *(int **)(param_1 + 1);
    pbVar1 = (byte *)((int)param_1 + 0x14);
    local_14 = pbVar1;
    if (0 < iVar12) {
      this = param_1 + 0x89;
      do {
        FUN_00455794(this,L' ',(int *)pbVar1,piVar3);
        iVar9 = local_18;
        param_1 = local_1c;
        if (*(int *)pbVar1 == -1) break;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar12);
    }
  }
  piVar3 = (int *)((int)param_1 + 0x14);
  write_string(param_1 + 0x89,(WCHAR *)&local_10,iVar9,piVar3,*(int **)(param_1 + 1));
  if (((*(uint *)((int)param_1 + 0x1c) >> 3 & 1) != 0) &&
     ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) == 0)) {
    local_1c = *(__uint64 **)(param_1 + 1);
    local_14 = (byte *)0x0;
    if (0 < iVar12) {
      do {
        FUN_00455794(param_1 + 0x89,(WCHAR)local_20,(int *)((int)param_1 + 0x14U),(int *)local_1c);
        if (*(int *)((int)param_1 + 0x14U) == -1) break;
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar12);
    }
  }
  iVar10 = 0;
  if (((char)param_1[7] == '\0') && (0 < *(int *)((int)param_1 + 0x34))) {
    piVar4 = *(int **)(param_1 + 1);
    if ((char)piVar4[5] == '\0') {
      FUN_0044ef90(piVar4);
    }
    local_14 = *(byte **)(param_1 + 6);
    local_18 = 0;
    bVar13 = *(int *)((int)param_1 + 0x34) == 0;
    while (!bVar13) {
      local_20 = local_20 & 0xffff0000;
      local_1c = (__uint64 *)
                 FUN_0048476e((LPWSTR)&local_20,local_14,*(uint *)(piVar4[3] + 4),
                              *(int **)(param_1 + 1));
      if ((int)local_1c < 1) {
        *(int *)((int)param_1 + 0x14U) = -1;
        break;
      }
      FUN_00455794(param_1 + 0x89,(WCHAR)local_20,(int *)((int)param_1 + 0x14U),
                   *(int **)(param_1 + 1));
      local_14 = local_14 + (int)local_1c;
      local_18 = local_18 + 1;
      bVar13 = local_18 == *(int *)((int)param_1 + 0x34);
    }
  }
  else {
    write_string(param_1 + 0x89,*(WCHAR **)(param_1 + 6),*(int *)((int)param_1 + 0x34),
                 (int *)((int)param_1 + 0x14),*(int **)(param_1 + 1));
  }
  if (((-1 < *(int *)((int)param_1 + 0x14)) && ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (local_1c = *(__uint64 **)(param_1 + 1), 0 < iVar12)) {
    do {
      FUN_00455794(param_1 + 0x89,L' ',piVar3,(int *)local_1c);
      if (*piVar3 == -1) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar12);
  }
LAB_00456035:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


