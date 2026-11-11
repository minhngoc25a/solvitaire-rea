// Function: FUN_004dca30
// Entry: 004dca30
// Size: 563 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004dca30(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  pbVar9 = *(byte **)(param_1 + 0x60);
  uVar2 = *(uint *)(param_2 + 100);
  pbVar8 = *(byte **)(param_2 + 0x60);
  pbVar10 = pbVar9;
  pbVar7 = pbVar8;
  uVar5 = uVar2;
  uVar4 = uVar2;
  if (*(int *)(param_1 + 100) <= (int)uVar2) {
    uVar5 = *(uint *)(param_1 + 100);
    uVar4 = *(uint *)(param_1 + 100);
  }
  while (uVar12 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar10 != *(int *)pbVar7) goto LAB_004dca86;
    pbVar10 = pbVar10 + 4;
    pbVar7 = pbVar7 + 4;
    uVar5 = uVar12;
  }
  if (uVar12 == 0xfffffffc) {
LAB_004dcaba:
    uVar5 = 0;
  }
  else {
LAB_004dca86:
    bVar14 = *pbVar10 < *pbVar7;
    if ((*pbVar10 == *pbVar7) &&
       ((uVar12 == 0xfffffffd ||
        ((bVar14 = pbVar10[1] < pbVar7[1], pbVar10[1] == pbVar7[1] &&
         ((uVar12 == 0xfffffffe ||
          ((bVar14 = pbVar10[2] < pbVar7[2], pbVar10[2] == pbVar7[2] &&
           ((uVar12 == 0xffffffff || (bVar14 = pbVar10[3] < pbVar7[3], pbVar10[3] == pbVar7[3]))))))
         )))))) goto LAB_004dcaba;
    uVar5 = -(uint)bVar14 | 1;
  }
  if (uVar5 != 0) {
    return uVar5;
  }
  iVar11 = *(int *)(param_1 + 100);
  if (iVar11 < (int)uVar2) {
    pbVar10 = pbVar8 + uVar4;
    iVar6 = uVar2 - iVar11;
    while (iVar6 != 0) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar6 = iVar6 + -1;
      if (bVar1 != 0) {
        return -(uint)bVar1;
      }
    }
  }
  else if ((int)uVar2 < iVar11) {
    pbVar10 = pbVar9 + uVar4;
    iVar6 = iVar11 - uVar2;
    while (iVar6 != 0) {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar6 = iVar6 + -1;
      if (bVar1 != 0) {
        return (uint)bVar1;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x68);
  if (uVar5 == 0) {
    if (*(int *)(param_2 + 0x68) != 0) {
      return 0xffffffff;
    }
    return 0;
  }
  if (uVar5 == 2) {
    return -(uint)(*(int *)(param_2 + 0x68) != 2);
  }
  if ((int)uVar5 < 3) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_2 + 0x68);
  if ((int)uVar4 < 3) {
    return 1;
  }
  pbVar10 = pbVar9 + iVar11;
  uVar12 = uVar5;
  if ((int)uVar4 < (int)uVar5) {
    uVar12 = uVar4;
  }
  pbVar7 = pbVar8 + uVar2;
  uVar13 = uVar12;
  while (uVar3 = uVar13 - 4, 3 < uVar13) {
    if (*(int *)pbVar10 != *(int *)pbVar7) goto LAB_004dcbb9;
    pbVar10 = pbVar10 + 4;
    pbVar7 = pbVar7 + 4;
    uVar13 = uVar3;
  }
  if (uVar3 != 0xfffffffc) {
LAB_004dcbb9:
    bVar14 = *pbVar10 < *pbVar7;
    if ((*pbVar10 != *pbVar7) ||
       ((uVar3 != 0xfffffffd &&
        ((bVar14 = pbVar10[1] < pbVar7[1], pbVar10[1] != pbVar7[1] ||
         ((uVar3 != 0xfffffffe &&
          ((bVar14 = pbVar10[2] < pbVar7[2], pbVar10[2] != pbVar7[2] ||
           ((uVar3 != 0xffffffff && (bVar14 = pbVar10[3] < pbVar7[3], pbVar10[3] != pbVar7[3])))))))
         ))))) {
      uVar13 = -(uint)bVar14 | 1;
      goto LAB_004dcbef;
    }
  }
  uVar13 = 0;
LAB_004dcbef:
  if (uVar13 == 0) {
    if ((int)uVar5 < (int)uVar4) {
      pbVar8 = pbVar8 + uVar12 + uVar2;
      iVar11 = uVar4 - uVar5;
      while (iVar11 != 0) {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
        if (bVar1 != 0) {
          return -(uint)bVar1;
        }
      }
    }
    else if ((int)uVar4 < (int)uVar5) {
      pbVar9 = pbVar9 + uVar12 + *(int *)(param_1 + 100);
      iVar11 = uVar5 - uVar4;
      if (iVar11 != 0) {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar11 = iVar11 + -1;
          if (bVar1 != 0) {
            return (uint)bVar1;
          }
        } while (iVar11 != 0);
        return 0;
      }
    }
  }
  return uVar13;
}


