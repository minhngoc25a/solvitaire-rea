// Function: FUN_00442af0
// Entry: 00442af0
// Size: 3309 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FUN_00442af0(float *param_1,char *param_2,uint param_3,float *param_4,char *param_5,uint param_6,
            uint param_7,uint param_8,int param_9,int param_10)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  byte bVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_1154;
  float *local_1150;
  char local_1149;
  float local_1148;
  float *local_1144;
  float *local_1140;
  float *local_113c;
  uint local_1108;
  float local_1100 [32];
  float local_1080 [32];
  float local_1000 [32];
  float local_f80 [32];
  float local_f00 [32];
  float local_e80 [32];
  float local_e00 [32];
  float local_d80 [800];
  byte local_100 [252];
  undefined4 uStack_4;
  
  uStack_4 = 0x442afa;
  if (param_3 == param_6) {
    if ((param_2 != param_5) && (local_1154 = 0, param_3 != 0)) {
      do {
        if (param_2 == (char *)0x0) {
          local_1149 = FUN_00448a20(0,param_3,local_1154);
        }
        else if (local_1154 < param_3) {
          local_1149 = param_2[local_1154];
        }
        else {
          local_1149 = '\0';
        }
        if (param_5 == (char *)0x0) {
          cVar6 = FUN_00448a20(0,param_3,local_1154);
        }
        else if (local_1154 < param_3) {
          cVar6 = param_5[local_1154];
        }
        else {
          cVar6 = '\0';
        }
        if (local_1149 != cVar6) {
          bVar15 = false;
          goto LAB_00442b9f;
        }
        local_1154 = local_1154 + 1;
      } while (local_1154 < param_3);
    }
    bVar15 = true;
LAB_00442b9f:
    if (bVar15) {
      FUN_00431ec0((uint *)param_1,(uint *)param_4,param_7,param_8,5,param_3);
      return;
    }
  }
  if ((param_3 == 1) && ((param_2 == (char *)0x0 || (*param_2 == '\x01')))) {
    local_1144 = param_1;
    if (((param_1 != (float *)0x0) && (param_4 != (float *)0x0)) && (param_6 != 0)) {
      uVar14 = 0;
      local_1150 = (float *)0x0;
      if (param_6 != 0) {
        do {
          if (param_5 == (char *)0x0) {
            cVar6 = FUN_00448a20(0,param_6,uVar14);
          }
          else {
            cVar6 = param_5[uVar14];
          }
          pfVar8 = (float *)((int)local_1150 + 1);
          if (cVar6 == '\0') {
            pfVar8 = local_1150;
          }
          uVar14 = uVar14 + 1;
          local_1150 = pfVar8;
        } while (uVar14 < param_6);
        if (pfVar8 != (float *)0x0) {
          if ((param_8 == 0) && (param_7 == 0)) {
            return;
          }
          local_1148 = 0.0;
          local_1150 = (float *)0x0;
          fVar17 = (float)((double)(int)pfVar8 + (double)(&DAT_0050c3d0)[-((int)pfVar8 >> 0x1f)]);
          do {
            fVar16 = 0.0;
            uVar14 = 0;
            do {
              if (param_5 == (char *)0x0) {
                cVar6 = FUN_00448a20(0,param_6,uVar14);
LAB_00442cc8:
                if (cVar6 != '\0') {
                  fVar16 = fVar16 + param_4[uVar14];
                }
              }
              else if (uVar14 < param_6) {
                cVar6 = param_5[uVar14];
                goto LAB_00442cc8;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < param_6);
            *local_1144 = fVar16 / fVar17;
            local_1144 = local_1144 + 1;
            param_4 = param_4 + param_6;
            bVar15 = 0xfffffffe < local_1150;
            local_1150 = (float *)((int)local_1150 + 1);
            local_1148 = (float)((int)local_1148 + (uint)bVar15);
            if (param_8 <= (uint)local_1148) {
              if (param_8 < (uint)local_1148) {
                return;
              }
              if (param_7 <= local_1150) {
                return;
              }
            }
          } while( true );
        }
      }
      FUN_00431f80(param_1,param_7,param_8,5,1);
      return;
    }
  }
  else {
    if ((param_6 == 1) && ((param_5 == (char *)0x0 || (*param_5 == '\x01')))) {
      FUN_004453d0((uint)param_1,(int)param_2,param_3,param_4,param_7,param_8,param_10);
      return;
    }
    if (param_3 < 0xff) {
      if (param_9 == 1) {
        iVar9 = FUN_00444ef0((int)param_5,param_6,(int)param_2,param_3,local_100);
        if ((((iVar9 == 0) && (param_1 != (float *)0x0)) && (param_4 != (float *)0x0)) &&
           ((param_3 != 0 && ((param_8 != 0 || (param_7 != 0)))))) {
          local_1108 = 0;
          local_1150 = (float *)0x0;
          while( true ) {
            do {
              uVar14 = 0;
              if (param_3 != 0) {
                do {
                  if (local_100[uVar14] < param_6) {
                    fVar17 = param_4[local_100[uVar14]];
                  }
                  else {
                    fVar17 = 0.0;
                  }
                  param_1[uVar14] = fVar17;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < param_3);
              }
              param_1 = param_1 + param_3;
              param_4 = param_4 + param_6;
              bVar15 = 0xfffffffe < local_1108;
              local_1108 = local_1108 + 1;
              local_1150 = (float *)((int)local_1150 + (uint)bVar15);
            } while (local_1150 < param_8);
            if (param_8 < local_1150) break;
            if (param_7 <= local_1108) {
              return;
            }
          }
        }
      }
      else if ((param_6 < 0x21) && (param_3 < 0x21)) {
        local_1154 = 0;
        if (param_3 != 0) {
          pfVar8 = local_1100;
          do {
            if (param_2 == (char *)0x0) {
              bVar7 = FUN_00448a20(0,param_3,local_1154);
            }
            else {
              bVar7 = param_2[local_1154];
            }
            uVar14 = 0;
            if (param_6 != 0) {
              uVar10 = (uint)bVar7;
              fVar17 = *(float *)(&DAT_0053ffec + uVar10 * 0x18);
              fVar16 = *(float *)(&DAT_0053ffe8 + uVar10 * 0x18);
              fVar18 = *(float *)(&DAT_0053ffe4 + uVar10 * 0x18);
              fVar19 = *(float *)(&DAT_0053ffe0 + uVar10 * 0x18);
              fVar20 = *(float *)(&DAT_0053ffd8 + uVar10 * 0x18);
              fVar21 = *(float *)(&DAT_0053ffdc + uVar10 * 0x18);
              local_1150 = pfVar8;
              do {
                if (param_5 == (char *)0x0) {
                  bVar7 = FUN_00448a20(0,param_6,uVar14);
                }
                else {
                  bVar7 = param_5[uVar14];
                }
                uVar10 = (uint)bVar7;
                uVar14 = uVar14 + 1;
                *local_1150 = fVar20 * *(float *)(&DAT_0053ffd8 + uVar10 * 0x18) +
                              fVar21 * *(float *)(&DAT_0053ffdc + uVar10 * 0x18) +
                              fVar19 * *(float *)(&DAT_0053ffe0 + uVar10 * 0x18) +
                              fVar18 * *(float *)(&DAT_0053ffe4 + uVar10 * 0x18) +
                              fVar16 * *(float *)(&DAT_0053ffe8 + uVar10 * 0x18) +
                              fVar17 * *(float *)(&DAT_0053ffec + uVar10 * 0x18);
                local_1150 = local_1150 + 1;
              } while (uVar14 < param_6);
            }
            local_1154 = local_1154 + 1;
            pfVar8 = pfVar8 + 0x20;
          } while (local_1154 < param_3);
        }
        uVar14 = 0;
        local_1154 = 0;
        if (param_3 == 8) {
          if (param_6 == 2) {
            if ((param_8 != 0) || (param_7 != 0)) {
              pfVar8 = param_1 + 2;
              do {
                do {
                  fVar17 = param_4[uVar14 * 2];
                  fVar16 = param_4[uVar14 * 2 + 1];
                  uVar14 = uVar14 + 1;
                  pfVar8[-2] = fVar16 * local_1100[1] + local_1100[0] * fVar17 + 0.0;
                  pfVar8[-1] = fVar16 * local_1080[1] + local_1080[0] * fVar17 + 0.0;
                  *pfVar8 = fVar16 * local_1000[1] + local_1000[0] * fVar17 + 0.0;
                  pfVar8[1] = fVar16 * local_f80[1] + local_f80[0] * fVar17 + 0.0;
                  pfVar8[2] = fVar16 * local_f00[1] + local_f00[0] * fVar17 + 0.0;
                  pfVar8[3] = fVar16 * local_e80[1] + local_e80[0] * fVar17 + 0.0;
                  pfVar8[4] = fVar16 * local_e00[1] + fVar17 * local_e00[0] + 0.0;
                  pfVar8[5] = fVar16 * local_d80[1] + fVar17 * local_d80[0] + 0.0;
                  pfVar8 = pfVar8 + 8;
                } while (param_8 != 0);
                local_1154 = uVar14;
              } while (uVar14 < param_7);
            }
          }
          else if ((param_8 != 0) || (param_7 != 0)) {
            pfVar11 = param_1 + 2;
            pfVar8 = param_4;
            do {
              uVar14 = 0;
              fVar17 = 0.0;
              fVar16 = 0.0;
              fVar18 = 0.0;
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              local_1148 = 0.0;
              if (param_6 == 0) {
                local_1144 = (float *)0x0;
              }
              else {
                local_1148 = 0.0;
                local_1144 = (float *)0x0;
                pfVar13 = pfVar8;
                do {
                  fVar5 = *pfVar13;
                  pfVar13 = pfVar13 + 1;
                  local_1144 = (float *)(fVar5 * local_1100[uVar14] + (float)local_1144);
                  local_1148 = fVar5 * local_1080[uVar14] + local_1148;
                  fVar21 = fVar21 + fVar5 * local_1000[uVar14];
                  fVar20 = fVar20 + fVar5 * local_f80[uVar14];
                  fVar19 = fVar19 + fVar5 * local_f00[uVar14];
                  fVar18 = fVar18 + fVar5 * local_e80[uVar14];
                  pfVar1 = local_e00 + uVar14;
                  pfVar2 = local_d80 + uVar14;
                  uVar14 = uVar14 + 1;
                  fVar16 = fVar16 + fVar5 * *pfVar1;
                  fVar17 = fVar17 + fVar5 * *pfVar2;
                } while (uVar14 < param_6);
              }
              local_1154 = local_1154 + 1;
              pfVar11[-2] = (float)local_1144;
              pfVar8 = pfVar8 + param_6;
              pfVar11[-1] = local_1148;
              *pfVar11 = fVar21;
              pfVar11[1] = fVar20;
              pfVar11[2] = fVar19;
              pfVar11[3] = fVar18;
              pfVar11[4] = fVar16;
              pfVar11[5] = fVar17;
              pfVar11 = pfVar11 + 8;
            } while ((param_8 != 0) || (local_1154 < param_7));
          }
        }
        else if ((param_3 == 6) && ((local_1154 = 0, param_8 != 0 || (param_7 != 0)))) {
          pfVar11 = param_1 + 5;
          pfVar8 = param_4;
          do {
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar20 = 0.0;
            fVar21 = 0.0;
            uVar14 = 0;
            fVar17 = 0.0;
            fVar16 = 0.0;
            if (param_6 != 0) {
              fVar18 = 0.0;
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              pfVar13 = pfVar8;
              do {
                fVar5 = *pfVar13;
                pfVar13 = pfVar13 + 1;
                fVar18 = fVar18 + fVar5 * local_1100[uVar14];
                fVar19 = fVar19 + fVar5 * local_1080[uVar14];
                fVar20 = fVar20 + fVar5 * local_1000[uVar14];
                fVar21 = fVar21 + fVar5 * local_f80[uVar14];
                pfVar1 = local_f00 + uVar14;
                pfVar2 = local_e80 + uVar14;
                uVar14 = uVar14 + 1;
                fVar17 = fVar17 + fVar5 * *pfVar1;
                fVar16 = fVar16 + fVar5 * *pfVar2;
              } while (uVar14 < param_6);
            }
            local_1154 = local_1154 + 1;
            pfVar11[-5] = fVar18;
            pfVar11[-4] = fVar19;
            pfVar11[-3] = fVar20;
            pfVar11[-2] = fVar21;
            pfVar8 = pfVar8 + param_6;
            pfVar11[-1] = fVar17;
            *pfVar11 = fVar16;
            pfVar11 = pfVar11 + 6;
          } while ((param_8 != 0) || (local_1154 < param_7));
        }
        if ((param_8 != 0) || (local_1154 < param_7)) {
          iVar9 = local_1154 * param_6;
          local_1140 = param_1 + local_1154 * param_3;
          do {
            if (param_3 != 0) {
              pfVar8 = local_1100 + 1;
              local_1150 = (float *)0x0;
              local_113c = (float *)param_3;
              pfVar11 = local_1140;
              do {
                uVar14 = 0;
                fVar17 = 0.0;
                if (3 < param_6) {
                  pfVar13 = pfVar8;
                  do {
                    pfVar1 = pfVar13 + -1;
                    iVar4 = iVar9 + uVar14;
                    uVar14 = uVar14 + 4;
                    fVar16 = *pfVar13;
                    pfVar2 = pfVar13 + 1;
                    pfVar3 = pfVar13 + 2;
                    pfVar13 = pfVar13 + 4;
                    fVar17 = fVar17 + *pfVar1 * param_4[iVar4] + param_4[iVar4 + 1] * fVar16 +
                             param_4[iVar4 + 2] * *pfVar2 + param_4[iVar4 + 3] * *pfVar3;
                  } while (uVar14 < param_6 - 3);
                }
                if (uVar14 < param_6) {
                  pfVar13 = local_1100 + (int)local_1150 + uVar14;
                  do {
                    iVar4 = iVar9 + uVar14;
                    uVar14 = uVar14 + 1;
                    fVar16 = *pfVar13;
                    pfVar13 = pfVar13 + 1;
                    fVar17 = fVar17 + param_4[iVar4] * fVar16;
                  } while (uVar14 < param_6);
                }
                local_1150 = (float *)((int)local_1150 + 0x20);
                pfVar8 = pfVar8 + 0x20;
                *pfVar11 = fVar17;
                pfVar11 = pfVar11 + 1;
                local_113c = (float *)((int)local_113c - 1);
              } while (local_113c != (float *)0x0);
            }
            local_1154 = local_1154 + 1;
            local_1140 = local_1140 + param_3;
            iVar9 = iVar9 + param_6;
          } while ((param_8 != 0) || (local_1154 < param_7));
          return;
        }
      }
      else {
        local_1140 = (float *)0x0;
        if ((param_8 != 0) || (param_7 != 0)) {
          local_1154 = 0;
          local_113c = param_1;
          do {
            local_1150 = (float *)0x0;
            pfVar8 = local_113c;
            if (param_3 != 0) {
              do {
                fVar17 = 0.0;
                if (param_2 == (char *)0x0) {
                  bVar7 = FUN_00448a20(0,param_3,(uint)local_1150);
                }
                else {
                  bVar7 = param_2[(int)local_1150];
                }
                uVar14 = 0;
                if (param_6 != 0) {
                  uVar10 = (uint)bVar7;
                  fVar16 = *(float *)(&DAT_0053ffec + uVar10 * 0x18);
                  fVar18 = *(float *)(&DAT_0053ffe8 + uVar10 * 0x18);
                  fVar19 = *(float *)(&DAT_0053ffe4 + uVar10 * 0x18);
                  fVar20 = *(float *)(&DAT_0053ffe0 + uVar10 * 0x18);
                  fVar21 = *(float *)(&DAT_0053ffd8 + uVar10 * 0x18);
                  do {
                    if (param_5 == (char *)0x0) {
                      bVar7 = FUN_00448a20(0,param_6,uVar14);
                    }
                    else {
                      bVar7 = param_5[uVar14];
                    }
                    uVar12 = (uint)bVar7;
                    iVar9 = local_1154 + uVar14;
                    uVar14 = uVar14 + 1;
                    fVar17 = fVar17 + (fVar21 * *(float *)(&DAT_0053ffd8 + uVar12 * 0x18) +
                                       *(float *)(&DAT_0053ffdc + uVar10 * 0x18) *
                                       *(float *)(&DAT_0053ffdc + uVar12 * 0x18) +
                                       fVar20 * *(float *)(&DAT_0053ffe0 + uVar12 * 0x18) +
                                       fVar19 * *(float *)(&DAT_0053ffe4 + uVar12 * 0x18) +
                                       fVar18 * *(float *)(&DAT_0053ffe8 + uVar12 * 0x18) +
                                      fVar16 * *(float *)(&DAT_0053ffec + uVar12 * 0x18)) *
                                      param_4[iVar9];
                  } while (uVar14 < param_6);
                }
                local_1150 = (float *)((int)local_1150 + 1);
                *pfVar8 = fVar17;
                pfVar8 = pfVar8 + 1;
              } while (local_1150 < param_3);
            }
            local_1140 = (float *)((int)local_1140 + 1);
            local_113c = local_113c + param_3;
            local_1154 = local_1154 + param_6;
          } while ((param_8 != 0) || (local_1140 < param_7));
          return;
        }
      }
    }
    else {
      FUN_00431f80(param_1,param_7,param_8,5,param_3);
    }
  }
  return;
}


