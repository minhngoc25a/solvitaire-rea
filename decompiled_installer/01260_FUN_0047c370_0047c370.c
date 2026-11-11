// Function: FUN_0047c370
// Entry: 0047c370
// Size: 613 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0047c370(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 fVar14;
  int local_48;
  int local_44;
  int local_2c;
  double local_28 [4];
  
  piVar4 = FUN_0047bd80(1,param_7,param_3,&local_2c);
  if (piVar4 != (int *)0x0) {
    if (0 < param_6) {
      fVar14 = (float10)0;
      iVar5 = 2 - param_5;
      local_48 = 0;
      do {
        if (0 < param_7) {
          piVar10 = piVar4 + 2;
          iVar8 = param_5;
          local_44 = param_7;
          do {
            iVar12 = piVar10[-1];
            local_28[0] = (double)fVar14;
            local_28[1] = (double)fVar14;
            local_28[2] = (double)fVar14;
            local_28[3] = (double)fVar14;
            if (iVar12 <= *piVar10) {
              pdVar6 = (double *)piVar10[-2];
              iVar13 = iVar12 * param_4 + param_1;
              iVar12 = (*piVar10 - iVar12) + 1;
              do {
                dVar1 = *pdVar6;
                iVar9 = 0;
                if (3 < param_9) {
                  pbVar11 = (byte *)(param_5 + iVar5 + iVar13);
                  do {
                    bVar2 = pbVar11[-1];
                    local_28[iVar9] = (double)pbVar11[-2] * dVar1 + local_28[iVar9];
                    bVar3 = *pbVar11;
                    local_28[iVar9 + 1] = (double)bVar2 * dVar1 + local_28[iVar9 + 1];
                    bVar2 = pbVar11[1];
                    local_28[iVar9 + 2] = (double)bVar3 * dVar1 + local_28[iVar9 + 2];
                    local_28[iVar9 + 3] = (double)bVar2 * dVar1 + local_28[iVar9 + 3];
                    iVar9 = iVar9 + 4;
                    pbVar11 = pbVar11 + 4;
                  } while (iVar9 < param_9 + -3);
                }
                if (iVar9 < param_9) {
                  pbVar11 = (byte *)(local_48 + iVar13 + iVar9);
                  do {
                    bVar2 = *pbVar11;
                    pbVar11 = pbVar11 + 1;
                    local_28[iVar9] = (double)bVar2 * dVar1 + local_28[iVar9];
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < param_9);
                }
                iVar13 = iVar13 + param_4;
                pdVar6 = pdVar6 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            iVar12 = 0;
            if (0 < param_9) {
              do {
                uVar7 = thunk_FUN_00469d60();
                uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
                if (0xfe < (int)uVar7) {
                  uVar7 = 0xff;
                }
                *(char *)(iVar8 + iVar12) = (char)uVar7;
                iVar12 = iVar12 + 1;
                fVar14 = extraout_ST0;
              } while (iVar12 < param_9);
            }
            iVar8 = iVar8 + param_8;
            piVar10 = piVar10 + 3;
            local_44 = local_44 + -1;
          } while (local_44 != 0);
        }
        local_48 = local_48 + param_9;
        param_5 = param_5 + param_9;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    piVar10 = piVar4;
    iVar5 = local_2c;
    if (0 < local_2c) {
      do {
        FUN_0047d191((LPVOID)*piVar10);
        iVar5 = iVar5 + -1;
        piVar10 = piVar10 + 3;
      } while (iVar5 != 0);
    }
    FUN_0047d191(piVar4);
  }
  return;
}


