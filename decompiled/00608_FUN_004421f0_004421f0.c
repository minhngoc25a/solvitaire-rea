// Function: FUN_004421f0
// Entry: 004421f0
// Size: 2165 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004421f0(uint *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_154;
  float local_130 [7];
  float fStack_114;
  float local_b0 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1 == (uint *)0x0) {
    FID_conflict___assert
              (L"pGainer != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xbe3a);
  }
  if (param_1[2] < param_1[1]) {
    local_168 = param_1[2] - param_1[1];
    local_170 = 0;
    if ((param_5 == 0) && (param_4 < local_168)) {
      local_170 = param_5;
      local_168 = param_4;
    }
    if ((local_170 != 0) || (local_168 != 0)) {
      if ((param_2 != 0) && (param_3 != 0)) {
        uVar2 = *param_1;
        fVar17 = (float)((double)(int)param_1[1] +
                        (double)(&DAT_0050c3d0)[-((int)param_1[1] >> 0x1f)]);
        fVar19 = DAT_0050c314 / fVar17;
        fVar17 = (float)((double)(int)param_1[2] +
                        (double)(&DAT_0050c3d0)[-((int)param_1[2] >> 0x1f)]) / fVar17;
        if (uVar2 < 0x21) {
          if (uVar2 != 0) {
            pfVar5 = (float *)param_1[4];
            fVar10 = (float)param_1[3];
            iVar7 = param_1[5] - (int)pfVar5;
            iVar6 = (int)local_b0 - (int)pfVar5;
            iVar3 = (int)local_130 - (int)pfVar5;
            local_178 = uVar2;
            do {
              fVar12 = *pfVar5;
              fVar18 = (*(float *)(iVar7 + (int)pfVar5) - fVar12) * fVar10;
              *(float *)(iVar6 + (int)pfVar5) = fVar18 * fVar19;
              *(float *)(iVar3 + (int)pfVar5) = fVar12 * fVar10 + fVar18 * fVar17;
              pfVar5 = pfVar5 + 1;
              local_178 = local_178 - 1;
            } while (local_178 != 0);
          }
          local_160 = 0;
          if (uVar2 == 2) {
            fVar17 = local_130[0] + local_b0[0];
            fVar19 = local_130[1] + local_b0[1];
            uVar4 = local_168 >> 1 | local_170 << 0x1f;
            uVar2 = local_170 >> 1;
            if (((local_170 & 1) == 0 && uVar2 != 0) || (uVar4 != 0)) {
              local_178 = 0;
              local_164 = 0;
              do {
                do {
                  pfVar5 = (float *)(param_3 + local_164 * 0x10);
                  fVar10 = *pfVar5 * local_130[0];
                  fVar12 = pfVar5[1] * local_130[1];
                  fVar18 = pfVar5[2] * fVar17;
                  fVar15 = pfVar5[3] * fVar19;
                  local_130[0] = local_130[0] + local_b0[0];
                  local_130[1] = local_130[1] + local_b0[1];
                  fVar17 = fVar17 + local_b0[0];
                  fVar19 = fVar19 + local_b0[1];
                  pfVar5 = (float *)(param_2 + local_164 * 0x10);
                  *pfVar5 = fVar10;
                  pfVar5[1] = fVar12;
                  pfVar5[2] = fVar18;
                  pfVar5[3] = fVar15;
                  bVar9 = 0xfffffffe < local_164;
                  local_164 = local_164 + 1;
                  local_178 = local_178 + bVar9;
                } while (local_178 < uVar2);
              } while ((local_178 == uVar2) && (local_164 < uVar4));
            }
LAB_004425ec:
            local_174 = local_170 & 0xfffffffe | uVar4 >> 0x1f;
            local_178 = uVar4 * 2;
            if ((local_170 < local_174) || ((local_170 <= local_174 && (local_168 <= local_178))))
            goto LAB_0044279a;
          }
          else {
            if (uVar2 == 6) {
              local_30 = local_b0[0];
              fStack_2c = local_b0[1];
              fStack_28 = local_b0[2];
              fStack_24 = local_b0[3];
              uVar4 = local_168 >> 1 | local_170 << 0x1f;
              uVar2 = local_170 >> 1;
              fVar15 = local_130[2] + local_b0[2];
              local_20 = local_b0[2];
              fStack_1c = local_b0[3];
              fStack_18 = local_a0;
              fStack_14 = fStack_9c;
              fVar10 = local_130[1] + local_b0[1];
              fVar18 = local_130[0] + local_b0[0];
              fVar12 = local_130[5] + fStack_9c;
              fVar17 = local_130[4] + local_a0;
              fVar19 = local_130[3] + local_b0[3];
              if (((local_170 & 1) == 0 && uVar2 != 0) || (uVar4 != 0)) {
                local_178 = 0;
                local_164 = 0;
                do {
                  do {
                    pfVar5 = (float *)(param_3 + local_164 * 0x30);
                    fVar11 = *pfVar5 * local_130[0];
                    fVar13 = pfVar5[1] * local_130[1];
                    fVar14 = pfVar5[2] * local_130[2];
                    fVar16 = pfVar5[3] * local_130[3];
                    local_130[0] = local_130[0] + local_b0[0];
                    local_130[1] = local_130[1] + local_b0[1];
                    local_130[2] = local_130[2] + local_b0[2];
                    local_130[3] = local_130[3] + local_b0[3];
                    pfVar5 = (float *)(param_2 + local_164 * 0x30);
                    *pfVar5 = fVar11;
                    pfVar5[1] = fVar13;
                    pfVar5[2] = fVar14;
                    pfVar5[3] = fVar16;
                    pfVar5 = (float *)(param_3 + 0x10 + local_164 * 0x30);
                    fVar11 = *pfVar5 * local_130[4];
                    fVar13 = pfVar5[1] * local_130[5];
                    fVar14 = pfVar5[2] * fVar18;
                    fVar16 = pfVar5[3] * fVar10;
                    local_130[4] = local_130[4] + local_a0;
                    local_130[5] = local_130[5] + fStack_9c;
                    fVar18 = fVar18 + local_b0[0];
                    fVar10 = fVar10 + local_b0[1];
                    pfVar5 = (float *)(param_2 + 0x10 + local_164 * 0x30);
                    *pfVar5 = fVar11;
                    pfVar5[1] = fVar13;
                    pfVar5[2] = fVar14;
                    pfVar5[3] = fVar16;
                    pfVar5 = (float *)(param_3 + 0x20 + local_164 * 0x30);
                    fVar11 = *pfVar5 * fVar15;
                    fVar13 = pfVar5[1] * fVar19;
                    fVar14 = pfVar5[2] * fVar17;
                    fVar16 = pfVar5[3] * fVar12;
                    fVar15 = fVar15 + local_b0[2];
                    fVar19 = fVar19 + local_b0[3];
                    fVar17 = fVar17 + local_a0;
                    fVar12 = fVar12 + fStack_9c;
                    pfVar5 = (float *)(param_2 + 0x20 + local_164 * 0x30);
                    *pfVar5 = fVar11;
                    pfVar5[1] = fVar13;
                    pfVar5[2] = fVar14;
                    pfVar5[3] = fVar16;
                    bVar9 = 0xfffffffe < local_164;
                    local_164 = local_164 + 1;
                    local_178 = local_178 + bVar9;
                  } while (local_178 < uVar2);
                } while ((local_178 == uVar2) && (local_164 < uVar4));
              }
              goto LAB_004425ec;
            }
            if (uVar2 == 8) {
              local_178 = 0;
              do {
                do {
                  iVar3 = local_160 * 0x20;
                  bVar9 = 0xfffffffe < local_160;
                  local_160 = local_160 + 1;
                  local_178 = local_178 + bVar9;
                  pfVar5 = (float *)(iVar3 + param_3);
                  fVar17 = *pfVar5 * local_130[0];
                  fVar19 = pfVar5[1] * local_130[1];
                  fVar10 = pfVar5[2] * local_130[2];
                  fVar12 = pfVar5[3] * local_130[3];
                  local_130[0] = local_130[0] + local_b0[0];
                  local_130[1] = local_130[1] + local_b0[1];
                  local_130[2] = local_130[2] + local_b0[2];
                  local_130[3] = local_130[3] + local_b0[3];
                  pfVar5 = (float *)(iVar3 + param_2);
                  *pfVar5 = fVar17;
                  pfVar5[1] = fVar19;
                  pfVar5[2] = fVar10;
                  pfVar5[3] = fVar12;
                  pfVar5 = (float *)(iVar3 + 0x10 + param_3);
                  fVar17 = *pfVar5 * local_130[4];
                  fVar19 = pfVar5[1] * local_130[5];
                  fVar10 = pfVar5[2] * local_130[6];
                  fVar12 = pfVar5[3] * fStack_114;
                  local_130[4] = local_130[4] + local_a0;
                  local_130[5] = local_130[5] + fStack_9c;
                  local_130[6] = local_130[6] + fStack_98;
                  fStack_114 = fStack_114 + fStack_94;
                  pfVar5 = (float *)(iVar3 + 0x10 + param_2);
                  *pfVar5 = fVar17;
                  pfVar5[1] = fVar19;
                  pfVar5[2] = fVar10;
                  pfVar5[3] = fVar12;
                } while (local_178 < local_170);
              } while ((local_178 == local_170) && (local_160 < local_168));
              goto LAB_0044279a;
            }
            local_174 = 0;
            local_178 = 0;
          }
          do {
            uVar2 = *param_1;
            uVar4 = 0;
            if (uVar2 != 0) {
              do {
                fVar17 = local_130[uVar4];
                iVar3 = uVar2 * local_178 + uVar4;
                local_130[uVar4] = fVar17 + local_b0[uVar4];
                uVar4 = uVar4 + 1;
                *(float *)(param_2 + iVar3 * 4) = fVar17 * *(float *)(param_3 + iVar3 * 4);
                uVar2 = *param_1;
              } while (uVar4 < uVar2);
            }
            bVar9 = 0xfffffffe < local_178;
            local_178 = local_178 + 1;
            local_174 = local_174 + bVar9;
          } while ((local_174 < local_170) || ((local_174 <= local_170 && (local_178 < local_168))))
          ;
        }
        else {
          local_164 = 0;
          local_178 = 0;
          do {
            uVar4 = 0;
            if (uVar2 != 0) {
              do {
                fVar10 = *(float *)(param_1[4] + uVar4 * 4);
                iVar6 = uVar2 * local_178 + uVar4;
                iVar3 = uVar4 * 4;
                uVar4 = uVar4 + 1;
                *(float *)(param_2 + iVar6 * 4) =
                     ((*(float *)(param_1[5] + iVar3) - fVar10) * fVar17 + fVar10) *
                     *(float *)(param_3 + iVar6 * 4) * (float)param_1[3];
                uVar2 = *param_1;
              } while (uVar4 < uVar2);
            }
            bVar9 = 0xfffffffe < local_178;
            local_178 = local_178 + 1;
            local_164 = local_164 + bVar9;
            fVar17 = fVar17 + fVar19;
          } while ((local_164 < local_170) || ((local_164 <= local_170 && (local_178 < local_168))))
          ;
        }
      }
LAB_0044279a:
      local_178 = param_1[2] + local_168;
      if ((local_170 + CARRY4(param_1[2],local_168) != 0) || (param_1[1] <= local_178)) {
        local_178 = param_1[1];
      }
      param_1[2] = local_178;
      local_16c = param_4 - local_168;
      local_154 = (param_5 - local_170) - (uint)(param_4 < local_168);
      param_2 = param_2 + local_168 * 4;
      param_3 = param_3 + local_168 * 4;
      goto LAB_00442821;
    }
  }
  local_154 = param_5;
  local_16c = param_4;
LAB_00442821:
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *param_1;
    if (uVar2 < 0x21) {
      uVar4 = 0;
      if (uVar2 != 0) {
        fVar17 = (float)param_1[3];
        uVar1 = param_1[5];
        do {
          local_130[uVar4] = fVar17 * *(float *)(uVar1 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      if ((local_154 != 0) || (local_16c != 0)) {
        local_174 = 0;
        local_168 = 0;
        do {
          uVar4 = 0;
          if (3 < uVar2) {
            pfVar5 = (float *)(param_2 + (local_168 * uVar2 + 1) * 4);
            pfVar8 = (float *)(param_3 + 0xc + local_168 * uVar2 * 4);
            do {
              pfVar5[-1] = local_130[uVar4] * pfVar8[-3];
              *pfVar5 = local_130[uVar4 + 1] *
                        *(float *)((param_3 - param_2) + -0x10 + (int)(pfVar5 + 4));
              pfVar5[1] = local_130[uVar4 + 2] * pfVar8[-1];
              iVar3 = uVar4 + 3;
              uVar4 = uVar4 + 4;
              pfVar5[2] = local_130[iVar3] * *pfVar8;
              pfVar5 = pfVar5 + 4;
              pfVar8 = pfVar8 + 4;
            } while (uVar4 < uVar2 - 3);
          }
          if (uVar4 < uVar2) {
            pfVar5 = (float *)(param_2 + (local_168 * uVar2 + uVar4) * 4);
            do {
              pfVar8 = local_130 + uVar4;
              uVar4 = uVar4 + 1;
              *pfVar5 = *pfVar8 * *(float *)((int)pfVar5 + (param_3 - param_2));
              pfVar5 = pfVar5 + 1;
            } while (uVar4 < uVar2);
          }
          bVar9 = 0xfffffffe < local_168;
          local_168 = local_168 + 1;
          local_174 = local_174 + bVar9;
        } while ((local_174 < local_154) || ((local_174 <= local_154 && (local_168 < local_16c))));
      }
    }
    else if ((local_154 != 0) || (local_16c != 0)) {
      local_164 = 0;
      local_178 = 0;
      do {
        uVar4 = 0;
        if (uVar2 != 0) {
          do {
            iVar3 = uVar4 * 4;
            iVar6 = uVar2 * local_178 + uVar4;
            uVar4 = uVar4 + 1;
            *(float *)(param_2 + iVar6 * 4) =
                 *(float *)(param_1[5] + iVar3) * *(float *)(param_3 + iVar6 * 4) *
                 (float)param_1[3];
            uVar2 = *param_1;
          } while (uVar4 < uVar2);
        }
        bVar9 = 0xfffffffe < local_178;
        local_178 = local_178 + 1;
        local_164 = local_164 + bVar9;
      } while ((local_164 < local_154) || ((local_164 <= local_154 && (local_178 < local_16c))));
    }
  }
  if (param_1[2] == 0xffffffff) {
    uVar2 = param_1[1];
    if ((local_154 == 0) && (local_16c <= uVar2)) {
      uVar2 = local_16c;
    }
    param_1[2] = uVar2;
  }
  return 0;
}


