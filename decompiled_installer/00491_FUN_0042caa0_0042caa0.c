// Function: FUN_0042caa0
// Entry: 0042caa0
// Size: 3461 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0042caa0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  uint local_44;
  uint local_20;
  uint local_1c;
  float local_18;
  uint local_14;
  uint local_c;
  float local_8;
  float local_4;
  
  fVar27 = DAT_0050c38c;
  dVar28 = DAT_0050c360;
  if (((param_1 | param_2) & 0xf) == 0) {
    local_18 = 0.0;
    fVar27 = 0.0;
    if (param_5 != 0) {
      local_18 = DAT_0050c2f8;
      fVar27 = DAT_0050c384;
    }
    uVar3 = param_3 >> 3 | param_4 << 0x1d;
    uVar12 = param_4 >> 3;
    local_44 = 0;
    if ((uVar12 == 0) && (uVar3 == 0)) {
      local_8 = 0.0;
    }
    else if (param_5 == 1) {
      local_8 = 0.0;
      fVar21 = local_18 - fVar27;
      local_14 = 0;
      local_1c = 0;
      local_20 = 0;
      do {
        do {
          iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          iVar6 = (iVar5 * 0xbc8f) % 0x7fffffff;
          iVar7 = (iVar6 * 0xbc8f) % 0x7fffffff;
          iVar8 = (iVar7 * 0xbc8f) % 0x7fffffff;
          iVar9 = (iVar8 * 0xbc8f) % 0x7fffffff;
          iVar10 = (iVar9 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (iVar10 * 0xbc8f) % 0x7fffffff;
          pfVar1 = (float *)(param_2 + local_14 * 4);
          pfVar2 = (float *)(param_2 + 0x10 + local_14 * 4);
          auVar16._0_4_ =
               (int)(((float)((double)iVar4 / dVar28) * fVar21 + fVar27 + *pfVar1) * _DAT_0050c3f0);
          auVar16._4_4_ =
               (int)(((float)((double)iVar5 / dVar28) * fVar21 + fVar27 + pfVar1[1]) * _UNK_0050c3f4
                    );
          auVar16._8_4_ =
               (int)(((float)((double)iVar6 / dVar28) * fVar21 + fVar27 + pfVar1[2]) * _UNK_0050c3f8
                    );
          auVar16._12_4_ =
               (int)(((float)((double)iVar7 / dVar28) * fVar21 + fVar27 + pfVar1[3]) * _UNK_0050c3fc
                    );
          auVar17._0_4_ =
               (int)(((float)((double)iVar8 / dVar28) * fVar21 + fVar27 + *pfVar2) * _DAT_0050c3f0);
          auVar17._4_4_ =
               (int)(((float)((double)iVar9 / dVar28) * fVar21 + fVar27 + pfVar2[1]) * _UNK_0050c3f4
                    );
          auVar17._8_4_ =
               (int)(((float)((double)iVar10 / dVar28) * fVar21 + fVar27 + pfVar2[2]) *
                    _UNK_0050c3f8);
          auVar17._12_4_ =
               (int)(((float)((double)DAT_0053fc54 / dVar28) * fVar21 + fVar27 + pfVar2[3]) *
                    _UNK_0050c3fc);
          auVar17 = packssdw(auVar16,auVar17);
          *(undefined1 (*) [16])(param_1 + local_14 * 2) = auVar17;
          local_44 = local_14 + 8;
          local_8 = (float)((int)local_8 + (uint)(0xfffffff7 < local_14));
          bVar13 = 0xfffffffe < local_20;
          local_20 = local_20 + 1;
          local_1c = local_1c + bVar13;
          local_14 = local_44;
        } while (local_1c < uVar12);
      } while ((local_1c <= uVar12) && (local_20 < uVar3));
    }
    else {
      local_1c = 0;
      local_20 = 0;
      local_8 = 0.0;
      local_14 = 0;
      do {
        fVar20 = 0.0;
        fVar19 = 0.0;
        fVar21 = 0.0;
        fVar15 = 0.0;
        if (param_5 == 0) {
          fVar22 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
        }
        else {
          fVar15 = local_18 - 0.0;
          fVar23 = 0.0 - fVar27;
          iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          iVar6 = (iVar5 * 0xbc8f) % 0x7fffffff;
          iVar7 = (iVar6 * 0xbc8f) % 0x7fffffff;
          iVar8 = (iVar7 * 0xbc8f) % 0x7fffffff;
          iVar9 = (iVar8 * 0xbc8f) % 0x7fffffff;
          iVar10 = (iVar9 * 0xbc8f) % 0x7fffffff;
          iVar11 = (iVar10 * 0xbc8f) % 0x7fffffff;
          fVar26 = (float)((double)iVar10 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar11 / dVar28) * fVar15 + 0.0;
          fVar25 = (float)((double)iVar8 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar9 / dVar28) * fVar15 + 0.0;
          fVar24 = (float)((double)iVar6 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar7 / dVar28) * fVar15 + 0.0;
          iVar6 = (iVar11 * 0xbc8f) % 0x7fffffff;
          iVar7 = (iVar6 * 0xbc8f) % 0x7fffffff;
          iVar8 = (iVar7 * 0xbc8f) % 0x7fffffff;
          iVar9 = (iVar8 * 0xbc8f) % 0x7fffffff;
          fVar22 = (float)((double)iVar4 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar5 / dVar28) * fVar15 + 0.0;
          iVar4 = (iVar9 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          iVar10 = (iVar5 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (iVar10 * 0xbc8f) % 0x7fffffff;
          fVar20 = (float)((double)iVar10 / dVar28) * fVar23 + fVar27 +
                   (float)((double)DAT_0053fc54 / dVar28) * fVar15 + 0.0;
          fVar19 = (float)((double)iVar4 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar5 / dVar28) * fVar15 + 0.0;
          fVar21 = (float)((double)iVar8 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar9 / dVar28) * fVar15 + 0.0;
          fVar15 = (float)((double)iVar6 / dVar28) * fVar23 + fVar27 +
                   (float)((double)iVar7 / dVar28) * fVar15 + _DAT_0050c0b0;
        }
        pfVar2 = (float *)(param_2 + 0x10 + local_14 * 4);
        pfVar1 = (float *)(param_2 + local_14 * 4);
        auVar14._0_4_ = (int)((fVar15 + *pfVar2) * _DAT_0050c3f0);
        auVar14._4_4_ = (int)((fVar21 + pfVar2[1]) * _UNK_0050c3f4);
        auVar14._8_4_ = (int)((fVar19 + pfVar2[2]) * _UNK_0050c3f8);
        auVar14._12_4_ = (int)((fVar20 + pfVar2[3]) * _UNK_0050c3fc);
        auVar18._0_4_ = (int)((fVar22 + *pfVar1) * _DAT_0050c3f0);
        auVar18._4_4_ = (int)((fVar24 + pfVar1[1]) * _UNK_0050c3f4);
        auVar18._8_4_ = (int)((fVar25 + pfVar1[2]) * _UNK_0050c3f8);
        auVar18._12_4_ = (int)((fVar26 + pfVar1[3]) * _UNK_0050c3fc);
        auVar17 = packssdw(auVar18,auVar14);
        *(undefined1 (*) [16])(param_1 + local_14 * 2) = auVar17;
        local_44 = local_14 + 8;
        local_8 = (float)((int)local_8 + (uint)(0xfffffff7 < local_14));
        bVar13 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        local_1c = local_1c + bVar13;
        local_14 = local_44;
      } while ((local_1c < uVar12) || ((local_1c == uVar12 && (local_20 < uVar3))));
    }
    fVar21 = DAT_0050c38c;
    if (((uint)local_8 <= param_4) && (((uint)local_8 < param_4 || (local_44 < param_3)))) {
      if (param_5 == 2) {
        while( true ) {
          do {
            iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
            DAT_0053fc54 = (iVar4 * 0xbc8f) % 0x7fffffff;
            fVar19 = (float)((double)iVar4 / dVar28) * (0.0 - fVar27) + fVar27 +
                     (float)((double)DAT_0053fc54 / dVar28) * (local_18 - 0.0) + 0.0 +
                     *(float *)(param_2 + local_44 * 4);
            fVar21 = DAT_0050c38c;
            if ((DAT_0050c38c <= fVar19) && (fVar21 = DAT_0050c314, fVar19 <= DAT_0050c314)) {
              fVar21 = fVar19;
            }
            *(short *)(param_1 + local_44 * 2) = (short)(int)(fVar21 * DAT_0050c374);
            bVar13 = 0xfffffffe < local_44;
            local_44 = local_44 + 1;
            local_8 = (float)((int)local_8 + (uint)bVar13);
          } while ((uint)local_8 < param_4);
          if (param_4 < (uint)local_8) break;
          if (param_3 <= local_44) {
            return;
          }
        }
      }
      else {
        while( true ) {
          do {
            if (param_5 == 1) {
              DAT_0053fc54 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
              fVar19 = (float)((double)DAT_0053fc54 / dVar28) * (local_18 - fVar27) + fVar27;
            }
            else {
              fVar19 = 0.0;
            }
            fVar19 = fVar19 + *(float *)(param_2 + local_44 * 4);
            fVar20 = fVar21;
            if ((fVar21 <= fVar19) && (fVar20 = DAT_0050c314, fVar19 <= DAT_0050c314)) {
              fVar20 = fVar19;
            }
            *(short *)(param_1 + local_44 * 2) = (short)(int)(fVar20 * DAT_0050c374);
            bVar13 = 0xfffffffe < local_44;
            local_44 = local_44 + 1;
            local_8 = (float)((int)local_8 + (uint)bVar13);
          } while ((uint)local_8 < param_4);
          if (param_4 < (uint)local_8) break;
          if (param_3 <= local_44) {
            return;
          }
        }
      }
    }
  }
  else {
    local_8 = 0.0;
    local_4 = 0.0;
    if (param_5 != 0) {
      local_8 = DAT_0050c384;
      local_4 = DAT_0050c2f8;
    }
    uVar12 = param_3 >> 2 | param_4 << 0x1e;
    uVar3 = param_4 >> 2;
    local_44 = 0;
    if ((uVar3 == 0) && (uVar12 == 0)) {
      local_c = 0;
      fVar21 = DAT_0050c374;
    }
    else {
      local_c = 0;
      local_20 = 0;
      local_1c = 0;
      do {
        fVar21 = DAT_0050c374;
        fVar19 = 0.0;
        if (param_5 == 1) {
          fVar19 = local_4 - local_8;
          iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          iVar6 = (iVar5 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (iVar6 * 0xbc8f) % 0x7fffffff;
          fVar15 = (float)((double)iVar4 / dVar28) * fVar19 + local_8;
          fVar20 = (float)((double)iVar5 / dVar28) * fVar19 + local_8;
          fVar24 = (float)((double)iVar6 / dVar28) * fVar19 + local_8;
          fVar19 = (float)((double)DAT_0053fc54 / DAT_0050c360) * fVar19 + local_8;
        }
        else if (param_5 == 2) {
          fVar19 = 0.0 - local_8;
          fVar25 = local_4 - 0.0;
          iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          iVar6 = (iVar5 * 0xbc8f) % 0x7fffffff;
          iVar7 = (iVar6 * 0xbc8f) % 0x7fffffff;
          fVar15 = (float)((double)iVar4 / dVar28) * fVar19 + local_8 +
                   (float)((double)iVar5 / DAT_0050c360) * fVar25 + 0.0;
          iVar4 = (iVar7 * 0xbc8f) % 0x7fffffff;
          iVar5 = (iVar4 * 0xbc8f) % 0x7fffffff;
          fVar20 = (float)((double)iVar6 / DAT_0050c360) * fVar19 + local_8 +
                   (float)((double)iVar7 / DAT_0050c360) * fVar25 + 0.0;
          iVar6 = (iVar5 * 0xbc8f) % 0x7fffffff;
          DAT_0053fc54 = (iVar6 * 0xbc8f) % 0x7fffffff;
          fVar24 = (float)((double)iVar4 / DAT_0050c360) * fVar19 + local_8 +
                   (float)((double)iVar5 / DAT_0050c360) * fVar25 + 0.0;
          fVar19 = (float)((double)iVar6 / DAT_0050c360) * fVar19 + local_8 +
                   (float)((double)DAT_0053fc54 / DAT_0050c360) * fVar25 + 0.0;
        }
        else {
          fVar15 = 0.0;
          fVar20 = 0.0;
          fVar24 = 0.0;
        }
        fVar15 = fVar15 + *(float *)(param_2 + local_44 * 4);
        fVar20 = fVar20 + *(float *)(param_2 + 4 + local_44 * 4);
        fVar24 = fVar24 + *(float *)(param_2 + 8 + local_44 * 4);
        fVar19 = fVar19 + *(float *)(param_2 + 0xc + local_44 * 4);
        fVar25 = fVar27;
        if ((fVar27 <= fVar15) && (fVar25 = DAT_0050c314, fVar15 <= DAT_0050c314)) {
          fVar25 = fVar15;
        }
        fVar15 = fVar27;
        if ((fVar27 <= fVar20) && (fVar15 = DAT_0050c314, fVar20 <= DAT_0050c314)) {
          fVar15 = fVar20;
        }
        fVar20 = fVar27;
        if ((fVar27 <= fVar24) && (fVar20 = DAT_0050c314, fVar24 <= DAT_0050c314)) {
          fVar20 = fVar24;
        }
        fVar24 = fVar27;
        if ((fVar27 <= fVar19) && (fVar24 = DAT_0050c314, fVar19 <= DAT_0050c314)) {
          fVar24 = fVar19;
        }
        fVar15 = fVar15 * DAT_0050c374;
        fVar20 = fVar20 * DAT_0050c374;
        *(short *)(param_1 + local_44 * 2) = (short)(int)(fVar25 * DAT_0050c374);
        dVar28 = DAT_0050c360;
        *(short *)(param_1 + 2 + local_44 * 2) = (short)(int)fVar15;
        *(short *)(param_1 + 4 + local_44 * 2) = (short)(int)fVar20;
        *(short *)(param_1 + 6 + local_44 * 2) = (short)(int)(fVar24 * fVar21);
        bVar13 = 0xfffffffb < local_44;
        local_44 = local_44 + 4;
        local_c = local_c + bVar13;
        bVar13 = 0xfffffffe < local_1c;
        local_1c = local_1c + 1;
        local_20 = local_20 + bVar13;
      } while ((local_20 < uVar3) || ((local_20 == uVar3 && (local_1c < uVar12))));
    }
    fVar19 = DAT_0050c374;
    if ((local_c <= param_4) && ((local_c < param_4 || (local_44 < param_3)))) {
      if (param_5 == 2) {
        while( true ) {
          do {
            iVar4 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
            DAT_0053fc54 = (iVar4 * 0xbc8f) % 0x7fffffff;
            fVar20 = (float)((double)iVar4 / dVar28) * (0.0 - local_8) + local_8 +
                     (float)((double)DAT_0053fc54 / dVar28) * (local_4 - 0.0) + 0.0 +
                     *(float *)(param_2 + local_44 * 4);
            fVar21 = fVar27;
            if ((fVar27 <= fVar20) && (fVar21 = DAT_0050c314, fVar20 <= DAT_0050c314)) {
              fVar21 = fVar20;
            }
            *(short *)(param_1 + local_44 * 2) = (short)(int)(fVar21 * fVar19);
            bVar13 = 0xfffffffe < local_44;
            local_44 = local_44 + 1;
            local_c = local_c + bVar13;
          } while (local_c < param_4);
          if (param_4 < local_c) break;
          if (param_3 <= local_44) {
            return;
          }
        }
      }
      else {
        do {
          if (param_5 == 1) {
            DAT_0053fc54 = (DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
            fVar19 = (float)((double)DAT_0053fc54 / dVar28) * (local_4 - local_8) + local_8;
          }
          else {
            fVar19 = 0.0;
          }
          fVar19 = fVar19 + *(float *)(param_2 + local_44 * 4);
          fVar20 = fVar27;
          if ((fVar27 <= fVar19) && (fVar20 = DAT_0050c314, fVar19 <= DAT_0050c314)) {
            fVar20 = fVar19;
          }
          *(short *)(param_1 + local_44 * 2) = (short)(int)(fVar20 * fVar21);
          bVar13 = 0xfffffffe < local_44;
          local_44 = local_44 + 1;
          local_c = local_c + bVar13;
        } while ((local_c < param_4) || ((local_c <= param_4 && (local_44 < param_3))));
      }
    }
  }
  return;
}


