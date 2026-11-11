// Function: FUN_004bed59
// Entry: 004bed59
// Size: 454 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl FUN_004bed59(int *param_1,int param_2)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  
  dVar6 = _DAT_0051a560;
  dVar5 = _DAT_0051a550;
  dVar4 = _DAT_0051a548;
  dVar3 = _DAT_0051a540;
  iVar12 = param_1[2];
  pbVar1 = (byte *)param_1[7];
  pbVar10 = (byte *)(*param_1 + iVar12 * param_2 * 4);
  iVar11 = param_1[8];
  if (param_1[5] == 1) {
    pbVar9 = pbVar1;
    iVar11 = iVar12;
    if (0 < iVar12) {
      do {
        dVar2 = (double)pbVar10[2] * dVar3 + (double)*pbVar10 * dVar4 + (double)pbVar10[1] * dVar5;
        uVar7 = CONCAT31((uint3)(byte)(dVar2 < dVar6 |
                                      (byte)((ushort)((ushort)(dVar2 == dVar6) << 0xe) >> 8)),1);
        if ((uVar7 & 0x4100) != 0) {
          uVar7 = 0;
        }
        pbVar10 = pbVar10 + 4;
        *pbVar9 = (byte)uVar7;
        iVar11 = iVar11 + -1;
        pbVar9 = pbVar9 + 1;
      } while (iVar11 != 0);
    }
  }
  else if ((param_1[4] & 0x100U) == 0) {
    pbVar9 = pbVar1;
    iVar8 = iVar12;
    if (0 < iVar12) {
      do {
        uVar7 = FUN_004fea6a(iVar11,(uint)pbVar10[3]);
        *pbVar9 = (byte)uVar7;
        pbVar10 = pbVar10 + 4;
        iVar8 = iVar8 + -1;
        pbVar9 = pbVar9 + 1;
      } while (iVar8 != 0);
    }
  }
  else {
    FUN_004bef1f(param_1,(int)pbVar1,param_2,(int)(param_1 + 0x14));
  }
  iVar8 = 0;
  iVar11 = param_1[5];
  if (iVar11 == 1) {
    if (0 < iVar12) {
      iVar12 = (iVar12 - 1U >> 3) + 1;
      pbVar10 = pbVar1;
      pbVar9 = pbVar1 + 2;
      do {
        *pbVar10 = ((((((pbVar9[-2] * '\x02' | pbVar9[-1]) * '\x02' | *pbVar9) * '\x02' | pbVar9[1])
                      * '\x02' | pbVar9[2]) * '\x02' | pbVar9[3]) * '\x02' | pbVar9[4]) * '\x02' |
                   pbVar9[5];
        pbVar10 = pbVar10 + 1;
        iVar12 = iVar12 + -1;
        pbVar9 = pbVar9 + 8;
      } while (iVar12 != 0);
    }
  }
  else if (iVar11 == 2) {
    if (0 < iVar12) {
      iVar12 = (iVar12 - 1U >> 2) + 1;
      pbVar10 = pbVar1 + 2;
      pbVar9 = pbVar1;
      do {
        *pbVar9 = ((pbVar10[-2] << 2 | pbVar10[-1]) << 2 | *pbVar10) << 2 | pbVar10[1];
        pbVar9 = pbVar9 + 1;
        iVar12 = iVar12 + -1;
        pbVar10 = pbVar10 + 4;
      } while (iVar12 != 0);
    }
  }
  else if ((iVar11 == 4) && (pbVar10 = pbVar1, 0 < iVar12)) {
    do {
      pbVar9 = pbVar1 + iVar8;
      iVar11 = iVar8 + 1;
      iVar8 = iVar8 + 2;
      *pbVar10 = *pbVar9 << 4 | pbVar1[iVar11];
      pbVar10 = pbVar10 + 1;
    } while (iVar8 < iVar12);
  }
  return pbVar1;
}


