// Function: FUN_004bf6b8
// Entry: 004bf6b8
// Size: 640 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_004bf6b8(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  uint local_24;
  byte bStack_20;
  undefined1 uStack_1f;
  ushort uStack_1e;
  int local_18;
  double local_14;
  uint local_c;
  bool local_7;
  char local_6;
  byte local_5;
  
  uVar8 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_004bfe99();
    uVar8 = param_1 & 0x17;
    goto LAB_004bf917;
  }
  if ((param_1 & param_3 & 4) != 0) {
    FUN_004bfe99();
    uVar8 = param_1 & 0x1b;
    goto LAB_004bf917;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_004bf917;
    dVar2 = *param_2;
    uVar8 = param_1 >> 4 & 1;
    local_c = uVar8;
    if (dVar2 == 0.0) {
LAB_004bf90b:
      FUN_004bfe99();
    }
    else {
      fVar9 = (float10)FUN_004bfd7c(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20),&local_18);
      local_18 = local_18 + -0x600;
      dVar2 = (double)fVar9;
      local_24 = SUB84(dVar2,0);
      bStack_20 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_1f = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_1e = (ushort)((ulonglong)dVar2 >> 0x30);
      if (local_18 < -0x432) {
        fVar9 = (float10)0 * fVar9;
        uVar8 = 1;
      }
      else {
        local_5 = fVar9 < (float10)0;
        uStack_1e = uStack_1e & 0xf | 0x10;
        bVar4 = false;
        local_7 = false;
        local_6 = '\0';
        if (local_18 < -0x3fd) {
          local_18 = -0x3fd - local_18;
          local_6 = '\0';
          do {
            uVar7 = local_24 & 1;
            if ((uVar7 != 0) && (uVar8 == 0)) {
              uVar8 = 1;
            }
            if (local_6 != '\0') {
              bVar4 = true;
            }
            local_24 = local_24 >> 1;
            local_6 = (char)uVar7;
            if ((bStack_20 & 1) != 0) {
              local_24 = local_24 | 0x80000000;
            }
            uVar7 = CONCAT22(uStack_1e,CONCAT11(uStack_1f,bStack_20)) >> 1;
            bStack_20 = (byte)uVar7;
            uStack_1f = (undefined1)(uVar7 >> 8);
            uStack_1e = uStack_1e >> 1;
            local_18 = local_18 + -1;
            local_c = uVar8;
            local_7 = bVar4;
          } while (local_18 != 0);
        }
        local_14 = (double)CONCAT26(uStack_1e,CONCAT15(uStack_1f,CONCAT14(bStack_20,local_24)));
        fVar9 = (float10)local_14;
        if ((bool)local_5) {
          fVar9 = -fVar9;
          local_14 = (double)fVar9;
          dVar2 = (double)fVar9;
          local_24 = SUB84(dVar2,0);
          bStack_20 = (byte)((ulonglong)dVar2 >> 0x20);
          uStack_1f = (undefined1)((ulonglong)dVar2 >> 0x28);
          uStack_1e = (ushort)((ulonglong)dVar2 >> 0x30);
        }
        if ((local_6 != '\0') || (uVar8 = local_c, local_7)) {
          iVar6 = fegetround();
          uVar8 = local_c;
          if (iVar6 == 0) {
            if (local_6 == '\0') goto LAB_004bf8f8;
            if (local_7 == false) {
              bVar3 = (byte)local_24 & 1;
              goto LAB_004bf8e7;
            }
          }
          else {
            bVar3 = local_5;
            if (iVar6 != 0x100) {
              if (iVar6 != 0x200) goto LAB_004bf8f8;
              bVar3 = local_5 ^ 1;
            }
LAB_004bf8e7:
            if (bVar3 == 0) {
LAB_004bf8f8:
              fVar9 = (float10)local_14;
              goto LAB_004bf8fe;
            }
          }
          iVar6 = CONCAT22(uStack_1e,CONCAT11(uStack_1f,bStack_20)) + (uint)(0xfffffffe < local_24);
          bStack_20 = (byte)iVar6;
          uStack_1f = (undefined1)((uint)iVar6 >> 8);
          uStack_1e = (ushort)((uint)iVar6 >> 0x10);
          fVar9 = (float10)(double)CONCAT26(uStack_1e,
                                            CONCAT15(uStack_1f,CONCAT14(bStack_20,local_24 + 1)));
        }
      }
LAB_004bf8fe:
      *param_2 = (double)fVar9;
      if (uVar8 != 0) goto LAB_004bf90b;
    }
    uVar8 = param_1 & 0x1d;
    goto LAB_004bf917;
  }
  FUN_004bfe99();
  uVar8 = param_3 & 0xc00;
  dVar2 = _DAT_0051a650;
  dVar5 = _DAT_0051a650;
  if (uVar8 == 0) {
    dVar1 = *param_2;
joined_r0x004bf759:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar8 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_0051a660;
      goto joined_r0x004bf759;
    }
    dVar5 = _DAT_0051a660;
    if (uVar8 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x004bf759;
    }
    if (uVar8 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_0051a660;
      goto joined_r0x004bf759;
    }
  }
  uVar8 = param_1 & 0x1e;
LAB_004bf917:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_004bfe99();
    uVar8 = uVar8 & 0xffffffef;
  }
  return uVar8 == 0;
}


