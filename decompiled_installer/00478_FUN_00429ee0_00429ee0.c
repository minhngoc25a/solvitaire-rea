// Function: FUN_00429ee0
// Entry: 00429ee0
// Size: 2782 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_00429ee0(uint *param_1,int param_2,float *param_3,float *param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  float *pfVar5;
  uint *extraout_ECX;
  uint *puVar6;
  int iVar7;
  void *extraout_ECX_00;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  void *pvVar19;
  float fVar20;
  void *local_a4;
  float local_a0;
  undefined8 local_98;
  void *local_90;
  char *local_88;
  float local_84;
  void *local_80;
  float *local_7c;
  char *local_78;
  float *local_74;
  float *local_70;
  uint local_6c;
  undefined8 local_68;
  void *local_60;
  float local_54;
  undefined8 local_50;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  local_88 = (char *)param_1[2];
  local_78 = *(char **)(param_2 + 4);
  LOCK();
  uVar8 = param_1[3];
  if (uVar8 == 0) {
    param_1[3] = 0;
    uVar8 = 0;
  }
  UNLOCK();
  if (uVar8 == 0) {
    uVar8 = param_1[1];
    if (*(int *)(param_2 + 0x58) == 0) {
      FUN_00431f80(param_3,param_5,param_6,5,uVar8);
    }
    else {
      uVar3 = *param_1;
      if (uVar3 == uVar8) {
        FUN_00431ec0((uint *)param_3,(uint *)param_4,param_5,param_6,5,uVar3);
      }
      else {
        FUN_00442af0(param_3,local_78,uVar8,param_4,local_88,uVar3,param_5,param_6,0,0);
      }
    }
    goto LAB_00429f36;
  }
  local_84 = (float)*param_1;
  local_6c = param_1[1];
  LOCK();
  pfVar5 = (float *)param_1[8];
  if (pfVar5 == (float *)0x0) {
    param_1[8] = 0;
    pfVar5 = (float *)0x0;
  }
  UNLOCK();
  LOCK();
  local_74 = (float *)param_1[9];
  if (local_74 == (float *)0x0) {
    param_1[9] = 0;
    local_74 = (float *)0x0;
  }
  UNLOCK();
  LOCK();
  local_70 = (float *)param_1[10];
  if (local_70 == (float *)0x0) {
    param_1[10] = 0;
    local_70 = (float *)0x0;
  }
  UNLOCK();
  LOCK();
  local_40 = (float)param_1[0xe];
  if (local_40 == 0.0) {
    param_1[0xe] = 0;
    local_40 = 0.0;
  }
  UNLOCK();
  FUN_0042fa20((int *)(param_2 + 0x54));
  local_28 = *(undefined8 *)(param_2 + 0x48);
  local_20 = *(float *)(param_2 + 0x50);
  if ((undefined4 *)(param_2 + 0x54) != (undefined4 *)0x0) {
    LOCK();
    *(undefined4 *)(param_2 + 0x54) = 0;
    UNLOCK();
  }
  local_54 = *(float *)(param_2 + 0x18);
  LOCK();
  uVar8 = param_1[4];
  if (uVar8 == 0) {
    param_1[4] = 0;
    uVar8 = 0;
  }
  UNLOCK();
  if (uVar8 == 1) {
    FUN_0042fa20((int *)(param_1 + 0x14));
    local_68 = *(undefined8 *)(param_1 + 0x11);
    local_80 = (void *)param_1[0x13];
    if (param_1 + 0x14 != (uint *)0x0) {
      LOCK();
      param_1[0x14] = 0;
      UNLOCK();
    }
    local_60 = local_80;
    local_30 = local_68;
    FUN_0042fa20((int *)(param_1 + 0x18));
    local_50 = *(undefined8 *)(param_1 + 0x15);
    puVar6 = param_1 + 0x18;
    local_a4 = (void *)param_1[0x17];
    if (puVar6 != (uint *)0x0) {
      LOCK();
      *puVar6 = 0;
      UNLOCK();
    }
  }
  else {
    FUN_0042a9d0((int)param_1,param_2,(float *)&local_68,(float *)&local_98);
    local_30 = local_68;
    local_80 = local_60;
    local_a4 = local_90;
    local_50 = local_98;
    puVar6 = extraout_ECX;
  }
  dVar14 = (double)(local_68._4_4_ * local_68._4_4_ + (float)local_68 * (float)local_68 +
                   (float)local_60 * (float)local_60);
  if (dVar14 < 0.0) {
    __libm_sse2_sqrt_precise(puVar6);
  }
  else {
    dVar14 = SQRT(dVar14);
  }
  local_7c = (float *)(float)dVar14;
  LOCK();
  uVar8 = param_1[3];
  if (uVar8 == 0) {
    param_1[3] = 0;
    uVar8 = 0;
  }
  UNLOCK();
  local_a0 = DAT_0050c314;
  switch(uVar8) {
  default:
switchD_0042a127_caseD_0:
    break;
  case 1:
    if ((float)pfVar5 < (float)local_74) {
      pfVar16 = local_7c;
      if ((float)local_74 <= (float)local_7c) {
        pfVar16 = local_74;
      }
      if ((float)pfVar16 < (float)pfVar5) {
        pfVar16 = pfVar5;
      }
      local_a0 = (float)pfVar5 /
                 (((float)pfVar16 - (float)pfVar5) * (float)local_70 + (float)pfVar5);
    }
    break;
  case 2:
    if ((float)local_74 <= (float)pfVar5) goto switchD_0042a127_caseD_0;
    pfVar16 = local_7c;
    if ((float)local_74 <= (float)local_7c) {
      pfVar16 = local_74;
    }
    if ((float)pfVar16 < (float)pfVar5) {
      pfVar16 = pfVar5;
    }
    local_a0 = DAT_0050c314 -
               (((float)pfVar16 - (float)pfVar5) * (float)local_70) /
               ((float)local_74 - (float)pfVar5);
    break;
  case 3:
    if ((float)pfVar5 < (float)local_74) {
      pfVar16 = local_7c;
      if ((float)local_74 <= (float)local_7c) {
        pfVar16 = local_74;
      }
      if ((float)pfVar16 < (float)pfVar5) {
        pfVar16 = pfVar5;
      }
      dVar14 = (double)((float)pfVar16 / (float)pfVar5);
      FUN_00483370(0);
      local_a0 = (float)dVar14;
    }
  }
  uVar8 = DAT_0050c400;
  if ((float)local_7c <= _DAT_0050c2fc) {
    local_7c = (float *)0x0;
  }
  else {
    fVar11 = DAT_0050c314 / (float)local_7c;
    local_98._4_4_ = (float)((ulonglong)local_30 >> 0x20);
    local_98._4_4_ = local_98._4_4_ * fVar11;
    local_90 = (void *)((float)local_80 * fVar11);
    local_98 = CONCAT44(local_98._4_4_,(float)local_68 * fVar11);
    if (0.0 < (float)local_7c) {
      LOCK();
      local_34 = (float)param_1[0xb];
      if (local_34 == 0.0) {
        param_1[0xb] = 0;
        local_34 = 0.0;
      }
      UNLOCK();
      LOCK();
      local_38 = (float)param_1[0xc];
      if (local_38 == 0.0) {
        param_1[0xc] = 0;
        local_38 = 0.0;
      }
      UNLOCK();
      LOCK();
      local_3c = (float)param_1[0xd];
      if (local_3c == 0.0) {
        param_1[0xd] = 0;
        local_3c = 0.0;
      }
      UNLOCK();
      local_10 = (float)((uint)local_90 ^ uVar8);
      fVar10 = FUN_00443890(local_a4,(float)local_50,(float)((ulonglong)local_50 >> 0x20),
                            (float)local_a4,(float)((uint)((float)local_68 * fVar11) ^ uVar8),
                            (float)((uint)local_98._4_4_ ^ uVar8),local_10,local_34,local_38,
                            local_3c);
      local_a0 = (float)(fVar10 * (float10)local_a0);
      if (*(float *)(param_2 + 0xc) < DAT_0050c348) {
        local_50 = 0;
        local_48 = -1.0;
        if (*(int *)(param_2 + 8) != 0) {
          local_48 = 1.0;
        }
        fVar10 = FUN_00443890(&stack0xffffff2c,0.0,0.0,local_48,(float)local_98,
                              (float)((ulonglong)local_98 >> 0x20),(float)local_90,
                              *(float *)(param_2 + 0xc),*(float *)(param_2 + 0x10),
                              *(float *)(param_2 + 0x14));
        local_a0 = (float)(fVar10 * (float10)local_a0);
      }
    }
  }
  pfVar5 = (float *)(param_1 + 7);
  LOCK();
  fVar11 = *pfVar5;
  if (fVar11 == 0.0) {
    *pfVar5 = 0.0;
    fVar11 = 0.0;
  }
  UNLOCK();
  fVar18 = local_a0;
  if (fVar11 <= local_a0) {
    LOCK();
    fVar18 = *pfVar5;
    if (fVar18 == 0.0) {
      *pfVar5 = 0.0;
      fVar18 = 0.0;
    }
    UNLOCK();
  }
  LOCK();
  fVar11 = (float)param_1[6];
  if (fVar11 == 0.0) {
    param_1[6] = 0;
    fVar11 = 0.0;
  }
  UNLOCK();
  if (fVar11 <= fVar18) {
    LOCK();
    fVar11 = *pfVar5;
    if (fVar11 == 0.0) {
      *pfVar5 = 0.0;
      fVar11 = 0.0;
    }
    UNLOCK();
    if (fVar11 <= local_a0) {
      LOCK();
      local_a0 = *pfVar5;
      if (local_a0 == 0.0) {
        *pfVar5 = 0.0;
        local_a0 = 0.0;
      }
      UNLOCK();
    }
  }
  else {
    LOCK();
    local_a0 = (float)param_1[6];
    if (local_a0 == 0.0) {
      param_1[6] = 0;
      local_a0 = 0.0;
    }
    UNLOCK();
  }
  uVar8 = 0;
  if (local_6c != 0) {
    if (3 < local_6c) {
      pfVar5 = (float *)(param_1 + 0x27);
      local_74 = (float *)*pfVar5;
      local_70 = local_74 + (local_6c - 1);
      if ((pfVar5 < local_74) || (local_70 < pfVar5)) {
        do {
          uVar8 = uVar8 + 4;
        } while (uVar8 < (local_6c & 0xfffffffc));
        pfVar5 = local_74;
        for (iVar7 = (local_6c >> 2 & 0xfffffff) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar5 = local_a0;
          pfVar5 = pfVar5 + 1;
        }
        if (local_6c <= uVar8) goto LAB_0042a53c;
      }
    }
    puVar6 = param_1 + 0x27;
    if (3 < local_6c - uVar8) {
      do {
        *(float *)(*puVar6 + uVar8 * 4) = local_a0;
        *(float *)(*puVar6 + 4 + uVar8 * 4) = local_a0;
        *(float *)(*puVar6 + 8 + uVar8 * 4) = local_a0;
        *(float *)(*puVar6 + 0xc + uVar8 * 4) = local_a0;
        uVar8 = uVar8 + 4;
      } while (uVar8 < local_6c - 3);
      if (local_6c <= uVar8) goto LAB_0042a53c;
    }
    do {
      *(float *)(*puVar6 + uVar8 * 4) = local_a0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_6c);
  }
LAB_0042a53c:
  if (*(int *)(param_2 + 0x58) == 0) {
    FUN_00431f80(param_3,param_5,param_6,5,param_1[1]);
  }
  else {
    FUN_00442af0(param_3,local_78,local_6c,param_4,local_88,(uint)local_84,param_5,param_6,0,0);
  }
  if (local_78 == (char *)0x0) {
    FID_conflict___assert
              (L"pChannelMapOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc55c);
  }
  fVar11 = 0.0;
  if (0.0 < (float)local_7c) {
    uVar8 = 0;
    local_98 = local_30;
    uVar2 = local_98;
    fVar12 = DAT_0050c314 / (float)local_7c;
    local_90 = local_80;
    local_98._4_4_ = (float)((ulonglong)local_30 >> 0x20);
    local_84 = (float)local_68 * fVar12;
    fVar20 = local_98._4_4_ * fVar12;
    fVar12 = (float)local_80 * fVar12;
    fVar18 = DAT_0050c310;
    fVar15 = DAT_0050c314;
    local_98 = uVar2;
    if (local_6c != 0) {
      do {
        if (local_78 == (char *)0x0) {
          bVar4 = FUN_00448a20(0,local_6c,uVar8);
        }
        else {
          bVar4 = local_78[uVar8];
        }
        fVar13 = fVar15;
        if ((((bVar4 != 0) && (bVar4 != 1)) && (bVar4 != 5)) && (0x1f < (byte)(bVar4 - 0x14))) {
          iVar7 = 0;
          pfVar5 = (float *)(&DAT_0053ffd8 + (uint)bVar4 * 0x18);
          do {
            if (*pfVar5 != fVar11) {
              pvVar19 = DAT_0050c38c;
              fVar13 = fVar11;
              fVar17 = fVar11;
              if (bVar4 < 0x34) {
                uVar2 = *(undefined8 *)(&DAT_0053fd40 + (uint)bVar4 * 0xc);
                local_90 = *(void **)(&DAT_0053fd48 + (uint)bVar4 * 0xc);
                local_98._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                local_98._0_4_ = (float)uVar2;
                pvVar19 = local_90;
                fVar13 = local_98._4_4_;
                fVar17 = (float)local_98;
                local_98 = uVar2;
              }
              LOCK();
              local_88 = (char *)param_1[0xf];
              if (local_88 == (char *)0x0) {
                param_1[0xf] = 0;
                local_88 = (char *)0x0;
              }
              UNLOCK();
              fVar13 = ((fVar13 * fVar20 + fVar17 * local_84 + (float)pvVar19 * fVar12) - fVar15) *
                       (float)local_88 + fVar15;
              break;
            }
            iVar7 = iVar7 + 1;
            pfVar5 = pfVar5 + 1;
          } while (iVar7 < 6);
        }
        fVar13 = (fVar13 + fVar15) * fVar18;
        if (fVar13 <= (float)param_1[0x1e]) {
          fVar13 = (float)param_1[0x1e];
        }
        *(float *)(param_1[0x27] + uVar8 * 4) = fVar13 * *(float *)(param_1[0x27] + uVar8 * 4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_6c);
    }
  }
  local_84 = (float)param_1[0x27];
  puVar6 = param_1 + 0x1f;
  if (puVar6 != (uint *)0x0) {
    if (local_84 != 0.0) {
      uVar8 = 0;
      if (*puVar6 != 0) {
        do {
          uVar3 = param_1[0x23];
          uVar1 = *(undefined4 *)((int)local_84 + uVar8 * 4);
          *(float *)(uVar3 + uVar8 * 4) =
               (*(float *)(param_1[0x24] + uVar8 * 4) - *(float *)(uVar3 + uVar8 * 4)) *
               ((float)((double)(int)param_1[0x21] +
                       (double)(&DAT_0050c3d0)[-((int)param_1[0x21] >> 0x1f)]) /
               (float)((double)(int)param_1[0x20] +
                      (double)(&DAT_0050c3d0)[-((int)param_1[0x20] >> 0x1f)])) +
               *(float *)(uVar3 + uVar8 * 4);
          *(undefined4 *)(param_1[0x24] + uVar8 * 4) = uVar1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar6);
      }
      if (param_1[0x21] == 0xffffffff) {
        param_1[0x21] = param_1[0x20];
      }
      else {
        param_1[0x21] = 0;
      }
    }
    FUN_004421f0(param_1 + 0x1f,(int)param_3,(int)param_3,param_5,param_6);
    fVar11 = 0.0;
  }
  if (fVar11 < local_40) {
    puVar6 = param_1 + 0x14;
    FUN_0042fa20((int *)puVar6);
    local_68 = *(undefined8 *)(param_1 + 0x11);
    local_60 = (void *)param_1[0x13];
    if (puVar6 != (uint *)0x0) {
      LOCK();
      *puVar6 = 0;
      UNLOCK();
    }
    piVar9 = (int *)(param_2 + 0x34);
    FUN_0042fa20(piVar9);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    local_90 = *(void **)(param_2 + 0x30);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = 0;
      UNLOCK();
    }
    local_98._0_4_ = (float)uVar2;
    puVar6 = param_1 + 0x1c;
    fVar11 = (float)local_98 - (float)local_68;
    local_98._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_88 = (char *)(local_98._4_4_ - local_68._4_4_);
    local_80 = (void *)((float)local_90 - (float)local_60);
    local_98 = uVar2;
    FUN_0042fa20((int *)puVar6);
    local_98 = *(undefined8 *)(param_1 + 0x19);
    local_90 = (void *)param_1[0x1b];
    if (puVar6 != (uint *)0x0) {
      LOCK();
      *puVar6 = 0;
      UNLOCK();
    }
    dVar14 = (double)((float)local_88 * (float)local_88 + fVar11 * fVar11 +
                     (float)local_80 * (float)local_80);
    if (dVar14 < 0.0) {
      __libm_sse2_sqrt_precise(extraout_ECX_00);
    }
    else {
      dVar14 = SQRT(dVar14);
    }
    fVar18 = (float)dVar14;
    if (fVar18 != 0.0) {
      fVar12 = local_54 / local_40;
      fVar15 = (local_28._4_4_ * (float)local_88 + (float)local_28 * fVar11 +
               local_20 * (float)local_80) / fVar18;
      if (fVar12 <= fVar15) {
        fVar15 = fVar12;
      }
      fVar18 = (local_98._4_4_ * (float)local_88 + (float)local_98 * fVar11 +
               (float)local_90 * (float)local_80) / fVar18;
      if (fVar12 <= fVar18) {
        fVar18 = fVar12;
      }
      param_1[0x1d] = (uint)((local_54 - fVar15 * local_40) / (local_54 - fVar18 * local_40));
      return 0;
    }
  }
LAB_00429f36:
  param_1[0x1d] = (uint)DAT_0050c314;
  return 0;
}


