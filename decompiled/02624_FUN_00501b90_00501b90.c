// Function: FUN_00501b90
// Entry: 00501b90
// Size: 459 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00501b90(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  bVar8 = *(byte *)(param_1 + param_3) < *(byte *)(param_2 + param_3);
  if (*(byte *)(param_1 + param_3) == *(byte *)(param_2 + param_3)) {
    bVar2 = *(byte *)(param_1 + 1 + param_3);
    bVar3 = *(byte *)(param_2 + 1 + param_3);
    bVar8 = bVar2 < bVar3;
    if (bVar2 == bVar3) {
      bVar2 = *(byte *)(param_1 + 2 + param_3);
      bVar3 = *(byte *)(param_2 + 2 + param_3);
      bVar8 = bVar2 < bVar3;
      if (bVar2 == bVar3) {
        bVar2 = *(byte *)(param_1 + 3 + param_3);
        bVar3 = *(byte *)(param_2 + 3 + param_3);
        bVar8 = bVar2 < bVar3;
        if (bVar2 == bVar3) {
          bVar2 = *(byte *)(param_1 + 4 + param_3);
          bVar3 = *(byte *)(param_2 + 4 + param_3);
          bVar8 = bVar2 < bVar3;
          if (bVar2 == bVar3) {
            bVar2 = *(byte *)(param_1 + 5 + param_3);
            bVar3 = *(byte *)(param_2 + 5 + param_3);
            bVar8 = bVar2 < bVar3;
            if (bVar2 == bVar3) {
              bVar2 = *(byte *)(param_1 + 6 + param_3);
              bVar3 = *(byte *)(param_2 + 6 + param_3);
              bVar8 = bVar2 < bVar3;
              if (bVar2 == bVar3) {
                bVar2 = *(byte *)(param_1 + 7 + param_3);
                bVar3 = *(byte *)(param_2 + 7 + param_3);
                bVar8 = bVar2 < bVar3;
                if (bVar2 == bVar3) {
                  bVar2 = *(byte *)(param_1 + 8 + param_3);
                  bVar3 = *(byte *)(param_2 + 8 + param_3);
                  bVar8 = bVar2 < bVar3;
                  if (bVar2 == bVar3) {
                    bVar2 = *(byte *)(param_1 + 9 + param_3);
                    bVar3 = *(byte *)(param_2 + 9 + param_3);
                    bVar8 = bVar2 < bVar3;
                    if (bVar2 == bVar3) {
                      bVar2 = *(byte *)(param_1 + 10 + param_3);
                      bVar3 = *(byte *)(param_2 + 10 + param_3);
                      bVar8 = bVar2 < bVar3;
                      if (bVar2 == bVar3) {
                        bVar2 = *(byte *)(param_1 + 0xb + param_3);
                        bVar3 = *(byte *)(param_2 + 0xb + param_3);
                        bVar8 = bVar2 < bVar3;
                        if (bVar2 == bVar3) {
                          uVar7 = param_1 + 0xc;
                          uVar6 = param_2 + 0xc;
                          param_1 = param_5 + 8;
                          while( true ) {
                            bVar8 = *(byte *)(uVar7 + param_3) < *(byte *)(uVar6 + param_3);
                            bVar9 = *(byte *)(uVar7 + param_3) == *(byte *)(uVar6 + param_3);
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 1 + param_3);
                            bVar3 = *(byte *)(uVar6 + 1 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 2 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 2 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 2 + param_3);
                            bVar3 = *(byte *)(uVar6 + 2 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 4 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 4 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 3 + param_3);
                            bVar3 = *(byte *)(uVar6 + 3 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 6 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 6 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 4 + param_3);
                            bVar3 = *(byte *)(uVar6 + 4 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 8 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 8 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 5 + param_3);
                            bVar3 = *(byte *)(uVar6 + 5 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 10 + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 10 + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 6 + param_3);
                            bVar3 = *(byte *)(uVar6 + 6 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 0xc + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 0xc + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            bVar2 = *(byte *)(uVar7 + 7 + param_3);
                            bVar3 = *(byte *)(uVar6 + 7 + param_3);
                            bVar8 = bVar2 < bVar3;
                            bVar9 = bVar2 == bVar3;
                            if (!bVar9) break;
                            uVar4 = *(ushort *)(param_4 + 0xe + uVar7 * 2);
                            uVar5 = *(ushort *)(param_4 + 0xe + uVar6 * 2);
                            bVar8 = uVar4 < uVar5;
                            bVar9 = uVar4 == uVar5;
                            if (!bVar9) break;
                            param_1 = param_1 + -8;
                            uVar1 = uVar6 + 8;
                            uVar6 = uVar7 + 8;
                            *param_6 = *param_6 + -1;
                            uVar7 = uVar6 - param_5;
                            if (uVar6 < param_5) {
                              uVar7 = uVar6;
                            }
                            uVar6 = uVar1 - param_5;
                            if (uVar1 < param_5) {
                              uVar6 = uVar1;
                            }
                            if (param_1 < 0) {
                              return false;
                            }
                          }
                          return !bVar8 && !bVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return !bVar8;
}


