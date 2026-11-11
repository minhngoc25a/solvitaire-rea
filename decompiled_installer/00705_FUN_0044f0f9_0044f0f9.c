// Function: FUN_0044f0f9
// Entry: 0044f0f9
// Size: 857 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0044f29d) */
/* WARNING: Removing unreachable block (ram,0x0044f3c2) */

SLD_STATUS __cdecl
FUN_0044f0f9(uint param_1,uint param_2,int param_3,bool param_4,char param_5,
            floating_point_value *param_6)

{
  floating_point_value fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  SLD_STATUS SVar9;
  float *pfVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_c;
  
  uVar13 = 0;
  uVar16 = CONCAT44(param_2,param_1);
  if (param_2 == 0) {
    iVar12 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (param_1 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + 1;
    }
  }
  else {
    iVar12 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (param_2 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + 1;
    }
    iVar12 = iVar12 + 0x20;
  }
  fVar1 = param_6[4];
  iVar12 = (((fVar1 == (floating_point_value)0x0) - 1 & 0x1d) + 0x18) - iVar12;
  local_c = param_3 - iVar12;
  iVar6 = ((fVar1 == (floating_point_value)0x0) - 1 & 0x380) + 0x7f;
  if (iVar6 < local_c) {
LAB_0044f3ea:
    __crt_strtox::assemble_floating_point_infinity(param_4,param_6);
    SVar9 = 3;
  }
  else {
    if (local_c < (int)(((fVar1 == (floating_point_value)0x0) - 1 & 0xfffffc80) - 0x7e)) {
      local_c = -iVar6;
      iVar6 = param_3 + -1 + iVar6;
      if (iVar6 < 0) {
        if (0x3f < (uint)-iVar6) {
LAB_0044f2b4:
          __crt_strtox::assemble_floating_point_zero(param_4,param_6);
          return 2;
        }
        bVar11 = (byte)-iVar6;
        lVar14 = __allshl(bVar11 - 1,0);
        lVar15 = __allshl(bVar11,0);
        bVar2 = ((uint)lVar14 & param_1) != 0;
        bVar3 = ((uint)((ulonglong)lVar14 >> 0x20) & param_2) != 0;
        if ((param_5 == '\0') ||
           (((uint)(lVar14 + -1) & param_1) != 0 ||
            ((uint)((ulonglong)(lVar14 + -1) >> 0x20) & param_2) != 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        else {
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((bVar2 || bVar3) &&
               ((bVar5 || (((uint)lVar15 & param_1) != 0 ||
                           ((uint)((ulonglong)lVar15 >> 0x20) & param_2) != 0)))) {
              uVar13 = 1;
            }
          }
          else if (iVar7 == 0x100) {
            uVar13 = (uint)param_4;
          }
          else if (iVar7 == 0x200) {
            uVar13 = (uint)!param_4;
          }
        }
        uVar16 = __aullshr(bVar11,param_2);
        uVar16 = uVar16 + uVar13;
        if (uVar16 == 0) goto LAB_0044f2b4;
        uVar17 = FUN_0044f04c((int)param_6);
        if (uVar17 < uVar16) {
          local_c = ((param_3 - iVar6) - iVar12) + -1;
        }
      }
      else {
        bVar11 = (byte)iVar6;
LAB_0044f402:
        uVar16 = __allshl(bVar11,param_2);
      }
    }
    else if (iVar12 < 0) {
      if ((uint)-iVar12 < 0x40) {
        bVar11 = (byte)-iVar12;
        lVar14 = __allshl(bVar11 - 1,0);
        lVar15 = __allshl(bVar11,0);
        local_28 = (uint)lVar14;
        local_24 = (uint)((ulonglong)lVar14 >> 0x20);
        bVar2 = (local_28 & param_1) != 0;
        bVar3 = (local_24 & param_2) != 0;
        if (param_5 == '\0') {
LAB_0044f35a:
          bVar4 = true;
          bVar5 = true;
        }
        else {
          local_20 = (uint)(lVar14 + -1);
          local_1c = (uint)((ulonglong)(lVar14 + -1) >> 0x20);
          if ((local_20 & param_1) != 0 || (local_1c & param_2) != 0) goto LAB_0044f35a;
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar12 = fegetround();
          if (iVar12 == 0) {
            if ((bVar2 || bVar3) &&
               ((bVar5 || (((uint)lVar15 & param_1) != 0 ||
                           ((uint)((ulonglong)lVar15 >> 0x20) & param_2) != 0)))) {
              uVar13 = 1;
            }
          }
          else if (iVar12 == 0x100) {
            uVar13 = (uint)param_4;
          }
          else if (iVar12 == 0x200) {
            uVar13 = (uint)!param_4;
          }
        }
        uVar16 = __aullshr(bVar11,param_2);
        uVar16 = uVar16 + uVar13;
      }
      else {
        uVar16 = 0;
      }
      uVar17 = FUN_0044f035((int)param_6);
      if (uVar17 < uVar16) {
        uVar16 = uVar16 >> 1;
        local_c = local_c + 1;
        if ((int)(((param_6[4] == (floating_point_value)0x0) - 1 & 0x380) + 0x7f) < local_c)
        goto LAB_0044f3ea;
      }
    }
    else if (0 < iVar12) {
      bVar11 = (byte)iVar12;
      goto LAB_0044f402;
    }
    uVar17 = FUN_0044f04c((int)param_6);
    if (param_6[4] == (floating_point_value)0x0) {
      pfVar10 = (float *)FUN_0044f010((undefined4 *)param_6);
      SVar9 = __crt_strtox::assemble_floating_point_value_t<float>
                        (param_4,local_c,uVar16 & uVar17,pfVar10);
    }
    else {
      pdVar8 = (double *)FUN_0044efeb((undefined4 *)param_6);
      SVar9 = __crt_strtox::assemble_floating_point_value_t<double>
                        (param_4,local_c,uVar16 & uVar17,pdVar8);
    }
  }
  return SVar9;
}


