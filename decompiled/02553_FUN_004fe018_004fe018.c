// Function: FUN_004fe018
// Entry: 004fe018
// Size: 401 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fe018(void *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar14 = (double)CONCAT44(param_3,param_2);
  uVar1 = (ushort)((uint)param_3 >> 0x10);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (DAT_005221f0 * dVar14 + DAT_005221f8) - DAT_005221f8;
    iVar3 = ((int)ROUND(DAT_005221f0 * dVar14) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = _DAT_00522200 * dVar9;
    dVar4 = dVar14 - DAT_00522210 * dVar9;
    dVar14 = dVar14 - DAT_00522210 * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - _UNK_00522208 * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_0051fec0 + iVar3) + *(double *)(&DAT_0051fed8 + iVar3);
    dVar12 = *(double *)(&DAT_0051fed8 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_0051fec0 + iVar3);
    dVar13 = dVar12 + *(double *)(&DAT_0051fec8 + iVar3);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * _DAT_00522218 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_0051fec8 + iVar3) * dVar15 - dVar11) +
                              *(double *)(&DAT_0051fed0 + iVar3) +
                              (*(double *)(&DAT_0051fec8 + iVar3) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (_DAT_005221c0 * dVar6 + _DAT_005221b0 +
                              (_DAT_005221e0 * dVar4 * dVar5 + _DAT_005221d0) * dVar6 * dVar6) *
                              dVar11 * dVar15 * dVar6 +
                              (_UNK_005221c8 * dVar8 + _UNK_005221b8 +
                              (_UNK_005221e8 * dVar4 * dVar7 + _UNK_005221d8) * dVar8 * dVar8) *
                              *(double *)(&DAT_0051fec8 + iVar3) * dVar8);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(DAT_00522240 -
                    (double)((ulonglong)dVar14 & 0xffffffffffff |
                            (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  FUN_004fdf5f(param_1,param_2,param_3);
  return extraout_ST0;
}


