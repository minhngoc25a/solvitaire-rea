// Function: FUN_004a8ee0
// Entry: 004a8ee0
// Size: 682 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8ee0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14;
  uint *puStack_10;
  uint *puStack_c;
  char cStack_8;
  LPVOID pvStack_4;
  
  iVar4 = *(int *)(param_1 + 0x280);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_004a5f90(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x280) = iVar4 + -1;
    if (iVar4 + -1 == 1) {
      FUN_0046f1c0(param_1,"No space in chunk cache for sPLT");
      FUN_004a5f90(param_1,param_3);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  puVar3 = FUN_004a9af0(param_1,param_3 + 1,2);
  if (puVar3 == (uint *)0x0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x52386c);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,puVar3,param_3);
  iVar4 = FUN_004a5f90(param_1,0);
  if (iVar4 == 0) {
    *(undefined1 *)(param_3 + (int)puVar3) = 0;
    cVar2 = (char)*puVar3;
    puVar8 = puVar3;
    while (cVar2 != '\0') {
      puVar8 = (uint *)((int)puVar8 + 1);
      cVar2 = *(char *)puVar8;
    }
    if ((1 < param_3) && ((char *)((int)puVar8 + 1) <= (char *)((param_3 - 2) + (int)puVar3))) {
      cStack_8 = *(char *)((int)puVar8 + 1);
      pbVar9 = (byte *)((int)puVar8 + 2);
      uVar5 = (int)puVar3 + (param_3 - (int)pbVar9);
      uVar1 = (uint)(cStack_8 != '\b') * 4 + 6;
      uVar6 = uVar5 / uVar1;
      if (uVar5 % uVar1 != 0) {
        FUN_0046f1c0(param_1,"sPLT chunk has bad length");
        return;
      }
      if (0x19999999 < uVar6) {
        FUN_0046f1c0(param_1,"sPLT chunk too long");
        return;
      }
      pvStack_4 = (LPVOID)FUN_004a4890(param_1,uVar6 * 10);
      if (pvStack_4 == (LPVOID)0x0) {
        FUN_0046f1c0(param_1,"sPLT chunk requires too much memory");
        return;
      }
      local_14 = 0;
      puStack_c = puVar3;
      if (0 < (int)uVar6) {
        iVar4 = 0;
        do {
          if (cStack_8 == '\b') {
            *(ushort *)((int)pvStack_4 + iVar4) = (ushort)*pbVar9;
            *(ushort *)((int)pvStack_4 + iVar4 + 2) = (ushort)pbVar9[1];
            *(ushort *)((int)pvStack_4 + iVar4 + 4) = (ushort)pbVar9[2];
            pbVar10 = pbVar9 + 4;
            uVar7 = (ushort)pbVar9[3];
          }
          else {
            *(ushort *)((int)pvStack_4 + iVar4) = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
            *(ushort *)((int)pvStack_4 + iVar4 + 2) = (ushort)pbVar9[2] * 0x100 + (ushort)pbVar9[3];
            *(ushort *)((int)pvStack_4 + iVar4 + 4) = (ushort)pbVar9[4] * 0x100 + (ushort)pbVar9[5];
            pbVar10 = pbVar9 + 8;
            uVar7 = (ushort)pbVar9[6] * 0x100 + (ushort)pbVar9[7];
          }
          *(ushort *)((int)pvStack_4 + iVar4 + 6) = uVar7;
          pbVar9 = pbVar10 + 2;
          *(ushort *)((int)pvStack_4 + iVar4 + 8) = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
          iVar4 = iVar4 + 10;
          local_14 = local_14 + 1;
          puStack_c = puStack_10;
          param_1 = param_2;
        } while (local_14 < (int)uVar6);
      }
      FUN_004a5490(param_1,param_3,(int)&puStack_c,1);
      FUN_004a48e0(param_1,pvStack_4);
      return;
    }
    FUN_0046f1c0(param_1,"malformed sPLT chunk");
  }
  return;
}


