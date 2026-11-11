// Function: FUN_0047bd80
// Entry: 0047bd80
// Size: 920 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_0047bd80(int param_1,int param_2,int param_3,int *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int local_7c;
  int local_74;
  double local_60;
  
  dVar2 = 1.0;
  local_60 = 1.0;
  if (param_1 != 0) {
    _DAT_00544170 = _DAT_0050e0e0;
    _DAT_00544178 = _DAT_0050c390;
    _DAT_00544180 = _DAT_0050e0e8;
    _DAT_00544188 = _DAT_0050e0f0;
    _DAT_00544190 = _DAT_0050e108;
    _DAT_00544198 = _DAT_0050c328;
    _DAT_005441a0 = _DAT_0050e100;
    dVar2 = _DAT_0050c328;
  }
  dVar3 = (double)param_2 / (double)param_3;
  if (dVar3 < 1.0) {
    dVar2 = dVar2 / dVar3;
    local_60 = dVar3;
  }
  FUN_0046a0e0(dVar2);
  iVar10 = thunk_FUN_00469d60();
  iVar10 = iVar10 * 2 + 1;
  *param_4 = param_2;
  piVar11 = (int *)FUN_00482949(param_2 * 0xc);
  iVar12 = *param_4;
  iVar17 = 0;
  if (0 < iVar12) {
    piVar16 = piVar11;
    do {
      iVar12 = FUN_00482949(iVar10 * 8);
      *piVar16 = iVar12;
      piVar16 = piVar16 + 3;
      iVar17 = iVar17 + 1;
      iVar12 = *param_4;
    } while (iVar17 < iVar12);
  }
  local_74 = 0;
  dVar4 = DAT_0050c088 / dVar3 - DAT_0050c088;
  if (0 < iVar12) {
    piVar16 = piVar11;
    do {
      dVar5 = dVar4 + (double)local_74 / dVar3;
      FUN_0046a200(dVar5 - dVar2);
      uVar13 = thunk_FUN_00469d60();
      uVar13 = ((int)uVar13 < 0) - 1 & uVar13;
      FUN_0046a0e0(dVar5 + dVar2);
      local_7c = thunk_FUN_00469d60();
      if (param_3 + -1 <= local_7c) {
        local_7c = param_3 + -1;
      }
      if (iVar10 < (int)((local_7c - uVar13) + 1)) {
        if ((int)uVar13 < param_3) {
          uVar13 = uVar13 + 1;
        }
        else {
          local_7c = local_7c + -1;
        }
      }
      dVar7 = 0.0;
      piVar16[1] = uVar13;
      piVar16[2] = local_7c;
      if ((int)uVar13 <= local_7c) {
        iVar12 = 0;
        uVar14 = uVar13;
        dVar6 = dVar7;
        if (param_1 == 0) {
          do {
            dVar9 = ABS((dVar5 - (double)(int)uVar14) * local_60);
            dVar8 = dVar7;
            if (dVar9 < 1.0) {
              dVar8 = 1.0 - dVar9;
            }
            uVar14 = uVar14 + 1;
            *(double *)(iVar12 + *piVar16) = dVar8 * local_60;
            iVar12 = iVar12 + 8;
            dVar6 = dVar8 * local_60 + dVar6;
          } while ((int)uVar14 <= local_7c);
        }
        else {
          do {
            dVar8 = ABS((dVar5 - (double)(int)uVar14) * local_60);
            if (1.0 <= dVar8) {
              dVar9 = dVar7;
              if (dVar8 < _DAT_0050c328) {
                dVar9 = ((_DAT_005441a0 * dVar8 + _DAT_00544198) * dVar8 + _DAT_00544190) * dVar8 +
                        _DAT_00544188;
              }
            }
            else {
              dVar9 = dVar8 * dVar8 * (_DAT_00544180 * dVar8 + _DAT_00544178) + _DAT_00544170;
            }
            uVar14 = uVar14 + 1;
            *(double *)(iVar12 + *piVar16) = dVar9 * local_60;
            iVar12 = iVar12 + 8;
            dVar6 = dVar9 * local_60 + dVar6;
          } while ((int)uVar14 <= local_7c);
        }
        if ((0.0 < dVar6) && (dVar6 != 1.0)) {
          uVar14 = uVar13;
          if (3 < (int)((local_7c - uVar13) + 1)) {
            iVar12 = 0;
            iVar18 = ((local_7c - uVar13) - 3 >> 2) + 1;
            uVar14 = uVar13 + iVar18 * 4;
            iVar15 = 0x18;
            iVar17 = 0x18;
            do {
              *(double *)(iVar12 + *piVar16) = *(double *)(iVar12 + *piVar16) / dVar6;
              *(double *)(iVar12 + 8 + *piVar16) = *(double *)(iVar12 + 8 + *piVar16) / dVar6;
              pdVar1 = (double *)(*piVar16 + -8 + iVar15);
              iVar15 = iVar15 + 0x20;
              *(double *)(iVar17 + -8 + *piVar16) = *pdVar1 / dVar6;
              iVar17 = iVar17 + 0x20;
              *(double *)(iVar12 + 0x18 + *piVar16) = *(double *)(iVar12 + 0x18 + *piVar16) / dVar6;
              iVar12 = iVar12 + 0x20;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            if (local_7c < (int)uVar14) goto LAB_0047c0e8;
          }
          iVar12 = (uVar14 - uVar13) * 8;
          iVar17 = (local_7c - uVar14) + 1;
          do {
            *(double *)(*piVar16 + iVar12) = *(double *)(*piVar16 + iVar12) / dVar6;
            iVar12 = iVar12 + 8;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
      }
LAB_0047c0e8:
      local_74 = local_74 + 1;
      piVar16 = piVar16 + 3;
    } while (local_74 < *param_4);
  }
  return piVar11;
}


