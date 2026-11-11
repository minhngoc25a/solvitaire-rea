// Function: FUN_004a8790
// Entry: 004a8790
// Size: 641 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8790(int param_1,int param_2,uint param_3,byte param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  LPVOID pvVar8;
  int iVar9;
  int iVar10;
  uint *unaff_retaddr;
  uint *puStack_4;
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  puVar5 = FUN_004a9af0(param_1,param_3 + 1,2);
  if (puVar5 == (uint *)0x0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x52386c);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,puVar5,param_3);
  iVar6 = FUN_004a5f90(param_1,0);
  if (iVar6 == 0) {
    puVar1 = (undefined1 *)((int)puVar5 + param_3);
    *puVar1 = 0;
    cVar2 = (char)*puVar5;
    while (cVar2 != '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      cVar2 = *(char *)puVar5;
    }
    if ((int)puVar1 - (int)puVar5 < 0xd) {
      FUN_0046f3d0(param_1,0x527b5c);
      return;
    }
    iVar6 = CONCAT31(CONCAT21(CONCAT11(*(char *)((int)puVar5 + 1),*(char *)((int)puVar5 + 2)),
                              *(char *)((int)puVar5 + 3)),(char)puVar5[1]);
    if (*(char *)((int)puVar5 + 1) < '\0') {
      iVar6 = -(-iVar6 & 0x7fffffffU);
    }
    iVar10 = CONCAT31(CONCAT21(CONCAT11(*(char *)((int)puVar5 + 5),*(char *)((int)puVar5 + 6)),
                               *(char *)((int)puVar5 + 7)),(char)puVar5[2]);
    if (*(char *)((int)puVar5 + 5) < '\0') {
      iVar10 = -(-iVar10 & 0x7fffffffU);
    }
    bVar3 = *(byte *)((int)puVar5 + 9);
    bVar4 = *(byte *)((int)puVar5 + 10);
    puVar5 = (uint *)((int)puVar5 + 0xb);
    if (bVar3 == 0) {
      if (bVar4 != 2) {
LAB_004a891f:
        FUN_0046f3d0(param_1,0x524288);
        return;
      }
    }
    else if ((bVar3 == 1) || (bVar3 == 2)) {
      if (bVar4 != 3) goto LAB_004a891f;
    }
    else if (bVar3 == 3) {
      if (bVar4 != 4) goto LAB_004a891f;
    }
    else if (3 < bVar3) {
      FUN_0046f3d0(param_1,0x526d44);
      puVar5 = puStack_4;
      bVar4 = param_4;
    }
    cVar2 = (char)*puVar5;
    while (cVar2 != '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      cVar2 = *(char *)puVar5;
    }
    uVar7 = (uint)bVar4;
    pvVar8 = (LPVOID)FUN_004a4890(param_1,uVar7 << 2);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_0046f3d0(param_1,0x52386c);
      return;
    }
    iVar9 = 0;
    if (uVar7 != 0) {
      do {
        puVar5 = (uint *)((int)puVar5 + 1);
        *(uint **)((int)pvVar8 + iVar9 * 4) = puVar5;
        while( true ) {
          if (unaff_retaddr < puVar5) {
            FUN_004a48e0(param_1,pvVar8);
            FUN_0046f3d0(param_1,0x528968);
            return;
          }
          if ((char)*puVar5 == '\0') break;
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar7);
    }
    FUN_004a50d0(param_1,param_5,(uint *)param_1,iVar6,iVar10,(uint)puVar1 >> 0x18,uVar7,puStack_4,
                 (int)pvVar8);
    FUN_004a48e0(param_1,pvVar8);
  }
  return;
}


