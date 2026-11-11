// Function: FUN_00470f90
// Entry: 00470f90
// Size: 302 bytes
// Thunk: false
// External: false


void __cdecl FUN_00470f90(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  char *pcVar22;
  uint uVar23;
  
  uVar23 = (uint)*(ushort *)(param_1 + 0x148);
  bVar4 = false;
  if ((*(ushort *)(param_1 + 0x148) != 0) && (iVar20 = 0, uVar23 != 0)) {
    do {
      cVar1 = *(char *)(*(int *)(param_1 + 0x1b0) + iVar20);
      if (cVar1 != -1) {
        if (cVar1 != '\0') goto LAB_00470fe8;
        bVar4 = true;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)uVar23);
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
  *(uint *)(param_1 + 0x7c) = uVar2 & 0xff7fffff;
  if (!bVar4) {
    *(uint *)(param_1 + 0x7c) = uVar2 & 0xff7ffe7f;
  }
LAB_00470fe8:
  if ((*(uint *)(param_1 + 0x7c) & 0x1100) == 0x1100) {
    pbVar21 = (byte *)((uint)*(byte *)(param_1 + 0x164) * 3 + *(int *)(param_1 + 0x13c));
    *(ushort *)(param_1 + 0x166) = (ushort)*pbVar21;
    *(ushort *)(param_1 + 0x168) = (ushort)pbVar21[1];
    *(ushort *)(param_1 + 0x16a) = (ushort)pbVar21[2];
    cVar19 = UNK_0050dbaf;
    cVar18 = UNK_0050dbae;
    cVar17 = UNK_0050dbad;
    cVar16 = UNK_0050dbac;
    cVar15 = UNK_0050dbab;
    cVar14 = UNK_0050dbaa;
    cVar13 = UNK_0050dba9;
    cVar12 = UNK_0050dba8;
    cVar11 = UNK_0050dba7;
    cVar10 = UNK_0050dba6;
    cVar9 = UNK_0050dba5;
    cVar8 = UNK_0050dba4;
    cVar7 = UNK_0050dba3;
    cVar6 = UNK_0050dba2;
    cVar5 = UNK_0050dba1;
    cVar1 = DAT_0050dba0;
    if ((*(uint *)(param_1 + 0x7c) & 0x2080000) == 0x80000) {
      iVar20 = 0;
      if ((uVar23 != 0) && (0x3f < uVar23)) {
        pcVar22 = (char *)(*(int *)(param_1 + 0x1b0) + 0x20);
        do {
          iVar20 = iVar20 + 0x40;
          pcVar22[-0x20] = cVar1 - pcVar22[-0x20];
          pcVar22[-0x1f] = cVar5 - pcVar22[-0x1f];
          pcVar22[-0x1e] = cVar6 - pcVar22[-0x1e];
          pcVar22[-0x1d] = cVar7 - pcVar22[-0x1d];
          pcVar22[-0x1c] = cVar8 - pcVar22[-0x1c];
          pcVar22[-0x1b] = cVar9 - pcVar22[-0x1b];
          pcVar22[-0x1a] = cVar10 - pcVar22[-0x1a];
          pcVar22[-0x19] = cVar11 - pcVar22[-0x19];
          pcVar22[-0x18] = cVar12 - pcVar22[-0x18];
          pcVar22[-0x17] = cVar13 - pcVar22[-0x17];
          pcVar22[-0x16] = cVar14 - pcVar22[-0x16];
          pcVar22[-0x15] = cVar15 - pcVar22[-0x15];
          pcVar22[-0x14] = cVar16 - pcVar22[-0x14];
          pcVar22[-0x13] = cVar17 - pcVar22[-0x13];
          pcVar22[-0x12] = cVar18 - pcVar22[-0x12];
          pcVar22[-0x11] = cVar19 - pcVar22[-0x11];
          pcVar22[-0x10] = cVar1 - pcVar22[-0x10];
          pcVar22[-0xf] = cVar5 - pcVar22[-0xf];
          pcVar22[-0xe] = cVar6 - pcVar22[-0xe];
          pcVar22[-0xd] = cVar7 - pcVar22[-0xd];
          pcVar22[-0xc] = cVar8 - pcVar22[-0xc];
          pcVar22[-0xb] = cVar9 - pcVar22[-0xb];
          pcVar22[-10] = cVar10 - pcVar22[-10];
          pcVar22[-9] = cVar11 - pcVar22[-9];
          pcVar22[-8] = cVar12 - pcVar22[-8];
          pcVar22[-7] = cVar13 - pcVar22[-7];
          pcVar22[-6] = cVar14 - pcVar22[-6];
          pcVar22[-5] = cVar15 - pcVar22[-5];
          pcVar22[-4] = cVar16 - pcVar22[-4];
          pcVar22[-3] = cVar17 - pcVar22[-3];
          pcVar22[-2] = cVar18 - pcVar22[-2];
          pcVar22[-1] = cVar19 - pcVar22[-1];
          *pcVar22 = cVar1 - *pcVar22;
          pcVar22[1] = cVar5 - pcVar22[1];
          pcVar22[2] = cVar6 - pcVar22[2];
          pcVar22[3] = cVar7 - pcVar22[3];
          pcVar22[4] = cVar8 - pcVar22[4];
          pcVar22[5] = cVar9 - pcVar22[5];
          pcVar22[6] = cVar10 - pcVar22[6];
          pcVar22[7] = cVar11 - pcVar22[7];
          pcVar22[8] = cVar12 - pcVar22[8];
          pcVar22[9] = cVar13 - pcVar22[9];
          pcVar22[10] = cVar14 - pcVar22[10];
          pcVar22[0xb] = cVar15 - pcVar22[0xb];
          pcVar22[0xc] = cVar16 - pcVar22[0xc];
          pcVar22[0xd] = cVar17 - pcVar22[0xd];
          pcVar22[0xe] = cVar18 - pcVar22[0xe];
          pcVar22[0xf] = cVar19 - pcVar22[0xf];
          pcVar22[0x10] = cVar1 - pcVar22[0x10];
          pcVar22[0x11] = cVar5 - pcVar22[0x11];
          pcVar22[0x12] = cVar6 - pcVar22[0x12];
          pcVar22[0x13] = cVar7 - pcVar22[0x13];
          pcVar22[0x14] = cVar8 - pcVar22[0x14];
          pcVar22[0x15] = cVar9 - pcVar22[0x15];
          pcVar22[0x16] = cVar10 - pcVar22[0x16];
          pcVar22[0x17] = cVar11 - pcVar22[0x17];
          pcVar22[0x18] = cVar12 - pcVar22[0x18];
          pcVar22[0x19] = cVar13 - pcVar22[0x19];
          pcVar22[0x1a] = cVar14 - pcVar22[0x1a];
          pcVar22[0x1b] = cVar15 - pcVar22[0x1b];
          pcVar22[0x1c] = cVar16 - pcVar22[0x1c];
          pcVar22[0x1d] = cVar17 - pcVar22[0x1d];
          pcVar22[0x1e] = cVar18 - pcVar22[0x1e];
          pcVar22[0x1f] = cVar19 - pcVar22[0x1f];
          pcVar22 = pcVar22 + 0x40;
        } while (iVar20 < (int)(uVar23 & 0xffffffc0));
      }
      if (iVar20 < (int)uVar23) {
        iVar3 = *(int *)(param_1 + 0x1b0);
        do {
          pbVar21 = (byte *)(iVar3 + iVar20);
          *pbVar21 = ~*pbVar21;
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar23);
      }
    }
  }
  return;
}


