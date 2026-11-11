// Function: FUN_004ff0c0
// Entry: 004ff0c0
// Size: 337 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_004ff0c0(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  
  pdVar10 = param_1;
  pdVar12 = (double *)0x0;
  pdVar14 = (double *)0x0;
  param_1 = (double *)0x0;
  pdVar1 = pdVar10 + 0x481;
  pdVar2 = *(double **)(pdVar10 + 0x6a1);
  dVar4 = 1.0 - param_2 / _DAT_0050c0a8;
  dVar7 = 1.0 - dVar4 * dVar4;
  pdVar11 = (double *)0x0;
  pdVar13 = pdVar1;
  pdVar3 = pdVar10;
  dVar4 = _DAT_005223a8;
  dVar5 = _DAT_005223a8;
  dVar8 = _DAT_00522388;
  if (pdVar2 != (double *)0x0) {
    do {
      dVar9 = _DAT_005223a0;
      dVar6 = ABS(pdVar3[4] - param_5) * dVar7 + ABS(pdVar3[2] - param_3) * dVar7;
      if ((dVar6 < dVar5) || (dVar6 < *pdVar13 + dVar4)) {
        dVar6 = ABS(pdVar3[1] - param_2) + ABS(pdVar3[3] - param_4) * dVar7 + dVar6;
        if (dVar6 < dVar5) {
          pdVar12 = pdVar14;
          dVar5 = dVar6;
        }
        dVar8 = _DAT_00522388;
        if (dVar6 < *pdVar13 + dVar4) {
          dVar4 = dVar6 - *pdVar13;
          param_1 = pdVar14;
        }
      }
      pdVar14 = (double *)((int)pdVar14 + 1);
      dVar6 = pdVar13[0x100] * dVar8;
      pdVar13[0x100] = pdVar13[0x100] - dVar6;
      *pdVar13 = dVar6 * dVar9 + *pdVar13;
      pdVar11 = param_1;
      pdVar13 = pdVar13 + 1;
      pdVar3 = pdVar3 + 4;
    } while (pdVar14 < pdVar2);
  }
  pdVar10[(int)pdVar12 + 0x581] = dVar8 + pdVar10[(int)pdVar12 + 0x581];
  pdVar1[(int)pdVar12] = pdVar1[(int)pdVar12] - 1.0;
  return (uint)pdVar11;
}


