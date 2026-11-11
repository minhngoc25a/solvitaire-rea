// Function: FUN_0047c120
// Entry: 0047c120
// Size: 578 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0047c120(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  float10 extraout_ST0;
  float10 fVar13;
  int local_3c;
  int local_2c;
  double local_28 [4];
  
  piVar4 = FUN_0047bd80(1,param_6,param_2,&local_2c);
  if (piVar4 != (int *)0x0) {
    if (0 < param_7) {
      fVar13 = (float10)0;
      do {
        if (0 < param_6) {
          piVar9 = piVar4 + 2;
          iVar7 = param_5;
          local_3c = param_6;
          do {
            iVar11 = piVar9[-1];
            local_28[0] = (double)fVar13;
            local_28[1] = (double)fVar13;
            local_28[2] = (double)fVar13;
            local_28[3] = (double)fVar13;
            if (iVar11 <= *piVar9) {
              pdVar5 = (double *)piVar9[-2];
              iVar12 = iVar11 * param_9;
              iVar11 = (*piVar9 - iVar11) + 1;
              do {
                dVar1 = *pdVar5;
                iVar8 = 0;
                if (3 < param_9) {
                  pbVar10 = (byte *)(param_1 + 2 + iVar12);
                  do {
                    bVar2 = pbVar10[-1];
                    local_28[iVar8] = (double)pbVar10[-2] * dVar1 + local_28[iVar8];
                    bVar3 = *pbVar10;
                    local_28[iVar8 + 1] = (double)bVar2 * dVar1 + local_28[iVar8 + 1];
                    bVar2 = pbVar10[1];
                    local_28[iVar8 + 2] = (double)bVar3 * dVar1 + local_28[iVar8 + 2];
                    local_28[iVar8 + 3] = (double)bVar2 * dVar1 + local_28[iVar8 + 3];
                    iVar8 = iVar8 + 4;
                    pbVar10 = pbVar10 + 4;
                  } while (iVar8 < param_9 + -3);
                }
                if (iVar8 < param_9) {
                  pbVar10 = (byte *)(iVar12 + iVar8 + param_1);
                  do {
                    bVar2 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                    local_28[iVar8] = (double)bVar2 * dVar1 + local_28[iVar8];
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < param_9);
                }
                pdVar5 = pdVar5 + 1;
                iVar12 = iVar12 + param_9;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            iVar11 = 0;
            if (0 < param_9) {
              do {
                uVar6 = thunk_FUN_00469d60();
                uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
                if (0xfe < (int)uVar6) {
                  uVar6 = 0xff;
                }
                *(char *)(iVar7 + iVar11) = (char)uVar6;
                iVar11 = iVar11 + 1;
                fVar13 = extraout_ST0;
              } while (iVar11 < param_9);
            }
            piVar9 = piVar9 + 3;
            iVar7 = iVar7 + param_9;
            local_3c = local_3c + -1;
          } while (local_3c != 0);
        }
        param_1 = param_1 + param_4;
        param_5 = param_5 + param_8;
        param_7 = param_7 + -1;
      } while (param_7 != 0);
    }
    piVar9 = piVar4;
    iVar7 = local_2c;
    if (0 < local_2c) {
      do {
        FUN_0047d191((LPVOID)*piVar9);
        iVar7 = iVar7 + -1;
        piVar9 = piVar9 + 3;
      } while (iVar7 != 0);
    }
    FUN_0047d191(piVar4);
  }
  return;
}


