// Function: FUN_004fea6a
// Entry: 004fea6a
// Size: 505 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004fea6a(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 fVar11;
  float10 fVar12;
  int iStack00000010;
  int local_10;
  
  iVar2 = param_1;
  fVar10 = (float10)_DAT_005223a8;
  uVar8 = 0;
  uVar1 = *(uint *)(param_1 + 0x3508);
  if (param_2 == 0) {
    param_1 = 0;
    iVar3 = 0;
    iStack00000010 = 0;
    local_10 = 0;
  }
  else {
    local_10 = thunk_FUN_00469d60();
    iVar3 = thunk_FUN_00469d60();
    iStack00000010 = iVar3;
    param_1 = thunk_FUN_00469d60();
    fVar10 = extraout_ST0;
  }
  uVar6 = *(uint *)(iVar2 + 0x2008 + iVar3 * 4);
  uVar4 = uVar6 - 1;
  pbVar7 = (byte *)(iVar2 + 0x3d1a + uVar4 * 4);
  pbVar5 = (byte *)(iVar2 + 0x3d1a + uVar6 * 4);
  fVar12 = (float10)1 - (float10)param_2 / (float10)_DAT_0050c0a8;
  fVar12 = (float10)1 - fVar12 * fVar12;
LAB_004feb1e:
  if (uVar6 < uVar1) goto LAB_004feb2f;
  uVar9 = uVar8;
  fVar11 = fVar10;
  if ((int)uVar4 < 0) {
    return uVar8;
  }
  goto LAB_004febc8;
LAB_004feb2f:
  fVar11 = (float10)(int)((uint)pbVar5[-1] - iStack00000010) *
           (float10)(int)((uint)pbVar5[-1] - iStack00000010) * fVar12;
  if (fVar10 < fVar11) {
    return uVar8;
  }
  fVar11 = (float10)(int)((uint)pbVar5[-2] - local_10) * (float10)(int)((uint)pbVar5[-2] - local_10)
           * fVar12 + fVar11;
  if (((fVar11 < fVar10) &&
      (fVar11 = (float10)(int)((uint)*pbVar5 - param_1) * (float10)(int)((uint)*pbVar5 - param_1) *
                fVar12 + fVar11, fVar11 < fVar10)) &&
     (fVar11 = (float10)(int)((uint)pbVar5[1] - param_2) * (float10)(int)((uint)pbVar5[1] - param_2)
               + fVar11, fVar11 < fVar10)) {
    uVar8 = uVar6;
    fVar10 = fVar11;
  }
  uVar6 = uVar6 + 1;
  pbVar5 = pbVar5 + 4;
  uVar9 = uVar8;
  fVar11 = fVar10;
  if (-1 < (int)uVar4) {
LAB_004febc8:
    fVar10 = (float10)(int)((uint)pbVar7[-1] - iStack00000010) *
             (float10)(int)((uint)pbVar7[-1] - iStack00000010) * fVar12;
    if (fVar11 < fVar10) {
      return uVar9;
    }
    fVar10 = (float10)(int)((uint)*pbVar7 - param_1) * (float10)(int)((uint)*pbVar7 - param_1) *
             fVar12 + fVar10;
    if (((fVar11 <= fVar10) ||
        (fVar10 = (float10)(int)((uint)pbVar7[-2] - local_10) *
                  (float10)(int)((uint)pbVar7[-2] - local_10) * fVar12 + fVar10, fVar11 <= fVar10))
       || (fVar10 = (float10)(int)((uint)pbVar7[1] - param_2) *
                    (float10)(int)((uint)pbVar7[1] - param_2) + fVar10, uVar8 = uVar4,
          fVar11 <= fVar10)) {
      uVar8 = uVar9;
      fVar10 = fVar11;
    }
    uVar4 = uVar4 - 1;
    pbVar7 = pbVar7 + -4;
  }
  goto LAB_004feb1e;
}


