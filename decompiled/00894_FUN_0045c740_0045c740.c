// Function: FUN_0045c740
// Entry: 0045c740
// Size: 763 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0045c740(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,undefined4 param_6,
            int param_7,undefined4 param_8,int param_9,undefined4 param_10,int param_11)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  
  pcVar14 = (char *)*param_4;
  uVar9 = param_4[1];
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  iVar11 = 0;
  for (; uVar9 != 0; uVar9 = uVar9 - uVar13) {
    uVar13 = 0;
    pcVar5 = pcVar14;
    uVar12 = uVar9;
    do {
      pcVar6 = pcVar5;
      cVar2 = *pcVar6;
      if (cVar2 == ' ') break;
      if (9 < (byte)(cVar2 - 0x30U)) {
        pcVar14 = "Ignoring malformed pax extended attributes";
        goto LAB_0045c892;
      }
      uVar13 = (int)cVar2 + (uVar13 * 5 + -0x18) * 2;
      if (999999 < uVar13) {
        pcVar14 = "Rejecting pax extended attribute > 1MB";
        goto LAB_0045c892;
      }
      uVar12 = uVar12 - 1;
      pcVar5 = pcVar6 + 1;
    } while (uVar12 != 0);
    pbVar7 = (byte *)(pcVar6 + 1);
    if (((uVar9 < uVar13) || (uVar13 == 0)) || (pcVar14[uVar13 - 1] != '\n')) {
      pcVar14 = "Ignoring malformed pax extended attribute";
LAB_0045c892:
      FUN_00487380(param_1,0xffffffff,(int)pcVar14);
      return -0x14;
    }
    (pcVar14 + uVar13)[-1] = '\0';
    bVar3 = *pbVar7;
    pbVar4 = pbVar7;
    if (bVar3 == 0x3d) {
      return -1;
    }
    while ((bVar3 != 0 && (bVar3 != 0x3d))) {
      bVar3 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    if (*pbVar4 == 0) {
      pcVar14 = "Invalid pax extended attributes";
      goto LAB_0045c892;
    }
    *pbVar4 = 0;
    iVar8 = FUN_0045b1d0(param_1,param_2,param_3,pbVar7,(undefined **)(pbVar4 + 1),
                         pcVar14 + (uVar13 - (int)(pbVar4 + 1)) + -1);
    if (iVar8 == -0x1e) {
      return -0x1e;
    }
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
    iVar11 = iVar8;
    pcVar14 = pcVar14 + uVar13;
  }
  if (*(int *)(param_2 + 0x84) == 0) {
    DVar10 = FUN_0048d0a0(param_1,&DAT_005297a0,1);
    if (DVar10 == 0) {
      return -0x1e;
    }
    if (*(int *)(param_2 + 0x104) != 0) {
      FUN_0048d2d0(DVar10,1);
    }
  }
  else {
    DVar10 = *(DWORD *)(param_2 + 0xf0);
  }
  if ((*(uint *)(param_2 + 0x40) != 0) &&
     (iVar8 = FUN_0048cb40(param_3,*(uint **)(param_2 + 0x3c),*(uint *)(param_2 + 0x40),DVar10),
     param_1 = param_5, iVar8 != 0)) {
    iVar11 = FUN_0045d500(param_5,DVar10);
    if (iVar11 == -0x1e) {
      return -0x1e;
    }
    FUN_0048c540(param_7,*(uint **)(param_2 + 0x3c));
  }
  if ((*(uint *)(param_2 + 0x28) != 0) &&
     (iVar8 = FUN_0048cb90(param_7,*(uint **)(param_2 + 0x24),*(uint *)(param_2 + 0x28),DVar10),
     iVar8 != 0)) {
    iVar11 = FUN_0045d500(param_1,DVar10);
    if (iVar11 == -0x1e) {
      return -0x1e;
    }
    FUN_0048c600(param_7,*(uint **)(param_2 + 0x24));
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(int *)(param_2 + 0x10) == 0) goto LAB_0045c9ea;
    iVar8 = 0xc;
  }
  else {
    iVar8 = 0x18;
  }
  puVar1 = (undefined4 *)(iVar8 + param_2);
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar8 = FUN_0048cbc0(param_7,(uint *)*puVar1,puVar1[1],DVar10), iVar8 != 0)) {
    iVar11 = FUN_0045d500(param_9,DVar10);
    if (iVar11 == -0x1e) {
      return -0x1e;
    }
    FUN_0048c710(param_11,(uint *)*puVar1);
    param_7 = param_11;
  }
LAB_0045c9ea:
  if ((*(uint *)(param_2 + 0x34) != 0) &&
     (iVar8 = FUN_0048cc10(param_7,*(uint **)(param_2 + 0x30),*(uint *)(param_2 + 0x34),DVar10),
     iVar8 != 0)) {
    iVar11 = FUN_0045d500(param_9,DVar10);
    if (iVar11 == -0x1e) {
      return -0x1e;
    }
    FUN_0048c8d0(param_7,*(uint **)(param_2 + 0x30));
  }
  return iVar11;
}


